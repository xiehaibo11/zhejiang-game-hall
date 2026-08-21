package com.qihoo360.loader2;

import android.R;
import android.content.Context;
import android.content.IntentFilter;
import android.content.pm.ActivityInfo;
import android.content.pm.ApplicationInfo;
import android.content.pm.ComponentInfo;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import android.util.Log;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.qihoo360.i.Factory;
import com.qihoo360.i.IModule;
import com.qihoo360.loader2.IPlugin;
import com.qihoo360.loader2.IPluginHost;
import com.qihoo360.mobilesafe.core.BuildConfig;
import com.qihoo360.mobilesafe.parser.manifest.ManifestParser;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.component.receiver.PluginReceiverProxy;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import java.io.File;
import java.lang.ref.WeakReference;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class Loader {
    ProxyPlugin mBinderPlugin;
    ClassLoader mClassLoader;
    ComponentList mComponents;
    private final Context mContext;
    Method mCreateMethod;
    Method mCreateMethod2;
    PackageInfo mPackageInfo;
    final String mPath;
    Context mPkgContext;
    Resources mPkgResources;
    com.qihoo360.i.IPlugin mPlugin;
    IPluginHost mPluginHost;
    private final String mPluginName;
    final Plugin mPluginObj;
    HashSet<String> mIgnores = new HashSet<>();
    HashMap<String, Constructor<?>> mConstructors = new HashMap<>();

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static class ProxyPlugin implements com.qihoo360.i.IPlugin {
        IPlugin mPlugin;

        ProxyPlugin(IBinder iBinder) {
            this.mPlugin = IPlugin.Stub.asInterface(iBinder);
        }

        @Override
        public IModule query(Class<? extends IModule> cls) {
            try {
                this.mPlugin.query(cls.getName());
                return null;
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "query(" + cls + ") exception: " + th.getMessage(), th);
                return null;
            }
        }
    }

    Loader(Context context, String str, String str2, Plugin plugin) {
        this.mContext = context;
        this.mPluginName = str;
        this.mPath = str2;
        this.mPluginObj = plugin;
    }

    final boolean isPackageInfoLoaded() {
        return this.mPackageInfo != null;
    }

    final boolean isResourcesLoaded() {
        return isPackageInfoLoaded() && this.mPkgResources != null;
    }

    final boolean isDexLoaded() {
        return isResourcesLoaded() && this.mClassLoader != null;
    }

    final boolean isAppLoaded() {
        return this.mPlugin != null;
    }

    final Context createBaseContext(Context context) {
        return new PluginContext(context, R.style.Theme, this.mClassLoader, this.mPkgResources, this.mPluginName, this);
    }

    final boolean loadDex(ClassLoader classLoader, int i) {
        ClassLoader parent;
        boolean z;
        long jCurrentTimeMillis;
        try {
            PackageManager packageManager = this.mContext.getPackageManager();
            PackageInfo packageInfoQueryCachedPackageInfo = Plugin.queryCachedPackageInfo(this.mPath);
            this.mPackageInfo = packageInfoQueryCachedPackageInfo;
            if (packageInfoQueryCachedPackageInfo == null) {
                PackageInfo packageArchiveInfo = packageManager.getPackageArchiveInfo(this.mPath, 143);
                this.mPackageInfo = packageArchiveInfo;
                if (packageArchiveInfo != null && packageArchiveInfo.applicationInfo != null) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "get package archive info, pi=" + this.mPackageInfo);
                    }
                    this.mPackageInfo.applicationInfo.sourceDir = this.mPath;
                    this.mPackageInfo.applicationInfo.publicSourceDir = this.mPath;
                    if (TextUtils.isEmpty(this.mPackageInfo.applicationInfo.processName)) {
                        this.mPackageInfo.applicationInfo.processName = this.mPackageInfo.applicationInfo.packageName;
                    }
                    this.mPackageInfo.applicationInfo.nativeLibraryDir = this.mPluginObj.mInfo.getNativeLibsDir().getAbsolutePath();
                    synchronized (Plugin.PKG_NAME_2_PLUGIN_NAME) {
                        Plugin.PKG_NAME_2_PLUGIN_NAME.put(this.mPackageInfo.packageName, this.mPluginName);
                    }
                    synchronized (Plugin.PLUGIN_NAME_2_FILENAME) {
                        Plugin.PLUGIN_NAME_2_FILENAME.put(this.mPluginName, this.mPath);
                    }
                    synchronized (Plugin.FILENAME_2_PACKAGE_INFO) {
                        Plugin.FILENAME_2_PACKAGE_INFO.put(this.mPath, new WeakReference<>(this.mPackageInfo));
                    }
                }
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "get package archive info null");
                }
                this.mPackageInfo = null;
                return false;
            }
            if (this.mPluginObj.mInfo.getFrameworkVersion() == 0) {
                this.mPluginObj.mInfo.setFrameworkVersionByMeta(this.mPackageInfo.applicationInfo.metaData);
            }
            ComponentList componentListQueryCachedComponentList = Plugin.queryCachedComponentList(this.mPath);
            this.mComponents = componentListQueryCachedComponentList;
            if (componentListQueryCachedComponentList == null) {
                this.mComponents = new ComponentList(this.mPackageInfo, this.mPath, this.mPluginObj.mInfo);
                regReceivers();
                synchronized (Plugin.FILENAME_2_COMPONENT_LIST) {
                    Plugin.FILENAME_2_COMPONENT_LIST.put(this.mPath, new WeakReference<>(this.mComponents));
                }
                adjustPluginProcess(this.mPackageInfo.applicationInfo);
                adjustPluginTaskAffinity(this.mPluginName, this.mPackageInfo.applicationInfo);
            }
            if (i == 0) {
                return isPackageInfoLoaded();
            }
            Resources resourcesQueryCachedResources = Plugin.queryCachedResources(this.mPath);
            this.mPkgResources = resourcesQueryCachedResources;
            if (resourcesQueryCachedResources == null) {
                try {
                    if (BuildConfig.DEBUG) {
                        Resources resourcesForApplication = packageManager.getResourcesForApplication(this.mPackageInfo.applicationInfo);
                        this.mPkgResources = new Resources(resourcesForApplication.getAssets(), resourcesForApplication.getDisplayMetrics(), resourcesForApplication.getConfiguration());
                    } else {
                        this.mPkgResources = packageManager.getResourcesForApplication(this.mPackageInfo.applicationInfo);
                    }
                    if (this.mPkgResources == null) {
                        if (LogDebug.LOG) {
                            LogDebug.d(LogDebug.PLUGIN_TAG, "get resources null");
                        }
                        return false;
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "get resources for app, r=" + this.mPkgResources);
                    }
                    synchronized (Plugin.FILENAME_2_RESOURCES) {
                        Plugin.FILENAME_2_RESOURCES.put(this.mPath, new WeakReference<>(this.mPkgResources));
                    }
                } catch (PackageManager.NameNotFoundException e) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, e.getMessage(), e);
                    }
                    return false;
                }
            }
            if (i == 1) {
                return isResourcesLoaded();
            }
            ClassLoader classLoaderQueryCachedClassLoader = Plugin.queryCachedClassLoader(this.mPath);
            this.mClassLoader = classLoaderQueryCachedClassLoader;
            if (classLoaderQueryCachedClassLoader == null) {
                String path = this.mPluginObj.mInfo.getDexParentDir().getPath();
                Log.i("dex", "load " + this.mPath + " ...");
                if (BuildConfig.DEBUG) {
                    parent = ClassLoader.getSystemClassLoader();
                } else {
                    parent = getClass().getClassLoader().getParent();
                }
                ClassLoader classLoader2 = parent;
                String str = this.mPackageInfo.applicationInfo.nativeLibraryDir;
                if (LogDebug.LOG) {
                    jCurrentTimeMillis = System.currentTimeMillis();
                    File dexFile = this.mPluginObj.mInfo.getDexFile();
                    z = dexFile.exists() && dexFile.length() > 0;
                } else {
                    z = false;
                    jCurrentTimeMillis = 0;
                }
                this.mClassLoader = RePlugin.getConfig().getCallbacks().createPluginClassLoader(this.mPluginObj.mInfo, this.mPath, path, str, classLoader2);
                Log.i("dex", "load " + this.mPath + " = " + this.mClassLoader);
                if (this.mClassLoader == null) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "get dex null");
                    }
                    return false;
                }
                if (LogDebug.LOG) {
                    if (!z) {
                        Log.d(LogDebug.LOADER_TAG, " --释放DEX, (plugin=" + this.mPluginName + ", version=" + this.mPluginObj.mInfo.getVersion() + "), use:" + (System.currentTimeMillis() - jCurrentTimeMillis) + ", process:" + IPC.getCurrentProcessName());
                    } else {
                        Log.d(LogDebug.LOADER_TAG, " --无需释放DEX, (plugin=" + this.mPluginName + ", version=" + this.mPluginObj.mInfo.getVersion() + "), use:" + (System.currentTimeMillis() - jCurrentTimeMillis) + ", process:" + IPC.getCurrentProcessName());
                    }
                }
                synchronized (Plugin.FILENAME_2_DEX) {
                    Plugin.FILENAME_2_DEX.put(this.mPath, new WeakReference<>(this.mClassLoader));
                }
            }
            if (i == 2) {
                return isDexLoaded();
            }
            this.mPkgContext = new PluginContext(this.mContext, R.style.Theme, this.mClassLoader, this.mPkgResources, this.mPluginName, this);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "pkg context=" + this.mPkgContext);
            }
            return true;
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p=" + this.mPath + " m=" + th.getMessage(), th);
            return false;
        }
    }

    private void regReceivers() throws RemoteException {
        String name = this.mPluginObj.mInfo.getName();
        Map<String, List<IntentFilter>> receiverFilterMap = ManifestParser.INS.getReceiverFilterMap(name);
        if (receiverFilterMap == null || receiverFilterMap.size() == 0) {
            return;
        }
        if (this.mPluginHost == null) {
            this.mPluginHost = getPluginHost();
        }
        IPluginHost iPluginHost = this.mPluginHost;
        if (iPluginHost != null) {
            iPluginHost.regReceiver(name, receiverFilterMap);
        }
    }

    private IPluginHost getPluginHost() {
        IBinder iBinderProxyFetchHostBinder = PluginProviderStub.proxyFetchHostBinder(this.mContext);
        if (iBinderProxyFetchHostBinder == null) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.e(PluginReceiverProxy.TAG, "p.p fhb fail");
            return null;
        }
        return IPluginHost.Stub.asInterface(iBinderProxyFetchHostBinder);
    }

    final boolean loadEntryMethod(boolean z) {
        try {
            String str = "com.qihoo360.plugin." + this.mPluginName + "." + Factory.PLUGIN_ENTRY_CLASS_NAME;
            Class<?> clsLoadClass = this.mClassLoader.loadClass(str);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "found entry: className=" + str + ", loader=" + clsLoadClass.getClassLoader());
            }
            this.mCreateMethod = clsLoadClass.getDeclaredMethod(Factory.PLUGIN_ENTRY_EXPORT_METHOD_NAME, Factory.PLUGIN_ENTRY_EXPORT_METHOD_PARAMS);
        } catch (Throwable th) {
            if (z) {
                LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            } else if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "loadEntryMethod exception");
            }
        }
        return this.mCreateMethod != null;
    }

    final boolean invoke(PluginCommImpl pluginCommImpl) {
        try {
            this.mPlugin = (com.qihoo360.i.IPlugin) this.mCreateMethod.invoke(null, this.mPkgContext, pluginCommImpl);
            if (LogDebug.LOG) {
                StringBuilder sb = new StringBuilder();
                sb.append("Loader.invoke(): plugin=");
                sb.append(this.mPath);
                sb.append(", cl=");
                sb.append(this.mPlugin != null ? this.mPlugin.getClass().getClassLoader() : "null");
                LogDebug.d(LogDebug.PLUGIN_TAG, sb.toString());
            }
            return true;
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            return false;
        }
    }

    final boolean loadEntryMethod2() {
        try {
            String str = "com.qihoo360.plugin." + this.mPluginName + "." + Factory.PLUGIN_ENTRY_CLASS_NAME;
            Class<?> clsLoadClass = this.mClassLoader.loadClass(str);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "found entry: className=" + str + ", loader=" + clsLoadClass.getClassLoader());
            }
            this.mCreateMethod2 = clsLoadClass.getDeclaredMethod(Factory.PLUGIN_ENTRY_EXPORT_METHOD_NAME, Factory.PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS);
        } catch (Throwable unused) {
        }
        return this.mCreateMethod2 != null;
    }

    final boolean loadEntryMethod3() {
        try {
            Class<?> clsLoadClass = this.mClassLoader.loadClass("com.qihoo360.replugin.Entry");
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "found entry: className=com.qihoo360.replugin.Entry, loader=" + clsLoadClass.getClassLoader());
            }
            this.mCreateMethod2 = clsLoadClass.getDeclaredMethod(Factory.PLUGIN_ENTRY_EXPORT_METHOD_NAME, Factory.PLUGIN_ENTRY_EXPORT_METHOD2_PARAMS);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
        }
        return this.mCreateMethod2 != null;
    }

    final boolean invoke2(PluginCommImpl pluginCommImpl) {
        try {
            IBinder iBinder = (IBinder) this.mCreateMethod2.invoke(null, this.mPkgContext, getClass().getClassLoader(), null);
            if (iBinder == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "p.e.r.b n");
                return false;
            }
            ProxyPlugin proxyPlugin = new ProxyPlugin(iBinder);
            this.mBinderPlugin = proxyPlugin;
            this.mPlugin = proxyPlugin;
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "Loader.invoke2(): plugin=" + this.mPath + ", plugin.binder.cl=" + iBinder.getClass().getClassLoader());
            }
            return true;
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            return false;
        }
    }

    private List<String> getHostProcessList() {
        ArrayList arrayList = new ArrayList();
        for (int i = 0; i < 3; i++) {
            arrayList.add(IPC.getPackageName() + PluginProcessHost.PROCESS_PLUGIN_SUFFIX2 + i);
        }
        return arrayList;
    }

    private List<String> getPluginProcessList() {
        HashSet hashSet = new HashSet();
        String str = this.mComponents.getApplication().packageName;
        getPluginProcess(hashSet, this.mComponents.getProviders());
        getPluginProcess(hashSet, this.mComponents.getActivities());
        getPluginProcess(hashSet, this.mComponents.getServices());
        getPluginProcess(hashSet, this.mComponents.getReceivers());
        hashSet.remove(str);
        return Arrays.asList(hashSet.toArray(new String[0]));
    }

    private void getPluginProcess(Set<String> set, ComponentInfo[] componentInfoArr) {
        if (componentInfoArr != null) {
            for (ComponentInfo componentInfo : componentInfoArr) {
                set.add(componentInfo.processName);
            }
        }
    }

    private HashMap<String, String> genDynamicProcessMap() {
        HashMap<String, String> map = new HashMap<>();
        List<String> hostProcessList = getHostProcessList();
        List<String> pluginProcessList = getPluginProcessList();
        int size = hostProcessList != null ? hostProcessList.size() : 0;
        if (size <= 0) {
            return map;
        }
        int size2 = pluginProcessList != null ? pluginProcessList.size() : 0;
        for (int i = 0; i < size2; i++) {
            map.put(pluginProcessList.get(i), hostProcessList.get(i % size));
        }
        return map;
    }

    private HashMap<String, String> getConfigProcessMap(ApplicationInfo applicationInfo) {
        HashMap<String, String> map = new HashMap<>();
        Bundle bundle = applicationInfo.metaData;
        if (bundle != null && !TextUtils.isEmpty(bundle.getString("process_map"))) {
            try {
                JSONArray jSONArray = new JSONArray(bundle.getString("process_map"));
                for (int i = 0; i < jSONArray.length(); i++) {
                    JSONObject jSONObject = (JSONObject) jSONArray.get(i);
                    if (jSONObject != null) {
                        String lowerCase = jSONObject.getString(RemoteMessageConst.TO).toLowerCase();
                        if (lowerCase.equals("$ui")) {
                            lowerCase = IPC.getPackageName();
                        } else if (lowerCase.contains("$p")) {
                            lowerCase = PluginProcessHost.PROCESS_ADJUST_MAP.get(lowerCase);
                        }
                        map.put(jSONObject.getString("from"), lowerCase);
                    }
                }
            } catch (JSONException e) {
                if (BuildConfig.DEBUG) {
                    e.printStackTrace();
                }
            }
        }
        return map;
    }

    private void adjustPluginProcess(ApplicationInfo applicationInfo) {
        PluginInfo plugin;
        HashMap<String, String> configProcessMap = getConfigProcessMap(applicationInfo);
        if ((configProcessMap == null || configProcessMap.isEmpty()) && (plugin = MP.getPlugin(this.mPluginName, false)) != null && plugin.getFrameworkVersion() >= 4) {
            configProcessMap = genDynamicProcessMap();
        }
        if (LogDebug.LOG) {
            Log.d(LogDebug.PLUGIN_TAG, "--- 调整插件中组件的进程 BEGIN ---");
            for (Map.Entry<String, String> entry : configProcessMap.entrySet()) {
                Log.d(LogDebug.PLUGIN_TAG, entry.getKey() + " -> " + entry.getValue());
            }
        }
        doAdjust(configProcessMap, this.mComponents.getActivityMap());
        doAdjust(configProcessMap, this.mComponents.getServiceMap());
        doAdjust(configProcessMap, this.mComponents.getReceiverMap());
        doAdjust(configProcessMap, this.mComponents.getProviderMap());
        if (LogDebug.LOG) {
            Log.d(LogDebug.PLUGIN_TAG, "--- 调整插件中组件的进程 END --- " + IPC.getCurrentProcessName());
        }
    }

    private void doAdjust(HashMap<String, String> map, HashMap<String, ? extends ComponentInfo> map2) {
        if (map == null || map.isEmpty()) {
            return;
        }
        Iterator<Map.Entry<String, ? extends ComponentInfo>> it = map2.entrySet().iterator();
        while (it.hasNext()) {
            ComponentInfo value = it.next().getValue();
            if (value != null) {
                String str = map.get(value.processName);
                if (!TextUtils.isEmpty(str)) {
                    if (LogDebug.LOG) {
                        Log.d(TaskAffinityStates.TAG, String.format("--- 调整组件 %s, %s -> %s", value.name, value.processName, str));
                    }
                    value.processName = str;
                }
            }
        }
    }

    private void adjustPluginTaskAffinity(String str, ApplicationInfo applicationInfo) {
        Bundle bundle;
        if (applicationInfo == null || (bundle = applicationInfo.metaData) == null) {
            return;
        }
        boolean z = bundle.getBoolean("use_default_task_affinity", true);
        if (LogDebug.LOG) {
            LogDebug.d(TaskAffinityStates.TAG, "useDefault = " + z);
        }
        if (z) {
            return;
        }
        if (LogDebug.LOG) {
            LogDebug.d(TaskAffinityStates.TAG, String.format("替换插件 %s 中默认的 TaskAffinity", str));
        }
        String str2 = applicationInfo.packageName;
        Iterator<Map.Entry<String, ActivityInfo>> it = this.mComponents.getActivityMap().entrySet().iterator();
        while (it.hasNext()) {
            ActivityInfo value = it.next().getValue();
            if (LogDebug.LOG && value != null) {
                LogDebug.d(TaskAffinityStates.TAG, String.format("%s.taskAffinity = %s ", value.name, value.taskAffinity));
            }
            if (value != null && value.taskAffinity.equals(str2)) {
                value.taskAffinity += "." + str;
                if (LogDebug.LOG) {
                    LogDebug.d(TaskAffinityStates.TAG, String.format("修改 %s 的 TaskAffinity 为 %s", value.name, value.taskAffinity));
                }
            }
        }
    }
}

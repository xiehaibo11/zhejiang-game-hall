package com.qihoo360.loader2;

import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ProviderInfo;
import android.content.pm.ServiceInfo;
import android.os.IBinder;
import android.os.Parcelable;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.i.Factory;
import com.qihoo360.i.IModule;
import com.qihoo360.i.IPluginManager;
import com.qihoo360.loader2.Builder;
import com.qihoo360.mobilesafe.api.Tasks;
import com.qihoo360.replugin.IHostBinderFetcher;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginConstants;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import com.qihoo360.replugin.component.activity.DynamicClassProxyActivity;
import com.qihoo360.replugin.component.dummy.DummyActivity;
import com.qihoo360.replugin.component.dummy.DummyProvider;
import com.qihoo360.replugin.component.dummy.DummyService;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.component.service.server.PluginPitService;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.packages.PluginInfoUpdater;
import com.qihoo360.replugin.packages.PluginManagerProxy;
import com.qihoo360.replugin.utils.ReflectUtils;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PmBase {
    static final String ACTION_NEW_PLUGIN = "ACTION_NEW_PLUGIN";
    private static final String CONTAINER_PROVIDER_PART = ".loader.p.Provider";
    static final String CONTAINER_SERVICE_PART = ".loader.s.Service";
    private static final byte[] LOCKER = new byte[0];
    private static final String TAG = "PmBase";
    Builder.PxAll mAll;
    private ClassLoader mClassLoader;
    PluginProcessPer mClient;
    private final Context mContext;
    private Plugin mDefaultPlugin;
    private String mDefaultPluginName;
    private PmHostSvc mHostSvc;
    PluginLibraryInternalProxy mInternal;
    PluginCommImpl mLocal;
    long mLocalCookie;
    private boolean mNeedRestart;
    private final HashSet<String> mContainerActivities = new HashSet<>();
    private final HashSet<String> mContainerProviders = new HashSet<>();
    private final HashSet<String> mContainerServices = new HashSet<>();
    private final HashMap<String, HashMap<String, IModule>> mBuiltinModules = new HashMap<>();
    private final Map<String, Plugin> mPlugins = new ConcurrentHashMap();
    private final HashMap<String, IHostBinderFetcher> mBuiltinPlugins = new HashMap<>();
    private final HashMap<String, DynamicClass> mDynamicClasses = new HashMap<>();
    private BroadcastReceiver mBroadcastReceiver = new BroadcastReceiver() {
        @Override
        public void onReceive(Context context, Intent intent) {
            PluginInfo pluginInfo;
            String action = intent.getAction();
            if (TextUtils.isEmpty(action) || !action.equals(intent.getAction()) || (pluginInfo = (PluginInfo) intent.getParcelableExtra("obj")) == null) {
                return;
            }
            byte b = -1;
            int iHashCode = action.hashCode();
            if (iHashCode != 1244662841) {
                if (iHashCode == 2090633339 && action.equals(PmBase.ACTION_NEW_PLUGIN)) {
                    b = 0;
                }
            } else if (action.equals(PluginInfoUpdater.ACTION_UNINSTALL_PLUGIN)) {
                b = 1;
            }
            if (b == 0) {
                PmBase.this.newPluginFound(pluginInfo, intent.getBooleanExtra(RePluginConstants.KEY_PERSIST_NEED_RESTART, false));
            } else {
                if (b != 1) {
                    return;
                }
                PmBase.this.pluginUninstalled(pluginInfo);
            }
        }
    };

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class DynamicClass {
        String className;
        String classType;
        Class defClass;
        String plugin;

        private DynamicClass() {
        }
    }

    static final void cleanIntentPluginParams(Intent intent) {
        try {
            intent.removeExtra(IPluginManager.KEY_COMPATIBLE);
            intent.removeExtra(IPluginManager.KEY_PLUGIN);
            intent.removeExtra("activity");
        } catch (Exception unused) {
        }
    }

    PmBase(Context context) {
        String str;
        this.mContext = context;
        if (PluginManager.sPluginProcessIndex == -1 || PluginManager.isPluginProcess()) {
            if (PluginManager.sPluginProcessIndex == -1) {
                str = "N1";
            } else {
                str = "" + PluginManager.sPluginProcessIndex;
            }
            this.mContainerProviders.add(IPC.getPackageName() + CONTAINER_PROVIDER_PART + str);
            this.mContainerServices.add(IPC.getPackageName() + CONTAINER_SERVICE_PART + str);
        }
        this.mClient = new PluginProcessPer(context, this, PluginManager.sPluginProcessIndex, this.mContainerActivities);
        this.mLocal = new PluginCommImpl(context, this);
        this.mInternal = new PluginLibraryInternalProxy(this);
    }

    void init() {
        RePlugin.getConfig().getCallbacks().initPnPluginOverride();
        if (HostConfigHelper.PERSISTENT_ENABLE) {
            if (IPC.isPersistentProcess()) {
                initForServer();
            } else {
                initForClient();
            }
        } else if (IPC.isUIProcess()) {
            initForServer();
            PMF.sPluginMgr.attach();
        } else {
            initForClient();
        }
        PluginTable.initPlugins(this.mPlugins);
        if (LogDebug.LOG) {
            Iterator<Plugin> it = this.mPlugins.values().iterator();
            while (it.hasNext()) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin: p=" + it.next().mInfo);
            }
        }
    }

    private final void initForServer() {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "search plugins from file system");
        }
        PmHostSvc pmHostSvc = new PmHostSvc(this.mContext, this);
        this.mHostSvc = pmHostSvc;
        PluginProcessMain.installHost(pmHostSvc);
        StubProcessManager.schedulePluginProcessLoop(17000L);
        Builder.PxAll pxAll = new Builder.PxAll();
        this.mAll = pxAll;
        Builder.builder(this.mContext, pxAll);
        refreshPluginMap(this.mAll.getPlugins());
        try {
            List<PluginInfo> listLoad = PluginManagerProxy.load();
            if (listLoad != null) {
                refreshPluginMap(listLoad);
            }
        } catch (RemoteException e) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "lst.p: " + e.getMessage(), e);
        }
    }

    private final void initForClient() {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "list plugins from persistent process");
        }
        PluginProcessMain.connectToHostSvc();
        refreshPluginsFromHostSvc();
    }

    private void refreshPluginsFromHostSvc() {
        List<PluginInfo> listListPlugins;
        List<PluginInfo> listUpdateAllPlugins = null;
        try {
            listListPlugins = PluginProcessMain.getPluginHost().listPlugins();
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "lst.p: " + th.getMessage(), th);
            listListPlugins = null;
        }
        refreshPluginMap(listListPlugins);
        if (isNeedToUpdate(listListPlugins)) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugins need to perform update operations");
            }
            try {
                listUpdateAllPlugins = PluginManagerProxy.updateAllPlugins();
            } catch (RemoteException e) {
                e.printStackTrace();
            }
        }
        if (listUpdateAllPlugins != null) {
            refreshPluginMap(listUpdateAllPlugins);
        }
    }

    private final boolean isNeedToUpdate(List<PluginInfo> list) {
        if (list == null) {
            return false;
        }
        Iterator<PluginInfo> it = list.iterator();
        while (it.hasNext()) {
            if (it.next().getJSON().optJSONObject(PluginInfo.PI_UPINFO) != null) {
                return true;
            }
        }
        return false;
    }

    private final void refreshPluginMap(List<PluginInfo> list) {
        if (list == null) {
            return;
        }
        for (PluginInfo pluginInfo : list) {
            putPluginObject(pluginInfo, Plugin.build(pluginInfo));
        }
    }

    private void putPluginObject(PluginInfo pluginInfo, Plugin plugin) {
        if (this.mPlugins.containsKey(pluginInfo.getAlias()) || this.mPlugins.containsKey(pluginInfo.getPackageName())) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "当前内置插件列表中已经有" + pluginInfo.getName() + "，需要看看谁的版本号大。");
            }
            Plugin plugin2 = this.mPlugins.get(pluginInfo.getPackageName());
            if (plugin2 == null) {
                plugin2 = this.mPlugins.get(pluginInfo.getAlias());
            }
            if (plugin2.mInfo.getVersion() != pluginInfo.getVersion()) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "新传入的纯APK插件, name=" + pluginInfo.getName() + ", 版本号比较大,ver=" + pluginInfo.getVersion() + ",以TA为准。");
                }
                this.mPlugins.put(pluginInfo.getPackageName(), plugin);
                if (TextUtils.isEmpty(pluginInfo.getAlias())) {
                    return;
                }
                this.mPlugins.put(pluginInfo.getAlias(), plugin);
                return;
            }
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "新传入的纯APK插件" + pluginInfo.getName() + "版本号还没有内置的大，什么都不做。");
                return;
            }
            return;
        }
        this.mPlugins.put(pluginInfo.getPackageName(), plugin);
        if (TextUtils.isEmpty(pluginInfo.getAlias())) {
            return;
        }
        this.mPlugins.put(pluginInfo.getAlias(), plugin);
    }

    final void attach() {
        try {
            this.mDefaultPluginName = PluginProcessMain.getPluginHost().attachPluginProcess(IPC.getCurrentProcessName(), PluginManager.sPluginProcessIndex, this.mClient, this.mDefaultPluginName);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "c.n.a: " + th.getMessage(), th);
        }
    }

    final void installBuiltinPlugin(String str, IHostBinderFetcher iHostBinderFetcher) {
        synchronized (this.mBuiltinPlugins) {
            this.mBuiltinPlugins.put(str, iHostBinderFetcher);
        }
    }

    final void callAttach() {
        Plugin plugin;
        this.mClassLoader = PmBase.class.getClassLoader();
        Iterator<Plugin> it = this.mPlugins.values().iterator();
        while (it.hasNext()) {
            it.next().attach(this.mContext, this.mClassLoader, this.mLocal);
        }
        if (!PluginManager.isPluginProcess() || TextUtils.isEmpty(this.mDefaultPluginName) || (plugin = this.mPlugins.get(this.mDefaultPluginName)) == null) {
            return;
        }
        boolean zLoad = plugin.load(3, true);
        if (!zLoad && LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "failed to load default plugin=" + this.mDefaultPluginName);
        }
        if (zLoad) {
            this.mDefaultPlugin = plugin;
            this.mClient.init(plugin);
        }
    }

    final void addBuiltinModule(String str, Class<? extends IModule> cls, IModule iModule) {
        HashMap<String, IModule> map = this.mBuiltinModules.get(str);
        if (map == null) {
            map = new HashMap<>();
            this.mBuiltinModules.put(str, map);
        }
        map.put(cls.getName(), iModule);
    }

    final boolean addDynamicClass(String str, String str2, String str3, String str4, Class cls) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "addDynamicClass: class=" + str + " plugin=" + str2 + " type=" + str3 + " target=" + str4 + " def=" + cls);
        }
        if (this.mDynamicClasses.containsKey(str)) {
            return false;
        }
        DynamicClass dynamicClass = new DynamicClass();
        dynamicClass.plugin = str2;
        dynamicClass.classType = str3;
        dynamicClass.className = str4;
        dynamicClass.defClass = cls;
        this.mDynamicClasses.put(str, dynamicClass);
        return true;
    }

    final boolean isDynamicClass(String str, String str2) {
        DynamicClass dynamicClass;
        if (TextUtils.isEmpty(str2) || TextUtils.isEmpty(str) || (dynamicClass = this.mDynamicClasses.get(str2)) == null) {
            return false;
        }
        return str.equals(dynamicClass.plugin);
    }

    final void removeDynamicClass(String str) {
        this.mDynamicClasses.remove(str);
    }

    final String getPluginByDynamicClass(String str) {
        DynamicClass dynamicClass = this.mDynamicClasses.get(str);
        return dynamicClass != null ? dynamicClass.plugin : "";
    }

    final void callAppCreate() {
        if (IPC.isPersistentProcess()) {
            this.mLocalCookie = PluginProcessMain.getPersistentCookie();
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "initial local cookie=" + this.mLocalCookie);
        }
        if (IPC.isPersistentProcess()) {
            return;
        }
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(ACTION_NEW_PLUGIN);
        intentFilter.addAction(PluginInfoUpdater.ACTION_UNINSTALL_PLUGIN);
        try {
            LocalBroadcastManager.getInstance(this.mContext).registerReceiver(this.mBroadcastReceiver, intentFilter);
        } catch (Exception e) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p m hlc a r e: " + e.getMessage(), e);
        }
    }

    final Class<?> loadClass(String str, boolean z) {
        if (str.startsWith(PluginPitService.class.getName())) {
            if (LogDebug.LOG) {
                LogDebug.i(TAG, "loadClass: Loading PitService Class... clz=" + str);
                return PluginPitService.class;
            }
            return PluginPitService.class;
        }
        if (this.mContainerActivities.contains(str)) {
            Class<?> clsResolveActivityClass = this.mClient.resolveActivityClass(str);
            if (clsResolveActivityClass != null) {
                return clsResolveActivityClass;
            }
            LogRelease.w(LogDebug.PLUGIN_TAG, "p m hlc u d a o " + str);
            return DummyActivity.class;
        }
        if (this.mContainerServices.contains(str)) {
            Class<?> clsLoadServiceClass = loadServiceClass(str);
            if (clsLoadServiceClass != null) {
                return clsLoadServiceClass;
            }
            LogRelease.w(LogDebug.PLUGIN_TAG, "p m hlc u d s o " + str);
            return DummyService.class;
        }
        if (this.mContainerProviders.contains(str)) {
            Class<?> clsLoadProviderClass = loadProviderClass(str);
            if (clsLoadProviderClass != null) {
                return clsLoadProviderClass;
            }
            LogRelease.w(LogDebug.PLUGIN_TAG, "p m hlc u d p o " + str);
            return DummyProvider.class;
        }
        DynamicClass dynamicClass = this.mDynamicClasses.get(str);
        if (dynamicClass != null) {
            final Context appContext = RePluginInternal.getAppContext();
            PluginDesc pluginDesc = PluginDesc.get(dynamicClass.plugin);
            if (LogDebug.LOG) {
                LogDebug.d("loadClass", "desc=" + pluginDesc);
                if (pluginDesc != null) {
                    LogDebug.d("loadClass", "desc.isLarge()=" + pluginDesc.isLarge());
                }
                LogDebug.d("loadClass", "RePlugin.isPluginDexExtracted(" + dynamicClass.plugin + ") = " + RePlugin.isPluginDexExtracted(dynamicClass.plugin));
            }
            if (pluginDesc != null) {
                String pluginName = pluginDesc.getPluginName();
                if (PluginTable.getPluginInfo(pluginName) == null) {
                    if (LogDebug.LOG) {
                        LogDebug.d("loadClass", "plugin=" + pluginName + " not found, return DynamicClassProxyActivity.class");
                        return DynamicClassProxyActivity.class;
                    }
                    return DynamicClassProxyActivity.class;
                }
            }
            boolean z2 = (pluginDesc == null || !pluginDesc.isLarge() || RePlugin.isPluginDexExtracted(dynamicClass.plugin)) ? false : true;
            if (LogDebug.LOG) {
                LogDebug.d("loadClass", "needStartLoadingActivity = " + z2);
            }
            if (z2) {
                Intent intent = new Intent();
                intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                intent.setComponent(new ComponentName(IPC.getPackageName(), "com.qihoo360.loader2.updater.PluginLoadingActivity2"));
                appContext.startActivity(intent);
            }
            Plugin pluginLoadAppPlugin = loadAppPlugin(dynamicClass.plugin);
            if (LogDebug.LOG) {
                LogDebug.d("loadClass", "p=" + pluginLoadAppPlugin);
            }
            if (pluginLoadAppPlugin != null) {
                try {
                    Class<?> clsLoadClass = pluginLoadAppPlugin.getClassLoader().loadClass(dynamicClass.className);
                    if (z2) {
                        Tasks.postDelayed2Thread(new Runnable() {
                            @Override
                            public void run() {
                                if (LogDebug.LOG) {
                                    LogDebug.d("loadClass", "发广播，让 PluginLoadingActivity2 消失");
                                }
                                IPC.sendLocalBroadcast2All(appContext, new Intent("com.qihoo360.replugin.load_large_plugin.dismiss_dlg"));
                            }
                        }, 300L);
                    }
                    return clsLoadClass;
                } catch (Throwable th) {
                    LogRelease.w(LogDebug.PLUGIN_TAG, "p m hlc dc " + str, th);
                }
            } else {
                if (LogDebug.LOG) {
                    LogDebug.d("loadClass", "加载 " + dynamicClass.plugin + " 失败");
                }
                Tasks.postDelayed2Thread(new Runnable() {
                    @Override
                    public void run() {
                        IPC.sendLocalBroadcast2All(appContext, new Intent("com.qihoo360.replugin.load_large_plugin.dismiss_dlg"));
                    }
                }, 300L);
            }
            LogRelease.w(LogDebug.PLUGIN_TAG, "p m hlc dc failed: " + str + " t=" + dynamicClass.className + " tp=" + dynamicClass.classType + " df=" + dynamicClass.defClass);
            if ("activity".equals(dynamicClass.classType)) {
                return DummyActivity.class;
            }
            if ("service".equals(dynamicClass.classType)) {
                return DummyService.class;
            }
            if ("provider".equals(dynamicClass.classType)) {
                return DummyProvider.class;
            }
            return dynamicClass.defClass;
        }
        return loadDefaultClass(str);
    }

    private final Class<?> loadServiceClass(String str) {
        Plugin plugin = this.mDefaultPlugin;
        Class<?> clsLoadClass = null;
        if (plugin == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin service loader: not found default plugin,  in=" + str);
            }
            return null;
        }
        ServiceInfo[] serviceInfoArr = plugin.mLoader.mPackageInfo.services;
        if (serviceInfoArr == null || serviceInfoArr.length <= 0) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin service loader: manifest not item found");
            }
            return null;
        }
        String str2 = serviceInfoArr[0].name;
        ClassLoader classLoader = plugin.getClassLoader();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin service loader: in=" + str + " target=" + str2);
        }
        try {
            clsLoadClass = classLoader.loadClass(str2);
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin service loader: c=" + clsLoadClass + ", loader=" + classLoader);
        }
        return clsLoadClass;
    }

    private final Class<?> loadProviderClass(String str) {
        Plugin plugin = this.mDefaultPlugin;
        Class<?> clsLoadClass = null;
        if (plugin == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin provider loader: not found default plugin,  in=" + str);
            }
            return null;
        }
        ProviderInfo[] providerInfoArr = plugin.mLoader.mPackageInfo.providers;
        if (providerInfoArr == null || providerInfoArr.length <= 0) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin provider loader: manifest not item found");
            }
            return null;
        }
        String str2 = providerInfoArr[0].name;
        ClassLoader classLoader = plugin.getClassLoader();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin provider loader: in=" + str + " target=" + str2);
        }
        try {
            clsLoadClass = classLoader.loadClass(str2);
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin provider loader: c=" + clsLoadClass + ", loader=" + classLoader);
        }
        return clsLoadClass;
    }

    private final Class<?> loadDefaultClass(String str) {
        Plugin plugin = this.mDefaultPlugin;
        Class<?> clsLoadClass = null;
        if (plugin == null) {
            if (PluginManager.isPluginProcess() && LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "plugin class loader: not found default plugin,  in=" + str);
            }
            return null;
        }
        ClassLoader classLoader = plugin.getClassLoader();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin class loader: in=" + str);
        }
        try {
            clsLoadClass = classLoader.loadClass(str);
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                if (th.getCause() instanceof ClassNotFoundException) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "plugin classloader not found className=" + str);
                    }
                } else if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, th.getMessage(), th);
                }
            }
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "plugin class loader: c=" + clsLoadClass + ", loader=" + classLoader);
        }
        return clsLoadClass;
    }

    /* JADX WARN: Removed duplicated region for block: B:63:0x00f8  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        if (RePluginInternal.FOR_DEV) {
            boolean z = false;
            for (String str : strArr) {
                if (z) {
                    printWriter.println("plugin.c=" + Factory.queryPluginContext(str));
                    return;
                }
                if (str.equals("--load")) {
                    z = true;
                }
            }
            boolean z2 = false;
            for (String str2 : strArr) {
                if (z2) {
                    try {
                        MP.startPluginProcess(str2, Integer.MIN_VALUE, new PluginBinderInfo(4));
                        return;
                    } catch (Throwable th) {
                        th.printStackTrace();
                        return;
                    }
                }
                if (str2.equals("--start-plugin-process")) {
                    z2 = true;
                }
            }
            for (String str3 : strArr) {
                if (str3.equals("--reason")) {
                    printWriter.println("--- Reason ---");
                    if (Plugin.sLoadedReasons != null) {
                        Iterator<String> it = Plugin.sLoadedReasons.iterator();
                        while (it.hasNext()) {
                            printWriter.println(it.next());
                        }
                        return;
                    }
                    return;
                }
            }
            for (String str4 : strArr) {
                if (str4.equals("--binder-reason")) {
                    printWriter.println("--- Binder Reason ---");
                    if (MP.sBinderReasons != null) {
                        for (String str5 : MP.sBinderReasons.keySet()) {
                            printWriter.println("binder: " + str5);
                            printWriter.println(MP.sBinderReasons.get(str5));
                        }
                        return;
                    }
                    return;
                }
            }
            String str6 = "";
            String str7 = str6;
            boolean z3 = false;
            for (String str8 : strArr) {
                if (z3) {
                    if (TextUtils.isEmpty(str6)) {
                        str6 = str8;
                    } else if (TextUtils.isEmpty(str7)) {
                        str7 = str8;
                    }
                } else if (str8.equals("--start")) {
                    z3 = true;
                }
            }
            if (z3) {
                if (!TextUtils.isEmpty(str6) && !TextUtils.isEmpty(str7)) {
                    Intent intent = new Intent();
                    intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                    Factory.startActivity(this.mContext, intent, str6, str7, Integer.MIN_VALUE);
                    return;
                } else {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "need {plugin} and {activity}");
                        return;
                    }
                    return;
                }
            }
            ReflectUtils.dumpObject(this, fileDescriptor, printWriter, strArr);
            printWriter.println();
            printWriter.println("--- plugins V2 ---");
            printWriter.println("--- plugins.size = " + this.mPlugins.size() + " ---");
            Iterator<Plugin> it2 = this.mPlugins.values().iterator();
            while (it2.hasNext()) {
                printWriter.println(it2.next().mInfo);
            }
            printWriter.println();
            PluginProcessMain.dump(fileDescriptor, printWriter, strArr);
            printWriter.println("--- plugins.cached objects ---");
            Plugin.dump(fileDescriptor, printWriter, strArr);
            printWriter.println();
        }
    }

    final IBinder getHostBinder() {
        return this.mHostSvc;
    }

    final boolean isActivity(String str) {
        return this.mContainerActivities.contains(str);
    }

    final Plugin getPlugin(String str) {
        return this.mPlugins.get(str);
    }

    final Plugin loadPackageInfoPlugin(String str, PluginCommImpl pluginCommImpl) {
        return loadPlugin(Plugin.cloneAndReattach(this.mContext, this.mPlugins.get(str), this.mClassLoader, pluginCommImpl), 0, true);
    }

    final Plugin loadResourcePlugin(String str, PluginCommImpl pluginCommImpl) {
        return loadPlugin(Plugin.cloneAndReattach(this.mContext, this.mPlugins.get(str), this.mClassLoader, pluginCommImpl), 1, true);
    }

    final Plugin loadDexPlugin(String str, PluginCommImpl pluginCommImpl) {
        return loadPlugin(Plugin.cloneAndReattach(this.mContext, this.mPlugins.get(str), this.mClassLoader, pluginCommImpl), 2, true);
    }

    final Plugin loadAppPlugin(String str) {
        return loadPlugin(this.mPlugins.get(str), 3, true);
    }

    final Plugin loadPlugin(PluginInfo pluginInfo, PluginCommImpl pluginCommImpl, int i, boolean z) {
        Plugin pluginBuild = Plugin.build(pluginInfo);
        pluginBuild.attach(this.mContext, this.mClassLoader, pluginCommImpl);
        return loadPlugin(pluginBuild, i, z);
    }

    final Plugin loadPlugin(Plugin plugin, int i, boolean z) {
        if (plugin == null) {
            return null;
        }
        if (plugin.load(i, z)) {
            return plugin;
        }
        LogRelease.e(LogDebug.PLUGIN_TAG, "pmb.lp: f to l. lt=" + i + "; i=" + plugin.mInfo);
        return null;
    }

    final Plugin lookupPlugin(ClassLoader classLoader) {
        for (Plugin plugin : this.mPlugins.values()) {
            if (plugin != null && plugin.getClassLoader() == classLoader) {
                return plugin;
            }
        }
        return null;
    }

    final void insertNewPlugin(PluginInfo pluginInfo) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "insert new plugin: info=" + pluginInfo);
        }
        synchronized (LOCKER) {
            if (RePlugin.getConfig().getCallbacks().isPluginBlocked(pluginInfo)) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "insert new plugin: plugin is blocked, in=" + pluginInfo);
                }
                return;
            }
            Plugin plugin = this.mPlugins.get(pluginInfo.getName());
            if ((plugin == null || plugin.mInfo.getType() != 2 || pluginInfo.getType() != 1) && plugin != null && plugin.isInitialized()) {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "insert new plugin: failed cause plugin has loaded, plugin=" + pluginInfo);
                }
                this.mNeedRestart = true;
                return;
            }
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "insert new plugin: ok: plugin=" + pluginInfo);
            }
            Plugin pluginBuild = Plugin.build(pluginInfo);
            pluginBuild.attach(this.mContext, this.mClassLoader, this.mLocal);
            putPluginObject(pluginInfo, pluginBuild);
        }
    }

    final void newPluginFound(PluginInfo pluginInfo, boolean z) {
        PluginTable.updatePlugin(pluginInfo);
        insertNewPlugin(pluginInfo);
        PluginStatusController.setStatus(pluginInfo.getName(), pluginInfo.getVersion(), 0);
        if (IPC.isPersistentProcess()) {
            z = this.mNeedRestart;
        }
        LogRelease.i(LogDebug.PLUGIN_TAG, "p.m. n p f n=" + pluginInfo.getName() + " b1=" + z + " b2=" + this.mNeedRestart);
        Intent intent = new Intent(RePluginConstants.ACTION_NEW_PLUGIN);
        intent.putExtra(RePluginConstants.KEY_PLUGIN_INFO, (Parcelable) pluginInfo);
        intent.putExtra(RePluginConstants.KEY_PERSIST_NEED_RESTART, z);
        intent.putExtra(RePluginConstants.KEY_SELF_NEED_RESTART, this.mNeedRestart);
        LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent);
    }

    final void pluginUninstalled(PluginInfo pluginInfo) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "Clear plugin cache. pn=" + pluginInfo.getName());
        }
        if (this.mPlugins.containsKey(pluginInfo.getName())) {
            this.mPlugins.remove(pluginInfo.getName());
        }
        PluginTable.removeInfo(pluginInfo);
        Plugin.clearCachedPlugin(Plugin.queryCachedFilename(pluginInfo.getName()));
    }

    final IPluginClient startPluginProcessLocked(String str, int i, PluginBinderInfo pluginBinderInfo) {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start plugin process: plugin=" + str + " info=" + pluginBinderInfo);
        }
        int iAllocProcess = Integer.MIN_VALUE;
        if (pluginBinderInfo.request == 1 && i == Integer.MIN_VALUE) {
            i = -1;
        }
        if (pluginBinderInfo.request == 4 && i == Integer.MIN_VALUE) {
            i = -1;
        }
        StubProcessManager.schedulePluginProcessLoop(17000L);
        IPluginClient iPluginClientProbePluginClient = PluginProcessMain.probePluginClient(str, i, pluginBinderInfo);
        if (iPluginClientProbePluginClient != null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start plugin process: probe client ok, already running, plugin=" + str + " client=" + iPluginClientProbePluginClient);
            }
            return iPluginClientProbePluginClient;
        }
        try {
            iAllocProcess = PluginProcessMain.allocProcess(str, i);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "start plugin process: alloc process ok, plugin=" + str + " index=" + iAllocProcess);
            }
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "a.p.p: " + th.getMessage(), th);
        }
        if (iAllocProcess != -1 && !PluginProcessHost.isCustomPluginProcess(iAllocProcess) && !PluginManager.isPluginProcess(iAllocProcess)) {
            return null;
        }
        boolean zProxyStartPluginProcess = PluginProviderStub.proxyStartPluginProcess(this.mContext, iAllocProcess);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start plugin process: start process ok, plugin=" + str + " index=" + iAllocProcess);
        }
        if (!zProxyStartPluginProcess) {
            return null;
        }
        IPluginClient iPluginClientProbePluginClient2 = PluginProcessMain.probePluginClient(str, i, pluginBinderInfo);
        if (iPluginClientProbePluginClient2 == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "spp pc n");
            return null;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "start plugin process: probe client ok, plugin=" + str + " index=" + pluginBinderInfo.index);
        }
        return iPluginClientProbePluginClient2;
    }

    final IHostBinderFetcher getBuiltinPlugin(String str) {
        IHostBinderFetcher iHostBinderFetcher;
        synchronized (this.mBuiltinPlugins) {
            iHostBinderFetcher = this.mBuiltinPlugins.get(str);
        }
        return iHostBinderFetcher;
    }

    final HashMap<String, IModule> getBuiltinModules(String str) {
        return this.mBuiltinModules.get(str);
    }

    final void handleServiceCreated(Service service) {
        try {
            PluginProcessMain.getPluginHost().regService(PluginManager.sPluginProcessIndex, this.mDefaultPlugin.mInfo.getName(), service.getClass().getName());
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "r.s: " + th.getMessage(), th);
        }
    }

    final void handleServiceDestroyed(Service service) {
        try {
            PluginProcessMain.getPluginHost().unregService(PluginManager.sPluginProcessIndex, this.mDefaultPlugin.mInfo.getName(), service.getClass().getName());
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "ur.s: " + th.getMessage(), th);
        }
    }
}

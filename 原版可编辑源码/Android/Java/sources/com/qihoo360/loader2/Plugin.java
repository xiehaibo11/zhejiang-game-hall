package com.qihoo360.loader2;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.res.Resources;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.os.Looper;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.i.IModule;
import com.qihoo360.loader.utils.ProcessLocker;
import com.qihoo360.mobilesafe.api.Tasks;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.app.PluginApplicationClient;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.packages.PluginManagerProxy;
import com.qihoo360.replugin.utils.AssetsUtils;
import com.qihoo360.replugin.utils.FileUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileDescriptor;
import java.io.IOException;
import java.io.PrintWriter;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class Plugin {
    static final int LOAD_APP = 3;
    static final int LOAD_DEX = 2;
    static final int LOAD_INFO = 0;
    static final int LOAD_RESOURCES = 1;
    private static final String TAG = "Plugin";
    static volatile ArrayList<String> sLoadedReasons;
    PluginApplicationClient mApplicationClient;
    Context mContext;
    boolean mDummyPlugin;
    PluginInfo mInfo;
    boolean mInitialized;
    Loader mLoader;
    final Handler mMainH = new Handler(Looper.getMainLooper());
    ClassLoader mParent;
    PluginCommImpl mPluginManager;
    private static final byte[] LOCK_LOAD_ENTRY = new byte[0];
    static final HashMap<String, String> PKG_NAME_2_PLUGIN_NAME = new HashMap<>();
    static final HashMap<String, String> PLUGIN_NAME_2_FILENAME = new HashMap<>();
    static final HashMap<String, WeakReference<ClassLoader>> FILENAME_2_DEX = new HashMap<>();
    static final HashMap<String, WeakReference<Resources>> FILENAME_2_RESOURCES = new HashMap<>();
    static final HashMap<String, WeakReference<PackageInfo>> FILENAME_2_PACKAGE_INFO = new HashMap<>();
    static final HashMap<String, WeakReference<ComponentList>> FILENAME_2_COMPONENT_LIST = new HashMap<>();

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static class UpdateInfoTask implements Runnable {
        PluginInfo mInfo;

        UpdateInfoTask(PluginInfo pluginInfo) {
            this.mInfo = pluginInfo;
        }

        @Override
        public void run() {
            try {
                PluginProcessMain.getPluginHost().updatePluginInfo(this.mInfo);
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "ph u p i: " + th.getMessage(), th);
            }
        }
    }

    static final Plugin build(PluginInfo pluginInfo) {
        return new Plugin(pluginInfo);
    }

    static final Plugin cloneAndReattach(Context context, Plugin plugin, ClassLoader classLoader, PluginCommImpl pluginCommImpl) {
        if (plugin == null) {
            return null;
        }
        Plugin pluginBuild = build(plugin.mInfo);
        pluginBuild.attach(context, classLoader, pluginCommImpl);
        return pluginBuild;
    }

    static final String queryPluginNameByPkgName(String str) {
        String str2;
        synchronized (PKG_NAME_2_PLUGIN_NAME) {
            str2 = PKG_NAME_2_PLUGIN_NAME.get(str);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "cached pluginName: " + str + " -> " + str2);
            }
        }
        return str2;
    }

    static final String queryCachedFilename(String str) {
        String str2;
        synchronized (PLUGIN_NAME_2_FILENAME) {
            str2 = PLUGIN_NAME_2_FILENAME.get(str);
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "cached filename: " + str + " -> " + str2);
            }
        }
        return str2;
    }

    static final ClassLoader queryCachedClassLoader(String str) {
        ClassLoader classLoader = null;
        if (!TextUtils.isEmpty(str)) {
            synchronized (FILENAME_2_DEX) {
                WeakReference<ClassLoader> weakReference = FILENAME_2_DEX.get(str);
                if (weakReference != null) {
                    classLoader = weakReference.get();
                    if (classLoader == null) {
                        FILENAME_2_DEX.remove(str);
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "cached Dex " + str + " -> " + classLoader);
                    }
                }
            }
        }
        return classLoader;
    }

    static final Resources queryCachedResources(String str) {
        Resources resources = null;
        if (!TextUtils.isEmpty(str)) {
            synchronized (FILENAME_2_RESOURCES) {
                WeakReference<Resources> weakReference = FILENAME_2_RESOURCES.get(str);
                if (weakReference != null) {
                    resources = weakReference.get();
                    if (resources == null) {
                        FILENAME_2_RESOURCES.remove(str);
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "cached Resources " + str + " -> " + resources);
                    }
                }
            }
        }
        return resources;
    }

    static final PackageInfo queryCachedPackageInfo(String str) {
        PackageInfo packageInfo = null;
        if (!TextUtils.isEmpty(str)) {
            synchronized (FILENAME_2_PACKAGE_INFO) {
                WeakReference<PackageInfo> weakReference = FILENAME_2_PACKAGE_INFO.get(str);
                if (weakReference != null) {
                    packageInfo = weakReference.get();
                    if (packageInfo == null) {
                        FILENAME_2_PACKAGE_INFO.remove(str);
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "cached packageInfo " + str + " -> " + packageInfo);
                    }
                }
            }
        }
        return packageInfo;
    }

    static final ComponentList queryCachedComponentList(String str) {
        ComponentList componentList = null;
        if (!TextUtils.isEmpty(str)) {
            synchronized (FILENAME_2_COMPONENT_LIST) {
                WeakReference<ComponentList> weakReference = FILENAME_2_COMPONENT_LIST.get(str);
                if (weakReference != null) {
                    componentList = weakReference.get();
                    if (componentList == null) {
                        FILENAME_2_COMPONENT_LIST.remove(str);
                    }
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "cached componentList " + str + " -> " + componentList);
                    }
                }
            }
        }
        return componentList;
    }

    static final void clearCachedPlugin(String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        synchronized (FILENAME_2_DEX) {
            WeakReference<ClassLoader> weakReference = FILENAME_2_DEX.get(str);
            if (weakReference != null) {
                ClassLoader classLoader = weakReference.get();
                FILENAME_2_DEX.remove(str);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "clear Cached Dex " + str + " -> " + classLoader);
                }
            }
        }
        synchronized (FILENAME_2_RESOURCES) {
            WeakReference<Resources> weakReference2 = FILENAME_2_RESOURCES.get(str);
            if (weakReference2 != null) {
                Resources resources = weakReference2.get();
                FILENAME_2_RESOURCES.remove(str);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "clear Cached Resources " + str + " -> " + resources);
                }
            }
        }
        synchronized (FILENAME_2_PACKAGE_INFO) {
            WeakReference<PackageInfo> weakReference3 = FILENAME_2_PACKAGE_INFO.get(str);
            if (weakReference3 != null) {
                PackageInfo packageInfo = weakReference3.get();
                FILENAME_2_PACKAGE_INFO.remove(str);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "clear Cached packageInfo " + str + " -> " + packageInfo);
                }
            }
        }
        synchronized (FILENAME_2_COMPONENT_LIST) {
            WeakReference<ComponentList> weakReference4 = FILENAME_2_COMPONENT_LIST.get(str);
            if (weakReference4 != null) {
                ComponentList componentList = weakReference4.get();
                FILENAME_2_COMPONENT_LIST.remove(str);
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "clear Cached componentList " + str + " -> " + componentList);
                }
            }
        }
    }

    static final void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        if (LogDebug.DUMP_ENABLED) {
            printWriter.println("--- cached plugin filename ---");
            for (String str : PLUGIN_NAME_2_FILENAME.keySet()) {
                printWriter.println(str + ": " + PLUGIN_NAME_2_FILENAME.get(str));
            }
            printWriter.println("--- cached plugin Resources ---");
            for (String str2 : FILENAME_2_RESOURCES.keySet()) {
                printWriter.println(str2 + ": " + FILENAME_2_RESOURCES.get(str2));
            }
            printWriter.println("--- cached plugin PackageInfo ---");
            for (String str3 : FILENAME_2_PACKAGE_INFO.keySet()) {
                printWriter.println(str3 + ": " + FILENAME_2_PACKAGE_INFO.get(str3));
            }
            printWriter.println("--- cached plugin ComponentList ---");
            for (String str4 : FILENAME_2_COMPONENT_LIST.keySet()) {
                printWriter.println(str4 + ": " + FILENAME_2_COMPONENT_LIST.get(str4));
            }
        }
    }

    private Plugin(PluginInfo pluginInfo) {
        this.mInfo = pluginInfo;
    }

    public String toString() {
        if (LogDebug.LOG) {
            return super.toString() + " {info=" + this.mInfo + "}";
        }
        return super.toString();
    }

    final void attach(Context context, ClassLoader classLoader, PluginCommImpl pluginCommImpl) {
        this.mContext = context;
        this.mParent = classLoader;
        this.mPluginManager = pluginCommImpl;
    }

    final ClassLoader getClassLoader() {
        Loader loader = this.mLoader;
        if (loader == null) {
            return null;
        }
        return loader.mClassLoader;
    }

    final boolean isInitialized() {
        return this.mInitialized;
    }

    final boolean isLoaded() {
        Loader loader = this.mLoader;
        if (loader == null) {
            return false;
        }
        return loader.isAppLoaded();
    }

    final boolean isPackageInfoLoaded() {
        Loader loader = this.mLoader;
        if (loader == null) {
            return false;
        }
        return loader.isPackageInfoLoaded();
    }

    final boolean load(int i, boolean z) {
        PluginInfo pluginInfo = this.mInfo;
        boolean zLoadLocked = loadLocked(i, z);
        if (i == 3 && zLoadLocked) {
            callApp();
        }
        if (zLoadLocked && this.mInfo != pluginInfo) {
            Tasks.post2Thread(new UpdateInfoTask((PluginInfo) this.mInfo.clone()));
        }
        return zLoadLocked;
    }

    final void replaceInfo(PluginInfo pluginInfo) {
        boolean z;
        if (this.mInfo.canReplaceForPn(pluginInfo)) {
            this.mInfo = pluginInfo;
            z = true;
        } else {
            z = false;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "replace plugin info: info=" + pluginInfo + " rc=" + z);
        }
    }

    private boolean loadByCache(int i) {
        if (i == 0) {
            String strQueryCachedFilename = queryCachedFilename(this.mInfo.getName());
            PackageInfo packageInfoQueryCachedPackageInfo = queryCachedPackageInfo(strQueryCachedFilename);
            ComponentList componentListQueryCachedComponentList = queryCachedComponentList(strQueryCachedFilename);
            if (packageInfoQueryCachedPackageInfo != null && componentListQueryCachedComponentList != null) {
                Loader loader = new Loader(this.mContext, this.mInfo.getName(), null, this);
                this.mLoader = loader;
                loader.mPackageInfo = packageInfoQueryCachedPackageInfo;
                this.mLoader.mComponents = componentListQueryCachedComponentList;
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Cached, pkgInfo loaded");
                }
                return true;
            }
        }
        if (i == 1) {
            String strQueryCachedFilename2 = queryCachedFilename(this.mInfo.getName());
            Resources resourcesQueryCachedResources = queryCachedResources(strQueryCachedFilename2);
            PackageInfo packageInfoQueryCachedPackageInfo2 = queryCachedPackageInfo(strQueryCachedFilename2);
            ComponentList componentListQueryCachedComponentList2 = queryCachedComponentList(strQueryCachedFilename2);
            if (resourcesQueryCachedResources != null && packageInfoQueryCachedPackageInfo2 != null && componentListQueryCachedComponentList2 != null) {
                Loader loader2 = new Loader(this.mContext, this.mInfo.getName(), null, this);
                this.mLoader = loader2;
                loader2.mPkgResources = resourcesQueryCachedResources;
                this.mLoader.mPackageInfo = packageInfoQueryCachedPackageInfo2;
                this.mLoader.mComponents = componentListQueryCachedComponentList2;
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Cached, resource loaded");
                }
                return true;
            }
        }
        if (i != 2) {
            return false;
        }
        String strQueryCachedFilename3 = queryCachedFilename(this.mInfo.getName());
        Resources resourcesQueryCachedResources2 = queryCachedResources(strQueryCachedFilename3);
        PackageInfo packageInfoQueryCachedPackageInfo3 = queryCachedPackageInfo(strQueryCachedFilename3);
        ComponentList componentListQueryCachedComponentList3 = queryCachedComponentList(strQueryCachedFilename3);
        ClassLoader classLoaderQueryCachedClassLoader = queryCachedClassLoader(strQueryCachedFilename3);
        if (resourcesQueryCachedResources2 == null || packageInfoQueryCachedPackageInfo3 == null || componentListQueryCachedComponentList3 == null || classLoaderQueryCachedClassLoader == null) {
            return false;
        }
        Loader loader3 = new Loader(this.mContext, this.mInfo.getName(), null, this);
        this.mLoader = loader3;
        loader3.mPkgResources = resourcesQueryCachedResources2;
        this.mLoader.mPackageInfo = packageInfoQueryCachedPackageInfo3;
        this.mLoader.mComponents = componentListQueryCachedComponentList3;
        this.mLoader.mClassLoader = classLoaderQueryCachedClassLoader;
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Cached, dex loaded");
        }
        return true;
    }

    private boolean loadLocked(int i, boolean z) {
        String str;
        String str2;
        int status = PluginStatusController.getStatus(this.mInfo.getName(), this.mInfo.getVersion());
        if (status < 0) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "loadLocked(): Disable in=" + this.mInfo.getName() + Constants.COLON_SEPARATOR + this.mInfo.getVersion() + "; st=" + status);
            }
            return false;
        }
        if (this.mInitialized) {
            Loader loader = this.mLoader;
            if (loader == null) {
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Initialized but mLoader is Null");
                }
                return false;
            }
            if (i == 0) {
                boolean zIsPackageInfoLoaded = loader.isPackageInfoLoaded();
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Initialized, pkginfo loaded = " + zIsPackageInfoLoaded);
                }
                return zIsPackageInfoLoaded;
            }
            if (i == 1) {
                boolean zIsResourcesLoaded = loader.isResourcesLoaded();
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Initialized, resource loaded = " + zIsResourcesLoaded);
                }
                return zIsResourcesLoaded;
            }
            if (i == 2) {
                boolean zIsDexLoaded = loader.isDexLoaded();
                if (LogDebug.LOG) {
                    LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Initialized, dex loaded = " + zIsDexLoaded);
                }
                return zIsDexLoaded;
            }
            boolean zIsAppLoaded = loader.isAppLoaded();
            if (LogDebug.LOG) {
                LogDebug.i(LogDebug.MAIN_TAG, "loadLocked(): Initialized, is loaded = " + zIsAppLoaded);
            }
            return zIsAppLoaded;
        }
        this.mInitialized = true;
        if (RePlugin.getConfig().isPrintDetailLog()) {
            String str3 = ("--- plugin: " + this.mInfo.getName() + " ---\n") + "load=" + i + "\n";
            for (StackTraceElement stackTraceElement : Thread.currentThread().getStackTrace()) {
                if (!stackTraceElement.isNativeMethod()) {
                    String className = stackTraceElement.getClassName();
                    String methodName = stackTraceElement.getMethodName();
                    String fileName = stackTraceElement.getFileName();
                    int lineNumber = stackTraceElement.getLineNumber();
                    if (LogDebug.LOG) {
                        LogDebug.i(LogDebug.PLUGIN_TAG, className + "." + methodName + "(" + fileName + Constants.COLON_SEPARATOR + lineNumber + ")");
                    }
                    str3 = str3 + className + "." + methodName + "(" + fileName + Constants.COLON_SEPARATOR + lineNumber + ")\n";
                }
            }
            if (sLoadedReasons == null) {
                sLoadedReasons = new ArrayList<>();
            }
            sLoadedReasons.add(str3);
        }
        if (z && loadByCache(i)) {
            return true;
        }
        Context context = this.mContext;
        ClassLoader classLoader = this.mParent;
        PluginCommImpl pluginCommImpl = this.mPluginManager;
        String str4 = String.format(Constant.LOAD_PLUGIN_LOCK, this.mInfo.getApkFile().getName());
        ProcessLocker processLocker = new ProcessLocker(context, str4);
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "loadLocked(): Ready to lock! logtag = try1; pn = " + this.mInfo.getName());
        }
        if (!processLocker.tryLockTimeWait(5000, 10)) {
            LogRelease.w(LogDebug.PLUGIN_TAG, "try1: failed to lock: can't wait plugin ready");
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        boolean zDoLoad = doLoad("try1", context, classLoader, pluginCommImpl, i);
        if (LogDebug.LOG) {
            StringBuilder sb = new StringBuilder();
            sb.append("load ");
            sb.append(this.mInfo.getPath());
            sb.append(" ");
            sb.append(hashCode());
            sb.append(" c=");
            sb.append(i);
            sb.append(" rc=");
            sb.append(zDoLoad);
            sb.append(" delta=");
            str = " ";
            str2 = " c=";
            sb.append(System.currentTimeMillis() - jCurrentTimeMillis);
            LogDebug.i(LogDebug.PLUGIN_TAG, sb.toString());
        } else {
            str = " ";
            str2 = " c=";
        }
        processLocker.unlock();
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "loadLocked(): Unlock! logtag = try1; pn = " + this.mInfo.getName());
        }
        if (!zDoLoad) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "try1: loading fail1");
        }
        if (zDoLoad) {
            if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog() && (i == 2 || i == 3)) {
                LogDebug.printPluginInfo(this.mInfo, i);
                LogDebug.printMemoryStatus(LogDebug.TAG, "act=, loadLocked, flag=, End-1, pn=, " + this.mInfo.getName() + ", type=, " + i);
            }
            try {
                PluginManagerProxy.addToRunningPluginsNoThrows(this.mInfo.getName());
                return true;
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "p.u.1: " + th.getMessage(), th);
                return true;
            }
        }
        ProcessLocker processLocker2 = new ProcessLocker(context, str4);
        if (!processLocker2.tryLockTimeWait(5000, 10)) {
            LogRelease.w(LogDebug.PLUGIN_TAG, "try2: failed to lock: can't wait plugin ready");
        }
        File dexFile = this.mInfo.getDexFile();
        if (dexFile.exists()) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "try2: delete exist odex=" + dexFile.getAbsolutePath());
            }
            dexFile.delete();
        }
        if (Build.VERSION.SDK_INT < 21) {
            try {
                FileUtils.forceDelete(this.mInfo.getExtraOdexDir());
            } catch (IOException e) {
                e.printStackTrace();
            } catch (IllegalArgumentException e2) {
                e2.printStackTrace();
            }
        }
        long jCurrentTimeMillis2 = System.currentTimeMillis();
        String str5 = str2;
        String str6 = str;
        boolean zTryLoadAgain = tryLoadAgain("try2", context, classLoader, pluginCommImpl, i);
        if (LogDebug.LOG) {
            LogDebug.i(LogDebug.PLUGIN_TAG, "load2 " + this.mInfo.getPath() + str6 + hashCode() + str5 + i + " rc=" + zTryLoadAgain + " delta=" + (System.currentTimeMillis() - jCurrentTimeMillis2));
        }
        processLocker2.unlock();
        if (!zTryLoadAgain) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "try2: loading fail2");
            return false;
        }
        if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog() && (i == 2 || i == 3)) {
            LogDebug.printPluginInfo(this.mInfo, i);
            LogDebug.printMemoryStatus(LogDebug.TAG, "act=, loadLocked, flag=, End-2, pn=, " + this.mInfo.getName() + ", type=, " + i);
        }
        try {
            PluginManagerProxy.addToRunningPluginsNoThrows(this.mInfo.getName());
            return true;
        } catch (Throwable th2) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "p.u.2: " + th2.getMessage(), th2);
            return true;
        }
    }

    final IModule query(Class<? extends IModule> cls) {
        return this.mLoader.mPlugin.query(cls);
    }

    final IBinder query(String str) {
        try {
            return this.mLoader.mBinderPlugin.mPlugin.query(str);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "q.b.e.m" + th.getMessage(), th);
            return null;
        }
    }

    private synchronized boolean tryLoadAgain(String str, Context context, ClassLoader classLoader, PluginCommImpl pluginCommImpl, int i) {
        this.mLoader = null;
        return doLoad(str, context, classLoader, pluginCommImpl, i);
    }

    private final boolean doLoad(String str, Context context, ClassLoader classLoader, PluginCommImpl pluginCommImpl, int i) {
        if (this.mLoader == null) {
            PluginInfo pluginInfoUpdateV5FileTo = null;
            if (this.mInfo.getType() == 2) {
                File dir = context.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0);
                File dexParentDir = this.mInfo.getDexParentDir();
                String name = this.mInfo.getApkFile().getName();
                if (!AssetsUtils.quickExtractTo(context, this.mInfo, dir.getAbsolutePath(), name, dexParentDir.getAbsolutePath())) {
                    LogRelease.e(LogDebug.PLUGIN_TAG, "p e b i p f " + this.mInfo);
                    return false;
                }
                File file = new File(dir, name);
                pluginInfoUpdateV5FileTo = (PluginInfo) this.mInfo.clone();
                pluginInfoUpdateV5FileTo.setPath(file.getPath());
                pluginInfoUpdateV5FileTo.setType(1);
            } else if (this.mInfo.getType() == 3) {
                V5FileInfo v5FileInfoBuild = V5FileInfo.build(new File(this.mInfo.getPath()), this.mInfo.getV5Type());
                if (v5FileInfoBuild == null) {
                    LogRelease.e(LogDebug.PLUGIN_TAG, "p e b v i f " + this.mInfo);
                    return false;
                }
                File dir2 = context.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0);
                pluginInfoUpdateV5FileTo = v5FileInfoBuild.updateV5FileTo(context, dir2, true, true);
                if (pluginInfoUpdateV5FileTo == null) {
                    LogRelease.e(LogDebug.PLUGIN_TAG, "p u v f t f " + this.mInfo);
                    return false;
                }
                if (pluginInfoUpdateV5FileTo.getLowInterfaceApi() != this.mInfo.getLowInterfaceApi() || pluginInfoUpdateV5FileTo.getHighInterfaceApi() != this.mInfo.getHighInterfaceApi()) {
                    if (LogDebug.LOG) {
                        LogDebug.d(LogDebug.PLUGIN_TAG, "v5 plugin has changed: plugin=" + pluginInfoUpdateV5FileTo + ", original=" + this.mInfo);
                    }
                    File file2 = new File(dir2, this.mInfo.getApkFile().getName());
                    if (!file2.exists()) {
                        LogRelease.e(LogDebug.PLUGIN_TAG, "can't load: v5 plugin has changed to " + pluginInfoUpdateV5FileTo.getLowInterfaceApi() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + pluginInfoUpdateV5FileTo.getHighInterfaceApi() + ", orig " + this.mInfo.getLowInterfaceApi() + Constants.ACCEPT_TIME_SEPARATOR_SERVER + this.mInfo.getHighInterfaceApi() + " bare not exist");
                        return false;
                    }
                    pluginInfoUpdateV5FileTo = PluginInfo.build(file2);
                    if (pluginInfoUpdateV5FileTo == null) {
                        return false;
                    }
                }
            }
            if (pluginInfoUpdateV5FileTo != null) {
                this.mInfo = pluginInfoUpdateV5FileTo;
            }
            Loader loader = new Loader(context, this.mInfo.getName(), this.mInfo.getPath(), this);
            this.mLoader = loader;
            if (!loader.loadDex(classLoader, i)) {
                return false;
            }
            try {
                PluginManagerProxy.updateUsedIfNeeded(this.mInfo.getName(), true);
            } catch (RemoteException e) {
                e.printStackTrace();
            }
            if (i == 3 && !loadEntryLocked(pluginCommImpl)) {
                return false;
            }
        }
        if (i == 0) {
            return this.mLoader.isPackageInfoLoaded();
        }
        if (i == 1) {
            return this.mLoader.isResourcesLoaded();
        }
        if (i == 2) {
            return this.mLoader.isDexLoaded();
        }
        return this.mLoader.isAppLoaded();
    }

    private boolean loadEntryLocked(PluginCommImpl pluginCommImpl) {
        if (this.mDummyPlugin) {
            LogRelease.w(LogDebug.PLUGIN_TAG, "p.lel dm " + this.mInfo.getName());
            this.mLoader.mPlugin = new com.qihoo360.i.IPlugin() {
                @Override
                public IModule query(Class<? extends IModule> cls) {
                    return null;
                }
            };
            return true;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "Plugin.loadEntryLocked(): Load entry, info=" + this.mInfo);
        }
        if (this.mLoader.loadEntryMethod2()) {
            return this.mLoader.invoke2(pluginCommImpl);
        }
        if (this.mLoader.loadEntryMethod(false)) {
            return this.mLoader.invoke(pluginCommImpl);
        }
        if (this.mLoader.loadEntryMethod3()) {
            return this.mLoader.invoke2(pluginCommImpl);
        }
        LogRelease.e(LogDebug.PLUGIN_TAG, "p.lel f " + this.mInfo.getName());
        return false;
    }

    private void callApp() {
        if (Looper.myLooper() == Looper.getMainLooper()) {
            callAppLocked();
        } else {
            this.mMainH.postAtFrontOfQueue(new Runnable() {
                @Override
                public void run() {
                    Plugin.this.callAppLocked();
                }
            });
        }
    }

    private void callAppLocked() {
        if (!this.mDummyPlugin) {
            if (this.mApplicationClient != null) {
                return;
            }
            PluginApplicationClient orCreate = PluginApplicationClient.getOrCreate(this.mInfo.getName(), this.mLoader.mClassLoader, this.mLoader.mComponents, this.mLoader.mPluginObj.mInfo);
            this.mApplicationClient = orCreate;
            if (orCreate != null) {
                orCreate.callAttachBaseContext(this.mLoader.mPkgContext);
                this.mApplicationClient.callOnCreate();
                return;
            }
            return;
        }
        LogRelease.e(LogDebug.PLUGIN_TAG, "p.cal dm " + this.mInfo.getName());
    }
}

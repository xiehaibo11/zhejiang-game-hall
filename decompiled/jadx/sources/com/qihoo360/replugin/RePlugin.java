package com.qihoo360.replugin;

import android.app.Activity;
import android.app.Application;
import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.PackageInfo;
import android.content.res.Configuration;
import android.content.res.Resources;
import android.os.Build;
import android.os.Bundle;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.qihoo360.i.Factory;
import com.qihoo360.i.Factory2;
import com.qihoo360.loader2.CertUtils;
import com.qihoo360.loader2.DumpUtils;
import com.qihoo360.loader2.MP;
import com.qihoo360.loader2.PMF;
import com.qihoo360.loader2.PluginStatusController;
import com.qihoo360.mobilesafe.api.AppVar;
import com.qihoo360.mobilesafe.api.Tasks;
import com.qihoo360.mobilesafe.svcmanager.QihooServiceManager;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.app.PluginApplicationClient;
import com.qihoo360.replugin.debugger.DebuggerReceivers;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.packages.PluginFastInstallProviderProxy;
import com.qihoo360.replugin.packages.PluginInfoUpdater;
import com.qihoo360.replugin.packages.PluginManagerProxy;
import com.qihoo360.replugin.packages.PluginRunningList;
import com.qihoo360.replugin.packages.RePluginInstaller;
import com.xiaomi.mipush.sdk.Constants;
import java.io.File;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.List;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RePlugin {
    public static final String PLUGIN_NAME_MAIN = "main";
    public static final String PROCESS_AUTO = "-2147483648";
    public static final String PROCESS_PERSIST = "-2";
    public static final String PROCESS_UI = "-1";
    private static final String TAG = "RePlugin";
    public static boolean isEnableTraceInstallPlugin;
    private static RePluginConfig sConfig;

    public static String getVersion() {
        return "2.0";
    }

    public static PluginInfo install(String str, boolean z) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException();
        }
        File file = new File(str);
        if (!file.exists()) {
            LogDebug.e("RePlugin", "install: File not exists. path=" + str);
            return null;
        }
        if (!file.isFile()) {
            LogDebug.e("RePlugin", "install: Not a valid file. path=" + str);
            return null;
        }
        if (str.startsWith("p-n-")) {
            String absolutePath = getConfig().getPnInstallDir().getAbsolutePath();
            if (!str.startsWith(absolutePath)) {
                LogDebug.e("RePlugin", "install: Must be installed from the specified path. Path=" + str + "; Allowed=" + absolutePath);
                return null;
            }
        }
        return MP.pluginDownloaded(str, z);
    }

    public static boolean uninstall(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException();
        }
        return MP.pluginUninstall(str);
    }

    public static boolean preload(String str) {
        PluginInfo pluginInfo = getPluginInfo(str);
        if (pluginInfo == null) {
            if (!LogDebug.LOG) {
                return false;
            }
            LogDebug.e("RePlugin", "preload: Plugin not found! pn=" + str);
            return false;
        }
        return preload(pluginInfo);
    }

    public static boolean preload(PluginInfo pluginInfo) {
        if (pluginInfo == null) {
            return false;
        }
        return PluginFastInstallProviderProxy.install(RePluginInternal.getAppContext(), pluginInfo);
    }

    public static boolean enableDebugger(Context context, boolean z) {
        if (context == null || !z) {
            return true;
        }
        new DebuggerReceivers().registerReceivers(context);
        return true;
    }

    public static boolean startActivity(Context context, Intent intent) {
        ComponentName component = intent.getComponent();
        if (component == null) {
            return false;
        }
        return Factory.startActivityWithNoInjectCN(context, intent, component.getPackageName(), component.getClassName(), Integer.MIN_VALUE);
    }

    public static boolean startActivity(Context context, Intent intent, String str, String str2) {
        return Factory.startActivity(context, intent, str, str2, Integer.MIN_VALUE);
    }

    public static boolean startActivityForResult(Activity activity, Intent intent, int i) {
        return Factory.startActivityForResult(activity, intent, i, null);
    }

    public static boolean startActivityForResult(Activity activity, Intent intent, int i, Bundle bundle) {
        return Factory.startActivityForResult(activity, intent, i, bundle);
    }

    public static Intent createIntent(String str, String str2) {
        Intent intent = new Intent();
        intent.setComponent(createComponentName(str, str2));
        return intent;
    }

    public static ComponentName createComponentName(String str, String str2) {
        return new ComponentName(str, str2);
    }

    public static void addCertSignature(String str) {
        if (TextUtils.isEmpty(str)) {
            throw new IllegalArgumentException("arg is null");
        }
        CertUtils.SIGNATURES.add(str.toUpperCase());
    }

    public static boolean isForDev() {
        return RePluginInternal.FOR_DEV;
    }

    public static ComponentList fetchComponentList(String str) {
        return Factory.queryPluginComponentList(str);
    }

    public static PackageInfo fetchPackageInfo(String str) {
        return Factory.queryPluginPackageInfo(str);
    }

    public static Resources fetchResources(String str) {
        return Factory.queryPluginResouces(str);
    }

    public static ClassLoader fetchClassLoader(String str) {
        return Factory.queryPluginClassLoader(str);
    }

    public static Context fetchContext(String str) {
        return Factory.queryPluginContext(str);
    }

    public static IBinder fetchBinder(String str, String str2, String str3) {
        return Factory.query(str, str2, Integer.parseInt(str3));
    }

    public static IBinder fetchBinder(String str, String str2) {
        return Factory.query(str, str2);
    }

    public static String fetchPluginNameByClassLoader(ClassLoader classLoader) {
        return Factory.fetchPluginName(classLoader);
    }

    public static int fetchResourceIdByName(String str, String str2) {
        PackageInfo packageInfoFetchPackageInfo = fetchPackageInfo(str);
        if (packageInfoFetchPackageInfo == null) {
            if (LogDebug.LOG) {
                LogDebug.e("RePlugin", "fetchResourceIdByName: Plugin not found. pn=" + str + "; resName=" + str2);
            }
            return 0;
        }
        Resources resourcesFetchResources = fetchResources(str);
        if (resourcesFetchResources == null) {
            if (LogDebug.LOG) {
                LogDebug.e("RePlugin", "fetchResourceIdByName: Plugin not found (fetchResources). pn=" + str + "; resName=" + str2);
            }
            return 0;
        }
        return resourcesFetchResources.getIdentifier(packageInfoFetchPackageInfo.packageName + Constants.COLON_SEPARATOR + str2, null, null);
    }

    public static <T extends View> T fetchViewByLayoutName(String str, String str2, ViewGroup viewGroup) {
        Context contextFetchContext = fetchContext(str);
        if (contextFetchContext == null && LogDebug.LOG) {
            LogDebug.e("RePlugin", "fetchViewByLayoutName: Plugin not found. pn=" + str + "; layoutName=" + str2);
        }
        int iFetchResourceIdByName = fetchResourceIdByName(str, "layout/" + str2);
        if (iFetchResourceIdByName <= 0) {
            if (!LogDebug.LOG) {
                return null;
            }
            LogDebug.e("RePlugin", "fetchViewByLayoutName: fetch failed! pn=" + str + "; layoutName=" + str2);
            return null;
        }
        return (T) LayoutInflater.from(contextFetchContext).inflate(iFetchResourceIdByName, viewGroup);
    }

    public static List<PluginInfo> getPluginInfoList() {
        return MP.getPlugins(true);
    }

    public static PluginInfo getPluginInfo(String str) {
        return MP.getPlugin(str, true);
    }

    public static int getPluginVersion(String str) {
        PluginInfo plugin = MP.getPlugin(str, false);
        if (plugin == null) {
            return -1;
        }
        return plugin.getVersion();
    }

    public static boolean isPluginInstalled(String str) {
        return MP.getPlugin(str, false) != null;
    }

    public static boolean isPluginUsed(String str) {
        PluginInfo plugin = MP.getPlugin(str, false);
        return plugin != null && plugin.isUsed();
    }

    public static boolean isPluginDexExtracted(String str) {
        PluginInfo plugin = MP.getPlugin(str, false);
        return plugin != null && plugin.isDexExtracted();
    }

    public static boolean isPluginRunning(String str) {
        try {
            return PluginManagerProxy.isPluginRunning(str);
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static boolean isPluginRunningInProcess(String str, String str2) {
        try {
            return PluginManagerProxy.isPluginRunningInProcess(str, str2);
        } catch (RemoteException e) {
            e.printStackTrace();
            return false;
        }
    }

    public static PluginRunningList getRunningPlugins() {
        return PluginManagerProxy.getRunningPluginsNoThrows();
    }

    public static String[] getRunningProcessesByPlugin(String str) {
        return PluginManagerProxy.getRunningProcessesByPluginNoThrows(str);
    }

    public static boolean isCurrentPersistentProcess() {
        return IPC.isPersistentProcess();
    }

    public static RePluginConfig getConfig() {
        return sConfig;
    }

    public static void registerInstalledReceiver(Context context, BroadcastReceiver broadcastReceiver) {
        LocalBroadcastManager.getInstance(context).registerReceiver(broadcastReceiver, new IntentFilter(RePluginConstants.ACTION_NEW_PLUGIN));
    }

    public static void registerHostBinder(IHostBinderFetcher iHostBinderFetcher) {
        MP.installBuiltinPlugin(PLUGIN_NAME_MAIN, iHostBinderFetcher);
    }

    public static boolean registerGlobalBinder(String str, IBinder iBinder) {
        return QihooServiceManager.addService(RePluginInternal.getAppContext(), str, iBinder);
    }

    public static boolean registerGlobalBinderDelayed(String str, IBinderGetter iBinderGetter) {
        return QihooServiceManager.addService(RePluginInternal.getAppContext(), str, iBinderGetter);
    }

    public static boolean unregisterGlobalBinder(String str) {
        return QihooServiceManager.removeService(RePluginInternal.getAppContext(), str, null);
    }

    public static IBinder getGlobalBinder(String str) {
        return QihooServiceManager.getService(RePluginInternal.getAppContext(), str);
    }

    public static void registerHookingClass(String str, ComponentName componentName, Class cls) {
        Factory2.registerDynamicClass(str, componentName.getPackageName(), componentName.getClassName(), cls);
    }

    public static boolean isHookingClass(ComponentName componentName) {
        return Factory2.isDynamicClass(componentName.getPackageName(), componentName.getClassName());
    }

    public static void unregisterHookingClass(String str) {
        Factory2.unregisterDynamicClass(str);
    }

    public static String convertToPnFile(String str) {
        File fileCovertToPnFile = RePluginInstaller.covertToPnFile(RePluginInternal.getAppContext(), str);
        if (fileCovertToPnFile != null) {
            return fileCovertToPnFile.getAbsolutePath();
        }
        return null;
    }

    public static void dump(FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        DumpUtils.dump(fileDescriptor, printWriter, strArr);
    }

    public static void setTraceInstallPlugin(boolean z) {
        isEnableTraceInstallPlugin = z;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class App {
        static boolean sAttached;
        static AtomicBoolean sCreated = new AtomicBoolean(false);

        public static void attachBaseContext(Application application) {
            attachBaseContext(application, new RePluginConfig());
        }

        public static void attachBaseContext(Application application, RePluginCallbacks rePluginCallbacks) {
            attachBaseContext(application, new RePluginConfig().setCallbacks(rePluginCallbacks));
        }

        public static void attachBaseContext(Application application, RePluginConfig rePluginConfig) {
            if (sAttached) {
                if (LogDebug.LOG) {
                    LogDebug.d("RePlugin", "attachBaseContext: Already called");
                    return;
                }
                return;
            }
            RePluginInternal.init(application);
            RePluginConfig unused = RePlugin.sConfig = rePluginConfig;
            RePlugin.sConfig.initDefaults(application);
            IPC.init(application);
            if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                LogDebug.printMemoryStatus("RePlugin", "act=, init, flag=, Start, pn=, framework, func=, attachBaseContext, lib=, RePlugin");
            }
            HostConfigHelper.init();
            AppVar.sAppContext = application;
            PluginStatusController.setAppContext(application);
            PMF.init(application);
            PMF.callAttach();
            sAttached = true;
        }

        public static void onCreate() {
            if (!sAttached) {
                throw new IllegalStateException();
            }
            if (sCreated.compareAndSet(false, true)) {
                Tasks.init();
                PMF.callAppCreate();
                if (!IPC.isPersistentProcess()) {
                    PluginInfoUpdater.register(RePluginInternal.getAppContext());
                }
                if (LogDebug.LOG && RePlugin.getConfig().isPrintDetailLog()) {
                    LogDebug.printMemoryStatus("RePlugin", "act=, init, flag=, End, pn=, framework, func=, onCreate, lib=, RePlugin");
                }
            }
        }

        public static void onLowMemory() {
            if (Build.VERSION.SDK_INT >= 14) {
                return;
            }
            PluginApplicationClient.notifyOnLowMemory();
        }

        public static void onTrimMemory(int i) {
            if (Build.VERSION.SDK_INT >= 14) {
                return;
            }
            PluginApplicationClient.notifyOnTrimMemory(i);
        }

        public static void onConfigurationChanged(Configuration configuration) {
            if (Build.VERSION.SDK_INT >= 14) {
                return;
            }
            PluginApplicationClient.notifyOnConfigurationChanged(configuration);
        }
    }
}

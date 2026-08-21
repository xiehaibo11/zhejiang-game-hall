package com.qihoo360.replugin.component.service;

import android.app.Service;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.ServiceInfo;
import android.os.Handler;
import android.os.Looper;
import android.os.Messenger;
import android.text.TextUtils;
import android.util.Log;
import android.util.Pair;
import com.qihoo360.i.Factory;
import com.qihoo360.loader2.PMF;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;
import com.qihoo360.replugin.component.utils.PluginClientHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginServiceClient {
    static final int PROCESS_UNKNOWN = Integer.MAX_VALUE;
    private static final String TAG = "PluginServiceClient";
    private static PluginServiceServerFetcher sServerFetcher = new PluginServiceServerFetcher();
    private static PluginServiceDispatcherManager sDispatcherManager = new PluginServiceDispatcherManager();
    private static Handler sClientHandler = new Handler(Looper.getMainLooper());
    private static Messenger sClientMessenger = new Messenger(sClientHandler);

    public static ComponentName startService(Context context, Intent intent) {
        return startService(context, intent, false);
    }

    public static ComponentName startService(Context context, Intent intent, boolean z) {
        ComponentName serviceComponentFromIntent = getServiceComponentFromIntent(context, intent);
        int processByComponentName = getProcessByComponentName(serviceComponentFromIntent);
        if (processByComponentName == Integer.MAX_VALUE) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PSS.startService(): Call SystemAPI: in=" + intent);
            }
            if (z) {
                throw new PluginClientHelper.ShouldCallSystem();
            }
            return context.startService(intent);
        }
        intent.setComponent(serviceComponentFromIntent);
        IPluginServiceServer iPluginServiceServerFetchByProcess = sServerFetcher.fetchByProcess(processByComponentName);
        if (iPluginServiceServerFetchByProcess == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.ss: pss n");
            return null;
        }
        try {
            return iPluginServiceServerFetchByProcess.startService(intent, sClientMessenger);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.ss: pss e", th);
            return null;
        }
    }

    public static boolean stopService(Context context, Intent intent) {
        return stopService(context, intent, false);
    }

    public static boolean stopService(Context context, Intent intent, boolean z) {
        ComponentName componentNameByContext = PluginClientHelper.getComponentNameByContext(context, intent.getComponent());
        int processByComponentName = getProcessByComponentName(componentNameByContext);
        if (processByComponentName == Integer.MAX_VALUE) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PSS.stopService(): Call SystemAPI: in=" + intent);
            }
            if (z) {
                throw new PluginClientHelper.ShouldCallSystem();
            }
            return context.stopService(intent);
        }
        intent.setComponent(componentNameByContext);
        IPluginServiceServer iPluginServiceServerFetchByProcess = sServerFetcher.fetchByProcess(processByComponentName);
        if (iPluginServiceServerFetchByProcess == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.sts: pss n");
            return false;
        }
        try {
            return iPluginServiceServerFetchByProcess.stopService(intent, sClientMessenger) != 0;
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.sts: pss e", th);
            return false;
        }
    }

    public static boolean bindService(Context context, Intent intent, ServiceConnection serviceConnection, int i) {
        return bindService(context, intent, serviceConnection, i, false);
    }

    public static boolean bindService(Context context, Intent intent, ServiceConnection serviceConnection, int i, boolean z) {
        ComponentName componentNameByContext = PluginClientHelper.getComponentNameByContext(context, intent.getComponent());
        int processByComponentName = getProcessByComponentName(componentNameByContext);
        if (processByComponentName == Integer.MAX_VALUE) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PSS.bindService(): Call SystemAPI: in=" + intent);
            }
            if (z) {
                throw new PluginClientHelper.ShouldCallSystem();
            }
            return context.bindService(intent, serviceConnection, i);
        }
        intent.setComponent(componentNameByContext);
        IPluginServiceServer iPluginServiceServerFetchByProcess = sServerFetcher.fetchByProcess(processByComponentName);
        if (iPluginServiceServerFetchByProcess == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.bs: pss n");
            return false;
        }
        try {
            return iPluginServiceServerFetchByProcess.bindService(intent, sDispatcherManager.get(serviceConnection, context, sClientHandler, i, processByComponentName).getIServiceConnection(), i, sClientMessenger) != 0;
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.bs: pss e", th);
            return false;
        }
    }

    public static boolean unbindService(Context context, ServiceConnection serviceConnection) {
        return unbindService(context, serviceConnection, true);
    }

    public static boolean unbindService(Context context, ServiceConnection serviceConnection, boolean z) {
        if (z) {
            try {
                if (LogDebug.LOG) {
                    LogDebug.d(LogDebug.PLUGIN_TAG, "PSS.unbindService(): First, We call SystemAPI: sc=" + serviceConnection);
                }
                context.unbindService(serviceConnection);
            } catch (Throwable unused) {
            }
        }
        ServiceDispatcher serviceDispatcherForget = sDispatcherManager.forget(context, serviceConnection);
        if (serviceDispatcherForget == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.us: sd n");
            return false;
        }
        IPluginServiceServer iPluginServiceServerFetchByProcess = sServerFetcher.fetchByProcess(serviceDispatcherForget.getProcess());
        if (iPluginServiceServerFetchByProcess == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.us: pss n");
            return false;
        }
        try {
            return iPluginServiceServerFetchByProcess.unbindService(serviceDispatcherForget.getIServiceConnection());
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "psc.us: pss e", th);
            return false;
        }
    }

    public static void stopSelf(Service service) {
        try {
            PMF.stopService(new Intent(service, service.getClass()));
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "pss.ss: pf f", th);
        }
    }

    private static int getProcessByComponentName(ComponentName componentName) {
        if (componentName == null) {
            return Integer.MAX_VALUE;
        }
        String packageName = componentName.getPackageName();
        ComponentList componentListQueryPluginComponentList = Factory.queryPluginComponentList(packageName);
        if (componentListQueryPluginComponentList == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "getProcessByComponentName(): Fetch Component List Error! pn=" + packageName);
            }
            return Integer.MAX_VALUE;
        }
        ServiceInfo service = componentListQueryPluginComponentList.getService(componentName.getClassName());
        if (service == null) {
            if (LogDebug.LOG) {
                Log.e(TAG, "getProcessByComponentName(): Not register! pn=" + packageName);
            }
            return Integer.MAX_VALUE;
        }
        int iIntValue = PluginClientHelper.getProcessInt(service.processName).intValue();
        if (LogDebug.LOG) {
            Log.d(TAG, "getProcessByComponentName(): Okay! Process=" + iIntValue + "; pn=" + packageName);
        }
        return iIntValue;
    }

    private static ComponentName getServiceComponentFromIntent(Context context, Intent intent) {
        Pair<ServiceInfo, String> serviceAndPluginByIntent;
        String strFetchPluginName = Factory.fetchPluginName(context.getClassLoader());
        if (intent.getComponent() != null) {
            return PluginClientHelper.getComponentNameByContext(context, intent.getComponent());
        }
        if (!TextUtils.isEmpty(intent.getAction())) {
            ComponentList componentListQueryPluginComponentList = Factory.queryPluginComponentList(strFetchPluginName);
            if (componentListQueryPluginComponentList == null || (serviceAndPluginByIntent = componentListQueryPluginComponentList.getServiceAndPluginByIntent(context, intent)) == null) {
                return null;
            }
            return new ComponentName((String) serviceAndPluginByIntent.second, ((ServiceInfo) serviceAndPluginByIntent.first).name);
        }
        if (!LogDebug.LOG) {
            return null;
        }
        LogDebug.d(LogDebug.PLUGIN_TAG, "PSS.startService(): No Component and no Action");
        return null;
    }
}

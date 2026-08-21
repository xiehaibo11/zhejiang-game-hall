package com.qihoo360.loader2;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.os.IBinder;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.loader2.IPluginClient;
import com.qihoo360.loader2.PluginContainers;
import com.qihoo360.loader2.alc.ActivityController;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.base.LocalBroadcastHelper;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import com.qihoo360.replugin.component.dummy.ForwardActivity;
import com.qihoo360.replugin.component.process.PluginProcessHost;
import com.qihoo360.replugin.component.receiver.PluginReceiverHelper;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;
import com.qihoo360.replugin.component.service.server.PluginServiceServer;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import java.util.HashMap;
import java.util.HashSet;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginProcessPer extends IPluginClient.Stub {
    final PluginContainers mACM;
    private final Context mContext;
    private Plugin mDefaultPlugin;
    private final PmBase mPluginMgr;
    private HashMap<String, BroadcastReceiver> mReceivers = new HashMap<>();
    final PluginServiceServer mServiceMgr;

    PluginProcessPer(Context context, PmBase pmBase, int i, HashSet<String> hashSet) {
        this.mContext = context;
        this.mPluginMgr = pmBase;
        this.mServiceMgr = new PluginServiceServer(context);
        PluginContainers pluginContainers = new PluginContainers();
        this.mACM = pluginContainers;
        pluginContainers.init(i, hashSet);
    }

    final void init(Plugin plugin) {
        this.mDefaultPlugin = plugin;
    }

    final Class<?> resolveActivityClass(String str) {
        PluginContainers.ActivityState activityStateLookupByContainer = this.mACM.lookupByContainer(str);
        if (activityStateLookupByContainer == null) {
            LogRelease.w(LogDebug.PLUGIN_TAG, "use f.a, c=" + str);
            return ForwardActivity.class;
        }
        String str2 = activityStateLookupByContainer.plugin;
        String str3 = activityStateLookupByContainer.activity;
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: loadActivityClass in=" + str + " target=" + str3 + " plugin=" + str2);
        }
        Plugin pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str2);
        Class<?> clsLoadClass = null;
        if (pluginLoadAppPlugin == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "load fail: c=" + str + " p=" + str2 + " t=" + str3);
            return null;
        }
        ClassLoader classLoader = pluginLoadAppPlugin.getClassLoader();
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: loadActivityClass, plugin activity loader: in=" + str + " activity=" + str3);
        }
        try {
            clsLoadClass = classLoader.loadClass(str3);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: loadActivityClass, plugin activity loader: c=" + clsLoadClass + ", loader=" + classLoader);
        }
        return clsLoadClass;
    }

    @Override
    public String allocActivityContainer(String str, int i, String str2, Intent intent) throws RemoteException {
        RePlugin.getConfig().getEventCallbacks().onPrepareAllocPitActivity(intent);
        if (IPC.isUIProcess()) {
            i = -1;
        }
        if (TextUtils.isEmpty(str)) {
            Plugin plugin = this.mDefaultPlugin;
            if (plugin == null) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "a.a.c p i n");
                return null;
            }
            str = plugin.mInfo.getName();
        }
        String strBindActivity = bindActivity(str, i, str2, intent);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: eval plugin " + str + ", target=" + str2 + ", container=" + strBindActivity);
        }
        return strBindActivity;
    }

    @Override
    public IBinder queryBinder(String str, String str2) throws RemoteException {
        Plugin pluginLoadAppPlugin;
        if (TextUtils.isEmpty(str)) {
            pluginLoadAppPlugin = this.mDefaultPlugin;
        } else {
            pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str);
        }
        if (pluginLoadAppPlugin == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "q.b p i n");
            return null;
        }
        if (pluginLoadAppPlugin.mLoader == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "q.b p l i n");
            return null;
        }
        if (pluginLoadAppPlugin.mLoader.mBinderPlugin == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "q.b p l b i n");
            return null;
        }
        if (pluginLoadAppPlugin.mLoader.mBinderPlugin.mPlugin == null) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "q.b p l b p i n");
            return null;
        }
        IBinder iBinderQuery = pluginLoadAppPlugin.mLoader.mBinderPlugin.mPlugin.query(str2);
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PluginImpl.query: call plugin aidl: plugin=" + pluginLoadAppPlugin.mInfo.getName() + " binder.name=" + str2 + " binder.object=" + iBinderQuery);
        }
        return iBinderQuery;
    }

    @Override
    public void releaseBinder() throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PluginImpl.releaseBinder");
        }
        RePlugin.getConfig().getEventCallbacks().onBinderReleased();
    }

    @Override
    public void sendIntent(Intent intent) throws RemoteException {
        sendIntent(intent, false);
    }

    @Override
    public void sendIntentSync(Intent intent) throws RemoteException {
        sendIntent(intent, true);
    }

    private void sendIntent(Intent intent, boolean z) throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "sendIntent pr=" + IPC.getCurrentProcessName() + " intent=" + intent);
        }
        intent.setExtrasClassLoader(getClass().getClassLoader());
        if (z) {
            LocalBroadcastHelper.sendBroadcastSyncUi(this.mContext, intent);
        } else {
            LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent);
        }
    }

    @Override
    public int sumActivities() throws RemoteException {
        return ActivityController.sumActivities();
    }

    @Override
    public IPluginServiceServer fetchServiceServer() throws RemoteException {
        return this.mServiceMgr.getService();
    }

    final String bindActivity(String str, int i, String str2, Intent intent) {
        String strAlloc;
        Class<?> clsLoadClass;
        Plugin pluginLoadAppPlugin = this.mPluginMgr.loadAppPlugin(str);
        if (pluginLoadAppPlugin == null) {
            if (LogDebug.LOG) {
                LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: bindActivity: may be invalid plugin name or load plugin failed: plugin=" + str);
            }
            return null;
        }
        ActivityInfo activity = pluginLoadAppPlugin.mLoader.mComponents.getActivity(str2);
        if (activity == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: bindActivity: activity not found: activity=" + str2);
            }
            return null;
        }
        if (activity.processName == null) {
            activity.processName = activity.applicationInfo.processName;
        }
        if (activity.processName == null) {
            activity.processName = activity.packageName;
        }
        if (activity.processName.contains(PluginProcessHost.PROCESS_PLUGIN_SUFFIX2)) {
            strAlloc = this.mACM.alloc2(activity, str, str2, i, intent, PluginProcessHost.processTail(activity.processName));
        } else {
            strAlloc = this.mACM.alloc(activity, str, str2, i, intent);
        }
        if (TextUtils.isEmpty(strAlloc)) {
            if (LogDebug.LOG) {
                LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: bindActivity: activity container is empty");
            }
            return null;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "PACM: bindActivity: lookup activity container: container=" + strAlloc);
        }
        try {
            clsLoadClass = pluginLoadAppPlugin.mLoader.mClassLoader.loadClass(str2);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, th.getMessage(), th);
            clsLoadClass = null;
        }
        if (clsLoadClass != null) {
            return strAlloc;
        }
        if (LogDebug.LOG) {
            LogDebug.w(LogDebug.PLUGIN_TAG, "PACM: bindActivity: plugin activity class not found: c=" + str2);
        }
        return null;
    }

    @Override
    public void onReceive(String str, String str2, Intent intent) {
        PluginReceiverHelper.onPluginReceiverReceived(str, str2, this.mReceivers, intent);
    }

    @Override
    public String dumpServices() {
        try {
            IPluginServiceServer iPluginServiceServerFetchServiceServer = fetchServiceServer();
            if (iPluginServiceServerFetchServiceServer == null) {
                return null;
            }
            try {
                return iPluginServiceServerFetchServiceServer.dump();
            } catch (Throwable th) {
                LogRelease.e(LogDebug.PLUGIN_TAG, "psc.sts: pss e", th);
                return null;
            }
        } catch (RemoteException e) {
            e.printStackTrace();
            return null;
        }
    }

    @Override
    public String dumpActivities() {
        return this.mACM.dump();
    }
}

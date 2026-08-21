package com.qihoo360.loader2;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.pm.ActivityInfo;
import android.os.Binder;
import android.os.IBinder;
import android.os.Parcelable;
import android.os.RemoteException;
import android.text.TextUtils;
import com.qihoo360.loader2.IPluginClient;
import com.qihoo360.loader2.IPluginHost;
import com.qihoo360.mobilesafe.api.Tasks;
import com.qihoo360.replugin.RePlugin;
import com.qihoo360.replugin.RePluginConstants;
import com.qihoo360.replugin.RePluginEventCallbacks;
import com.qihoo360.replugin.RePluginInternal;
import com.qihoo360.replugin.base.IPC;
import com.qihoo360.replugin.base.LocalBroadcastHelper;
import com.qihoo360.replugin.compat.LocalBroadcastManager;
import com.qihoo360.replugin.component.ComponentList;
import com.qihoo360.replugin.component.receiver.PluginReceiverHelper;
import com.qihoo360.replugin.component.receiver.PluginReceiverProxy;
import com.qihoo360.replugin.component.service.server.IPluginServiceServer;
import com.qihoo360.replugin.component.service.server.PluginServiceServer;
import com.qihoo360.replugin.helper.HostConfigHelper;
import com.qihoo360.replugin.helper.LogDebug;
import com.qihoo360.replugin.helper.LogRelease;
import com.qihoo360.replugin.model.PluginInfo;
import com.qihoo360.replugin.packages.IPluginManagerServer;
import com.qihoo360.replugin.packages.PluginInfoUpdater;
import com.qihoo360.replugin.packages.PluginManagerServer;
import java.io.File;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
class PmHostSvc extends IPluginHost.Stub {
    private static final int GROUP_COUNT = HostConfigHelper.ACTIVITY_PIT_COUNT_TASK;
    private static Map<String, Integer> mPluginGroupMap = new HashMap();
    Context mContext;
    PluginManagerServer mManager;
    private boolean mNeedRestart;
    PmBase mPluginMgr;
    PluginReceiverProxy mReceiverProxy;
    PluginServiceServer mServiceMgr;
    private HashMap<String, BroadcastReceiver> mReceivers = new HashMap<>();
    private final HashMap<String, HashMap<String, List<String>>> mActionPluginComponents = new HashMap<>();

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class BinderDied implements IBinder.DeathRecipient {
        IBinder binder;
        String name;

        BinderDied(String str, IBinder iBinder) {
            this.name = str;
            this.binder = iBinder;
        }

        @Override // android.os.IBinder.DeathRecipient
        public void binderDied() {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "binder died: n=" + this.name + " b=" + this.binder);
            }
            synchronized (PluginProcessMain.sBinders) {
                PluginProcessMain.sBinders.remove(this.name);
            }
        }
    }

    PmHostSvc(Context context, PmBase pmBase) {
        this.mContext = context;
        this.mPluginMgr = pmBase;
        this.mServiceMgr = new PluginServiceServer(context);
        this.mManager = new PluginManagerServer(context);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void installBinder(String str, IBinder iBinder) throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "install binder: n=" + str + " b=" + iBinder);
        }
        synchronized (PluginProcessMain.sBinders) {
            if (iBinder != null) {
                PluginProcessMain.sBinders.put(str, iBinder);
                iBinder.linkToDeath(new BinderDied(str, iBinder), 0);
            } else {
                PluginProcessMain.sBinders.remove(str);
            }
        }
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public IBinder fetchBinder(String str) throws RemoteException {
        IBinder iBinder;
        synchronized (PluginProcessMain.sBinders) {
            iBinder = PluginProcessMain.sBinders.get(str);
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "fetch binder: n=" + str + str + " b=" + iBinder);
        }
        return iBinder;
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public long fetchPersistentCookie() throws RemoteException {
        return PluginProcessMain.getPersistentCookie();
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public IPluginClient startPluginProcess(String str, int i, PluginBinderInfo pluginBinderInfo) throws RemoteException {
        return this.mPluginMgr.startPluginProcessLocked(str, i, pluginBinderInfo);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public String attachPluginProcess(String str, int i, IBinder iBinder, String str2) throws RemoteException {
        IPluginClient iPluginClientAsInterface;
        int callingPid = Binder.getCallingPid();
        try {
            iPluginClientAsInterface = IPluginClient.Stub.asInterface(iBinder);
        } catch (Throwable th) {
            LogRelease.e(LogDebug.PLUGIN_TAG, "a.p.p pc.s.ai: " + th.getMessage(), th);
            iPluginClientAsInterface = null;
        }
        if (iPluginClientAsInterface == null) {
            return null;
        }
        return PluginProcessMain.attachProcess(callingPid, str, i, iBinder, iPluginClientAsInterface, str2, this.mManager);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public List<PluginInfo> listPlugins() throws RemoteException {
        return PluginTable.buildPlugins();
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void regActivity(int i, String str, String str2, String str3) throws RemoteException {
        PluginProcessMain.attachActivity(Binder.getCallingPid(), i, str, str3, str2);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void unregActivity(int i, String str, String str2, String str3) throws RemoteException {
        PluginProcessMain.detachActivity(Binder.getCallingPid(), i, str, str3, str2);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void regService(int i, String str, String str2) throws RemoteException {
        PluginProcessMain.attachService(Binder.getCallingPid(), i, str, str2);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void unregService(int i, String str, String str2) throws RemoteException {
        PluginProcessMain.detachService(Binder.getCallingPid(), i, str, str2);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void regPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException {
        PluginProcessMain.attachBinder(pluginBinderInfo.pid, iBinder);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void unregPluginBinder(PluginBinderInfo pluginBinderInfo, IBinder iBinder) throws RemoteException {
        PluginProcessMain.detachBinder(pluginBinderInfo.pid, iBinder);
        IPluginClient iPluginClientProbePluginClientByPid = PluginProcessMain.probePluginClientByPid(pluginBinderInfo.pid, pluginBinderInfo);
        if (iPluginClientProbePluginClientByPid == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "unregPluginBinder ... client is null");
                return;
            }
            return;
        }
        iPluginClientProbePluginClientByPid.releaseBinder();
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void regReceiver(String str, Map map) throws RemoteException {
        PluginInfo plugin = MP.getPlugin(str, false);
        if (plugin == null || plugin.getFrameworkVersion() < 4 || map == null) {
            return;
        }
        for (Map.Entry entry : ((HashMap) map).entrySet()) {
            if (this.mReceiverProxy == null) {
                PluginReceiverProxy pluginReceiverProxy = new PluginReceiverProxy();
                this.mReceiverProxy = pluginReceiverProxy;
                pluginReceiverProxy.setActionPluginMap(this.mActionPluginComponents);
            }
            String str2 = (String) entry.getKey();
            List<IntentFilter> list = (List) entry.getValue();
            if (list != null) {
                for (IntentFilter intentFilter : list) {
                    for (int iCountActions = intentFilter.countActions(); iCountActions >= 1; iCountActions--) {
                        saveAction(intentFilter.getAction(iCountActions - 1), str, str2);
                    }
                    this.mContext.registerReceiver(this.mReceiverProxy, intentFilter);
                }
            }
        }
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void unregReceiver() throws RemoteException {
        try {
            this.mContext.unregisterReceiver(this.mReceiverProxy);
        } catch (Throwable th) {
            if (LogDebug.LOG) {
                LogDebug.d(PluginReceiverProxy.TAG, "unregProxyReceiver failed, " + th.toString());
            }
        }
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void onReceive(String str, String str2, Intent intent) {
        PluginReceiverHelper.onPluginReceiverReceived(str, str2, this.mReceivers, intent);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public int sumBinders(int i) throws RemoteException {
        return PluginProcessMain.sumBinders(i);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void updatePluginInfo(PluginInfo pluginInfo) throws RemoteException {
        Plugin plugin = this.mPluginMgr.getPlugin(pluginInfo.getName());
        if (plugin != null) {
            plugin.replaceInfo(pluginInfo);
        }
        PluginTable.replaceInfo(pluginInfo);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public PluginInfo pluginDownloaded(String str, boolean z) throws RemoteException {
        PluginInfo pluginInfoPluginDownloadedForPn;
        LogDebug.d(LogDebug.PLUGIN_TAG, "pluginDownloaded： path=" + str);
        String name = new File(str).getName();
        if (name.startsWith("p-n-") || name.startsWith("v-plugin-") || name.startsWith("plugin-s-") || name.startsWith("p-m-")) {
            pluginInfoPluginDownloadedForPn = pluginDownloadedForPn(str);
        } else {
            pluginInfoPluginDownloadedForPn = this.mManager.getService().install(str, z);
        }
        if (pluginInfoPluginDownloadedForPn != null) {
            syncInstalledPluginInfo2All(pluginInfoPluginDownloadedForPn);
        }
        return pluginInfoPluginDownloadedForPn;
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public boolean pluginUninstalled(PluginInfo pluginInfo) throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "pluginUninstalled： pn=" + pluginInfo.getName());
        }
        boolean zUninstall = this.mManager.getService().uninstall(pluginInfo);
        if (zUninstall) {
            syncUninstalledPluginInfo2All(pluginInfo);
        }
        return zUninstall;
    }

    private void syncInstalledPluginInfo2All(PluginInfo pluginInfo) {
        PluginInfo parentInfo = pluginInfo.getParentInfo();
        if (parentInfo != null) {
            pluginInfo = parentInfo;
        }
        this.mPluginMgr.newPluginFound(pluginInfo, false);
        Intent intent = new Intent("ACTION_NEW_PLUGIN");
        intent.putExtra(RePluginConstants.KEY_PERSIST_NEED_RESTART, this.mNeedRestart);
        intent.putExtra("obj", (Parcelable) pluginInfo);
        IPC.sendLocalBroadcast2AllSync(this.mContext, intent);
        if (LogDebug.LOG) {
            LogDebug.d(TaskAffinityStates.TAG, "syncInstalledPluginInfo2All: Sync complete! syncPi=" + pluginInfo);
        }
    }

    private void syncUninstalledPluginInfo2All(PluginInfo pluginInfo) {
        this.mPluginMgr.pluginUninstalled(pluginInfo);
        final Intent intent = new Intent(PluginInfoUpdater.ACTION_UNINSTALL_PLUGIN);
        intent.putExtra("obj", (Parcelable) pluginInfo);
        if (RePluginInternal.getAppContext().getApplicationContext() != null) {
            IPC.sendLocalBroadcast2AllSync(RePluginInternal.getAppContext(), intent);
        } else {
            Tasks.post2UI(new Runnable() { // from class: com.qihoo360.loader2.PmHostSvc.1
                @Override // java.lang.Runnable
                public void run() {
                    IPC.sendLocalBroadcast2All(RePluginInternal.getAppContext(), intent);
                }
            });
        }
    }

    private PluginInfo pluginDownloadedForPn(String str) {
        File file = new File(str);
        V5FileInfo v5FileInfoBuild = V5FileInfo.build(file, 1);
        if (v5FileInfoBuild == null && (v5FileInfoBuild = V5FileInfo.build(file, 3)) == null) {
            if (LogDebug.LOG) {
                LogDebug.d(LogDebug.PLUGIN_TAG, "pluginDownloaded: unknown v5 plugin file: " + str);
            }
            RePlugin.getConfig().getEventCallbacks().onInstallPluginFailed(str, RePluginEventCallbacks.InstallResult.V5_FILE_BUILD_FAIL);
            return null;
        }
        PluginInfo pluginInfoUpdateV5FileTo = v5FileInfoBuild.updateV5FileTo(this.mContext, this.mContext.getDir(Constant.LOCAL_PLUGIN_SUB_DIR, 0), false, true);
        if (pluginInfoUpdateV5FileTo != null) {
            return pluginInfoUpdateV5FileTo;
        }
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "pluginDownloaded: failed to update v5 plugin: " + str);
        }
        RePlugin.getConfig().getEventCallbacks().onInstallPluginFailed(str, RePluginEventCallbacks.InstallResult.V5_FILE_UPDATE_FAIL);
        return null;
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public boolean pluginExtracted(String str) throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "pluginExtracted： path=" + str);
        }
        PluginInfo pluginInfoBuild = PluginInfo.build(new File(str));
        if (pluginInfoBuild == null) {
            return false;
        }
        this.mPluginMgr.newPluginFound(pluginInfoBuild, false);
        Intent intent = new Intent("ACTION_NEW_PLUGIN");
        intent.putExtra(RePluginConstants.KEY_PERSIST_NEED_RESTART, this.mNeedRestart);
        intent.putExtra("obj", (Parcelable) pluginInfoBuild);
        IPC.sendLocalBroadcast2AllSync(this.mContext, intent);
        return true;
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void sendIntent2Process(String str, Intent intent) throws RemoteException {
        sendIntent2Process(str, intent, false);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void sendIntent2ProcessSync(String str, Intent intent) throws RemoteException {
        sendIntent2Process(str, intent, true);
    }

    private void sendIntent2Process(String str, Intent intent, boolean z) throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "sendIntent2Process target=" + str + " intent=" + intent);
        }
        if (TextUtils.equals(str, IPC.getPluginHostProcessName())) {
            sendIntent2PluginHostProcess(intent, z);
            return;
        }
        if (TextUtils.isEmpty(str)) {
            sendIntent2PluginHostProcess(intent, z);
        }
        PluginProcessMain.sendIntent2Process(str, intent, z);
    }

    private void sendIntent2PluginHostProcess(Intent intent, boolean z) {
        intent.setExtrasClassLoader(getClass().getClassLoader());
        if (z) {
            LocalBroadcastHelper.sendBroadcastSyncUi(this.mContext, intent);
        } else {
            LocalBroadcastManager.getInstance(this.mContext).sendBroadcast(intent);
        }
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void sendIntent2Plugin(String str, Intent intent) throws RemoteException {
        sendIntent2Plugin(str, intent, false);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public void sendIntent2PluginSync(String str, Intent intent) throws RemoteException {
        sendIntent2Plugin(str, intent, true);
    }

    private void sendIntent2Plugin(String str, Intent intent, boolean z) throws RemoteException {
        if (LogDebug.LOG) {
            LogDebug.d(LogDebug.PLUGIN_TAG, "sendIntent2Plugin target=" + str + " intent=" + intent);
        }
        if (!TextUtils.equals(str, Constant.PLUGIN_NAME_UI)) {
            PluginProcessMain.sendIntent2Plugin(str, intent, z);
        }
        PluginProcessMain.sendIntent2Plugin(Constant.PLUGIN_NAME_UI, intent, z);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public boolean isProcessAlive(String str) throws RemoteException {
        return PluginProcessMain.isProcessAlive(str);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public IBinder queryPluginBinder(String str, String str2) throws RemoteException {
        return this.mPluginMgr.mLocal.query(str, str2);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public IPluginServiceServer fetchServiceServer() throws RemoteException {
        return this.mServiceMgr.getService();
    }

    private void saveAction(String str, String str2, String str3) {
        HashMap<String, List<String>> map = this.mActionPluginComponents.get(str);
        if (map == null) {
            map = new HashMap<>();
            this.mActionPluginComponents.put(str, map);
        }
        List<String> arrayList = map.get(str2);
        if (arrayList == null) {
            arrayList = new ArrayList<>();
            map.put(str2, arrayList);
        }
        if (arrayList.contains(str3)) {
            return;
        }
        arrayList.add(str3);
        if (LogDebug.LOG) {
            LogDebug.d(PluginReceiverProxy.TAG, String.format("保存 Receiver (%s, %s, %s)", str, str2, str3));
        }
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public List<ActivityInfo> queryPluginsReceiverList(Intent intent) {
        HashMap<String, ActivityInfo> receiverMap;
        ArrayList arrayList = new ArrayList();
        if (intent == null) {
            return arrayList;
        }
        String action = intent.getAction();
        if (TextUtils.isEmpty(action)) {
            return arrayList;
        }
        HashMap<String, List<String>> map = this.mActionPluginComponents.get(action);
        if (map.isEmpty()) {
            return arrayList;
        }
        Iterator<Map.Entry<String, List<String>>> it = map.entrySet().iterator();
        while (it.hasNext()) {
            ComponentList componentListQueryPluginComponentList = this.mPluginMgr.mLocal.queryPluginComponentList(it.next().getKey());
            if (componentListQueryPluginComponentList != null && (receiverMap = componentListQueryPluginComponentList.getReceiverMap()) != null) {
                arrayList.addAll(receiverMap.values());
            }
        }
        return arrayList;
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public IPluginManagerServer fetchManagerServer() throws RemoteException {
        return this.mManager.getService();
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public int getTaskAffinityGroupIndex(String str) {
        if (!mPluginGroupMap.containsKey(str)) {
            int validGroup = getValidGroup();
            if (validGroup == -1) {
                if (LogDebug.LOG) {
                    LogDebug.d(TaskAffinityStates.TAG, "Get groupID fail, not enough TaskAffinity group");
                }
                return -1;
            }
            mPluginGroupMap.put(str, Integer.valueOf(validGroup));
            return validGroup;
        }
        return mPluginGroupMap.get(str).intValue();
    }

    private int getValidGroup() {
        for (int i = 0; i < GROUP_COUNT; i++) {
            if (!mPluginGroupMap.containsValue(Integer.valueOf(i))) {
                return i;
            }
        }
        return -1;
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public int getPidByProcessName(String str) throws RemoteException {
        return PluginProcessMain.getPidByProcessName(str);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public String getProcessNameByPid(int i) throws RemoteException {
        return PluginProcessMain.getProcessNameByPid(i);
    }

    @Override // com.qihoo360.loader2.IPluginHost
    public String dump() {
        return PluginProcessMain.dump();
    }
}

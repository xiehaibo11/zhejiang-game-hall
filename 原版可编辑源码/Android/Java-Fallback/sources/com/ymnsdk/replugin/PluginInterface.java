package com.ymnsdk.replugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginInterface {
    public static java.lang.String FRAMEWORK_VERSION = "2.2.6";
    private android.app.Activity activity;
    private android.content.Context context;
    com.qihoo360.replugin.model.PluginInfo info;
    private com.ymnsdk.replugin.util.RecentlyReceiver mReceiver;
    private com.ymnsdk.replugin.listener.PluginExitListener pluginExitListener;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    static class 1 {
        static final int[] $SwitchMap$com$carlt$networklibs$NetType = null;

        static {
                com.carlt.networklibs.NetType[] r0 = com.carlt.networklibs.NetType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.ymnsdk.replugin.PluginInterface.1.$SwitchMap$com$carlt$networklibs$NetType = r0
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.WIFI     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.ymnsdk.replugin.PluginInterface.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L1d
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.CMNET     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.ymnsdk.replugin.PluginInterface.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L28
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.CMWAP     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.ymnsdk.replugin.PluginInterface.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L33
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.AUTO     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.ymnsdk.replugin.PluginInterface.1.$SwitchMap$com$carlt$networklibs$NetType     // Catch: java.lang.NoSuchFieldError -> L3e
                com.carlt.networklibs.NetType r1 = com.carlt.networklibs.NetType.NONE     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    static {
            java.lang.String r0 = "apkpatch"
            java.lang.System.loadLibrary(r0)
            return
    }

    public PluginInterface() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.info = r0
            r1.pluginExitListener = r0
            return
    }

    private void initReplugin(android.app.Activity r4) {
            r3 = this;
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.init(r4)
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.getInstance()
            android.app.Application r1 = r4.getApplication()
            r0.init(r1)
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.getInstance()
            r0.registerObserver(r3)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            java.io.File r1 = r4.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.setWriteablePath(r1)
            com.qihoo360.replugin.utils.SharedPreferencesUtils.init(r4)
            com.ymnsdk.replugin.util.RecentlyReceiver r0 = new com.ymnsdk.replugin.util.RecentlyReceiver
            r0.<init>()
            r3.mReceiver = r0
            android.content.IntentFilter r1 = new android.content.IntentFilter
            java.lang.String r2 = "android.intent.action.CLOSE_SYSTEM_DIALOGS"
            r1.<init>(r2)
            r4.registerReceiver(r0, r1)
            boolean r0 = com.ymnsdk.replugin.util.PrivacyUtils.getUserPrivacyAlone(r4)
            if (r0 == 0) goto L3f
            return
        L3f:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            r0.init(r4)
            com.ymnsdk.replugin.util.LogUtils.postInterruptEvent(r4)
            return
    }

    public void allowStartPlugin(java.lang.String r3, java.lang.String r4, boolean r5, com.ymnsdk.replugin.listener.AllowStartPluginListener r6) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r3)
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.allowStartPlugin(r3, r4, r5, r6)
            return
    }

    public void allowUserPrivacy() {
            r2 = this;
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            android.app.Activity r1 = r2.activity
            r0.init(r1)
            android.app.Activity r0 = r2.activity
            com.ymnsdk.replugin.util.LogUtils.postInterruptEvent(r0)
            return
    }

    public void clearDownloadCache(java.lang.String r2, com.ymnsdk.replugin.listener.ClearDownloadCacheListener r3) {
            r1 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r2)
            android.app.Activity r0 = r1.activity
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.clearCache(r0, r2, r3)
            return
    }

    protected void getPluginsInfo(java.lang.String r3, java.lang.String r4, com.ymnsdk.replugin.listener.GetPluginsStatusInfoListener r5) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setAppId(r3)
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setAppInfo(r4)
            com.ymnsdk.replugin.feature.PluginsInfoWapper r0 = new com.ymnsdk.replugin.feature.PluginsInfoWapper
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.getPluginsInfo(r3, r4, r5)
            return
    }

    public java.lang.String get_framework_version() {
            r1 = this;
            java.lang.String r0 = com.ymnsdk.replugin.PluginInterface.FRAMEWORK_VERSION
            return r0
    }

    protected void installPlugin(java.lang.String r9, int r10, int r11, com.ymnsdk.replugin.listener.InstallPluginStatusListener r12) {
            r8 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r9)
            com.ymnsdk.replugin.feature.PluginInstallWapper r0 = com.ymnsdk.replugin.feature.PluginInstallWapper.getInstance()
            android.app.Activity r1 = r8.activity
            r5 = 0
            r6 = 0
            r2 = r9
            r3 = r10
            r4 = r11
            r7 = r12
            r0.installPlugin(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public boolean is64Bit() {
            r2 = this;
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            boolean r0 = r0.is64Bit()
            return r0
    }

    protected void isInstallPlugin(java.lang.String r3, com.ymnsdk.replugin.listener.IsInstallPluginStatusListener r4) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r3)
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.isInstallPlugin(r3, r4)
            return
    }

    @com.carlt.networklibs.annotation.NetWork(netType = com.carlt.networklibs.NetType.AUTO)
    public void network(com.carlt.networklibs.NetType r4) {
            r3 = this;
            int[] r0 = com.ymnsdk.replugin.PluginInterface.1.$SwitchMap$com$carlt$networklibs$NetType
            int r4 = r4.ordinal()
            r4 = r0[r4]
            java.lang.String r0 = "ymn"
            r1 = 1
            if (r4 == r1) goto L5b
            r2 = 2
            if (r4 == r2) goto L3d
            r2 = 3
            if (r4 == r2) goto L3d
            r2 = 4
            if (r4 == r2) goto L37
            r2 = 5
            if (r4 == r2) goto L22
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r4.setNetWorkAvailable(r1)
            goto L94
        L22:
            java.lang.String r4 = "是无网络"
            android.util.Log.e(r0, r4)
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r0 = 0
            r4.setNetWorkAvailable(r0)
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r4.setIsDownloadRecovery(r0)
            goto L94
        L37:
            java.lang.String r4 = "是AUTO"
            android.util.Log.e(r0, r4)
            goto L94
        L3d:
            java.lang.String r4 = "是CMWAP"
            android.util.Log.e(r0, r4)
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r4.setNetWorkAvailable(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r4 = r4.isOpenSilentDownload()
            if (r4 == 0) goto L94
            int r4 = com.ymnsdk.replugin.util.SilentDownloadUtils.isNoWifiDownload
            if (r4 != 0) goto L94
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadStop()
            goto L94
        L5b:
            java.lang.String r4 = "是wifi"
            android.util.Log.e(r0, r4)
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            r4.setNetWorkAvailable(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r4 = r4.isOpenSilentDownload()
            if (r4 == 0) goto L94
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            com.ymnsdk.replugin.entity.DownloadEntity r4 = r4.getDownloadEntity()
            android.app.Activity r4 = r4.getActivity()
            if (r4 == 0) goto L8b
            com.ymnsdk.replugin.patch.download.DownloadState r4 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            com.ymnsdk.replugin.entity.DownloadEntity r4 = r4.getDownloadEntity()
            com.ymnsdk.replugin.patch.download.PatchDownloadApi.downloadRecovery(r4, r1)
            goto L94
        L8b:
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r4 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.getInstance()
            android.app.Activity r0 = r3.activity
            r4.startSilentDownload(r0)
        L94:
            return
    }

    protected void onCreate(android.content.Context r1) {
            r0 = this;
            r0.context = r1
            android.app.Activity r1 = (android.app.Activity) r1
            r0.activity = r1
            r0.initReplugin(r1)
            return
    }

    public void onDestory() {
            r3 = this;
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.getInstance()
            android.app.Activity r1 = r3.activity
            r0.unRegisterObserver(r1)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.other.KillApplicationEvent r1 = new com.ymnsdk.replugin.event.other.KillApplicationEvent
            android.app.Activity r2 = r3.activity
            r1.<init>(r2)
            r0.postToSeperllita(r1)
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.getInstance()
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            com.ymnsdk.replugin.entity.DownloadEntity r1 = r1.getDownloadEntity()
            java.lang.String r1 = r1.getMd5()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = r0.getDownloadFileInfo(r1)
            if (r0 == 0) goto L36
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()
            android.app.Activity r2 = r3.activity
            r1.postDownloadErrorEvent(r2, r0)
        L36:
            android.content.Context r0 = r3.context
            com.ymnsdk.replugin.util.RecentlyReceiver r1 = r3.mReceiver
            r0.unregisterReceiver(r1)
            return
    }

    protected void onNewIntent(android.content.Intent r9) {
            r8 = this;
            if (r9 == 0) goto L8a
            android.os.Bundle r0 = r9.getExtras()
            if (r0 == 0) goto L8a
            android.os.Bundle r0 = r9.getExtras()
            java.lang.String r1 = "pluginId"
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L8a
            android.app.Activity r0 = r8.activity
            android.content.Intent r2 = new android.content.Intent
            android.app.Activity r3 = r8.activity
            java.lang.Class<com.ymnsdk.replugin.service.HostService> r4 = com.ymnsdk.replugin.service.HostService.class
            r2.<init>(r3, r4)
            r0.stopService(r2)
            android.os.Bundle r0 = r9.getExtras()
            java.lang.String r6 = r0.getString(r1)
            android.os.Bundle r0 = r9.getExtras()
            java.lang.String r2 = "data"
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L3f
            android.os.Bundle r9 = r9.getExtras()
            java.lang.String r9 = r9.getString(r2)
            goto L41
        L3f:
            java.lang.String r9 = ""
        L41:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "pluginId is "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "ymn"
            android.util.Log.d(r3, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L63
            r0.put(r2, r9)     // Catch: java.lang.Exception -> L63
            goto L67
        L63:
            r9 = move-exception
            r9.printStackTrace()
        L67:
            com.ymnsdk.replugin.listener.PluginExitListener r9 = r8.pluginExitListener
            if (r9 == 0) goto L8a
            com.ymnsdk.replugin.datafun.PostdataLib r9 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r1 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r3 = r8.activity
            r4 = 139022(0x21f0e, float:1.94811E-40)
            java.lang.String r5 = ""
            java.lang.String r7 = ""
            r2 = r1
            r2.<init>(r3, r4, r5, r6, r7)
            r9.postEvent(r1)
            com.ymnsdk.replugin.listener.PluginExitListener r9 = r8.pluginExitListener
            java.lang.String r0 = r0.toString()
            r9.onPluginExit(r0)
        L8a:
            return
    }

    public void openPlugin(java.lang.String r3, java.lang.String r4, com.ymnsdk.replugin.listener.OpenListener r5) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r3)
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.openPlugin(r3, r4, r5)
            return
    }

    public void postToSepperllita(java.lang.String r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L14
            r0.<init>(r4)     // Catch: java.lang.Exception -> L14
            com.ymnsdk.replugin.datafun.PostdataLib r4 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()     // Catch: java.lang.Exception -> L14
            com.ymnsdk.replugin.event.custom.RepluginCustomEvent r1 = new com.ymnsdk.replugin.event.custom.RepluginCustomEvent     // Catch: java.lang.Exception -> L14
            android.app.Activity r2 = r3.activity     // Catch: java.lang.Exception -> L14
            r1.<init>(r2, r0)     // Catch: java.lang.Exception -> L14
            r4.postToSeperllita(r1)     // Catch: java.lang.Exception -> L14
            goto L1f
        L14:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r4 = "ymn"
            java.lang.String r0 = "自定义埋点上抛，传参格式不是json"
            android.util.Log.e(r4, r0)
        L1f:
            return
    }

    public void preLoadPlugin(java.lang.String r3, com.ymnsdk.replugin.listener.PreloadListener r4) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r3)
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.preLoadPlugin(r3, r4)
            return
    }

    protected void queryPluginStatus(java.lang.String r5, com.ymnsdk.replugin.listener.QueryPluginStatusListener r6) {
            r4 = this;
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 == 0) goto L21
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r0 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.getInstance()
            r0.endSilentDownload()
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.silentdownload.UserStopSilentDownloadEvent r1 = new com.ymnsdk.replugin.event.silentdownload.UserStopSilentDownloadEvent
            android.app.Activity r2 = r4.activity
            int r3 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.downloadType
            r1.<init>(r2, r3)
            r0.postToSeperllita(r1)
        L21:
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r5)
            com.ymnsdk.replugin.feature.PluginStatusWapper r0 = new com.ymnsdk.replugin.feature.PluginStatusWapper
            android.app.Activity r1 = r4.activity
            r0.<init>(r1)
            r0.queryPluginStatus(r5, r6)
            return
    }

    public void setPluginExitListener(com.ymnsdk.replugin.listener.PluginExitListener r1) {
            r0 = this;
            r0.pluginExitListener = r1
            return
    }

    public void startApk(java.lang.String r3, java.lang.String r4, com.ymnsdk.replugin.listener.StartPluginStatusListener r5) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r3)
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.startApk(r3, r4, r5)
            return
    }

    public void unInstallPlugin(java.lang.String r3, com.ymnsdk.replugin.listener.UnInstallPluginStatusListener r4) {
            r2 = this;
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setPluginId(r3)
            com.ymnsdk.replugin.feature.PluginManager r0 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r1 = r2.activity
            r0.<init>(r1)
            r0.unInstallPlugin(r3, r4)
            return
    }
}

package com.ymnsdk.replugin.util;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestRetryUtils {
    private android.app.Activity activity;
    private java.lang.String hostAppInfo;
    private java.lang.String pluginId;
    private int requestSum;

    public RequestRetryUtils() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.pluginId = r0
            r1.hostAppInfo = r0
            r0 = 0
            r1.requestSum = r0
            return
    }

    public static com.ymnsdk.replugin.util.RequestRetryUtils getInstance() {
            com.ymnsdk.replugin.util.RequestRetryUtils r0 = new com.ymnsdk.replugin.util.RequestRetryUtils
            r0.<init>()
            return r0
    }

    public int getRequestSum() {
            r1 = this;
            int r0 = r1.requestSum
            return r0
    }

    public boolean retryRequest(com.ymnsdk.replugin.action.ActionSupport r6) {
            r5 = this;
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            int r1 = r5.requestSum
            r2 = 3
            if (r1 >= r2) goto L85
            int r1 = r1 + r0
            r5.requestSum = r1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "当前请求次数"
            r0.append(r1)
            int r1 = r5.requestSum
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymn"
            android.util.Log.d(r1, r0)
            r6.actionStart()
            boolean r0 = r6 instanceof com.ymnsdk.replugin.action.RequestAppPluginInfoAction
            r1 = 1043(0x413, float:1.462E-42)
            if (r0 == 0) goto L47
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 != 0) goto L47
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoRequestEvent r2 = new com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoRequestEvent
            android.app.Activity r3 = r5.activity
            java.lang.String r4 = r5.hostAppInfo
            r2.<init>(r3, r1, r4)
            r0.postToSeperllita(r2)
        L47:
            boolean r0 = r6 instanceof com.ymnsdk.replugin.action.RequestStateAction
            if (r0 == 0) goto L65
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 != 0) goto L65
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateRequestEvent r2 = new com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateRequestEvent
            android.app.Activity r3 = r5.activity
            java.lang.String r4 = r5.pluginId
            r2.<init>(r3, r1, r4)
            r0.postToSeperllita(r2)
        L65:
            boolean r6 = r6 instanceof com.ymnsdk.replugin.action.RequestPluginInfoDetailAction
            if (r6 == 0) goto L83
            com.ymnsdk.replugin.patch.download.DownloadState r6 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r6 = r6.isOpenSilentDownload()
            if (r6 != 0) goto L83
            com.ymnsdk.replugin.datafun.PostdataLib r6 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.querypluginstatus.QueryPluginInfoDetailRequestEvent r0 = new com.ymnsdk.replugin.event.querypluginstatus.QueryPluginInfoDetailRequestEvent
            android.app.Activity r2 = r5.activity
            java.lang.String r3 = r5.pluginId
            r0.<init>(r2, r1, r3)
            r6.postToSeperllita(r0)
        L83:
            r6 = 0
            return r6
        L85:
            return r0
    }

    public void setActivity(android.app.Activity r1) {
            r0 = this;
            r0.activity = r1
            return
    }

    public void setHostAppInfo(java.lang.String r1) {
            r0 = this;
            r0.hostAppInfo = r1
            return
    }

    public void setPluginId(java.lang.String r1) {
            r0 = this;
            r0.pluginId = r1
            return
    }

    public void setRequestSum(int r1) {
            r0 = this;
            r0.requestSum = r1
            return
    }
}

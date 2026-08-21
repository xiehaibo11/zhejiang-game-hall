package com.ymnsdk.replugin.feature;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginStatusWapper {
    public android.app.Activity activity;


    public PluginStatusWapper(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            return
    }

    public void queryPluginStatus(java.lang.String r20, com.ymnsdk.replugin.listener.QueryPluginStatusListener r21) {
            r19 = this;
            r14 = r19
            r15 = r20
            r13 = r21
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r2 = r14.activity
            r3 = 139002(0x21efa, float:1.94783E-40)
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r1 = r7
            r5 = r20
            r1.<init>(r2, r3, r4, r5, r6)
            r0.postEvent(r7)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 != 0) goto L36
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusRequestEvent r1 = new com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusRequestEvent
            android.app.Activity r2 = r14.activity
            r1.<init>(r2, r15)
            r0.postToSeperllita(r1)
        L36:
            long r16 = java.lang.System.currentTimeMillis()
            r12 = -1
            com.ymnsdk.replugin.manger.PluginMangerUtils.getInstance()     // Catch: java.lang.Exception -> L123
            com.ymnsdk.replugin.entity.Plugin r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.findPluginById(r20)     // Catch: java.lang.Exception -> L123
            if (r0 == 0) goto Ld2
            java.lang.String r1 = r0.getBase_url()     // Catch: java.lang.Exception -> Lcd
            java.lang.String r2 = r0.getManifest_path()     // Catch: java.lang.Exception -> Lcd
            java.lang.String r3 = r0.getState_path()     // Catch: java.lang.Exception -> Lcd
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcd
            r4.<init>()     // Catch: java.lang.Exception -> Lcd
            r4.append(r1)     // Catch: java.lang.Exception -> Lcd
            r4.append(r3)     // Catch: java.lang.Exception -> Lcd
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> Lcd
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lcd
            r4.<init>()     // Catch: java.lang.Exception -> Lcd
            r4.append(r1)     // Catch: java.lang.Exception -> Lcd
            r4.append(r2)     // Catch: java.lang.Exception -> Lcd
            java.lang.String r10 = r4.toString()     // Catch: java.lang.Exception -> Lcd
            com.ymnsdk.replugin.util.RequestRetryUtils r11 = com.ymnsdk.replugin.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> Lcd
            com.ymnsdk.replugin.util.RequestRetryUtils r4 = com.ymnsdk.replugin.util.RequestRetryUtils.getInstance()     // Catch: java.lang.Exception -> Lcd
            r11.setPluginId(r15)     // Catch: java.lang.Exception -> Lcd
            r4.setPluginId(r15)     // Catch: java.lang.Exception -> Lcd
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lcd
            com.ymnsdk.replugin.action.RequestStateAction r8 = new com.ymnsdk.replugin.action.RequestStateAction     // Catch: java.lang.Exception -> Lcd
            android.app.Activity r1 = r14.activity     // Catch: java.lang.Exception -> Lcd
            r8.<init>(r1)     // Catch: java.lang.Exception -> Lcd
            r8.setURL(r3)     // Catch: java.lang.Exception -> Lcd
            com.ymnsdk.replugin.feature.PluginStatusWapper$1 r9 = new com.ymnsdk.replugin.feature.PluginStatusWapper$1     // Catch: java.lang.Exception -> Lcd
            r1 = r9
            r2 = r19
            r3 = r4
            r4 = r5
            r6 = r20
            r7 = r21
            r18 = r8
            r15 = r9
            r8 = r16
            r12 = r0
            r13 = r18
            r1.<init>(r2, r3, r4, r6, r7, r8, r10, r11, r12, r13)     // Catch: java.lang.Exception -> Lc9
            r0 = r18
            r0.addObserver(r15)     // Catch: java.lang.Exception -> Lc9
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()     // Catch: java.lang.Exception -> Lc9
            boolean r1 = r1.isOpenSilentDownload()     // Catch: java.lang.Exception -> Lc9
            if (r1 != 0) goto Lc2
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()     // Catch: java.lang.Exception -> Lc9
            com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateRequestEvent r2 = new com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateRequestEvent     // Catch: java.lang.Exception -> Lc9
            android.app.Activity r3 = r14.activity     // Catch: java.lang.Exception -> Lc9
            r4 = 1042(0x412, float:1.46E-42)
            r10 = r20
            r2.<init>(r3, r4, r10)     // Catch: java.lang.Exception -> L11e
            r1.postToSeperllita(r2)     // Catch: java.lang.Exception -> L11e
            goto Lc4
        Lc2:
            r10 = r20
        Lc4:
            r0.actionStart()     // Catch: java.lang.Exception -> L11e
            goto L1a4
        Lc9:
            r0 = move-exception
            r10 = r20
            goto L11f
        Lcd:
            r0 = move-exception
            r10 = r15
            r11 = r21
            goto L126
        Ld2:
            r10 = r15
            java.lang.String r0 = "找不到传入的pluginid"
            r11 = r21
            r12 = -1
            r11.onFailure(r12, r0)     // Catch: java.lang.Exception -> L11c
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()     // Catch: java.lang.Exception -> L11c
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent     // Catch: java.lang.Exception -> L11c
            android.app.Activity r2 = r14.activity     // Catch: java.lang.Exception -> L11c
            r3 = 139003(0x21efb, float:1.94785E-40)
            r4 = -1
            java.lang.String r5 = "找不到传入的pluginid"
            java.lang.String r6 = ""
            r1 = r7
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L11c
            r0.postEvent(r7)     // Catch: java.lang.Exception -> L11c
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()     // Catch: java.lang.Exception -> L11c
            boolean r0 = r0.isOpenSilentDownload()     // Catch: java.lang.Exception -> L11c
            if (r0 != 0) goto L1a4
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()     // Catch: java.lang.Exception -> L11c
            com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusResponseEvent r13 = new com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusResponseEvent     // Catch: java.lang.Exception -> L11c
            android.app.Activity r2 = r14.activity     // Catch: java.lang.Exception -> L11c
            r3 = 1045(0x415, float:1.464E-42)
            java.lang.String r5 = ""
            r6 = -1
            java.lang.String r7 = "找不到传入的pluginid"
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L11c
            long r8 = r8 - r16
            r1 = r13
            r4 = r20
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L11c
            r0.postToSeperllita(r13)     // Catch: java.lang.Exception -> L11c
            goto L1a4
        L11c:
            r0 = move-exception
            goto L126
        L11e:
            r0 = move-exception
        L11f:
            r11 = r21
            r12 = -1
            goto L126
        L123:
            r0 = move-exception
            r11 = r13
            r10 = r15
        L126:
            r0.printStackTrace()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "异常报错|"
            r1.append(r2)
            java.lang.String r3 = r0.toString()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r11.onFailure(r12, r1)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r9 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r4 = r14.activity
            r5 = 139003(0x21efb, float:1.94785E-40)
            r6 = -1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r7 = r0.toString()
            r3.append(r7)
            java.lang.String r7 = r3.toString()
            java.lang.String r8 = ""
            r3 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r1.postEvent(r9)
            com.ymnsdk.replugin.patch.download.DownloadState r1 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r1 = r1.isOpenSilentDownload()
            if (r1 != 0) goto L1a4
            com.ymnsdk.replugin.datafun.PostdataLib r11 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusResponseEvent r12 = new com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusResponseEvent
            android.app.Activity r3 = r14.activity
            r4 = 1045(0x415, float:1.464E-42)
            r6 = -1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r7 = r1.toString()
            long r0 = java.lang.System.currentTimeMillis()
            long r8 = r0 - r16
            java.lang.String r5 = ""
            r1 = r12
            r2 = r3
            r3 = r4
            r4 = r20
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r11.postToSeperllita(r12)
        L1a4:
            return
    }
}

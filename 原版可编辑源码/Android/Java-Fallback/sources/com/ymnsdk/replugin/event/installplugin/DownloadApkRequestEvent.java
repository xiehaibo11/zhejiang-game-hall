package com.ymnsdk.replugin.event.installplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadApkRequestEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public DownloadApkRequestEvent(android.app.Activity r2, java.lang.String r3, java.lang.String r4, boolean r5) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "push"
            r1.setAct(r0)
            java.lang.String r0 = "P1069"
            r1.setPg(r0)
            java.lang.String r0 = "BHF002"
            r1.setBlk(r0)
            java.lang.String r0 = "点击插件icon"
            r1.setBl(r0)
            java.lang.String r0 = "下载整包开始"
            r1.setLabel(r0)
            java.lang.String r0 = "1047"
            r1.setEid(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setPlugin_id(r3)
            if (r5 != 0) goto L3c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r3 = "老包不存在"
            r2.append(r3)
            java.lang.String r4 = r2.toString()
        L3c:
            r0.setRequest_msg(r4)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

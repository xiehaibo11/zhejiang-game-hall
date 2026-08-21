package com.ymnsdk.replugin.event.silentdownload;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class ApkStartSilentDownloadEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public ApkStartSilentDownloadEvent(android.app.Activity r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "push"
            r1.setAct(r0)
            java.lang.String r0 = "P1069"
            r1.setPg(r0)
            java.lang.String r0 = "BHF008"
            r1.setBlk(r0)
            java.lang.String r0 = "选择插件静默下载"
            r1.setBl(r0)
            java.lang.String r0 = "整包静默下载开始"
            r1.setLabel(r0)
            java.lang.String r0 = "1042"
            r1.setEid(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setPlugin_id(r3)
            java.lang.String r2 = ""
            if (r4 != 0) goto L3e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.lang.String r2 = "老包不存在"
            r3.append(r2)
            java.lang.String r2 = r3.toString()
        L3e:
            r0.setRequest_msg(r2)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

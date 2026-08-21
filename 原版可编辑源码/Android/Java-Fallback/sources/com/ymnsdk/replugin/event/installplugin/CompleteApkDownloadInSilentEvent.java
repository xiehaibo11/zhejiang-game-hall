package com.ymnsdk.replugin.event.installplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CompleteApkDownloadInSilentEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public CompleteApkDownloadInSilentEvent(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "push"
            r0.setAct(r1)
            java.lang.String r1 = "P1069"
            r0.setPg(r1)
            java.lang.String r1 = "BHF001"
            r0.setBlk(r1)
            java.lang.String r1 = "宿主包启动"
            r0.setBl(r1)
            java.lang.String r1 = "整包完整静默下载"
            r0.setLabel(r1)
            java.lang.String r1 = "1060"
            r0.setEid(r1)
            return
    }

    public CompleteApkDownloadInSilentEvent(android.app.Activity r1, java.lang.String r2, java.lang.String r3, long r4, long r6) {
            r0 = this;
            r0.<init>(r1)
            r0.setRv(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            java.lang.String r6 = ""
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            r0.setDur(r3)
            com.ymnsdk.replugin.event.base.CustEvent r3 = new com.ymnsdk.replugin.event.base.CustEvent
            r3.<init>(r1)
            r3.setPlugin_id(r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r3.setDownload_size(r1)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r1 = r1.toJson(r3)
            r0.setCust(r1)
            return
    }
}

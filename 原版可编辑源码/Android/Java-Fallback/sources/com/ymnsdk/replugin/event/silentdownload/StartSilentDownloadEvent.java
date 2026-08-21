package com.ymnsdk.replugin.event.silentdownload;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class StartSilentDownloadEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public StartSilentDownloadEvent(android.app.Activity r2, int r3) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "push"
            r1.setAct(r0)
            java.lang.String r0 = "P1069"
            r1.setPg(r0)
            java.lang.String r0 = "BHF001"
            r1.setBlk(r0)
            java.lang.String r0 = "宿主包启动"
            r1.setBl(r0)
            java.lang.String r0 = "开启静默下载"
            r1.setLabel(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setIspatch(r3)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

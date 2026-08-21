package com.ymnsdk.replugin.event.silentdownload;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RecoveryDownloadingEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public RecoveryDownloadingEvent(android.app.Activity r1) {
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
            java.lang.String r1 = "继续下载"
            r0.setLabel(r1)
            java.lang.String r1 = "1044"
            r0.setEid(r1)
            return
    }

    public RecoveryDownloadingEvent(android.app.Activity r2, java.lang.String r3) {
            r1 = this;
            r1.<init>(r2)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setPlugin_id(r3)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

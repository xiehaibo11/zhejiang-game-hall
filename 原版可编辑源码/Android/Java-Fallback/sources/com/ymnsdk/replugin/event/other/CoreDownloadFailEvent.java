package com.ymnsdk.replugin.event.other;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class CoreDownloadFailEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public CoreDownloadFailEvent(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "push"
            r0.setAct(r1)
            java.lang.String r1 = "P1069"
            r0.setPg(r1)
            java.lang.String r1 = "BHF007"
            r0.setBlk(r1)
            java.lang.String r1 = "底层库触发和响应"
            r0.setBl(r1)
            java.lang.String r1 = "下载失败"
            r0.setLabel(r1)
            return
    }

    public CoreDownloadFailEvent(android.app.Activity r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            r1.<init>(r2)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setPlugin_id(r3)
            r0.setRequest_msg(r4)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

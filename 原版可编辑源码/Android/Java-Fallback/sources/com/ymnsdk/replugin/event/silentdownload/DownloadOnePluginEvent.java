package com.ymnsdk.replugin.event.silentdownload;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadOnePluginEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public DownloadOnePluginEvent(android.app.Activity r1) {
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
            java.lang.String r1 = "选择插件进行静默下载"
            r0.setLabel(r1)
            java.lang.String r1 = "1044"
            r0.setEid(r1)
            return
    }

    public DownloadOnePluginEvent(android.app.Activity r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            r0.setRv(r3)
            com.ymnsdk.replugin.event.base.CustEvent r3 = new com.ymnsdk.replugin.event.base.CustEvent
            r3.<init>(r1)
            r3.setPlugin_id(r2)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r1 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r1 = r1.toJson(r3)
            r0.setCust(r1)
            return
    }
}

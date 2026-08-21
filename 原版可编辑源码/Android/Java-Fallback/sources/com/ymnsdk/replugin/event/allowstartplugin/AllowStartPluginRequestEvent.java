package com.ymnsdk.replugin.event.allowstartplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class AllowStartPluginRequestEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public AllowStartPluginRequestEvent(android.app.Activity r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "push"
            r1.setAct(r0)
            java.lang.String r0 = "P1069"
            r1.setPg(r0)
            java.lang.String r0 = "BHF010"
            r1.setBlk(r0)
            java.lang.String r0 = "模式流程"
            r1.setBl(r0)
            java.lang.String r0 = "允许启动插件请求"
            r1.setLabel(r0)
            java.lang.String r0 = "1042"
            r1.setEid(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setPlugin_id(r3)
            r0.setIs_allow(r4)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

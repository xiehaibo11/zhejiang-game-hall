package com.ymnsdk.replugin.event.allowstartplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class AllowStartPluginResponseEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public AllowStartPluginResponseEvent(android.app.Activity r2, java.lang.String r3, int r4, java.lang.String r5) {
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
            java.lang.String r0 = "允许启动插件响应"
            r1.setLabel(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r4 = ""
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r1.setEid(r4)
            com.ymnsdk.replugin.event.base.CustEvent r4 = new com.ymnsdk.replugin.event.base.CustEvent
            r4.<init>(r2)
            r4.setPlugin_id(r3)
            r4.setRequest_msg(r5)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r4)
            r1.setCust(r2)
            return
    }
}

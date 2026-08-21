package com.ymnsdk.replugin.event.querypluginstatus;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class QueryPluginStateRequestEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public QueryPluginStateRequestEvent(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "push"
            r0.setAct(r1)
            java.lang.String r1 = "P1069"
            r0.setPg(r1)
            java.lang.String r1 = "BHF002"
            r0.setBlk(r1)
            java.lang.String r1 = "点击插件icon"
            r0.setBl(r1)
            java.lang.String r1 = "调用获取插件维护状态接口"
            r0.setLabel(r1)
            return
    }

    public QueryPluginStateRequestEvent(android.app.Activity r2, int r3, java.lang.String r4) {
            r1 = this;
            r1.<init>(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ""
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r1.setEid(r3)
            com.ymnsdk.replugin.event.base.CustEvent r3 = new com.ymnsdk.replugin.event.base.CustEvent
            r3.<init>(r2)
            java.lang.String r2 = "2"
            r3.setRequest_server_type(r2)
            r3.setPlugin_id(r4)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r3)
            r1.setCust(r2)
            return
    }
}

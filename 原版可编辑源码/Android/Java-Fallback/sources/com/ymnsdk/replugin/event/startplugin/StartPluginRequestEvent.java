package com.ymnsdk.replugin.event.startplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class StartPluginRequestEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public StartPluginRequestEvent(android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
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
            java.lang.String r0 = "请求启动插件"
            r1.setLabel(r0)
            java.lang.String r0 = "1042"
            r1.setEid(r0)
            r1.setUid(r4)
            com.ymnsdk.replugin.event.base.CustEvent r4 = new com.ymnsdk.replugin.event.base.CustEvent
            r4.<init>(r2)
            r4.setPlugin_id(r3)
            r4.setLogin_json_str(r5)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r4)
            r1.setCust(r2)
            return
    }
}

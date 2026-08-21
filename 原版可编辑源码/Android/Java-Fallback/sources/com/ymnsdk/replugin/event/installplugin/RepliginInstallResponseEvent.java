package com.ymnsdk.replugin.event.installplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RepliginInstallResponseEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public RepliginInstallResponseEvent(android.app.Activity r3, int r4, java.lang.String r5) {
            r2 = this;
            r2.<init>(r3)
            java.lang.String r0 = "push"
            r2.setAct(r0)
            java.lang.String r0 = "P1069"
            r2.setPg(r0)
            java.lang.String r0 = "BHF002"
            r2.setBlk(r0)
            java.lang.String r0 = "点击插件icon"
            r2.setBl(r0)
            java.lang.String r0 = "调用框架安装接口返回"
            r2.setLabel(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r2.setEid(r4)
            com.ymnsdk.replugin.event.base.CustEvent r4 = new com.ymnsdk.replugin.event.base.CustEvent
            r4.<init>(r3)
            r4.setPlugin_id(r5)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r3 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.toJson(r4)
            r2.setCust(r3)
            return
    }
}

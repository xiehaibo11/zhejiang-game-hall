package com.ymnsdk.replugin.event.ui;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class StartDialogShowEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public StartDialogShowEvent(android.app.Activity r2, java.lang.String r3) {
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
            java.lang.String r0 = "插件启动弹窗显示"
            r1.setLabel(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            r0.setPlugin_id(r3)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

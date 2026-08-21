package com.ymnsdk.replugin.event.installplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class StopInstallInStartPluginEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public StopInstallInStartPluginEvent(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "push"
            r0.setAct(r1)
            java.lang.String r1 = "P1069"
            r0.setPg(r1)
            java.lang.String r1 = "BHF010"
            r0.setBlk(r1)
            java.lang.String r1 = "模式流程"
            r0.setBl(r1)
            java.lang.String r1 = "启动插件后停止安装"
            r0.setLabel(r1)
            return
    }
}

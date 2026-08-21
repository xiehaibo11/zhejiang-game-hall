package com.ymnsdk.replugin.event.silentdownload;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class EndSilentDownloadingEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public EndSilentDownloadingEvent(android.app.Activity r1) {
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
            java.lang.String r1 = "关闭静默下载"
            r0.setLabel(r1)
            return
    }

    public EndSilentDownloadingEvent(android.app.Activity r3, long r4) {
            r2 = this;
            r2.<init>(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.setDur(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r0.setRequest_duration(r3)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r3 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.toJson(r0)
            r2.setCust(r3)
            return
    }
}

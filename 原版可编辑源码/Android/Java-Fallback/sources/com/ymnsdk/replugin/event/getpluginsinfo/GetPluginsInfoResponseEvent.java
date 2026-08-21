package com.ymnsdk.replugin.event.getpluginsinfo;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class GetPluginsInfoResponseEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public GetPluginsInfoResponseEvent(android.app.Activity r1) {
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
            java.lang.String r1 = "请求宿主配置信息响应"
            r0.setLabel(r1)
            return
    }

    public GetPluginsInfoResponseEvent(android.app.Activity r2, int r3, int r4, java.lang.String r5, int r6, long r7) {
            r1 = this;
            r1.<init>(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = ""
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.setEid(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r7)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.setDur(r0)
            com.ymnsdk.replugin.event.base.CustEvent r0 = new com.ymnsdk.replugin.event.base.CustEvent
            r0.<init>(r2)
            java.lang.String r2 = "1"
            r0.setRequest_server_type(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.setRestart_num(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.setRequest_code(r2)
            r0.setRequest_msg(r5)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.setRequest_duration(r2)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r0)
            r1.setCust(r2)
            return
    }
}

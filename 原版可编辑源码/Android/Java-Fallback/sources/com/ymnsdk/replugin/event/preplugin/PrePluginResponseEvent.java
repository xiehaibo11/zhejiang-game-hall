package com.ymnsdk.replugin.event.preplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PrePluginResponseEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public PrePluginResponseEvent(android.app.Activity r3, int r4, java.lang.String r5, int r6, java.lang.String r7, long r8) {
            r2 = this;
            r2.<init>(r3)
            java.lang.String r0 = "push"
            r2.setAct(r0)
            java.lang.String r0 = "P1069"
            r2.setPg(r0)
            java.lang.String r0 = "BHF003"
            r2.setBlk(r0)
            java.lang.String r0 = "预加载"
            r2.setBl(r0)
            java.lang.String r0 = "请求预加载插件响应"
            r2.setLabel(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.setDur(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            r2.setEid(r4)
            com.ymnsdk.replugin.event.base.CustEvent r4 = new com.ymnsdk.replugin.event.base.CustEvent
            r4.<init>(r3)
            r4.setPlugin_id(r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r4.setRequest_code(r3)
            r4.setRequest_msg(r7)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r8)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r4.setRequest_duration(r3)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r3 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.toJson(r4)
            r2.setCust(r3)
            return
    }
}

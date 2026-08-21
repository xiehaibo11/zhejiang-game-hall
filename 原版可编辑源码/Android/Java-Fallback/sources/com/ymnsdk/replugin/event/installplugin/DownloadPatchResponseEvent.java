package com.ymnsdk.replugin.event.installplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadPatchResponseEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public DownloadPatchResponseEvent(android.app.Activity r1) {
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
            java.lang.String r1 = "下载patch结束"
            r0.setLabel(r1)
            return
    }

    public DownloadPatchResponseEvent(android.app.Activity r2, int r3, java.lang.String r4, java.lang.String r5, long r6, int r8, java.lang.String r9, int r10, long r11) {
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
            r0.append(r11)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.setDur(r0)
            r1.setRv(r5)
            com.ymnsdk.replugin.event.base.CustEvent r5 = new com.ymnsdk.replugin.event.base.CustEvent
            r5.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setRequest_code(r2)
            r5.setRequest_msg(r9)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setRequest_duration(r2)
            r5.setPlugin_id(r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setDownload_size(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setRestart_num(r2)
            java.lang.String r2 = "0"
            r5.setRequest_server_type(r2)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r5)
            r1.setCust(r2)
            return
    }
}

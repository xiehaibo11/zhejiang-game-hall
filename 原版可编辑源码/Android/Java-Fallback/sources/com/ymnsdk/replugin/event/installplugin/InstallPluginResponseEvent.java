package com.ymnsdk.replugin.event.installplugin;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class InstallPluginResponseEvent extends com.ymnsdk.replugin.event.base.SepperllitaEvent {
    public InstallPluginResponseEvent(android.app.Activity r1) {
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
            java.lang.String r1 = "请求安装插件响应"
            r0.setLabel(r1)
            return
    }

    public InstallPluginResponseEvent(android.app.Activity r3, int r4, java.lang.String r5, java.lang.String r6, int r7, java.lang.String r8, long r9) {
            r2 = this;
            r2.<init>(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r4)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.setEid(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r9)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r2.setDur(r0)
            r2.setRv(r6)
            r6 = 1045(0x415, float:1.464E-42)
            if (r4 != r6) goto L58
            boolean r4 = com.ymnsdk.replugin.util.LogUtils.isLogOpen()
            if (r4 == 0) goto L58
            com.qihoo360.replugin.utils.RepluginLogUtils r4 = com.qihoo360.replugin.utils.RepluginLogUtils.getInstance()
            com.qihoo360.replugin.utils.basic.RepluginLogData r4 = r4.readLog()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "|"
            r6.append(r0)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r0 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r4 = r0.toJson(r4)
            r6.append(r4)
            java.lang.String r4 = r6.toString()
            goto L59
        L58:
            r4 = r1
        L59:
            com.ymnsdk.replugin.event.base.CustEvent r6 = new com.ymnsdk.replugin.event.base.CustEvent
            r6.<init>(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r7)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r6.setRequest_code(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r8)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r6.setRequest_msg(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r9)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            r6.setRequest_duration(r3)
            r6.setPlugin_id(r5)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r3 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r3 = r3.toJson(r6)
            r2.setCust(r3)
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r3 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.getInstance()
            java.lang.String r4 = "false"
            r3.setPluginLog(r4)
            return
    }

    public InstallPluginResponseEvent(android.app.Activity r2, int r3, java.lang.String r4, java.lang.String r5, int r6, java.lang.String r7, long r8, int r10) {
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
            r0.append(r8)
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r1.setDur(r0)
            r1.setRv(r5)
            com.ymnsdk.replugin.event.base.CustEvent r5 = new com.ymnsdk.replugin.event.base.CustEvent
            r5.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setRequest_code(r2)
            r5.setRequest_msg(r7)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setRequest_duration(r2)
            r5.setPlugin_id(r4)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r10)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r5.setRestart_num(r2)
            com.bianfeng.ymnsdk.utilslib.gson.GsonUtils r2 = com.bianfeng.ymnsdk.utilslib.gson.GsonUtils.getInstance()
            java.lang.String r2 = r2.toJson(r5)
            r1.setCust(r2)
            return
    }
}

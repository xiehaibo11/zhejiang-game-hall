package com.ymnsdk.replugin.feature;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginsInfoWapper {
    public android.app.Activity activity;


    public PluginsInfoWapper(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            return
    }

    public static void checkDownloadingPlugin(android.app.Activity r3) {
            java.util.List r0 = com.ymnsdk.replugin.manger.PluginMangerUtils.getAllPlugin()
            if (r0 != 0) goto L7
            return
        L7:
            r1 = 0
        L8:
            int r2 = r0.size()
            if (r1 >= r2) goto L1a
            java.lang.Object r2 = r0.get(r1)
            com.ymnsdk.replugin.entity.Plugin r2 = (com.ymnsdk.replugin.entity.Plugin) r2
            com.ymnsdk.replugin.util.SilentDownloadUtils.checkDowningPlugin(r3, r2)
            int r1 = r1 + 1
            goto L8
        L1a:
            return
    }

    public static void saveHostAppInfo(java.lang.String r3) {
            java.lang.String r0 = "cpsid"
            java.lang.String r1 = "user_id"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2a
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2a
            boolean r3 = r2.has(r1)     // Catch: java.lang.Exception -> L2a
            if (r3 == 0) goto L19
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = r2.getString(r1)     // Catch: java.lang.Exception -> L2a
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setUserId(r3)     // Catch: java.lang.Exception -> L2a
        L19:
            boolean r3 = r2.has(r0)     // Catch: java.lang.Exception -> L2a
            if (r3 == 0) goto L2e
            com.ymnsdk.replugin.util.SharedPreferencesUtils.getInstance()     // Catch: java.lang.Exception -> L2a
            java.lang.String r3 = r2.getString(r0)     // Catch: java.lang.Exception -> L2a
            com.ymnsdk.replugin.util.SharedPreferencesUtils.setCpSid(r3)     // Catch: java.lang.Exception -> L2a
            goto L2e
        L2a:
            r3 = move-exception
            r3.printStackTrace()
        L2e:
            return
    }

    public void getPluginsInfo(java.lang.String r11, java.lang.String r12, com.ymnsdk.replugin.listener.GetPluginsStatusInfoListener r13) {
            r10 = this;
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r0 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.getInstance()
            java.lang.String r1 = "false"
            r0.setPluginLog(r1)
            com.ymnsdk.replugin.datafun.PostdataLib r6 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r1 = r10.activity
            r2 = 139000(0x21ef8, float:1.9478E-40)
            java.lang.String r4 = ""
            r0 = r7
            r3 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r6.postEvent(r7)
            long r4 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.util.RequestRetryUtils r3 = com.ymnsdk.replugin.util.RequestRetryUtils.getInstance()
            android.app.Activity r0 = r10.activity
            r3.setActivity(r0)
            r3.setHostAppInfo(r12)
            com.ymnsdk.replugin.action.RequestAppPluginInfoAction r8 = new com.ymnsdk.replugin.action.RequestAppPluginInfoAction
            android.app.Activity r0 = r10.activity
            r8.<init>(r0)
            r8.setRequestParams(r11)
            saveHostAppInfo(r12)
            com.ymnsdk.replugin.feature.PluginsInfoWapper$1 r9 = new com.ymnsdk.replugin.feature.PluginsInfoWapper$1
            r0 = r9
            r1 = r10
            r2 = r12
            r6 = r13
            r7 = r8
            r0.<init>(r1, r2, r3, r4, r6, r7)
            r8.addObserver(r9)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoRequestEvent r1 = new com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoRequestEvent
            android.app.Activity r2 = r10.activity
            r3 = 1042(0x412, float:1.46E-42)
            r1.<init>(r2, r3, r12)
            r0.postToSeperllita(r1)
            r8.actionStart()
            return
    }
}

package com.ymnsdk.replugin.feature;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginManager {
    android.app.Activity activity;




    public PluginManager(android.app.Activity r1) {
            r0 = this;
            r0.<init>()
            r0.activity = r1
            return
    }

    public void allowStartPlugin(java.lang.String r4, java.lang.String r5, boolean r6, com.ymnsdk.replugin.listener.AllowStartPluginListener r7) {
            r3 = this;
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginRequestEvent r1 = new com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginRequestEvent
            android.app.Activity r2 = r3.activity
            r1.<init>(r2, r4, r6)
            r0.postToSeperllita(r1)
            if (r6 != 0) goto L28
            com.ymnsdk.replugin.datafun.PostdataLib r5 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginResponseEvent r6 = new com.ymnsdk.replugin.event.allowstartplugin.AllowStartPluginResponseEvent
            android.app.Activity r0 = r3.activity
            r1 = 1045(0x415, float:1.464E-42)
            java.lang.String r2 = "插件打开失败:用户不允许打开"
            r6.<init>(r0, r4, r1, r2)
            r5.postToSeperllita(r6)
            java.lang.String r4 = "插件打开失败:宿主不允许打开"
            r7.openFail(r4)
            goto L37
        L28:
            com.ymnsdk.replugin.feature.PluginManager r6 = new com.ymnsdk.replugin.feature.PluginManager
            android.app.Activity r0 = r3.activity
            r6.<init>(r0)
            com.ymnsdk.replugin.feature.PluginManager$3 r0 = new com.ymnsdk.replugin.feature.PluginManager$3
            r0.<init>(r3, r4, r5, r7)
            r6.isInstallPlugin(r4, r0)
        L37:
            return
    }

    public boolean is64Bit() {
            r1 = this;
            boolean r0 = com.qihoo360.loader2.VMRuntimeCompat.is64Bit()
            return r0
    }

    public void isInstallPlugin(java.lang.String r15, com.ymnsdk.replugin.listener.IsInstallPluginStatusListener r16) {
            r14 = this;
            r0 = r14
            r7 = r15
            com.ymnsdk.replugin.datafun.PostdataLib r8 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r9 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r2 = r0.activity
            r3 = 139007(0x21eff, float:1.9479E-40)
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r1 = r9
            r5 = r15
            r1.<init>(r2, r3, r4, r5, r6)
            r8.postEvent(r9)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.isinstall.IsInstallPluginRequestEvent r2 = new com.ymnsdk.replugin.event.isinstall.IsInstallPluginRequestEvent
            android.app.Activity r3 = r0.activity
            r2.<init>(r3, r15)
            r1.postToSeperllita(r2)
            long r1 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r3 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r3 = r3.getLocalInstallPlugin()
            boolean r4 = r3.containsKey(r15)
            if (r4 == 0) goto L7e
            com.ymnsdk.replugin.datafun.PostdataLib r4 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r5 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r9 = r0.activity
            r10 = 139008(0x21f00, float:1.94792E-40)
            r11 = 0
            java.lang.String r12 = "已安装"
            java.lang.String r13 = ""
            r8 = r5
            r8.<init>(r9, r10, r11, r12, r13)
            r4.postEvent(r5)
            com.ymnsdk.replugin.datafun.PostdataLib r10 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.isinstall.IsInstallPluginResponseEvent r11 = new com.ymnsdk.replugin.event.isinstall.IsInstallPluginResponseEvent
            android.app.Activity r4 = r0.activity
            r5 = 1044(0x414, float:1.463E-42)
            java.lang.Object r3 = r3.get(r15)
            com.ymnsdk.replugin.entity.PluginInfo r3 = (com.ymnsdk.replugin.entity.PluginInfo) r3
            java.lang.String r6 = r3.getPlugin_version()
            r8 = 0
            long r12 = java.lang.System.currentTimeMillis()
            long r12 = r12 - r1
            java.lang.String r9 = "已安装"
            r1 = r11
            r2 = r4
            r3 = r5
            r4 = r15
            r5 = r6
            r6 = r8
            r7 = r9
            r8 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r10.postToSeperllita(r11)
            r16.onInstalled()
            goto Lb7
        L7e:
            com.ymnsdk.replugin.datafun.PostdataLib r3 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r4 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r9 = r0.activity
            r10 = 139008(0x21f00, float:1.94792E-40)
            r11 = -1
            java.lang.String r12 = "未安装"
            java.lang.String r13 = ""
            r8 = r4
            r8.<init>(r9, r10, r11, r12, r13)
            r3.postEvent(r4)
            com.ymnsdk.replugin.datafun.PostdataLib r10 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.isinstall.IsInstallPluginResponseEvent r11 = new com.ymnsdk.replugin.event.isinstall.IsInstallPluginResponseEvent
            android.app.Activity r3 = r0.activity
            r4 = 1045(0x415, float:1.464E-42)
            r6 = -1
            long r8 = java.lang.System.currentTimeMillis()
            long r8 = r8 - r1
            java.lang.String r5 = ""
            java.lang.String r12 = "未安装"
            r1 = r11
            r2 = r3
            r3 = r4
            r4 = r15
            r7 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r10.postToSeperllita(r11)
            r16.onNotInstall()
        Lb7:
            return
    }

    public void openPlugin(java.lang.String r4, java.lang.String r5, com.ymnsdk.replugin.listener.OpenListener r6) {
            r3 = this;
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.openplugin.OpenPluginRequestEvent r1 = new com.ymnsdk.replugin.event.openplugin.OpenPluginRequestEvent
            android.app.Activity r2 = r3.activity
            r1.<init>(r2, r4)
            r0.postToSeperllita(r1)
            com.ymnsdk.replugin.patch.download.DownloadState r0 = com.ymnsdk.replugin.patch.download.DownloadState.getInstance()
            boolean r0 = r0.isOpenSilentDownload()
            if (r0 == 0) goto L1f
            com.ymnsdk.replugin.patch.download.SilentDownloadApi r0 = com.ymnsdk.replugin.patch.download.SilentDownloadApi.getInstance()
            r0.endSilentDownload()
        L1f:
            com.ymnsdk.replugin.feature.PluginStatusWapper r0 = new com.ymnsdk.replugin.feature.PluginStatusWapper
            android.app.Activity r1 = r3.activity
            r0.<init>(r1)
            com.ymnsdk.replugin.feature.PluginManager$2 r1 = new com.ymnsdk.replugin.feature.PluginManager$2
            r1.<init>(r3, r4, r6, r5)
            r0.queryPluginStatus(r4, r1)
            return
    }

    public void preLoadPlugin(java.lang.String r17, com.ymnsdk.replugin.listener.PreloadListener r18) {
            r16 = this;
            r7 = r16
            r6 = r17
            java.lang.String r8 = "ymn"
            java.lang.String r0 = "调用到了预加载接口"
            android.util.Log.d(r8, r0)
            com.ymnsdk.replugin.datafun.PostdataLib r9 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r10 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r1 = r7.activity
            r2 = 139013(0x21f05, float:1.94799E-40)
            java.lang.String r3 = ""
            java.lang.String r5 = ""
            r0 = r10
            r4 = r17
            r0.<init>(r1, r2, r3, r4, r5)
            r9.postEvent(r10)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.preplugin.PrePluginRequestEvent r1 = new com.ymnsdk.replugin.event.preplugin.PrePluginRequestEvent
            android.app.Activity r2 = r7.activity
            r1.<init>(r2, r6)
            r0.postToSeperllita(r1)
            long r4 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalInstallPlugin()
            boolean r1 = r0.containsKey(r6)
            if (r1 == 0) goto L62
            java.lang.Object r0 = r0.get(r6)
            com.ymnsdk.replugin.entity.PluginInfo r0 = (com.ymnsdk.replugin.entity.PluginInfo) r0
            java.lang.String r2 = r0.getPackage_name()
            java.lang.Thread r8 = new java.lang.Thread
            com.ymnsdk.replugin.feature.PluginManager$1 r9 = new com.ymnsdk.replugin.feature.PluginManager$1
            r0 = r9
            r1 = r16
            r3 = r17
            r6 = r18
            r0.<init>(r1, r2, r3, r4, r6)
            r8.<init>(r9)
            r8.start()
            goto L9f
        L62:
            java.lang.String r0 = "未找到该插件"
            android.util.Log.d(r8, r0)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r2 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r9 = r7.activity
            r10 = 139014(0x21f06, float:1.948E-40)
            r11 = -1
            java.lang.String r12 = "未找到该插件"
            java.lang.String r13 = ""
            r8 = r2
            r8.<init>(r9, r10, r11, r12, r13)
            r1.postEvent(r2)
            com.ymnsdk.replugin.datafun.PostdataLib r1 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.preplugin.PrePluginResponseEvent r2 = new com.ymnsdk.replugin.event.preplugin.PrePluginResponseEvent
            android.app.Activity r9 = r7.activity
            r10 = 1045(0x415, float:1.464E-42)
            r12 = -1
            long r13 = java.lang.System.currentTimeMillis()
            long r14 = r13 - r4
            java.lang.String r13 = "未找到该插件"
            r8 = r2
            r11 = r17
            r8.<init>(r9, r10, r11, r12, r13, r14)
            r1.postToSeperllita(r2)
            r1 = r18
            r1.preloadFail(r0)
        L9f:
            return
    }

    public void startApk(java.lang.String r22, java.lang.String r23, com.ymnsdk.replugin.listener.StartPluginStatusListener r24) {
            r21 = this;
            r1 = r21
            r9 = r22
            r10 = r23
            r13 = r24
            java.lang.String r11 = "hostActivity"
            java.lang.String r0 = "numID"
            java.lang.String r12 = ""
            java.lang.String r14 = "hostProcessActivity"
            com.ymnsdk.replugin.datafun.PostdataLib r15 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r8 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r3 = r1.activity
            r4 = 139009(0x21f01, float:1.94793E-40)
            java.lang.String r5 = ""
            java.lang.String r7 = ""
            r2 = r8
            r6 = r22
            r16 = r14
            r14 = r8
            r8 = r23
            r2.<init>(r3, r4, r5, r6, r7, r8)
            r15.postEvent(r14)
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L40
            r2.<init>(r10)     // Catch: java.lang.Exception -> L40
            boolean r3 = r2.has(r0)     // Catch: java.lang.Exception -> L40
            if (r3 == 0) goto L3d
            java.lang.String r0 = r2.getString(r0)     // Catch: java.lang.Exception -> L40
            goto L3e
        L3d:
            r0 = r12
        L3e:
            r14 = r0
            goto L45
        L40:
            r0 = move-exception
            r0.printStackTrace()
            r14 = r12
        L45:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.startplugin.StartPluginRequestEvent r2 = new com.ymnsdk.replugin.event.startplugin.StartPluginRequestEvent
            android.app.Activity r3 = r1.activity
            r2.<init>(r3, r9, r14, r10)
            r0.postToSeperllita(r2)
            long r2 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r0 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r0 = r0.getLocalInstallPlugin()
            boolean r4 = r0.containsKey(r9)
            if (r4 == 0) goto L1d3
            java.lang.Object r0 = r0.get(r9)
            r4 = r0
            com.ymnsdk.replugin.entity.PluginInfo r4 = (com.ymnsdk.replugin.entity.PluginInfo) r4
            if (r4 != 0) goto L74
            java.lang.String r0 = "启动插件：pluginInfo is null"
            r13.onFailure(r0)
            return
        L74:
            java.lang.String r0 = r4.getEntrance_activity()
            java.lang.String r5 = r4.getPackage_name()
            android.content.Intent r5 = com.qihoo360.replugin.RePlugin.createIntent(r5, r0)
            java.lang.String r0 = "ymn_login_data"
            java.lang.String r0 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getString(r0)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r6 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r6 = r6.getPluginGrayData()
            boolean r7 = r6.containsKey(r9)
            r8 = 0
            if (r7 == 0) goto La0
            java.lang.Object r6 = r6.get(r9)
            java.lang.Boolean r6 = (java.lang.Boolean) r6
            boolean r6 = r6.booleanValue()
            goto La1
        La0:
            r6 = r8
        La1:
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10d
            r7.<init>(r10)     // Catch: org.json.JSONException -> L10d
            java.lang.String r15 = "ymnLoginData"
            r7.put(r15, r0)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = "isGray"
            r7.put(r0, r6)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = "isReplugin"
            r6 = 1
            r7.put(r0, r6)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = "unity"
            java.lang.String r6 = r7.toString()     // Catch: org.json.JSONException -> L10d
            r5.putExtra(r0, r6)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = "data"
            java.lang.String r6 = r7.toString()     // Catch: org.json.JSONException -> L10d
            r5.putExtra(r0, r6)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = "hostPackageName"
            android.app.Activity r6 = r1.activity     // Catch: org.json.JSONException -> L10d
            java.lang.String r6 = r6.getPackageName()     // Catch: org.json.JSONException -> L10d
            r5.putExtra(r0, r6)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = r7.getString(r11)     // Catch: org.json.JSONException -> L10d
            r5.putExtra(r11, r0)     // Catch: org.json.JSONException -> L10d
            java.lang.String r0 = "hostPid"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L10d
            r6.<init>()     // Catch: org.json.JSONException -> L10d
            r6.append(r12)     // Catch: org.json.JSONException -> L10d
            int r11 = android.os.Process.myPid()     // Catch: org.json.JSONException -> L10d
            r6.append(r11)     // Catch: org.json.JSONException -> L10d
            java.lang.String r6 = r6.toString()     // Catch: org.json.JSONException -> L10d
            r5.putExtra(r0, r6)     // Catch: org.json.JSONException -> L10d
            r6 = r16
            boolean r0 = r7.has(r6)     // Catch: org.json.JSONException -> L10d
            if (r0 == 0) goto L102
            java.lang.String r0 = r7.getString(r6)     // Catch: org.json.JSONException -> L10d
            r5.putExtra(r6, r0)     // Catch: org.json.JSONException -> L10d
            goto L107
        L102:
            java.lang.String r0 = "com.bianfeng.replugin.HostProcessActivity"
            r5.putExtra(r6, r0)     // Catch: org.json.JSONException -> L10d
        L107:
            java.lang.String r0 = "pluginId"
            r5.putExtra(r0, r9)     // Catch: org.json.JSONException -> L10d
            goto L111
        L10d:
            r0 = move-exception
            r0.printStackTrace()
        L111:
            r0 = 131072(0x20000, float:1.83671E-40)
            r5.addFlags(r0)
            r0 = r8
        L117:
            if (r8 != 0) goto L125
            r6 = 3
            if (r0 >= r6) goto L125
            android.app.Activity r6 = r1.activity
            boolean r8 = com.qihoo360.replugin.RePlugin.startActivity(r6, r5)
            int r0 = r0 + 1
            goto L117
        L125:
            if (r8 == 0) goto L189
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r5 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r6 = r1.activity
            r17 = 139010(0x21f02, float:1.94794E-40)
            r18 = 0
            java.lang.String r20 = r4.getPlugin_version()
            java.lang.String r19 = "启动成功"
            r15 = r5
            r16 = r6
            r15.<init>(r16, r17, r18, r19, r20)
            r0.postEvent(r5)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent r15 = new com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent
            android.app.Activity r5 = r1.activity
            r6 = 1044(0x414, float:1.463E-42)
            java.lang.String r7 = r4.getPlugin_version()
            r8 = 0
            long r11 = java.lang.System.currentTimeMillis()
            long r11 = r11 - r2
            java.lang.String r16 = "启动成功"
            r2 = r15
            r3 = r5
            r4 = r6
            r5 = r22
            r6 = r7
            r7 = r8
            r8 = r16
            r9 = r14
            r10 = r23
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r0.postToSeperllita(r15)
            r24.onSuccess()
            android.content.Intent r0 = new android.content.Intent
            android.app.Activity r2 = r1.activity
            java.lang.Class<com.ymnsdk.replugin.service.HostService> r3 = com.ymnsdk.replugin.service.HostService.class
            r0.<init>(r2, r3)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            if (r2 < r3) goto L183
            android.app.Activity r2 = r1.activity
            r2.startForegroundService(r0)
            goto L1d2
        L183:
            android.app.Activity r2 = r1.activity
            r2.startService(r0)
            goto L1d2
        L189:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r5 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r6 = r1.activity
            r17 = 139010(0x21f02, float:1.94794E-40)
            r18 = -1
            java.lang.String r20 = r4.getPlugin_version()
            java.lang.String r19 = "启动插件失败"
            r15 = r5
            r16 = r6
            r15.<init>(r16, r17, r18, r19, r20)
            r0.postEvent(r5)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent r15 = new com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent
            android.app.Activity r5 = r1.activity
            r6 = 1045(0x415, float:1.464E-42)
            java.lang.String r7 = r4.getPlugin_version()
            r8 = -1
            long r11 = java.lang.System.currentTimeMillis()
            long r11 = r11 - r2
            java.lang.String r16 = "启动插件失败"
            r2 = r15
            r3 = r5
            r4 = r6
            r5 = r22
            r6 = r7
            r7 = r8
            r8 = r16
            r9 = r14
            r10 = r23
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r0.postToSeperllita(r15)
            java.lang.String r0 = "启动插件失败"
            r13.onFailure(r0)
        L1d2:
            return
        L1d3:
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r4 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r5 = r1.activity
            r17 = 139010(0x21f02, float:1.94794E-40)
            r18 = -1
            java.lang.String r19 = "还未获取插件信息"
            java.lang.String r20 = ""
            r15 = r4
            r16 = r5
            r15.<init>(r16, r17, r18, r19, r20)
            r0.postEvent(r4)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent r15 = new com.ymnsdk.replugin.event.startplugin.StartPluginResponseEvent
            android.app.Activity r4 = r1.activity
            r5 = 1045(0x415, float:1.464E-42)
            r7 = -1
            long r11 = java.lang.System.currentTimeMillis()
            long r11 = r11 - r2
            java.lang.String r6 = ""
            java.lang.String r8 = "还未获取插件信息"
            r2 = r15
            r3 = r4
            r4 = r5
            r5 = r22
            r9 = r14
            r10 = r23
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r0.postToSeperllita(r15)
            java.lang.String r0 = "还未获取插件信息"
            r13.onFailure(r0)
            return
    }

    public void unInstallPlugin(java.lang.String r13, com.ymnsdk.replugin.listener.UnInstallPluginStatusListener r14) {
            r12 = this;
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r7 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r2 = r12.activity
            r3 = 139011(0x21f03, float:1.94796E-40)
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r1 = r7
            r5 = r13
            r1.<init>(r2, r3, r4, r5, r6)
            r0.postEvent(r7)
            com.ymnsdk.replugin.datafun.PostdataLib r0 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginRequestEvent r1 = new com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginRequestEvent
            android.app.Activity r2 = r12.activity
            r1.<init>(r2, r13)
            r0.postToSeperllita(r1)
            long r0 = java.lang.System.currentTimeMillis()
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r2 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            java.util.Map r2 = r2.getLocalInstallPlugin()
            boolean r3 = r2.containsKey(r13)
            if (r3 == 0) goto Lc0
            java.lang.Object r3 = r2.get(r13)
            com.ymnsdk.replugin.entity.PluginInfo r3 = (com.ymnsdk.replugin.entity.PluginInfo) r3
            java.lang.String r3 = r3.getPackage_name()
            boolean r3 = com.qihoo360.replugin.RePlugin.uninstall(r3)
            if (r3 == 0) goto L88
            r2.remove(r13)
            com.ymnsdk.replugin.util.SharedPerferencesDataUtils r3 = com.ymnsdk.replugin.util.SharedPerferencesDataUtils.getInstance()
            r3.putLocalInstallPlugin(r2)
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r9 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r4 = r12.activity
            r5 = 139012(0x21f04, float:1.94797E-40)
            r6 = 0
            java.lang.String r7 = "卸载插件成功"
            java.lang.String r8 = ""
            r3 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r2.postEvent(r9)
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent r11 = new com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent
            android.app.Activity r4 = r12.activity
            r5 = 1044(0x414, float:1.463E-42)
            r7 = 0
            long r8 = java.lang.System.currentTimeMillis()
            long r9 = r8 - r0
            java.lang.String r8 = "卸载插件成功"
            r3 = r11
            r6 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9)
            r2.postToSeperllita(r11)
            r14.onSuccess()
            goto Lf7
        L88:
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r9 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r4 = r12.activity
            r5 = 139012(0x21f04, float:1.94797E-40)
            r6 = -1
            java.lang.String r7 = "卸载插件失败"
            java.lang.String r8 = ""
            r3 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r2.postEvent(r9)
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent r11 = new com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent
            android.app.Activity r4 = r12.activity
            r5 = 1045(0x415, float:1.464E-42)
            r7 = -1
            long r8 = java.lang.System.currentTimeMillis()
            long r9 = r8 - r0
            java.lang.String r8 = "卸载插件失败"
            r3 = r11
            r6 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9)
            r2.postToSeperllita(r11)
            java.lang.String r13 = "卸载插件失败"
            r14.onFailure(r13)
            goto Lf7
        Lc0:
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.base.BaseEvent r9 = new com.ymnsdk.replugin.event.base.BaseEvent
            android.app.Activity r4 = r12.activity
            r5 = 139012(0x21f04, float:1.94797E-40)
            r6 = -1
            java.lang.String r7 = "未找到该插件"
            java.lang.String r8 = ""
            r3 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r2.postEvent(r9)
            com.ymnsdk.replugin.datafun.PostdataLib r2 = com.ymnsdk.replugin.datafun.PostdataLib.getInstance()
            com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent r11 = new com.ymnsdk.replugin.event.uninstallplugin.UnInstallPluginResponseEvent
            android.app.Activity r4 = r12.activity
            r5 = 1045(0x415, float:1.464E-42)
            r7 = -1
            long r8 = java.lang.System.currentTimeMillis()
            long r9 = r8 - r0
            java.lang.String r8 = "未找到该插件"
            r3 = r11
            r6 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9)
            r2.postToSeperllita(r11)
            java.lang.String r13 = "未找到该插件"
            r14.onFailure(r13)
        Lf7:
            return
    }
}

package com.bianfeng.privategetui;

public class YmnGetuiIntentService extends com.igexin.sdk.GTIntentService {
    private static final java.lang.String TAG = "GetuiSdkDemo";
    private java.lang.String params;

    public YmnGetuiIntentService() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.params = r0
            return
    }

    private void bindAliasResult(com.igexin.sdk.message.BindAliasCmdMessage r3) {
            r2 = this;
            java.lang.String r0 = r3.getSn()
            java.lang.String r3 = r3.getCode()
            int r3 = java.lang.Integer.parseInt(r3)
            if (r3 != 0) goto L14
            r3 = 1502(0x5de, float:2.105E-42)
            r2.sendMessage(r0, r3)
            goto L2d
        L14:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "|"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            r0 = 1503(0x5df, float:2.106E-42)
            r2.sendMessage(r3, r0)
        L2d:
            return
    }

    private void feedbackResult(com.igexin.sdk.message.FeedbackCmdMessage r1) {
            r0 = this;
            r1.getAppid()
            r1.getTaskId()
            r1.getActionId()
            r1.getResult()
            r1.getTimeStamp()
            r1.getClientId()
            return
    }

    public static java.lang.String getMetaData(android.content.Context r3, java.lang.String r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            java.lang.String r3 = r3.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r3 = r1.getApplicationInfo(r3, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            android.os.Bundle r1 = r3.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            java.lang.Object r1 = r1.get(r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            if (r1 == 0) goto L21
            android.os.Bundle r3 = r3.metaData     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            java.lang.Object r3 = r3.get(r4)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            java.lang.String r3 = (java.lang.String) r3     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L22
            r0 = r3
            goto L26
        L21:
            return r0
        L22:
            r3 = move-exception
            r3.printStackTrace()
        L26:
            return r0
    }

    private void sendMessage(java.lang.String r2, int r3) {
            r1 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r0.what = r3
            r0.obj = r2
            com.bianfeng.privategetui.YmnGetuiHandler.setMsg(r0)
            return
    }

    private void setTagResult(com.igexin.sdk.message.SetTagCmdMessage r3) {
            r2 = this;
            java.lang.String r0 = r3.getSn()
            java.lang.String r3 = r3.getCode()
            int r3 = java.lang.Integer.parseInt(r3)
            if (r3 != 0) goto L14
            r3 = 1514(0x5ea, float:2.122E-42)
            r2.sendMessage(r0, r3)
            goto L2d
        L14:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "|"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            r0 = 1515(0x5eb, float:2.123E-42)
            r2.sendMessage(r3, r0)
        L2d:
            return
    }

    private void unbindAliasResult(com.igexin.sdk.message.UnBindAliasCmdMessage r3) {
            r2 = this;
            java.lang.String r0 = r3.getSn()
            java.lang.String r3 = r3.getCode()
            int r3 = java.lang.Integer.parseInt(r3)
            if (r3 != 0) goto L14
            r3 = 1504(0x5e0, float:2.108E-42)
            r2.sendMessage(r0, r3)
            goto L2d
        L14:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "|"
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            r0 = 1505(0x5e1, float:2.109E-42)
            r2.sendMessage(r3, r0)
        L2d:
            return
    }

    @Override
    public void onNotificationMessageArrived(android.content.Context r9, com.igexin.sdk.message.GTNotificationMessage r10) {
            r8 = this;
            if (r10 != 0) goto L3
            return
        L3:
            com.bianfeng.privategetui.bean.YmnGetuiMessageBean r9 = new com.bianfeng.privategetui.bean.YmnGetuiMessageBean
            java.lang.String r1 = r10.getAppid()
            java.lang.String r2 = r10.getTaskId()
            java.lang.String r3 = r10.getMessageId()
            java.lang.String r4 = r10.getPkgName()
            java.lang.String r5 = r10.getClientId()
            java.lang.String r6 = r10.getTitle()
            java.lang.String r7 = r10.getContent()
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            java.lang.String r10 = r9.toString()
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.putMsgArrived(r10)
            java.lang.String r9 = r9.toString()
            r10 = 1512(0x5e8, float:2.119E-42)
            r8.sendMessage(r9, r10)
            return
    }

    @Override
    public void onNotificationMessageClicked(android.content.Context r9, com.igexin.sdk.message.GTNotificationMessage r10) {
            r8 = this;
            if (r10 != 0) goto L3
            return
        L3:
            com.bianfeng.privategetui.bean.YmnGetuiMessageBean r9 = new com.bianfeng.privategetui.bean.YmnGetuiMessageBean
            java.lang.String r1 = r10.getAppid()
            java.lang.String r2 = r10.getTaskId()
            java.lang.String r3 = r10.getMessageId()
            java.lang.String r4 = r10.getPkgName()
            java.lang.String r5 = r10.getClientId()
            java.lang.String r6 = r10.getTitle()
            java.lang.String r7 = r10.getContent()
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            java.lang.String r10 = r9.toString()
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.putMsgClick(r10)
            java.lang.String r9 = r9.toString()
            r10 = 1513(0x5e9, float:2.12E-42)
            r8.sendMessage(r9, r10)
            return
    }

    @Override
    public void onReceiveClientId(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onReceiveClientId -> clientid = "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "GetuiSdkDemo"
            android.util.Log.e(r0, r2)
            java.lang.String r2 = "getClientid"
            java.lang.String r0 = "true"
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r2, r0)
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.putCid(r3)
            return
    }

    @Override
    public void onReceiveCommandResult(android.content.Context r2, com.igexin.sdk.message.GTCmdMessage r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onReceiveCommandResult -> "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "GetuiSdkDemo"
            android.util.Log.d(r0, r2)
            if (r3 != 0) goto L19
            return
        L19:
            int r2 = r3.getAction()
            r0 = 10009(0x2719, float:1.4026E-41)
            if (r2 != r0) goto L27
            com.igexin.sdk.message.SetTagCmdMessage r3 = (com.igexin.sdk.message.SetTagCmdMessage) r3
            r1.setTagResult(r3)
            goto L44
        L27:
            r0 = 10010(0x271a, float:1.4027E-41)
            if (r2 != r0) goto L31
            com.igexin.sdk.message.BindAliasCmdMessage r3 = (com.igexin.sdk.message.BindAliasCmdMessage) r3
            r1.bindAliasResult(r3)
            goto L44
        L31:
            r0 = 10011(0x271b, float:1.4028E-41)
            if (r2 != r0) goto L3b
            com.igexin.sdk.message.UnBindAliasCmdMessage r3 = (com.igexin.sdk.message.UnBindAliasCmdMessage) r3
            r1.unbindAliasResult(r3)
            goto L44
        L3b:
            r0 = 10006(0x2716, float:1.4021E-41)
            if (r2 != r0) goto L44
            com.igexin.sdk.message.FeedbackCmdMessage r3 = (com.igexin.sdk.message.FeedbackCmdMessage) r3
            r1.feedbackResult(r3)
        L44:
            return
    }

    @Override
    public void onReceiveDeviceToken(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            super.onReceiveDeviceToken(r1, r2)
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.putToken(r2)
            return
    }

    @Override
    public void onReceiveMessageData(android.content.Context r19, com.igexin.sdk.message.GTTransmitMessage r20) {
            r18 = this;
            r1 = r18
            r0 = r19
            java.lang.String r2 = "onResume"
            java.lang.String r3 = "content"
            java.lang.String r4 = "title"
            java.lang.String r5 = "online_display"
            java.lang.String r6 = "key"
            java.lang.String r7 = "badgenumber"
            java.lang.String r8 = "params"
            java.lang.String r9 = "ymnsdk"
            java.lang.String r10 = r20.getAppid()
            java.lang.String r11 = r20.getTaskId()
            java.lang.String r12 = r20.getMessageId()
            byte[] r13 = r20.getPayload()
            java.lang.String r14 = r20.getPkgName()
            java.lang.String r15 = r20.getClientId()
            r16 = r7
            com.igexin.sdk.PushManager r7 = com.igexin.sdk.PushManager.getInstance()
            r17 = r2
            r2 = 90001(0x15f91, float:1.26118E-40)
            boolean r2 = r7.sendFeedbackMessage(r0, r11, r12, r2)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "call sendFeedbackMessage = "
            r7.append(r0)
            if (r2 == 0) goto L4a
            java.lang.String r0 = "success"
            goto L4c
        L4a:
            java.lang.String r0 = "failed"
        L4c:
            r7.append(r0)
            java.lang.String r0 = r7.toString()
            java.lang.String r2 = "GetuiSdkDemo"
            android.util.Log.d(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r7 = "onReceiveMessageData -> appid = "
            r0.append(r7)
            r0.append(r10)
            java.lang.String r7 = "\ntaskid = "
            r0.append(r7)
            r0.append(r11)
            java.lang.String r7 = "\nmessageid = "
            r0.append(r7)
            r0.append(r12)
            java.lang.String r7 = "\npkg = "
            r0.append(r7)
            r0.append(r14)
            java.lang.String r7 = "\ncid = "
            r0.append(r7)
            r0.append(r15)
            java.lang.String r0 = r0.toString()
            android.util.Log.d(r2, r0)
            if (r13 != 0) goto L95
            java.lang.String r0 = "receiver payload = null"
            android.util.Log.e(r2, r0)
            goto L1ee
        L95:
            java.lang.String r0 = new java.lang.String
            r0.<init>(r13)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r10 = "receiver payload = "
            r7.append(r10)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            android.util.Log.d(r2, r7)
            org.json.JSONObject r7 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1ea
            r7.<init>(r0)     // Catch: java.lang.Exception -> L1ea
            boolean r0 = r7.has(r6)     // Catch: java.lang.Exception -> L1ea
            if (r0 == 0) goto Lc0
            java.lang.String r0 = r7.getString(r6)     // Catch: java.lang.Exception -> L1ea
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r6, r0)     // Catch: java.lang.Exception -> L1ea
        Lc0:
            boolean r0 = r7.has(r5)     // Catch: java.lang.Exception -> L1ea
            r6 = 0
            r10 = 1
            if (r0 == 0) goto Ld0
            int r0 = r7.getInt(r5)     // Catch: java.lang.Exception -> L1ea
            if (r0 != 0) goto Ld0
            r0 = r6
            goto Ld1
        Ld0:
            r0 = r10
        Ld1:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1ea
            r5.<init>()     // Catch: java.lang.Exception -> L1ea
            java.lang.String r11 = "online_display is "
            r5.append(r11)     // Catch: java.lang.Exception -> L1ea
            r5.append(r0)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1ea
            android.util.Log.e(r9, r5)     // Catch: java.lang.Exception -> L1ea
            boolean r5 = r7.has(r4)     // Catch: java.lang.Exception -> L1ea
            if (r5 == 0) goto Lf0
            java.lang.String r4 = r7.getString(r4)     // Catch: java.lang.Exception -> L1ea
            goto Lf2
        Lf0:
            java.lang.String r4 = "标题"
        Lf2:
            boolean r5 = r7.has(r3)     // Catch: java.lang.Exception -> L1ea
            if (r5 == 0) goto Lfd
            java.lang.String r3 = r7.getString(r3)     // Catch: java.lang.Exception -> L1ea
            goto Lff
        Lfd:
            java.lang.String r3 = "内容"
        Lff:
            boolean r5 = r7.has(r8)     // Catch: java.lang.Exception -> L1ea
            if (r5 == 0) goto L11a
            org.json.JSONArray r5 = r7.getJSONArray(r8)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1ea
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r8, r5)     // Catch: java.lang.Exception -> L1ea
            org.json.JSONArray r5 = r7.getJSONArray(r8)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1ea
            r1.params = r5     // Catch: java.lang.Exception -> L1ea
        L11a:
            java.lang.String r5 = "offline"
            java.lang.String r5 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.read(r5)     // Catch: java.lang.Exception -> L1ea
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1ea
            r7.<init>()     // Catch: java.lang.Exception -> L1ea
            java.lang.String r8 = "offline is "
            r7.append(r8)     // Catch: java.lang.Exception -> L1ea
            r7.append(r5)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Exception -> L1ea
            com.bianfeng.ymnsdk.util.Logger.e(r5)     // Catch: java.lang.Exception -> L1ea
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1ea
            r5.<init>()     // Catch: java.lang.Exception -> L1ea
            java.lang.String r7 = "onReceiveMessageData pkgname is "
            r5.append(r7)     // Catch: java.lang.Exception -> L1ea
            r5.append(r14)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1ea
            android.util.Log.e(r9, r5)     // Catch: java.lang.Exception -> L1ea
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1ea
            r5.<init>()     // Catch: java.lang.Exception -> L1ea
            java.lang.String r7 = "online_display2 is "
            r5.append(r7)     // Catch: java.lang.Exception -> L1ea
            r5.append(r0)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1ea
            android.util.Log.e(r9, r5)     // Catch: java.lang.Exception -> L1ea
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1ea
            r5.<init>()     // Catch: java.lang.Exception -> L1ea
            java.lang.String r7 = "YmnGetuiSharedPreferencesUtils.read(\"onResume\") is "
            r5.append(r7)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r7 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.read(r17)     // Catch: java.lang.Exception -> L1ea
            r5.append(r7)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L1ea
            android.util.Log.e(r9, r5)     // Catch: java.lang.Exception -> L1ea
            if (r0 != 0) goto L182
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.read(r17)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r5 = "false"
            boolean r0 = r0.equals(r5)     // Catch: java.lang.Exception -> L1ea
            if (r0 == 0) goto L1ee
        L182:
            java.lang.String r0 = r1.params     // Catch: java.lang.Exception -> L1ea
            r5 = r19
            com.bianfeng.privategetui.PushNotification.showLoacl(r5, r14, r4, r3, r0)     // Catch: java.lang.Exception -> L1ea
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.read(r16)     // Catch: java.lang.Exception -> L1ea
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Exception -> L1ea
            if (r0 != 0) goto L19f
            java.lang.String r0 = com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.read(r16)     // Catch: java.lang.Exception -> L1ea
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> L1ea
            int r6 = r0.intValue()     // Catch: java.lang.Exception -> L1ea
        L19f:
            int r6 = r6 + r10
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Exception -> L1e5
            r0.<init>()     // Catch: java.lang.Exception -> L1e5
            java.lang.String r3 = "PUSH_APP_PACKAGENAME"
            java.lang.String r3 = getMetaData(r5, r3)     // Catch: java.lang.Exception -> L1e5
            java.lang.String r4 = "package"
            r0.putString(r4, r3)     // Catch: java.lang.Exception -> L1e5
            java.lang.String r3 = "PUSH_APP_MAIN_ACTIVITY"
            java.lang.String r3 = getMetaData(r5, r3)     // Catch: java.lang.Exception -> L1e5
            java.lang.String r4 = "class"
            r0.putString(r4, r3)     // Catch: java.lang.Exception -> L1e5
            r3 = r16
            r0.putInt(r3, r6)     // Catch: java.lang.Exception -> L1e5
            android.content.ContentResolver r4 = r19.getContentResolver()     // Catch: java.lang.Exception -> L1e5
            java.lang.String r5 = "content://com.huawei.android.launcher.settings/badge/"
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L1e5
            java.lang.String r7 = "change_badge"
            r8 = 0
            r4.call(r5, r7, r8, r0)     // Catch: java.lang.Exception -> L1e5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1e5
            r0.<init>()     // Catch: java.lang.Exception -> L1e5
            java.lang.String r4 = ""
            r0.append(r4)     // Catch: java.lang.Exception -> L1e5
            r0.append(r6)     // Catch: java.lang.Exception -> L1e5
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L1e5
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.put(r3, r0)     // Catch: java.lang.Exception -> L1e5
            goto L1ee
        L1e5:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L1ea
            goto L1ee
        L1ea:
            r0 = move-exception
            r0.printStackTrace()
        L1ee:
            java.lang.String r0 = "----------------------------------------------------------------------------------------------"
            android.util.Log.d(r2, r0)
            return
    }

    @Override
    public void onReceiveOnlineState(android.content.Context r2, boolean r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onReceiveOnlineState -> "
            r2.append(r0)
            if (r3 == 0) goto Lf
            java.lang.String r0 = "online"
            goto L11
        Lf:
            java.lang.String r0 = "offline"
        L11:
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "GetuiSdkDemo"
            android.util.Log.d(r0, r2)
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.putCidState(r3)
            return
    }

    @Override
    public void onReceiveServicePid(android.content.Context r2, int r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onReceiveServicePid -> "
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "GetuiSdkDemo"
            android.util.Log.d(r0, r2)
            com.bianfeng.privategetui.YmnGetuiSharedPreferencesUtils.putPid(r3)
            return
    }
}

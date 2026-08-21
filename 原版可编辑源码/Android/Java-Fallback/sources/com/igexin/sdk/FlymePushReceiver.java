package com.igexin.sdk;

public class FlymePushReceiver extends com.meizu.cloud.pushsdk.MzPushMessageReceiver {
    public static final java.lang.String CONTENT = "content";
    public static final java.lang.String MSG_KEY_PAYLOAD = "gt_payload";
    public static final java.lang.String MZ_STATUS_BAR_SMALL_ICON = "mz_push_notification_small_icon";
    public static final java.lang.String TAG = "Assist_MZ";
    private android.content.Context a;
    private int b;

    public FlymePushReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onMessage(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            if (r3 == 0) goto L2a
            if (r4 == 0) goto L2a
            java.lang.String r0 = "Assist_MZ"
            java.lang.String r1 = "onMessage intent msg..."
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = "content"
            java.lang.String r4 = r4.getStringExtra(r0)     // Catch: java.lang.Throwable -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L2a
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = "payload"
            r0.<init>(r3, r1, r4)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r3 = "MZ_"
            r0.setMessageSource(r3)     // Catch: java.lang.Throwable -> L2a
            com.igexin.assist.action.MessageManger r3 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L2a
            r3.addMessage(r0)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    @Override
    public void onMessage(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "Assist_MZ"
            java.lang.String r1 = "onMessage receive msg ..."
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L22
            if (r3 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L22
            if (r0 != 0) goto L22
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "payload"
            r0.<init>(r3, r1, r4)     // Catch: java.lang.Throwable -> L22
            java.lang.String r3 = "MZ_"
            r0.setMessageSource(r3)     // Catch: java.lang.Throwable -> L22
            com.igexin.assist.action.MessageManger r3 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L22
            r3.addMessage(r0)     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    @Override
    public void onNotificationArrived(android.content.Context r1, com.meizu.cloud.pushsdk.handler.MzPushMessage r2) {
            r0 = this;
            java.lang.String r1 = "Assist_MZ"
            java.lang.String r2 = "onNotificationArrived receive msg ..."
            android.util.Log.d(r1, r2)
            return
    }

    @Override
    public void onNotificationClicked(android.content.Context r4, com.meizu.cloud.pushsdk.handler.MzPushMessage r5) {
            r3 = this;
            java.lang.String r0 = "gt_payload"
            java.lang.String r1 = "Assist_MZ"
            java.lang.String r2 = "onNotificationClicked receive msg ..."
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = r5.getSelfDefineContentString()     // Catch: java.lang.Throwable -> L40
            if (r4 == 0) goto L3d
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L40
            if (r1 != 0) goto L3d
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L24
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L24
            boolean r2 = r1.has(r0)     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L24
            java.lang.String r5 = r1.getString(r0)     // Catch: java.lang.Throwable -> L24
        L24:
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L40
            if (r0 != 0) goto L3d
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L40
            java.lang.String r1 = "payload"
            r0.<init>(r4, r1, r5)     // Catch: java.lang.Throwable -> L40
            java.lang.String r5 = "MZ_"
            r0.setMessageSource(r5)     // Catch: java.lang.Throwable -> L40
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L40
            r5.addMessage(r0)     // Catch: java.lang.Throwable -> L40
        L3d:
            com.igexin.assist.util.AssistUtils.startGetuiService(r4)     // Catch: java.lang.Throwable -> L40
        L40:
            return
    }

    @Override
    public void onPushStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.PushSwitchStatus r2) {
            r0 = this;
            return
    }

    @Override
    public void onReceive(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            r0.a = r1
            super.onReceive(r1, r2)
            return
    }

    @Override
    public void onRegister(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "Assist_MZ"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "onRegister :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d
            r1.append(r6)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3d
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L3d
            if (r5 == 0) goto L3d
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L3d
            if (r0 != 0) goto L3d
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L3d
            java.lang.String r1 = "token"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            r2.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r3 = "MZ_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L3d
            r2.append(r6)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L3d
            r0.<init>(r5, r1, r6)     // Catch: java.lang.Throwable -> L3d
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L3d
            r5.addMessage(r0)     // Catch: java.lang.Throwable -> L3d
        L3d:
            return
    }

    @Override
    public void onRegisterStatus(android.content.Context r5, com.meizu.cloud.pushsdk.platform.message.RegisterStatus r6) {
            r4 = this;
            java.lang.String r0 = "Assist_MZ"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r1.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "onRegisterStatus :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L41
            r1.append(r6)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L41
            android.util.Log.d(r0, r1)     // Catch: java.lang.Throwable -> L41
            java.lang.String r6 = r6.getPushId()     // Catch: java.lang.Throwable -> L41
            if (r5 == 0) goto L41
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L41
            if (r0 != 0) goto L41
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "token"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L41
            r2.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = "MZ_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L41
            r2.append(r6)     // Catch: java.lang.Throwable -> L41
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L41
            r0.<init>(r5, r1, r6)     // Catch: java.lang.Throwable -> L41
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L41
            r5.addMessage(r0)     // Catch: java.lang.Throwable -> L41
        L41:
            return
    }

    @Override
    public void onSubAliasStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.SubAliasStatus r2) {
            r0 = this;
            return
    }

    @Override
    public void onSubTagsStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.SubTagsStatus r2) {
            r0 = this;
            return
    }

    @Override
    public void onUnRegister(android.content.Context r1, boolean r2) {
            r0 = this;
            return
    }

    @Override
    public void onUnRegisterStatus(android.content.Context r1, com.meizu.cloud.pushsdk.platform.message.UnRegisterStatus r2) {
            r0 = this;
            return
    }

    @Override
    public void onUpdateNotificationBuilder(com.meizu.cloud.pushsdk.notification.PushNotificationBuilder r5) {
            r4 = this;
            int r0 = r4.b     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto La
            int r0 = r4.b     // Catch: java.lang.Throwable -> L27
        L6:
            r5.setStatusBarIcon(r0)     // Catch: java.lang.Throwable -> L27
            goto L27
        La:
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L27
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L27
            android.content.res.Resources r0 = r0.getResources()     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "mz_push_notification_small_icon"
            java.lang.String r2 = "drawable"
            android.content.Context r3 = r4.a     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = r3.getPackageName()     // Catch: java.lang.Throwable -> L27
            int r0 = r0.getIdentifier(r1, r2, r3)     // Catch: java.lang.Throwable -> L27
            r4.b = r0     // Catch: java.lang.Throwable -> L27
            if (r0 == 0) goto L27
            goto L6
        L27:
            return
    }
}

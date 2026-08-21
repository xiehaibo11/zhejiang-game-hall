package com.igexin.sdk;

public class HmsPushMessageService extends com.huawei.hms.push.HmsMessageService {
    public static final java.lang.String TAG = "Assist_HW";

    public HmsPushMessageService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onMessageReceived(com.huawei.hms.push.RemoteMessage r4) {
            r3 = this;
            if (r4 != 0) goto La
            java.lang.String r4 = "Assist_HW"
            java.lang.String r0 = "Received message entity is null!"
            android.util.Log.e(r4, r0)     // Catch: java.lang.Throwable -> L2f
            return
        La:
            java.lang.String r0 = r4.getData()     // Catch: java.lang.Throwable -> L2f
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto L2f
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L2f
            android.content.Context r1 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r2 = "payload"
            java.lang.String r4 = r4.getData()     // Catch: java.lang.Throwable -> L2f
            r0.<init>(r1, r2, r4)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r4 = "HW_"
            r0.setMessageSource(r4)     // Catch: java.lang.Throwable -> L2f
            com.igexin.assist.action.MessageManger r4 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L2f
            r4.addMessage(r0)     // Catch: java.lang.Throwable -> L2f
        L2f:
            return
    }

    @Override
    public void onNewToken(java.lang.String r6) {
            r5 = this;
            java.lang.String r0 = "Assist_HW"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r1.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "onNewToken :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3f
            r1.append(r6)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3f
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L3f
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L3f
            if (r0 != 0) goto L3f
            com.igexin.assist.MessageBean r0 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L3f
            android.content.Context r1 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r2 = "token"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r3.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r4 = "HW_"
            r3.append(r4)     // Catch: java.lang.Throwable -> L3f
            r3.append(r6)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L3f
            r0.<init>(r1, r2, r6)     // Catch: java.lang.Throwable -> L3f
            com.igexin.assist.action.MessageManger r6 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L3f
            r6.addMessage(r0)     // Catch: java.lang.Throwable -> L3f
        L3f:
            return
    }

    @Override
    public void onNewToken(java.lang.String r5, android.os.Bundle r6) {
            r4 = this;
            java.lang.String r6 = "Assist_HW"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r0.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "onNewTokenAndBundle :"
            r0.append(r1)     // Catch: java.lang.Throwable -> L3f
            r0.append(r5)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L3f
            android.util.Log.i(r6, r0)     // Catch: java.lang.Throwable -> L3f
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3f
            if (r6 != 0) goto L3f
            com.igexin.assist.MessageBean r6 = new com.igexin.assist.MessageBean     // Catch: java.lang.Throwable -> L3f
            android.content.Context r0 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r1 = "token"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f
            r2.<init>()     // Catch: java.lang.Throwable -> L3f
            java.lang.String r3 = "HW_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L3f
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L3f
            r6.<init>(r0, r1, r5)     // Catch: java.lang.Throwable -> L3f
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L3f
            r5.addMessage(r6)     // Catch: java.lang.Throwable -> L3f
        L3f:
            return
    }
}

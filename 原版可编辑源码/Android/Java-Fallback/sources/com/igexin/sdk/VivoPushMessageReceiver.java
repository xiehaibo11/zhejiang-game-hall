package com.igexin.sdk;

public class VivoPushMessageReceiver extends com.vivo.push.sdk.OpenClientPushMessageReceiver {
    public static final java.lang.String TAG = "Assist_VV";

    public VivoPushMessageReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceiveRegId(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "Assist_VV"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "onReceiveRegId :"
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
            java.lang.String r3 = "VV_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L3d
            r2.append(r6)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L3d
            r0.<init>(r5, r1, r6)     // Catch: java.lang.Throwable -> L3d
            com.igexin.assist.action.MessageManger r5 = com.igexin.assist.action.MessageManger.getInstance()     // Catch: java.lang.Throwable -> L3d
            r5.addMessage(r0)     // Catch: java.lang.Throwable -> L3d
        L3d:
            return
    }
}

package com.bianfeng.privategetui;

public class PushReceiver extends android.content.BroadcastReceiver {
    public static final java.lang.String ACTION_LOCAL = "com.bianfeng.push.action.local";
    private static final java.lang.String TAG = "PushReceiver";
    public static java.lang.String mMessageid;
    public static java.lang.String mTaskid;

    public PushReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final android.content.Intent createLocalAction(android.content.Context r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.privategetui.PushReceiver> r1 = com.bianfeng.privategetui.PushReceiver.class
            r0.<init>(r2, r1)
            java.lang.String r2 = "com.bianfeng.push.action.local"
            r0.setAction(r2)
            java.lang.String r2 = "tickerText"
            r0.putExtra(r2, r3)
            java.lang.String r2 = "title"
            r0.putExtra(r2, r4)
            java.lang.String r2 = "message"
            r0.putExtra(r2, r5)
            return r0
    }

    public static final void processGetuiAction(android.content.Context r3, android.content.Intent r4) {
            android.os.Bundle r4 = r4.getExtras()
            java.lang.String r0 = "action"
            int r0 = r4.getInt(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "received action: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PushReceiver"
            android.util.Log.d(r2, r1)
            r1 = 10001(0x2711, float:1.4014E-41)
            if (r0 == r1) goto L47
            r1 = 10002(0x2712, float:1.4016E-41)
            if (r0 == r1) goto L29
            goto L8c
        L29:
            java.lang.String r0 = "clientid"
            java.lang.String r4 = r4.getString(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "push cid:"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            android.util.Log.d(r2, r4)
            setTag(r3)
            goto L8c
        L47:
            java.lang.String r3 = "payload"
            byte[] r3 = r4.getByteArray(r3)
            if (r3 == 0) goto L68
            java.lang.String r0 = new java.lang.String
            r0.<init>(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "Got Payload:"
            r3.append(r1)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            android.util.Log.d(r2, r3)
        L68:
            java.lang.String r3 = "taskid"
            java.lang.String r3 = r4.getString(r3)
            com.bianfeng.privategetui.PushReceiver.mTaskid = r3
            java.lang.String r3 = "messageid"
            java.lang.String r3 = r4.getString(r3)
            com.bianfeng.privategetui.PushReceiver.mMessageid = r3
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r0 = 0
            java.lang.String r1 = com.bianfeng.privategetui.PushReceiver.mTaskid
            r4[r0] = r1
            r0 = 1
            r4[r0] = r3
            java.lang.String r3 = "taskid = %s; messageid = %s;"
            java.lang.String r3 = java.lang.String.format(r3, r4)
            android.util.Log.d(r2, r3)
        L8c:
            return
    }

    public static final void processLocalAction(android.content.Context r3, android.content.Intent r4) {
            java.lang.String r0 = r4.getAction()
            java.lang.String r1 = "com.bianfeng.push.action.local"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto Ld
            return
        Ld:
            java.lang.String r0 = "tickerText"
            java.lang.String r0 = r4.getStringExtra(r0)
            java.lang.String r1 = "title"
            java.lang.String r1 = r4.getStringExtra(r1)
            java.lang.String r2 = "message"
            java.lang.String r4 = r4.getStringExtra(r2)
            com.bianfeng.privategetui.PushNotification.show(r3, r0, r1, r4)
            return
    }

    private static void setTag(android.content.Context r5) {
            com.igexin.sdk.PushManager r0 = com.igexin.sdk.PushManager.getInstance()
            com.igexin.sdk.Tag[] r1 = com.bianfeng.privategetui.PushTag.createPushTags()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = ""
            r2.append(r3)
            long r3 = java.lang.System.currentTimeMillis()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            int r5 = r0.setTag(r5, r1, r2)
            if (r5 == 0) goto L34
            r0 = 20001(0x4e21, float:2.8027E-41)
            java.lang.String r1 = "PushReceiver"
            if (r5 == r0) goto L2f
            java.lang.String r5 = "set tag failed, catch exception"
            android.util.Log.d(r1, r5)
            goto L34
        L2f:
            java.lang.String r5 = "set tag failed, error count"
            android.util.Log.d(r1, r5)
        L34:
            return
    }

    @Override
    public void onReceive(android.content.Context r3, android.content.Intent r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "received message "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushReceiver"
            android.util.Log.d(r1, r0)
            processLocalAction(r3, r4)
            processGetuiAction(r3, r4)
            return
    }
}

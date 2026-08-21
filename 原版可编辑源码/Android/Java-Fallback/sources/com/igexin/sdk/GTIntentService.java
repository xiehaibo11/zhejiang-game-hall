package com.igexin.sdk;

public class GTIntentService extends android.app.Service {
    private static final int REMOTE_CLINET_RECEIVED = 2;
    private static final int REMOTE_MSG_RECEIVED = 1;
    public final java.lang.String TAG;
    private final android.os.Messenger client;

    public GTIntentService() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getName()
            r2.TAG = r0
            android.os.Messenger r0 = new android.os.Messenger
            com.igexin.sdk.a r1 = new com.igexin.sdk.a
            r1.<init>(r2)
            r0.<init>(r1)
            r2.client = r0
            return
    }

    @Override
    public final android.os.IBinder onBind(android.content.Intent r3) {
            r2 = this;
            com.igexin.b.a.c.a.c r3 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onBind "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r3.a(r0)
            android.os.Messenger r3 = r2.client
            android.os.IBinder r3 = r3.getBinder()
            return r3
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            super.onDestroy()
            return
    }

    public void onNotificationMessageArrived(android.content.Context r1, com.igexin.sdk.message.GTNotificationMessage r2) {
            r0 = this;
            return
    }

    public void onNotificationMessageClicked(android.content.Context r1, com.igexin.sdk.message.GTNotificationMessage r2) {
            r0 = this;
            return
    }

    public void onReceiveClientId(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void onReceiveCommandResult(android.content.Context r1, com.igexin.sdk.message.GTCmdMessage r2) {
            r0 = this;
            return
    }

    public void onReceiveDeviceToken(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }

    public void onReceiveMessageData(android.content.Context r1, com.igexin.sdk.message.GTTransmitMessage r2) {
            r0 = this;
            return
    }

    public void onReceiveOnlineState(android.content.Context r1, boolean r2) {
            r0 = this;
            return
    }

    public void onReceiveServicePid(android.content.Context r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            if (r1 == 0) goto L5
            r0.processOnHandleIntent(r0, r1)
        L5:
            r1 = 2
            return r1
    }

    @Override
    public boolean onUnbind(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.onUnbind(r1)
            return r1
    }

    public void processOnHandleIntent(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r5 == 0) goto Lf1
            if (r4 != 0) goto L6
            goto Lf1
        L6:
            android.os.Bundle r0 = r5.getExtras()
            if (r0 == 0) goto Lf1
            java.lang.String r1 = "action"
            java.lang.Object r2 = r0.get(r1)
            if (r2 == 0) goto Lf1
            java.lang.Object r2 = r0.get(r1)
            boolean r2 = r2 instanceof java.lang.Integer
            if (r2 != 0) goto L1e
            goto Lf1
        L1e:
            int r1 = r0.getInt(r1)
            android.content.Context r4 = r4.getApplicationContext()
            r2 = 10001(0x2711, float:1.4014E-41)
            if (r1 == r2) goto Ldd
            r2 = 10002(0x2712, float:1.4016E-41)
            if (r1 == r2) goto Lcd
            r2 = 10007(0x2717, float:1.4023E-41)
            if (r1 == r2) goto Lc3
            r2 = 10008(0x2718, float:1.4024E-41)
            if (r1 == r2) goto Lb3
            r2 = 10016(0x2720, float:1.4035E-41)
            if (r1 == r2) goto La3
            switch(r1) {
                case 10010: goto L76;
                case 10011: goto L63;
                case 10012: goto L50;
                case 10013: goto L3f;
                default: goto L3d;
            }
        L3d:
            goto Lf1
        L3f:
            java.lang.String r5 = "deviceToken"
            java.lang.String r5 = r0.getString(r5)
            r3.onReceiveDeviceToken(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() = received device token "
            goto Lee
        L50:
            java.lang.String r0 = "notification_clicked"
            java.io.Serializable r5 = r5.getSerializableExtra(r0)
            com.igexin.sdk.message.GTNotificationMessage r5 = (com.igexin.sdk.message.GTNotificationMessage) r5
            r3.onNotificationMessageClicked(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() notification clicked "
            goto Lee
        L63:
            java.lang.String r0 = "notification_arrived"
            java.io.Serializable r5 = r5.getSerializableExtra(r0)
            com.igexin.sdk.message.GTNotificationMessage r5 = (com.igexin.sdk.message.GTNotificationMessage) r5
            r3.onNotificationMessageArrived(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() = notification arrived "
            goto Lee
        L76:
            java.lang.String r0 = "cmd_msg"
            java.io.Serializable r1 = r5.getSerializableExtra(r0)
            com.igexin.sdk.message.GTCmdMessage r1 = (com.igexin.sdk.message.GTCmdMessage) r1
            r3.onReceiveCommandResult(r4, r1)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onHandleIntent() = "
            r1.append(r2)
            java.io.Serializable r5 = r5.getSerializableExtra(r0)
            java.lang.Class r5 = r5.getClass()
            java.lang.String r5 = r5.getSimpleName()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            goto Lee
        La3:
            java.lang.String r0 = "revocation_taskId"
            java.lang.String r5 = r5.getStringExtra(r0)
            r3.revocationTransmitMsg(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() message revocation "
            goto Lee
        Lb3:
            java.lang.String r5 = "pid"
            int r5 = r0.getInt(r5)
            r3.onReceiveServicePid(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() = get sdk service pid "
            goto Lee
        Lc3:
            java.lang.String r5 = "onlineState"
            boolean r5 = r0.getBoolean(r5)
            r3.onReceiveOnlineState(r4, r5)
            goto Lf1
        Lcd:
            java.lang.String r5 = "clientid"
            java.lang.String r5 = r0.getString(r5)
            r3.onReceiveClientId(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() = received client id "
            goto Lee
        Ldd:
            java.lang.String r0 = "transmit_data"
            java.io.Serializable r5 = r5.getSerializableExtra(r0)
            com.igexin.sdk.message.GTTransmitMessage r5 = (com.igexin.sdk.message.GTTransmitMessage) r5
            r3.onReceiveMessageData(r4, r5)
            com.igexin.b.a.c.a.c r4 = com.igexin.b.a.c.a.c.a()
            java.lang.String r5 = "onHandleIntent() = received msg data "
        Lee:
            r4.a(r5)
        Lf1:
            return
    }

    public void revocationTransmitMsg(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }
}

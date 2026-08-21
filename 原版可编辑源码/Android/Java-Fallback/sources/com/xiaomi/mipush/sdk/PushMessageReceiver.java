package com.xiaomi.mipush.sdk;

public abstract class PushMessageReceiver extends android.content.BroadcastReceiver {
    public PushMessageReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    public void onCommandResult(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushCommandMessage r2) {
            r0 = this;
            return
    }

    public void onNotificationMessageArrived(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushMessage r2) {
            r0 = this;
            return
    }

    public void onNotificationMessageClicked(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushMessage r2) {
            r0 = this;
            return
    }

    @Override
    public final void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            if (r5 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[CRcv] receive a msg broadcast: "
            r0.append(r1)
            java.lang.String r1 = r5.getAction()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
        L1a:
            android.content.Context r0 = r4.getApplicationContext()
            com.xiaomi.mipush.sdk.MessageHandleService$a r1 = new com.xiaomi.mipush.sdk.MessageHandleService$a
            r1.<init>(r5, r3)
            com.xiaomi.mipush.sdk.MessageHandleService.addJob(r0, r1)
            java.lang.String r0 = "eventMessageType"
            r1 = -1
            int r0 = r5.getIntExtra(r0, r1)     // Catch: java.lang.Exception -> L5a
            r1 = 2000(0x7d0, float:2.803E-42)
            r2 = 0
            if (r0 != r1) goto L44
            android.content.Context r0 = r4.getApplicationContext()     // Catch: java.lang.Exception -> L5a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L5a
            r1 = 2003(0x7d3, float:2.807E-42)
            r0.a(r4, r5, r1, r2)     // Catch: java.lang.Exception -> L5a
            goto L6f
        L44:
            r1 = 6000(0x1770, float:8.408E-42)
            if (r0 != r1) goto L6f
            android.content.Context r0 = r4.getApplicationContext()     // Catch: java.lang.Exception -> L5a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Exception -> L5a
            r1 = 6005(0x1775, float:8.415E-42)
            r0.a(r4, r5, r1, r2)     // Catch: java.lang.Exception -> L5a
            goto L6f
        L5a:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "meet error in PushMessageReceiver. "
            r5.append(r0)
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r4)
        L6f:
            return
    }

    @java.lang.Deprecated
    public void onReceiveMessage(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushMessage r2) {
            r0 = this;
            return
    }

    public void onReceivePassThroughMessage(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushMessage r2) {
            r0 = this;
            return
    }

    public void onReceiveRegisterResult(android.content.Context r1, com.xiaomi.mipush.sdk.MiPushCommandMessage r2) {
            r0 = this;
            return
    }

    public void onRequirePermissions(android.content.Context r1, java.lang.String[] r2) {
            r0 = this;
            return
    }
}

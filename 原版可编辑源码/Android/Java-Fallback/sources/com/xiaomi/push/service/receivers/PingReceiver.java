package com.xiaomi.push.service.receivers;

public class PingReceiver extends android.content.BroadcastReceiver {
    public PingReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r4, android.content.Intent r5) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.getPackage()
            r0.append(r1)
            java.lang.String r1 = " is the package name"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            boolean r0 = com.xiaomi.push.service.XMPushService.e()
            if (r0 == 0) goto L1f
            return
        L1f:
            java.lang.String r0 = com.xiaomi.push.service.bk.p
            java.lang.String r1 = r5.getAction()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L60
            java.lang.String r0 = r4.getPackageName()
            java.lang.String r5 = r5.getPackage()
            boolean r5 = android.text.TextUtils.equals(r0, r5)
            if (r5 == 0) goto L68
            java.lang.String r5 = "Ping XMChannelService on timer"
            com.xiaomi.channel.commonutils.logger.b.c(r5)
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Exception -> L5b
            java.lang.Class<com.xiaomi.push.service.XMPushService> r0 = com.xiaomi.push.service.XMPushService.class
            r5.<init>(r4, r0)     // Catch: java.lang.Exception -> L5b
            java.lang.String r0 = "time_stamp"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5b
            r5.putExtra(r0, r1)     // Catch: java.lang.Exception -> L5b
            java.lang.String r0 = "com.xiaomi.push.timer"
            r5.setAction(r0)     // Catch: java.lang.Exception -> L5b
            com.xiaomi.push.service.ServiceClient r4 = com.xiaomi.push.service.ServiceClient.getInstance(r4)     // Catch: java.lang.Exception -> L5b
            r4.startServiceSafely(r5)     // Catch: java.lang.Exception -> L5b
            goto L68
        L5b:
            r4 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            goto L68
        L60:
            java.lang.String r4 = "cancel the old ping timer"
            com.xiaomi.channel.commonutils.logger.b.a(r4)
            com.xiaomi.push.eu.a()
        L68:
            return
    }
}

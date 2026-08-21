package com.xiaomi.push.service;

class cm implements java.lang.Runnable {
    final com.xiaomi.push.service.XMPushService a;

    cm(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.xiaomi.push.service.XMPushService r0 = r3.a
            r1 = 1
            com.xiaomi.push.service.XMPushService.a(r0, r1)
            java.lang.String r0 = "try to trigger the wifi digest broadcast."
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L21
            com.xiaomi.push.service.XMPushService r0 = r3.a     // Catch: java.lang.Throwable -> L21
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = "MiuiWifiService"
            java.lang.Object r0 = r0.getSystemService(r1)     // Catch: java.lang.Throwable -> L21
            if (r0 == 0) goto L21
            java.lang.String r1 = "sendCurrentWifiDigestInfo"
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L21
            com.xiaomi.push.bk.b(r0, r1, r2)     // Catch: java.lang.Throwable -> L21
        L21:
            return
    }
}

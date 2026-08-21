package com.xiaomi.push.service;

class cn implements java.lang.Runnable {
    final com.xiaomi.push.service.XMPushService a;

    cn(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.xiaomi.push.service.XMPushService r0 = r4.a     // Catch: java.lang.Throwable -> L23
            android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> L23
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L23
            android.content.ComponentName r1 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L23
            com.xiaomi.push.service.XMPushService r2 = r4.a     // Catch: java.lang.Throwable -> L23
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L23
            java.lang.String r3 = "com.xiaomi.push.service.receivers.PingReceiver"
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L23
            int r2 = r0.getComponentEnabledSetting(r1)     // Catch: java.lang.Throwable -> L23
            r3 = 2
            if (r2 == r3) goto L38
            r2 = 1
            r0.setComponentEnabledSetting(r1, r3, r2)     // Catch: java.lang.Throwable -> L23
            goto L38
        L23:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "[Alarm] disable ping receiver may be failure. "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L38:
            return
    }
}

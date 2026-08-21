package com.xiaomi.push;

final class p implements java.lang.Runnable {
    final android.content.ComponentName a;
    final android.content.Context a;

    p(android.content.Context r1, android.content.ComponentName r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L16
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L16
            android.content.ComponentName r1 = r4.a     // Catch: java.lang.Throwable -> L16
            int r1 = r0.getComponentEnabledSetting(r1)     // Catch: java.lang.Throwable -> L16
            r2 = 2
            if (r1 == r2) goto L2b
            android.content.ComponentName r1 = r4.a     // Catch: java.lang.Throwable -> L16
            r3 = 1
            r0.setComponentEnabledSetting(r1, r2, r3)     // Catch: java.lang.Throwable -> L16
            goto L2b
        L16:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "close static register of network status receiver failed:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L2b:
            return
    }
}

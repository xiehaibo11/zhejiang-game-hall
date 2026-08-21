package com.xiaomi.mipush.sdk;

final class y implements java.lang.Runnable {
    final android.content.Context a;
    final android.content.Intent a;

    y(android.content.Context r1, android.content.Intent r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            android.content.Context r0 = r2.a     // Catch: java.lang.Exception -> L8
            android.content.Intent r1 = r2.a     // Catch: java.lang.Exception -> L8
            r0.startService(r1)     // Catch: java.lang.Exception -> L8
            goto L10
        L8:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L10:
            return
    }
}

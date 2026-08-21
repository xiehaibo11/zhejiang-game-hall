package com.alipay.sdk.util;

class f implements android.content.ServiceConnection {
    final com.alipay.sdk.util.e a;

    f(com.alipay.sdk.util.e r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onServiceConnected(android.content.ComponentName r2, android.os.IBinder r3) {
            r1 = this;
            com.alipay.sdk.util.e r2 = r1.a
            java.lang.Object r2 = com.alipay.sdk.util.e.a(r2)
            monitor-enter(r2)
            com.alipay.sdk.util.e r0 = r1.a     // Catch: java.lang.Throwable -> L1b
            com.alipay.android.app.IAlixPay r3 = com.alipay.android.app.IAlixPay.Stub.asInterface(r3)     // Catch: java.lang.Throwable -> L1b
            com.alipay.sdk.util.e.a(r0, r3)     // Catch: java.lang.Throwable -> L1b
            com.alipay.sdk.util.e r3 = r1.a     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r3 = com.alipay.sdk.util.e.a(r3)     // Catch: java.lang.Throwable -> L1b
            r3.notify()     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            return
        L1b:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1b
            throw r3
    }

    @Override
    public void onServiceDisconnected(android.content.ComponentName r2) {
            r1 = this;
            com.alipay.sdk.util.e r2 = r1.a
            r0 = 0
            com.alipay.sdk.util.e.a(r2, r0)
            return
    }
}

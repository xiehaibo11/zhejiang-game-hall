package com.alipay.apmobilesecuritysdk.f;

public final class c implements java.lang.Runnable {
    public final com.alipay.apmobilesecuritysdk.f.b a;

    public c(com.alipay.apmobilesecuritysdk.f.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r3 = this;
            r0 = 0
            android.os.Process.setThreadPriority(r0)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
        L4:
            com.alipay.apmobilesecuritysdk.f.b r1 = r3.a     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.util.LinkedList r1 = com.alipay.apmobilesecuritysdk.f.b.a(r1)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            if (r1 != 0) goto L2b
            com.alipay.apmobilesecuritysdk.f.b r1 = r3.a     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.util.LinkedList r1 = com.alipay.apmobilesecuritysdk.f.b.a(r1)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.lang.Runnable r1 = (java.lang.Runnable) r1     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            com.alipay.apmobilesecuritysdk.f.b r2 = r3.a     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.util.LinkedList r2 = com.alipay.apmobilesecuritysdk.f.b.a(r2)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            r2.remove(r0)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            if (r1 == 0) goto L4
            r1.run()     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            goto L4
        L2b:
            com.alipay.apmobilesecuritysdk.f.b r0 = r3.a
            com.alipay.apmobilesecuritysdk.f.b.b(r0)
            return
        L31:
            r0 = move-exception
            com.alipay.apmobilesecuritysdk.f.b r1 = r3.a
            com.alipay.apmobilesecuritysdk.f.b.b(r1)
            goto L39
        L38:
            throw r0
        L39:
            goto L38
    }
}

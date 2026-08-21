package com.igexin.sdk;

class d implements java.lang.Runnable {
    final android.content.Context a;
    final com.igexin.sdk.PushManager b;

    d(com.igexin.sdk.PushManager r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            com.igexin.sdk.PushManager r0 = r4.b     // Catch: java.lang.Throwable -> L2e
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L2e
            android.app.Application r0 = com.igexin.sdk.PushManager.a(r0, r1)     // Catch: java.lang.Throwable -> L2e
            if (r0 != 0) goto Lb
            return
        Lb:
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L2e
            com.igexin.sdk.PushManager r1 = r4.b     // Catch: java.lang.Throwable -> L2b
            com.igexin.push.core.g r1 = com.igexin.sdk.PushManager.a(r1)     // Catch: java.lang.Throwable -> L2b
            if (r1 != 0) goto L29
            com.igexin.sdk.PushManager r1 = r4.b     // Catch: java.lang.Throwable -> L2b
            com.igexin.push.core.g r2 = new com.igexin.push.core.g     // Catch: java.lang.Throwable -> L2b
            android.content.Context r3 = r4.a     // Catch: java.lang.Throwable -> L2b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2b
            com.igexin.sdk.PushManager.a(r1, r2)     // Catch: java.lang.Throwable -> L2b
            com.igexin.sdk.PushManager r1 = r4.b     // Catch: java.lang.Throwable -> L2b
            com.igexin.push.core.g r1 = com.igexin.sdk.PushManager.a(r1)     // Catch: java.lang.Throwable -> L2b
            r0.registerActivityLifecycleCallbacks(r1)     // Catch: java.lang.Throwable -> L2b
        L29:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L2b
            goto L2e
        L2b:
            r0 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L2b
            throw r0     // Catch: java.lang.Throwable -> L2e
        L2e:
            return
    }
}

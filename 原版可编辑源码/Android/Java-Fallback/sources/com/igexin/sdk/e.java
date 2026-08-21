package com.igexin.sdk;

class e implements java.lang.Runnable {
    final android.content.Context a;
    final com.igexin.sdk.PushManager b;

    e(com.igexin.sdk.PushManager r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.igexin.sdk.PushManager r0 = r2.b     // Catch: java.lang.Throwable -> L1a
            android.content.Context r1 = r2.a     // Catch: java.lang.Throwable -> L1a
            android.app.Application r0 = com.igexin.sdk.PushManager.a(r0, r1)     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto Lb
            return
        Lb:
            com.igexin.sdk.PushManager r1 = r2.b     // Catch: java.lang.Throwable -> L1a
            com.igexin.push.core.g r1 = com.igexin.sdk.PushManager.a(r1)     // Catch: java.lang.Throwable -> L1a
            r0.unregisterActivityLifecycleCallbacks(r1)     // Catch: java.lang.Throwable -> L1a
            com.igexin.sdk.PushManager r0 = r2.b     // Catch: java.lang.Throwable -> L1a
            r1 = 0
            com.igexin.sdk.PushManager.a(r0, r1)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }
}

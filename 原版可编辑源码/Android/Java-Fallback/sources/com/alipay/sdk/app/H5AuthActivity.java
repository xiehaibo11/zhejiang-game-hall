package com.alipay.sdk.app;

public class H5AuthActivity extends com.alipay.sdk.app.H5PayActivity {
    public H5AuthActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a() {
            r2 = this;
            java.lang.Object r0 = com.alipay.sdk.app.AuthTask.c
            monitor-enter(r0)
            r0.notify()     // Catch: java.lang.Throwable -> L7 java.lang.Exception -> L9
            goto L9
        L7:
            r1 = move-exception
            goto Lb
        L9:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            return
        Lb:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7
            throw r1
    }
}

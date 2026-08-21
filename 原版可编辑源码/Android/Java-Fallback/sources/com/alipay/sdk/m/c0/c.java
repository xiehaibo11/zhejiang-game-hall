package com.alipay.sdk.m.c0;

public final class c implements java.lang.Runnable {
    public final com.alipay.sdk.m.c0.b a;

    public c(com.alipay.sdk.m.c0.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r1 = this;
            com.alipay.sdk.m.c0.b r0 = r1.a     // Catch: java.lang.Exception -> L6
            com.alipay.sdk.m.c0.b.a(r0)     // Catch: java.lang.Exception -> L6
            return
        L6:
            r0 = move-exception
            com.alipay.sdk.m.c0.d.a(r0)
            return
    }
}

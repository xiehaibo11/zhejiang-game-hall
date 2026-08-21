package com.alipay.security.mobile.module.d;

final class c implements java.lang.Runnable {
    final com.alipay.security.mobile.module.d.b a;

    c(com.alipay.security.mobile.module.d.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r1 = this;
            com.alipay.security.mobile.module.d.b r0 = r1.a     // Catch: java.lang.Exception -> L6
            com.alipay.security.mobile.module.d.b.a(r0)     // Catch: java.lang.Exception -> L6
            return
        L6:
            r0 = move-exception
            com.alipay.security.mobile.module.d.d.a(r0)
            return
    }
}

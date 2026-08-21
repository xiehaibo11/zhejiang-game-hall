package com.alipay.sdk.data;

class b implements java.lang.Runnable {
    final android.content.Context a;
    final com.alipay.sdk.data.a b;

    b(com.alipay.sdk.data.a r1, android.content.Context r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            com.alipay.sdk.packet.impl.b r0 = new com.alipay.sdk.packet.impl.b     // Catch: java.lang.Throwable -> L1c
            r0.<init>()     // Catch: java.lang.Throwable -> L1c
            android.content.Context r1 = r2.a     // Catch: java.lang.Throwable -> L1c
            com.alipay.sdk.packet.b r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L20
            com.alipay.sdk.data.a r1 = r2.b     // Catch: java.lang.Throwable -> L1c
            java.lang.String r0 = r0.b()     // Catch: java.lang.Throwable -> L1c
            com.alipay.sdk.data.a.a(r1, r0)     // Catch: java.lang.Throwable -> L1c
            com.alipay.sdk.data.a r0 = r2.b     // Catch: java.lang.Throwable -> L1c
            com.alipay.sdk.data.a.a(r0)     // Catch: java.lang.Throwable -> L1c
            goto L20
        L1c:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
        L20:
            return
    }
}

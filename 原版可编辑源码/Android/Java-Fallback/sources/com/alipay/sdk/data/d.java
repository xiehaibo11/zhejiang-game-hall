package com.alipay.sdk.data;

class d implements java.util.concurrent.Callable<java.lang.String> {
    final android.content.Context a;
    final java.util.HashMap b;
    final com.alipay.sdk.data.c c;

    d(com.alipay.sdk.data.c r1, android.content.Context r2, java.util.HashMap r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    public java.lang.String a() throws java.lang.Exception {
            r3 = this;
            com.alipay.sdk.data.c r0 = r3.c
            android.content.Context r1 = r3.a
            java.util.HashMap r2 = r3.b
            java.lang.String r0 = com.alipay.sdk.data.c.a(r0, r1, r2)
            return r0
    }

    @Override
    public java.lang.String call() throws java.lang.Exception {
            r1 = this;
            java.lang.String r0 = r1.a()
            return r0
    }
}

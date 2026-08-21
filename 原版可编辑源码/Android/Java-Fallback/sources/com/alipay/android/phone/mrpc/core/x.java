package com.alipay.android.phone.mrpc.core;

public final class x {
    public com.alipay.android.phone.mrpc.core.g a;
    public com.alipay.android.phone.mrpc.core.z b;

    public x(com.alipay.android.phone.mrpc.core.g r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            com.alipay.android.phone.mrpc.core.z r1 = new com.alipay.android.phone.mrpc.core.z
            r1.<init>(r0)
            r0.b = r1
            return
    }

    public final com.alipay.android.phone.mrpc.core.g a() {
            r1 = this;
            com.alipay.android.phone.mrpc.core.g r0 = r1.a
            return r0
    }

    public final <T> T a(java.lang.Class<T> r6) {
            r5 = this;
            java.lang.ClassLoader r0 = r6.getClassLoader()
            r1 = 1
            java.lang.Class[] r1 = new java.lang.Class[r1]
            r2 = 0
            r1[r2] = r6
            com.alipay.android.phone.mrpc.core.y r2 = new com.alipay.android.phone.mrpc.core.y
            com.alipay.android.phone.mrpc.core.g r3 = r5.a
            com.alipay.android.phone.mrpc.core.z r4 = r5.b
            r2.<init>(r3, r6, r4)
            java.lang.Object r6 = java.lang.reflect.Proxy.newProxyInstance(r0, r1, r2)
            return r6
    }
}

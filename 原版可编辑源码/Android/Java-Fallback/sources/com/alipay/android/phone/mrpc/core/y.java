package com.alipay.android.phone.mrpc.core;

public final class y implements java.lang.reflect.InvocationHandler {
    public com.alipay.android.phone.mrpc.core.g a;
    public java.lang.Class<?> b;
    public com.alipay.android.phone.mrpc.core.z c;

    public y(com.alipay.android.phone.mrpc.core.g r1, java.lang.Class<?> r2, com.alipay.android.phone.mrpc.core.z r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            return
    }

    @Override
    public final java.lang.Object invoke(java.lang.Object r1, java.lang.reflect.Method r2, java.lang.Object[] r3) {
            r0 = this;
            com.alipay.android.phone.mrpc.core.z r1 = r0.c
            java.lang.Object r1 = r1.a(r2, r3)
            return r1
    }
}

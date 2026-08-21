package com.alipay.a.a;

public final class d implements com.alipay.a.a.i, com.alipay.a.a.j {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Object a(java.lang.Object r1) {
            r0 = this;
            java.lang.Enum r1 = (java.lang.Enum) r1
            java.lang.String r1 = r1.name()
            return r1
    }

    @Override
    public final java.lang.Object a(java.lang.Object r1, java.lang.reflect.Type r2) {
            r0 = this;
            java.lang.Class r2 = (java.lang.Class) r2
            java.lang.String r1 = r1.toString()
            java.lang.Enum r1 = java.lang.Enum.valueOf(r2, r1)
            return r1
    }

    @Override
    public final boolean a(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.Class<java.lang.Enum> r0 = java.lang.Enum.class
            boolean r2 = r0.isAssignableFrom(r2)
            return r2
    }
}

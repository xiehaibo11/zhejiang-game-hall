package com.alipay.a.a;

public final class c implements com.alipay.a.a.i, com.alipay.a.a.j {
    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Object a(java.lang.Object r3) {
            r2 = this;
            java.util.Date r3 = (java.util.Date) r3
            long r0 = r3.getTime()
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            return r3
    }

    @Override
    public final java.lang.Object a(java.lang.Object r3, java.lang.reflect.Type r4) {
            r2 = this;
            java.util.Date r4 = new java.util.Date
            java.lang.Long r3 = (java.lang.Long) r3
            long r0 = r3.longValue()
            r4.<init>(r0)
            return r4
    }

    @Override
    public final boolean a(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.Class<java.util.Date> r0 = java.util.Date.class
            boolean r2 = r0.isAssignableFrom(r2)
            return r2
    }
}

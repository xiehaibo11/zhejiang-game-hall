package com.alipay.sdk.m.e;

public final class k implements com.alipay.sdk.m.e.i {
    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Object a(java.lang.Object r4, java.lang.reflect.Type r5) {
            r3 = this;
            java.lang.Class r0 = r4.getClass()
            java.lang.Class<org.json.alipay.a> r1 = org.json.alipay.a.class
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le
            r4 = 0
            return r4
        Le:
            org.json.alipay.a r4 = (org.json.alipay.a) r4
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            boolean r1 = r5 instanceof java.lang.reflect.ParameterizedType
            r2 = 0
            if (r1 == 0) goto L23
            java.lang.reflect.ParameterizedType r5 = (java.lang.reflect.ParameterizedType) r5
            java.lang.reflect.Type[] r5 = r5.getActualTypeArguments()
            r5 = r5[r2]
            goto L25
        L23:
            java.lang.Class<java.lang.Object> r5 = java.lang.Object.class
        L25:
            int r1 = r4.a()
            if (r2 >= r1) goto L39
            java.lang.Object r1 = r4.a(r2)
            java.lang.Object r1 = com.alipay.sdk.m.e.e.a(r1, r5)
            r0.add(r1)
            int r2 = r2 + 1
            goto L25
        L39:
            return r0
    }

    @Override
    public final boolean a(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.Class<java.util.Set> r0 = java.util.Set.class
            boolean r2 = r0.isAssignableFrom(r2)
            return r2
    }
}

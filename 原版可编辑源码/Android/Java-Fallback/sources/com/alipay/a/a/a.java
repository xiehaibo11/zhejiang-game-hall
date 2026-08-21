package com.alipay.a.a;

public final class a implements com.alipay.a.a.i, com.alipay.a.a.j {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Object a(java.lang.Object r5) {
            r4 = this;
            java.lang.Object[] r5 = (java.lang.Object[]) r5
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = r5.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L17
            r3 = r5[r2]
            java.lang.Object r3 = com.alipay.a.a.f.b(r3)
            r0.add(r3)
            int r2 = r2 + 1
            goto L9
        L17:
            return r0
    }

    @Override
    public final java.lang.Object a(java.lang.Object r5, java.lang.reflect.Type r6) {
            r4 = this;
            java.lang.Class r0 = r5.getClass()
            java.lang.Class<org.json.alipay.a> r1 = org.json.alipay.a.class
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le
            r5 = 0
            return r5
        Le:
            org.json.alipay.a r5 = (org.json.alipay.a) r5
            boolean r0 = r6 instanceof java.lang.reflect.GenericArrayType
            if (r0 != 0) goto L34
            java.lang.Class r6 = (java.lang.Class) r6
            java.lang.Class r6 = r6.getComponentType()
            int r0 = r5.a()
            java.lang.Object r1 = java.lang.reflect.Array.newInstance(r6, r0)
            r2 = 0
        L23:
            if (r2 >= r0) goto L33
            java.lang.Object r3 = r5.a(r2)
            java.lang.Object r3 = com.alipay.a.a.e.a(r3, r6)
            java.lang.reflect.Array.set(r1, r2, r3)
            int r2 = r2 + 1
            goto L23
        L33:
            return r1
        L34:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Does not support generic array!"
            r5.<init>(r6)
            goto L3d
        L3c:
            throw r5
        L3d:
            goto L3c
    }

    @Override
    public final boolean a(java.lang.Class<?> r1) {
            r0 = this;
            boolean r1 = r1.isArray()
            return r1
    }
}

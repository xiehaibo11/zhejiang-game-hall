package com.alipay.a.a;

public final class g implements com.alipay.a.a.i, com.alipay.a.a.j {
    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.Object a(java.lang.Object r10) {
            r9 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            java.lang.Class r1 = r10.getClass()
        L9:
            java.lang.reflect.Field[] r2 = r1.getDeclaredFields()
            java.lang.Class<java.lang.Object> r3 = java.lang.Object.class
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L5a
            if (r2 == 0) goto L55
            int r3 = r2.length
            if (r3 <= 0) goto L55
            int r3 = r2.length
            r4 = 0
        L1c:
            if (r4 >= r3) goto L55
            r5 = r2[r4]
            r6 = 0
            if (r5 == 0) goto L49
            if (r10 != 0) goto L26
            goto L49
        L26:
            java.lang.String r7 = r5.getName()
            java.lang.String r8 = "this$0"
            boolean r7 = r8.equals(r7)
            if (r7 == 0) goto L33
            goto L49
        L33:
            boolean r7 = r5.isAccessible()
            r8 = 1
            r5.setAccessible(r8)
            java.lang.Object r8 = r5.get(r10)
            if (r8 != 0) goto L42
            goto L49
        L42:
            r5.setAccessible(r7)
            java.lang.Object r6 = com.alipay.a.a.f.b(r8)
        L49:
            if (r6 == 0) goto L52
            java.lang.String r5 = r5.getName()
            r0.put(r5, r6)
        L52:
            int r4 = r4 + 1
            goto L1c
        L55:
            java.lang.Class r1 = r1.getSuperclass()
            goto L9
        L5a:
            return r0
    }

    @Override
    public final java.lang.Object a(java.lang.Object r9, java.lang.reflect.Type r10) {
            r8 = this;
            java.lang.Class r0 = r9.getClass()
            java.lang.Class<org.json.alipay.b> r1 = org.json.alipay.b.class
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Le
            r9 = 0
            return r9
        Le:
            org.json.alipay.b r9 = (org.json.alipay.b) r9
            java.lang.Class r10 = (java.lang.Class) r10
            java.lang.Object r0 = r10.newInstance()
        L16:
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            boolean r1 = r10.equals(r1)
            if (r1 != 0) goto L52
            java.lang.reflect.Field[] r1 = r10.getDeclaredFields()
            if (r1 == 0) goto L4d
            int r2 = r1.length
            if (r2 <= 0) goto L4d
            int r2 = r1.length
            r3 = 0
        L29:
            if (r3 >= r2) goto L4d
            r4 = r1[r3]
            java.lang.String r5 = r4.getName()
            java.lang.reflect.Type r6 = r4.getGenericType()
            boolean r7 = r9.b(r5)
            if (r7 == 0) goto L4a
            r7 = 1
            r4.setAccessible(r7)
            java.lang.Object r5 = r9.a(r5)
            java.lang.Object r5 = com.alipay.a.a.e.a(r5, r6)
            r4.set(r0, r5)
        L4a:
            int r3 = r3 + 1
            goto L29
        L4d:
            java.lang.Class r10 = r10.getSuperclass()
            goto L16
        L52:
            return r0
    }

    @Override
    public final boolean a(java.lang.Class<?> r1) {
            r0 = this;
            r1 = 1
            return r1
    }
}

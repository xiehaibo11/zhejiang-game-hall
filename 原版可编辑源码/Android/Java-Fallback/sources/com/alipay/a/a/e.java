package com.alipay.a.a;

public final class e {
    static java.util.List<com.alipay.a.a.i> a;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.alipay.a.a.e.a = r0
            com.alipay.a.a.l r1 = new com.alipay.a.a.l
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.d r1 = new com.alipay.a.a.d
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.c r1 = new com.alipay.a.a.c
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.h r1 = new com.alipay.a.a.h
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.k r1 = new com.alipay.a.a.k
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.b r1 = new com.alipay.a.a.b
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.a r1 = new com.alipay.a.a.a
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            com.alipay.a.a.g r1 = new com.alipay.a.a.g
            r1.<init>()
            r0.add(r1)
            return
    }

    public static final <T> T a(java.lang.Object r3, java.lang.reflect.Type r4) {
            java.util.List<com.alipay.a.a.i> r0 = com.alipay.a.a.e.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            com.alipay.a.a.i r1 = (com.alipay.a.a.i) r1
            java.lang.Class r2 = com.alipay.a.b.a.a(r4)
            boolean r2 = r1.a(r2)
            if (r2 == 0) goto L6
            java.lang.Object r1 = r1.a(r3, r4)
            if (r1 == 0) goto L6
            return r1
        L23:
            r3 = 0
            return r3
    }

    public static final java.lang.Object a(java.lang.String r1, java.lang.reflect.Type r2) {
            if (r1 == 0) goto L42
            int r0 = r1.length()
            if (r0 != 0) goto L9
            goto L42
        L9:
            java.lang.String r1 = r1.trim()
            java.lang.String r0 = "["
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L27
            java.lang.String r0 = "]"
            boolean r0 = r1.endsWith(r0)
            if (r0 == 0) goto L27
            org.json.alipay.a r0 = new org.json.alipay.a
            r0.<init>(r1)
        L22:
            java.lang.Object r1 = a(r0, r2)
            return r1
        L27:
            java.lang.String r0 = "{"
            boolean r0 = r1.startsWith(r0)
            if (r0 == 0) goto L3d
            java.lang.String r0 = "}"
            boolean r0 = r1.endsWith(r0)
            if (r0 == 0) goto L3d
            org.json.alipay.b r0 = new org.json.alipay.b
            r0.<init>(r1)
            goto L22
        L3d:
            java.lang.Object r1 = a(r1, r2)
            return r1
        L42:
            r1 = 0
            return r1
    }
}

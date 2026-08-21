package com.alipay.sdk.m.e;

public final class f {
    public static java.util.List<com.alipay.sdk.m.e.j> a;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.alipay.sdk.m.e.f.a = r0
            com.alipay.sdk.m.e.l r1 = new com.alipay.sdk.m.e.l
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            com.alipay.sdk.m.e.d r1 = new com.alipay.sdk.m.e.d
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            com.alipay.sdk.m.e.c r1 = new com.alipay.sdk.m.e.c
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            com.alipay.sdk.m.e.h r1 = new com.alipay.sdk.m.e.h
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            com.alipay.sdk.m.e.b r1 = new com.alipay.sdk.m.e.b
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            com.alipay.sdk.m.e.a r1 = new com.alipay.sdk.m.e.a
            r1.<init>()
            r0.add(r1)
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            com.alipay.sdk.m.e.g r1 = new com.alipay.sdk.m.e.g
            r1.<init>()
            r0.add(r1)
            return
    }

    public static java.lang.String a(java.lang.Object r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.Object r3 = b(r3)
            java.lang.Class r0 = r3.getClass()
            boolean r0 = com.alipay.sdk.m.f.a.a(r0)
            if (r0 == 0) goto L1b
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = org.json.alipay.b.c(r3)
            return r3
        L1b:
            java.lang.Class r0 = r3.getClass()
            java.lang.Class<java.util.Collection> r1 = java.util.Collection.class
            boolean r0 = r1.isAssignableFrom(r0)
            if (r0 == 0) goto L33
            java.util.List r3 = (java.util.List) r3
            org.json.alipay.a r0 = new org.json.alipay.a
            r0.<init>(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L33:
            java.lang.Class r0 = r3.getClass()
            java.lang.Class<java.util.Map> r1 = java.util.Map.class
            boolean r0 = r1.isAssignableFrom(r0)
            if (r0 == 0) goto L4b
            java.util.Map r3 = (java.util.Map) r3
            org.json.alipay.b r0 = new org.json.alipay.b
            r0.<init>(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L4b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unsupported Class : "
            r1.<init>(r2)
            java.lang.Class r3 = r3.getClass()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static java.lang.Object b(java.lang.Object r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.util.List<com.alipay.sdk.m.e.j> r0 = com.alipay.sdk.m.e.f.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            com.alipay.sdk.m.e.j r1 = (com.alipay.sdk.m.e.j) r1
            java.lang.Class r2 = r3.getClass()
            boolean r2 = r1.a(r2)
            if (r2 == 0) goto La
            java.lang.Object r1 = r1.a(r3)
            if (r1 == 0) goto La
            return r1
        L27:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Unsupported Class : "
            r1.<init>(r2)
            java.lang.Class r3 = r3.getClass()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            goto L40
        L3f:
            throw r0
        L40:
            goto L3f
    }
}

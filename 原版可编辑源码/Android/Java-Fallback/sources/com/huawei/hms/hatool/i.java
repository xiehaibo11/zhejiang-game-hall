package com.huawei.hms.hatool;

public final class i {
    public static java.util.Map<java.lang.String, com.huawei.hms.hatool.m> b;
    public static com.huawei.hms.hatool.i c;
    public com.huawei.hms.hatool.l a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.huawei.hms.hatool.i.b = r0
            return
    }

    public i() {
            r1 = this;
            r1.<init>()
            com.huawei.hms.hatool.l r0 = new com.huawei.hms.hatool.l
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.huawei.hms.hatool.i c() {
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c
            if (r0 != 0) goto L7
            d()
        L7:
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c
            return r0
    }

    public static synchronized void d() {
            java.lang.Class<com.huawei.hms.hatool.i> r0 = com.huawei.hms.hatool.i.class
            monitor-enter(r0)
            com.huawei.hms.hatool.i r1 = com.huawei.hms.hatool.i.c     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.i r1 = new com.huawei.hms.hatool.i     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.huawei.hms.hatool.i.c = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public com.huawei.hms.hatool.m a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.hatool.m> r0 = com.huawei.hms.hatool.i.b
            java.lang.Object r2 = r0.get(r2)
            com.huawei.hms.hatool.m r2 = (com.huawei.hms.hatool.m) r2
            return r2
    }

    public java.util.Set<java.lang.String> a() {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.hatool.m> r0 = com.huawei.hms.hatool.i.b
            java.util.Set r0 = r0.keySet()
            return r0
    }

    public void a(java.lang.String r2, com.huawei.hms.hatool.m r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.huawei.hms.hatool.m> r0 = com.huawei.hms.hatool.i.b
            r0.put(r2, r3)
            return
    }

    public com.huawei.hms.hatool.l b() {
            r1 = this;
            com.huawei.hms.hatool.l r0 = r1.a
            return r0
    }
}

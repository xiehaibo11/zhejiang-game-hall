package com.huawei.hms.hatool;

public final class e0 {
    public static com.huawei.hms.hatool.e0 b;
    public volatile java.util.Map<java.lang.String, com.huawei.hms.hatool.f0> a;

    public e0() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            return
    }

    public static com.huawei.hms.hatool.e0 a() {
            com.huawei.hms.hatool.e0 r0 = com.huawei.hms.hatool.e0.b
            if (r0 != 0) goto L7
            b()
        L7:
            com.huawei.hms.hatool.e0 r0 = com.huawei.hms.hatool.e0.b
            return r0
    }

    public static synchronized void b() {
            java.lang.Class<com.huawei.hms.hatool.e0> r0 = com.huawei.hms.hatool.e0.class
            monitor-enter(r0)
            com.huawei.hms.hatool.e0 r1 = com.huawei.hms.hatool.e0.b     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.e0 r1 = new com.huawei.hms.hatool.e0     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.huawei.hms.hatool.e0.b = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final com.huawei.hms.hatool.f0 a(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.huawei.hms.hatool.f0> r0 = r2.a
            boolean r0 = r0.containsKey(r3)
            if (r0 != 0) goto L12
            com.huawei.hms.hatool.f0 r0 = new com.huawei.hms.hatool.f0
            r0.<init>()
            java.util.Map<java.lang.String, com.huawei.hms.hatool.f0> r1 = r2.a
            r1.put(r3, r0)
        L12:
            java.util.Map<java.lang.String, com.huawei.hms.hatool.f0> r0 = r2.a
            java.lang.Object r3 = r0.get(r3)
            com.huawei.hms.hatool.f0 r3 = (com.huawei.hms.hatool.f0) r3
            return r3
    }

    public com.huawei.hms.hatool.f0 a(java.lang.String r1, long r2) {
            r0 = this;
            com.huawei.hms.hatool.f0 r1 = r0.a(r1)
            r1.a(r2)
            return r1
    }
}

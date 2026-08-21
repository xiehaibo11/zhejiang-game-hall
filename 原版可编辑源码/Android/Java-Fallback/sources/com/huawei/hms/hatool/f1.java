package com.huawei.hms.hatool;

public final class f1 {
    public static com.huawei.hms.hatool.f1 b;
    public static final java.lang.Object c = null;
    public android.content.Context a;

    static {
            java.lang.String r0 = "ABTesting"
            java.lang.String r1 = "_default_config_tag"
            java.lang.String r2 = "_openness_config_tag"
            java.lang.String r3 = "_hms_config_tag"
            new java.lang.String[]{r0, r1, r2, r3}
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.hms.hatool.f1.c = r0
            return
    }

    public f1() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.hatool.f1 a() {
            com.huawei.hms.hatool.f1 r0 = com.huawei.hms.hatool.f1.b
            if (r0 != 0) goto L7
            b()
        L7:
            com.huawei.hms.hatool.f1 r0 = com.huawei.hms.hatool.f1.b
            return r0
    }

    public static synchronized void b() {
            java.lang.Class<com.huawei.hms.hatool.f1> r0 = com.huawei.hms.hatool.f1.class
            monitor-enter(r0)
            com.huawei.hms.hatool.f1 r1 = com.huawei.hms.hatool.f1.b     // Catch: java.lang.Throwable -> L10
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.f1 r1 = new com.huawei.hms.hatool.f1     // Catch: java.lang.Throwable -> L10
            r1.<init>()     // Catch: java.lang.Throwable -> L10
            com.huawei.hms.hatool.f1.b = r1     // Catch: java.lang.Throwable -> L10
        Le:
            monitor-exit(r0)
            return
        L10:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void a(android.content.Context r3) {
            r2 = this;
            java.lang.Object r0 = com.huawei.hms.hatool.f1.c
            monitor-enter(r0)
            android.content.Context r1 = r2.a     // Catch: java.lang.Throwable -> L37
            if (r1 == 0) goto L10
            java.lang.String r3 = "hmsSdk"
            java.lang.String r1 = "DataManager already initialized."
            com.huawei.hms.hatool.y.f(r3, r1)     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return
        L10:
            r2.a = r3     // Catch: java.lang.Throwable -> L37
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            android.content.Context r1 = r2.a
            r0.a(r1)
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            java.lang.String r1 = r3.getPackageName()
            r0.g(r1)
            com.huawei.hms.hatool.x0 r0 = com.huawei.hms.hatool.x0.a()
            r0.a(r3)
            return
        L37:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r3
    }

    public void a(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "HiAnalyticsDataManager.setAppid(String appid) is execute."
            com.huawei.hms.hatool.y.c(r0, r1)
            android.content.Context r1 = r3.a
            if (r1 != 0) goto L11
            java.lang.String r4 = "sdk is not init"
            com.huawei.hms.hatool.y.e(r0, r4)
            return
        L11:
            java.lang.String r0 = r1.getPackageName()
            java.lang.String r1 = "appID"
            java.lang.String r2 = "[a-zA-Z0-9_][a-zA-Z0-9. _-]{0,255}"
            java.lang.String r4 = com.huawei.hms.hatool.q0.a(r1, r4, r2, r0)
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            r0.f(r4)
            return
    }
}

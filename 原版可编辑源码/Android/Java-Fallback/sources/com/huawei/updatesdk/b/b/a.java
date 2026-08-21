package com.huawei.updatesdk.b.b;

public final class a {
    private static final java.lang.Object d = null;
    private static com.huawei.updatesdk.b.b.a e;
    private com.huawei.updatesdk.b.b.b a;
    private java.lang.String b;
    private boolean c;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.huawei.updatesdk.b.b.a.d = r0
            return
    }

    private a(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            java.lang.String r0 = "DeviceSessionUpdateSDK_V1"
            com.huawei.updatesdk.b.b.b r2 = com.huawei.updatesdk.b.b.b.a(r0, r2)
            r1.a = r2
            return
    }

    public static com.huawei.updatesdk.b.b.a d() {
            java.lang.Object r0 = com.huawei.updatesdk.b.b.a.d
            monitor-enter(r0)
            com.huawei.updatesdk.b.b.a r1 = com.huawei.updatesdk.b.b.a.e     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L16
            com.huawei.updatesdk.b.b.a r1 = new com.huawei.updatesdk.b.b.a     // Catch: java.lang.Throwable -> L1a
            com.huawei.updatesdk.a.b.a.a r2 = com.huawei.updatesdk.a.b.a.a.c()     // Catch: java.lang.Throwable -> L1a
            android.content.Context r2 = r2.a()     // Catch: java.lang.Throwable -> L1a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1a
            com.huawei.updatesdk.b.b.a.e = r1     // Catch: java.lang.Throwable -> L1a
        L16:
            com.huawei.updatesdk.b.b.a r1 = com.huawei.updatesdk.b.b.a.e     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return r1
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String a(java.lang.String r4) {
            r3 = this;
            com.huawei.updatesdk.b.b.b r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "updatesdk.lastAccountZone"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = ""
            java.lang.String r4 = r0.a(r4, r1)
            return r4
    }

    public void a(long r3) {
            r2 = this;
            com.huawei.updatesdk.b.b.b r0 = r2.a
            java.lang.String r1 = "updatesdk.lastCheckDate"
            r0.b(r1, r3)
            return
    }

    public void a(java.lang.String r4, long r5) {
            r3 = this;
            com.huawei.updatesdk.b.b.b r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "updatesdk.lastInitAccountTime"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.b(r4, r5)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            com.huawei.updatesdk.b.b.b r0 = r1.a
            r0.b(r2, r3)
            return
    }

    public long b() {
            r4 = this;
            com.huawei.updatesdk.b.b.b r0 = r4.a
            java.lang.String r1 = "updatesdk.lastCheckDate"
            r2 = 0
            long r0 = r0.a(r1, r2)
            return r0
    }

    public long b(java.lang.String r4) {
            r3 = this;
            com.huawei.updatesdk.b.b.b r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "updatesdk.lastInitAccountTime"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r1 = 0
            long r0 = r0.a(r4, r1)
            return r0
    }

    public void b(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            com.huawei.updatesdk.b.b.b r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "updatesdk.lastAccountZone"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.b(r4, r5)
            return
    }

    public java.lang.String c(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            com.huawei.updatesdk.b.b.b r0 = r2.a
            java.lang.String r3 = r0.a(r3, r1)
            return r3
    }

    public void c() {
            r1 = this;
            boolean r0 = r1.c
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.String r0 = "updatesdk.sign.param"
            r1.d(r0)
            java.lang.String r0 = "updatesdk.signkey"
            r1.d(r0)
            java.lang.String r0 = "updatesdk.signtime"
            r1.d(r0)
            r0 = 1
            r1.c = r0
            return
    }

    public void d(java.lang.String r2) {
            r1 = this;
            com.huawei.updatesdk.b.b.b r0 = r1.a
            r0.a(r2)
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}

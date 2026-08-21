package com.huawei.updatesdk.b.e;

public abstract class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.String a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "AbstractTaskInit"
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = new com.huawei.hms.framework.network.grs.GrsBaseInfo     // Catch: java.lang.Throwable -> L1a
            r1.<init>()     // Catch: java.lang.Throwable -> L1a
            r1.setSerCountry(r5)     // Catch: java.lang.Throwable -> L1a
            com.huawei.hms.framework.network.grs.GrsClient r5 = new com.huawei.hms.framework.network.grs.GrsClient     // Catch: java.lang.Throwable -> L1a
            r5.<init>(r4, r1)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = r3.a()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = "ROOT"
            java.lang.String r5 = r5.synGetGrsUrl(r1, r2)     // Catch: java.lang.Throwable -> L1a
            goto L34
        L1a:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "UpdateSDK Get url from GRS_SDK error: "
            r1.append(r2)
            java.lang.String r5 = r5.toString()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.huawei.updatesdk.a.a.a.c(r0, r5)
            r5 = 0
        L34:
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L44
            java.lang.String r5 = "UpdateSDK Get url is default url"
            com.huawei.updatesdk.a.a.a.b(r0, r5)
            java.lang.String r4 = r3.a(r4)
            return r4
        L44:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "UpdateSDK Get url from GRS_SDK Success!"
            r4.append(r1)
            java.lang.String r1 = r3.b(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.huawei.updatesdk.a.a.a.b(r0, r4)
            return r5
    }

    private java.lang.String b(java.lang.String r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            r1 = 0
            r2 = 46
            int r2 = r4.indexOf(r2)     // Catch: java.lang.Exception -> L10
            java.lang.String r4 = r4.substring(r1, r2)     // Catch: java.lang.Exception -> L10
            return r4
        L10:
            r4 = move-exception
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "AbstractTaskInit"
            com.huawei.updatesdk.a.a.c.a.a.a.b(r1, r4)
            return r0
    }

    private boolean b(android.content.Context r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = r5.d()
            boolean r6 = com.huawei.updatesdk.b.h.b.a(r6, r7, r0)
            r0 = 0
            if (r6 != 0) goto Lc
            return r0
        Lc:
            com.huawei.updatesdk.b.b.a r6 = com.huawei.updatesdk.b.b.a.d()
            long r1 = r6.b(r7)
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 - r1
            long r1 = java.lang.Math.abs(r3)
            r3 = 86400000(0x5265c00, double:4.2687272E-316)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 >= 0) goto L34
            com.huawei.updatesdk.b.b.a r6 = com.huawei.updatesdk.b.b.a.d()
            java.lang.String r6 = r6.a(r7)
            com.huawei.updatesdk.service.otaupdate.f r7 = com.huawei.updatesdk.service.otaupdate.f.e()
            r7.a(r6)
            return r0
        L34:
            r6 = 1
            return r6
    }

    abstract java.lang.String a();

    abstract java.lang.String a(android.content.Context r1);

    public void a(java.lang.String r1) {
            r0 = this;
            return
    }

    public abstract void a(java.util.List<java.lang.String> r1);

    public abstract java.lang.String b();

    public java.lang.String b(android.content.Context r3) {
            r2 = this;
            com.huawei.updatesdk.service.otaupdate.f r0 = com.huawei.updatesdk.service.otaupdate.f.e()
            java.lang.String r0 = r0.a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1a
            java.lang.String r0 = "AbstractTaskInit"
            java.lang.String r1 = "UpdateSDK accoutZone is empty, so url is default"
            com.huawei.updatesdk.a.a.a.b(r0, r1)
            java.lang.String r3 = r2.a(r3)
            return r3
        L1a:
            java.lang.String r3 = r2.a(r3, r0)
            return r3
    }

    public void c() {
            r5 = this;
            com.huawei.updatesdk.a.b.a.a r0 = com.huawei.updatesdk.a.b.a.a.c()
            android.content.Context r0 = r0.a()
            java.lang.String r1 = r5.b()
            boolean r0 = r5.b(r0, r1)
            if (r0 != 0) goto L13
            return
        L13:
            java.util.Locale r0 = java.util.Locale.ROOT
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r1
            java.lang.String r4 = "content://%s.commondata/item/1"
            java.lang.String r0 = java.lang.String.format(r0, r4, r2)
            com.huawei.updatesdk.b.e.d r2 = new com.huawei.updatesdk.b.e.d
            r2.<init>(r0, r1)
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            java.lang.Void[] r1 = new java.lang.Void[r3]
            r2.executeOnExecutor(r0, r1)
            r0 = 1000(0x3e8, double:4.94E-321)
            java.util.concurrent.TimeUnit r3 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Exception -> L37
            r2.get(r0, r3)     // Catch: java.lang.Exception -> L37
            goto L52
        L37:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "init AccountZone error: "
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "AbstractTaskInit"
            com.huawei.updatesdk.a.a.a.a(r1, r0)
        L52:
            return
    }

    public boolean d() {
            r1 = this;
            r0 = 0
            return r0
    }
}

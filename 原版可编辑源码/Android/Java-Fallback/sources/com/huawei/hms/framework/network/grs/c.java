package com.huawei.hms.framework.network.grs;

class c implements java.util.concurrent.Callable<java.lang.Boolean> {
    final android.content.Context a;
    final com.huawei.hms.framework.network.grs.GrsBaseInfo b;
    final android.content.Context c;
    final com.huawei.hms.framework.network.grs.d d;

    c(com.huawei.hms.framework.network.grs.d r1, android.content.Context r2, com.huawei.hms.framework.network.grs.GrsBaseInfo r3, android.content.Context r4) {
            r0 = this;
            r0.d = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.<init>()
            return
    }

    @Override
    public java.lang.Boolean call() {
            r6 = this;
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.c.m r1 = new com.huawei.hms.framework.network.grs.c.m
            r1.<init>()
            com.huawei.hms.framework.network.grs.d.a(r0, r1)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.a.c r1 = new com.huawei.hms.framework.network.grs.a.c
            android.content.Context r2 = r6.a
            java.lang.String r3 = "share_pre_grs_conf_"
            r1.<init>(r2, r3)
            com.huawei.hms.framework.network.grs.d.a(r0, r1)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.a.c r1 = new com.huawei.hms.framework.network.grs.a.c
            android.content.Context r2 = r6.a
            java.lang.String r3 = "share_pre_grs_services_"
            r1.<init>(r2, r3)
            com.huawei.hms.framework.network.grs.d.b(r0, r1)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.a.a r1 = new com.huawei.hms.framework.network.grs.a.a
            com.huawei.hms.framework.network.grs.a.c r2 = com.huawei.hms.framework.network.grs.d.b(r0)
            com.huawei.hms.framework.network.grs.d r3 = r6.d
            com.huawei.hms.framework.network.grs.a.c r3 = com.huawei.hms.framework.network.grs.d.c(r3)
            com.huawei.hms.framework.network.grs.d r4 = r6.d
            com.huawei.hms.framework.network.grs.c.m r4 = com.huawei.hms.framework.network.grs.d.a(r4)
            r1.<init>(r2, r3, r4)
            com.huawei.hms.framework.network.grs.d.a(r0, r1)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.a r1 = new com.huawei.hms.framework.network.grs.a
            com.huawei.hms.framework.network.grs.GrsBaseInfo r2 = com.huawei.hms.framework.network.grs.d.e(r0)
            com.huawei.hms.framework.network.grs.d r3 = r6.d
            com.huawei.hms.framework.network.grs.a.a r3 = com.huawei.hms.framework.network.grs.d.d(r3)
            com.huawei.hms.framework.network.grs.d r4 = r6.d
            com.huawei.hms.framework.network.grs.c.m r4 = com.huawei.hms.framework.network.grs.d.a(r4)
            com.huawei.hms.framework.network.grs.d r5 = r6.d
            com.huawei.hms.framework.network.grs.a.c r5 = com.huawei.hms.framework.network.grs.d.c(r5)
            r1.<init>(r2, r3, r4, r5)
            com.huawei.hms.framework.network.grs.d.a(r0, r1)
            com.huawei.hms.framework.network.grs.b.b r0 = new com.huawei.hms.framework.network.grs.b.b
            android.content.Context r1 = r6.a
            com.huawei.hms.framework.network.grs.GrsBaseInfo r2 = r6.b
            r3 = 1
            r0.<init>(r1, r2, r3)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r6.b
            r0.a(r1)
            com.huawei.hms.framework.network.grs.c.b.c r0 = new com.huawei.hms.framework.network.grs.c.b.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r6.b
            android.content.Context r2 = r6.a
            r0.<init>(r1, r2)
            java.lang.String r0 = r0.c()
            java.lang.String r1 = com.huawei.hms.framework.network.grs.d.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "scan serviceSet is:"
            r2.append(r4)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.huawei.hms.framework.common.Logger.v(r1, r2)
            com.huawei.hms.framework.network.grs.d r1 = r6.d
            com.huawei.hms.framework.network.grs.a.c r1 = com.huawei.hms.framework.network.grs.d.c(r1)
            java.lang.String r2 = "services"
            java.lang.String r4 = ""
            java.lang.String r1 = r1.a(r2, r4)
            java.lang.String r0 = com.huawei.hms.framework.network.grs.c.n.a(r1, r0)
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 != 0) goto L10a
            com.huawei.hms.framework.network.grs.d r4 = r6.d
            com.huawei.hms.framework.network.grs.a.c r4 = com.huawei.hms.framework.network.grs.d.c(r4)
            r4.b(r2, r0)
            java.lang.String r2 = com.huawei.hms.framework.network.grs.d.a()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "postList is:"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r5 = " currentServices:"
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.framework.common.Logger.v(r2, r4)
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L10a
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.GrsBaseInfo r0 = com.huawei.hms.framework.network.grs.d.e(r0)
            android.content.Context r1 = r6.a
            r2 = 0
            java.lang.String r0 = r0.getGrsParasKey(r2, r3, r1)
            com.huawei.hms.framework.network.grs.d r1 = r6.d
            com.huawei.hms.framework.network.grs.c.m r1 = com.huawei.hms.framework.network.grs.d.a(r1)
            r1.a(r0)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.c.m r0 = com.huawei.hms.framework.network.grs.d.a(r0)
            com.huawei.hms.framework.network.grs.c.b.c r1 = new com.huawei.hms.framework.network.grs.c.b.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r2 = r6.b
            android.content.Context r4 = r6.c
            r1.<init>(r2, r4)
            com.huawei.hms.framework.network.grs.d r2 = r6.d
            com.huawei.hms.framework.network.grs.a.c r2 = com.huawei.hms.framework.network.grs.d.c(r2)
            r4 = 0
            r0.a(r1, r4, r4, r2)
        L10a:
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.a.c r1 = com.huawei.hms.framework.network.grs.d.b(r0)
            java.util.Map r1 = r1.a()
            com.huawei.hms.framework.network.grs.d.a(r0, r1)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            com.huawei.hms.framework.network.grs.a.a r0 = com.huawei.hms.framework.network.grs.d.d(r0)
            com.huawei.hms.framework.network.grs.GrsBaseInfo r1 = r6.b
            android.content.Context r2 = r6.a
            r0.b(r1, r2)
            com.huawei.hms.framework.network.grs.d r0 = r6.d
            boolean r0 = com.huawei.hms.framework.network.grs.d.a(r0, r3)
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            return r0
    }

    @Override
    public java.lang.Boolean call() {
            r1 = this;
            java.lang.Boolean r0 = r1.call()
            return r0
    }
}

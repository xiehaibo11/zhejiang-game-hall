package com.mbridge.msdk.splash.e;

public final class a {



    public static void a(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            if (r8 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r0 = r0.h()
            if (r0 == 0) goto L25
            java.lang.String r3 = r8.getCampaignUnitId()
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()
            java.lang.String[] r4 = r0.h()
            r5 = 0
            r6 = 0
            r1 = r7
            r2 = r8
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6)
        L25:
            return
    }

    public static void a(android.content.Context r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, java.lang.String r4, java.lang.String r5, long r6, int r8) {
            if (r3 == 0) goto L4b
            boolean r2 = r3.isMraid()     // Catch: java.lang.Exception -> L47
            if (r2 == 0) goto L4b
            com.mbridge.msdk.foundation.entity.p r2 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L47
            r2.<init>()     // Catch: java.lang.Exception -> L47
            java.lang.String r0 = r3.getRequestId()     // Catch: java.lang.Exception -> L47
            r2.k(r0)     // Catch: java.lang.Exception -> L47
            java.lang.String r0 = r3.getRequestIdNotice()     // Catch: java.lang.Exception -> L47
            r2.l(r0)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = r3.getId()     // Catch: java.lang.Exception -> L47
            r2.n(r3)     // Catch: java.lang.Exception -> L47
            r2.d(r8)     // Catch: java.lang.Exception -> L47
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L47
            long r0 = r0 - r6
            java.lang.String r3 = java.lang.String.valueOf(r0)     // Catch: java.lang.Exception -> L47
            r2.q(r3)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = ""
            r2.f(r3)     // Catch: java.lang.Exception -> L47
            r2.p(r5)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = "6"
            r2.h(r3)     // Catch: java.lang.Exception -> L47
            int r3 = com.mbridge.msdk.foundation.entity.p.a     // Catch: java.lang.Exception -> L47
            r2.a(r3)     // Catch: java.lang.Exception -> L47
            com.mbridge.msdk.foundation.same.report.c.b(r2, r4)     // Catch: java.lang.Exception -> L47
            goto L4b
        L47:
            r2 = move-exception
            r2.printStackTrace()
        L4b:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3) {
            java.lang.String r0 = ""
            r1 = 1
            a(r2, r0, r1, r3)
            return
    }

    private static void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3, int r4, java.lang.String r5) {
            com.mbridge.msdk.splash.a.b r0 = com.mbridge.msdk.splash.a.b.a()
            java.lang.String r1 = r2.getId()
            com.mbridge.msdk.splash.a.b r0 = r0.c(r1)
            com.mbridge.msdk.splash.a.b r0 = r0.b(r5)
            java.lang.String r1 = r2.getRequestId()
            com.mbridge.msdk.splash.a.b r0 = r0.d(r1)
            java.lang.String r1 = r2.getRequestIdNotice()
            com.mbridge.msdk.splash.a.b r0 = r0.g(r1)
            com.mbridge.msdk.splash.a.b r3 = r0.f(r3)
            com.mbridge.msdk.splash.a.b r3 = r3.b(r4)
            boolean r2 = r2.isBidCampaign()
            com.mbridge.msdk.splash.a.b r2 = r3.a(r2)
            a(r2, r5)
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r8, java.lang.String r9, java.lang.String r10) {
            if (r8 == 0) goto L35
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> L31
            if (r0 != 0) goto L35
            boolean r0 = r8.isMraid()     // Catch: java.lang.Exception -> L31
            if (r0 == 0) goto L35
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L31
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L31
            r1.<init>(r0)     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = r8.getRequestId()     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = r8.getRequestIdNotice()     // Catch: java.lang.Exception -> L31
            java.lang.String r4 = r8.getId()     // Catch: java.lang.Exception -> L31
            boolean r7 = r8.isBidCampaign()     // Catch: java.lang.Exception -> L31
            r5 = r9
            r6 = r10
            r1.b(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r8 = move-exception
            r8.printStackTrace()
        L35:
            return
    }

    private static void a(com.mbridge.msdk.splash.a.b r1, java.lang.String r2) {
            if (r1 == 0) goto L2c
            java.lang.String r0 = "2000068"
            r1.a(r0)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L1d
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r1 = r1.b()
            r2.a(r1)
            goto L2c
        L1d:
            java.lang.String r1 = r1.b()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.report.c.a(r1, r0, r2)
        L2c:
            return
    }

    public static void a(com.mbridge.msdk.splash.a.b r1, java.lang.String r2, int r3) {
            if (r1 == 0) goto L2f
            java.lang.String r0 = "2000069"
            r1.a(r0)
            r1.a(r3)
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r3 = r3.c()
            if (r3 == 0) goto L20
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            java.lang.String r1 = r1.b()
            r2.a(r1)
            goto L2f
        L20:
            java.lang.String r1 = r1.b()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            com.mbridge.msdk.foundation.same.report.c.a(r1, r3, r2)
        L2f:
            return
    }

    public static void a(java.lang.String r8, com.mbridge.msdk.foundation.entity.CampaignEx r9) {
            if (r9 == 0) goto L39
            boolean r0 = r9.isMraid()
            if (r0 == 0) goto L39
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r0)
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            java.lang.String r3 = r9.getId()
            java.lang.String r4 = r9.getRequestId()
            java.lang.String r5 = r9.getRequestIdNotice()
            java.lang.String r2 = "2000061"
            r1 = r0
            r6 = r8
            r1.<init>(r2, r3, r4, r5, r6, r7)
            int r9 = com.mbridge.msdk.foundation.entity.p.a
            r0.a(r9)
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r9 = r9.j()
            com.mbridge.msdk.foundation.same.report.c.b(r0, r9, r8)
        L39:
            return
    }

    public static void a(java.lang.String r6, com.mbridge.msdk.foundation.entity.CampaignEx r7, java.lang.String r8) {
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = "="
            com.mbridge.msdk.foundation.same.report.d.a r2 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lf9
            android.content.Context r3 = r3.j()     // Catch: java.lang.Exception -> Lf9
            r2.<init>(r3)     // Catch: java.lang.Exception -> Lf9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf9
            r3.<init>()     // Catch: java.lang.Exception -> Lf9
            boolean r4 = r7.isBidCampaign()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r5 = "&"
            if (r4 == 0) goto L2a
            java.lang.String r4 = "hb="
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r4 = 1
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
        L2a:
            java.lang.String r4 = "key"
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = "2000070"
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = "rid"
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = r7.getRequestId()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = "rid_n"
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = r7.getRequestIdNotice()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = java.net.URLEncoder.encode(r4, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r4 = "cid"
            r3.append(r4)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = r7.getId()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = "unit_id"
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = "click_url"
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = java.net.URLEncoder.encode(r8, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            r3.append(r5)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = "network_type"
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            r3.append(r1)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lf9
            android.content.Context r7 = r7.j()     // Catch: java.lang.Exception -> Lf9
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r7)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = java.lang.String.valueOf(r7)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Exception -> Lf9
            r3.append(r7)     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lf9
            boolean r7 = r7.c()     // Catch: java.lang.Exception -> Lf9
            if (r7 == 0) goto Ld9
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> Lf9
            r6.a(r7)     // Catch: java.lang.Exception -> Lf9
            return
        Ld9:
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Lf9
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r7, r8, r6)     // Catch: java.lang.Exception -> Lf9
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r8 = r8.a     // Catch: java.lang.Exception -> Lf9
            com.mbridge.msdk.splash.e.a$1 r0 = new com.mbridge.msdk.splash.e.a$1     // Catch: java.lang.Exception -> Lf9
            r0.<init>()     // Catch: java.lang.Exception -> Lf9
            r2.post(r7, r8, r6, r0)     // Catch: java.lang.Exception -> Lf9
            goto L101
        Lf9:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto L101
            r6.printStackTrace()
        L101:
            return
    }

    public static void b(com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7) {
            java.lang.String r0 = "&"
            java.lang.String r1 = "utf-8"
            java.lang.String r2 = "="
            com.mbridge.msdk.foundation.same.report.d.a r3 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Ld5
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ld5
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> Ld5
            r3.<init>(r4)     // Catch: java.lang.Exception -> Ld5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld5
            r4.<init>()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = "key"
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r2)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = "2000092"
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r1)     // Catch: java.lang.Exception -> Ld5
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = "rid"
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r2)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r6.getRequestId()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r1)     // Catch: java.lang.Exception -> Ld5
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = "rid_n"
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r2)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r6.getRequestIdNotice()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r1)     // Catch: java.lang.Exception -> Ld5
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = "cid"
            r4.append(r5)     // Catch: java.lang.Exception -> Ld5
            r4.append(r2)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = r6.getId()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r1)     // Catch: java.lang.Exception -> Ld5
            r4.append(r6)     // Catch: java.lang.Exception -> Ld5
            r4.append(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = "unit_id"
            r4.append(r6)     // Catch: java.lang.Exception -> Ld5
            r4.append(r2)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = java.net.URLEncoder.encode(r7, r1)     // Catch: java.lang.Exception -> Ld5
            r4.append(r6)     // Catch: java.lang.Exception -> Ld5
            r4.append(r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = "network_type"
            r4.append(r6)     // Catch: java.lang.Exception -> Ld5
            r4.append(r2)     // Catch: java.lang.Exception -> Ld5
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ld5
            android.content.Context r6 = r6.j()     // Catch: java.lang.Exception -> Ld5
            int r6 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r1)     // Catch: java.lang.Exception -> Ld5
            r4.append(r6)     // Catch: java.lang.Exception -> Ld5
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Ld5
            boolean r6 = r6.c()     // Catch: java.lang.Exception -> Ld5
            if (r6 == 0) goto Lb5
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Exception -> Ld5
            r6.a(r7)     // Catch: java.lang.Exception -> Ld5
            return
        Lb5:
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Exception -> Ld5
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ld5
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> Ld5
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r6, r0, r7)     // Catch: java.lang.Exception -> Ld5
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r0 = r0.a     // Catch: java.lang.Exception -> Ld5
            com.mbridge.msdk.splash.e.a$2 r1 = new com.mbridge.msdk.splash.e.a$2     // Catch: java.lang.Exception -> Ld5
            r1.<init>()     // Catch: java.lang.Exception -> Ld5
            r3.post(r7, r0, r6, r1)     // Catch: java.lang.Exception -> Ld5
            goto Ldd
        Ld5:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto Ldd
            r6.printStackTrace()
        Ldd:
            return
    }

    public static void b(com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2, java.lang.String r3) {
            r0 = 2
            a(r1, r2, r0, r3)
            return
    }
}

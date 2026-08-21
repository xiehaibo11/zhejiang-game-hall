package com.mbridge.msdk.foundation.same.report;

public final class c {
    private static android.os.Handler a;

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.mbridge.msdk.foundation.same.report.c.a = r0
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            if (r12 == 0) goto L71
            boolean r0 = r12.isMraid()
            if (r0 != 0) goto L9
            goto L71
        L9:
            java.lang.String r0 = r12.getMraid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 1
            r0 = r0 ^ r1
            com.mbridge.msdk.foundation.entity.p r11 = new com.mbridge.msdk.foundation.entity.p
            if (r0 == 0) goto L18
            goto L19
        L18:
            r1 = 3
        L19:
            r4 = r1
            java.lang.String r7 = r12.getId()
            int r0 = r12.getKeyIaRst()
            java.lang.String r10 = java.lang.String.valueOf(r0)
            java.lang.String r3 = "2000043"
            java.lang.String r5 = "0"
            java.lang.String r6 = ""
            r2 = r11
            r8 = r14
            r9 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
            java.lang.String r13 = r12.getId()
            r11.n(r13)
            java.lang.String r13 = r12.getRequestId()
            r11.k(r13)
            java.lang.String r13 = r12.getRequestIdNotice()
            r11.l(r13)
            int r13 = r12.getAdSpaceT()
            r11.b(r13)
            r11.h(r15)
            com.mbridge.msdk.foundation.controller.a r13 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r13 = r13.j()
            int r13 = com.mbridge.msdk.foundation.tools.v.D(r13)
            r11.c(r13)
            boolean r12 = r12.isMraid()
            if (r12 == 0) goto L69
            int r12 = com.mbridge.msdk.foundation.entity.p.a
            goto L6b
        L69:
            int r12 = com.mbridge.msdk.foundation.entity.p.b
        L6b:
            r11.a(r12)
            a(r11, r14)
        L71:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.p r1, android.content.Context r2, java.lang.String r3) {
            if (r1 == 0) goto L2a
            java.lang.String r0 = "2000060"
            r1.o(r0)
            r1.m(r3)
            int r0 = com.mbridge.msdk.foundation.tools.v.D(r2)
            r1.c(r0)
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.b(r1)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L27
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            r2.a(r1)
            goto L2a
        L27:
            a(r1, r2, r3)
        L2a:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.p r1, java.lang.String r2) {
            if (r1 == 0) goto L2a
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.E()
            r1.b(r0)
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.d(r1)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L1f
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            r2.a(r1)
            goto L2a
        L1f:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            a(r1, r0, r2)
        L2a:
            return
    }

    private static void a(java.lang.Runnable r1) {
            android.os.Handler r0 = com.mbridge.msdk.foundation.same.report.c.a
            if (r0 == 0) goto L7
            r0.post(r1)
        L7:
            return
    }

    public static void a(java.lang.String r0, android.content.Context r1, java.lang.String r2) {
            if (r1 == 0) goto L16
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L16
            com.mbridge.msdk.foundation.same.f.a r1 = new com.mbridge.msdk.foundation.same.f.a
            r1.<init>(r0, r2)
            a(r1)
        L16:
            return
    }

    public static void b(com.mbridge.msdk.foundation.entity.p r1, android.content.Context r2, java.lang.String r3) {
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.g(r1)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L16
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            r2.a(r1)
            goto L19
        L16:
            a(r1, r2, r3)
        L19:
            return
    }

    public static void b(com.mbridge.msdk.foundation.entity.p r1, java.lang.String r2) {
            if (r1 == 0) goto L41
            java.lang.String r0 = "2000059"
            r1.o(r0)
            r1.m(r2)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.v.D(r0)
            r1.c(r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.E()
            r1.b(r0)
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.c(r1)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L36
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            r2.a(r1)
            goto L41
        L36:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            a(r1, r0, r2)
        L41:
            return
    }

    public static void c(com.mbridge.msdk.foundation.entity.p r1, android.content.Context r2, java.lang.String r3) {
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.h(r1)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L16
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            r2.a(r1)
            goto L19
        L16:
            a(r1, r2, r3)
        L19:
            return
    }

    public static void d(com.mbridge.msdk.foundation.entity.p r1, android.content.Context r2, java.lang.String r3) {
            if (r1 == 0) goto L2a
            java.lang.String r0 = "2000063"
            r1.o(r0)
            r1.m(r3)
            int r0 = com.mbridge.msdk.foundation.tools.v.D(r2)
            r1.c(r0)
            java.lang.String r1 = com.mbridge.msdk.foundation.entity.p.a(r1)
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L27
            com.mbridge.msdk.foundation.same.report.b r2 = com.mbridge.msdk.foundation.same.report.b.a()
            r2.a(r1)
            goto L2a
        L27:
            a(r1, r2, r3)
        L2a:
            return
    }
}

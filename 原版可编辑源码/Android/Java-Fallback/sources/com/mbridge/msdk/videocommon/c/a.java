package com.mbridge.msdk.videocommon.c;

public class a {
    private static final java.lang.String a = null;



    static {
            java.lang.Class<com.mbridge.msdk.videocommon.c.a> r0 = com.mbridge.msdk.videocommon.c.a.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.videocommon.c.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.videocommon.c.a.a
            return r0
    }

    static void a(com.mbridge.msdk.videocommon.c.a r2, int r3, java.lang.String r4) {
            com.mbridge.msdk.foundation.same.report.d r2 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2c
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            boolean r0 = r0.i     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r0 = r0.v     // Catch: java.lang.Throwable -> L2c
            goto L22
        L1c:
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r0 = r0.q     // Catch: java.lang.Throwable -> L2c
        L22:
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            int r1 = r1.j     // Catch: java.lang.Throwable -> L2c
            r2.a(r3, r1, r4, r0)     // Catch: java.lang.Throwable -> L2c
            goto L36
        L2c:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.videocommon.c.a.a
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L36:
            return
    }

    public final void a(android.content.Context r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d
            r0.<init>()
            java.lang.String r1 = "app_id"
            r0.a(r1, r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r7)
            java.lang.String r1 = "sign"
            r0.a(r1, r7)
            com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.videocommon.d.a r7 = com.mbridge.msdk.videocommon.d.b.a     // Catch: java.lang.Throwable -> L71
            if (r7 != 0) goto L55
            com.mbridge.msdk.foundation.a.a.a r7 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> L71
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L71
            r1.<init>()     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = "reward_"
            r1.append(r2)     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L71
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> L71
            r1.append(r2)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L71
            java.lang.String r7 = r7.b(r1)     // Catch: java.lang.Throwable -> L71
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L71
            if (r1 != 0) goto L55
            com.mbridge.msdk.videocommon.d.a r7 = com.mbridge.msdk.videocommon.d.a.a(r7)     // Catch: java.lang.Throwable -> L71
            goto L57
        L55:
            com.mbridge.msdk.videocommon.d.a r7 = com.mbridge.msdk.videocommon.d.b.a     // Catch: java.lang.Throwable -> L71
        L57:
            java.lang.String r1 = ""
            java.lang.String r2 = "vtag"
            if (r7 != 0) goto L61
            r0.a(r2, r1)     // Catch: java.lang.Throwable -> L71
            goto L7b
        L61:
            java.lang.String r7 = r7.a()     // Catch: java.lang.Throwable -> L71
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L71
            if (r3 == 0) goto L6c
            goto L6d
        L6c:
            r1 = r7
        L6d:
            r0.a(r2, r1)     // Catch: java.lang.Throwable -> L71
            goto L7b
        L71:
            r7 = move-exception
            java.lang.String r1 = com.mbridge.msdk.videocommon.c.a.a
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)
        L7b:
            com.mbridge.msdk.videocommon.c.a$1 r7 = new com.mbridge.msdk.videocommon.c.a$1
            r7.<init>(r4, r6)
            com.mbridge.msdk.videocommon.c.b r6 = new com.mbridge.msdk.videocommon.c.b
            r6.<init>(r5)
            r5 = 1
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.s
            r6.get(r5, r1, r0, r7)
            return
    }

    public final void a(android.content.Context r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, com.mbridge.msdk.videocommon.c.c r9) {
            r4 = this;
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d
            r0.<init>()
            java.lang.String r1 = "app_id"
            r0.a(r1, r6)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r7)
            java.lang.String r1 = "sign"
            r0.a(r1, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "["
            r7.append(r1)
            r7.append(r8)
            java.lang.String r1 = "]"
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            java.lang.String r1 = "unit_ids"
            r0.a(r1, r7)
            com.mbridge.msdk.videocommon.d.b r7 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L5f
            com.mbridge.msdk.videocommon.d.c r7 = r7.c(r6, r8)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = ""
            java.lang.String r2 = "vtag"
            if (r7 != 0) goto L4f
            r0.a(r2, r1)     // Catch: java.lang.Throwable -> L5f
            goto L69
        L4f:
            java.lang.String r7 = r7.l()     // Catch: java.lang.Throwable -> L5f
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L5f
            if (r3 == 0) goto L5a
            goto L5b
        L5a:
            r1 = r7
        L5b:
            r0.a(r2, r1)     // Catch: java.lang.Throwable -> L5f
            goto L69
        L5f:
            r7 = move-exception
            java.lang.String r1 = com.mbridge.msdk.videocommon.c.a.a
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)
        L69:
            com.mbridge.msdk.videocommon.c.a$2 r7 = new com.mbridge.msdk.videocommon.c.a$2
            r7.<init>(r4, r6, r9)
            r7.setUnitId(r8)
            com.mbridge.msdk.videocommon.c.b r6 = new com.mbridge.msdk.videocommon.c.b
            r6.<init>(r5)
            r5 = 1
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r8 = r8.s
            r6.get(r5, r8, r0, r7)
            return
    }
}

package com.mbridge.msdk.mbbid.common;

public final class a {
    public static java.lang.String a(android.content.Context r10, java.lang.String r11) {
            java.lang.String r0 = "|"
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            if (r10 == 0) goto L1a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L28e
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L28e
            if (r2 != 0) goto L1a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L28e
            r2.b(r10)     // Catch: java.lang.Exception -> L28e
        L1a:
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = r3.k()     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.c.a r2 = r2.b(r3)     // Catch: java.lang.Exception -> L28e
            if (r2 != 0) goto L34
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.c.a r2 = r2.b()     // Catch: java.lang.Exception -> L28e
        L34:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = r2.aa()     // Catch: java.lang.Exception -> L28e
            r4 = 1
            java.lang.String r5 = ""
            if (r3 != r4) goto L58
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r3 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L28e
            java.lang.String r6 = "authority_android_id"
            boolean r3 = r3.a(r6)     // Catch: java.lang.Exception -> L28e
            if (r3 == 0) goto L58
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.g(r10)     // Catch: java.lang.Exception -> L28e
            goto L59
        L58:
            r3 = r5
        L59:
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = r2.Z()     // Catch: java.lang.Exception -> L28e
            if (r3 != r4) goto L76
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r3 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L28e
            java.lang.String r6 = "authority_imei_mac"
            boolean r3 = r3.a(r6)     // Catch: java.lang.Exception -> L28e
            if (r3 == 0) goto L76
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.b(r10)     // Catch: java.lang.Exception -> L28e
            goto L77
        L76:
            r3 = r5
        L77:
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.z()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.y()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = "MAL_16.3.67"
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.v.x(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = "x"
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.v.y(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.A()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r3 = 20
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.ae.a(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r6)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.b(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            long r6 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L28e
            r1.append(r6)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.f     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.v.L()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.v.K()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.s()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.b.a()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.b.b()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.ac.b()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.ac.a()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r6 = 0
            long r8 = com.mbridge.msdk.foundation.tools.u.a()     // Catch: java.lang.Exception -> L13e
            goto L13f
        L13e:
            r8 = r6
        L13f:
            int r3 = (r8 > r6 ? 1 : (r8 == r6 ? 0 : -1))
            if (r3 <= 0) goto L14a
            r1.append(r8)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            goto L150
        L14a:
            r1.append(r5)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
        L150:
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L28e
            java.lang.String r6 = "b"
            java.lang.String r3 = r3.b(r6)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.foundation.a.a.a r3 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L28e
            java.lang.String r6 = "c"
            java.lang.String r3 = r3.b(r6)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r5)     // Catch: java.lang.Exception -> L28e
            if (r2 == 0) goto L180
            java.lang.String r3 = r2.o()     // Catch: java.lang.Exception -> L28e
            goto L181
        L180:
            r3 = r5
        L181:
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r3 = com.mbridge.msdk.foundation.tools.ae.e()     // Catch: java.lang.Exception -> L28e
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.ae.f()     // Catch: java.lang.Exception -> L28e
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L28e
            if (r6 == 0) goto L19f
            r3 = r5
        L19f:
            r1.append(r3)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.String r11 = com.mbridge.msdk.foundation.tools.ae.m(r11)     // Catch: java.lang.Exception -> L28e
            r1.append(r11)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r11 = r2.G()     // Catch: java.lang.Exception -> L28e
            if (r11 != r4) goto L1c8
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r11 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L28e
            java.lang.String r2 = "authority_device_id"
            boolean r11 = r11.a(r2)     // Catch: java.lang.Exception -> L28e
            if (r11 == 0) goto L1c8
            java.lang.String r11 = com.mbridge.msdk.foundation.tools.v.a(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r11)     // Catch: java.lang.Exception -> L28e
        L1c8:
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r11 = com.mbridge.msdk.foundation.tools.v.v()     // Catch: java.lang.Exception -> L28e
            r1.append(r11)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r10 = com.mbridge.msdk.foundation.tools.v.r(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28e
            r10.<init>()     // Catch: java.lang.Exception -> L28e
            int r11 = com.mbridge.msdk.foundation.tools.v.w()     // Catch: java.lang.Exception -> L28e
            r10.append(r11)     // Catch: java.lang.Exception -> L28e
            r10.append(r5)     // Catch: java.lang.Exception -> L28e
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28e
            r10.<init>()     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L28e
            java.lang.String r11 = r11.m()     // Catch: java.lang.Exception -> L28e
            int r11 = com.mbridge.msdk.foundation.tools.v.g(r11)     // Catch: java.lang.Exception -> L28e
            r10.append(r11)     // Catch: java.lang.Exception -> L28e
            r10.append(r5)     // Catch: java.lang.Exception -> L28e
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r10 = com.mbridge.msdk.foundation.tools.v.O()     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            boolean r10 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()     // Catch: java.lang.Exception -> L28e
            java.lang.String r11 = "1"
            if (r10 == 0) goto L22d
            r10 = r11
            goto L22f
        L22d:
            java.lang.String r10 = "2"
        L22f:
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r10 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L28e
            java.lang.String r2 = "authority_general_data"
            boolean r10 = r10.a(r2)     // Catch: java.lang.Exception -> L28e
            if (r10 == 0) goto L248
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.v.u()     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
        L248:
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r5)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r5)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r5)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            r1.append(r11)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r10 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L28e
            int r10 = r10.f()     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            r1.append(r0)     // Catch: java.lang.Exception -> L28e
            int r10 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: java.lang.Exception -> L28e
            if (r10 == 0) goto L292
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L28e
            r10.<init>()     // Catch: java.lang.Exception -> L28e
            int r11 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: java.lang.Exception -> L28e
            r10.append(r11)     // Catch: java.lang.Exception -> L28e
            r10.append(r5)     // Catch: java.lang.Exception -> L28e
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Exception -> L28e
            r1.append(r10)     // Catch: java.lang.Exception -> L28e
            goto L292
        L28e:
            r10 = move-exception
            r10.printStackTrace()
        L292:
            java.lang.String r10 = r1.toString()
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.t.a(r10)
            return r10
    }
}

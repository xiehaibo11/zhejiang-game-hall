package com.mbridge.msdk.mbbid.common.b;

public final class a extends com.mbridge.msdk.foundation.same.net.g.f {
    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r5, com.mbridge.msdk.foundation.same.net.g.d r6) {
            r4 = this;
            super.addExtraParams(r5, r6)
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.a r5 = r5.b(r0)
            if (r5 != 0) goto L1d
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r5 = r5.b()
        L1d:
            java.lang.String r0 = "platform"
            java.lang.String r1 = "1"
            r6.a(r0, r1)
            java.lang.String r0 = android.os.Build.VERSION.RELEASE
            java.lang.String r1 = "os_version"
            r6.a(r1, r0)
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.A(r0)
            java.lang.String r1 = "package_name"
            r6.a(r1, r0)
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.v(r0)
            java.lang.String r1 = "app_version_name"
            r6.a(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = r4.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.u(r1)
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "app_version_code"
            r6.a(r2, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.x()
            java.lang.String r2 = "model"
            r6.a(r2, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.z()
            java.lang.String r2 = "brand"
            r6.a(r2, r0)
            java.lang.String r0 = "gaid"
            r6.a(r0, r1)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.F()
            java.lang.String r2 = "gaid2"
            r6.a(r2, r0)
            int r0 = r5.Z()
            r2 = 1
            if (r0 != r2) goto La7
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r3 = "authority_imei_mac"
            boolean r0 = r0.a(r3)
            if (r0 == 0) goto La7
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.b(r0)
            if (r0 == 0) goto La7
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.b(r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.t.a(r0)
            java.lang.String r3 = "d1"
            r6.a(r3, r0)
        La7:
            int r5 = r5.aa()
            if (r5 != r2) goto Lcc
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.g(r5)
            if (r5 == 0) goto Lcc
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r5 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r0 = "authority_android_id"
            boolean r5 = r5.a(r0)
            if (r5 == 0) goto Lcc
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.f(r5)
            java.lang.String r0 = "d3"
            r6.a(r0, r5)
        Lcc:
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.e(r5)
            java.lang.String r0 = "mnc"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.d(r5)
            java.lang.String r0 = "mcc"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            int r5 = com.mbridge.msdk.foundation.tools.v.D(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "network_type"
            r6.a(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r2 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.a(r2, r5)
            r0.append(r5)
            r0.append(r1)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "network_str"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.s(r5)
            java.lang.String r0 = "language"
            r6.a(r0, r5)
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.B()
            java.lang.String r0 = "timezone"
            r6.a(r0, r5)
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.A()
            java.lang.String r0 = "useragent"
            r6.a(r0, r5)
            java.lang.String r5 = "sdk_version"
            java.lang.String r0 = "MAL_16.3.67"
            r6.a(r5, r0)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.j(r5)
            java.lang.String r0 = "gp_version"
            r6.a(r0, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            android.content.Context r0 = r4.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.x(r0)
            r5.append(r0)
            java.lang.String r0 = "x"
            r5.append(r0)
            android.content.Context r0 = r4.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.y(r0)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = "screen_size"
            r6.a(r0, r5)
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.l
            java.lang.String r0 = "is_clever"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            com.mbridge.msdk.foundation.same.net.g.e.a(r6, r5)
            com.mbridge.msdk.foundation.same.net.g.e.a(r6)
            com.mbridge.msdk.foundation.same.net.g.e.b(r6)
            com.mbridge.msdk.foundation.same.net.g.e.c(r6)
            return
    }
}

package com.mbridge.msdk.d.b;

public final class a extends com.mbridge.msdk.foundation.same.net.g.a {
    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r4, com.mbridge.msdk.foundation.same.net.g.d r5) {
            r3 = this;
            super.addExtraParams(r4, r5)
            java.lang.String r4 = "platform"
            java.lang.String r0 = "1"
            r5.a(r4, r0)
            java.lang.String r4 = android.os.Build.VERSION.RELEASE
            java.lang.String r0 = "os_version"
            r5.a(r0, r4)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.A(r4)
            java.lang.String r0 = "package_name"
            r5.a(r0, r4)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.v(r4)
            java.lang.String r0 = "app_version_name"
            r5.a(r0, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.content.Context r0 = r3.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.u(r0)
            r4.append(r0)
            java.lang.String r0 = ""
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "app_version_code"
            r5.a(r1, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.content.Context r1 = r3.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.t(r1)
            r4.append(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r1 = "orientation"
            r5.a(r1, r4)
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.x()
            java.lang.String r1 = "model"
            r5.a(r1, r4)
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.z()
            java.lang.String r1 = "brand"
            r5.a(r1, r4)
            java.lang.String r4 = "gaid"
            r5.a(r4, r0)
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.F()
            java.lang.String r1 = "gaid2"
            r5.a(r1, r4)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.e(r4)
            java.lang.String r1 = "mnc"
            r5.a(r1, r4)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.d(r4)
            java.lang.String r1 = "mcc"
            r5.a(r1, r4)
            android.content.Context r4 = r3.mContext
            int r4 = com.mbridge.msdk.foundation.tools.v.D(r4)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "network_type"
            r5.a(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.a(r2, r4)
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r0 = "network_str"
            r5.a(r0, r4)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.s(r4)
            java.lang.String r0 = "language"
            r5.a(r0, r4)
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.B()
            java.lang.String r0 = "timezone"
            r5.a(r0, r4)
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.A()
            java.lang.String r0 = "useragent"
            r5.a(r0, r4)
            java.lang.String r4 = "sdk_version"
            java.lang.String r0 = "MAL_16.3.67"
            r5.a(r4, r0)
            android.content.Context r4 = r3.mContext
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.j(r4)
            java.lang.String r0 = "gp_version"
            r5.a(r0, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            android.content.Context r0 = r3.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.x(r0)
            r4.append(r0)
            java.lang.String r0 = "x"
            r4.append(r0)
            android.content.Context r0 = r3.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.y(r0)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r0 = "screen_size"
            r5.a(r0, r4)
            java.lang.String r4 = com.mbridge.msdk.foundation.same.a.l
            java.lang.String r0 = "is_clever"
            r5.a(r0, r4)
            android.content.Context r4 = r3.mContext
            com.mbridge.msdk.foundation.same.net.g.e.a(r5, r4)
            com.mbridge.msdk.foundation.same.net.g.e.a(r5)
            return
    }
}

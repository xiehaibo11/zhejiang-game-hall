package com.mbridge.msdk.c.a;

public final class c extends com.mbridge.msdk.foundation.same.net.g.b {
    public c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r3, com.mbridge.msdk.foundation.same.net.g.d r4) {
            r2 = this;
            super.addExtraParams(r3, r4)
            java.lang.String r3 = "platform"
            java.lang.String r0 = "1"
            r4.a(r3, r0)
            java.lang.String r3 = android.os.Build.VERSION.RELEASE
            java.lang.String r0 = "os_version"
            r4.a(r0, r3)
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.A(r3)
            java.lang.String r0 = "package_name"
            r4.a(r0, r3)
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.v(r3)
            java.lang.String r0 = "app_version_name"
            r4.a(r0, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r0 = r2.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.u(r0)
            r3.append(r0)
            java.lang.String r0 = ""
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = "app_version_code"
            r4.a(r1, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r1 = r2.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.t(r1)
            r3.append(r1)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = "orientation"
            r4.a(r1, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.x()
            java.lang.String r1 = "model"
            r4.a(r1, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.z()
            java.lang.String r1 = "brand"
            r4.a(r1, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.E()
            java.lang.String r1 = "gaid"
            r4.a(r1, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.F()
            java.lang.String r1 = "gaid2"
            r4.a(r1, r3)
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.e(r3)
            java.lang.String r1 = "mnc"
            r4.a(r1, r3)
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.d(r3)
            java.lang.String r1 = "mcc"
            r4.a(r1, r3)
            android.content.Context r3 = r2.mContext
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "network_type"
            r4.a(r1, r0)
            android.content.Context r0 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.a(r0, r3)
            java.lang.String r0 = "network_str"
            r4.a(r0, r3)
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.s(r3)
            java.lang.String r0 = "language"
            r4.a(r0, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.B()
            java.lang.String r0 = "timezone"
            r4.a(r0, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.A()
            java.lang.String r0 = "useragent"
            r4.a(r0, r3)
            java.lang.String r3 = "sdk_version"
            java.lang.String r0 = "MAL_16.3.67"
            r4.a(r3, r0)
            android.content.Context r3 = r2.mContext
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.j(r3)
            java.lang.String r0 = "gp_version"
            r4.a(r0, r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            android.content.Context r0 = r2.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.x(r0)
            r3.append(r0)
            java.lang.String r0 = "x"
            r3.append(r0)
            android.content.Context r0 = r2.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.y(r0)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            java.lang.String r0 = "screen_size"
            r4.a(r0, r3)
            java.lang.String r3 = com.mbridge.msdk.foundation.same.a.l
            java.lang.String r0 = "is_clever"
            r4.a(r0, r3)
            com.mbridge.msdk.foundation.same.net.g.e.d(r4)
            return
    }
}

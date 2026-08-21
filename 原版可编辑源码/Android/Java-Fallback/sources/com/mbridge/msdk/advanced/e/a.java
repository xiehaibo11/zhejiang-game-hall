package com.mbridge.msdk.advanced.e;

public final class a extends com.mbridge.msdk.foundation.same.net.g.a {
    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r5, com.mbridge.msdk.foundation.same.net.g.d r6) {
            r4 = this;
            super.addExtraParams(r5, r6)
            java.lang.String r5 = "1"
            java.lang.String r0 = "platform"
            r6.a(r0, r5)
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
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r2 = r4.mContext
            int r2 = com.mbridge.msdk.foundation.tools.v.t(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "orientation"
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
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.e(r0)
            java.lang.String r2 = "mnc"
            r6.a(r2, r0)
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.d(r0)
            java.lang.String r2 = "mcc"
            r6.a(r2, r0)
            android.content.Context r0 = r4.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.D(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "network_type"
            r6.a(r3, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r3 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a(r3, r0)
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            java.lang.String r1 = "network_str"
            r6.a(r1, r0)
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.s(r0)
            java.lang.String r1 = "language"
            r6.a(r1, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.B()
            java.lang.String r1 = "timezone"
            r6.a(r1, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.A()
            java.lang.String r1 = "useragent"
            r6.a(r1, r0)
            java.lang.String r0 = "sdk_version"
            java.lang.String r1 = "MAL_16.3.67"
            r6.a(r0, r1)
            android.content.Context r0 = r4.mContext
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.j(r0)
            java.lang.String r1 = "gp_version"
            r6.a(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            android.content.Context r1 = r4.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.x(r1)
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            android.content.Context r1 = r4.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.y(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "screen_size"
            r6.a(r1, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.l
            java.lang.String r1 = "is_clever"
            r6.a(r1, r0)
            java.lang.String r0 = "version_flag"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            com.mbridge.msdk.foundation.same.net.g.e.a(r6, r5)
            com.mbridge.msdk.foundation.same.net.g.e.a(r6)
            com.mbridge.msdk.foundation.same.net.g.e.c(r6)
            return
    }
}

package com.mbridge.msdk.videocommon.c;

public final class b extends com.mbridge.msdk.foundation.same.net.g.b {
    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r5, com.mbridge.msdk.foundation.same.net.g.d r6) {
            r4 = this;
            java.lang.String r0 = ""
            super.addExtraParams(r5, r6)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "platform"
            java.lang.String r1 = "1"
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "os_version"
            java.lang.String r1 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "package_name"
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.A(r1)     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "app_version_name"
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.v(r1)     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "app_version_code"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L121
            r1.<init>()     // Catch: java.lang.Exception -> L121
            android.content.Context r2 = r4.mContext     // Catch: java.lang.Exception -> L121
            int r2 = com.mbridge.msdk.foundation.tools.v.u(r2)     // Catch: java.lang.Exception -> L121
            r1.append(r2)     // Catch: java.lang.Exception -> L121
            r1.append(r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "orientation"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L121
            r1.<init>()     // Catch: java.lang.Exception -> L121
            android.content.Context r2 = r4.mContext     // Catch: java.lang.Exception -> L121
            int r2 = com.mbridge.msdk.foundation.tools.v.t(r2)     // Catch: java.lang.Exception -> L121
            r1.append(r2)     // Catch: java.lang.Exception -> L121
            r1.append(r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "model"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.x()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "brand"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.z()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "gaid"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "mnc"
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.e(r1)     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "mcc"
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.d(r1)     // Catch: java.lang.Exception -> L121
            r6.a(r5, r1)     // Catch: java.lang.Exception -> L121
            android.content.Context r5 = r4.mContext     // Catch: java.lang.Exception -> L121
            int r5 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = "network_type"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L121
            r2.<init>()     // Catch: java.lang.Exception -> L121
            r2.append(r5)     // Catch: java.lang.Exception -> L121
            r2.append(r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L121
            r6.a(r1, r2)     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = "network_str"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L121
            r2.<init>()     // Catch: java.lang.Exception -> L121
            android.content.Context r3 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.a(r3, r5)     // Catch: java.lang.Exception -> L121
            r2.append(r5)     // Catch: java.lang.Exception -> L121
            r2.append(r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Exception -> L121
            r6.a(r1, r5)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "language"
            android.content.Context r0 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.s(r0)     // Catch: java.lang.Exception -> L121
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "timezone"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.B()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "useragent"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.A()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "sdk_version"
            java.lang.String r0 = "MAL_16.3.67"
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "gp_version"
            android.content.Context r0 = r4.mContext     // Catch: java.lang.Exception -> L121
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.j(r0)     // Catch: java.lang.Exception -> L121
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "screen_size"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L121
            r0.<init>()     // Catch: java.lang.Exception -> L121
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L121
            int r1 = com.mbridge.msdk.foundation.tools.v.x(r1)     // Catch: java.lang.Exception -> L121
            r0.append(r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r1 = "x"
            r0.append(r1)     // Catch: java.lang.Exception -> L121
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L121
            int r1 = com.mbridge.msdk.foundation.tools.v.y(r1)     // Catch: java.lang.Exception -> L121
            r0.append(r1)     // Catch: java.lang.Exception -> L121
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L121
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            com.mbridge.msdk.foundation.same.net.g.e.d(r6)     // Catch: java.lang.Exception -> L121
            java.lang.String r5 = "is_clever"
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.l     // Catch: java.lang.Exception -> L121
            r6.a(r5, r0)     // Catch: java.lang.Exception -> L121
            goto L125
        L121:
            r5 = move-exception
            r5.printStackTrace()
        L125:
            return
    }
}

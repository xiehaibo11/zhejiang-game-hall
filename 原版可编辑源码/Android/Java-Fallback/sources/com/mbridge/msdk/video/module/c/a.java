package com.mbridge.msdk.video.module.c;

public final class a extends com.mbridge.msdk.foundation.same.net.g.b {
    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r5, com.mbridge.msdk.foundation.same.net.g.d r6) {
            r4 = this;
            super.addExtraParams(r5, r6)
            java.lang.String r5 = "platform"
            java.lang.String r0 = "1"
            r6.a(r5, r0)
            java.lang.String r5 = android.os.Build.VERSION.RELEASE
            java.lang.String r0 = "os_version"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.A(r5)
            java.lang.String r0 = "package_name"
            r6.a(r0, r5)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.v(r5)
            java.lang.String r0 = "app_version_name"
            r6.a(r0, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            android.content.Context r0 = r4.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.u(r0)
            r5.append(r0)
            java.lang.String r0 = ""
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r1 = "app_version_code"
            r6.a(r1, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            android.content.Context r1 = r4.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.t(r1)
            r5.append(r1)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r1 = "orientation"
            r6.a(r1, r5)
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.x()
            java.lang.String r1 = "model"
            r6.a(r1, r5)
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.z()
            java.lang.String r1 = "brand"
            r6.a(r1, r5)
            java.lang.String r5 = "gaid"
            r6.a(r5, r0)
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.F()
            java.lang.String r1 = "gaid2"
            r6.a(r1, r5)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.e(r5)
            java.lang.String r1 = "mnc"
            r6.a(r1, r5)
            android.content.Context r5 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.d(r5)
            java.lang.String r1 = "mcc"
            r6.a(r1, r5)
            android.content.Context r5 = r4.mContext
            int r5 = com.mbridge.msdk.foundation.tools.v.D(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "network_type"
            r6.a(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.Context r2 = r4.mContext
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.a(r2, r5)
            r1.append(r5)
            r1.append(r0)
            java.lang.String r5 = r1.toString()
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
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.a r5 = r5.b(r0)
            if (r5 == 0) goto L19a
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r5.Z()     // Catch: java.lang.Exception -> L196
            r2 = 1
            if (r1 != r2) goto L15f
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L196
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.b(r1)     // Catch: java.lang.Exception -> L196
            if (r1 == 0) goto L14c
            java.lang.String r1 = "imei"
            android.content.Context r3 = r4.mContext     // Catch: java.lang.Exception -> L196
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.b(r3)     // Catch: java.lang.Exception -> L196
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L196
        L14c:
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L196
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.i(r1)     // Catch: java.lang.Exception -> L196
            if (r1 == 0) goto L15f
            java.lang.String r1 = "mac"
            android.content.Context r3 = r4.mContext     // Catch: java.lang.Exception -> L196
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.i(r3)     // Catch: java.lang.Exception -> L196
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L196
        L15f:
            int r5 = r5.aa()     // Catch: java.lang.Exception -> L196
            if (r5 != r2) goto L178
            android.content.Context r5 = r4.mContext     // Catch: java.lang.Exception -> L196
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.g(r5)     // Catch: java.lang.Exception -> L196
            if (r5 == 0) goto L178
            java.lang.String r5 = "android_id"
            android.content.Context r1 = r4.mContext     // Catch: java.lang.Exception -> L196
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.g(r1)     // Catch: java.lang.Exception -> L196
            r0.put(r5, r1)     // Catch: java.lang.Exception -> L196
        L178:
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L196
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L196
            if (r5 != 0) goto L19a
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L196
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.t.a(r5)     // Catch: java.lang.Exception -> L196
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L196
            if (r0 != 0) goto L19a
            java.lang.String r0 = "dvi"
            r6.a(r0, r5)     // Catch: java.lang.Exception -> L196
            goto L19a
        L196:
            r5 = move-exception
            r5.printStackTrace()
        L19a:
            return
    }
}

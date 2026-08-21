package com.mbridge.msdk.rover;

public final class g extends com.mbridge.msdk.foundation.same.net.g.b {
    public g(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final void addExtraParams(java.lang.String r7, com.mbridge.msdk.foundation.same.net.g.d r8) {
            r6 = this;
            java.lang.String r7 = "platform"
            java.lang.String r0 = "1"
            r8.a(r7, r0)
            java.lang.String r7 = android.os.Build.VERSION.RELEASE
            java.lang.String r0 = "os_version"
            r8.a(r0, r7)
            android.content.Context r7 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.A(r7)
            java.lang.String r0 = "package_name"
            r8.a(r0, r7)
            android.content.Context r7 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.v(r7)
            java.lang.String r0 = "app_version_name"
            r8.a(r0, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            android.content.Context r0 = r6.mContext
            int r0 = com.mbridge.msdk.foundation.tools.v.u(r0)
            r7.append(r0)
            java.lang.String r0 = ""
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.String r1 = "app_version_code"
            r8.a(r1, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            android.content.Context r1 = r6.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.t(r1)
            r7.append(r1)
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            java.lang.String r1 = "orientation"
            r8.a(r1, r7)
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.x()
            java.lang.String r1 = "model"
            r8.a(r1, r7)
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.z()
            java.lang.String r1 = "brand"
            r8.a(r1, r7)
            java.lang.String r7 = "gaid"
            r8.a(r7, r0)
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.F()
            java.lang.String r1 = "gaid2"
            r8.a(r1, r7)
            android.content.Context r7 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.e(r7)
            java.lang.String r1 = "mnc"
            r8.a(r1, r7)
            android.content.Context r7 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.d(r7)
            java.lang.String r1 = "mcc"
            r8.a(r1, r7)
            android.content.Context r7 = r6.mContext
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "network_type"
            r8.a(r2, r1)
            android.content.Context r1 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.a(r1, r7)
            java.lang.String r1 = "network_str"
            r8.a(r1, r7)
            android.content.Context r7 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.s(r7)
            java.lang.String r1 = "language"
            r8.a(r1, r7)
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.B()
            java.lang.String r1 = "timezone"
            r8.a(r1, r7)
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.A()
            java.lang.String r1 = "useragent"
            r8.a(r1, r7)
            java.lang.String r7 = "sdk_version"
            java.lang.String r1 = "MAL_16.3.67"
            r8.a(r7, r1)
            android.content.Context r7 = r6.mContext
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.j(r7)
            java.lang.String r1 = "gp_version"
            r8.a(r1, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            android.content.Context r1 = r6.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.x(r1)
            r7.append(r1)
            java.lang.String r1 = "x"
            r7.append(r1)
            android.content.Context r1 = r6.mContext
            int r1 = com.mbridge.msdk.foundation.tools.v.y(r1)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            java.lang.String r1 = "screen_size"
            r8.a(r1, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            r7.append(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.l()
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r7)
            java.lang.String r1 = "sign"
            r8.a(r1, r7)
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r7 = r7.k()
            java.lang.String r1 = "app_id"
            r8.a(r1, r7)
            com.mbridge.msdk.c.b r7 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r7 = r7.b(r1)
            java.lang.String r1 = "dvi"
            if (r7 == 0) goto L1c6
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            int r3 = r7.Z()     // Catch: java.lang.Exception -> L1c1
            r4 = 1
            if (r3 != r4) goto L184
            android.content.Context r3 = r6.mContext     // Catch: java.lang.Exception -> L1c1
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.b(r3)     // Catch: java.lang.Exception -> L1c1
            if (r3 == 0) goto L171
            java.lang.String r3 = "imei"
            android.content.Context r5 = r6.mContext     // Catch: java.lang.Exception -> L1c1
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.b(r5)     // Catch: java.lang.Exception -> L1c1
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L1c1
        L171:
            android.content.Context r3 = r6.mContext     // Catch: java.lang.Exception -> L1c1
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.i(r3)     // Catch: java.lang.Exception -> L1c1
            if (r3 == 0) goto L184
            java.lang.String r3 = "mac"
            android.content.Context r5 = r6.mContext     // Catch: java.lang.Exception -> L1c1
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.i(r5)     // Catch: java.lang.Exception -> L1c1
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L1c1
        L184:
            int r7 = r7.aa()     // Catch: java.lang.Exception -> L1c1
            if (r7 != r4) goto L19d
            android.content.Context r7 = r6.mContext     // Catch: java.lang.Exception -> L1c1
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: java.lang.Exception -> L1c1
            if (r7 == 0) goto L19d
            java.lang.String r7 = "android_id"
            android.content.Context r3 = r6.mContext     // Catch: java.lang.Exception -> L1c1
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.g(r3)     // Catch: java.lang.Exception -> L1c1
            r2.put(r7, r3)     // Catch: java.lang.Exception -> L1c1
        L19d:
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L1c1
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L1c1
            if (r7 != 0) goto L1bd
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L1c1
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.t.a(r7)     // Catch: java.lang.Exception -> L1c1
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L1c1
            if (r2 != 0) goto L1b9
            r8.a(r1, r7)     // Catch: java.lang.Exception -> L1c1
            goto L1c9
        L1b9:
            r8.a(r1, r0)     // Catch: java.lang.Exception -> L1c1
            goto L1c9
        L1bd:
            r8.a(r1, r0)     // Catch: java.lang.Exception -> L1c1
            goto L1c9
        L1c1:
            r7 = move-exception
            r7.printStackTrace()
            goto L1c9
        L1c6:
            r8.a(r1, r0)
        L1c9:
            return
    }
}

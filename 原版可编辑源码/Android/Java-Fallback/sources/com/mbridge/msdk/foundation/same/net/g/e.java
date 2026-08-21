package com.mbridge.msdk.foundation.same.net.g;

public final class e {
    private static java.lang.String a = "";
    private static java.lang.String b = "";

    static {
            return
    }

    public static void a(com.mbridge.msdk.foundation.same.net.g.d r2) {
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.f
            java.lang.String r1 = "api_version"
            r2.a(r1, r0)
            return
    }

    public static void a(com.mbridge.msdk.foundation.same.net.g.d r5, android.content.Context r6) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            r1 = 1
            java.lang.String r2 = ""
            if (r0 == 0) goto Ld3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = com.mbridge.msdk.foundation.tools.v.O()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "withGP"
            r5.a(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            int r3 = com.mbridge.msdk.foundation.tools.v.r(r3)
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "has_wx"
            r5.a(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = com.mbridge.msdk.foundation.tools.v.v()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "integrated_wx"
            r5.a(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = com.mbridge.msdk.foundation.tools.v.w()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "opensdk_ver"
            r5.a(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.m()
            int r3 = com.mbridge.msdk.foundation.tools.v.g(r3)
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "wx_api_ver"
            r5.a(r3, r0)
            com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()
            r3 = 0
            java.lang.String r4 = "authority_dnt"
            int r0 = r0.b(r4, r3)
            if (r0 != r1) goto Lae
            java.lang.String r0 = "dnt"
            java.lang.String r3 = "1"
            r5.a(r0, r3)
        Lae:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.h
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            int r4 = r4.f()
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r5.a(r0, r3)
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.u()
            java.lang.String r3 = "emu"
            r5.a(r3, r0)
        Ld3:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r3 = "authority_other"
            boolean r0 = r0.a(r3)
            if (r0 == 0) goto L148
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            int r4 = com.mbridge.msdk.foundation.tools.ac.b()
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r5.a(r0, r3)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.g
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            int r4 = com.mbridge.msdk.foundation.tools.ac.a()
            r3.append(r4)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            r5.a(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = com.mbridge.msdk.foundation.tools.b.a()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "power_rate"
            r5.a(r3, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r3 = com.mbridge.msdk.foundation.tools.b.b()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "charging"
            r5.a(r3, r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.d
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.J()
            r5.a(r0, r3)
        L148:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.A(r6)
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.v.a(r0, r6)
            java.lang.String r0 = "pkg_source"
            r5.a(r0, r6)
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            org.json.JSONObject r6 = r6.o()
            if (r6 == 0) goto L170
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            org.json.JSONObject r6 = r6.o()
            java.lang.String r6 = r6.toString()
            java.lang.String r0 = "web_env"
            r5.a(r0, r6)
        L170:
            int r6 = android.os.Build.VERSION.SDK_INT
            r0 = 18
            if (r6 <= r0) goto L17d
            java.lang.String r6 = "http_req"
            java.lang.String r0 = "2"
            r5.a(r6, r0)
        L17d:
            a(r5, r1)
            g(r5)
            e(r5)
            com.mbridge.msdk.c.b r6 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            com.mbridge.msdk.c.a r6 = r6.b(r0)
            if (r6 != 0) goto L1a0
            com.mbridge.msdk.c.b r6 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r6 = r6.b()
        L1a0:
            int r0 = r6.aY()
            java.lang.String r3 = "gdpr_consent"
            if (r0 != r1) goto L1c3
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            int r0 = r0.g()
            r6.append(r0)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            r5.a(r3, r6)
            goto L1e3
        L1c3:
            boolean r6 = r6.aT()
            if (r6 == 0) goto L1e3
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            int r0 = r0.g()
            r6.append(r0)
            r6.append(r2)
            java.lang.String r6 = r6.toString()
            r5.a(r3, r6)
        L1e3:
            h(r5)
            return
    }

    private static void a(com.mbridge.msdk.foundation.same.net.g.d r8, boolean r9) {
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r3 = r3.k()
            com.mbridge.msdk.c.a r2 = r2.b(r3)
            if (r2 == 0) goto L152
            java.lang.String r3 = r2.o()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L31
            if (r9 == 0) goto L31
            java.lang.String r3 = r2.o()
            java.lang.String r4 = "a_stid"
            r8.a(r4, r3)
        L31:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            int r4 = r2.Z()     // Catch: java.lang.Exception -> L148
            r5 = 1
            if (r4 != r5) goto L8c
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.b(r1)     // Catch: java.lang.Exception -> L148
            java.lang.String r6 = "authority_imei_mac"
            if (r4 == 0) goto L58
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L148
            boolean r4 = r4.a(r6)     // Catch: java.lang.Exception -> L148
            if (r4 == 0) goto L58
            java.lang.String r4 = "imei"
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.b(r1)     // Catch: java.lang.Exception -> L148
            r3.put(r4, r7)     // Catch: java.lang.Exception -> L148
        L58:
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.i(r1)     // Catch: java.lang.Exception -> L148
            if (r4 == 0) goto L71
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L148
            boolean r4 = r4.a(r6)     // Catch: java.lang.Exception -> L148
            if (r4 == 0) goto L71
            java.lang.String r4 = "mac"
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.i(r1)     // Catch: java.lang.Exception -> L148
            r3.put(r4, r7)     // Catch: java.lang.Exception -> L148
        L71:
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.c(r1)     // Catch: java.lang.Exception -> L148
            if (r4 == 0) goto L8c
            if (r9 == 0) goto L8c
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r9 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L148
            boolean r9 = r9.a(r6)     // Catch: java.lang.Exception -> L148
            if (r9 == 0) goto L8c
            java.lang.String r9 = "imsi"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.c(r1)     // Catch: java.lang.Exception -> L148
            r3.put(r9, r4)     // Catch: java.lang.Exception -> L148
        L8c:
            int r9 = r2.G()     // Catch: java.lang.Exception -> L148
            if (r9 != r5) goto Lad
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.v.a(r1)     // Catch: java.lang.Exception -> L148
            if (r9 == 0) goto Lad
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r9 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L148
            java.lang.String r4 = "authority_device_id"
            boolean r9 = r9.a(r4)     // Catch: java.lang.Exception -> L148
            if (r9 == 0) goto Lad
            java.lang.String r9 = "oaid"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.a(r1)     // Catch: java.lang.Exception -> L148
            r3.put(r9, r4)     // Catch: java.lang.Exception -> L148
        Lad:
            int r9 = r2.aa()     // Catch: java.lang.Exception -> L148
            if (r9 != r5) goto Lce
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.v.g(r1)     // Catch: java.lang.Exception -> L148
            if (r9 == 0) goto Lce
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r9 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L148
            java.lang.String r2 = "authority_android_id"
            boolean r9 = r9.a(r2)     // Catch: java.lang.Exception -> L148
            if (r9 == 0) goto Lce
            java.lang.String r9 = "android_id"
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.g(r1)     // Catch: java.lang.Exception -> L148
            r3.put(r9, r1)     // Catch: java.lang.Exception -> L148
        Lce:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r9 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L148
            java.lang.String r1 = "authority_general_data"
            boolean r9 = r9.a(r1)     // Catch: java.lang.Exception -> L148
            if (r9 == 0) goto L11c
            java.lang.String r9 = "cid"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L148
            r1.<init>()     // Catch: java.lang.Exception -> L148
            int r2 = com.mbridge.msdk.foundation.tools.v.a()     // Catch: java.lang.Exception -> L148
            r1.append(r2)     // Catch: java.lang.Exception -> L148
            r1.append(r0)     // Catch: java.lang.Exception -> L148
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L148
            r3.put(r9, r1)     // Catch: java.lang.Exception -> L148
            java.lang.String r9 = "dmt"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L148
            r1.<init>()     // Catch: java.lang.Exception -> L148
            int r2 = com.mbridge.msdk.foundation.tools.v.L()     // Catch: java.lang.Exception -> L148
            r1.append(r2)     // Catch: java.lang.Exception -> L148
            r1.append(r0)     // Catch: java.lang.Exception -> L148
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L148
            r3.put(r9, r0)     // Catch: java.lang.Exception -> L148
            java.lang.String r9 = "dmf"
            int r0 = com.mbridge.msdk.foundation.tools.v.K()     // Catch: java.lang.Exception -> L148
            r3.put(r9, r0)     // Catch: java.lang.Exception -> L148
            java.lang.String r9 = "ct"
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.s()     // Catch: java.lang.Exception -> L148
            r3.put(r9, r0)     // Catch: java.lang.Exception -> L148
        L11c:
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Exception -> L148
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L148
            if (r9 != 0) goto L152
            java.lang.String r9 = com.mbridge.msdk.foundation.same.net.g.e.a     // Catch: java.lang.Exception -> L148
            boolean r9 = r3.equals(r9)     // Catch: java.lang.Exception -> L148
            if (r9 != 0) goto L138
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Exception -> L148
            java.lang.String r9 = com.mbridge.msdk.foundation.tools.t.a(r9)     // Catch: java.lang.Exception -> L148
            com.mbridge.msdk.foundation.same.net.g.e.b = r9     // Catch: java.lang.Exception -> L148
        L138:
            java.lang.String r9 = com.mbridge.msdk.foundation.same.net.g.e.b     // Catch: java.lang.Exception -> L148
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L148
            if (r9 != 0) goto L152
            java.lang.String r9 = "dvi"
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.e.b     // Catch: java.lang.Exception -> L148
            r8.a(r9, r0)     // Catch: java.lang.Exception -> L148
            goto L152
        L148:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r9 = "CommonRequestParamsForAdd"
            com.mbridge.msdk.foundation.tools.z.d(r9, r8)
        L152:
            return
    }

    public static void b(com.mbridge.msdk.foundation.same.net.g.d r2) {
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.g
            java.lang.String r1 = "dyview_type"
            r2.a(r1, r0)
            return
    }

    public static void c(com.mbridge.msdk.foundation.same.net.g.d r2) {
            int r0 = com.mbridge.msdk.foundation.tools.v.P()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = com.mbridge.msdk.foundation.tools.v.P()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "tun"
            r2.a(r1, r0)
            return
    }

    public static void d(com.mbridge.msdk.foundation.same.net.g.d r3) {
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto L96
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = com.mbridge.msdk.foundation.tools.v.O()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "withGP"
            r3.a(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            int r2 = com.mbridge.msdk.foundation.tools.v.r(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "has_wx"
            r3.a(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = com.mbridge.msdk.foundation.tools.v.v()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "integrated_wx"
            r3.a(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r2 = com.mbridge.msdk.foundation.tools.v.w()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "opensdk_ver"
            r3.a(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.m()
            int r2 = com.mbridge.msdk.foundation.tools.v.g(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "wx_api_ver"
            r3.a(r1, r0)
        L96:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_other"
            boolean r0 = r0.a(r1)
            if (r0 == 0) goto Lab
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.d
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.v.J()
            r3.a(r0, r1)
        Lab:
            r0 = 0
            a(r3, r0)
            g(r3)
            e(r3)
            h(r3)
            return
    }

    public static void e(com.mbridge.msdk.foundation.same.net.g.d r2) {
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L43
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "b"
            if (r0 == 0) goto L14
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L43
            java.lang.String r0 = r0.b(r1)     // Catch: java.lang.Exception -> L43
            com.mbridge.msdk.foundation.same.a.t = r0     // Catch: java.lang.Exception -> L43
        L14:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L43
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L21
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.t     // Catch: java.lang.Exception -> L43
            r2.a(r1, r0)     // Catch: java.lang.Exception -> L43
        L21:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L43
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "c"
            if (r0 == 0) goto L35
            com.mbridge.msdk.foundation.a.a.a r0 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Exception -> L43
            java.lang.String r0 = r0.b(r1)     // Catch: java.lang.Exception -> L43
            com.mbridge.msdk.foundation.same.a.u = r0     // Catch: java.lang.Exception -> L43
        L35:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L43
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L4d
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.u     // Catch: java.lang.Exception -> L43
            r2.a(r1, r0)     // Catch: java.lang.Exception -> L43
            goto L4d
        L43:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "CommonRequestParamsForAdd"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L4d:
            return
    }

    public static void f(com.mbridge.msdk.foundation.same.net.g.d r2) {
            if (r2 == 0) goto L94
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_general_data"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto L54
            java.lang.String r0 = "model"
            r2.a(r0)
            java.lang.String r0 = "brand"
            r2.a(r0)
            java.lang.String r0 = "screen_size"
            r2.a(r0)
            java.lang.String r0 = "sub_ip"
            r2.a(r0)
            java.lang.String r0 = "network_type"
            r2.a(r0)
            java.lang.String r0 = "useragent"
            r2.a(r0)
            java.lang.String r0 = "ua"
            r2.a(r0)
            java.lang.String r0 = "language"
            r2.a(r0)
            java.lang.String r0 = "network_str"
            r2.a(r0)
            java.lang.String r0 = "mnc"
            r2.a(r0)
            java.lang.String r0 = "mcc"
            r2.a(r0)
            java.lang.String r0 = "os_version"
            r2.a(r0)
            java.lang.String r0 = "gp_version"
            r2.a(r0)
            java.lang.String r0 = "country_code"
            r2.a(r0)
        L54:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_other"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto L79
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.f
            r2.a(r0)
            java.lang.String r0 = com.mbridge.msdk.foundation.same.net.g.d.g
            r2.a(r0)
            java.lang.String r0 = "power_rate"
            r2.a(r0)
            java.lang.String r0 = "charging"
            r2.a(r0)
            java.lang.String r0 = "timezone"
            r2.a(r0)
        L79:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()
            java.lang.String r1 = "authority_device_id"
            boolean r0 = r0.a(r1)
            if (r0 != 0) goto L94
            java.lang.String r0 = "gaid"
            r2.a(r0)
            java.lang.String r0 = "gaid2"
            r2.a(r0)
            java.lang.String r0 = "oaid"
            r2.a(r0)
        L94:
            return
    }

    private static void g(com.mbridge.msdk.foundation.same.net.g.d r2) {
            int r0 = com.mbridge.msdk.foundation.tools.v.M()
            r1 = -1
            if (r0 == r1) goto L1d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ""
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.String r1 = "unknown_source"
            r2.a(r1, r0)
        L1d:
            return
    }

    private static void h(com.mbridge.msdk.foundation.same.net.g.d r2) {
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.N()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L17
            java.lang.String r1 = "android"
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L17
            java.lang.String r1 = "hm_info"
            r2.a(r1, r0)
        L17:
            return
    }
}

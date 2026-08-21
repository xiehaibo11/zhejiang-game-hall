package com.mbridge.msdk.foundation.same.report;

public class e extends com.mbridge.msdk.foundation.same.report.a {
    public static final java.lang.String a = null;







    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.report.e> r0 = com.mbridge.msdk.foundation.same.report.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.report.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(android.content.Context r8) {
            java.lang.String r0 = "authority_general_data"
            com.mbridge.msdk.foundation.same.net.g.d r1 = new com.mbridge.msdk.foundation.same.net.g.d
            r1.<init>()
            java.lang.String r2 = "platform"
            java.lang.String r3 = "1"
            r1.a(r2, r3)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.A(r8)     // Catch: java.lang.Exception -> L372
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L372
            if (r3 != 0) goto L21
            java.lang.String r3 = "package_name"
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Exception -> L372
            r1.a(r3, r2)     // Catch: java.lang.Exception -> L372
        L21:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L372
            boolean r2 = r2.a(r0)     // Catch: java.lang.Exception -> L372
            java.lang.String r3 = ""
            if (r2 == 0) goto Lbe
            java.lang.String r2 = "os_version"
            java.lang.String r4 = android.os.Build.VERSION.RELEASE     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "brand"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.z()     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "model"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.x()     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "gaid"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "mnc"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.e(r8)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "mcc"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.d(r8)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            int r2 = com.mbridge.msdk.foundation.tools.v.D(r8)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = "network_type"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L372
            r5.<init>()     // Catch: java.lang.Exception -> L372
            r5.append(r2)     // Catch: java.lang.Exception -> L372
            r5.append(r3)     // Catch: java.lang.Exception -> L372
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L372
            r1.a(r4, r5)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = "network_str"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.a(r8, r2)     // Catch: java.lang.Exception -> L372
            r1.a(r4, r2)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "language"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.s(r8)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "timezone"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.B()     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "ua"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.A()     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "gp_version"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.j(r8)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
        Lbe:
            java.lang.String r2 = "sdk_version"
            java.lang.String r4 = "MAL_16.3.67"
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "app_version_name"
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.v(r8)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r2 = "orientation"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L372
            r4.<init>()     // Catch: java.lang.Exception -> L372
            int r5 = com.mbridge.msdk.foundation.tools.v.t(r8)     // Catch: java.lang.Exception -> L372
            r4.append(r5)     // Catch: java.lang.Exception -> L372
            r4.append(r3)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L372
            r1.a(r2, r4)     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            boolean r2 = r2.a(r0)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            if (r2 == 0) goto L120
            java.lang.String r2 = "com.google.android.gms.common.GooglePlayServicesUtil"
            java.lang.Class.forName(r2)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            java.lang.String r2 = "gpsv"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            r4.<init>()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            int r5 = com.google.android.gms.common.GooglePlayServicesUtil.GOOGLE_PLAY_SERVICES_VERSION_CODE     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            r4.append(r5)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            r4.append(r3)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            r1.a(r2, r3)     // Catch: java.lang.Throwable -> L114 java.lang.Exception -> L119
            goto L120
        L114:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Exception -> L372
            goto L120
        L119:
            java.lang.String r2 = com.mbridge.msdk.foundation.same.report.e.a     // Catch: java.lang.Exception -> L372
            java.lang.String r3 = "can't find com.google.android.gms.common.GooglePlayServicesUtil class"
            com.mbridge.msdk.foundation.tools.z.d(r2, r3)     // Catch: java.lang.Exception -> L372
        L120:
            java.lang.String r2 = "screen_size"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L372
            r3.<init>()     // Catch: java.lang.Exception -> L372
            int r4 = com.mbridge.msdk.foundation.tools.v.x(r8)     // Catch: java.lang.Exception -> L372
            r3.append(r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r4 = "x"
            r3.append(r4)     // Catch: java.lang.Exception -> L372
            int r4 = com.mbridge.msdk.foundation.tools.v.y(r8)     // Catch: java.lang.Exception -> L372
            r3.append(r4)     // Catch: java.lang.Exception -> L372
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L372
            r1.a(r2, r3)     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.foundation.same.net.g.e.e(r1)     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L372
            java.lang.String r3 = r3.k()     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.c.a r2 = r2.b(r3)     // Catch: java.lang.Exception -> L372
            if (r2 != 0) goto L15e
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.c.a r2 = r2.b()     // Catch: java.lang.Exception -> L372
        L15e:
            if (r2 == 0) goto L37a
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L372
            r3.<init>()     // Catch: java.lang.Exception -> L372
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L36d
            java.lang.String r5 = "authority_imei_mac"
            boolean r4 = r4.a(r5)     // Catch: java.lang.Exception -> L36d
            r5 = 1
            if (r4 == 0) goto L18e
            int r4 = r2.Z()     // Catch: java.lang.Exception -> L36d
            if (r4 != r5) goto L18e
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.b(r8)     // Catch: java.lang.Exception -> L36d
            if (r4 == 0) goto L183
            java.lang.String r6 = "imei"
            r3.put(r6, r4)     // Catch: java.lang.Exception -> L36d
        L183:
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.i(r8)     // Catch: java.lang.Exception -> L36d
            if (r4 == 0) goto L18e
            java.lang.String r6 = "mac"
            r3.put(r6, r4)     // Catch: java.lang.Exception -> L36d
        L18e:
            int r4 = r2.G()     // Catch: java.lang.Exception -> L36d
            if (r4 != r5) goto L1ab
            java.lang.String r4 = com.mbridge.msdk.foundation.tools.v.a(r8)     // Catch: java.lang.Exception -> L36d
            if (r4 == 0) goto L1ab
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r6 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L36d
            java.lang.String r7 = "authority_device_id"
            boolean r6 = r6.a(r7)     // Catch: java.lang.Exception -> L36d
            if (r6 == 0) goto L1ab
            java.lang.String r6 = "oaid"
            r3.put(r6, r4)     // Catch: java.lang.Exception -> L36d
        L1ab:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Exception -> L36d
            java.lang.String r6 = "authority_android_id"
            boolean r4 = r4.a(r6)     // Catch: java.lang.Exception -> L36d
            if (r4 == 0) goto L1c8
            int r2 = r2.aa()     // Catch: java.lang.Exception -> L36d
            if (r2 != r5) goto L1c8
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.g(r8)     // Catch: java.lang.Exception -> L36d
            if (r2 == 0) goto L1c8
            java.lang.String r4 = "android_id"
            r3.put(r4, r2)     // Catch: java.lang.Exception -> L36d
        L1c8:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r0 = r2.a(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r0 == 0) goto L34f
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.H()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L1e1
            java.lang.String r2 = "manufacturer"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L1e1:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.b()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L1f0
            java.lang.String r2 = "cpu2"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L1f0:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.d()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L1ff
            java.lang.String r2 = "tags"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L1ff:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.e()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L20e
            java.lang.String r2 = "user"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L20e:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.f()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L21d
            java.lang.String r2 = "radio"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L21d:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.g()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L22c
            java.lang.String r2 = "bootloader"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L22c:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.h()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L23b
            java.lang.String r2 = "hardware"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L23b:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.i()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L24a
            java.lang.String r2 = "host"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L24a:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.j()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L259
            java.lang.String r2 = "codename"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L259:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.k()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L268
            java.lang.String r2 = "incremental"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L268:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.l()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L277
            java.lang.String r2 = "serial"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L277:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.m()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L286
            java.lang.String r2 = "display"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L286:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.n()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L295
            java.lang.String r2 = "board"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L295:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.o()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L2a4
            java.lang.String r2 = "type"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2a4:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.c()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L2b3
            java.lang.String r2 = "support"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2b3:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.p()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L2c2
            java.lang.String r2 = "release"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2c2:
            int r0 = com.mbridge.msdk.foundation.tools.v.q()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            r2 = -1
            if (r0 == r2) goto L2ce
            java.lang.String r4 = "sdkint"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2ce:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.l(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r4 != 0) goto L2dd
            java.lang.String r4 = "battery"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2dd:
            int r0 = com.mbridge.msdk.foundation.tools.v.k(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r0 == r2) goto L2e8
            java.lang.String r4 = "batterystatus"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2e8:
            int r0 = com.mbridge.msdk.foundation.tools.v.r()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r0 == r2) goto L2f3
            java.lang.String r4 = "baseos"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L2f3:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.E(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r4 != 0) goto L302
            java.lang.String r4 = "is24H"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L302:
            int r0 = com.mbridge.msdk.foundation.tools.v.n(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r0 == r2) goto L30d
            java.lang.String r4 = "sensor"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L30d:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.o(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r4 != 0) goto L31c
            java.lang.String r4 = "ime"
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L31c:
            int r0 = com.mbridge.msdk.foundation.tools.v.m(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r0 == r2) goto L327
            java.lang.String r2 = "phonetype"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L327:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.I()     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r2 != 0) goto L336
            java.lang.String r2 = "totalram"
            r3.put(r2, r0)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
        L336:
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.F(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            if (r0 != 0) goto L34f
            java.lang.String r0 = "totalmemory"
            r3.put(r0, r8)     // Catch: java.lang.Throwable -> L346 java.lang.Exception -> L34b
            goto L34f
        L346:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Exception -> L36d
            goto L34f
        L34b:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Exception -> L36d
        L34f:
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Exception -> L36d
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L36d
            if (r8 != 0) goto L37a
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Exception -> L36d
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.t.a(r8)     // Catch: java.lang.Exception -> L36d
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L36d
            if (r0 != 0) goto L37a
            java.lang.String r0 = "dvi"
            r1.a(r0, r8)     // Catch: java.lang.Exception -> L36d
            goto L37a
        L36d:
            r8 = move-exception
            r8.printStackTrace()     // Catch: java.lang.Exception -> L372
            goto L37a
        L372:
            r8 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L37a
            r8.printStackTrace()
        L37a:
            return r1
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(android.content.Context r3, com.mbridge.msdk.foundation.entity.n r4) {
            com.mbridge.msdk.foundation.same.net.g.d r3 = a(r3)     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = "app_id"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L31
            r1.<init>()     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L31
            r1.append(r2)     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = ""
            r1.append(r2)     // Catch: java.lang.Exception -> L31
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L31
            r3.a(r0, r1)     // Catch: java.lang.Exception -> L31
            java.lang.String r0 = "data"
            java.lang.String r4 = r4.d()     // Catch: java.lang.Exception -> L31
            java.lang.String r4 = java.net.URLEncoder.encode(r4)     // Catch: java.lang.Exception -> L31
            r3.a(r0, r4)     // Catch: java.lang.Exception -> L31
            goto L31
        L30:
            r3 = 0
        L31:
            return r3
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(android.content.Context r2, java.lang.String r3) {
            com.mbridge.msdk.foundation.same.net.g.d r2 = a(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "app_id"
            r2.a(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L38
            java.lang.String r0 = "data"
            java.lang.String r1 = "utf-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r1)     // Catch: java.io.UnsupportedEncodingException -> L34
            r2.a(r0, r3)     // Catch: java.io.UnsupportedEncodingException -> L34
            goto L38
        L34:
            r3 = move-exception
            r3.printStackTrace()
        L38:
            return r2
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(com.mbridge.msdk.foundation.entity.CampaignEx r5, java.util.List<com.mbridge.msdk.rover.e> r6) {
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d
            r0.<init>()
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            if (r5 == 0) goto L26
            java.lang.String r3 = "cid"
            java.lang.String r4 = r5.getId()     // Catch: java.lang.Exception -> L24
            r2.put(r3, r4)     // Catch: java.lang.Exception -> L24
            java.lang.String r3 = "mark"
            java.lang.String r5 = r5.getRoverMark()     // Catch: java.lang.Exception -> L24
            r2.put(r3, r5)     // Catch: java.lang.Exception -> L24
            goto L26
        L24:
            r5 = move-exception
            goto L56
        L26:
            if (r6 == 0) goto L52
            int r5 = r6.size()     // Catch: java.lang.Exception -> L24
            if (r5 < 0) goto L52
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Exception -> L24
            r5.<init>()     // Catch: java.lang.Exception -> L24
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Exception -> L24
        L37:
            boolean r3 = r6.hasNext()     // Catch: java.lang.Exception -> L24
            if (r3 == 0) goto L4d
            java.lang.Object r3 = r6.next()     // Catch: java.lang.Exception -> L24
            com.mbridge.msdk.rover.e r3 = (com.mbridge.msdk.rover.e) r3     // Catch: java.lang.Exception -> L24
            if (r3 == 0) goto L37
            org.json.JSONObject r3 = r3.a()     // Catch: java.lang.Exception -> L24
            r5.put(r3)     // Catch: java.lang.Exception -> L24
            goto L37
        L4d:
            java.lang.String r6 = "urls"
            r2.put(r6, r5)     // Catch: java.lang.Exception -> L24
        L52:
            r1.put(r2)     // Catch: java.lang.Exception -> L24
            goto L59
        L56:
            r5.printStackTrace()
        L59:
            java.lang.String r5 = r1.toString()
            java.lang.String r6 = "data"
            r0.a(r6, r5)
            return r0
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(java.lang.String r2, android.content.Context r3) {
            com.mbridge.msdk.foundation.same.net.g.d r3 = a(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "app_id"
            r3.a(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L38
            java.lang.String r0 = "data"
            java.lang.String r1 = "utf-8"
            java.lang.String r2 = java.net.URLEncoder.encode(r2, r1)     // Catch: java.io.UnsupportedEncodingException -> L34
            r3.a(r0, r2)     // Catch: java.io.UnsupportedEncodingException -> L34
            goto L38
        L34:
            r2 = move-exception
            r2.printStackTrace()
        L38:
            java.lang.String r2 = "m_sdk"
            java.lang.String r0 = "msdk"
            r3.a(r2, r0)
            return r3
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(java.lang.String r3, android.content.Context r4, java.lang.String r5) {
            com.mbridge.msdk.foundation.same.net.g.d r4 = a(r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            r0.append(r1)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "app_id"
            r4.a(r2, r0)
            java.lang.String r0 = "unit_id"
            r4.a(r0, r5)
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.io.UnsupportedEncodingException -> L7d
            if (r0 != 0) goto L71
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.Object r5 = r0.get(r5)     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.io.UnsupportedEncodingException -> L7d
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.io.UnsupportedEncodingException -> L7d
            if (r0 != 0) goto L5d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L7d
            r0.<init>()     // Catch: java.io.UnsupportedEncodingException -> L7d
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r3 = "&"
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r3 = "u_stid"
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r3 = "="
            r0.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L7d
            if (r5 == 0) goto L55
            r1 = r5
        L55:
            r0.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r3 = r0.toString()     // Catch: java.io.UnsupportedEncodingException -> L7d
            goto L71
        L5d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L7d
            r3.<init>()     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r0 = "u_stid="
            r3.append(r0)     // Catch: java.io.UnsupportedEncodingException -> L7d
            if (r5 == 0) goto L6a
            r1 = r5
        L6a:
            r3.append(r1)     // Catch: java.io.UnsupportedEncodingException -> L7d
            java.lang.String r3 = r3.toString()     // Catch: java.io.UnsupportedEncodingException -> L7d
        L71:
            java.lang.String r5 = "data"
            java.lang.String r0 = "utf-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> L7d
            r4.a(r5, r3)     // Catch: java.io.UnsupportedEncodingException -> L7d
            goto L81
        L7d:
            r3 = move-exception
            r3.printStackTrace()
        L81:
            java.lang.String r3 = "m_sdk"
            java.lang.String r5 = "msdk"
            r4.a(r3, r5)
            return r4
    }

    public static com.mbridge.msdk.foundation.same.net.g.d a(java.lang.String r4, java.lang.String r5, android.content.Context r6, java.lang.String r7) {
            if (r6 == 0) goto L6
            android.content.Context r6 = r6.getApplicationContext()
        L6:
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d
            r0.<init>()
            java.lang.String r6 = c(r6, r7)
            java.lang.String r1 = "m_device_info"
            r0.a(r1, r6)
            java.lang.String r6 = "m_action"
            r0.a(r6, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L97
            java.lang.String r6 = "u_stid"
            java.lang.String r1 = ""
            if (r4 != 0) goto L79
            java.lang.String r4 = com.mbridge.msdk.foundation.same.report.e.a     // Catch: java.lang.Throwable -> L97
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L97
            r2.<init>()     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "8.5.0 add channel ,before value : "
            r2.append(r3)     // Catch: java.lang.Throwable -> L97
            r2.append(r5)     // Catch: java.lang.Throwable -> L97
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L97
            com.mbridge.msdk.foundation.tools.z.a(r4, r2)     // Catch: java.lang.Throwable -> L97
            java.lang.String r4 = com.mbridge.msdk.foundation.same.net.Aa.a()     // Catch: java.lang.Throwable -> L97
            if (r4 != 0) goto L40
            r4 = r1
        L40:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L97
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = "channel"
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L97
            java.util.HashMap<java.lang.String, java.lang.String> r4 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L97
            java.lang.Object r4 = r4.get(r7)     // Catch: java.lang.Throwable -> L97
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L97
            boolean r7 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L97
            if (r7 != 0) goto L5e
            if (r4 == 0) goto L5b
            r1 = r4
        L5b:
            r2.put(r6, r1)     // Catch: java.lang.Throwable -> L97
        L5e:
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L97
            java.lang.String r4 = com.mbridge.msdk.foundation.same.report.e.a     // Catch: java.lang.Throwable -> L97
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L97
            r6.<init>()     // Catch: java.lang.Throwable -> L97
            java.lang.String r7 = "8.5.0 add channel ,update value : "
            r6.append(r7)     // Catch: java.lang.Throwable -> L97
            r6.append(r5)     // Catch: java.lang.Throwable -> L97
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L97
            com.mbridge.msdk.foundation.tools.z.a(r4, r6)     // Catch: java.lang.Throwable -> L97
            goto L9b
        L79:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L97
            r4.<init>()     // Catch: java.lang.Throwable -> L97
            java.util.HashMap<java.lang.String, java.lang.String> r2 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L97
            java.lang.Object r7 = r2.get(r7)     // Catch: java.lang.Throwable -> L97
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L97
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L97
            if (r2 != 0) goto L92
            if (r7 == 0) goto L8f
            r1 = r7
        L8f:
            r4.put(r6, r1)     // Catch: java.lang.Throwable -> L97
        L92:
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L97
            goto L9b
        L97:
            r4 = move-exception
            r4.printStackTrace()
        L9b:
            java.lang.String r4 = "m_data"
            r0.a(r4, r5)
            java.lang.String r4 = "m_sdk"
            java.lang.String r5 = "msdk"
            r0.a(r4, r5)
            return r0
    }

    public static java.lang.String a(com.mbridge.msdk.out.Campaign r3, int r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "category"
            java.lang.String r2 = "adtrack"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = "action"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L3b
            java.lang.String r5 = "label"
            r0.put(r5, r4)     // Catch: java.lang.Exception -> L3b
            java.lang.String r4 = "value"
            if (r3 == 0) goto L35
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3b
            r5.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = "id"
            java.lang.String r2 = r3.getId()     // Catch: java.lang.Exception -> L3b
            r5.put(r1, r2)     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = "title"
            java.lang.String r3 = r3.getAppName()     // Catch: java.lang.Exception -> L3b
            r5.put(r1, r3)     // Catch: java.lang.Exception -> L3b
            r0.put(r4, r5)     // Catch: java.lang.Exception -> L3b
            goto L42
        L35:
            java.lang.String r3 = ""
            r0.put(r4, r3)     // Catch: java.lang.Exception -> L3b
            goto L42
        L3b:
            java.lang.String r3 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r4 = "ad track data failed !"
            com.mbridge.msdk.foundation.tools.z.d(r3, r4)
        L42:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.lang.String a(java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key="
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.append(r3)
            if (r4 == 0) goto L5c
            boolean r3 = r4.isEmpty()
            if (r3 != 0) goto L5c
            java.util.Set r3 = r4.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L29:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L5c
            java.lang.Object r4 = r3.next()
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "&"
            r1.append(r2)
            java.lang.Object r2 = r4.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            java.lang.Object r4 = r4.getValue()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.append(r4)
            goto L29
        L5c:
            java.lang.String r3 = "\n"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static void a(int r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "&"
            com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L63
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L63
            android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> L63
            r1.<init>(r2)     // Catch: java.lang.Exception -> L63
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L63
            r2.<init>()     // Catch: java.lang.Exception -> L63
            java.lang.String r3 = "key="
            r2.append(r3)     // Catch: java.lang.Exception -> L63
            java.lang.String r3 = "2000080"
            r2.append(r3)     // Catch: java.lang.Exception -> L63
            r2.append(r0)     // Catch: java.lang.Exception -> L63
            java.lang.String r3 = "reason="
            r2.append(r3)     // Catch: java.lang.Exception -> L63
            r2.append(r6)     // Catch: java.lang.Exception -> L63
            r2.append(r0)     // Catch: java.lang.Exception -> L63
            java.lang.String r6 = "ad_type="
            r2.append(r6)     // Catch: java.lang.Exception -> L63
            r2.append(r4)     // Catch: java.lang.Exception -> L63
            r2.append(r0)     // Catch: java.lang.Exception -> L63
            java.lang.String r4 = "url="
            r2.append(r4)     // Catch: java.lang.Exception -> L63
            java.lang.String r4 = "utf-8"
            java.lang.String r4 = java.net.URLEncoder.encode(r5, r4)     // Catch: java.lang.Exception -> L63
            r2.append(r4)     // Catch: java.lang.Exception -> L63
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Exception -> L63
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L63
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L63
            java.lang.String r6 = ""
            com.mbridge.msdk.foundation.same.net.g.d r4 = a(r4, r5, r6)     // Catch: java.lang.Exception -> L63
            r5 = 0
            com.mbridge.msdk.foundation.same.net.f.d r6 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L63
            java.lang.String r6 = r6.a     // Catch: java.lang.Exception -> L63
            r0 = 0
            r1.post(r5, r6, r4, r0)     // Catch: java.lang.Exception -> L63
            goto L6d
        L63:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L6d:
            return
    }

    public static void a(android.content.Context r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, int r7, int r8) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L137
            r0.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r1 = "key=2000056&"
            r0.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r1 = "&"
            if (r6 == 0) goto L29
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r2.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = r6.getId()     // Catch: java.lang.Throwable -> L137
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            r2.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r2)     // Catch: java.lang.Throwable -> L137
        L29:
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L137
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = r3.k()     // Catch: java.lang.Throwable -> L137
            com.mbridge.msdk.c.a r2 = r2.b(r3)     // Catch: java.lang.Throwable -> L137
            if (r2 != 0) goto L43
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L137
            com.mbridge.msdk.c.a r2 = r2.b()     // Catch: java.lang.Throwable -> L137
        L43:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r3.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = "unit_id="
            r3.append(r4)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.D()     // Catch: java.lang.Throwable -> L137
            r3.append(r2)     // Catch: java.lang.Throwable -> L137
            r3.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r2)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L137
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L137
            if (r3 != 0) goto L7f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r3.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r4 = "gaid="
            r3.append(r4)     // Catch: java.lang.Throwable -> L137
            r3.append(r2)     // Catch: java.lang.Throwable -> L137
            r3.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r2)     // Catch: java.lang.Throwable -> L137
        L7f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r2.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r3 = "action_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L137
            r2.append(r7)     // Catch: java.lang.Throwable -> L137
            r2.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r7)     // Catch: java.lang.Throwable -> L137
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r7.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = "jm_a="
            r7.append(r2)     // Catch: java.lang.Throwable -> L137
            com.mbridge.msdk.d.b r2 = com.mbridge.msdk.d.b.a(r5)     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = r2.c()     // Catch: java.lang.Throwable -> L137
            r7.append(r2)     // Catch: java.lang.Throwable -> L137
            r7.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r7)     // Catch: java.lang.Throwable -> L137
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r7.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = "jm_n="
            r7.append(r2)     // Catch: java.lang.Throwable -> L137
            com.mbridge.msdk.d.b r2 = com.mbridge.msdk.d.b.a(r5)     // Catch: java.lang.Throwable -> L137
            int r2 = r2.a()     // Catch: java.lang.Throwable -> L137
            r7.append(r2)     // Catch: java.lang.Throwable -> L137
            r7.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r7)     // Catch: java.lang.Throwable -> L137
            if (r6 == 0) goto L100
            java.lang.String r7 = "rid="
            r0.append(r7)     // Catch: java.lang.Throwable -> L137
            java.lang.String r7 = r6.getRequestId()     // Catch: java.lang.Throwable -> L137
            r0.append(r7)     // Catch: java.lang.Throwable -> L137
            r0.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r7.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r2 = "rid_n="
            r7.append(r2)     // Catch: java.lang.Throwable -> L137
            java.lang.String r6 = r6.getRequestIdNotice()     // Catch: java.lang.Throwable -> L137
            r7.append(r6)     // Catch: java.lang.Throwable -> L137
            r7.append(r1)     // Catch: java.lang.Throwable -> L137
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r6)     // Catch: java.lang.Throwable -> L137
        L100:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L137
            r6.<init>()     // Catch: java.lang.Throwable -> L137
            java.lang.String r7 = "result_type="
            r6.append(r7)     // Catch: java.lang.Throwable -> L137
            r6.append(r8)     // Catch: java.lang.Throwable -> L137
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L137
            r0.append(r6)     // Catch: java.lang.Throwable -> L137
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L137
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> L137
            if (r6 == 0) goto L12a
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L137
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L137
            r5.a(r6)     // Catch: java.lang.Throwable -> L137
            goto L13b
        L12a:
            com.mbridge.msdk.foundation.same.report.d r6 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L137
            r6.<init>(r5)     // Catch: java.lang.Throwable -> L137
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> L137
            r6.b(r5)     // Catch: java.lang.Throwable -> L137
            goto L13b
        L137:
            r5 = move-exception
            r5.printStackTrace()
        L13b:
            return
    }

    public static void a(android.content.Context r6, com.mbridge.msdk.foundation.entity.CampaignEx r7, int r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            if (r6 == 0) goto L139
            if (r7 == 0) goto L139
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L135
            r1.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = "key=2000114&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r2.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Throwable -> L135
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            r2.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r2.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = "gh_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = r7.getGhId()     // Catch: java.lang.Throwable -> L135
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L135
            java.lang.String r4 = "utf-8"
            java.lang.String r5 = ""
            if (r3 == 0) goto L45
            r3 = r5
            goto L4d
        L45:
            java.lang.String r3 = r7.getGhId()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r4)     // Catch: java.lang.Throwable -> L135
        L4d:
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            r2.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r2.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = "gh_path="
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = r7.getGhPath()     // Catch: java.lang.Throwable -> L135
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L135
            if (r3 == 0) goto L70
            r3 = r5
            goto L78
        L70:
            java.lang.String r3 = r7.getGhPath()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r4)     // Catch: java.lang.Throwable -> L135
        L78:
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            r2.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r2.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            r2.append(r10)     // Catch: java.lang.Throwable -> L135
            r2.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = "rid="
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = r7.getRequestId()     // Catch: java.lang.Throwable -> L135
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            r1.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r2.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = "rid_n="
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = r7.getRequestIdNotice()     // Catch: java.lang.Throwable -> L135
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            r2.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r2)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r2.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r3 = "result="
            r2.append(r3)     // Catch: java.lang.Throwable -> L135
            r2.append(r8)     // Catch: java.lang.Throwable -> L135
            r2.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r8)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r8.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r2 = "reason="
            r8.append(r2)     // Catch: java.lang.Throwable -> L135
            boolean r2 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L135
            if (r2 == 0) goto Lee
            goto Lf2
        Lee:
            java.lang.String r5 = java.net.URLEncoder.encode(r9, r4)     // Catch: java.lang.Throwable -> L135
        Lf2:
            r8.append(r5)     // Catch: java.lang.Throwable -> L135
            r8.append(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r8)     // Catch: java.lang.Throwable -> L135
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L135
            r8.<init>()     // Catch: java.lang.Throwable -> L135
            java.lang.String r9 = "cid="
            r8.append(r9)     // Catch: java.lang.Throwable -> L135
            java.lang.String r7 = r7.getId()     // Catch: java.lang.Throwable -> L135
            r8.append(r7)     // Catch: java.lang.Throwable -> L135
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> L135
            r1.append(r7)     // Catch: java.lang.Throwable -> L135
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L135
            boolean r7 = r7.c()     // Catch: java.lang.Throwable -> L135
            if (r7 == 0) goto L12d
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L135
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L135
            r6.a(r7)     // Catch: java.lang.Throwable -> L135
            goto L139
        L12d:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> L135
            a(r6, r7, r10)     // Catch: java.lang.Throwable -> L135
            goto L139
        L135:
            r6 = move-exception
            r6.printStackTrace()
        L139:
            return
    }

    public static void a(android.content.Context r5, com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "&"
            if (r5 == 0) goto L1e3
            if (r6 == 0) goto L1e3
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L1df
            if (r1 != 0) goto L1e3
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L1df
            r1.<init>()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = "key=2000054&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Throwable -> L1df
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            r2.append(r7)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r3 = r6.getId()     // Catch: java.lang.Throwable -> L1df
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = "reason=&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = "result=2&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L1df
            if (r2 != 0) goto L76
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
        L76:
            java.lang.String r8 = "creative="
            if (r6 == 0) goto La6
            int r2 = r6.getAdType()     // Catch: java.lang.Throwable -> L1df
            r3 = 287(0x11f, float:4.02E-43)
            if (r2 != r3) goto La6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            r2.append(r8)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r6.getendcard_url()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = java.net.URLEncoder.encode(r8)     // Catch: java.lang.Throwable -> L1df
            r2.append(r8)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = "ad_type=3&"
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            goto L16f
        La6:
            java.lang.String r2 = "ad_type=1&"
            if (r6 == 0) goto Ld4
            int r3 = r6.getAdType()     // Catch: java.lang.Throwable -> L1df
            r4 = 94
            if (r3 != r4) goto Ld4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r3.<init>()     // Catch: java.lang.Throwable -> L1df
            r3.append(r8)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r6.getendcard_url()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = java.net.URLEncoder.encode(r8)     // Catch: java.lang.Throwable -> L1df
            r3.append(r8)     // Catch: java.lang.Throwable -> L1df
            r3.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            goto L16f
        Ld4:
            if (r6 == 0) goto Lfd
            int r3 = r6.getAdType()     // Catch: java.lang.Throwable -> L1df
            r4 = 296(0x128, float:4.15E-43)
            if (r3 != r4) goto Lfd
            java.lang.String r2 = "ad_type=5&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            r2.append(r8)     // Catch: java.lang.Throwable -> L1df
            long r3 = r6.getCreativeId()     // Catch: java.lang.Throwable -> L1df
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            goto L16f
        Lfd:
            if (r6 == 0) goto L126
            int r3 = r6.getAdType()     // Catch: java.lang.Throwable -> L1df
            r4 = 297(0x129, float:4.16E-43)
            if (r3 != r4) goto L126
            java.lang.String r2 = "ad_type=6&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            r2.append(r8)     // Catch: java.lang.Throwable -> L1df
            long r3 = r6.getCreativeId()     // Catch: java.lang.Throwable -> L1df
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            goto L16f
        L126:
            if (r6 == 0) goto L14f
            int r3 = r6.getAdType()     // Catch: java.lang.Throwable -> L1df
            r4 = 298(0x12a, float:4.18E-43)
            if (r3 != r4) goto L14f
            java.lang.String r2 = "ad_type=7&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r2.<init>()     // Catch: java.lang.Throwable -> L1df
            r2.append(r8)     // Catch: java.lang.Throwable -> L1df
            long r3 = r6.getCreativeId()     // Catch: java.lang.Throwable -> L1df
            r2.append(r3)     // Catch: java.lang.Throwable -> L1df
            r2.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            goto L16f
        L14f:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r3.<init>()     // Catch: java.lang.Throwable -> L1df
            r3.append(r8)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r6.getendcard_url()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = java.net.URLEncoder.encode(r8)     // Catch: java.lang.Throwable -> L1df
            r3.append(r8)     // Catch: java.lang.Throwable -> L1df
            r3.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r3.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            r1.append(r2)     // Catch: java.lang.Throwable -> L1df
        L16f:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df
            r8.<init>()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = "devid="
            r8.append(r2)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L1df
            r8.append(r2)     // Catch: java.lang.Throwable -> L1df
            r8.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            if (r6 == 0) goto L1c1
            boolean r8 = r6.isBidCampaign()     // Catch: java.lang.Throwable -> L1df
            if (r8 == 0) goto L197
            java.lang.String r8 = "hb=1&"
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
        L197:
            java.lang.String r8 = "rid="
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r6.getRequestId()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            r1.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = "rid_n="
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = r6.getRequestIdNotice()     // Catch: java.lang.Throwable -> L1df
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            r1.append(r0)     // Catch: java.lang.Throwable -> L1df
            java.lang.String r8 = "adspace_t="
            r1.append(r8)     // Catch: java.lang.Throwable -> L1df
            int r6 = r6.getAdSpaceT()     // Catch: java.lang.Throwable -> L1df
            r1.append(r6)     // Catch: java.lang.Throwable -> L1df
        L1c1:
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L1df
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> L1df
            if (r6 == 0) goto L1d7
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L1df
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L1df
            r5.a(r6)     // Catch: java.lang.Throwable -> L1df
            goto L1e3
        L1d7:
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L1df
            a(r5, r6, r7)     // Catch: java.lang.Throwable -> L1df
            goto L1e3
        L1df:
            r5 = move-exception
            r5.printStackTrace()
        L1e3:
            return
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, java.lang.String r7, int r8, int r9) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto Lf7
            if (r5 == 0) goto Lf7
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lf3
            if (r1 != 0) goto Lf7
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lf3
            r1.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = "key=2000074&"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r2.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf3
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r2.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r7)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r2.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = r5.getId()     // Catch: java.lang.Throwable -> Lf3
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r2.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = "type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r8)     // Catch: java.lang.Throwable -> Lf3
            r2.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r8)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r8 = "rid="
            r1.append(r8)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r8 = r5.getRequestId()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r8)     // Catch: java.lang.Throwable -> Lf3
            r1.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r8.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r2 = "rid_n="
            r8.append(r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> Lf3
            r8.append(r5)     // Catch: java.lang.Throwable -> Lf3
            r8.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r5.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r8 = "d_t="
            r5.append(r8)     // Catch: java.lang.Throwable -> Lf3
            r5.append(r9)     // Catch: java.lang.Throwable -> Lf3
            r5.append(r0)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf3
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf3
            r5.<init>()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r8 = "url="
            r5.append(r8)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r8 = "utf-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r8)     // Catch: java.lang.Throwable -> Lf3
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf3
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf3
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lf3
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> Lf3
            if (r5 == 0) goto Leb
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lf3
            r4.a(r5)     // Catch: java.lang.Throwable -> Lf3
            goto Lf7
        Leb:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lf3
            a(r4, r5, r7)     // Catch: java.lang.Throwable -> Lf3
            goto Lf7
        Lf3:
            r4 = move-exception
            r4.printStackTrace()
        Lf7:
            return
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, java.lang.String r7, int r8, int r9, int r10) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L10e
            if (r5 == 0) goto L10e
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L10a
            if (r1 != 0) goto L10e
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L10a
            r1.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = "key=2000075&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L10a
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r7)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "cid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = r5.getId()     // Catch: java.lang.Throwable -> L10a
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r8)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "rid="
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = r5.getRequestId()     // Catch: java.lang.Throwable -> L10a
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            r1.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r8.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = "rid_n="
            r8.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L10a
            r8.append(r5)     // Catch: java.lang.Throwable -> L10a
            r8.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r5.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "statue="
            r5.append(r8)     // Catch: java.lang.Throwable -> L10a
            r5.append(r9)     // Catch: java.lang.Throwable -> L10a
            r5.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r5.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "d_t="
            r5.append(r8)     // Catch: java.lang.Throwable -> L10a
            r5.append(r10)     // Catch: java.lang.Throwable -> L10a
            r5.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r5.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "url="
            r5.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "utf-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r8)     // Catch: java.lang.Throwable -> L10a
            r5.append(r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L10a
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L10a
            if (r5 == 0) goto L102
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L10a
            r4.a(r5)     // Catch: java.lang.Throwable -> L10a
            goto L10e
        L102:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L10a
            a(r4, r5, r7)     // Catch: java.lang.Throwable -> L10a
            goto L10e
        L10a:
            r4 = move-exception
            r4.printStackTrace()
        L10e:
            return
    }

    public static void a(android.content.Context r4, com.mbridge.msdk.foundation.entity.CampaignEx r5, java.lang.String r6, java.lang.String r7, int r8, java.lang.String r9, int r10) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L10e
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L10a
            if (r1 != 0) goto L10e
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L10a
            r1.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = "key=2000073&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L10a
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r7)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r2)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r2.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r3 = "reason="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10a
            r2.append(r9)     // Catch: java.lang.Throwable -> L10a
            r2.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r9 = r2.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r9)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r9.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r2 = "result="
            r9.append(r2)     // Catch: java.lang.Throwable -> L10a
            r9.append(r8)     // Catch: java.lang.Throwable -> L10a
            r9.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            if (r5 == 0) goto Lbb
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r8.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r9 = "cid="
            r8.append(r9)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r9 = r5.getId()     // Catch: java.lang.Throwable -> L10a
            r8.append(r9)     // Catch: java.lang.Throwable -> L10a
            r8.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "rid="
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = r5.getRequestId()     // Catch: java.lang.Throwable -> L10a
            r1.append(r8)     // Catch: java.lang.Throwable -> L10a
            r1.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r8.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r9 = "rid_n="
            r8.append(r9)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.getRequestIdNotice()     // Catch: java.lang.Throwable -> L10a
            r8.append(r5)     // Catch: java.lang.Throwable -> L10a
            r8.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r8.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
        Lbb:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r5.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "d_t="
            r5.append(r8)     // Catch: java.lang.Throwable -> L10a
            r5.append(r10)     // Catch: java.lang.Throwable -> L10a
            r5.append(r0)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10a
            r5.<init>()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "url="
            r5.append(r8)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r8 = "utf-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r8)     // Catch: java.lang.Throwable -> L10a
            r5.append(r6)     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10a
            r1.append(r5)     // Catch: java.lang.Throwable -> L10a
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L10a
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L10a
            if (r5 == 0) goto L102
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L10a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L10a
            r4.a(r5)     // Catch: java.lang.Throwable -> L10a
            goto L10e
        L102:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L10a
            a(r4, r5, r7)     // Catch: java.lang.Throwable -> L10a
            goto L10e
        L10a:
            r4 = move-exception
            r4.printStackTrace()
        L10e:
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9, int r10, java.lang.String r11, java.lang.String r12, com.mbridge.msdk.foundation.entity.CampaignEx r13) {
            if (r13 == 0) goto L13e
            if (r8 == 0) goto L13e
            java.lang.String r0 = r13.getCampaignUnitId()     // Catch: java.lang.Throwable -> L13a
            boolean r1 = r13.isBidCampaign()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r2 = r13.getRequestId()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r13 = r13.getId()     // Catch: java.lang.Throwable -> L13a
            boolean r3 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L13a
            if (r3 != 0) goto L13e
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L13a
            if (r3 != 0) goto L13e
            java.lang.StringBuffer r3 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L13a
            r3.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r4 = "key=2000108&"
            r3.append(r4)     // Catch: java.lang.Throwable -> L13a
            boolean r4 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "&"
            if (r4 != 0) goto L56
            java.util.HashMap<java.lang.String, java.lang.String> r4 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L13a
            java.lang.Object r4 = r4.get(r0)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L13a
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r6.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r7 = "u_stid="
            r6.append(r7)     // Catch: java.lang.Throwable -> L13a
            if (r4 == 0) goto L47
            goto L49
        L47:
            java.lang.String r4 = ""
        L49:
            r6.append(r4)     // Catch: java.lang.Throwable -> L13a
            r6.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r4 = r6.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r4)     // Catch: java.lang.Throwable -> L13a
        L56:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L13a
            if (r4 != 0) goto L73
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r4.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r6 = "rid="
            r4.append(r6)     // Catch: java.lang.Throwable -> L13a
            r4.append(r2)     // Catch: java.lang.Throwable -> L13a
            r4.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r2)     // Catch: java.lang.Throwable -> L13a
        L73:
            boolean r2 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L13a
            if (r2 != 0) goto L90
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r2.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r4 = "cid="
            r2.append(r4)     // Catch: java.lang.Throwable -> L13a
            r2.append(r13)     // Catch: java.lang.Throwable -> L13a
            r2.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r13 = r2.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r13)     // Catch: java.lang.Throwable -> L13a
        L90:
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r13.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r2 = "template_id="
            r13.append(r2)     // Catch: java.lang.Throwable -> L13a
            r13.append(r10)     // Catch: java.lang.Throwable -> L13a
            r13.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r10 = r13.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r10)     // Catch: java.lang.Throwable -> L13a
            boolean r10 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L13a
            if (r10 != 0) goto Lc4
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r10.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r13 = "ad_type="
            r10.append(r13)     // Catch: java.lang.Throwable -> L13a
            r10.append(r9)     // Catch: java.lang.Throwable -> L13a
            r10.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = r10.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r9)     // Catch: java.lang.Throwable -> L13a
        Lc4:
            boolean r9 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L13a
            if (r9 != 0) goto Le1
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r9.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r10 = "process="
            r9.append(r10)     // Catch: java.lang.Throwable -> L13a
            r9.append(r12)     // Catch: java.lang.Throwable -> L13a
            r9.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r9)     // Catch: java.lang.Throwable -> L13a
        Le1:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r9.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r10 = "unit_id="
            r9.append(r10)     // Catch: java.lang.Throwable -> L13a
            r9.append(r0)     // Catch: java.lang.Throwable -> L13a
            r9.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r9)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = "hb="
            r3.append(r9)     // Catch: java.lang.Throwable -> L13a
            if (r1 == 0) goto L101
            r9 = 1
            goto L102
        L101:
            r9 = 0
        L102:
            r3.append(r9)     // Catch: java.lang.Throwable -> L13a
            r3.append(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L13a
            r9.<init>()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r10 = "reason="
            r9.append(r10)     // Catch: java.lang.Throwable -> L13a
            r9.append(r11)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L13a
            r3.append(r9)     // Catch: java.lang.Throwable -> L13a
            com.mbridge.msdk.foundation.same.report.b r9 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L13a
            boolean r9 = r9.c()     // Catch: java.lang.Throwable -> L13a
            if (r9 == 0) goto L132
            com.mbridge.msdk.foundation.same.report.b r8 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Throwable -> L13a
            r8.a(r9)     // Catch: java.lang.Throwable -> L13a
            goto L13e
        L132:
            java.lang.String r9 = r3.toString()     // Catch: java.lang.Throwable -> L13a
            e(r8, r9)     // Catch: java.lang.Throwable -> L13a
            goto L13e
        L13a:
            r8 = move-exception
            r8.printStackTrace()
        L13e:
            return
    }

    private static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6) {
            if (r4 == 0) goto L34
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L34
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L34
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L27
            r0.<init>(r4)     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.net.g.d r6 = a(r5, r4, r6)     // Catch: java.lang.Exception -> L27
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L27
            com.mbridge.msdk.foundation.same.report.e$2 r3 = new com.mbridge.msdk.foundation.same.report.e$2     // Catch: java.lang.Exception -> L27
            r3.<init>(r5, r4)     // Catch: java.lang.Exception -> L27
            r0.post(r1, r2, r6, r3)     // Catch: java.lang.Exception -> L27
            goto L34
        L27:
            r4 = move-exception
            r4.printStackTrace()
            java.lang.String r5 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L34:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, int r7, java.lang.String r8) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto Lb0
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lac
            if (r1 != 0) goto Lb0
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lac
            r1.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "key=2000076&"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lac
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> Lac
            r2.append(r3)     // Catch: java.lang.Throwable -> Lac
            r2.append(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lac
            r1.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lac
            r2.append(r6)     // Catch: java.lang.Throwable -> Lac
            r2.append(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lac
            r1.append(r2)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r2.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r3 = "reason="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lac
            r2.append(r8)     // Catch: java.lang.Throwable -> Lac
            r2.append(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> Lac
            r1.append(r8)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r8.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r2 = "result="
            r8.append(r2)     // Catch: java.lang.Throwable -> Lac
            r8.append(r7)     // Catch: java.lang.Throwable -> Lac
            r8.append(r0)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r7 = r8.toString()     // Catch: java.lang.Throwable -> Lac
            r1.append(r7)     // Catch: java.lang.Throwable -> Lac
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lac
            r7.<init>()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r8 = "url="
            r7.append(r8)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r8 = "utf-8"
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r8)     // Catch: java.lang.Throwable -> Lac
            r7.append(r5)     // Catch: java.lang.Throwable -> Lac
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Throwable -> Lac
            r1.append(r5)     // Catch: java.lang.Throwable -> Lac
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lac
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> Lac
            if (r5 == 0) goto La4
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lac
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lac
            r4.a(r5)     // Catch: java.lang.Throwable -> Lac
            goto Lb0
        La4:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lac
            a(r4, r5, r6)     // Catch: java.lang.Throwable -> Lac
            goto Lb0
        Lac:
            r4 = move-exception
            r4.printStackTrace()
        Lb0:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L91
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L8d
            r1.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r2 = "key=2000089&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r2.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = "appid="
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = r3.k()     // Catch: java.lang.Throwable -> L8d
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            r2.append(r0)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8d
            r1.append(r2)     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r2.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r3 = "s="
            r2.append(r3)     // Catch: java.lang.Throwable -> L8d
            r2.append(r5)     // Catch: java.lang.Throwable -> L8d
            r2.append(r0)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L8d
            r1.append(r5)     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r5.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r2 = "i="
            r5.append(r2)     // Catch: java.lang.Throwable -> L8d
            r5.append(r6)     // Catch: java.lang.Throwable -> L8d
            r5.append(r0)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L8d
            r1.append(r5)     // Catch: java.lang.Throwable -> L8d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8d
            r5.<init>()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r6 = "i_c="
            r5.append(r6)     // Catch: java.lang.Throwable -> L8d
            r5.append(r7)     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L8d
            r1.append(r5)     // Catch: java.lang.Throwable -> L8d
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L8d
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L8d
            if (r5 == 0) goto L85
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L8d
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L8d
            r4.a(r5)     // Catch: java.lang.Throwable -> L8d
            goto L91
        L85:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L8d
            d(r4, r5)     // Catch: java.lang.Throwable -> L8d
            goto L91
        L8d:
            r4 = move-exception
            r4.printStackTrace()
        L91:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, int r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto L113
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L10f
            r1.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r2 = "key=2000087&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r2.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10f
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> L10f
            r2.append(r3)     // Catch: java.lang.Throwable -> L10f
            r2.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r2)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r2.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r3 = "uniquekey="
            r2.append(r3)     // Catch: java.lang.Throwable -> L10f
            r2.append(r5)     // Catch: java.lang.Throwable -> L10f
            r2.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r5.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r2 = "rid="
            r5.append(r2)     // Catch: java.lang.Throwable -> L10f
            r5.append(r6)     // Catch: java.lang.Throwable -> L10f
            r5.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r5.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r6 = "rid_n="
            r5.append(r6)     // Catch: java.lang.Throwable -> L10f
            r5.append(r9)     // Catch: java.lang.Throwable -> L10f
            r5.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r5.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r6 = "cid="
            r5.append(r6)     // Catch: java.lang.Throwable -> L10f
            r5.append(r10)     // Catch: java.lang.Throwable -> L10f
            r5.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r5.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r6 = "unit_id="
            r5.append(r6)     // Catch: java.lang.Throwable -> L10f
            r5.append(r11)     // Catch: java.lang.Throwable -> L10f
            r5.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            boolean r5 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L10f
            if (r5 != 0) goto Lc6
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L10f
            java.lang.Object r5 = r5.get(r11)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r6.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r9 = "u_stid="
            r6.append(r9)     // Catch: java.lang.Throwable -> L10f
            if (r5 == 0) goto Lb7
            goto Lb9
        Lb7:
            java.lang.String r5 = ""
        Lb9:
            r6.append(r5)     // Catch: java.lang.Throwable -> L10f
            r6.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
        Lc6:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r5.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r6 = "packageName="
            r5.append(r6)     // Catch: java.lang.Throwable -> L10f
            r5.append(r7)     // Catch: java.lang.Throwable -> L10f
            r5.append(r0)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r5.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r6 = "result="
            r5.append(r6)     // Catch: java.lang.Throwable -> L10f
            r5.append(r8)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L10f
            r1.append(r5)     // Catch: java.lang.Throwable -> L10f
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L10f
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> L10f
            if (r5 == 0) goto L107
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L10f
            r4.a(r5)     // Catch: java.lang.Throwable -> L10f
            goto L113
        L107:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L10f
            d(r4, r5)     // Catch: java.lang.Throwable -> L10f
            goto L113
        L10f:
            r4 = move-exception
            r4.printStackTrace()
        L113:
            return
    }

    public static void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            if (r4 == 0) goto Lfc
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lf8
            r1.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r2 = "key=2000086&"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r2.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf8
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r4)     // Catch: java.lang.Throwable -> Lf8
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf8
            r2.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r2.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r3 = "uniquekey="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf8
            r2.append(r5)     // Catch: java.lang.Throwable -> Lf8
            r2.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r5.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r2 = "rid="
            r5.append(r2)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r5.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r6 = "rid_n="
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r8)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r5.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r6 = "cid="
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r9)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r5.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r6 = "unit_id="
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r10)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
            boolean r5 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> Lf8
            if (r5 != 0) goto Lc6
            java.util.HashMap<java.lang.String, java.lang.String> r5 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> Lf8
            java.lang.Object r5 = r5.get(r10)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Lf8
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r6.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r8 = "u_stid="
            r6.append(r8)     // Catch: java.lang.Throwable -> Lf8
            if (r5 == 0) goto Lb7
            goto Lb9
        Lb7:
            java.lang.String r5 = ""
        Lb9:
            r6.append(r5)     // Catch: java.lang.Throwable -> Lf8
            r6.append(r0)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r6.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
        Lc6:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            r5.<init>()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r6 = "packageName="
            r5.append(r6)     // Catch: java.lang.Throwable -> Lf8
            r5.append(r7)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r5)     // Catch: java.lang.Throwable -> Lf8
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lf8
            boolean r5 = r5.c()     // Catch: java.lang.Throwable -> Lf8
            if (r5 == 0) goto Lf0
            com.mbridge.msdk.foundation.same.report.b r4 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lf8
            r4.a(r5)     // Catch: java.lang.Throwable -> Lf8
            goto Lfc
        Lf0:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> Lf8
            d(r4, r5)     // Catch: java.lang.Throwable -> Lf8
            goto Lfc
        Lf8:
            r4 = move-exception
            r4.printStackTrace()
        Lfc:
            return
    }

    public static void a(android.content.Context r5, java.lang.String r6, java.lang.String r7, boolean r8) {
            if (r5 == 0) goto Lbc
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lb8
            if (r0 != 0) goto Lbc
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lb8
            if (r0 != 0) goto Lbc
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lb8
            r0.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = "key=2000047&"
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb8
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r2 = "&"
            if (r1 != 0) goto L44
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> Lb8
            java.lang.Object r1 = r1.get(r7)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r3.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r4 = "u_stid="
            r3.append(r4)     // Catch: java.lang.Throwable -> Lb8
            if (r1 == 0) goto L35
            goto L37
        L35:
            java.lang.String r1 = ""
        L37:
            r3.append(r1)     // Catch: java.lang.Throwable -> Lb8
            r3.append(r2)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb8
        L44:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r1.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r3 = "network_type="
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb8
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Throwable -> Lb8
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb8
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r1)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r1.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r3 = "unit_id="
            r1.append(r3)     // Catch: java.lang.Throwable -> Lb8
            r1.append(r7)     // Catch: java.lang.Throwable -> Lb8
            r1.append(r2)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r7)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r7 = "hb="
            r0.append(r7)     // Catch: java.lang.Throwable -> Lb8
            if (r8 == 0) goto L7f
            r7 = 1
            goto L80
        L7f:
            r7 = 0
        L80:
            r0.append(r7)     // Catch: java.lang.Throwable -> Lb8
            r0.append(r2)     // Catch: java.lang.Throwable -> Lb8
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb8
            r7.<init>()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r8 = "reason="
            r7.append(r8)     // Catch: java.lang.Throwable -> Lb8
            r7.append(r6)     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> Lb8
            r0.append(r6)     // Catch: java.lang.Throwable -> Lb8
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lb8
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> Lb8
            if (r6 == 0) goto Lb0
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lb8
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> Lb8
            r5.a(r6)     // Catch: java.lang.Throwable -> Lb8
            goto Lbc
        Lb0:
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> Lb8
            e(r5, r6)     // Catch: java.lang.Throwable -> Lb8
            goto Lbc
        Lb8:
            r5 = move-exception
            r5.printStackTrace()
        Lbc:
            return
    }

    public static void a(android.content.Context r5, java.lang.String r6, java.lang.String r7, boolean r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            if (r5 == 0) goto L130
            boolean r0 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L12c
            if (r0 != 0) goto L130
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12c
            if (r0 != 0) goto L130
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L12c
            r0.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r1 = "key=2000104&"
            r0.append(r1)     // Catch: java.lang.Throwable -> L12c
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r2 = "&"
            if (r1 != 0) goto L44
            java.util.HashMap<java.lang.String, java.lang.String> r1 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Throwable -> L12c
            java.lang.Object r1 = r1.get(r7)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L12c
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r3.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r4 = "u_stid="
            r3.append(r4)     // Catch: java.lang.Throwable -> L12c
            if (r1 == 0) goto L35
            goto L37
        L35:
            java.lang.String r1 = ""
        L37:
            r3.append(r1)     // Catch: java.lang.Throwable -> L12c
            r3.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r1)     // Catch: java.lang.Throwable -> L12c
        L44:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r1.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r3 = "network_type="
            r1.append(r3)     // Catch: java.lang.Throwable -> L12c
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Throwable -> L12c
            r1.append(r3)     // Catch: java.lang.Throwable -> L12c
            r1.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r1)     // Catch: java.lang.Throwable -> L12c
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L12c
            if (r1 != 0) goto L7c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r1.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r3 = "rid="
            r1.append(r3)     // Catch: java.lang.Throwable -> L12c
            r1.append(r9)     // Catch: java.lang.Throwable -> L12c
            r1.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r9)     // Catch: java.lang.Throwable -> L12c
        L7c:
            boolean r9 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L12c
            if (r9 != 0) goto L99
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r9.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r1 = "rid_n="
            r9.append(r1)     // Catch: java.lang.Throwable -> L12c
            r9.append(r10)     // Catch: java.lang.Throwable -> L12c
            r9.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r9)     // Catch: java.lang.Throwable -> L12c
        L99:
            boolean r9 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L12c
            if (r9 != 0) goto Lb6
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r9.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r10 = "cid="
            r9.append(r10)     // Catch: java.lang.Throwable -> L12c
            r9.append(r11)     // Catch: java.lang.Throwable -> L12c
            r9.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r9)     // Catch: java.lang.Throwable -> L12c
        Lb6:
            boolean r9 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L12c
            if (r9 != 0) goto Ld3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r9.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r10 = "template_id="
            r9.append(r10)     // Catch: java.lang.Throwable -> L12c
            r9.append(r12)     // Catch: java.lang.Throwable -> L12c
            r9.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r9)     // Catch: java.lang.Throwable -> L12c
        Ld3:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r9.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r10 = "unit_id="
            r9.append(r10)     // Catch: java.lang.Throwable -> L12c
            r9.append(r7)     // Catch: java.lang.Throwable -> L12c
            r9.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r7 = r9.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r7)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r7 = "hb="
            r0.append(r7)     // Catch: java.lang.Throwable -> L12c
            if (r8 == 0) goto Lf3
            r7 = 1
            goto Lf4
        Lf3:
            r7 = 0
        Lf4:
            r0.append(r7)     // Catch: java.lang.Throwable -> L12c
            r0.append(r2)     // Catch: java.lang.Throwable -> L12c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L12c
            r7.<init>()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r8 = "reason="
            r7.append(r8)     // Catch: java.lang.Throwable -> L12c
            r7.append(r6)     // Catch: java.lang.Throwable -> L12c
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L12c
            r0.append(r6)     // Catch: java.lang.Throwable -> L12c
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L12c
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> L12c
            if (r6 == 0) goto L124
            com.mbridge.msdk.foundation.same.report.b r5 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L12c
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L12c
            r5.a(r6)     // Catch: java.lang.Throwable -> L12c
            goto L130
        L124:
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L12c
            e(r5, r6)     // Catch: java.lang.Throwable -> L12c
            goto L130
        L12c:
            r5 = move-exception
            r5.printStackTrace()
        L130:
            return
    }

    public static void a(android.content.Context r6, java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r7, java.lang.String r8, boolean r9) {
            java.lang.String r0 = "&"
            if (r6 == 0) goto L104
            if (r7 == 0) goto L104
            int r1 = r7.size()     // Catch: java.lang.Throwable -> Lfa
            if (r1 <= 0) goto L104
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lfa
            if (r1 != 0) goto L104
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> Lfa
            r1.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r2 = "key=2000048&"
            r1.append(r2)     // Catch: java.lang.Throwable -> Lfa
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r2.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lfa
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Throwable -> Lfa
            r2.append(r3)     // Catch: java.lang.Throwable -> Lfa
            r2.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lfa
            r1.append(r2)     // Catch: java.lang.Throwable -> Lfa
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r2.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lfa
            r2.append(r8)     // Catch: java.lang.Throwable -> Lfa
            r2.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lfa
            r1.append(r2)     // Catch: java.lang.Throwable -> Lfa
            r2 = 0
            java.lang.Object r3 = r7.get(r2)     // Catch: java.lang.Throwable -> Lfa
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3     // Catch: java.lang.Throwable -> Lfa
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            r4.<init>()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r5 = "cid="
            r4.append(r5)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r5 = r3.getId()     // Catch: java.lang.Throwable -> Lfa
            r4.append(r5)     // Catch: java.lang.Throwable -> Lfa
            r4.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> Lfa
            r1.append(r4)     // Catch: java.lang.Throwable -> Lfa
            r4 = 1
            if (r9 == 0) goto L7e
            java.lang.String r9 = "hb="
            r1.append(r9)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r4)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r0)     // Catch: java.lang.Throwable -> Lfa
        L7e:
            java.lang.String r9 = r3.getRequestId()     // Catch: java.lang.Throwable -> Lfa
            boolean r5 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lfa
            if (r5 != 0) goto L93
            java.lang.String r5 = "rid="
            r1.append(r5)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r9)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r0)     // Catch: java.lang.Throwable -> Lfa
        L93:
            java.lang.String r9 = r3.getRequestIdNotice()     // Catch: java.lang.Throwable -> Lfa
            boolean r3 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Lfa
            if (r3 != 0) goto La8
            java.lang.String r3 = "rid_n="
            r1.append(r3)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r9)     // Catch: java.lang.Throwable -> Lfa
            r1.append(r0)     // Catch: java.lang.Throwable -> Lfa
        La8:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r0 = "rtins_type="
            r9.<init>(r0)     // Catch: java.lang.Throwable -> Lfa
        Laf:
            int r0 = r7.size()     // Catch: java.lang.Throwable -> Lfa
            if (r2 >= r0) goto Ld9
            java.lang.Object r0 = r7.get(r2)     // Catch: java.lang.Throwable -> Lfa
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Throwable -> Lfa
            int r3 = r7.size()     // Catch: java.lang.Throwable -> Lfa
            int r3 = r3 - r4
            if (r2 >= r3) goto Lcf
            int r0 = r0.getRtinsType()     // Catch: java.lang.Throwable -> Lfa
            r9.append(r0)     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r0 = ","
            r9.append(r0)     // Catch: java.lang.Throwable -> Lfa
            goto Ld6
        Lcf:
            int r0 = r0.getRtinsType()     // Catch: java.lang.Throwable -> Lfa
            r9.append(r0)     // Catch: java.lang.Throwable -> Lfa
        Ld6:
            int r2 = r2 + 1
            goto Laf
        Ld9:
            r1.append(r9)     // Catch: java.lang.Throwable -> Lfa
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lfa
            boolean r7 = r7.c()     // Catch: java.lang.Throwable -> Lfa
            if (r7 == 0) goto Lf2
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> Lfa
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Lfa
            r6.a(r7)     // Catch: java.lang.Throwable -> Lfa
            goto L104
        Lf2:
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Lfa
            a(r6, r7, r8)     // Catch: java.lang.Throwable -> Lfa
            goto L104
        Lfa:
            r6 = move-exception
            java.lang.String r7 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)
        L104:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, int r8, int r9, java.lang.String r10) {
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = "&"
            java.lang.String r2 = "="
            com.mbridge.msdk.foundation.same.report.d.a r3 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Le1
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le1
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> Le1
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r4.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = "key"
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = "2000121"
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> Le1
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = "rid"
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = r6.getRequestId()     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> Le1
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = "rid_n"
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = r6.getRequestIdNotice()     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> Le1
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r5 = "cid"
            r4.append(r5)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = r6.getId()     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Exception -> Le1
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = "unit_id"
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Exception -> Le1
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = "type"
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            r4.append(r8)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = "result"
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            r4.append(r9)     // Catch: java.lang.Exception -> Le1
            r4.append(r1)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = "reason"
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            r4.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r6 = java.net.URLEncoder.encode(r10, r0)     // Catch: java.lang.Exception -> Le1
            r4.append(r6)     // Catch: java.lang.Exception -> Le1
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Le1
            boolean r6 = r6.c()     // Catch: java.lang.Exception -> Le1
            if (r6 == 0) goto Lc1
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Le1
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Exception -> Le1
            r6.a(r7)     // Catch: java.lang.Exception -> Le1
            return
        Lc1:
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Exception -> Le1
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Le1
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> Le1
            com.mbridge.msdk.foundation.same.net.g.d r6 = a(r6, r8, r7)     // Catch: java.lang.Exception -> Le1
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Le1
            java.lang.String r8 = r8.a     // Catch: java.lang.Exception -> Le1
            com.mbridge.msdk.foundation.same.report.e$6 r9 = new com.mbridge.msdk.foundation.same.report.e$6     // Catch: java.lang.Exception -> Le1
            r9.<init>()     // Catch: java.lang.Exception -> Le1
            r3.post(r7, r8, r6, r9)     // Catch: java.lang.Exception -> Le1
            goto Le9
        Le1:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto Le9
            r6.printStackTrace()
        Le9:
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, int r8, int r9, java.lang.String r10, int r11, int r12, int r13) {
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = "&"
            java.lang.String r2 = "="
            com.mbridge.msdk.foundation.same.report.d.a r3 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L166
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L166
            android.content.Context r4 = r4.j()     // Catch: java.lang.Exception -> L166
            r3.<init>(r4)     // Catch: java.lang.Exception -> L166
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L166
            r4.<init>()     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "key"
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "2000094"
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "rid"
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = r6.getRequestId()     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "rid_n"
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = r6.getRequestIdNotice()     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "cid"
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = r6.getId()     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "unit_id"
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r5 = "video_prg"
            r4.append(r5)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = "phase"
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            r4.append(r9)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = "feedback_content"
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = java.net.URLEncoder.encode(r10, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = "feedback_close"
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            r4.append(r11)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = "type"
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            r4.append(r13)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = "ad_type"
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            r4.append(r12)     // Catch: java.lang.Exception -> L166
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = "network_type"
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L166
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> L166
            int r8 = com.mbridge.msdk.foundation.tools.v.D(r8)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = java.lang.String.valueOf(r8)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r8)     // Catch: java.lang.Exception -> L166
            r8 = 1
            if (r11 != r8) goto L114
            r4.append(r1)     // Catch: java.lang.Exception -> L166
            java.lang.String r9 = "campaign"
            r4.append(r9)     // Catch: java.lang.Exception -> L166
            r4.append(r2)     // Catch: java.lang.Exception -> L166
            org.json.JSONObject r6 = com.mbridge.msdk.foundation.entity.CampaignEx.campaignToJsonObject(r6)     // Catch: java.lang.Exception -> L166
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L166
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Exception -> L166
            r4.append(r6)     // Catch: java.lang.Exception -> L166
        L114:
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG     // Catch: java.lang.Exception -> L166
            if (r6 == 0) goto L130
            if (r11 != r8) goto L130
            java.lang.String r6 = com.mbridge.msdk.foundation.same.report.e.a     // Catch: java.lang.Exception -> L166
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L166
            r8.<init>()     // Catch: java.lang.Exception -> L166
            java.lang.String r9 = "2000094:"
            r8.append(r9)     // Catch: java.lang.Exception -> L166
            r8.append(r4)     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L166
            com.mbridge.msdk.foundation.tools.z.d(r6, r8)     // Catch: java.lang.Exception -> L166
        L130:
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L166
            boolean r6 = r6.c()     // Catch: java.lang.Exception -> L166
            if (r6 == 0) goto L146
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L166
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Exception -> L166
            r6.a(r7)     // Catch: java.lang.Exception -> L166
            return
        L146:
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Exception -> L166
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L166
            android.content.Context r8 = r8.j()     // Catch: java.lang.Exception -> L166
            com.mbridge.msdk.foundation.same.net.g.d r6 = a(r6, r8, r7)     // Catch: java.lang.Exception -> L166
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L166
            java.lang.String r8 = r8.a     // Catch: java.lang.Exception -> L166
            com.mbridge.msdk.foundation.same.report.e$5 r9 = new com.mbridge.msdk.foundation.same.report.e$5     // Catch: java.lang.Exception -> L166
            r9.<init>()     // Catch: java.lang.Exception -> L166
            r3.post(r7, r8, r6, r9)     // Catch: java.lang.Exception -> L166
            goto L16e
        L166:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto L16e
            r6.printStackTrace()
        L16e:
            return
    }

    public static void a(java.lang.String r4) {
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.<init>(r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key=2000088&state="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = com.mbridge.msdk.foundation.same.report.e.a
            com.mbridge.msdk.foundation.tools.z.d(r1, r4)
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.c.a r1 = r1.b(r2)
            if (r1 == 0) goto L3c
            boolean r1 = a(r1, r4)
            if (r1 != 0) goto L3c
            return
        L3c:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.same.net.g.d r4 = a(r4, r1, r2)
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r2 = r2.a
            r3 = 0
            r0.post(r1, r2, r4, r3)
            return
    }

    public static boolean a() {
            r0 = 0
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L29
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L29
            java.lang.String r2 = "privateAuthorityTimesTamp"
            r3 = 0
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L29
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r1, r2, r3)     // Catch: java.lang.Throwable -> L29
            java.lang.Long r1 = (java.lang.Long) r1     // Catch: java.lang.Throwable -> L29
            long r1 = r1.longValue()     // Catch: java.lang.Throwable -> L29
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L29
            r5 = 86400000(0x5265c00, double:4.2687272E-316)
            long r3 = r3 - r5
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 <= 0) goto L2d
            r0 = 1
            goto L2d
        L29:
            r1 = move-exception
            r1.printStackTrace()
        L2d:
            return r0
    }

    public static void b() {
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L16
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L16
            java.lang.String r3 = "privateAuthorityTimesTamp"
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L16
            com.mbridge.msdk.foundation.tools.ag.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L16
            goto L1a
        L16:
            r0 = move-exception
            r0.printStackTrace()
        L1a:
            return
    }

    public static void b(android.content.Context r7, com.mbridge.msdk.foundation.entity.CampaignEx r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "&"
            if (r7 == 0) goto L21d
            boolean r1 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L219
            r2 = 1
            if (r1 != 0) goto Ld
            r1 = r2
            goto Le
        Ld:
            r1 = 0
        Le:
            boolean r3 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L219
            r2 = r2 ^ r3
            r1 = r1 & r2
            if (r1 == 0) goto L21d
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L219
            r1.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = "key=2000054&"
            r1.append(r2)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r2.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r3 = "network_type="
            r2.append(r3)     // Catch: java.lang.Throwable -> L219
            int r3 = com.mbridge.msdk.foundation.tools.v.D(r7)     // Catch: java.lang.Throwable -> L219
            r2.append(r3)     // Catch: java.lang.Throwable -> L219
            r2.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r2)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r2.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r3 = "unit_id="
            r2.append(r3)     // Catch: java.lang.Throwable -> L219
            r2.append(r9)     // Catch: java.lang.Throwable -> L219
            r2.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r2)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r2.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r3 = "reason="
            r2.append(r3)     // Catch: java.lang.Throwable -> L219
            r2.append(r10)     // Catch: java.lang.Throwable -> L219
            r2.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r2.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = "result=1&"
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = "devid="
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            if (r8 == 0) goto L1fb
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = "cid="
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getId()     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            int r10 = r8.getAdType()     // Catch: java.lang.Throwable -> L219
            r2 = 287(0x11f, float:4.02E-43)
            java.lang.String r3 = "creative="
            if (r10 != r2) goto Ld4
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r3)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getendcard_url()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = "ad_type=3&"
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            goto L1d4
        Ld4:
            int r10 = r8.getAdType()     // Catch: java.lang.Throwable -> L219
            r2 = 94
            java.lang.String r4 = "ad_type=1&"
            if (r10 != r2) goto L100
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r3)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getendcard_url()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            r1.append(r4)     // Catch: java.lang.Throwable -> L219
            goto L1d4
        L100:
            int r10 = r8.getAdType()     // Catch: java.lang.Throwable -> L219
            r2 = 296(0x128, float:4.15E-43)
            if (r10 != r2) goto L128
            java.lang.String r10 = "ad_type=5&"
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r3)     // Catch: java.lang.Throwable -> L219
            long r2 = r8.getCreativeId()     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            goto L1d4
        L128:
            int r10 = r8.getAdType()     // Catch: java.lang.Throwable -> L219
            r2 = 297(0x129, float:4.16E-43)
            java.lang.String r5 = "ad_tpl_url="
            java.lang.String r6 = "ad_html="
            if (r10 != r2) goto L170
            java.lang.String r10 = "ad_type=6&"
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r6)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getAdHtml()     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r5)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getAdZip()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            goto L1d4
        L170:
            int r10 = r8.getAdType()     // Catch: java.lang.Throwable -> L219
            r2 = 298(0x12a, float:4.18E-43)
            if (r10 != r2) goto L1b4
            java.lang.String r10 = "ad_type=7&"
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r6)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getAdHtml()     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r5)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getAdZip()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            goto L1d4
        L1b4:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            r10.append(r3)     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = r8.getendcard_url()     // Catch: java.lang.Throwable -> L219
            java.lang.String r2 = java.net.URLEncoder.encode(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r2)     // Catch: java.lang.Throwable -> L219
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            r1.append(r4)     // Catch: java.lang.Throwable -> L219
        L1d4:
            java.lang.String r10 = "rid="
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            java.lang.String r10 = r8.getRequestId()     // Catch: java.lang.Throwable -> L219
            r1.append(r10)     // Catch: java.lang.Throwable -> L219
            r1.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L219
            r10.<init>()     // Catch: java.lang.Throwable -> L219
            java.lang.String r0 = "rid_n="
            r10.append(r0)     // Catch: java.lang.Throwable -> L219
            java.lang.String r8 = r8.getRequestIdNotice()     // Catch: java.lang.Throwable -> L219
            r10.append(r8)     // Catch: java.lang.Throwable -> L219
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Throwable -> L219
            r1.append(r8)     // Catch: java.lang.Throwable -> L219
        L1fb:
            com.mbridge.msdk.foundation.same.report.b r8 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L219
            boolean r8 = r8.c()     // Catch: java.lang.Throwable -> L219
            if (r8 == 0) goto L211
            com.mbridge.msdk.foundation.same.report.b r7 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L219
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L219
            r7.a(r8)     // Catch: java.lang.Throwable -> L219
            goto L21d
        L211:
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L219
            a(r7, r8, r9)     // Catch: java.lang.Throwable -> L219
            goto L21d
        L219:
            r7 = move-exception
            r7.printStackTrace()
        L21d:
            return
    }

    public static void b(android.content.Context r3, java.lang.String r4) {
            if (r3 == 0) goto L2e
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L21
            r0.<init>(r3)     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.foundation.same.net.g.d r3 = a(r4, r3)     // Catch: java.lang.Exception -> L21
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.foundation.same.report.e$4 r2 = new com.mbridge.msdk.foundation.same.report.e$4     // Catch: java.lang.Exception -> L21
            r2.<init>()     // Catch: java.lang.Exception -> L21
            r0.post(r4, r1, r3, r2)     // Catch: java.lang.Exception -> L21
            goto L2e
        L21:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r4 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L2e:
            return
    }

    private static java.lang.String c(android.content.Context r6, java.lang.String r7) {
            java.lang.String r0 = ""
            if (r6 == 0) goto L2cd
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c9
            r1.<init>()     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "pf"
            java.lang.String r3 = "1"
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "ov"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.C()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "pn"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.A(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "vn"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.v(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "vc"
            int r3 = com.mbridge.msdk.foundation.tools.v.u(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "ot"
            int r3 = com.mbridge.msdk.foundation.tools.v.t(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "dm"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.x()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "bd"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.z()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "gaid"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "mnc"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.e(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "mcc"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.d(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            int r2 = com.mbridge.msdk.foundation.tools.v.D(r6)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r3 = "nt"
            r1.put(r3, r2)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r3 = "nts"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.a(r6, r2)     // Catch: java.lang.Exception -> L2c9
            r1.put(r3, r2)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "l"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.s(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "tz"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.B()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "ua"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.A()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "app_id"
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2c9
            java.lang.String r3 = r3.k()     // Catch: java.lang.Exception -> L2c9
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = "unit_id"
            r1.put(r2, r7)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r7 = "sv"
            java.lang.String r2 = "MAL_16.3.67"
            r1.put(r7, r2)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r7 = "gpv"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.j(r6)     // Catch: java.lang.Exception -> L2c9
            r1.put(r7, r2)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r7 = "ss"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c9
            r2.<init>()     // Catch: java.lang.Exception -> L2c9
            int r3 = com.mbridge.msdk.foundation.tools.v.x(r6)     // Catch: java.lang.Exception -> L2c9
            r2.append(r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r3 = "x"
            r2.append(r3)     // Catch: java.lang.Exception -> L2c9
            int r3 = com.mbridge.msdk.foundation.tools.v.y(r6)     // Catch: java.lang.Exception -> L2c9
            r2.append(r3)     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L2c9
            r1.put(r7, r2)     // Catch: java.lang.Exception -> L2c9
            com.mbridge.msdk.c.b r7 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L2c9
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2c9
            java.lang.String r2 = r2.k()     // Catch: java.lang.Exception -> L2c9
            com.mbridge.msdk.c.a r7 = r7.b(r2)     // Catch: java.lang.Exception -> L2c9
            if (r7 == 0) goto L2c4
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2c9
            r2.<init>()     // Catch: java.lang.Exception -> L2c9
            int r3 = r7.Z()     // Catch: java.lang.Exception -> L2c0
            r4 = 1
            if (r3 != r4) goto L10e
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.b(r6)     // Catch: java.lang.Exception -> L2c0
            if (r3 == 0) goto L103
            java.lang.String r5 = "imei"
            r2.put(r5, r3)     // Catch: java.lang.Exception -> L2c0
        L103:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.i(r6)     // Catch: java.lang.Exception -> L2c0
            if (r3 == 0) goto L10e
            java.lang.String r5 = "mac"
            r2.put(r5, r3)     // Catch: java.lang.Exception -> L2c0
        L10e:
            int r7 = r7.aa()     // Catch: java.lang.Exception -> L2c0
            if (r7 != r4) goto L11f
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.g(r6)     // Catch: java.lang.Exception -> L2c0
            if (r7 == 0) goto L11f
            java.lang.String r3 = "android_id"
            r2.put(r3, r7)     // Catch: java.lang.Exception -> L2c0
        L11f:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.H()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L12e
            java.lang.String r3 = "manufacturer"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L12e:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.b()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L13d
            java.lang.String r3 = "cpu2"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L13d:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.d()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L14c
            java.lang.String r3 = "tags"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L14c:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.e()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L15b
            java.lang.String r3 = "user"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L15b:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.f()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L16a
            java.lang.String r3 = "radio"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L16a:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.g()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L179
            java.lang.String r3 = "bootloader"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L179:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.h()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L188
            java.lang.String r3 = "hardware"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L188:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.i()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L197
            java.lang.String r3 = "host"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L197:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.j()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L1a6
            java.lang.String r3 = "codename"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L1a6:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.k()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L1b5
            java.lang.String r3 = "incremental"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L1b5:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.l()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L1c4
            java.lang.String r3 = "serial"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L1c4:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.m()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L1d3
            java.lang.String r3 = "display"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L1d3:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.n()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L1e2
            java.lang.String r3 = "board"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L1e2:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.o()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L1f1
            java.lang.String r3 = "type"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L1f1:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.c()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L200
            java.lang.String r3 = "support"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L200:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.p()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L20f
            java.lang.String r3 = "release"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L20f:
            int r7 = com.mbridge.msdk.foundation.tools.v.q()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            r3 = -1
            if (r7 == r3) goto L21b
            java.lang.String r4 = "sdkint"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L21b:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.l(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r4 != 0) goto L22a
            java.lang.String r4 = "battery"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L22a:
            int r7 = com.mbridge.msdk.foundation.tools.v.k(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r7 == r3) goto L235
            java.lang.String r4 = "batterystatus"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L235:
            int r7 = com.mbridge.msdk.foundation.tools.v.r()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r7 == r3) goto L240
            java.lang.String r4 = "baseos"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L240:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.E(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r4 != 0) goto L24f
            java.lang.String r4 = "is24H"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L24f:
            int r7 = com.mbridge.msdk.foundation.tools.v.n(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r7 == r3) goto L25a
            java.lang.String r4 = "sensor"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L25a:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.o(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r4 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r4 != 0) goto L269
            java.lang.String r4 = "ime"
            r2.put(r4, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L269:
            int r7 = com.mbridge.msdk.foundation.tools.v.m(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r7 == r3) goto L274
            java.lang.String r3 = "phonetype"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L274:
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.I()     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r3 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r3 != 0) goto L283
            java.lang.String r3 = "totalram"
            r2.put(r3, r7)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
        L283:
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.v.F(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            if (r7 != 0) goto L29c
            java.lang.String r7 = "totalmemory"
            r2.put(r7, r6)     // Catch: java.lang.Throwable -> L293 java.lang.Exception -> L298
            goto L29c
        L293:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L2c0
            goto L29c
        L298:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L2c0
        L29c:
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Exception -> L2c0
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L2c0
            if (r6 != 0) goto L2c4
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Exception -> L2c0
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.t.a(r6)     // Catch: java.lang.Exception -> L2c0
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L2c0
            if (r7 != 0) goto L2c4
            java.lang.String r7 = "utf-8"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r7)     // Catch: java.lang.Exception -> L2c0
            java.lang.String r7 = "dvi"
            r1.put(r7, r6)     // Catch: java.lang.Exception -> L2c0
            goto L2c4
        L2c0:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Exception -> L2c9
        L2c4:
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> L2c9
            goto L2cd
        L2c9:
            r6 = move-exception
            r6.printStackTrace()
        L2cd:
            return r0
    }

    private static void d(android.content.Context r3, java.lang.String r4) {
            if (r3 == 0) goto L30
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L30
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L23
            r0.<init>(r3)     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = ""
            com.mbridge.msdk.foundation.same.net.g.d r3 = a(r4, r3, r1)     // Catch: java.lang.Exception -> L23
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L23
            java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L23
            com.mbridge.msdk.foundation.same.report.e$1 r2 = new com.mbridge.msdk.foundation.same.report.e$1     // Catch: java.lang.Exception -> L23
            r2.<init>()     // Catch: java.lang.Exception -> L23
            r0.post(r4, r1, r3, r2)     // Catch: java.lang.Exception -> L23
            goto L30
        L23:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r4 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L30:
            return
    }

    private static void e(android.content.Context r3, java.lang.String r4) {
            if (r3 == 0) goto L2e
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L2e
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L21
            r0.<init>(r3)     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.foundation.same.net.g.d r3 = a(r4, r3)     // Catch: java.lang.Exception -> L21
            r4 = 0
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L21
            java.lang.String r1 = r1.a     // Catch: java.lang.Exception -> L21
            com.mbridge.msdk.foundation.same.report.e$3 r2 = new com.mbridge.msdk.foundation.same.report.e$3     // Catch: java.lang.Exception -> L21
            r2.<init>()     // Catch: java.lang.Exception -> L21
            r0.post(r4, r1, r3, r2)     // Catch: java.lang.Exception -> L21
            goto L2e
        L21:
            r3 = move-exception
            r3.printStackTrace()
            java.lang.String r4 = com.mbridge.msdk.foundation.same.report.e.a
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)
        L2e:
            return
    }
}

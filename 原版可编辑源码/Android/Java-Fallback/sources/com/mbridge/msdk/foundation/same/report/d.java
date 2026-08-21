package com.mbridge.msdk.foundation.same.report;

public class d {
    public static final java.lang.String a = null;
    private android.content.Context b;
    private int c;
















    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.report.d> r0 = com.mbridge.msdk.foundation.same.report.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.report.d.a = r0
            return
    }

    public d(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            return
    }

    public d(android.content.Context r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.b = r2
            r1.c = r3
            return
    }

    static android.content.Context a(com.mbridge.msdk.foundation.same.report.d r0) {
            android.content.Context r0 = r0.b
            return r0
    }

    private java.lang.String b() {
            r9 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.String r1 = "?"
            r0.<init>(r1)
            java.lang.String r1 = "platform="
            r0.append(r1)
            java.lang.String r1 = "1"
            java.lang.String r1 = java.net.URLEncoder.encode(r1)
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            java.lang.String r2 = "os_version="
            r0.append(r2)
            java.lang.String r2 = android.os.Build.VERSION.RELEASE
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "package_name="
            r0.append(r2)
            android.content.Context r2 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.A(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "app_version_name="
            r0.append(r2)
            android.content.Context r2 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.v(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "app_version_code="
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r3 = r9.b
            int r3 = com.mbridge.msdk.foundation.tools.v.u(r3)
            r2.append(r3)
            java.lang.String r3 = ""
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "screen_size="
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r4 = r9.b
            int r4 = com.mbridge.msdk.foundation.tools.v.x(r4)
            r2.append(r4)
            java.lang.String r4 = "x"
            r2.append(r4)
            android.content.Context r4 = r9.b
            int r4 = com.mbridge.msdk.foundation.tools.v.y(r4)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "orientation="
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.content.Context r4 = r9.b
            int r4 = com.mbridge.msdk.foundation.tools.v.t(r4)
            r2.append(r4)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "gaid="
            r0.append(r2)
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.E()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.z()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            java.lang.String r4 = "brand="
            r0.append(r4)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "mnc="
            r0.append(r2)
            android.content.Context r2 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.e(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "mcc="
            r0.append(r2)
            android.content.Context r2 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.d(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            android.content.Context r2 = r9.b
            int r2 = com.mbridge.msdk.foundation.tools.v.D(r2)
            java.lang.String r4 = "network_type="
            r0.append(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r2)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r4 = java.net.URLEncoder.encode(r4)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = "network_str"
            r0.append(r4)
            android.content.Context r4 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.a(r4, r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "language="
            r0.append(r2)
            android.content.Context r2 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.s(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "timezone="
            r0.append(r2)
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.B()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.A()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            java.lang.String r4 = "useragent="
            r0.append(r4)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "sdk_version="
            r0.append(r2)
            java.lang.String r2 = "MAL_16.3.67"
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            android.content.Context r2 = r9.b
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.j(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            java.lang.String r4 = "gp_version="
            r0.append(r4)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "sign="
            r0.append(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            r2.append(r4)
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.l()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r2)
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "app_id="
            r0.append(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.k()
            com.mbridge.msdk.c.a r2 = r2.b(r4)
            java.lang.String r4 = "dvi="
            if (r2 == 0) goto L29b
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            int r6 = r2.Z()     // Catch: java.lang.Exception -> L296
            r7 = 1
            if (r6 != r7) goto L247
            android.content.Context r6 = r9.b     // Catch: java.lang.Exception -> L296
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.v.b(r6)     // Catch: java.lang.Exception -> L296
            if (r6 == 0) goto L234
            java.lang.String r6 = "imei"
            android.content.Context r8 = r9.b     // Catch: java.lang.Exception -> L296
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.b(r8)     // Catch: java.lang.Exception -> L296
            r5.put(r6, r8)     // Catch: java.lang.Exception -> L296
        L234:
            android.content.Context r6 = r9.b     // Catch: java.lang.Exception -> L296
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.v.i(r6)     // Catch: java.lang.Exception -> L296
            if (r6 == 0) goto L247
            java.lang.String r6 = "mac"
            android.content.Context r8 = r9.b     // Catch: java.lang.Exception -> L296
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.i(r8)     // Catch: java.lang.Exception -> L296
            r5.put(r6, r8)     // Catch: java.lang.Exception -> L296
        L247:
            int r2 = r2.aa()     // Catch: java.lang.Exception -> L296
            if (r2 != r7) goto L260
            android.content.Context r2 = r9.b     // Catch: java.lang.Exception -> L296
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.g(r2)     // Catch: java.lang.Exception -> L296
            if (r2 == 0) goto L260
            java.lang.String r2 = "android_id"
            android.content.Context r6 = r9.b     // Catch: java.lang.Exception -> L296
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.v.g(r6)     // Catch: java.lang.Exception -> L296
            r5.put(r2, r6)     // Catch: java.lang.Exception -> L296
        L260:
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> L296
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L296
            if (r2 != 0) goto L28c
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> L296
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.t.a(r2)     // Catch: java.lang.Exception -> L296
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L296
            if (r5 != 0) goto L282
            r0.append(r4)     // Catch: java.lang.Exception -> L296
            r0.append(r2)     // Catch: java.lang.Exception -> L296
            r0.append(r1)     // Catch: java.lang.Exception -> L296
            goto L2a4
        L282:
            r0.append(r4)     // Catch: java.lang.Exception -> L296
            r0.append(r3)     // Catch: java.lang.Exception -> L296
            r0.append(r1)     // Catch: java.lang.Exception -> L296
            goto L2a4
        L28c:
            r0.append(r4)     // Catch: java.lang.Exception -> L296
            r0.append(r3)     // Catch: java.lang.Exception -> L296
            r0.append(r1)     // Catch: java.lang.Exception -> L296
            goto L2a4
        L296:
            r1 = move-exception
            r1.printStackTrace()
            goto L2a4
        L29b:
            r0.append(r4)
            r0.append(r3)
            r0.append(r1)
        L2a4:
            java.lang.String r1 = "unit_id="
            r0.append(r1)
            r1 = 0
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private void c(java.lang.String r5) {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Throwable -> L1f
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L1f
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1f
            android.content.Context r1 = r4.b     // Catch: java.lang.Throwable -> L1f
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.same.net.g.d r5 = com.mbridge.msdk.foundation.same.report.e.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L1f
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L1f
            java.lang.String r2 = r2.a     // Catch: java.lang.Throwable -> L1f
            com.mbridge.msdk.foundation.same.report.d$15 r3 = new com.mbridge.msdk.foundation.same.report.d$15     // Catch: java.lang.Throwable -> L1f
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L1f
            r0.post(r1, r2, r5, r3)     // Catch: java.lang.Throwable -> L1f
            goto L23
        L1f:
            r5 = move-exception
            r5.printStackTrace()
        L23:
            return
    }

    public final void a() {
            r9 = this;
            java.lang.String r0 = "="
            java.lang.String r1 = "&"
            boolean r2 = com.mbridge.msdk.foundation.same.report.e.a()     // Catch: java.lang.Throwable -> L112
            if (r2 != 0) goto Lb
            return
        Lb:
            com.mbridge.msdk.foundation.same.report.d.a r2 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Throwable -> L112
            android.content.Context r3 = r9.b     // Catch: java.lang.Throwable -> L112
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r3.k()     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.c.a r4 = r4.b(r3)     // Catch: java.lang.Throwable -> L112
            if (r4 != 0) goto L2c
            com.mbridge.msdk.c.b r4 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.c.a r4 = r4.b()     // Catch: java.lang.Throwable -> L112
        L2c:
            int r5 = r4.J()     // Catch: java.lang.Throwable -> L112
            int r6 = r4.I()     // Catch: java.lang.Throwable -> L112
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            r7.<init>()     // Catch: java.lang.Throwable -> L112
            java.lang.String r8 = "key=2000053&Appid="
            r7.append(r8)     // Catch: java.lang.Throwable -> L112
            r7.append(r3)     // Catch: java.lang.Throwable -> L112
            r7.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = "uptips2"
            r7.append(r3)     // Catch: java.lang.Throwable -> L112
            r7.append(r0)     // Catch: java.lang.Throwable -> L112
            r7.append(r6)     // Catch: java.lang.Throwable -> L112
            r7.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = "info_status"
            r7.append(r3)     // Catch: java.lang.Throwable -> L112
            r7.append(r0)     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r3 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r3.d()     // Catch: java.lang.Throwable -> L112
            r7.append(r3)     // Catch: java.lang.Throwable -> L112
            r7.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = "iseu"
            r7.append(r3)     // Catch: java.lang.Throwable -> L112
            r7.append(r0)     // Catch: java.lang.Throwable -> L112
            r7.append(r5)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> L112
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.E()     // Catch: java.lang.Throwable -> L112
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L112
            if (r6 != 0) goto L9b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            r6.<init>()     // Catch: java.lang.Throwable -> L112
            r6.append(r3)     // Catch: java.lang.Throwable -> L112
            r6.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = "gaid"
            r6.append(r3)     // Catch: java.lang.Throwable -> L112
            r6.append(r0)     // Catch: java.lang.Throwable -> L112
            r6.append(r5)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r6.toString()     // Catch: java.lang.Throwable -> L112
        L9b:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            r5.<init>()     // Catch: java.lang.Throwable -> L112
            r5.append(r3)     // Catch: java.lang.Throwable -> L112
            r5.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = "GDPR_area"
            r5.append(r3)     // Catch: java.lang.Throwable -> L112
            r5.append(r0)     // Catch: java.lang.Throwable -> L112
            boolean r3 = r4.aT()     // Catch: java.lang.Throwable -> L112
            r5.append(r3)     // Catch: java.lang.Throwable -> L112
            r5.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r1 = "GDPR_consent"
            r5.append(r1)     // Catch: java.lang.Throwable -> L112
            r5.append(r0)     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: java.lang.Throwable -> L112
            int r0 = r0.g()     // Catch: java.lang.Throwable -> L112
            r5.append(r0)     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = r5.toString()     // Catch: java.lang.Throwable -> L112
            java.lang.String r1 = com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Throwable -> L112
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            r3.<init>()     // Catch: java.lang.Throwable -> L112
            java.lang.String r4 = "reportPrivateAuthorityStatus  data:"
            r3.append(r4)     // Catch: java.lang.Throwable -> L112
            r3.append(r0)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.tools.z.a(r1, r3)     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L112
            boolean r1 = r1.c()     // Catch: java.lang.Throwable -> L112
            if (r1 == 0) goto Lf7
            com.mbridge.msdk.foundation.same.report.b r1 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L112
            r1.a(r0)     // Catch: java.lang.Throwable -> L112
            return
        Lf7:
            android.content.Context r1 = r9.b     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = ""
            com.mbridge.msdk.foundation.same.net.g.d r0 = com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r3)     // Catch: java.lang.Throwable -> L112
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.same.report.d$7 r4 = new com.mbridge.msdk.foundation.same.report.d$7     // Catch: java.lang.Throwable -> L112
            r4.<init>(r9)     // Catch: java.lang.Throwable -> L112
            r2.post(r1, r3, r0, r4)     // Catch: java.lang.Throwable -> L112
            com.mbridge.msdk.foundation.same.report.e.b()     // Catch: java.lang.Throwable -> L112
            goto L119
        L112:
            java.lang.String r0 = com.mbridge.msdk.foundation.same.report.d.a
            java.lang.String r1 = "PrivateAuthorityStatus onFailed"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L119:
            return
    }

    public final void a(int r6, int r7, java.lang.String r8, java.lang.String r9) {
            r5 = this;
            java.lang.String r0 = "&"
            java.lang.String r1 = "="
            com.mbridge.msdk.foundation.same.report.d.a r2 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Throwable -> L8e
            android.content.Context r3 = r5.b     // Catch: java.lang.Throwable -> L8e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8e
            r3.<init>()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r4 = "key"
            r3.append(r4)     // Catch: java.lang.Throwable -> L8e
            r3.append(r1)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r4 = "2000112"
            r3.append(r4)     // Catch: java.lang.Throwable -> L8e
            r3.append(r0)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r4 = "st_net"
            r3.append(r4)     // Catch: java.lang.Throwable -> L8e
            r3.append(r1)     // Catch: java.lang.Throwable -> L8e
            r3.append(r7)     // Catch: java.lang.Throwable -> L8e
            r3.append(r0)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r7 = "result"
            r3.append(r7)     // Catch: java.lang.Throwable -> L8e
            r3.append(r1)     // Catch: java.lang.Throwable -> L8e
            r3.append(r6)     // Catch: java.lang.Throwable -> L8e
            r3.append(r0)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r6 = "url"
            r3.append(r6)     // Catch: java.lang.Throwable -> L8e
            r3.append(r1)     // Catch: java.lang.Throwable -> L8e
            r3.append(r9)     // Catch: java.lang.Throwable -> L8e
            r3.append(r0)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r6 = "reason"
            r3.append(r6)     // Catch: java.lang.Throwable -> L8e
            r3.append(r1)     // Catch: java.lang.Throwable -> L8e
            boolean r6 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L8e
            java.lang.String r7 = ""
            if (r6 == 0) goto L5b
            r8 = r7
        L5b:
            r3.append(r8)     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L8e
            boolean r6 = r6.c()     // Catch: java.lang.Throwable -> L8e
            if (r6 == 0) goto L74
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> L8e
            r6.a(r7)     // Catch: java.lang.Throwable -> L8e
            return
        L74:
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L8e
            android.content.Context r8 = r5.b     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r6, r8, r7)     // Catch: java.lang.Throwable -> L8e
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L8e
            java.lang.String r8 = r8.a     // Catch: java.lang.Throwable -> L8e
            com.mbridge.msdk.foundation.same.report.d$6 r9 = new com.mbridge.msdk.foundation.same.report.d$6     // Catch: java.lang.Throwable -> L8e
            r9.<init>(r5)     // Catch: java.lang.Throwable -> L8e
            r2.post(r7, r8, r6, r9)     // Catch: java.lang.Throwable -> L8e
            goto L95
        L8e:
            java.lang.String r6 = com.mbridge.msdk.foundation.same.report.d.a
            java.lang.String r7 = "reportSettingLoadFailed onFailed"
            com.mbridge.msdk.foundation.tools.z.d(r6, r7)
        L95:
            return
    }

    public final void a(int r9, int r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r8 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "&"
            java.lang.String r2 = "utf-8"
            java.lang.String r3 = "="
            com.mbridge.msdk.foundation.same.report.d.a r4 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L2ba
            android.content.Context r5 = r8.b     // Catch: java.lang.Exception -> L2ba
            r4.<init>(r5)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r5.<init>()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = "key"
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = "2000058"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = "appid"
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = "dl_service"
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r6.<init>()     // Catch: java.lang.Exception -> L2ba
            int r7 = com.mbridge.msdk.foundation.tools.aj.c     // Catch: java.lang.Exception -> L2ba
            r6.append(r7)     // Catch: java.lang.Exception -> L2ba
            r6.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = "dl_service_rs"
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r6.<init>()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.aj.d     // Catch: java.lang.Exception -> L2ba
            r6.append(r7)     // Catch: java.lang.Exception -> L2ba
            r6.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r6 = "dl_type"
            r5.append(r6)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r6.<init>()     // Catch: java.lang.Exception -> L2ba
            r6.append(r9)     // Catch: java.lang.Exception -> L2ba
            r6.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r6.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_link_type"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "rid"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r11, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "rid_n"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r12, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "cid"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r13, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_v4"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            int r10 = com.mbridge.msdk.foundation.tools.aj.i     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_v4_rs"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.aj.j     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_pkg"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            int r10 = com.mbridge.msdk.foundation.tools.aj.a     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_pkg_rs"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.aj.b     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_i_p"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            int r10 = com.mbridge.msdk.foundation.tools.aj.e     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_i_p_rs"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.aj.g     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_fp"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            int r10 = com.mbridge.msdk.foundation.tools.aj.f     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "dl_fp_rs"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.aj.h     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "tgt_v"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            android.content.Context r10 = r8.b     // Catch: java.lang.Exception -> L2ba
            int r10 = com.mbridge.msdk.foundation.tools.v.w(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "app_v_n"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            android.content.Context r10 = r8.b     // Catch: java.lang.Exception -> L2ba
            java.lang.String r10 = com.mbridge.msdk.foundation.tools.v.v(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r1)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = "app_v_c"
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            r5.append(r3)     // Catch: java.lang.Exception -> L2ba
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2ba
            r9.<init>()     // Catch: java.lang.Exception -> L2ba
            android.content.Context r10 = r8.b     // Catch: java.lang.Exception -> L2ba
            int r10 = com.mbridge.msdk.foundation.tools.v.u(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r10)     // Catch: java.lang.Exception -> L2ba
            r9.append(r0)     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L2ba
            r5.append(r9)     // Catch: java.lang.Exception -> L2ba
            com.mbridge.msdk.foundation.same.report.b r9 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L2ba
            boolean r9 = r9.c()     // Catch: java.lang.Exception -> L2ba
            if (r9 == 0) goto L2a0
            com.mbridge.msdk.foundation.same.report.b r9 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r10 = r5.toString()     // Catch: java.lang.Exception -> L2ba
            r9.a(r10)     // Catch: java.lang.Exception -> L2ba
            return
        L2a0:
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Exception -> L2ba
            android.content.Context r10 = r8.b     // Catch: java.lang.Exception -> L2ba
            com.mbridge.msdk.foundation.same.net.g.d r9 = com.mbridge.msdk.foundation.same.report.e.a(r9, r10, r0)     // Catch: java.lang.Exception -> L2ba
            r10 = 0
            com.mbridge.msdk.foundation.same.net.f.d r11 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L2ba
            java.lang.String r11 = r11.a     // Catch: java.lang.Exception -> L2ba
            com.mbridge.msdk.foundation.same.report.d$8 r12 = new com.mbridge.msdk.foundation.same.report.d$8     // Catch: java.lang.Exception -> L2ba
            r12.<init>(r8)     // Catch: java.lang.Exception -> L2ba
            r4.post(r10, r11, r9, r12)     // Catch: java.lang.Exception -> L2ba
            goto L2c2
        L2ba:
            r9 = move-exception
            boolean r10 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r10 == 0) goto L2c2
            r9.printStackTrace()
        L2c2:
            return
    }

    public final void a(int r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r1 = r3.b
            r0.<init>(r1)
            r1 = 0
            java.lang.String r2 = "request"
            java.lang.String r4 = com.mbridge.msdk.foundation.same.report.e.a(r1, r4, r2)
            android.content.Context r1 = r3.b
            java.lang.String r2 = "event"
            com.mbridge.msdk.foundation.same.net.g.d r4 = com.mbridge.msdk.foundation.same.report.e.a(r2, r4, r1, r5)
            com.mbridge.msdk.foundation.same.net.f.d r5 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r5 = r5.a
            com.mbridge.msdk.foundation.same.report.d$1 r1 = new com.mbridge.msdk.foundation.same.report.d$1
            r1.<init>(r3)
            r2 = 0
            r0.post(r2, r5, r4, r1)
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r4, java.util.List<com.mbridge.msdk.rover.e> r5, com.mbridge.msdk.rover.f r6) {
            r3 = this;
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r1 = r3.b
            r0.<init>(r1)
            java.lang.String r1 = r3.b()
            com.mbridge.msdk.foundation.same.net.g.d r4 = com.mbridge.msdk.foundation.same.report.e.a(r4, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r2 = r2.B
            r5.append(r2)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            r1 = 1
            r0.post(r1, r5, r4, r6)
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.n r5) {
            r4 = this;
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r1 = r4.b
            r0.<init>(r1)
            android.content.Context r1 = r4.b
            com.mbridge.msdk.foundation.same.net.g.d r1 = com.mbridge.msdk.foundation.same.report.e.a(r1, r5)
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r2 = r2.a
            com.mbridge.msdk.foundation.same.report.d$14 r3 = new com.mbridge.msdk.foundation.same.report.d$14
            r3.<init>(r4, r5)
            r5 = 0
            r0.post(r5, r2, r1, r3)
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.n r6, java.lang.Boolean r7) {
            r5 = this;
            if (r6 == 0) goto L7c
            java.lang.String r0 = r6.c()
            java.lang.String r1 = "GET"
            boolean r0 = r0.equals(r1)
            r1 = 0
            if (r0 == 0) goto L24
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r2 = r5.b
            r0.<init>(r2)
            java.lang.String r2 = r6.b()
            r3 = 0
            com.mbridge.msdk.foundation.same.report.d$12 r4 = new com.mbridge.msdk.foundation.same.report.d$12
            r4.<init>(r5, r6, r7)
            r0.get(r1, r2, r3, r4)
            goto L7c
        L24:
            java.lang.String r0 = r6.c()
            java.lang.String r2 = "POST"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L7c
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r2 = r5.b
            r0.<init>(r2)
            java.lang.String r2 = r6.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L42
            return
        L42:
            java.lang.String r2 = r6.d()
            android.content.Context r3 = r5.b
            java.lang.String r4 = r6.a()
            com.mbridge.msdk.foundation.same.net.g.d r2 = com.mbridge.msdk.foundation.same.report.e.a(r2, r3, r4)
            int r3 = r6.f()
            if (r3 <= 0) goto L70
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            int r4 = r6.f()
            r3.append(r4)
            java.lang.String r4 = ""
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "retry"
            r2.a(r4, r3)
        L70:
            java.lang.String r3 = r6.b()
            com.mbridge.msdk.foundation.same.report.d$13 r4 = new com.mbridge.msdk.foundation.same.report.d$13
            r4.<init>(r5, r6, r7)
            r0.post(r1, r3, r2, r4)
        L7c:
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.c(r1)
            return
    }

    public final void a(java.lang.String r3, com.mbridge.msdk.foundation.entity.e r4, java.lang.String r5) {
            r2 = this;
            com.mbridge.msdk.foundation.same.report.d.a r3 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r0 = r2.b
            r3.<init>(r0)
            java.lang.String r4 = com.mbridge.msdk.foundation.entity.e.a(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L12
            return
        L12:
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L24
            com.mbridge.msdk.foundation.same.report.b r3 = com.mbridge.msdk.foundation.same.report.b.a()
            r3.a(r4)
            return
        L24:
            android.content.Context r0 = r2.b
            com.mbridge.msdk.foundation.same.net.g.d r4 = com.mbridge.msdk.foundation.same.report.e.a(r4, r0, r5)
            r5 = 0
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.a
            com.mbridge.msdk.foundation.same.report.d$5 r1 = new com.mbridge.msdk.foundation.same.report.d$5
            r1.<init>(r2)
            r3.post(r5, r0, r4, r1)
            return
    }

    public final void a(java.lang.String r4, java.io.File r5) {
            r3 = this;
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r1 = r3.b
            r0.<init>(r1)
            android.content.Context r1 = r3.b
            com.mbridge.msdk.foundation.same.net.g.d r4 = com.mbridge.msdk.foundation.same.report.e.a(r1, r4)
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r1 = r1.a
            com.mbridge.msdk.foundation.same.report.d$3 r2 = new com.mbridge.msdk.foundation.same.report.d$3
            r2.<init>(r3, r5)
            r5 = 0
            r0.post(r5, r1, r4, r2)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, com.mbridge.msdk.out.Frame r6) {
            r2 = this;
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a
            android.content.Context r1 = r2.b
            r0.<init>(r1)
            android.content.Context r1 = r2.b
            com.mbridge.msdk.foundation.same.net.g.d r4 = com.mbridge.msdk.foundation.same.report.e.a(r4, r1, r5)
            if (r6 == 0) goto L21
            java.lang.String r5 = r6.getSessionId()
            java.lang.String r1 = "session_id"
            r4.a(r1, r5)
            java.lang.String r5 = r6.getParentSessionId()
            java.lang.String r6 = "parent_session_id"
            r4.a(r6, r5)
        L21:
            r5 = 0
            com.mbridge.msdk.foundation.same.net.f.d r6 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r6 = r6.a
            com.mbridge.msdk.foundation.same.report.d$4 r1 = new com.mbridge.msdk.foundation.same.report.d$4
            r1.<init>(r2, r3)
            r0.post(r5, r6, r4, r1)
            return
    }

    public final void a(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            java.lang.String r0 = "="
            java.lang.String r1 = "&"
            java.lang.String r2 = "utf-8"
            com.mbridge.msdk.foundation.same.report.d.a r3 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L94
            android.content.Context r4 = r6.b     // Catch: java.lang.Exception -> L94
            r3.<init>(r4)     // Catch: java.lang.Exception -> L94
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r4.<init>()     // Catch: java.lang.Exception -> L94
            java.lang.String r5 = "click_type="
            r4.append(r5)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = java.net.URLEncoder.encode(r7, r2)     // Catch: java.lang.Exception -> L94
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = "cid"
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = java.net.URLEncoder.encode(r8, r2)     // Catch: java.lang.Exception -> L94
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = "unit_id"
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Exception -> L94
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = "key"
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = "2000027"
            java.lang.String r7 = java.net.URLEncoder.encode(r7, r2)     // Catch: java.lang.Exception -> L94
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = "http_url"
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            r4.append(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = java.net.URLEncoder.encode(r10, r2)     // Catch: java.lang.Exception -> L94
            r4.append(r7)     // Catch: java.lang.Exception -> L94
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.foundation.same.report.b r8 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L94
            boolean r8 = r8.c()     // Catch: java.lang.Exception -> L94
            if (r8 == 0) goto L7e
            com.mbridge.msdk.foundation.same.report.b r8 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L94
            r8.a(r7)     // Catch: java.lang.Exception -> L94
            return
        L7e:
            android.content.Context r8 = r6.b     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.foundation.same.net.g.d r7 = com.mbridge.msdk.foundation.same.report.e.a(r7, r8, r9)     // Catch: java.lang.Exception -> L94
            r8 = 0
            com.mbridge.msdk.foundation.same.net.f.d r9 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L94
            java.lang.String r9 = r9.a     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.foundation.same.report.d$2 r10 = new com.mbridge.msdk.foundation.same.report.d$2     // Catch: java.lang.Exception -> L94
            r10.<init>(r6)     // Catch: java.lang.Exception -> L94
            r3.post(r8, r9, r7, r10)     // Catch: java.lang.Exception -> L94
            goto L9b
        L94:
            java.lang.String r7 = com.mbridge.msdk.foundation.same.report.d.a
            java.lang.String r8 = "ssl  error report failed"
            com.mbridge.msdk.foundation.tools.z.d(r7, r8)
        L9b:
            return
    }

    public final void a(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            java.lang.String r0 = "&"
            java.lang.String r1 = "utf-8"
            java.lang.String r2 = "="
            com.mbridge.msdk.foundation.same.report.d.a r3 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Lea
            android.content.Context r4 = r7.b     // Catch: java.lang.Exception -> Lea
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lea
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
            r4.<init>()     // Catch: java.lang.Exception -> Lea
            android.content.Context r5 = r7.b     // Catch: java.lang.Exception -> Lea
            int r5 = com.mbridge.msdk.foundation.tools.v.D(r5)     // Catch: java.lang.Exception -> Lea
            java.lang.String r6 = "key"
            r4.append(r6)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r6 = "2000071"
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r6)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r6 = "rid"
            r4.append(r6)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "rid_n"
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = java.net.URLEncoder.encode(r9, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "cid"
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = java.net.URLEncoder.encode(r10, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "unit_id"
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = java.net.URLEncoder.encode(r11, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "reason"
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = java.net.URLEncoder.encode(r12, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "network_type"
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
            r8.<init>()     // Catch: java.lang.Exception -> Lea
            r8.append(r5)     // Catch: java.lang.Exception -> Lea
            java.lang.String r9 = ""
            r8.append(r9)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "result"
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            r4.append(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "0"
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r1)     // Catch: java.lang.Exception -> Lea
            r4.append(r8)     // Catch: java.lang.Exception -> Lea
            com.mbridge.msdk.foundation.same.report.b r8 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lea
            boolean r8 = r8.c()     // Catch: java.lang.Exception -> Lea
            if (r8 == 0) goto Ld0
            com.mbridge.msdk.foundation.same.report.b r8 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lea
            java.lang.String r9 = r4.toString()     // Catch: java.lang.Exception -> Lea
            r8.a(r9)     // Catch: java.lang.Exception -> Lea
            return
        Ld0:
            java.lang.String r8 = r4.toString()     // Catch: java.lang.Exception -> Lea
            android.content.Context r9 = r7.b     // Catch: java.lang.Exception -> Lea
            com.mbridge.msdk.foundation.same.net.g.d r8 = com.mbridge.msdk.foundation.same.report.e.a(r8, r9, r11)     // Catch: java.lang.Exception -> Lea
            r9 = 0
            com.mbridge.msdk.foundation.same.net.f.d r10 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Lea
            java.lang.String r10 = r10.a     // Catch: java.lang.Exception -> Lea
            com.mbridge.msdk.foundation.same.report.d$11 r11 = new com.mbridge.msdk.foundation.same.report.d$11     // Catch: java.lang.Exception -> Lea
            r11.<init>(r7)     // Catch: java.lang.Exception -> Lea
            r3.post(r9, r10, r8, r11)     // Catch: java.lang.Exception -> Lea
            goto Lf2
        Lea:
            r8 = move-exception
            boolean r9 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r9 == 0) goto Lf2
            r8.printStackTrace()
        Lf2:
            return
    }

    public final void a(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, boolean r11) {
            r5 = this;
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = "="
            boolean r2 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Exception -> Lbd
            if (r2 != 0) goto Lc5
            com.mbridge.msdk.foundation.same.report.d.a r2 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Lbd
            android.content.Context r3 = r5.b     // Catch: java.lang.Exception -> Lbd
            r2.<init>(r3)     // Catch: java.lang.Exception -> Lbd
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbd
            r3.<init>()     // Catch: java.lang.Exception -> Lbd
            java.lang.String r4 = "&"
            if (r11 == 0) goto L26
            java.lang.String r11 = "hb="
            r3.append(r11)     // Catch: java.lang.Exception -> Lbd
            r11 = 1
            r3.append(r11)     // Catch: java.lang.Exception -> Lbd
            r3.append(r4)     // Catch: java.lang.Exception -> Lbd
        L26:
            java.lang.String r11 = "key"
            r3.append(r11)     // Catch: java.lang.Exception -> Lbd
            r3.append(r1)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r11 = "2000066"
            java.lang.String r11 = java.net.URLEncoder.encode(r11, r0)     // Catch: java.lang.Exception -> Lbd
            r3.append(r11)     // Catch: java.lang.Exception -> Lbd
            r3.append(r4)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r11 = "rid"
            r3.append(r11)     // Catch: java.lang.Exception -> Lbd
            r3.append(r1)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Exception -> Lbd
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r4)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = "rid_n"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r1)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Exception -> Lbd
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r4)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = "cid"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r1)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = java.net.URLEncoder.encode(r8, r0)     // Catch: java.lang.Exception -> Lbd
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r4)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = "unit_id"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r1)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = java.net.URLEncoder.encode(r9, r0)     // Catch: java.lang.Exception -> Lbd
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r4)     // Catch: java.lang.Exception -> Lbd
            java.lang.String r6 = "err_method"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbd
            r3.append(r1)     // Catch: java.lang.Exception -> Lbd
            r3.append(r10)     // Catch: java.lang.Exception -> Lbd
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lbd
            boolean r6 = r6.c()     // Catch: java.lang.Exception -> Lbd
            if (r6 == 0) goto La3
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lbd
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> Lbd
            r6.a(r7)     // Catch: java.lang.Exception -> Lbd
            return
        La3:
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> Lbd
            android.content.Context r7 = r5.b     // Catch: java.lang.Exception -> Lbd
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r6, r7, r9)     // Catch: java.lang.Exception -> Lbd
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Lbd
            java.lang.String r8 = r8.a     // Catch: java.lang.Exception -> Lbd
            com.mbridge.msdk.foundation.same.report.d$9 r9 = new com.mbridge.msdk.foundation.same.report.d$9     // Catch: java.lang.Exception -> Lbd
            r9.<init>(r5)     // Catch: java.lang.Exception -> Lbd
            r2.post(r7, r8, r6, r9)     // Catch: java.lang.Exception -> Lbd
            goto Lc5
        Lbd:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto Lc5
            r6.printStackTrace()
        Lc5:
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.c(r1)
            return
    }

    public final void b(java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10, boolean r11) {
            r5 = this;
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = "="
            com.mbridge.msdk.foundation.same.report.d.a r2 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Lbb
            android.content.Context r3 = r5.b     // Catch: java.lang.Exception -> Lbb
            r2.<init>(r3)     // Catch: java.lang.Exception -> Lbb
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lbb
            r3.<init>()     // Catch: java.lang.Exception -> Lbb
            java.lang.String r4 = "&"
            if (r11 == 0) goto L20
            java.lang.String r11 = "hb="
            r3.append(r11)     // Catch: java.lang.Exception -> Lbb
            r11 = 1
            r3.append(r11)     // Catch: java.lang.Exception -> Lbb
            r3.append(r4)     // Catch: java.lang.Exception -> Lbb
        L20:
            java.lang.String r11 = "key"
            r3.append(r11)     // Catch: java.lang.Exception -> Lbb
            r3.append(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r11 = "2000065"
            java.lang.String r11 = java.net.URLEncoder.encode(r11, r0)     // Catch: java.lang.Exception -> Lbb
            r3.append(r11)     // Catch: java.lang.Exception -> Lbb
            r3.append(r4)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r11 = "rid"
            r3.append(r11)     // Catch: java.lang.Exception -> Lbb
            r3.append(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.lang.Exception -> Lbb
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r4)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = "rid_n"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.lang.Exception -> Lbb
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r4)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = "cid"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = java.net.URLEncoder.encode(r8, r0)     // Catch: java.lang.Exception -> Lbb
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r4)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = "unit_id"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = java.net.URLEncoder.encode(r9, r0)     // Catch: java.lang.Exception -> Lbb
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r4)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = "click_url"
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            r3.append(r1)     // Catch: java.lang.Exception -> Lbb
            java.lang.String r6 = java.net.URLEncoder.encode(r10, r0)     // Catch: java.lang.Exception -> Lbb
            r3.append(r6)     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lbb
            boolean r6 = r6.c()     // Catch: java.lang.Exception -> Lbb
            if (r6 == 0) goto La1
            com.mbridge.msdk.foundation.same.report.b r6 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> Lbb
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Exception -> Lbb
            r6.a(r7)     // Catch: java.lang.Exception -> Lbb
            return
        La1:
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Exception -> Lbb
            android.content.Context r7 = r5.b     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.foundation.same.net.g.d r6 = com.mbridge.msdk.foundation.same.report.e.a(r6, r7, r9)     // Catch: java.lang.Exception -> Lbb
            r7 = 0
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Lbb
            java.lang.String r8 = r8.a     // Catch: java.lang.Exception -> Lbb
            com.mbridge.msdk.foundation.same.report.d$10 r9 = new com.mbridge.msdk.foundation.same.report.d$10     // Catch: java.lang.Exception -> Lbb
            r9.<init>(r5)     // Catch: java.lang.Exception -> Lbb
            r2.post(r7, r8, r6, r9)     // Catch: java.lang.Exception -> Lbb
            goto Lc3
        Lbb:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto Lc3
            r6.printStackTrace()
        Lc3:
            return
    }
}

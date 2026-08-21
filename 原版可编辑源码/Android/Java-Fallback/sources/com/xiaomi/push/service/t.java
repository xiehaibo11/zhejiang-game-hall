package com.xiaomi.push.service;

public class t {
    public final int a;
    public final java.lang.String a;
    public final java.lang.String b;
    public final java.lang.String c;
    public final java.lang.String d;
    public final java.lang.String e;
    public final java.lang.String f;

    public t(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, int r7) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.e = r5
            r0.f = r6
            r0.a = r7
            return
    }

    private static java.lang.String a(android.content.Context r1) {
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r1 = r0.equals(r1)
            r0 = 0
            if (r1 == 0) goto L22
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L26
            java.lang.String r1 = "ro.miui.region"
            java.lang.String r0 = com.xiaomi.push.m.a(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L26
            java.lang.String r1 = "ro.product.locale.region"
            java.lang.String r0 = com.xiaomi.push.m.a(r1)
            goto L26
        L22:
            java.lang.String r0 = com.xiaomi.push.m.b()
        L26:
            return r0
    }

    public static boolean a() {
            java.lang.String r0 = "miui.os.Build"
            r1 = 0
            java.lang.Class r0 = com.xiaomi.push.v.a(r1, r0)     // Catch: java.lang.Exception -> L12
            java.lang.String r2 = "IS_ALPHA_BUILD"
            java.lang.reflect.Field r0 = r0.getField(r2)     // Catch: java.lang.Exception -> L12
            boolean r0 = r0.getBoolean(r1)     // Catch: java.lang.Exception -> L12
            return r0
        L12:
            r0 = 0
            return r0
    }

    public static boolean a(android.content.Context r1) {
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L14
            boolean r1 = a()
            if (r1 == 0) goto L14
            r1 = 1
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    private static boolean b(android.content.Context r1) {
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r0 = "com.xiaomi.xmsf"
            boolean r1 = r1.equals(r0)
            return r1
    }

    public com.xiaomi.push.service.bg.b a(com.xiaomi.push.service.XMPushService r4) {
            r3 = this;
            com.xiaomi.push.service.bg$b r0 = new com.xiaomi.push.service.bg$b
            r0.<init>(r4)
            com.xiaomi.push.service.j r1 = r4.b()
            java.lang.String r2 = "c"
            r3.a(r0, r4, r1, r2)
            return r0
    }

    public com.xiaomi.push.service.bg.b a(com.xiaomi.push.service.bg.b r5, android.content.Context r6, com.xiaomi.push.service.j r7, java.lang.String r8) {
            r4 = this;
            java.lang.String r0 = r6.getPackageName()
            r5.a = r0
            java.lang.String r0 = r4.a
            r5.b = r0
            java.lang.String r0 = r4.c
            r5.h = r0
            java.lang.String r0 = r4.b
            r5.c = r0
            java.lang.String r0 = "5"
            r5.g = r0
            java.lang.String r0 = "XMPUSH-PASS"
            r5.d = r0
            r0 = 0
            r5.a = r0
            com.xiaomi.push.w$a r0 = new com.xiaomi.push.w$a
            r0.<init>()
            r1 = 48
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "sdk_ver"
            com.xiaomi.push.w$a r1 = r0.a(r2, r1)
            java.lang.String r2 = "cpvn"
            java.lang.String r3 = "4_9_0"
            com.xiaomi.push.w$a r1 = r1.a(r2, r3)
            r2 = 40090(0x9c9a, float:5.6178E-41)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "cpvc"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            com.xiaomi.push.service.a r2 = com.xiaomi.push.service.a.a(r6)
            java.lang.String r2 = r2.b()
            java.lang.String r3 = "country_code"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            com.xiaomi.push.service.a r2 = com.xiaomi.push.service.a.a(r6)
            java.lang.String r2 = r2.a()
            java.lang.String r3 = "region"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            java.lang.String r2 = com.xiaomi.push.m.c()
            java.lang.String r3 = "miui_vn"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            int r2 = com.xiaomi.push.m.a(r6)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "miui_vc"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            java.lang.String r2 = "com.xiaomi.xmsf"
            int r2 = com.xiaomi.push.h.a(r6, r2)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "xmsf_vc"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "android_ver"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            boolean r2 = com.xiaomi.push.service.ax.a(r6)
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r3 = "n_belong_to_app"
            com.xiaomi.push.w$a r1 = r1.a(r3, r2)
            int r2 = com.xiaomi.push.h.a(r6)
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "systemui_vc"
            r1.a(r3, r2)
            java.lang.String r1 = a(r6)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lbd
            java.lang.String r2 = "latest_country_code"
            r0.a(r2, r1)
        Lbd:
            java.lang.String r1 = com.xiaomi.push.m.d()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lcc
            java.lang.String r2 = "device_ch"
            r0.a(r2, r1)
        Lcc:
            java.lang.String r1 = com.xiaomi.push.m.e()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Ldb
            java.lang.String r2 = "device_mfr"
            r0.a(r2, r1)
        Ldb:
            java.lang.String r0 = r0.toString()
            r5.e = r0
            boolean r0 = b(r6)
            if (r0 == 0) goto Lea
            java.lang.String r0 = "1000271"
            goto Lec
        Lea:
            java.lang.String r0 = r4.d
        Lec:
            com.xiaomi.push.w$a r1 = new com.xiaomi.push.w$a
            r1.<init>()
            java.lang.String r2 = "appid"
            com.xiaomi.push.w$a r0 = r1.a(r2, r0)
            java.util.Locale r2 = java.util.Locale.getDefault()
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "locale"
            com.xiaomi.push.w$a r0 = r0.a(r3, r2)
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "sync"
            r0.a(r3, r2)
            boolean r6 = a(r6)
            if (r6 == 0) goto L11a
            java.lang.String r6 = "ab"
            r1.a(r6, r8)
        L11a:
            java.lang.String r6 = r1.toString()
            r5.f = r6
            r5.a = r7
            return r5
    }
}

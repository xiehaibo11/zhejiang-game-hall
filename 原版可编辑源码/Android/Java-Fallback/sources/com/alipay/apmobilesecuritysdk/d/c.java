package com.alipay.apmobilesecuritysdk.d;

public final class c {
    public static java.util.Map<java.lang.String, java.lang.String> a(android.content.Context r11) {
            com.alipay.apmobilesecuritysdk.face.APSecuritySdk r0 = com.alipay.apmobilesecuritysdk.face.APSecuritySdk.getInstance(r11)
            com.alipay.sdk.m.a0.b r0 = com.alipay.sdk.m.a0.b.a(r0)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.alipay.apmobilesecuritysdk.e.f r2 = com.alipay.apmobilesecuritysdk.e.e.a(r11)
            java.lang.String r3 = r0.a(r11)
            java.lang.String r4 = r0.d(r11)
            if (r2 == 0) goto L2f
            boolean r5 = com.alipay.sdk.m.z.a.a(r3)
            if (r5 == 0) goto L25
            java.lang.String r3 = r2.b()
        L25:
            boolean r5 = com.alipay.sdk.m.z.a.a(r4)
            if (r5 == 0) goto L2f
            java.lang.String r4 = r2.e()
        L2f:
            com.alipay.apmobilesecuritysdk.e.f r2 = new com.alipay.apmobilesecuritysdk.e.f
            java.lang.String r6 = ""
            java.lang.String r8 = ""
            java.lang.String r9 = ""
            r5 = r2
            r7 = r3
            r10 = r4
            r5.<init>(r6, r7, r8, r9, r10)
            if (r11 == 0) goto L88
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L84
            r5.<init>()     // Catch: java.lang.Exception -> L84
            java.lang.String r6 = "imei"
            java.lang.String r7 = r2.a()     // Catch: java.lang.Exception -> L84
            r5.put(r6, r7)     // Catch: java.lang.Exception -> L84
            java.lang.String r6 = "imsi"
            java.lang.String r7 = r2.b()     // Catch: java.lang.Exception -> L84
            r5.put(r6, r7)     // Catch: java.lang.Exception -> L84
            java.lang.String r6 = "mac"
            java.lang.String r7 = r2.c()     // Catch: java.lang.Exception -> L84
            r5.put(r6, r7)     // Catch: java.lang.Exception -> L84
            java.lang.String r6 = "bluetoothmac"
            java.lang.String r7 = r2.d()     // Catch: java.lang.Exception -> L84
            r5.put(r6, r7)     // Catch: java.lang.Exception -> L84
            java.lang.String r6 = "gsi"
            java.lang.String r2 = r2.e()     // Catch: java.lang.Exception -> L84
            r5.put(r6, r2)     // Catch: java.lang.Exception -> L84
            java.lang.String r2 = r5.toString()     // Catch: java.lang.Exception -> L84
            java.lang.String r5 = "device_feature_file_name"
            java.lang.String r6 = "device_feature_file_key"
            com.alipay.apmobilesecuritysdk.f.a.a(r5, r6, r2)     // Catch: java.lang.Exception -> L84
            java.lang.String r5 = "device_feature_prefs_name"
            java.lang.String r6 = "device_feature_prefs_key"
            com.alipay.apmobilesecuritysdk.f.a.a(r11, r5, r6, r2)     // Catch: java.lang.Exception -> L84
            goto L88
        L84:
            r2 = move-exception
            com.alipay.apmobilesecuritysdk.c.a.a(r2)
        L88:
            java.lang.String r2 = ""
            java.lang.String r5 = "AD1"
            r1.put(r5, r2)
            java.lang.String r5 = "AD2"
            r1.put(r5, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.h(r11)
            java.lang.String r5 = "AD3"
            r1.put(r5, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.j(r11)
            java.lang.String r5 = "AD5"
            r1.put(r5, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.k(r11)
            java.lang.String r5 = "AD6"
            r1.put(r5, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.l(r11)
            java.lang.String r5 = "AD7"
            r1.put(r5, r3)
            java.lang.String r3 = r0.c(r11)
            java.lang.String r5 = "AD9"
            r1.put(r5, r3)
            java.lang.String r3 = "AD10"
            r1.put(r3, r4)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.d()
            java.lang.String r4 = "AD11"
            r1.put(r4, r3)
            java.lang.String r3 = r0.a()
            java.lang.String r4 = "AD12"
            r1.put(r4, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.e()
            java.lang.String r4 = "AD13"
            r1.put(r4, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.g()
            java.lang.String r4 = "AD14"
            r1.put(r4, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.h()
            java.lang.String r4 = "AD15"
            r1.put(r4, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.i()
            java.lang.String r4 = "AD16"
            r1.put(r4, r3)
            java.lang.String r3 = "AD17"
            r1.put(r3, r2)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.m(r11)
            java.lang.String r4 = "AD19"
            r1.put(r4, r3)
            java.lang.String r3 = com.alipay.sdk.m.a0.b.j()
            java.lang.String r4 = "AD20"
            r1.put(r4, r3)
            java.lang.String r3 = "AD22"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.n(r11)
            java.lang.String r3 = "AD23"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.i(r11)
            java.lang.String r2 = com.alipay.sdk.m.z.a.g(r2)
            java.lang.String r3 = "AD24"
            r1.put(r3, r2)
            java.lang.String r2 = r0.b(r11)
            java.lang.String r3 = "AD26"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.o()
            java.lang.String r3 = "AD27"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.q()
            java.lang.String r3 = "AD28"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.s()
            java.lang.String r3 = "AD29"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.p()
            java.lang.String r3 = "AD30"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.r()
            java.lang.String r3 = "AD31"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.m()
            java.lang.String r3 = "AD32"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.n()
            java.lang.String r3 = "AD33"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.o(r11)
            java.lang.String r3 = "AD34"
            r1.put(r3, r2)
            java.lang.String r2 = com.alipay.sdk.m.a0.b.p(r11)
            java.lang.String r3 = "AD35"
            r1.put(r3, r2)
            java.lang.String r0 = r0.e(r11)
            java.lang.String r2 = "AD36"
            r1.put(r2, r0)
            java.lang.String r0 = com.alipay.sdk.m.a0.b.l()
            java.lang.String r2 = "AD37"
            r1.put(r2, r0)
            java.lang.String r0 = com.alipay.sdk.m.a0.b.k()
            java.lang.String r2 = "AD38"
            r1.put(r2, r0)
            java.lang.String r0 = com.alipay.sdk.m.a0.b.f(r11)
            java.lang.String r2 = "AD39"
            r1.put(r2, r0)
            java.lang.String r11 = com.alipay.sdk.m.a0.b.g(r11)
            java.lang.String r0 = "AD40"
            r1.put(r0, r11)
            java.lang.String r11 = com.alipay.sdk.m.a0.b.b()
            java.lang.String r0 = "AD41"
            r1.put(r0, r11)
            java.lang.String r11 = com.alipay.sdk.m.a0.b.c()
            java.lang.String r0 = "AD42"
            r1.put(r0, r11)
            return r1
    }
}

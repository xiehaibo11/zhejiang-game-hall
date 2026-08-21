package com.alipay.sdk.m.u;

public class a {
    public static final java.lang.String a = "ap_req";
    public static final java.lang.String b = "ap_args";
    public static final java.lang.String c = "ap_resp";

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.g.a a() {
            java.lang.String r0 = "NP"
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L2b
            com.alipay.sdk.m.h.c r3 = new com.alipay.sdk.m.h.c     // Catch: java.lang.Exception -> L2b
            com.alipay.sdk.m.s.b r4 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Exception -> L2b
            java.lang.String r4 = r4.c()     // Catch: java.lang.Exception -> L2b
            r3.<init>(r4)     // Catch: java.lang.Exception -> L2b
            com.alipay.sdk.m.s.b r4 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Exception -> L2b
            android.content.Context r4 = r4.b()     // Catch: java.lang.Exception -> L2b
            long r4 = com.alipay.sdk.m.k.a.c.a(r4)     // Catch: java.lang.Exception -> L2b
            int r5 = (int) r4     // Catch: java.lang.Exception -> L2b
            short r4 = (short) r5     // Catch: java.lang.Exception -> L2b
            com.alipay.sdk.m.h.f r5 = new com.alipay.sdk.m.h.f     // Catch: java.lang.Exception -> L2b
            r5.<init>()     // Catch: java.lang.Exception -> L2b
            com.alipay.sdk.m.h.a r0 = com.alipay.sdk.m.h.a.a(r0, r1, r3, r4, r5)     // Catch: java.lang.Exception -> L2b
            return r0
        L2b:
            com.alipay.sdk.m.h.a r0 = com.alipay.sdk.m.h.a.c()     // Catch: java.lang.Exception -> L30
            return r0
        L30:
            r0 = 0
            return r0
    }

    public static java.util.HashMap<java.lang.String, java.lang.String> a(com.alipay.sdk.m.s.a r10) {
            java.lang.String r0 = "ap_q"
            java.lang.String r1 = "biz"
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            com.alipay.sdk.m.g.a r3 = a()     // Catch: java.lang.Exception -> La7
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> La7
            r4.<init>()     // Catch: java.lang.Exception -> La7
            if (r10 == 0) goto L19
            android.content.Context r5 = r10.a()     // Catch: java.lang.Exception -> La7
            goto L1a
        L19:
            r5 = 0
        L1a:
            if (r5 != 0) goto L28
            com.alipay.sdk.m.s.b r5 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Exception -> La7
            android.content.Context r5 = r5.b()     // Catch: java.lang.Exception -> La7
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Exception -> La7
        L28:
            java.lang.String r6 = com.alipay.sdk.m.u.n.a(r10, r5)     // Catch: java.lang.Exception -> La7
            java.lang.String r5 = com.alipay.sdk.m.w.b.b(r10, r5)     // Catch: java.lang.Exception -> La7
            java.lang.String r7 = ""
            if (r3 == 0) goto L39
            java.lang.String r8 = r3.a()     // Catch: java.lang.Exception -> La7
            goto L3a
        L39:
            r8 = r7
        L3a:
            r4.put(r0, r8)     // Catch: java.lang.Exception -> La7
            java.lang.String r8 = "ap_link_token"
            if (r10 == 0) goto L44
            java.lang.String r9 = r10.d     // Catch: java.lang.Exception -> La7
            goto L45
        L44:
            r9 = r7
        L45:
            r4.put(r8, r9)     // Catch: java.lang.Exception -> La7
            java.lang.String r8 = "u_pd"
            int r9 = com.alipay.sdk.m.u.n.g()     // Catch: java.lang.Exception -> La7
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> La7
            r4.put(r8, r9)     // Catch: java.lang.Exception -> La7
            java.lang.String r8 = "u_lk"
            java.lang.String r9 = com.alipay.sdk.m.u.n.b()     // Catch: java.lang.Exception -> La7
            int r9 = com.alipay.sdk.m.u.n.e(r9)     // Catch: java.lang.Exception -> La7
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> La7
            r4.put(r8, r9)     // Catch: java.lang.Exception -> La7
            java.lang.String r8 = "u_pi"
            if (r10 == 0) goto L6d
            java.lang.String r9 = r10.g     // Catch: java.lang.Exception -> La7
            goto L6f
        L6d:
            java.lang.String r9 = "_"
        L6f:
            java.lang.String r9 = java.lang.String.valueOf(r9)     // Catch: java.lang.Exception -> La7
            r4.put(r8, r9)     // Catch: java.lang.Exception -> La7
            java.lang.String r8 = "u_fu"
            r4.put(r8, r6)     // Catch: java.lang.Exception -> La7
            java.lang.String r8 = "u_oi"
            r4.put(r8, r5)     // Catch: java.lang.Exception -> La7
            java.lang.String r5 = "ap_req"
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> La7
            r2.put(r5, r4)     // Catch: java.lang.Exception -> La7
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La7
            r4.<init>()     // Catch: java.lang.Exception -> La7
            if (r3 == 0) goto L94
            java.lang.String r7 = r3.a()     // Catch: java.lang.Exception -> La7
        L94:
            r4.append(r7)     // Catch: java.lang.Exception -> La7
            java.lang.String r3 = "|"
            r4.append(r3)     // Catch: java.lang.Exception -> La7
            r4.append(r6)     // Catch: java.lang.Exception -> La7
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> La7
            com.alipay.sdk.m.k.a.a(r10, r1, r0, r3)     // Catch: java.lang.Exception -> La7
            goto Lad
        La7:
            r0 = move-exception
            java.lang.String r3 = "APMEx1"
            com.alipay.sdk.m.k.a.a(r10, r1, r3, r0)
        Lad:
            return r2
    }

    public static org.json.JSONObject a(com.alipay.sdk.m.s.a r3, org.json.JSONObject r4) {
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "ap_resp"
            java.lang.String r4 = r4.optString(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L17
            if (r1 != 0) goto L16
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r1.<init>(r4)     // Catch: org.json.JSONException -> L17
            return r1
        L16:
            return r0
        L17:
            r4 = move-exception
            java.lang.String r1 = "biz"
            java.lang.String r2 = "APMEx2"
            com.alipay.sdk.m.k.a.a(r3, r1, r2, r4)
            return r0
    }

    public static void a(com.alipay.sdk.m.s.a r4, java.util.HashMap<java.lang.String, java.lang.String> r5) {
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.D()
            org.json.JSONObject r0 = r0.a()
            if (r5 == 0) goto L1f
            if (r0 != 0) goto Ld
            goto L1f
        Ld:
            java.lang.String r1 = "ap_r"
            java.lang.String r2 = r0.optString(r1)
            java.lang.String r3 = "biz"
            com.alipay.sdk.m.k.a.a(r4, r3, r1, r2)
            java.util.Map r4 = com.alipay.sdk.m.u.n.a(r0)
            r5.putAll(r4)
        L1f:
            return
    }

    public static void a(com.alipay.sdk.m.s.a r1, org.json.JSONObject r2, org.json.JSONObject r3) {
            if (r2 == 0) goto L13
            if (r3 != 0) goto L5
            goto L13
        L5:
            java.lang.String r0 = "ap_args"
            r2.putOpt(r0, r3)     // Catch: org.json.JSONException -> Lb
            goto L13
        Lb:
            r2 = move-exception
            java.lang.String r3 = "biz"
            java.lang.String r0 = "APMEx2"
            com.alipay.sdk.m.k.a.a(r1, r3, r0, r2)
        L13:
            return
    }
}

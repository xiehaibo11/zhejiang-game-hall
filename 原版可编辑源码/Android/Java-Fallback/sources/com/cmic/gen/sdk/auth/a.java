package com.cmic.gen.sdk.auth;

public class a {
    private static com.cmic.gen.sdk.auth.a c;
    private final com.cmic.gen.sdk.c.c.a a;
    private final android.content.Context b;


    static {
            return
    }

    private a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            com.cmic.gen.sdk.c.c.a r1 = com.cmic.gen.sdk.c.c.a.a()
            r0.a = r1
            return
    }

    public static com.cmic.gen.sdk.auth.a a(android.content.Context r2) {
            com.cmic.gen.sdk.auth.a r0 = com.cmic.gen.sdk.auth.a.c
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.auth.a> r0 = com.cmic.gen.sdk.auth.a.class
            monitor-enter(r0)
            com.cmic.gen.sdk.auth.a r1 = com.cmic.gen.sdk.auth.a.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.auth.a r1 = new com.cmic.gen.sdk.auth.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.auth.a.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.auth.a r2 = com.cmic.gen.sdk.auth.a.c
            return r2
    }

    private void a(com.cmic.gen.sdk.a r4) {
            r3 = this;
            android.content.Context r0 = r3.b
            java.lang.String r0 = r0.getPackageName()
            android.content.Context r1 = r3.b
            byte[] r1 = com.cmic.gen.sdk.e.l.a(r1, r0)
            java.lang.String r1 = com.cmic.gen.sdk.e.d.a(r1)
            java.lang.String r2 = "apppackage"
            r4.a(r2, r0)
            java.lang.String r0 = "appsign"
            r4.a(r0, r1)
            return
    }

    private void a(com.cmic.gen.sdk.a r21, com.cmic.gen.sdk.auth.b r22, java.lang.String r23, java.lang.String r24, org.json.JSONObject r25) {
            r20 = this;
            r1 = r21
            r2 = r22
            r3 = r23
            r4 = r24
            r0 = r25
            java.lang.String r5 = "openId"
            java.lang.String r6 = "phonescrip"
            java.lang.String r7 = "securityphone"
            java.lang.String r8 = "103000"
            boolean r8 = r8.equals(r3)
            java.lang.String r9 = "true"
            r10 = 3
            java.lang.String r11 = "logintype"
            if (r8 == 0) goto L10f
            java.lang.String r8 = "resultdata"
            java.lang.String r8 = r0.optString(r8)
            boolean r12 = android.text.TextUtils.isEmpty(r8)
            if (r12 == 0) goto L2e
            java.lang.String r0 = r25.toString()
            goto L3e
        L2e:
            java.lang.String r0 = com.cmic.gen.sdk.b.a.a
            byte[] r0 = r1.a(r0)
            java.lang.String r12 = com.cmic.gen.sdk.b.a.b
            byte[] r12 = r1.a(r12)
            java.lang.String r0 = com.cmic.gen.sdk.e.a.b(r0, r8, r12)
        L3e:
            r8 = 0
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: org.json.JSONException -> L73
            r12.<init>(r0)     // Catch: org.json.JSONException -> L73
            java.lang.String r13 = r12.optString(r6)     // Catch: org.json.JSONException -> L6c
            java.lang.String r14 = r12.optString(r7)     // Catch: org.json.JSONException -> L69
            java.lang.String r8 = r12.optString(r5)     // Catch: org.json.JSONException -> L61
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: org.json.JSONException -> L61
            if (r0 == 0) goto L5d
            java.lang.String r0 = "pcid"
            java.lang.String r0 = r12.optString(r0)     // Catch: org.json.JSONException -> L61
            r8 = r0
        L5d:
            com.cmic.gen.sdk.e.k.a(r7, r14)     // Catch: org.json.JSONException -> L61
            goto L7d
        L61:
            r0 = move-exception
            r19 = r12
            r12 = r0
            r0 = r8
            r8 = r19
            goto L78
        L69:
            r0 = move-exception
            r14 = r8
            goto L6f
        L6c:
            r0 = move-exception
            r13 = r8
            r14 = r13
        L6f:
            r8 = r12
            r12 = r0
            r0 = r14
            goto L78
        L73:
            r0 = move-exception
            r12 = r0
            r0 = r8
            r13 = r0
            r14 = r13
        L78:
            r12.printStackTrace()
            r12 = r8
            r8 = r0
        L7d:
            r0 = r14
            r14 = r13
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r15 = "securityPhone  = "
            r13.append(r15)
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            java.lang.String r15 = "AuthnBusiness"
            com.cmic.gen.sdk.e.c.b(r15, r13)
            r1.a(r5, r8)
            r1.a(r6, r14)
            r1.a(r7, r0)
            if (r12 == 0) goto Lf3
            java.lang.String r5 = "isRisk"
            r6 = 0
            boolean r7 = r1.b(r5, r6)
            if (r7 != 0) goto Lcb
            r7 = r20
            android.content.Context r13 = r7.b
            java.lang.String r8 = "scripExpiresIn"
            java.lang.String r15 = "0"
            java.lang.String r8 = r12.optString(r8, r15)
            long r15 = java.lang.Long.parseLong(r8)
            java.lang.String r8 = "scripKey"
            java.lang.String r6 = ""
            java.lang.String r17 = r1.b(r8, r6)
            java.lang.String r8 = "scripType"
            java.lang.String r18 = r1.b(r8, r6)
            com.cmic.gen.sdk.e.h.a(r13, r14, r15, r17, r18)
            goto Lcd
        Lcb:
            r7 = r20
        Lcd:
            int r6 = r1.c(r11)
            if (r6 != r10) goto Ldb
            org.json.JSONObject r0 = com.cmic.gen.sdk.auth.d.a(r0)
            r2.a(r3, r9, r1, r0)
            goto L122
        Ldb:
            r0 = 0
            boolean r6 = r1.b(r5, r0)
            if (r6 == 0) goto Lef
            r1.a(r5, r0)
            r0 = 1
            java.lang.String r3 = "isGotScrip"
            r1.a(r3, r0)
            r20.b(r21, r22)
            goto L122
        Lef:
            r2.a(r3, r4, r1, r12)
            goto L122
        Lf3:
            r7 = r20
            java.lang.String r0 = "返回103000，但是数据解析出错"
            com.cmic.gen.sdk.e.c.a(r15, r0)
            r0 = 102223(0x18f4f, float:1.43245E-40)
            java.lang.String r3 = java.lang.String.valueOf(r0)
            java.lang.String r4 = "数据解析异常"
            org.json.JSONObject r3 = com.cmic.gen.sdk.auth.d.a(r3, r4)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.a(r0, r4, r1, r3)
            return
        L10f:
            r7 = r20
            int r5 = r1.c(r11)
            if (r5 != r10) goto L11f
            org.json.JSONObject r0 = com.cmic.gen.sdk.auth.d.b(r23, r24)
            r2.a(r3, r9, r1, r0)
            goto L122
        L11f:
            r2.a(r3, r4, r1, r0)
        L122:
            return
    }

    static void a(com.cmic.gen.sdk.auth.a r0, com.cmic.gen.sdk.a r1, com.cmic.gen.sdk.auth.b r2, java.lang.String r3, java.lang.String r4, org.json.JSONObject r5) {
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private void b(com.cmic.gen.sdk.a r5) {
            r4 = this;
            r0 = 0
            byte[] r1 = new byte[r0]
            java.lang.String r2 = "use2048PublicKey"
            boolean r2 = r5.b(r2, r0)
            java.lang.String r3 = "AuthnBusiness"
            if (r2 == 0) goto L17
            java.lang.String r0 = "使用2048公钥对应的对称秘钥生成方式"
            com.cmic.gen.sdk.e.c.a(r3, r0)
            byte[] r1 = com.cmic.gen.sdk.e.a.a()
            goto L35
        L17:
            java.lang.String r2 = "使用1024公钥对应的对称秘钥生成方式"
            com.cmic.gen.sdk.e.c.a(r3, r2)
            java.util.UUID r2 = java.util.UUID.randomUUID()     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L31
            r3 = 16
            java.lang.String r0 = r2.substring(r0, r3)     // Catch: java.lang.Exception -> L31
            java.lang.String r2 = "utf-8"
            byte[] r1 = r0.getBytes(r2)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r0 = move-exception
            r0.printStackTrace()
        L35:
            byte[] r0 = com.cmic.gen.sdk.e.a.a()
            java.lang.String r2 = com.cmic.gen.sdk.b.a.a
            r5.a(r2, r1)
            java.lang.String r1 = com.cmic.gen.sdk.b.a.b
            r5.a(r1, r0)
            java.lang.String r0 = "authType"
            java.lang.String r1 = "3"
            r5.a(r0, r1)
            return
    }

    public void a(com.cmic.gen.sdk.a r4, com.cmic.gen.sdk.auth.b r5) {
            r3 = this;
            java.lang.String r0 = "AuthnBusiness"
            java.lang.String r1 = "LoginCheck method start"
            com.cmic.gen.sdk.e.c.b(r0, r1)
            java.lang.String r0 = "logintype"
            int r0 = r4.c(r0)
            java.lang.String r1 = "isCacheScrip"
            r2 = 0
            boolean r1 = r4.b(r1, r2)
            if (r1 == 0) goto L31
            java.lang.String r1 = "securityphone"
            java.lang.String r2 = ""
            java.lang.String r1 = r4.b(r1, r2)
            r2 = 3
            if (r0 != r2) goto L2d
            org.json.JSONObject r0 = com.cmic.gen.sdk.auth.d.a(r1)
            java.lang.String r1 = "103000"
            java.lang.String r2 = "true"
            r5.a(r1, r2, r4, r0)
            goto L30
        L2d:
            r3.b(r4, r5)
        L30:
            return
        L31:
            r3.b(r4, r5)
            return
    }

    public void b(com.cmic.gen.sdk.a r6, com.cmic.gen.sdk.auth.b r7) {
            r5 = this;
            java.lang.String r0 = "AuthnBusiness"
            java.lang.String r1 = "getScripAndToken start"
            com.cmic.gen.sdk.e.c.b(r0, r1)
            java.lang.String r1 = "isGotScrip"
            r2 = 0
            boolean r1 = r6.b(r1, r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "isGotScrip = "
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.cmic.gen.sdk.e.c.b(r0, r3)
            if (r1 != 0) goto L70
            r5.a(r6)
            java.lang.String r0 = "isCacheScrip"
            boolean r0 = r6.b(r0, r2)
            r1 = 1
            java.lang.String r2 = "logintype"
            if (r0 != 0) goto L57
            r5.b(r6)
            java.lang.String r0 = "networktype"
            int r0 = r6.c(r0)
            r3 = 3
            if (r0 != r3) goto L57
            java.lang.String r0 = "loginMethod"
            java.lang.String r0 = r6.b(r0)
            java.lang.String r4 = "loginAuth"
            boolean r0 = r4.equals(r0)
            if (r0 != 0) goto L57
            int r0 = r6.c(r2)
            if (r0 == r3) goto L57
            java.lang.String r0 = "isRisk"
            r6.a(r0, r1)
        L57:
            int r0 = r6.c(r2)
            java.lang.String r3 = "userCapaid"
            if (r0 != r1) goto L65
            java.lang.String r0 = "200"
            r6.a(r3, r0)
            goto L70
        L65:
            int r0 = r6.c(r2)
            if (r0 != 0) goto L70
            java.lang.String r0 = "50"
            r6.a(r3, r0)
        L70:
            com.cmic.gen.sdk.c.c.a r0 = r5.a
            com.cmic.gen.sdk.auth.a$1 r1 = new com.cmic.gen.sdk.auth.a$1
            r1.<init>(r5, r6, r7)
            r0.a(r6, r1)
            return
    }
}

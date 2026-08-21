package com.cmic.gen.sdk.auth;

public class c {
    public static final java.lang.String SDK_VERSION = "quick_login_android_5.9.6";
    private static com.cmic.gen.sdk.auth.c f;
    protected final com.cmic.gen.sdk.auth.a a;
    protected final android.content.Context b;
    protected long c;
    protected final android.os.Handler d;
    protected java.lang.String e;
    private final java.lang.Object g;








    protected class a implements java.lang.Runnable {
        final com.cmic.gen.sdk.auth.c a;
        private final com.cmic.gen.sdk.a b;

        a(com.cmic.gen.sdk.auth.c r1, com.cmic.gen.sdk.a r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        @Override
        public void run() {
                r5 = this;
                java.lang.String r0 = "200023"
                java.lang.String r1 = "登录超时"
                org.json.JSONObject r2 = com.cmic.gen.sdk.auth.d.a(r0, r1)
                com.cmic.gen.sdk.auth.c r3 = r5.a
                java.lang.String r4 = "resultCode"
                java.lang.String r0 = r2.optString(r4, r0)
                java.lang.String r4 = "desc"
                java.lang.String r1 = r2.optString(r4, r1)
                com.cmic.gen.sdk.a r4 = r5.b
                r3.callBackResult(r0, r1, r4, r2)
                return
        }
    }

    static {
            return
    }

    c(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r0 = 8000(0x1f40, double:3.9525E-320)
            r2.c = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.g = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.b = r3
            android.os.Handler r3 = new android.os.Handler
            android.content.Context r0 = r2.b
            android.os.Looper r0 = r0.getMainLooper()
            r3.<init>(r0)
            r2.d = r3
            android.content.Context r3 = r2.b
            com.cmic.gen.sdk.auth.a r3 = com.cmic.gen.sdk.auth.a.a(r3)
            r2.a = r3
            android.content.Context r3 = r2.b
            com.cmic.gen.sdk.e.r.a(r3)
            android.content.Context r3 = r2.b
            com.cmic.gen.sdk.e.k.a(r3)
            android.content.Context r3 = r2.b
            com.cmic.gen.sdk.e.j.a(r3)
            com.cmic.gen.sdk.auth.c$1 r3 = new com.cmic.gen.sdk.auth.c$1
            r3.<init>(r2)
            com.cmic.gen.sdk.e.n.a(r3)
            return
    }

    private c(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            r0.e = r2
            return
    }

    private void a() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "%"
            r0.append(r1)
            java.lang.String r1 = com.cmic.gen.sdk.e.q.b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "generate aid = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AuthnHelperCore"
            com.cmic.gen.sdk.e.c.b(r2, r1)
            java.lang.String r1 = "AID"
            com.cmic.gen.sdk.e.k.a(r1, r0)
            return
    }

    private void a(android.content.Context r2, java.lang.String r3, com.cmic.gen.sdk.a r4) {
            r1 = this;
            com.cmic.gen.sdk.auth.c$7 r0 = new com.cmic.gen.sdk.auth.c$7
            r0.<init>(r1, r3, r2, r4)
            com.cmic.gen.sdk.e.n.a(r0)
            return
    }

    static void a(com.cmic.gen.sdk.auth.c r0) {
            r0.a()
            return
    }

    public static com.cmic.gen.sdk.auth.c getInstance(android.content.Context r2) {
            com.cmic.gen.sdk.auth.c r0 = com.cmic.gen.sdk.auth.c.f
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.auth.c> r0 = com.cmic.gen.sdk.auth.c.class
            monitor-enter(r0)
            com.cmic.gen.sdk.auth.c r1 = com.cmic.gen.sdk.auth.c.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.auth.c r1 = new com.cmic.gen.sdk.auth.c     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.auth.c.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.auth.c r2 = com.cmic.gen.sdk.auth.c.f
            return r2
    }

    public static com.cmic.gen.sdk.auth.c getInstance(android.content.Context r2, java.lang.String r3) {
            com.cmic.gen.sdk.auth.c r0 = com.cmic.gen.sdk.auth.c.f
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.auth.c> r0 = com.cmic.gen.sdk.auth.c.class
            monitor-enter(r0)
            com.cmic.gen.sdk.auth.c r1 = com.cmic.gen.sdk.auth.c.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.auth.c r1 = new com.cmic.gen.sdk.auth.c     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.auth.c.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.auth.c r2 = com.cmic.gen.sdk.auth.c.f
            return r2
    }

    public static void setDebugMode(boolean r0) {
            com.cmic.gen.sdk.e.c.a(r0)
            return
    }

    protected com.cmic.gen.sdk.a a(com.cmic.gen.sdk.auth.GenTokenListener r4) {
            r3 = this;
            com.cmic.gen.sdk.a r0 = new com.cmic.gen.sdk.a
            r1 = 64
            r0.<init>(r1)
            java.lang.String r1 = com.cmic.gen.sdk.e.q.c()
            com.cmic.gen.sdk.d.b r2 = new com.cmic.gen.sdk.d.b
            r2.<init>()
            r0.a(r2)
            java.lang.String r2 = "traceId"
            r0.a(r2, r1)
            com.cmic.gen.sdk.e.c.a(r2, r1)
            if (r4 == 0) goto L20
            com.cmic.gen.sdk.e.e.a(r1, r4)
        L20:
            return r0
    }

    protected void a(com.cmic.gen.sdk.a r5) {
            r4 = this;
            com.cmic.gen.sdk.auth.c$a r0 = new com.cmic.gen.sdk.auth.c$a
            r0.<init>(r4, r5)
            android.os.Handler r1 = r4.d
            long r2 = r4.c
            r1.postDelayed(r0, r2)
            com.cmic.gen.sdk.auth.a r1 = r4.a
            com.cmic.gen.sdk.auth.c$5 r2 = new com.cmic.gen.sdk.auth.c$5
            r2.<init>(r4, r0)
            r1.a(r5, r2)
            return
    }

    protected boolean a(com.cmic.gen.sdk.a r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, int r12, com.cmic.gen.sdk.auth.GenTokenListener r13) {
            r7 = this;
            android.content.Context r0 = r7.b
            com.cmic.gen.sdk.a.c r0 = com.cmic.gen.sdk.a.c.a(r0)
            com.cmic.gen.sdk.a.a r0 = r0.a()
            r8.a(r0)
            java.lang.String r1 = "use2048PublicKey"
            java.lang.String r2 = "rsa2048"
            java.lang.String r3 = r7.e
            boolean r2 = r2.equals(r3)
            r8.a(r1, r2)
            java.lang.String r1 = "systemStartTime"
            long r2 = android.os.SystemClock.elapsedRealtime()
            r8.a(r1, r2)
            java.lang.String r1 = "starttime"
            java.lang.String r2 = com.cmic.gen.sdk.e.o.a()
            r8.a(r1, r2)
            java.lang.String r1 = "loginMethod"
            r8.a(r1, r11)
            java.lang.String r11 = "appkey"
            r8.a(r11, r10)
            java.lang.String r11 = "appid"
            r8.a(r11, r9)
            java.lang.String r11 = "timeOut"
            long r1 = r7.c
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r8.a(r11, r1)
            android.content.Context r11 = r7.b
            boolean r11 = com.cmic.gen.sdk.e.m.a(r11)
            com.cmic.gen.sdk.b.a r1 = com.cmic.gen.sdk.b.a.a()
            android.content.Context r2 = r7.b
            r1.a(r2, r11)
            com.cmic.gen.sdk.e.j r1 = com.cmic.gen.sdk.e.j.a()
            java.lang.String r1 = r1.b()
            com.cmic.gen.sdk.e.j r2 = com.cmic.gen.sdk.e.j.a()
            java.lang.String r2 = r2.c()
            com.cmic.gen.sdk.e.j r3 = com.cmic.gen.sdk.e.j.a()
            java.lang.String r3 = r3.a(r2)
            java.lang.String r4 = "operator"
            r8.a(r4, r2)
            java.lang.String r4 = "operatortype"
            r8.a(r4, r3)
            java.lang.String r4 = "logintype"
            r8.a(r4, r12)
            java.lang.String r4 = "AuthnHelperCore"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "subId = "
            r5.append(r6)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            com.cmic.gen.sdk.e.c.b(r4, r5)
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto Lbb
            java.lang.String r2 = "AuthnHelperCore"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "使用subId作为缓存key = "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.cmic.gen.sdk.e.c.a(r2, r4)
            java.lang.String r2 = "scripType"
            java.lang.String r4 = "subid"
            r8.a(r2, r4)
            java.lang.String r2 = "scripKey"
            r8.a(r2, r1)
            goto Le3
        Lbb:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto Le3
            java.lang.String r1 = "AuthnHelperCore"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "使用operator作为缓存key = "
            r4.append(r5)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            com.cmic.gen.sdk.e.c.a(r1, r4)
            java.lang.String r1 = "scripType"
            java.lang.String r4 = "operator"
            r8.a(r1, r4)
            java.lang.String r1 = "scripKey"
            r8.a(r1, r2)
        Le3:
            android.content.Context r1 = r7.b
            int r1 = com.cmic.gen.sdk.e.m.a(r1, r11, r8)
            java.lang.String r2 = "networktype"
            r8.a(r2, r1)
            r2 = 0
            r4 = 0
            if (r11 != 0) goto L103
            java.lang.String r9 = "authType"
            java.lang.String r10 = java.lang.String.valueOf(r4)
            r8.a(r9, r10)
            java.lang.String r9 = "200010"
            java.lang.String r10 = "无法识别sim卡或没有sim卡"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L103:
            if (r13 != 0) goto L10d
            java.lang.String r9 = "102203"
            java.lang.String r10 = "listener不能为空"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L10d:
            boolean r11 = r0.g()
            if (r11 == 0) goto L11b
            java.lang.String r9 = "200082"
            java.lang.String r10 = "服务器繁忙，请稍后重试"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L11b:
            if (r9 != 0) goto L120
            java.lang.String r9 = ""
            goto L124
        L120:
            java.lang.String r9 = r9.trim()
        L124:
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L132
            java.lang.String r9 = "102203"
            java.lang.String r10 = "appId 不能为空"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L132:
            if (r10 != 0) goto L137
            java.lang.String r9 = ""
            goto L13b
        L137:
            java.lang.String r9 = r10.trim()
        L13b:
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 == 0) goto L149
            java.lang.String r9 = "102203"
            java.lang.String r10 = "appkey不能为空"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L149:
            if (r1 != 0) goto L153
            java.lang.String r9 = "102101"
            java.lang.String r10 = "未检测到网络"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L153:
            java.lang.String r9 = "2"
            boolean r9 = r9.equals(r3)
            if (r9 == 0) goto L169
            boolean r9 = r0.f()
            if (r9 == 0) goto L169
            java.lang.String r9 = "200082"
            java.lang.String r10 = "服务器繁忙，请稍后重试"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L169:
            java.lang.String r9 = "3"
            boolean r9 = r9.equals(r3)
            if (r9 == 0) goto L17f
            boolean r9 = r0.e()
            if (r9 == 0) goto L17f
            java.lang.String r9 = "200082"
            java.lang.String r10 = "服务器繁忙，请稍后重试"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L17f:
            java.lang.Object r9 = r7.g
            monitor-enter(r9)
            boolean r10 = com.cmic.gen.sdk.e.h.a(r8)     // Catch: java.lang.Throwable -> L1f8
            r11 = 1
            if (r10 == 0) goto L1ce
            java.lang.String r13 = "securityphone"
            java.lang.String r0 = ""
            java.lang.String r13 = com.cmic.gen.sdk.e.k.b(r13, r0)     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r0 = "securityphone"
            r8.a(r0, r13)     // Catch: java.lang.Throwable -> L1f8
            r13 = 3
            if (r13 == r12) goto L1ce
            android.content.Context r12 = r7.b     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r12 = com.cmic.gen.sdk.e.h.a(r12)     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r13 = "AuthnHelperCore"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f8
            r0.<init>()     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r3 = "解密phoneScript "
            r0.append(r3)     // Catch: java.lang.Throwable -> L1f8
            boolean r3 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L1f8
            if (r3 != 0) goto L1b3
            r3 = 1
            goto L1b4
        L1b3:
            r3 = 0
        L1b4:
            r0.append(r3)     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1f8
            com.cmic.gen.sdk.e.c.b(r13, r0)     // Catch: java.lang.Throwable -> L1f8
            boolean r13 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L1f8
            if (r13 != 0) goto L1ca
            java.lang.String r13 = "phonescrip"
            r8.a(r13, r12)     // Catch: java.lang.Throwable -> L1f8
            goto L1cb
        L1ca:
            r10 = 0
        L1cb:
            com.cmic.gen.sdk.e.h.a(r11, r4)     // Catch: java.lang.Throwable -> L1f8
        L1ce:
            java.lang.String r12 = "isCacheScrip"
            r8.a(r12, r10)     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r12 = "AuthnHelperCore"
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1f8
            r13.<init>()     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r0 = "isCachePhoneScrip = "
            r13.append(r0)     // Catch: java.lang.Throwable -> L1f8
            r13.append(r10)     // Catch: java.lang.Throwable -> L1f8
            java.lang.String r13 = r13.toString()     // Catch: java.lang.Throwable -> L1f8
            com.cmic.gen.sdk.e.c.b(r12, r13)     // Catch: java.lang.Throwable -> L1f8
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L1f8
            r9 = 2
            if (r1 != r9) goto L1f7
            if (r10 != 0) goto L1f7
            java.lang.String r9 = "102103"
            java.lang.String r10 = "无数据网络"
            r7.callBackResult(r9, r10, r8, r2)
            return r4
        L1f7:
            return r11
        L1f8:
            r8 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L1f8
            throw r8
    }

    public void callBackResult(java.lang.String r7, java.lang.String r8, com.cmic.gen.sdk.a r9, org.json.JSONObject r10) {
            r6 = this;
            java.lang.String r0 = "traceId"
            java.lang.String r0 = r9.b(r0)     // Catch: java.lang.Exception -> L97
            java.lang.String r1 = "SDKRequestCode"
            r2 = -1
            int r1 = r9.b(r1, r2)     // Catch: java.lang.Exception -> L97
            boolean r2 = com.cmic.gen.sdk.e.e.a(r0)     // Catch: java.lang.Exception -> L97
            if (r2 != 0) goto L9b
            monitor-enter(r6)     // Catch: java.lang.Exception -> L97
            com.cmic.gen.sdk.auth.GenTokenListener r2 = com.cmic.gen.sdk.e.e.c(r0)     // Catch: java.lang.Throwable -> L94
            if (r10 == 0) goto L23
            java.lang.String r3 = "keepListener"
            r4 = 0
            boolean r3 = r10.optBoolean(r3, r4)     // Catch: java.lang.Throwable -> L94
            if (r3 != 0) goto L26
        L23:
            com.cmic.gen.sdk.e.e.b(r0)     // Catch: java.lang.Throwable -> L94
        L26:
            if (r2 != 0) goto L2a
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L94
            return
        L2a:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = "systemEndTime"
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L97
            r9.a(r3, r4)     // Catch: java.lang.Exception -> L97
            java.lang.String r3 = "endtime"
            java.lang.String r4 = com.cmic.gen.sdk.e.o.a()     // Catch: java.lang.Exception -> L97
            r9.a(r3, r4)     // Catch: java.lang.Exception -> L97
            java.lang.String r3 = "logintype"
            int r3 = r9.c(r3)     // Catch: java.lang.Exception -> L97
            if (r10 != 0) goto L49
            org.json.JSONObject r10 = com.cmic.gen.sdk.auth.d.a(r7, r8)     // Catch: java.lang.Exception -> L97
        L49:
            r4 = 3
            if (r3 != r4) goto L51
            org.json.JSONObject r8 = com.cmic.gen.sdk.auth.d.a(r7, r9, r10)     // Catch: java.lang.Exception -> L97
            goto L55
        L51:
            org.json.JSONObject r8 = com.cmic.gen.sdk.auth.d.a(r7, r8, r9, r10)     // Catch: java.lang.Exception -> L97
        L55:
            java.lang.String r10 = "traceId"
            r8.put(r10, r0)     // Catch: java.lang.Exception -> L97
            java.lang.String r10 = "scripExpiresIn"
            long r3 = com.cmic.gen.sdk.e.h.a()     // Catch: java.lang.Exception -> L97
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L97
            r8.put(r10, r0)     // Catch: java.lang.Exception -> L97
            android.os.Handler r10 = r6.d     // Catch: java.lang.Exception -> L97
            com.cmic.gen.sdk.auth.c$6 r0 = new com.cmic.gen.sdk.auth.c$6     // Catch: java.lang.Exception -> L97
            r0.<init>(r6, r2, r1, r8)     // Catch: java.lang.Exception -> L97
            r10.post(r0)     // Catch: java.lang.Exception -> L97
            android.content.Context r8 = r6.b     // Catch: java.lang.Exception -> L97
            com.cmic.gen.sdk.a.c r8 = com.cmic.gen.sdk.a.c.a(r8)     // Catch: java.lang.Exception -> L97
            r8.a(r9)     // Catch: java.lang.Exception -> L97
            com.cmic.gen.sdk.a.a r8 = r9.b()     // Catch: java.lang.Exception -> L97
            boolean r8 = r8.j()     // Catch: java.lang.Exception -> L97
            if (r8 != 0) goto L9b
            com.cmic.gen.sdk.a.a r8 = r9.b()     // Catch: java.lang.Exception -> L97
            boolean r8 = com.cmic.gen.sdk.e.q.a(r8)     // Catch: java.lang.Exception -> L97
            if (r8 != 0) goto L9b
            android.content.Context r8 = r6.b     // Catch: java.lang.Exception -> L97
            r6.a(r8, r7, r9)     // Catch: java.lang.Exception -> L97
            goto L9b
        L94:
            r7 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L94
            throw r7     // Catch: java.lang.Exception -> L97
        L97:
            r7 = move-exception
            r7.printStackTrace()
        L9b:
            return
    }

    public void delScrip() {
            r2 = this;
            r0 = 1
            com.cmic.gen.sdk.e.h.a(r0, r0)     // Catch: java.lang.Exception -> Lc
            java.lang.String r0 = "AuthnHelperCore"
            java.lang.String r1 = "删除scrip"
            com.cmic.gen.sdk.e.c.b(r0, r1)     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public org.json.JSONObject getNetworkType(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = "AuthnHelperCore"
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            android.content.Context r2 = r6.b     // Catch: java.lang.Exception -> L6b
            boolean r2 = com.cmic.gen.sdk.e.m.a(r2)     // Catch: java.lang.Exception -> L6b
            com.cmic.gen.sdk.b.a r3 = com.cmic.gen.sdk.b.a.a()     // Catch: java.lang.Exception -> L6b
            r3.a(r7, r2)     // Catch: java.lang.Exception -> L6b
            com.cmic.gen.sdk.e.j r3 = com.cmic.gen.sdk.e.j.a()     // Catch: java.lang.Exception -> L6b
            r4 = 0
            java.lang.String r3 = r3.a(r4)     // Catch: java.lang.Exception -> L6b
            com.cmic.gen.sdk.a r4 = new com.cmic.gen.sdk.a     // Catch: java.lang.Exception -> L6b
            r5 = 1
            r4.<init>(r5)     // Catch: java.lang.Exception -> L6b
            int r7 = com.cmic.gen.sdk.e.m.a(r7, r2, r4)     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "operatortype"
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "networktype"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            r4.<init>()     // Catch: java.lang.Exception -> L6b
            r4.append(r7)     // Catch: java.lang.Exception -> L6b
            java.lang.String r5 = ""
            r4.append(r5)     // Catch: java.lang.Exception -> L6b
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L6b
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L6b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            r2.<init>()     // Catch: java.lang.Exception -> L6b
            java.lang.String r4 = "网络类型: "
            r2.append(r4)     // Catch: java.lang.Exception -> L6b
            r2.append(r7)     // Catch: java.lang.Exception -> L6b
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L6b
            com.cmic.gen.sdk.e.c.b(r0, r7)     // Catch: java.lang.Exception -> L6b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            r7.<init>()     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "运营商类型: "
            r7.append(r2)     // Catch: java.lang.Exception -> L6b
            r7.append(r3)     // Catch: java.lang.Exception -> L6b
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> L6b
            com.cmic.gen.sdk.e.c.b(r0, r7)     // Catch: java.lang.Exception -> L6b
            return r1
        L6b:
            java.lang.String r7 = "errorDes"
            java.lang.String r0 = "发生未知错误"
            r1.put(r7, r0)     // Catch: org.json.JSONException -> L73
            goto L77
        L73:
            r7 = move-exception
            r7.printStackTrace()
        L77:
            return r1
    }

    public void getPhoneInfo(java.lang.String r10, java.lang.String r11, com.cmic.gen.sdk.auth.GenTokenListener r12) {
            r9 = this;
            com.cmic.gen.sdk.a r4 = r9.a(r12)
            com.cmic.gen.sdk.auth.c$4 r8 = new com.cmic.gen.sdk.auth.c$4
            android.content.Context r2 = r9.b
            r0 = r8
            r1 = r9
            r3 = r4
            r5 = r10
            r6 = r11
            r7 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            com.cmic.gen.sdk.e.n.a(r8)
            return
    }

    public void loginAuth(java.lang.String r10, java.lang.String r11, com.cmic.gen.sdk.auth.GenTokenListener r12) {
            r9 = this;
            com.cmic.gen.sdk.a r4 = r9.a(r12)
            com.cmic.gen.sdk.auth.c$2 r8 = new com.cmic.gen.sdk.auth.c$2
            android.content.Context r2 = r9.b
            r0 = r8
            r1 = r9
            r3 = r4
            r5 = r10
            r6 = r11
            r7 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            com.cmic.gen.sdk.e.n.a(r8)
            return
    }

    public void mobileAuth(java.lang.String r10, java.lang.String r11, com.cmic.gen.sdk.auth.GenTokenListener r12) {
            r9 = this;
            com.cmic.gen.sdk.a r4 = r9.a(r12)
            com.cmic.gen.sdk.auth.c$3 r8 = new com.cmic.gen.sdk.auth.c$3
            android.content.Context r2 = r9.b
            r0 = r8
            r1 = r9
            r3 = r4
            r5 = r10
            r6 = r11
            r7 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            com.cmic.gen.sdk.e.n.a(r8)
            return
    }

    public void setOverTime(long r1) {
            r0 = this;
            r0.c = r1
            return
    }
}

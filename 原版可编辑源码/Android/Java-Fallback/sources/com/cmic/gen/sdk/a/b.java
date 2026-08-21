package com.cmic.gen.sdk.a;

public class b {
    private static com.cmic.gen.sdk.a.b c;
    private com.cmic.gen.sdk.a.a a;
    private final com.cmic.gen.sdk.a.a b;
    private volatile boolean d;
    private com.cmic.gen.sdk.a.b.a e;



    interface a {
        void a(com.cmic.gen.sdk.a.a r1);
    }

    private b(boolean r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            com.cmic.gen.sdk.a.a$a r0 = new com.cmic.gen.sdk.a.a$a
            r0.<init>()
            com.cmic.gen.sdk.a.a r0 = r0.a()
            r1.b = r0
            if (r2 != 0) goto L1a
            com.cmic.gen.sdk.a.a r2 = r1.d()
            r1.a = r2
            goto L1c
        L1a:
            r1.a = r0
        L1c:
            return
    }

    static com.cmic.gen.sdk.a.a a(com.cmic.gen.sdk.a.b r0) {
            com.cmic.gen.sdk.a.a r0 = r0.d()
            return r0
    }

    static com.cmic.gen.sdk.a.a a(com.cmic.gen.sdk.a.b r0, com.cmic.gen.sdk.a.a r1) {
            r0.a = r1
            return r1
    }

    public static com.cmic.gen.sdk.a.b a(boolean r2) {
            com.cmic.gen.sdk.a.b r0 = com.cmic.gen.sdk.a.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.a.b> r0 = com.cmic.gen.sdk.a.b.class
            monitor-enter(r0)
            com.cmic.gen.sdk.a.b r1 = com.cmic.gen.sdk.a.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.a.b r1 = new com.cmic.gen.sdk.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.a.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.a.b r2 = com.cmic.gen.sdk.a.b.c
            return r2
    }

    private java.lang.String a(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "&"
            java.lang.String[] r5 = r5.split(r0)
            int r0 = r5.length
            r1 = 0
        L8:
            if (r1 >= r0) goto L16
            r2 = r5[r1]
            boolean r3 = r2.contains(r6)
            if (r3 == 0) goto L13
            goto L18
        L13:
            int r1 = r1 + 1
            goto L8
        L16:
            java.lang.String r2 = ""
        L18:
            boolean r5 = android.text.TextUtils.isEmpty(r2)
            if (r5 != 0) goto L2a
            java.lang.String r5 = "="
            int r5 = r2.lastIndexOf(r5)
            int r5 = r5 + 1
            java.lang.String r2 = r2.substring(r5)
        L2a:
            return r2
    }

    static void a(com.cmic.gen.sdk.a.b r0, com.cmic.gen.sdk.a r1) {
            r0.b(r1)
            return
    }

    static void a(com.cmic.gen.sdk.a.b r0, org.json.JSONObject r1) {
            r0.a(r1)
            return
    }

    private void a(org.json.JSONObject r19) {
            r18 = this;
            r1 = r18
            r0 = r19
            java.lang.String r2 = "LOGS_CONTROL"
            java.lang.String r3 = "M009"
            java.lang.String r4 = "M008"
            java.lang.String r5 = "M007"
            java.lang.String r6 = "CHANGE_HOST"
            java.lang.String r7 = "Configlist"
            java.lang.String r8 = "UmcConfigHandle"
            java.lang.String r9 = "client_valid"
            java.lang.String r10 = "0"
            java.lang.String r11 = "sso_config_xf"
            com.cmic.gen.sdk.e.k$a r11 = com.cmic.gen.sdk.e.k.b(r11)
            boolean r12 = r0.has(r9)     // Catch: java.lang.Exception -> L10d
            if (r12 == 0) goto L3d
            java.lang.String r12 = r0.getString(r9)     // Catch: java.lang.Exception -> L10d
            int r12 = java.lang.Integer.parseInt(r12)     // Catch: java.lang.Exception -> L10d
            long r12 = (long) r12     // Catch: java.lang.Exception -> L10d
            long r14 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L10d
            r16 = 60
            long r12 = r12 * r16
            long r12 = r12 * r16
            r16 = 1000(0x3e8, double:4.94E-321)
            long r12 = r12 * r16
            long r14 = r14 + r12
            r11.a(r9, r14)     // Catch: java.lang.Exception -> L10d
        L3d:
            boolean r9 = r0.has(r7)     // Catch: java.lang.Exception -> L10d
            if (r9 == 0) goto L109
            org.json.JSONObject r0 = r0.getJSONObject(r7)     // Catch: java.lang.Exception -> L10d
            boolean r7 = r0.has(r6)     // Catch: java.lang.Exception -> L10d
            java.lang.String r9 = "config_host"
            java.lang.String r12 = "https_get_phone_scrip_host"
            java.lang.String r13 = "logHost"
            if (r7 == 0) goto L91
            java.lang.String r6 = r0.getString(r6)     // Catch: java.lang.Exception -> L10d
            boolean r7 = r6.contains(r5)     // Catch: java.lang.Exception -> L10d
            if (r7 == 0) goto L6a
            java.lang.String r5 = r1.a(r6, r5)     // Catch: java.lang.Exception -> L10d
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L10d
            if (r7 != 0) goto L6a
            r11.a(r13, r5)     // Catch: java.lang.Exception -> L10d
        L6a:
            boolean r5 = r6.contains(r4)     // Catch: java.lang.Exception -> L10d
            if (r5 == 0) goto L7d
            java.lang.String r4 = r1.a(r6, r4)     // Catch: java.lang.Exception -> L10d
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L10d
            if (r5 != 0) goto L7d
            r11.a(r12, r4)     // Catch: java.lang.Exception -> L10d
        L7d:
            boolean r4 = r6.contains(r3)     // Catch: java.lang.Exception -> L10d
            if (r4 == 0) goto L9a
            java.lang.String r3 = r1.a(r6, r3)     // Catch: java.lang.Exception -> L10d
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L10d
            if (r4 != 0) goto L9a
            r11.a(r9, r3)     // Catch: java.lang.Exception -> L10d
            goto L9a
        L91:
            r11.a(r13)     // Catch: java.lang.Exception -> L10d
            r11.a(r12)     // Catch: java.lang.Exception -> L10d
            r11.a(r9)     // Catch: java.lang.Exception -> L10d
        L9a:
            java.lang.String r3 = "CLOSE_FRIEND_WAPKS"
            r1.a(r0, r3, r10, r11)     // Catch: java.lang.Exception -> L10d
            java.lang.String r3 = "CLOSE_LOGS_VERSION"
            r1.a(r0, r3, r10, r11)     // Catch: java.lang.Exception -> L10d
            java.lang.String r3 = "CLOSE_IPV4_LIST"
            r1.a(r0, r3, r10, r11)     // Catch: java.lang.Exception -> L10d
            java.lang.String r3 = "CLOSE_IPV6_LIST"
            r1.a(r0, r3, r10, r11)     // Catch: java.lang.Exception -> L10d
            java.lang.String r3 = "CLOSE_M008_SDKVERSION_LIST"
            r1.a(r0, r3, r10, r11)     // Catch: java.lang.Exception -> L10d
            java.lang.String r3 = "CLOSE_M008_APPID_LIST"
            r1.a(r0, r3, r10, r11)     // Catch: java.lang.Exception -> L10d
            boolean r3 = r0.has(r2)     // Catch: java.lang.Exception -> L10d
            java.lang.String r4 = "pauseTime"
            java.lang.String r5 = "maxFailedLogTimes"
            if (r3 == 0) goto L103
            java.lang.String r0 = r0.getString(r2)     // Catch: java.lang.Exception -> L10d
            java.lang.String r2 = "h"
            java.lang.String r3 = ""
            java.lang.String r0 = r0.replace(r2, r3)     // Catch: java.lang.Exception -> L10d
            java.lang.String r2 = "&"
            java.lang.String[] r0 = r0.split(r2)     // Catch: java.lang.Exception -> L10d
            int r2 = r0.length     // Catch: java.lang.Exception -> L10d
            r3 = 2
            if (r2 != r3) goto L109
            r2 = 0
            r3 = r0[r2]     // Catch: java.lang.Exception -> L10d
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L10d
            if (r3 != 0) goto L109
            r3 = 1
            r6 = r0[r3]     // Catch: java.lang.Exception -> L10d
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L10d
            if (r6 != 0) goto L109
            r2 = r0[r2]     // Catch: java.lang.Exception -> Lfd
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> Lfd
            r0 = r0[r3]     // Catch: java.lang.Exception -> Lfd
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> Lfd
            r11.a(r5, r2)     // Catch: java.lang.Exception -> Lfd
            r11.a(r4, r0)     // Catch: java.lang.Exception -> Lfd
            goto L109
        Lfd:
            java.lang.String r0 = "解析日志上报限制时间次数异常"
            com.cmic.gen.sdk.e.c.a(r8, r0)     // Catch: java.lang.Exception -> L10d
            goto L109
        L103:
            r11.a(r5)     // Catch: java.lang.Exception -> L10d
            r11.a(r4)     // Catch: java.lang.Exception -> L10d
        L109:
            r11.b()     // Catch: java.lang.Exception -> L10d
            goto L116
        L10d:
            r0 = move-exception
            java.lang.String r2 = "配置项异常，配置失效"
            com.cmic.gen.sdk.e.c.a(r8, r2)
            r0.printStackTrace()
        L116:
            return
    }

    private void a(org.json.JSONObject r3, java.lang.String r4, java.lang.String r5, com.cmic.gen.sdk.e.k.a r6) {
            r2 = this;
            boolean r0 = r3.has(r4)
            if (r0 == 0) goto L4b
            java.lang.String r0 = r3.optString(r4, r5)
            java.lang.String r1 = "CLOSE_FRIEND_WAPKS"
            boolean r1 = r1.equals(r4)
            if (r1 != 0) goto L23
            java.lang.String r1 = "0"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L42
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L42
            return
        L23:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4a
            java.lang.String r1 = "CU"
            boolean r1 = r0.contains(r1)
            if (r1 != 0) goto L42
            java.lang.String r1 = "CT"
            boolean r1 = r0.contains(r1)
            if (r1 != 0) goto L42
            java.lang.String r1 = "CM"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L42
            goto L4a
        L42:
            java.lang.String r3 = r3.optString(r4, r5)
            r6.a(r4, r3)
            goto L4e
        L4a:
            return
        L4b:
            r6.a(r4)
        L4e:
            return
    }

    static boolean a(com.cmic.gen.sdk.a.b r0, boolean r1) {
            r0.d = r1
            return r1
    }

    static com.cmic.gen.sdk.a.b.a b(com.cmic.gen.sdk.a.b r0) {
            com.cmic.gen.sdk.a.b$a r0 = r0.e
            return r0
    }

    private void b(com.cmic.gen.sdk.a r4) {
            r3 = this;
            boolean r0 = r3.d
            if (r0 == 0) goto Lc
            java.lang.String r4 = "UmcConfigHandle"
            java.lang.String r0 = "正在获取配置中..."
            com.cmic.gen.sdk.e.c.a(r4, r0)
            return
        Lc:
            r0 = 1
            r3.d = r0
            com.cmic.gen.sdk.c.c.a r0 = com.cmic.gen.sdk.c.c.a.a()
            r1 = 0
            com.cmic.gen.sdk.a.b$1 r2 = new com.cmic.gen.sdk.a.b$1
            r2.<init>(r3)
            r0.a(r1, r4, r2)
            return
    }

    static com.cmic.gen.sdk.a.a c(com.cmic.gen.sdk.a.b r0) {
            com.cmic.gen.sdk.a.a r0 = r0.a
            return r0
    }

    private com.cmic.gen.sdk.a.a d() {
            r2 = this;
            com.cmic.gen.sdk.a.a$a r0 = new com.cmic.gen.sdk.a.a$a
            r0.<init>()
            com.cmic.gen.sdk.a.a r1 = r2.b
            java.lang.String r1 = r1.a()
            java.lang.String r1 = com.cmic.gen.sdk.a.d.b(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.a(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            java.lang.String r1 = r1.c()
            java.lang.String r1 = com.cmic.gen.sdk.a.d.a(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.c(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            java.lang.String r1 = r1.b()
            java.lang.String r1 = com.cmic.gen.sdk.a.d.b(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.b(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            java.lang.String r1 = r1.d()
            java.lang.String r1 = com.cmic.gen.sdk.a.d.c(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.d(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            boolean r1 = r1.h()
            boolean r1 = com.cmic.gen.sdk.a.d.a(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.d(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            boolean r1 = r1.i()
            boolean r1 = com.cmic.gen.sdk.a.d.b(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.e(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            boolean r1 = r1.e()
            boolean r1 = com.cmic.gen.sdk.a.d.e(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.a(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            boolean r1 = r1.f()
            boolean r1 = com.cmic.gen.sdk.a.d.d(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.b(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            boolean r1 = r1.g()
            boolean r1 = com.cmic.gen.sdk.a.d.c(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.c(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            boolean r1 = r1.j()
            boolean r1 = com.cmic.gen.sdk.a.d.f(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.f(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            int r1 = r1.k()
            int r1 = com.cmic.gen.sdk.a.d.a(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.a(r1)
            com.cmic.gen.sdk.a.a r1 = r2.b
            int r1 = r1.l()
            int r1 = com.cmic.gen.sdk.a.d.b(r1)
            com.cmic.gen.sdk.a.a$a r0 = r0.b(r1)
            com.cmic.gen.sdk.a.a r0 = r0.a()
            return r0
    }

    com.cmic.gen.sdk.a.a a() {
            r1 = this;
            com.cmic.gen.sdk.a.a r0 = r1.b
            return r0
    }

    void a(com.cmic.gen.sdk.a.b.a r1) {
            r0 = this;
            r0.e = r1
            return
    }

    void a(com.cmic.gen.sdk.a r2) {
            r1 = this;
            boolean r0 = com.cmic.gen.sdk.a.d.a()
            if (r0 == 0) goto Le
            com.cmic.gen.sdk.a.b$2 r0 = new com.cmic.gen.sdk.a.b$2
            r0.<init>(r1, r2)
            com.cmic.gen.sdk.e.n.a(r0)
        Le:
            return
    }

    com.cmic.gen.sdk.a.a b() {
            r1 = this;
            com.cmic.gen.sdk.a.a r0 = r1.a
            return r0
    }

    void c() {
            r1 = this;
            java.lang.String r0 = "sso_config_xf"
            com.cmic.gen.sdk.e.k$a r0 = com.cmic.gen.sdk.e.k.b(r0)
            r0.c()
            r0.b()
            return
    }
}

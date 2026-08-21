package com.alipay.sdk.m.t;

public class a {
    public static final java.lang.String g = "alipay_tid_storage";
    public static final java.lang.String h = "tidinfo";
    public static final java.lang.String i = "tid";
    public static final java.lang.String j = "client_key";
    public static final java.lang.String k = "timestamp";
    public static final java.lang.String l = "vimei";
    public static final java.lang.String m = "vimsi";
    public static android.content.Context n;
    public static com.alipay.sdk.m.t.a o;
    public java.lang.String a;
    public java.lang.String b;
    public long c;
    public java.lang.String d;
    public java.lang.String e;
    public boolean f;

    public static class a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static java.lang.String a() {
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()     // Catch: java.lang.Throwable -> Ld
                android.content.Context r0 = r0.getApplicationContext()     // Catch: java.lang.Throwable -> Ld
                java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Throwable -> Ld
                goto L13
            Ld:
                r0 = move-exception
                com.alipay.sdk.m.u.e.a(r0)
                java.lang.String r0 = ""
            L13:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                r1.append(r0)
                java.lang.String r0 = "0000000000000000000000000000"
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                r1 = 0
                r2 = 24
                java.lang.String r0 = r0.substring(r1, r2)
                return r0
        }

        public static java.lang.String a(java.lang.String r3, java.lang.String r4, boolean r5) {
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                r2 = 0
                android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r2)
                java.lang.String r3 = r3.getString(r4, r1)
                boolean r4 = android.text.TextUtils.isEmpty(r3)
                java.lang.String r0 = "mspl"
                if (r4 != 0) goto L32
                if (r5 == 0) goto L32
                java.lang.String r4 = a()
                java.lang.String r3 = com.alipay.sdk.m.n.e.a(r4, r3, r3)
                boolean r4 = android.text.TextUtils.isEmpty(r3)
                if (r4 == 0) goto L32
                java.lang.String r4 = "tid_str: pref failed"
                com.alipay.sdk.m.u.e.b(r0, r4)
            L32:
                java.lang.String r4 = "tid_str: from local"
                com.alipay.sdk.m.u.e.b(r0, r4)
                return r3
        }

        public static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
                r0 = 1
                a(r1, r2, r3, r0)
                return
        }

        public static void a(java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                if (r0 != 0) goto L7
                return
            L7:
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                r1 = 0
                android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)
                if (r6 == 0) goto L2e
                java.lang.String r6 = a()
                java.lang.String r0 = com.alipay.sdk.m.n.e.b(r6, r5, r5)
                boolean r2 = android.text.TextUtils.isEmpty(r0)
                if (r2 == 0) goto L2d
                r2 = 2
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r2[r1] = r5
                r5 = 1
                r2[r5] = r6
                java.lang.String r5 = "LocalPreference::putLocalPreferences failed %s，%s"
                java.lang.String.format(r5, r2)
            L2d:
                r5 = r0
            L2e:
                android.content.SharedPreferences$Editor r3 = r3.edit()
                android.content.SharedPreferences$Editor r3 = r3.putString(r4, r5)
                r3.apply()
                return
        }

        public static boolean a(java.lang.String r2, java.lang.String r3) {
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
                boolean r2 = r2.contains(r3)
                return r2
        }

        public static void b(java.lang.String r2, java.lang.String r3) {
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                if (r0 != 0) goto L7
                return
            L7:
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                r1 = 0
                android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
                android.content.SharedPreferences$Editor r2 = r2.edit()
                android.content.SharedPreferences$Editor r2 = r2.remove(r3)
                r2.apply()
                return
        }

        public static boolean c(java.lang.String r2, java.lang.String r3) {
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.content.Context r0 = com.alipay.sdk.m.t.a.j()
                android.content.SharedPreferences r2 = r0.getSharedPreferences(r2, r1)
                boolean r2 = r2.contains(r3)
                return r2
        }

        public static java.lang.String d(java.lang.String r1, java.lang.String r2) {
                r0 = 1
                java.lang.String r1 = a(r1, r2, r0)
                return r1
        }
    }

    static {
            return
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.f = r0
            return
    }

    public static synchronized com.alipay.sdk.m.t.a a(android.content.Context r2) {
            java.lang.Class<com.alipay.sdk.m.t.a> r0 = com.alipay.sdk.m.t.a.class
            monitor-enter(r0)
            com.alipay.sdk.m.t.a r1 = com.alipay.sdk.m.t.a.o     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto Le
            com.alipay.sdk.m.t.a r1 = new com.alipay.sdk.m.t.a     // Catch: java.lang.Throwable -> L1b
            r1.<init>()     // Catch: java.lang.Throwable -> L1b
            com.alipay.sdk.m.t.a.o = r1     // Catch: java.lang.Throwable -> L1b
        Le:
            android.content.Context r1 = com.alipay.sdk.m.t.a.n     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L17
            com.alipay.sdk.m.t.a r1 = com.alipay.sdk.m.t.a.o     // Catch: java.lang.Throwable -> L1b
            r1.b(r2)     // Catch: java.lang.Throwable -> L1b
        L17:
            com.alipay.sdk.m.t.a r2 = com.alipay.sdk.m.t.a.o     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)
            return r2
        L1b:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private void a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.Long r6) {
            r1 = this;
            boolean r0 = r1.a(r2, r3, r4, r5)
            if (r0 == 0) goto L7
            return
        L7:
            r1.a = r2
            r1.b = r3
            r1.d = r4
            r1.e = r5
            if (r6 != 0) goto L18
            long r2 = java.lang.System.currentTimeMillis()
            r1.c = r2
            goto L1e
        L18:
            long r2 = r6.longValue()
            r1.c = r2
        L1e:
            r1.n()
            return
    }

    private boolean a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L1b
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto L19
            goto L1b
        L19:
            r1 = 0
            goto L1c
        L1b:
            r1 = 1
        L1c:
            return r1
    }

    private void b(android.content.Context r1) {
            r0 = this;
            if (r1 == 0) goto L8
            android.content.Context r1 = r1.getApplicationContext()
            com.alipay.sdk.m.t.a.n = r1
        L8:
            boolean r1 = r0.f
            if (r1 == 0) goto Ld
            return
        Ld:
            r1 = 1
            r0.f = r1
            r0.l()
            return
    }

    public static android.content.Context j() {
            android.content.Context r0 = com.alipay.sdk.m.t.a.n
            return r0
    }

    private java.lang.String k() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toHexString(r0)
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            r0 = 9000(0x2328, float:1.2612E-41)
            int r0 = r1.nextInt(r0)
            int r0 = r0 + 1000
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    private void l() {
            r9 = this;
            java.lang.String r0 = ""
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 0
            java.lang.String r3 = "alipay_tid_storage"
            java.lang.String r4 = "tidinfo"
            r5 = 1
            java.lang.String r3 = com.alipay.sdk.m.t.a.a.a(r3, r4, r5)     // Catch: java.lang.Exception -> L52
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L52
            if (r4 != 0) goto L4e
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L52
            r4.<init>(r3)     // Catch: java.lang.Exception -> L52
            java.lang.String r3 = "tid"
            java.lang.String r3 = r4.optString(r3, r0)     // Catch: java.lang.Exception -> L52
            java.lang.String r5 = "client_key"
            java.lang.String r5 = r4.optString(r5, r0)     // Catch: java.lang.Exception -> L4b
            java.lang.String r6 = "timestamp"
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L48
            long r6 = r4.optLong(r6, r7)     // Catch: java.lang.Exception -> L48
            java.lang.Long r1 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Exception -> L48
            java.lang.String r6 = "vimei"
            java.lang.String r6 = r4.optString(r6, r0)     // Catch: java.lang.Exception -> L48
            java.lang.String r7 = "vimsi"
            java.lang.String r2 = r4.optString(r7, r0)     // Catch: java.lang.Exception -> L46
            goto L59
        L46:
            r0 = move-exception
            goto L56
        L48:
            r0 = move-exception
            r6 = r2
            goto L56
        L4b:
            r0 = move-exception
            r5 = r2
            goto L55
        L4e:
            r0 = r2
            r5 = r0
            r6 = r5
            goto L5b
        L52:
            r0 = move-exception
            r3 = r2
            r5 = r3
        L55:
            r6 = r5
        L56:
            com.alipay.sdk.m.u.e.a(r0)
        L59:
            r0 = r2
            r2 = r3
        L5b:
            java.lang.String r3 = "mspl"
            java.lang.String r4 = "tid_str: load"
            com.alipay.sdk.m.u.e.b(r3, r4)
            boolean r3 = r9.a(r2, r5, r6, r0)
            if (r3 == 0) goto L6c
            r9.m()
            goto L7a
        L6c:
            r9.a = r2
            r9.b = r5
            long r1 = r1.longValue()
            r9.c = r1
            r9.d = r6
            r9.e = r0
        L7a:
            return
    }

    private void m() {
            r2 = this;
            java.lang.String r0 = ""
            r2.a = r0
            java.lang.String r0 = r2.b()
            r2.b = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.c = r0
            java.lang.String r0 = r2.k()
            r2.d = r0
            java.lang.String r0 = r2.k()
            r2.e = r0
            java.lang.String r0 = "alipay_tid_storage"
            java.lang.String r1 = "tidinfo"
            com.alipay.sdk.m.t.a.a.b(r0, r1)
            return
    }

    private void n() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L35
            r0.<init>()     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "tid"
            java.lang.String r2 = r4.a     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "client_key"
            java.lang.String r2 = r4.b     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "timestamp"
            long r2 = r4.c     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "vimei"
            java.lang.String r2 = r4.d     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "vimsi"
            java.lang.String r2 = r4.e     // Catch: java.lang.Exception -> L35
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "alipay_tid_storage"
            java.lang.String r2 = "tidinfo"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L35
            r3 = 1
            com.alipay.sdk.m.t.a.a.a(r1, r2, r0, r3)     // Catch: java.lang.Exception -> L35
            goto L39
        L35:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L39:
            return
    }

    private void o() {
            r0 = this;
            return
    }

    public void a() {
            r2 = this;
            java.lang.String r0 = "mspl"
            java.lang.String r1 = "tid_str: del"
            com.alipay.sdk.m.u.e.b(r0, r1)
            r2.m()
            return
    }

    public void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "mspl"
            java.lang.String r1 = "tid_str: save"
            com.alipay.sdk.m.u.e.b(r0, r1)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L24
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L14
            goto L24
        L14:
            r2.a = r3
            r2.b = r4
            long r3 = java.lang.System.currentTimeMillis()
            r2.c = r3
            r2.n()
            r2.o()
        L24:
            return
    }

    public java.lang.String b() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r0 = java.lang.Long.toHexString(r0)
            int r1 = r0.length()
            r2 = 10
            if (r1 <= r2) goto L19
            int r1 = r0.length()
            int r1 = r1 - r2
            java.lang.String r0 = r0.substring(r1)
        L19:
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.Long e() {
            r2 = this;
            long r0 = r2.c
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public boolean h() {
            r1 = this;
            boolean r0 = r1.i()
            return r0
    }

    public boolean i() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L23
            java.lang.String r0 = r1.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L21
            goto L23
        L21:
            r0 = 0
            goto L24
        L23:
            r0 = 1
        L24:
            return r0
    }
}

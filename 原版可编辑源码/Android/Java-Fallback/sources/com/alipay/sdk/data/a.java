package com.alipay.sdk.data;

public final class a {
    public static final int a = 3500;
    public static final java.lang.String b = "https://h5.m.taobao.com/mlapp/olist.html";
    public static final int c = 10;
    public static final boolean d = true;
    public static final boolean e = true;
    public static final int f = 1000;
    public static final int g = 20000;
    public static final java.lang.String h = "alipay_cashier_dynamic_config";
    public static final java.lang.String i = "timeout";
    public static final java.lang.String j = "st_sdk_config";
    public static final java.lang.String k = "tbreturl";
    public static final java.lang.String l = "launchAppSwitch";
    public static final java.lang.String m = "configQueryInterval";
    public static final java.lang.String n = "scheme_pay";
    public static final java.lang.String o = "intercept_batch";
    private static com.alipay.sdk.data.a w;
    public boolean p;
    private int q;
    private java.lang.String r;
    private int s;
    private boolean t;
    private boolean u;
    private java.util.List<com.alipay.sdk.data.a.a> v;

    public static final class a {
        public final java.lang.String a;
        public final int b;
        public final java.lang.String c;

        public a(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        public static com.alipay.sdk.data.a.a a(org.json.JSONObject r4) {
                if (r4 != 0) goto L4
                r4 = 0
                return r4
            L4:
                com.alipay.sdk.data.a$a r0 = new com.alipay.sdk.data.a$a
                java.lang.String r1 = "pn"
                java.lang.String r1 = r4.optString(r1)
                r2 = 0
                java.lang.String r3 = "v"
                int r2 = r4.optInt(r3, r2)
                java.lang.String r3 = "pk"
                java.lang.String r4 = r4.optString(r3)
                r0.<init>(r1, r2, r4)
                return r0
        }

        public static java.util.List<com.alipay.sdk.data.a.a> a(org.json.JSONArray r4) {
                if (r4 != 0) goto L4
                r4 = 0
                return r4
            L4:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                int r1 = r4.length()
                r2 = 0
            Le:
                if (r2 >= r1) goto L20
                org.json.JSONObject r3 = r4.optJSONObject(r2)
                com.alipay.sdk.data.a$a r3 = a(r3)
                if (r3 == 0) goto L1d
                r0.add(r3)
            L1d:
                int r2 = r2 + 1
                goto Le
            L20:
                return r0
        }

        public static org.json.JSONArray a(java.util.List<com.alipay.sdk.data.a.a> r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                org.json.JSONArray r0 = new org.json.JSONArray
                r0.<init>()
                java.util.Iterator r2 = r2.iterator()
            Ld:
                boolean r1 = r2.hasNext()
                if (r1 == 0) goto L21
                java.lang.Object r1 = r2.next()
                com.alipay.sdk.data.a$a r1 = (com.alipay.sdk.data.a.a) r1
                org.json.JSONObject r1 = a(r1)
                r0.put(r1)
                goto Ld
            L21:
                return r0
        }

        public static org.json.JSONObject a(com.alipay.sdk.data.a.a r4) {
                r0 = 0
                if (r4 != 0) goto L4
                return r0
            L4:
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L22
                r1.<init>()     // Catch: org.json.JSONException -> L22
                java.lang.String r2 = "pn"
                java.lang.String r3 = r4.a     // Catch: org.json.JSONException -> L22
                org.json.JSONObject r1 = r1.put(r2, r3)     // Catch: org.json.JSONException -> L22
                java.lang.String r2 = "v"
                int r3 = r4.b     // Catch: org.json.JSONException -> L22
                org.json.JSONObject r1 = r1.put(r2, r3)     // Catch: org.json.JSONException -> L22
                java.lang.String r2 = "pk"
                java.lang.String r4 = r4.c     // Catch: org.json.JSONException -> L22
                org.json.JSONObject r4 = r1.put(r2, r4)     // Catch: org.json.JSONException -> L22
                return r4
            L22:
                r4 = move-exception
                com.alipay.sdk.util.c.a(r4)
                return r0
        }

        public java.lang.String toString() {
                r1 = this;
                org.json.JSONObject r0 = a(r1)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                return r0
        }
    }

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 3500(0xdac, float:4.905E-42)
            r1.q = r0
            java.lang.String r0 = "https://h5.m.taobao.com/mlapp/olist.html"
            r1.r = r0
            r0 = 10
            r1.s = r0
            r0 = 1
            r1.t = r0
            r1.u = r0
            r0 = 0
            r1.p = r0
            r0 = 0
            r1.v = r0
            return
    }

    static void a(com.alipay.sdk.data.a r0) {
            r0.i()
            return
    }

    static void a(com.alipay.sdk.data.a r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4c
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "timeout"
            r1 = 3500(0xdac, float:4.905E-42)
            int r3 = r0.optInt(r3, r1)     // Catch: java.lang.Throwable -> L4c
            r2.q = r3     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "tbreturl"
            java.lang.String r1 = "https://h5.m.taobao.com/mlapp/olist.html"
            java.lang.String r3 = r0.optString(r3, r1)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = r3.trim()     // Catch: java.lang.Throwable -> L4c
            r2.r = r3     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "configQueryInterval"
            r1 = 10
            int r3 = r0.optInt(r3, r1)     // Catch: java.lang.Throwable -> L4c
            r2.s = r3     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "launchAppSwitch"
            org.json.JSONArray r3 = r0.optJSONArray(r3)     // Catch: java.lang.Throwable -> L4c
            java.util.List r3 = com.alipay.sdk.data.a.a.a(r3)     // Catch: java.lang.Throwable -> L4c
            r2.v = r3     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "scheme_pay"
            r1 = 1
            boolean r3 = r0.optBoolean(r3, r1)     // Catch: java.lang.Throwable -> L4c
            r2.t = r3     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "intercept_batch"
            boolean r3 = r0.optBoolean(r3, r1)     // Catch: java.lang.Throwable -> L4c
            r2.u = r3     // Catch: java.lang.Throwable -> L4c
            goto L50
        L4c:
            r3 = move-exception
            com.alipay.sdk.util.c.a(r3)
        L50:
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5c
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r3 = "st_sdk_config"
            org.json.JSONObject r3 = r0.optJSONObject(r3)     // Catch: java.lang.Throwable -> L5c
            if (r3 == 0) goto L54
            java.lang.String r0 = "timeout"
            r1 = 3500(0xdac, float:4.905E-42)
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Throwable -> L5c
            r2.q = r0     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "tbreturl"
            java.lang.String r1 = "https://h5.m.taobao.com/mlapp/olist.html"
            java.lang.String r0 = r3.optString(r0, r1)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Throwable -> L5c
            r2.r = r0     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "configQueryInterval"
            r1 = 10
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Throwable -> L5c
            r2.s = r0     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "launchAppSwitch"
            org.json.JSONArray r0 = r3.optJSONArray(r0)     // Catch: java.lang.Throwable -> L5c
            java.util.List r0 = com.alipay.sdk.data.a.a.a(r0)     // Catch: java.lang.Throwable -> L5c
            r2.v = r0     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "scheme_pay"
            r1 = 1
            boolean r0 = r3.optBoolean(r0, r1)     // Catch: java.lang.Throwable -> L5c
            r2.t = r0     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = "intercept_batch"
            boolean r3 = r3.optBoolean(r0, r1)     // Catch: java.lang.Throwable -> L5c
            r2.u = r3     // Catch: java.lang.Throwable -> L5c
            goto L60
        L54:
            java.lang.String r3 = "msp"
            java.lang.String r0 = "config is null"
            com.alipay.sdk.util.c.d(r3, r0)     // Catch: java.lang.Throwable -> L5c
            goto L60
        L5c:
            r3 = move-exception
            com.alipay.sdk.util.c.a(r3)
        L60:
            return
    }

    public static com.alipay.sdk.data.a g() {
            com.alipay.sdk.data.a r0 = com.alipay.sdk.data.a.w
            if (r0 != 0) goto L10
            com.alipay.sdk.data.a r0 = new com.alipay.sdk.data.a
            r0.<init>()
            com.alipay.sdk.data.a.w = r0
            com.alipay.sdk.data.a r0 = com.alipay.sdk.data.a.w
            r0.h()
        L10:
            com.alipay.sdk.data.a r0 = com.alipay.sdk.data.a.w
            return r0
    }

    private void h() {
            r3 = this;
            com.alipay.sdk.sys.b r0 = com.alipay.sdk.sys.b.a()
            android.content.Context r0 = r0.b()
            java.lang.String r1 = "alipay_cashier_dynamic_config"
            r2 = 0
            java.lang.String r0 = com.alipay.sdk.util.j.b(r0, r1, r2)
            r3.a(r0)
            return
    }

    private void i() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L51
            r0.<init>()     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "timeout"
            int r2 = r3.a()     // Catch: java.lang.Exception -> L51
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "tbreturl"
            java.lang.String r2 = r3.d()     // Catch: java.lang.Exception -> L51
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "configQueryInterval"
            int r2 = r3.e()     // Catch: java.lang.Exception -> L51
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "launchAppSwitch"
            java.util.List r2 = r3.f()     // Catch: java.lang.Exception -> L51
            org.json.JSONArray r2 = com.alipay.sdk.data.a.a.a(r2)     // Catch: java.lang.Exception -> L51
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "scheme_pay"
            boolean r2 = r3.b()     // Catch: java.lang.Exception -> L51
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "intercept_batch"
            boolean r2 = r3.c()     // Catch: java.lang.Exception -> L51
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.sys.b r1 = com.alipay.sdk.sys.b.a()     // Catch: java.lang.Exception -> L51
            android.content.Context r1 = r1.b()     // Catch: java.lang.Exception -> L51
            java.lang.String r2 = "alipay_cashier_dynamic_config"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.util.j.a(r1, r2, r0)     // Catch: java.lang.Exception -> L51
            goto L55
        L51:
            r0 = move-exception
            com.alipay.sdk.util.c.a(r0)
        L55:
            return
    }

    public int a() {
            r3 = this;
            int r0 = r3.q
            java.lang.String r1 = ""
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r0 < r2) goto L26
            r2 = 20000(0x4e20, float:2.8026E-41)
            if (r0 <= r2) goto Ld
            goto L26
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "DynamicConfig::getJumpTimeout >"
            r0.append(r2)
            int r2 = r3.q
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.alipay.sdk.util.c.b(r1, r0)
            int r0 = r3.q
            return r0
        L26:
            java.lang.String r0 = "DynamicConfig::getJumpTimeout(default) >3500"
            com.alipay.sdk.util.c.b(r1, r0)
            r0 = 3500(0xdac, float:4.905E-42)
            return r0
    }

    public void a(android.content.Context r3) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.alipay.sdk.data.b r1 = new com.alipay.sdk.data.b
            r1.<init>(r2, r3)
            r0.<init>(r1)
            r0.start()
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    public boolean c() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    public int e() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    public java.util.List<com.alipay.sdk.data.a.a> f() {
            r1 = this;
            java.util.List<com.alipay.sdk.data.a$a> r0 = r1.v
            return r0
    }
}

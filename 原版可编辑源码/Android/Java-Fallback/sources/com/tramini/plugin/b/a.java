package com.tramini.plugin.b;

public class a {
    public static final java.lang.String a = null;
    private java.lang.String b;
    private long c;
    private java.util.List d;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tramini.plugin.a.c.c> e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private int n;
    private int o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;

    static class a {
        private static java.lang.String a = "si";
        private static java.lang.String b = "scto";
        private static java.lang.String c = "tf";
        private static java.lang.String d = "nl";
        private static java.lang.String e = "t_sw";
        private static java.lang.String f = "att_sw";
        private static java.lang.String g = "plst_addr";
        private static java.lang.String h = "pltk_addr";
        private static java.lang.String i = "cn_plst_addr";
        private static java.lang.String j = "cn_pltk_addr";

        static {
                return
        }

        a() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String a() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.a
                return r0
        }

        static java.lang.String b() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.b
                return r0
        }

        static java.lang.String c() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.f
                return r0
        }

        static java.lang.String d() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.g
                return r0
        }

        static java.lang.String e() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.h
                return r0
        }

        static java.lang.String f() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.i
                return r0
        }

        static java.lang.String g() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.j
                return r0
        }

        static java.lang.String h() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.c
                return r0
        }

        static java.lang.String i() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.d
                return r0
        }

        static java.lang.String j() {
                java.lang.String r0 = com.tramini.plugin.b.a.a.e
                return r0
        }
    }

    static {
            java.lang.Class<com.tramini.plugin.b.a> r0 = com.tramini.plugin.b.a.class
            java.lang.String r0 = r0.getSimpleName()
            com.tramini.plugin.b.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tramini.plugin.b.a a(java.lang.String r12) {
            java.lang.String r0 = "notifications"
            java.lang.String r1 = "p_s"
            boolean r2 = android.text.TextUtils.isEmpty(r12)
            r3 = 0
            if (r2 == 0) goto Lc
            return r3
        Lc:
            com.tramini.plugin.b.a r2 = new com.tramini.plugin.b.a
            r2.<init>()
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1c0
            r4.<init>(r12)     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = com.tramini.plugin.b.a.a.a()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 == 0) goto L25
            java.lang.String r12 = ""
            r2.b = r12     // Catch: org.json.JSONException -> L1c0
            goto L2f
        L25:
            java.lang.String r12 = com.tramini.plugin.b.a.a.a()     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = r4.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.b = r12     // Catch: org.json.JSONException -> L1c0
        L2f:
            java.lang.String r12 = com.tramini.plugin.b.a.a.b()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 == 0) goto L3f
            r5 = 3600000(0x36ee80, double:1.7786363E-317)
            r2.c = r5     // Catch: org.json.JSONException -> L1c0
            goto L4a
        L3f:
            java.lang.String r12 = com.tramini.plugin.b.a.a.b()     // Catch: org.json.JSONException -> L1c0
            int r12 = r4.optInt(r12)     // Catch: org.json.JSONException -> L1c0
            long r5 = (long) r12     // Catch: org.json.JSONException -> L1c0
            r2.c = r5     // Catch: org.json.JSONException -> L1c0
        L4a:
            java.lang.String r12 = com.tramini.plugin.b.a.a.c()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            r5 = 0
            if (r12 == 0) goto L58
            r2.o = r5     // Catch: org.json.JSONException -> L1c0
            goto L62
        L58:
            java.lang.String r12 = com.tramini.plugin.b.a.a.c()     // Catch: org.json.JSONException -> L1c0
            int r12 = r4.optInt(r12)     // Catch: org.json.JSONException -> L1c0
            r2.o = r12     // Catch: org.json.JSONException -> L1c0
        L62:
            java.lang.String r12 = com.tramini.plugin.b.a.a.d()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto L76
            java.lang.String r12 = com.tramini.plugin.b.a.a.d()     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = r4.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.p = r12     // Catch: org.json.JSONException -> L1c0
        L76:
            java.lang.String r12 = com.tramini.plugin.b.a.a.e()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto L8a
            java.lang.String r12 = com.tramini.plugin.b.a.a.e()     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = r4.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.q = r12     // Catch: org.json.JSONException -> L1c0
        L8a:
            java.lang.String r12 = com.tramini.plugin.b.a.a.f()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto L9e
            java.lang.String r12 = com.tramini.plugin.b.a.a.f()     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = r4.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.r = r12     // Catch: org.json.JSONException -> L1c0
        L9e:
            java.lang.String r12 = com.tramini.plugin.b.a.a.g()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto Lb2
            java.lang.String r12 = com.tramini.plugin.b.a.a.g()     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = r4.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.s = r12     // Catch: org.json.JSONException -> L1c0
        Lb2:
            java.lang.String r12 = com.tramini.plugin.b.a.a.h()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto L128
            java.util.concurrent.ConcurrentHashMap r12 = new java.util.concurrent.ConcurrentHashMap     // Catch: org.json.JSONException -> L1c0
            r12.<init>()     // Catch: org.json.JSONException -> L1c0
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L126 org.json.JSONException -> L1c0
            java.lang.String r7 = com.tramini.plugin.b.a.a.h()     // Catch: java.lang.Exception -> L126 org.json.JSONException -> L1c0
            java.lang.String r7 = r4.optString(r7)     // Catch: java.lang.Exception -> L126 org.json.JSONException -> L1c0
            r6.<init>(r7)     // Catch: java.lang.Exception -> L126 org.json.JSONException -> L1c0
            java.util.Iterator r7 = r6.keys()     // Catch: java.lang.Exception -> L126 org.json.JSONException -> L1c0
        Ld2:
            boolean r8 = r7.hasNext()     // Catch: java.lang.Exception -> L126 org.json.JSONException -> L1c0
            if (r8 == 0) goto L126
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            com.tramini.plugin.a.c.c r9 = new com.tramini.plugin.a.c.c     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r9.<init>()     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            org.json.JSONObject r10 = r6.optJSONObject(r8)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            java.lang.String r11 = "pml"
            java.lang.String r11 = r10.optString(r11)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r9.d = r11     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            java.lang.String r11 = "uu"
            java.lang.String r11 = r10.optString(r11)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r9.a = r11     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            java.lang.String r11 = "dmin"
            int r11 = r10.optInt(r11)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r9.b = r11     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            java.lang.String r11 = "dmax"
            int r11 = r10.optInt(r11)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r9.c = r11     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            boolean r11 = r10.has(r1)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            if (r11 == 0) goto L122
            java.lang.String r11 = r10.optString(r1)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            if (r11 != 0) goto L122
            org.json.JSONArray r11 = new org.json.JSONArray     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            java.lang.String r10 = r10.optString(r1)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r11.<init>(r10)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            r9.e = r11     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
        L122:
            r12.put(r8, r9)     // Catch: java.lang.Exception -> Ld2 org.json.JSONException -> L1c0
            goto Ld2
        L126:
            r2.e = r12     // Catch: org.json.JSONException -> L1c0
        L128:
            java.lang.String r12 = com.tramini.plugin.b.a.a.i()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto L1a8
            java.lang.String r12 = com.tramini.plugin.b.a.a.i()     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = r4.optString(r12)     // Catch: org.json.JSONException -> L1c0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1c0
            r1.<init>(r12)     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p1"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.f = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p2"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.g = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p3"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.h = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p4"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.i = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p5"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.j = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p6"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.k = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p7"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.l = r12     // Catch: org.json.JSONException -> L1c0
            java.lang.String r12 = "p8"
            java.lang.String r12 = r1.optString(r12)     // Catch: org.json.JSONException -> L1c0
            r2.m = r12     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r1.isNull(r0)     // Catch: org.json.JSONException -> L1c0
            if (r12 != 0) goto L1a8
            org.json.JSONArray r12 = new org.json.JSONArray     // Catch: org.json.JSONException -> L1c0
            java.lang.String r0 = r1.optString(r0)     // Catch: org.json.JSONException -> L1c0
            r12.<init>(r0)     // Catch: org.json.JSONException -> L1c0
            int r0 = r12.length()     // Catch: org.json.JSONException -> L1c0
            if (r0 <= 0) goto L1a8
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: org.json.JSONException -> L1c0
            r1.<init>(r0)     // Catch: org.json.JSONException -> L1c0
            r6 = r5
        L19a:
            if (r6 >= r0) goto L1a6
            java.lang.String r7 = r12.optString(r6)     // Catch: org.json.JSONException -> L1c0
            r1.add(r7)     // Catch: org.json.JSONException -> L1c0
            int r6 = r6 + 1
            goto L19a
        L1a6:
            r2.d = r1     // Catch: org.json.JSONException -> L1c0
        L1a8:
            java.lang.String r12 = com.tramini.plugin.b.a.a.j()     // Catch: org.json.JSONException -> L1c0
            boolean r12 = r4.isNull(r12)     // Catch: org.json.JSONException -> L1c0
            if (r12 == 0) goto L1b5
            r2.n = r5     // Catch: org.json.JSONException -> L1c0
            goto L1bf
        L1b5:
            java.lang.String r12 = com.tramini.plugin.b.a.a.j()     // Catch: org.json.JSONException -> L1c0
            int r12 = r4.optInt(r12)     // Catch: org.json.JSONException -> L1c0
            r2.n = r12     // Catch: org.json.JSONException -> L1c0
        L1bf:
            return r2
        L1c0:
            return r3
    }

    private void a(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private void a(long r1) {
            r0 = this;
            r0.c = r1
            return
    }

    private void a(java.util.List r1) {
            r0 = this;
            r0.d = r1
            return
    }

    private void a(java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tramini.plugin.a.c.c> r1) {
            r0 = this;
            r0.e = r1
            return
    }

    private void b(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    private void e(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private void f(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    private void g(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    private void h(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    private void i(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private void j(java.lang.String r1) {
            r0 = this;
            r0.m = r1
            return
    }

    private void k(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    private void l(java.lang.String r1) {
            r0 = this;
            r0.q = r1
            return
    }

    private void m(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    private void n(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    private java.lang.String p() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    private java.lang.String q() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    private java.lang.String r() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final long c() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    public final java.util.List<java.lang.String> d() {
            r1 = this;
            java.util.List r0 = r1.d
            return r0
    }

    public final java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tramini.plugin.a.c.c> e() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tramini.plugin.a.c.c> r0 = r1.e
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public final java.lang.String i() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    public final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    public final java.lang.String k() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public final java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    public final int m() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public final java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public final java.lang.String o() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }
}

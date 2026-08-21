package com.tramini.plugin.a.d;

public final class e extends com.tramini.plugin.a.d.a {
    public static final int o = 10001;
    private android.content.Context p;
    private java.lang.String q;
    private org.json.JSONObject r;
    private org.json.JSONObject s;

    public e(android.content.Context r1, java.lang.String r2, org.json.JSONObject r3, org.json.JSONObject r4) {
            r0 = this;
            r0.<init>()
            r0.p = r1
            r0.q = r2
            r0.r = r3
            r0.s = r4
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r1.trim()
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r2 = this;
            android.content.Context r0 = r2.p
            com.tramini.plugin.b.b r0 = com.tramini.plugin.b.b.a(r0)
            com.tramini.plugin.b.a r0 = r0.b()
            java.util.concurrent.ConcurrentHashMap r0 = r0.e()
            java.lang.String r1 = r2.q
            java.lang.Object r0 = r0.get(r1)
            com.tramini.plugin.a.c.c r0 = (com.tramini.plugin.a.c.c) r0
            com.tramini.plugin.a.a.a()
            java.lang.String r1 = com.tramini.plugin.a.a.c()
            if (r0 == 0) goto L21
            java.lang.String r1 = r0.a
        L21:
            return r1
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Encoding"
            java.lang.String r2 = "gzip"
            r0.put(r1, r2)
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json;charset=utf-8"
            r0.put(r1, r2)
            return r0
    }

    @Override
    protected final byte[] d() {
            r1 = this;
            java.lang.String r0 = r1.f()
            byte[] r0 = b(r0)
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r1 = this;
            org.json.JSONObject r0 = r1.r
            if (r0 != 0) goto L8
            org.json.JSONObject r0 = super.e()
        L8:
            return r0
    }

    @Override
    protected final java.lang.String f() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = r5.e()
            java.lang.String r2 = "ds_pl"
            java.lang.String r3 = "3"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L10
        L10:
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tramini.plugin.a.g.c.b(r1)
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            org.json.JSONObject r3 = r5.s
            r2.put(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tramini.plugin.a.g.c.b(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "d_version=1.0&dt="
            r3.<init>(r4)
            r3.append(r2)
            java.lang.String r4 = "&cm="
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.String r3 = com.tramini.plugin.a.g.f.a(r3)
            java.lang.String r4 = "cm"
            r0.put(r4, r1)     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "dt"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "d_version"
            java.lang.String r2 = "1.0"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "d_sign"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L62
            java.lang.String r1 = "pl_c"
            java.lang.String r2 = "4"
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L62
            goto L66
        L62:
            r1 = move-exception
            r1.printStackTrace()
        L66:
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final boolean g() {
            r1 = this;
            r0 = 0
            return r0
    }
}

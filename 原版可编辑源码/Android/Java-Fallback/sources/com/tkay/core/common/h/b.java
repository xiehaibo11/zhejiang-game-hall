package com.tkay.core.common.h;

public final class b extends com.tkay.core.common.h.a {
    android.content.Context a;
    int b;
    java.lang.String c;
    java.lang.String d;
    java.util.List<java.lang.String> e;
    int f;
    boolean g;

    public b(android.content.Context r2, int r3, java.util.List<java.lang.String> r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.g = r0
            r1.a = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.o()
            r1.c = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.p()
            r1.d = r2
            r1.e = r4
            int r2 = r4.size()
            r1.b = r2
            r1.f = r3
            return
    }

    private static java.lang.String b(java.lang.String r1) {
            java.lang.String r0 = "utf-8"
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r1
        L7:
            r1 = 0
            return r1
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
            int r1 = r0.b
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            return r1
    }

    @Override
    public final void a(int r2, com.tkay.core.common.h.k r3) {
            r1 = this;
            java.lang.String r0 = r1.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            if (r3 == 0) goto L15
            int r0 = r1.b
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r3.onLoadFinish(r2, r0)
        L15:
            return
        L16:
            super.a(r2, r3)
            return
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r11) {
            r10 = this;
            boolean r11 = r10.g
            if (r11 == 0) goto L45
            org.json.JSONObject r11 = new org.json.JSONObject
            r11.<init>()
            java.util.Map r0 = r10.c()
            if (r0 == 0) goto L2b
            java.util.Set r1 = r0.keySet()     // Catch: java.lang.Exception -> L2b
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Exception -> L2b
        L17:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Exception -> L2b
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Exception -> L2b
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L2b
            java.lang.Object r3 = r0.get(r2)     // Catch: java.lang.Exception -> L2b
            r11.put(r2, r3)     // Catch: java.lang.Exception -> L2b
            goto L17
        L2b:
            java.lang.String r7 = r11.toString()
            java.lang.String r8 = r10.g()
            java.lang.String r6 = r10.b()
            r11 = 1001(0x3e9, float:1.403E-42)
            java.lang.String r9 = com.tkay.core.common.f.n.a(r11)
            com.tkay.core.common.u r4 = com.tkay.core.common.u.a()
            r5 = 1
            r4.a(r5, r6, r7, r8, r9)
        L45:
            return
    }

    @Override
    protected final boolean a(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r1 = this;
            com.tkay.core.common.i.a()
            java.lang.String r0 = com.tkay.core.common.i.k()
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
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
            java.lang.String r0 = r1.g()
            byte[] r0 = c(r0)
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r6 = this;
            org.json.JSONObject r0 = super.e()
            if (r0 == 0) goto L8b
            java.lang.String r1 = "app_id"
            java.lang.String r2 = r6.c     // Catch: java.lang.Exception -> L8b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L8b
            java.lang.String r1 = "nw_ver"
            org.json.JSONObject r2 = com.tkay.core.common.l.d.h()     // Catch: java.lang.Exception -> L8b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L8b
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L8b
            java.util.Map r1 = r1.l()     // Catch: java.lang.Exception -> L8b
            if (r1 == 0) goto L54
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L54
            if (r2 <= 0) goto L54
            if (r1 == 0) goto L54
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L54
            r2.<init>()     // Catch: java.lang.Throwable -> L54
            java.util.Set r3 = r1.keySet()     // Catch: java.lang.Throwable -> L54
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L54
        L35:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L54
            if (r4 == 0) goto L4f
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L54
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L54
            java.lang.Object r5 = r1.get(r4)     // Catch: java.lang.Throwable -> L54
            if (r5 == 0) goto L35
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L54
            r2.put(r4, r5)     // Catch: java.lang.Throwable -> L54
            goto L35
        L4f:
            java.lang.String r1 = "custom"
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L54
        L54:
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L8b
            r1.<init>()     // Catch: java.lang.Exception -> L8b
            java.util.List<java.lang.String> r2 = r6.e     // Catch: java.lang.Exception -> L8b
            if (r2 == 0) goto L86
            java.util.List<java.lang.String> r2 = r6.e     // Catch: java.lang.Exception -> L8b
            int r2 = r2.size()     // Catch: java.lang.Exception -> L8b
            if (r2 <= 0) goto L86
            java.util.List<java.lang.String> r2 = r6.e     // Catch: java.lang.Exception -> L8b
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L8b
        L6b:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L8b
            if (r3 == 0) goto L86
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L8b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L8b
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L8b
            if (r4 != 0) goto L6b
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L8b
            r4.<init>(r3)     // Catch: java.lang.Exception -> L8b
            r1.put(r4)     // Catch: java.lang.Exception -> L8b
            goto L6b
        L86:
            java.lang.String r2 = "data"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L8b
        L8b:
            return r0
    }

    @Override
    protected final org.json.JSONObject f() {
            r3 = this;
            org.json.JSONObject r0 = super.f()
            if (r0 == 0) goto Ld
            java.lang.String r1 = "tcp_tk_da_type"
            int r2 = r3.f     // Catch: java.lang.Exception -> Ld
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Ld
        Ld:
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            android.content.Context r0 = r1.a
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    protected final java.lang.String k() {
            r1 = this;
            java.lang.String r0 = "1.0"
            return r0
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.Object> l() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final int m() {
            r1 = this;
            r0 = 4
            return r0
    }

    @Override
    protected final boolean o() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final void p() {
            r1 = this;
            r0 = 1
            r1.g = r0
            return
    }
}

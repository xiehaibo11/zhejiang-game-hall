package com.tkay.basead.g;

public final class a extends com.tkay.core.common.h.a {
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    int d;
    int e;
    java.lang.String f;
    java.lang.String g;

    public a(com.tkay.core.common.f.i r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.a
            r1.a = r0
            java.lang.String r0 = r2.d
            r1.b = r0
            java.lang.String r0 = r2.b
            r1.c = r0
            int r0 = r2.h
            r1.d = r0
            int r0 = r2.i
            r1.e = r0
            java.lang.String r0 = r2.k
            r1.f = r0
            java.lang.String r2 = r2.l
            r1.g = r2
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
            return r1
    }

    @Override
    protected final void a(int r6, java.lang.Object r7) {
            r5 = this;
            java.lang.String r0 = "4001"
            java.lang.String r1 = "Return Empty Ad."
            java.lang.String r2 = ""
            if (r7 != 0) goto L12
            r7 = -10001(0xffffffffffffd8ef, float:NaN)
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r2, r2)
            r5.a(r6, r7, r1, r0)
            return
        L12:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Throwable -> L39
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L39
            java.lang.String r4 = "data"
            java.lang.String r3 = r3.optString(r4)     // Catch: java.lang.Throwable -> L39
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L35
            r3 = -10002(0xffffffffffffd8ee, float:NaN)
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Throwable -> L39
            com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r2, r4)     // Catch: java.lang.Throwable -> L39
            r5.a(r6, r3, r1, r4)     // Catch: java.lang.Throwable -> L39
            return
        L35:
            super.a(r6, r7)
            return
        L39:
            r3 = -99999(0xfffffffffffe7961, float:NaN)
            if (r7 == 0) goto L43
            java.lang.String r7 = r7.toString()
            goto L45
        L43:
            java.lang.String r7 = "Adx Service Error."
        L45:
            com.tkay.core.api.AdError r7 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r2, r7)
            r5.a(r6, r3, r1, r7)
            return
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
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
            java.lang.String r0 = r1.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.g
            return r0
        Lb:
            com.tkay.core.common.i.a()
            java.lang.String r0 = com.tkay.core.common.i.f()
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
            r2 = this;
            java.lang.String r0 = r2.g()     // Catch: java.lang.Exception -> Lb
            java.lang.String r1 = "utf-8"
            byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Exception -> Lb
            return r0
        Lb:
            java.lang.String r0 = r2.g()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r4 = this;
            org.json.JSONObject r0 = super.e()
            java.lang.String r1 = "app_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r2 = r2.o()     // Catch: java.lang.Exception -> L9e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "pl_id"
            java.lang.String r2 = r4.c     // Catch: java.lang.Exception -> L9e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "session_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r3 = r4.c     // Catch: java.lang.Exception -> L9e
            java.lang.String r2 = r2.g(r3)     // Catch: java.lang.Exception -> L9e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "t_g_id"
            int r2 = r4.d     // Catch: java.lang.Exception -> L9e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = "gro_id"
            int r2 = r4.e     // Catch: java.lang.Exception -> L9e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L9e
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = r1.x()     // Catch: java.lang.Exception -> L9e
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L9e
            if (r2 != 0) goto L48
            java.lang.String r2 = "sy_id"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9e
        L48:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = r1.y()     // Catch: java.lang.Exception -> L9e
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L9e
            java.lang.String r3 = "bk_id"
            if (r2 != 0) goto L5c
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L9e
            goto L76
        L5c:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r2 = r2.w()     // Catch: java.lang.Exception -> L9e
            r1.j(r2)     // Catch: java.lang.Exception -> L9e
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            java.lang.String r1 = r1.w()     // Catch: java.lang.Exception -> L9e
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L9e
        L76:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            com.tkay.core.api.IExHandler r1 = r1.b()     // Catch: java.lang.Exception -> L9e
            if (r1 == 0) goto L91
            java.lang.String r1 = "deny"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> L9e
            java.lang.String r2 = com.tkay.core.common.l.d.o(r2)     // Catch: java.lang.Exception -> L9e
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L9e
        L91:
            java.lang.String r1 = r4.c     // Catch: java.lang.Exception -> L9e
            org.json.JSONObject r1 = com.tkay.core.common.h.c.a(r1)     // Catch: java.lang.Exception -> L9e
            if (r1 == 0) goto L9e
            java.lang.String r2 = "customs"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L9e
        L9e:
            return r0
    }

    @Override
    protected final org.json.JSONObject f() {
            r3 = this;
            org.json.JSONObject r0 = super.f()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> L17
            com.tkay.core.api.IExHandler r1 = r1.b()     // Catch: org.json.JSONException -> L17
            if (r1 == 0) goto L17
            java.lang.String r1 = "btts"
            java.lang.String r2 = com.tkay.core.common.l.d.g()     // Catch: org.json.JSONException -> L17
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L17
        L17:
            return r0
    }

    @Override
    protected final java.lang.String g() {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.json.JSONObject r1 = r4.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            org.json.JSONObject r2 = r4.f()
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            java.lang.String r3 = "p"
            r0.put(r3, r1)
            java.lang.String r1 = "p2"
            r0.put(r1, r2)
            java.lang.String r1 = r4.b
            java.lang.String r2 = "request_id"
            r0.put(r2, r1)
            java.lang.String r1 = r4.a
            java.lang.String r2 = "bid_id"
            r0.put(r2, r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.lang.String k() {
            r1 = this;
            r0 = 0
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
            r0 = 2
            return r0
    }
}

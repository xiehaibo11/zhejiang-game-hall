package com.tkay.core.common.h;

public class d extends com.tkay.core.common.h.a {
    public static final java.lang.String a = "custom";
    private static final java.lang.String e = null;
    long b;
    long c;
    java.util.Map<java.lang.String, java.lang.Object> d;
    private java.lang.String f;
    private java.lang.String g;
    private android.content.Context h;

    static {
            java.lang.Class<com.tkay.core.common.h.d> r0 = com.tkay.core.common.h.d.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.common.h.d.e = r0
            return
    }

    public d(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.f = r2
            r0.g = r3
            r0.h = r1
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.util.Map r1 = r1.l()
            r0.d = r1
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r11) {
            r10 = this;
            java.lang.String r11 = r11.trim()
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d
            r0.<init>(r11)     // Catch: java.lang.Exception -> L1d
            java.util.Map<java.lang.String, java.lang.Object> r1 = r10.d     // Catch: java.lang.Exception -> L1d
            if (r1 == 0) goto L19
            java.lang.String r1 = "custom"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1d
            java.util.Map<java.lang.String, java.lang.Object> r3 = r10.d     // Catch: java.lang.Exception -> L1d
            r2.<init>(r3)     // Catch: java.lang.Exception -> L1d
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1d
        L19:
            java.lang.String r11 = r0.toString()     // Catch: java.lang.Exception -> L1d
        L1d:
            r1 = 0
            long r2 = r10.b
            long r4 = java.lang.System.currentTimeMillis()
            long r6 = android.os.SystemClock.elapsedRealtime()
            long r8 = r10.c
            long r6 = r6 - r8
            java.lang.String r0 = "app"
            com.tkay.core.common.k.c.a(r0, r1, r2, r4, r6)
            return r11
    }

    @Override
    public final void a(int r3, com.tkay.core.common.h.k r4) {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.b = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.c = r0
            super.a(r3, r4)
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
            com.tkay.core.common.i.a()
            java.lang.String r0 = com.tkay.core.common.i.b()
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r8) {
            r7 = this;
            java.lang.String r1 = r8.getPlatformCode()
            java.lang.String r2 = r8.getPlatformMSG()
            java.lang.String r3 = r7.b()
            java.lang.String r0 = "app"
            java.lang.String r4 = ""
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            com.tkay.core.common.k.c.a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r3 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Accept-Encoding"
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
            java.lang.String r2 = r4.f     // Catch: org.json.JSONException -> Lb6
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb6
            java.lang.String r1 = "nw_ver"
            org.json.JSONObject r2 = com.tkay.core.common.l.d.h()     // Catch: org.json.JSONException -> Lb6
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb6
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            java.lang.String r1 = r1.x()     // Catch: org.json.JSONException -> Lb6
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> Lb6
            if (r2 != 0) goto L27
            java.lang.String r2 = "sy_id"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> Lb6
        L27:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            java.lang.String r1 = r1.y()     // Catch: org.json.JSONException -> Lb6
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> Lb6
            java.lang.String r3 = "bk_id"
            if (r2 != 0) goto L3b
            r0.put(r3, r1)     // Catch: org.json.JSONException -> Lb6
            goto L55
        L3b:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            java.lang.String r2 = r2.w()     // Catch: org.json.JSONException -> Lb6
            r1.j(r2)     // Catch: org.json.JSONException -> Lb6
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            java.lang.String r1 = r1.w()     // Catch: org.json.JSONException -> Lb6
            r0.put(r3, r1)     // Catch: org.json.JSONException -> Lb6
        L55:
            org.json.JSONObject r1 = com.tkay.core.common.h.c.b()     // Catch: org.json.JSONException -> Lb6
            if (r1 == 0) goto L60
            java.lang.String r2 = "custom"
            r0.put(r2, r1)     // Catch: org.json.JSONException -> Lb6
        L60:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            com.tkay.core.api.IExHandler r1 = r1.b()     // Catch: org.json.JSONException -> Lb6
            if (r1 == 0) goto L7b
            java.lang.String r1 = "deny"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            android.content.Context r2 = r2.f()     // Catch: org.json.JSONException -> Lb6
            java.lang.String r2 = com.tkay.core.common.l.d.o(r2)     // Catch: org.json.JSONException -> Lb6
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb6
        L7b:
            java.lang.String r1 = "rc"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            boolean r2 = r2.G()     // Catch: org.json.JSONException -> Lb6
            r3 = 1
            if (r2 == 0) goto L8a
            r2 = r3
            goto L8b
        L8a:
            r2 = 2
        L8b:
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb6
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lb6
            boolean r1 = r1.u()     // Catch: org.json.JSONException -> Lb6
            if (r1 == 0) goto L9d
            java.lang.String r1 = "is_test"
            r0.put(r1, r3)     // Catch: org.json.JSONException -> Lb6
        L9d:
            java.lang.String r1 = "al_it_apil"
            com.tkay.core.common.n r2 = com.tkay.core.common.n.a()     // Catch: org.json.JSONException -> Lb6
            org.json.JSONArray r2 = r2.c()     // Catch: org.json.JSONException -> Lb6
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb6
            java.lang.String r1 = "pil_offset"
            com.tkay.core.common.n.a()     // Catch: org.json.JSONException -> Lb6
            int r2 = com.tkay.core.common.n.b()     // Catch: org.json.JSONException -> Lb6
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb6
        Lb6:
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
    protected final java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            android.content.Context r0 = r1.h
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.g
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
    protected int m() {
            r1 = this;
            r0 = 11
            return r0
    }

    @Override
    protected final boolean n() {
            r1 = this;
            r0 = 1
            return r0
    }
}

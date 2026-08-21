package com.tkay.core.b.a;

public final class a extends com.tkay.core.common.h.a {
    public static final int a = 0;
    public static final int b = 1;
    public static final java.lang.String c = "ex_pkg";
    private final java.lang.String A;
    private final java.lang.String B;
    private final java.lang.String C;
    private final java.lang.String D;
    java.lang.String d;
    java.lang.String e;
    java.lang.String f;
    java.lang.String g;
    java.lang.String h;
    java.lang.String i;
    java.lang.String j;
    int k;
    int l;
    int p;
    java.lang.String q;
    java.lang.String r;
    java.lang.String s;
    private int t;
    private final java.lang.String u;
    private final java.lang.String v;
    private final java.lang.String w;
    private final java.lang.String x;
    private final java.lang.String y;
    private final java.lang.String z;

    public a(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.util.List<org.json.JSONObject> r5, int r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.t = r0
            java.lang.String r0 = "hb_list"
            r1.u = r0
            java.lang.String r0 = "request_id"
            r1.v = r0
            java.lang.String r0 = "ch_info"
            r1.w = r0
            java.lang.String r0 = "wf"
            r1.x = r0
            java.lang.String r0 = "np"
            r1.y = r0
            java.lang.String r0 = "hb_size"
            r1.z = r0
            java.lang.String r0 = "last_wf"
            r1.A = r0
            java.lang.String r0 = "co"
            r1.B = r0
            java.lang.String r0 = "adx_ext"
            r1.C = r0
            java.lang.String r0 = "debug"
            r1.D = r0
            r1.d = r4
            r1.g = r2
            r1.h = r3
            r1.t = r6
            org.json.JSONArray r2 = new org.json.JSONArray
            r2.<init>()
            java.util.Iterator r4 = r5.iterator()
        L3f:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L4f
            java.lang.Object r5 = r4.next()
            org.json.JSONObject r5 = (org.json.JSONObject) r5
            r2.put(r5)
            goto L3f
        L4f:
            java.lang.String r2 = r2.toString()
            byte[] r2 = r2.getBytes()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            r1.e = r2
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.core.c.e r2 = com.tkay.core.c.e.a(r2)
            com.tkay.core.c.d r2 = r2.a(r3)
            if (r2 == 0) goto L7b
            int r3 = r2.P()
            r1.k = r3
            int r2 = r2.af()
            r1.l = r2
        L7b:
            return
    }

    private void a(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            if (r2 == 0) goto Lc
            byte[] r2 = r2.getBytes()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            r1.f = r2
        Lc:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r0 = "[]"
            if (r2 != 0) goto L24
            boolean r2 = android.text.TextUtils.equals(r0, r3)
            if (r2 != 0) goto L24
            byte[] r2 = r3.getBytes()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            r1.i = r2
        L24:
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 != 0) goto L3a
            boolean r2 = android.text.TextUtils.equals(r0, r4)
            if (r2 != 0) goto L3a
            byte[] r2 = r4.getBytes()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            r1.j = r2
        L3a:
            return
    }

    private void d(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r2) {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L6
            r0.<init>(r2)     // Catch: java.lang.Exception -> L6
            return r0
        L6:
            r2 = 0
            return r2
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    public final void a(com.tkay.core.b.a.b r3) {
            r2 = this;
            java.lang.String r0 = r3.a
            if (r0 == 0) goto L10
            java.lang.String r0 = r3.a
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.tkay.core.common.l.c.a(r0)
            r2.f = r0
        L10:
            int r0 = r3.f
            r2.p = r0
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "[]"
            if (r0 != 0) goto L32
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 != 0) goto L32
            java.lang.String r0 = r3.b
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.tkay.core.common.l.c.a(r0)
            r2.i = r0
        L32:
            java.lang.String r0 = r3.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4e
            java.lang.String r0 = r3.c
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 != 0) goto L4e
            java.lang.String r0 = r3.c
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.tkay.core.common.l.c.a(r0)
            r2.j = r0
        L4e:
            java.lang.String r0 = r3.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6a
            java.lang.String r0 = r3.d
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 != 0) goto L6a
            java.lang.String r0 = r3.d
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.tkay.core.common.l.c.a(r0)
            r2.q = r0
        L6a:
            java.lang.String r0 = r3.e
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L86
            java.lang.String r0 = r3.e
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 != 0) goto L86
            java.lang.String r0 = r3.e
            byte[] r0 = r0.getBytes()
            java.lang.String r0 = com.tkay.core.common.l.c.a(r0)
            r2.r = r0
        L86:
            java.lang.String r0 = ""
            r2.s = r0
            java.lang.String r0 = r3.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L9e
            java.lang.String r3 = r3.g
            byte[] r3 = r3.getBytes()
            java.lang.String r3 = com.tkay.core.common.l.c.a(r3)
            r2.s = r3
        L9e:
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
            int r1 = r3.t
            if (r1 != 0) goto L10
            java.lang.String r1 = "Accept-Encoding"
            java.lang.String r2 = "gzip"
            r0.put(r1, r2)
        L10:
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json;charset=utf-8"
            r0.put(r1, r2)
            return r0
    }

    @Override
    protected final byte[] d() {
            r1 = this;
            java.lang.String r0 = r1.g()
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    protected final org.json.JSONObject e() {
            r4 = this;
            org.json.JSONObject r0 = super.e()
            java.lang.String r1 = "app_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = r2.o()     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = "pl_id"
            java.lang.String r2 = r4.h     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = "session_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r3 = r4.h     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = r2.g(r3)     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = "t_g_id"
            int r2 = r4.k     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = "gro_id"
            int r2 = r4.l     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = r1.x()     // Catch: java.lang.Exception -> Lf9
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lf9
            if (r2 != 0) goto L48
            java.lang.String r2 = "sy_id"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf9
        L48:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = r1.y()     // Catch: java.lang.Exception -> Lf9
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r3 = "bk_id"
            if (r2 != 0) goto L5c
            r0.put(r3, r1)     // Catch: java.lang.Exception -> Lf9
            goto L76
        L5c:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = r2.w()     // Catch: java.lang.Exception -> Lf9
            r1.j(r2)     // Catch: java.lang.Exception -> Lf9
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = r1.w()     // Catch: java.lang.Exception -> Lf9
            r0.put(r3, r1)     // Catch: java.lang.Exception -> Lf9
        L76:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            com.tkay.core.api.IExHandler r1 = r1.b()     // Catch: java.lang.Exception -> Lf9
            if (r1 == 0) goto L91
            java.lang.String r1 = "deny"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = com.tkay.core.common.l.d.o(r2)     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
        L91:
            int r1 = r4.t     // Catch: java.lang.Exception -> Lf9
            if (r1 != 0) goto Lae
            java.lang.String r1 = "misk_spt"
            com.tkay.core.common.p r2 = com.tkay.core.common.p.a()     // Catch: java.lang.Exception -> Lf9
            int r2 = r2.c()     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = "misk_pt_det"
            com.tkay.core.common.p.a()     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = com.tkay.core.common.p.b()     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
        Lae:
            java.lang.String r1 = "al_it_apil"
            com.tkay.core.common.n r2 = com.tkay.core.common.n.a()     // Catch: java.lang.Exception -> Lf9
            org.json.JSONArray r2 = r2.c()     // Catch: java.lang.Exception -> Lf9
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r1 = r4.h     // Catch: java.lang.Exception -> Lf9
            org.json.JSONObject r1 = com.tkay.core.common.h.c.a(r1)     // Catch: java.lang.Exception -> Lf9
            if (r1 == 0) goto Lc8
            java.lang.String r2 = "customs"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf9
        Lc8:
            com.tkay.core.common.h.c.a(r0)     // Catch: java.lang.Exception -> Lf9
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lf9
            android.content.Context r1 = r1.f()     // Catch: java.lang.Exception -> Lf9
            com.tkay.core.c.e r1 = com.tkay.core.c.e.a(r1)     // Catch: java.lang.Exception -> Lf9
            java.lang.String r2 = r4.h     // Catch: java.lang.Exception -> Lf9
            if (r0 == 0) goto Lf9
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf9
            if (r3 == 0) goto Le2
            goto Lf9
        Le2:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lf9
            if (r3 != 0) goto Lf9
            com.tkay.core.c.d r1 = r1.b(r2)     // Catch: java.lang.Exception -> Lf9
            if (r1 == 0) goto Lf9
            org.json.JSONObject r1 = r1.ax()     // Catch: java.lang.Exception -> Lf9
            if (r1 == 0) goto Lf9
            java.lang.String r2 = "p_c"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lf9
        Lf9:
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
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.json.JSONObject r1 = r5.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            org.json.JSONObject r2 = r5.f()
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            java.lang.String r3 = "p"
            r0.put(r3, r1)
            java.lang.String r1 = "p2"
            r0.put(r1, r2)
            java.lang.String r1 = r5.e
            java.lang.String r2 = "hb_list"
            r0.put(r2, r1)
            java.lang.String r1 = r5.d
            java.lang.String r2 = "request_id"
            r0.put(r2, r1)
            int r1 = r5.p
            if (r1 <= 0) goto L42
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "hb_size"
            r0.put(r2, r1)
        L42:
            int r1 = r5.t
            if (r1 != 0) goto Ld5
            java.lang.String r1 = r5.f
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L55
            java.lang.String r1 = r5.f
            java.lang.String r2 = "ch_info"
            r0.put(r2, r1)
        L55:
            java.lang.String r1 = r5.i
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L64
            java.lang.String r1 = r5.i
            java.lang.String r2 = "wf"
            r0.put(r2, r1)
        L64:
            java.lang.String r1 = r5.j
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L73
            java.lang.String r1 = r5.j
            java.lang.String r2 = "np"
            r0.put(r2, r1)
        L73:
            java.lang.String r1 = r5.q
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L82
            java.lang.String r1 = r5.q
            java.lang.String r2 = "last_wf"
            r0.put(r2, r1)
        L82:
            java.lang.String r1 = r5.r
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L91
            java.lang.String r1 = r5.r
            java.lang.String r2 = "co"
            r0.put(r2, r1)
        L91:
            java.lang.String r1 = r5.s
            java.lang.String r2 = "adx_ext"
            r0.put(r2, r1)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            org.json.JSONArray r1 = r1.k()
            if (r1 == 0) goto Lb7
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            org.json.JSONArray r1 = r1.k()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            java.lang.String r2 = "ex_pkg"
            r0.put(r2, r1)
        Lb7:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            boolean r1 = r1.z()
            if (r1 == 0) goto Ld5
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            boolean r1 = r1.t()
            if (r1 == 0) goto Ld5
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "debug"
            r0.put(r2, r1)
        Ld5:
            java.util.Set r1 = r0.keySet()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
        Le2:
            boolean r3 = r1.hasNext()     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
            if (r3 == 0) goto Lf6
            java.lang.Object r3 = r1.next()     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
            java.lang.Object r4 = r0.get(r3)     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
            r2.put(r3, r4)     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
            goto Le2
        Lf6:
            java.lang.String r0 = r2.toString()     // Catch: java.lang.OutOfMemoryError -> Lfb java.lang.Exception -> Lfe
            return r0
        Lfb:
            java.lang.System.gc()
        Lfe:
            r0 = 0
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
            r0 = 6
            return r0
    }
}

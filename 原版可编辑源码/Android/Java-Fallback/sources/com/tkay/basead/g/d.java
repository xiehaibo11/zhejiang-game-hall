package com.tkay.basead.g;

public final class d extends com.tkay.core.common.h.a {
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    int d;
    int e;
    int f;
    int g;
    java.lang.String[] h;
    int i;
    int j;
    java.lang.String k;
    java.lang.String l;

    public d(com.tkay.core.common.f.i r2, int r3, int r4, java.lang.String[] r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "OnlineOfferLoader"
            r1.l = r0
            java.lang.String r0 = r2.d
            r1.a = r0
            java.lang.String r0 = r2.b
            r1.b = r0
            java.lang.String r0 = r2.c
            r1.c = r0
            int r0 = r2.e
            r1.i = r0
            r1.f = r3
            r1.g = r4
            r1.h = r5
            int r3 = r2.h
            r1.d = r3
            int r3 = r2.i
            r1.e = r3
            int r2 = r2.j
            r1.j = r2
            r1.k = r6
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
            java.lang.String r1 = ""
            if (r7 != 0) goto L12
            r7 = -10001(0xffffffffffffd8ef, float:NaN)
            com.tkay.core.api.AdError r0 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r1)
            java.lang.String r1 = "Return Empty Ad."
            r5.a(r6, r7, r1, r0)
            return
        L12:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L3d
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> L3d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r3 = "data"
            java.lang.String r2 = r2.optString(r3)     // Catch: java.lang.Throwable -> L3d
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L39
            r2 = -10002(0xffffffffffffd8ee, float:NaN)
            java.lang.String r3 = r7.toString()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Throwable -> L3d
            com.tkay.core.api.AdError r4 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r4)     // Catch: java.lang.Throwable -> L3d
            r5.a(r6, r2, r3, r4)     // Catch: java.lang.Throwable -> L3d
            return
        L39:
            super.a(r6, r7)
            return
        L3d:
            r2 = move-exception
            r3 = -99999(0xfffffffffffe7961, float:NaN)
            if (r7 == 0) goto L48
            java.lang.String r2 = r7.toString()
            goto L4c
        L48:
            java.lang.String r2 = r2.getMessage()
        L4c:
            if (r7 == 0) goto L53
            java.lang.String r7 = r7.toString()
            goto L55
        L53:
            java.lang.String r7 = "Online Api Service Error."
        L55:
            com.tkay.core.api.AdError r7 = com.tkay.core.api.ErrorCode.getErrorCode(r0, r1, r7)
            r5.a(r6, r3, r2, r7)
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
            java.lang.String r0 = com.tkay.core.common.i.h()
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
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.o()     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = "pl_id"
            java.lang.String r2 = r4.b     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = "session_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = r4.b     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.g(r3)     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = "t_g_id"
            int r2 = r4.d     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = "gro_id"
            int r2 = r4.e     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.x()     // Catch: java.lang.Exception -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lae
            if (r2 != 0) goto L48
            java.lang.String r2 = "sy_id"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lae
        L48:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.y()     // Catch: java.lang.Exception -> Lae
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lae
            java.lang.String r3 = "bk_id"
            if (r2 != 0) goto L5c
            r0.put(r3, r1)     // Catch: java.lang.Exception -> Lae
            goto L76
        L5c:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = r2.w()     // Catch: java.lang.Exception -> Lae
            r1.j(r2)     // Catch: java.lang.Exception -> Lae
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r1.w()     // Catch: java.lang.Exception -> Lae
            r0.put(r3, r1)     // Catch: java.lang.Exception -> Lae
        L76:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            com.tkay.core.api.IExHandler r1 = r1.b()     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto L91
            java.lang.String r1 = "deny"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> Lae
            android.content.Context r2 = r2.f()     // Catch: java.lang.Exception -> Lae
            java.lang.String r2 = com.tkay.core.common.l.d.o(r2)     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
        L91:
            java.lang.String r1 = "al_it_apil"
            com.tkay.core.common.n r2 = com.tkay.core.common.n.a()     // Catch: java.lang.Exception -> Lae
            org.json.JSONArray r2 = r2.c()     // Catch: java.lang.Exception -> Lae
            r0.put(r1, r2)     // Catch: java.lang.Exception -> Lae
            java.lang.String r1 = r4.b     // Catch: java.lang.Exception -> Lae
            org.json.JSONObject r1 = com.tkay.core.common.h.c.a(r1)     // Catch: java.lang.Exception -> Lae
            if (r1 == 0) goto Lab
            java.lang.String r2 = "customs"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> Lae
        Lab:
            com.tkay.core.common.h.c.a(r0)     // Catch: java.lang.Exception -> Lae
        Lae:
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
            r8 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            org.json.JSONObject r1 = r8.e()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            org.json.JSONObject r2 = r8.f()
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = com.tkay.core.common.l.c.a(r2)
            java.lang.String r3 = "p"
            r0.put(r3, r1)
            java.lang.String r1 = "p2"
            r0.put(r1, r2)
            java.lang.String r1 = r8.a
            java.lang.String r2 = "request_id"
            r0.put(r2, r1)
            java.lang.String r1 = r8.c
            int r1 = java.lang.Integer.parseInt(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "ad_source_id"
            r0.put(r2, r1)
            int r1 = r8.i
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "ad_num"
            r0.put(r2, r1)
            java.lang.String[] r1 = r8.h
            r2 = 0
            if (r1 == 0) goto L68
            int r1 = r1.length
            if (r1 <= 0) goto L68
            org.json.JSONArray r1 = new org.json.JSONArray
            r1.<init>()
            java.lang.String[] r3 = r8.h
            int r4 = r3.length
            r5 = r2
        L59:
            if (r5 >= r4) goto L63
            r6 = r3[r5]
            r1.put(r6)
            int r5 = r5 + 1
            goto L59
        L63:
            java.lang.String r3 = "exclude_offers"
            r0.put(r3, r1)
        L68:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            org.json.JSONArray r1 = r1.k()
            if (r1 == 0) goto L87
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            org.json.JSONArray r1 = r1.k()
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.tkay.core.common.l.c.a(r1)
            java.lang.String r3 = "ex_pkg"
            r0.put(r3, r1)
        L87:
            int r1 = r8.f
            if (r1 <= 0) goto La3
            int r3 = r8.g
            if (r3 <= 0) goto La3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "ad_width"
            r0.put(r3, r1)
            int r1 = r8.g
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "ad_height"
            r0.put(r3, r1)
        La3:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>(r0)
            int r0 = r8.j     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Lf7
            r3 = -1
            int r4 = r0.hashCode()     // Catch: java.lang.Throwable -> Lf7
            r5 = 3
            r6 = 2
            r7 = 1
            switch(r4) {
                case 49: goto Ld7;
                case 50: goto Lce;
                case 51: goto Lc4;
                case 52: goto Lba;
                default: goto Lb9;
            }     // Catch: java.lang.Throwable -> Lf7
        Lb9:
            goto Le1
        Lba:
            java.lang.String r2 = "4"
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> Lf7
            if (r0 == 0) goto Le1
            r2 = r7
            goto Le2
        Lc4:
            java.lang.String r2 = "3"
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> Lf7
            if (r0 == 0) goto Le1
            r2 = r6
            goto Le2
        Lce:
            java.lang.String r4 = "2"
            boolean r0 = r0.equals(r4)     // Catch: java.lang.Throwable -> Lf7
            if (r0 == 0) goto Le1
            goto Le2
        Ld7:
            java.lang.String r2 = "1"
            boolean r0 = r0.equals(r2)     // Catch: java.lang.Throwable -> Lf7
            if (r0 == 0) goto Le1
            r2 = r5
            goto Le2
        Le1:
            r2 = r3
        Le2:
            if (r2 == 0) goto Leb
            if (r2 == r7) goto Leb
            if (r2 == r6) goto Leb
            if (r2 == r5) goto Leb
            goto Lf7
        Leb:
            java.lang.String r0 = "adp_accept_type"
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r3 = "[1]"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lf7
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> Lf7
        Lf7:
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

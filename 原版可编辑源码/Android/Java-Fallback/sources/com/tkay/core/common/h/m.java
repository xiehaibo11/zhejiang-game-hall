package com.tkay.core.common.h;

public final class m extends com.tkay.core.common.h.a {
    com.tkay.core.common.f.v a;

    public m(com.tkay.core.common.f.v r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            com.tkay.core.common.f.v r0 = r1.a
            int r0 = r0.b
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    protected final boolean a(int r2) {
            r1 = this;
            r0 = 200(0xc8, float:2.8E-43)
            if (r2 < r0) goto La
            r0 = 300(0x12c, float:4.2E-43)
            if (r2 >= r0) goto La
            r2 = 1
            return r2
        La:
            r2 = 0
            return r2
    }

    @Override
    protected final java.lang.String b() {
            r1 = this;
            com.tkay.core.common.f.v r0 = r1.a
            java.lang.String r0 = r0.d
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r5 = this;
            com.tkay.core.common.f.v r0 = r5.a
            java.lang.String r0 = r0.c
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L26
            r2.<init>(r0)     // Catch: java.lang.Exception -> L26
            java.util.Iterator r0 = r2.keys()     // Catch: java.lang.Exception -> L26
        L12:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Exception -> L26
            if (r3 == 0) goto L26
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = r2.optString(r3)     // Catch: java.lang.Exception -> L26
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L26
            goto L12
        L26:
            return r1
    }

    @Override
    protected final byte[] d() {
            r1 = this;
            r0 = 0
            byte[] r0 = new byte[r0]
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
    protected final boolean o() {
            r1 = this;
            r0 = 1
            return r0
    }
}

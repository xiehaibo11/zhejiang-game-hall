package com.tkay.core.common.h;

public final class j extends com.tkay.core.common.h.a {
    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 2
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

    @Override
    protected final boolean a(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = java.lang.String.valueOf(r0)
            java.lang.String r2 = com.tkay.core.common.l.f.c(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            com.tkay.core.common.i.a()
            java.lang.String r4 = com.tkay.core.common.i.d()
            r3.append(r4)
            java.lang.String r4 = "?t="
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = "&sign="
            r3.append(r0)
            r3.append(r2)
            java.lang.String r0 = r3.toString()
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r1 = this;
            r0 = 0
            return r0
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
    protected final boolean n() {
            r1 = this;
            r0 = 1
            return r0
    }
}

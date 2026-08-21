package com.tkay.basead.g;

public final class c extends com.tkay.core.common.h.a {
    java.lang.String a;
    boolean b;

    public c(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.b = r4
            if (r3 != 0) goto Lc
            java.lang.String r3 = ""
        Lc:
            java.lang.String r4 = "\\{req_id\\}"
            java.lang.String r2 = r2.replaceAll(r4, r3)
            r1.a = r2
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 2
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
    protected final boolean a(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.a
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
            boolean r0 = r3.b
            if (r0 == 0) goto L19
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = com.tkay.core.common.l.d.i()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L18
            java.lang.String r2 = "User-Agent"
            r0.put(r2, r1)
        L18:
            return r0
        L19:
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
    protected final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = ""
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
}

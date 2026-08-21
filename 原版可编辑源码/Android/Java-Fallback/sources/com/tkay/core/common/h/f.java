package com.tkay.core.common.h;

public final class f extends com.tkay.core.common.h.a {
    public static final int e = 1;
    java.lang.String a;
    int b;
    java.lang.String c;
    int d;
    private com.tkay.core.common.f.ao f;

    private f(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.d = r0
            r1.a = r2
            return
    }

    private f(java.lang.String r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.d = r1
            r0.b = r2
            r0.c = r3
            return
    }

    public static com.tkay.core.common.h.f a(java.lang.String r1, int r2, java.lang.String r3) {
            com.tkay.core.common.h.f r0 = new com.tkay.core.common.h.f
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static com.tkay.core.common.h.f b(java.lang.String r1) {
            com.tkay.core.common.h.f r0 = new com.tkay.core.common.h.f
            r0.<init>(r1)
            return r0
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
            int r2 = r1.d
            r0 = 1
            if (r0 != r2) goto L13
            com.tkay.core.common.f.ao r2 = r1.f
            if (r2 == 0) goto L13
            java.lang.String r0 = "200"
            r2.a(r0)
            com.tkay.core.common.f.ao r2 = r1.f
            com.tkay.core.common.k.c.a(r2)
        L13:
            r2 = 0
            return r2
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    public final void a(com.tkay.core.common.f.ao r1) {
            r0 = this;
            r0.f = r1
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
    protected final void b(com.tkay.core.api.AdError r3) {
            r2 = this;
            int r0 = r2.d
            r1 = 1
            if (r1 != r0) goto L2a
            java.lang.String r0 = r3.getCode()
            java.lang.String r1 = "9990"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2a
            com.tkay.core.common.f.ao r0 = r2.f
            if (r0 == 0) goto L2a
            java.lang.String r1 = r3.getPlatformCode()
            r0.a(r1)
            com.tkay.core.common.f.ao r0 = r2.f
            java.lang.String r3 = r3.getPlatformMSG()
            r0.b(r3)
            com.tkay.core.common.f.ao r3 = r2.f
            com.tkay.core.common.k.c.a(r3)
        L2a:
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

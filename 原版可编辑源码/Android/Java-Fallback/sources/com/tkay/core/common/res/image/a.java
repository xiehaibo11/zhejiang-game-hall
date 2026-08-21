package com.tkay.core.common.res.image;

public final class a extends com.tkay.core.common.res.image.b {
    com.tkay.core.common.res.e a;
    com.tkay.core.common.res.image.a.a b;

    public interface a {
        void a(com.tkay.core.common.res.e r1);

        void a(com.tkay.core.common.res.e r1, java.lang.String r2);
    }

    public a(com.tkay.core.common.res.e r2) {
            r1 = this;
            java.lang.String r0 = r2.f
            r1.<init>(r0)
            r1.a = r2
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> a() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final void a(com.tkay.core.common.l.b.b r3) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r1 = 5
            r0.a(r3, r1)
            return
    }

    public final void a(com.tkay.core.common.res.image.a.a r1) {
            r0 = this;
            r0.b = r1
            return
    }

    @Override
    protected final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.core.common.res.image.a$a r2 = r1.b
            if (r2 == 0) goto L9
            com.tkay.core.common.res.e r0 = r1.a
            r2.a(r0, r3)
        L9:
            return
    }

    @Override
    protected final boolean a(java.io.InputStream r4) {
            r3 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)
            com.tkay.core.common.res.e r1 = r3.a
            int r1 = r1.e
            com.tkay.core.common.res.e r2 = r3.a
            java.lang.String r2 = r2.f
            java.lang.String r2 = com.tkay.core.common.l.f.a(r2)
            boolean r4 = r0.a(r1, r2, r4)
            return r4
    }

    @Override
    protected final void b() {
            r0 = this;
            return
    }

    @Override
    protected final void c() {
            r2 = this;
            com.tkay.core.common.res.image.a$a r0 = r2.b
            if (r0 == 0) goto L9
            com.tkay.core.common.res.e r1 = r2.a
            r0.a(r1)
        L9:
            return
    }
}

package com.tkay.basead.f;

public final class g extends com.tkay.basead.f.c {
    com.tkay.basead.e.a a;
    com.tkay.basead.ui.BaseSplashATView k;
    boolean l;


    public g(android.content.Context r2, com.tkay.core.common.f.i r3, java.lang.String r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    @Override
    public final void a(android.app.Activity r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            r0 = this;
            return
    }

    public final void a(android.view.ViewGroup r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.f.g$1 r1 = new com.tkay.basead.f.g$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void a(com.tkay.basead.e.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public final boolean a() {
            r4 = this;
            boolean r0 = r4.d()     // Catch: java.lang.Exception -> L17
            if (r0 == 0) goto L1b
            android.content.Context r0 = r4.c     // Catch: java.lang.Exception -> L17
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a(r0)     // Catch: java.lang.Exception -> L17
            com.tkay.core.common.f.r r1 = r4.g     // Catch: java.lang.Exception -> L17
            com.tkay.core.common.f.i r2 = r4.d     // Catch: java.lang.Exception -> L17
            boolean r3 = r4.f     // Catch: java.lang.Exception -> L17
            boolean r0 = r0.a(r1, r2, r3)     // Catch: java.lang.Exception -> L17
            return r0
        L17:
            r0 = move-exception
            r0.printStackTrace()
        L1b:
            r0 = 0
            return r0
    }

    public final void b() {
            r1 = this;
            r0 = 1
            r1.l = r0
            return
    }

    public final void f() {
            r2 = this;
            r0 = 0
            r2.a = r0
            com.tkay.basead.ui.BaseSplashATView r1 = r2.k
            if (r1 == 0) goto Lc
            r1.destroy()
            r2.k = r0
        Lc:
            return
    }
}

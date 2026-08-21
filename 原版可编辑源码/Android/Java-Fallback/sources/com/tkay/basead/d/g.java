package com.tkay.basead.d;

public final class g extends com.tkay.basead.d.b {
    com.tkay.basead.ui.BaseSplashATView a;
    boolean k;

    final class 1 implements java.lang.Runnable {
        final android.view.ViewGroup a;
        final com.tkay.basead.d.g b;


        1(com.tkay.basead.d.g r1, android.view.ViewGroup r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.core.common.a.g r0 = r0.f
                boolean r0 = r0 instanceof com.tkay.expressad.splash.d.c
                if (r0 == 0) goto L22
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.core.common.a.g r0 = r0.f
                com.tkay.expressad.splash.d.c r0 = (com.tkay.expressad.splash.d.c) r0
                com.tkay.basead.d.g$1$1 r1 = new com.tkay.basead.d.g$1$1
                r1.<init>(r6)
                r0.a(r1)
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.core.common.a.g r0 = r0.f
                com.tkay.expressad.splash.d.c r0 = (com.tkay.expressad.splash.d.c) r0
                android.view.ViewGroup r1 = r6.a
                r0.a(r1)
                return
            L22:
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.core.common.f.z r0 = r0.e
                boolean r0 = r0.g()
                if (r0 == 0) goto L48
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.basead.ui.MraidSplashATView r1 = new com.tkay.basead.ui.MraidSplashATView
                android.view.ViewGroup r2 = r6.a
                android.content.Context r2 = r2.getContext()
                com.tkay.basead.d.g r3 = r6.b
                com.tkay.core.common.f.i r3 = r3.c
                com.tkay.basead.d.g r4 = r6.b
                com.tkay.core.common.f.z r4 = r4.e
                com.tkay.basead.d.g r5 = r6.b
                com.tkay.basead.e.a r5 = r5.h
                r1.<init>(r2, r3, r4, r5)
                r0.a = r1
                goto L8f
            L48:
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.core.common.f.z r0 = r0.e
                com.tkay.basead.d.g r1 = r6.b
                com.tkay.core.common.f.i r1 = r1.c
                com.tkay.core.common.f.j r1 = r1.m
                boolean r0 = com.tkay.basead.ui.BaseSdkSplashATView.isSinglePicture(r0, r1)
                if (r0 == 0) goto L74
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.basead.ui.SinglePictureSplashATView r1 = new com.tkay.basead.ui.SinglePictureSplashATView
                android.view.ViewGroup r2 = r6.a
                android.content.Context r2 = r2.getContext()
                com.tkay.basead.d.g r3 = r6.b
                com.tkay.core.common.f.i r3 = r3.c
                com.tkay.basead.d.g r4 = r6.b
                com.tkay.core.common.f.z r4 = r4.e
                com.tkay.basead.d.g r5 = r6.b
                com.tkay.basead.e.a r5 = r5.h
                r1.<init>(r2, r3, r4, r5)
                r0.a = r1
                goto L8f
            L74:
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.basead.ui.AsseblemSplashATView r1 = new com.tkay.basead.ui.AsseblemSplashATView
                android.view.ViewGroup r2 = r6.a
                android.content.Context r2 = r2.getContext()
                com.tkay.basead.d.g r3 = r6.b
                com.tkay.core.common.f.i r3 = r3.c
                com.tkay.basead.d.g r4 = r6.b
                com.tkay.core.common.f.z r4 = r4.e
                com.tkay.basead.d.g r5 = r6.b
                com.tkay.basead.e.a r5 = r5.h
                r1.<init>(r2, r3, r4, r5)
                r0.a = r1
            L8f:
                com.tkay.basead.d.g r0 = r6.b
                com.tkay.basead.ui.BaseSplashATView r0 = r0.a
                com.tkay.basead.d.g r1 = r6.b
                boolean r1 = r1.k
                r0.setDontCountDown(r1)
                android.view.ViewGroup r0 = r6.a
                com.tkay.basead.d.g r1 = r6.b
                com.tkay.basead.ui.BaseSplashATView r1 = r1.a
                r0.addView(r1)
                return
        }
    }

    public g(android.content.Context r1, com.tkay.basead.d.b.a r2, com.tkay.core.common.f.i r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public final void a() {
            r1 = this;
            r0 = 1
            r1.k = r0
            return
    }

    public final void a(android.view.ViewGroup r3) {
            r2 = this;
            boolean r0 = super.c()
            if (r0 == 0) goto L16
            r0 = 0
            com.tkay.core.common.l.u.a(r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.d.g$1 r1 = new com.tkay.basead.d.g$1
            r1.<init>(r2, r3)
            r0.a(r1)
        L16:
            return
    }

    @Override
    public final void b() {
            r1 = this;
            com.tkay.basead.ui.BaseSplashATView r0 = r1.a
            if (r0 == 0) goto La
            r0.destroy()
            r0 = 0
            r1.a = r0
        La:
            com.tkay.core.common.a.g r0 = r1.f
            if (r0 == 0) goto L1b
            com.tkay.core.common.a.g r0 = r1.f
            boolean r0 = r0 instanceof com.tkay.expressad.splash.d.c
            if (r0 == 0) goto L1b
            com.tkay.core.common.a.g r0 = r1.f
            com.tkay.expressad.splash.d.c r0 = (com.tkay.expressad.splash.d.c) r0
            r0.g()
        L1b:
            return
    }

    public final boolean f() {
            r1 = this;
            com.tkay.core.common.a.g r0 = r1.f
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }
}

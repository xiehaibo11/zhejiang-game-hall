package com.tkay.basead.f;

public class e extends com.tkay.basead.f.c {
    com.tkay.basead.e.a a;
    com.tkay.core.common.l.a.c k;
    com.tkay.basead.a.c l;
    android.view.View m;
    volatile boolean n;
    android.view.View.OnClickListener o;
    com.tkay.basead.a.a p;
    boolean q;
    private final java.lang.String r;


    final class 2 implements com.tkay.basead.a.c.b {
        final int a;
        final com.tkay.basead.f.e b;

        2(com.tkay.basead.f.e r1, int r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r2 = this;
                com.tkay.basead.f.e r0 = r2.b
                com.tkay.basead.e.a r0 = r0.a
                if (r0 == 0) goto Lf
                com.tkay.basead.f.e r0 = r2.b
                com.tkay.basead.e.a r0 = r0.a
                int r1 = r2.a
                r0.onAdClick(r1)
            Lf:
                return
        }

        @Override
        public final void a(boolean r2) {
                r1 = this;
                com.tkay.basead.f.e r0 = r1.b
                com.tkay.basead.e.a r0 = r0.a
                if (r0 == 0) goto Ld
                com.tkay.basead.f.e r0 = r1.b
                com.tkay.basead.e.a r0 = r0.a
                r0.onDeeplinkCallback(r2)
            Ld:
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }
    }

    final class 3 implements com.tkay.basead.a.a.a {
        final com.tkay.basead.f.e a;

        3(com.tkay.basead.f.e r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a(int r2) {
                r1 = this;
                com.tkay.basead.f.e r2 = r1.a
                r0 = 2
                com.tkay.basead.f.e.a(r2, r0)
                return
        }
    }


    public e(android.content.Context r1, com.tkay.core.common.f.i r2, java.lang.String r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.Class r1 = r0.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.r = r1
            com.tkay.basead.f.e$1 r1 = new com.tkay.basead.f.e$1
            r1.<init>(r0)
            r0.o = r1
            r1 = 0
            r0.q = r1
            return
    }

    private void a(int r5) {
            r4 = this;
            r4.o()
            r4.p()
            com.tkay.basead.a.c r0 = r4.l
            if (r0 != 0) goto L17
            com.tkay.basead.a.c r0 = new com.tkay.basead.a.c
            android.content.Context r1 = r4.c
            com.tkay.core.common.f.i r2 = r4.d
            com.tkay.core.common.f.r r3 = r4.g
            r0.<init>(r1, r2, r3)
            r4.l = r0
        L17:
            com.tkay.basead.a.c r0 = r4.l
            boolean r0 = r0.a()
            if (r0 == 0) goto L20
            return
        L20:
            com.tkay.basead.a.c r0 = r4.l
            com.tkay.basead.f.e$2 r1 = new com.tkay.basead.f.e$2
            r1.<init>(r4, r5)
            r0.a(r1)
            com.tkay.basead.a.c r5 = r4.l
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r1 = r4.d
            java.lang.String r1 = r1.d
            java.lang.String r2 = ""
            r0.<init>(r1, r2)
            r5.a(r0)
            return
    }

    private void a(android.view.View r3, android.view.View.OnClickListener r4) {
            r2 = this;
            boolean r0 = r3 instanceof android.view.ViewGroup
            if (r0 == 0) goto L18
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            r0 = 0
        L7:
            int r1 = r3.getChildCount()
            if (r0 >= r1) goto L17
            android.view.View r1 = r3.getChildAt(r0)
            r2.a(r1, r4)
            int r0 = r0 + 1
            goto L7
        L17:
            return
        L18:
            r3.setOnClickListener(r4)
            return
    }

    static void a(com.tkay.basead.f.e r0) {
            r0.p()
            return
    }

    static void a(com.tkay.basead.f.e r4, int r5) {
            r4.o()
            r4.p()
            com.tkay.basead.a.c r0 = r4.l
            if (r0 != 0) goto L17
            com.tkay.basead.a.c r0 = new com.tkay.basead.a.c
            android.content.Context r1 = r4.c
            com.tkay.core.common.f.i r2 = r4.d
            com.tkay.core.common.f.r r3 = r4.g
            r0.<init>(r1, r2, r3)
            r4.l = r0
        L17:
            com.tkay.basead.a.c r0 = r4.l
            boolean r0 = r0.a()
            if (r0 != 0) goto L39
            com.tkay.basead.a.c r0 = r4.l
            com.tkay.basead.f.e$2 r1 = new com.tkay.basead.f.e$2
            r1.<init>(r4, r5)
            r0.a(r1)
            com.tkay.basead.a.c r5 = r4.l
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r4 = r4.d
            java.lang.String r4 = r4.d
            java.lang.String r1 = ""
            r0.<init>(r4, r1)
            r5.a(r0)
        L39:
            return
    }

    private void b(android.view.View r4) {
            r3 = this;
            com.tkay.core.common.f.i r0 = r3.d
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.F()
            r1 = 2
            if (r0 != r1) goto L24
            if (r4 != 0) goto Le
            return
        Le:
            boolean r0 = r3.q
            if (r0 == 0) goto L13
            return
        L13:
            r0 = 1
            r3.q = r0
            com.tkay.basead.a.a r0 = new com.tkay.basead.a.a
            com.tkay.core.common.f.i r1 = r3.d
            com.tkay.basead.f.e$3 r2 = new com.tkay.basead.f.e$3
            r2.<init>(r3)
            r0.<init>(r4, r1, r2)
            r3.p = r0
        L24:
            return
    }

    private void c(android.view.View r3) {
            r2 = this;
            r2.m = r3
            com.tkay.basead.f.e$4 r0 = new com.tkay.basead.f.e$4
            r0.<init>(r2)
            com.tkay.core.common.l.a.c r1 = r2.k
            if (r1 != 0) goto L15
            com.tkay.core.common.l.a.c r1 = new com.tkay.core.common.l.a.c
            r3.getContext()
            r1.<init>()
            r2.k = r1
        L15:
            com.tkay.core.common.l.a.c r1 = r2.k
            r1.a(r3, r0)
            return
    }

    public static android.view.View k() {
            r0 = 0
            return r0
    }

    private void n() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.p
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    private void o() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.p
            if (r0 == 0) goto La
            r0.b()
            r0 = 0
            r1.p = r0
        La:
            return
    }

    private void p() {
            r5 = this;
            boolean r0 = r5.n
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r5.n = r0
            android.content.Context r0 = r5.c
            com.tkay.basead.f.a.b r0 = com.tkay.basead.f.a.b.a(r0)
            com.tkay.core.common.f.r r1 = r5.g
            r0.a(r1)
            r0 = 8
            com.tkay.core.common.f.r r1 = r5.g
            com.tkay.basead.c.i r2 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r3 = r5.d
            java.lang.String r3 = r3.d
            java.lang.String r4 = ""
            r2.<init>(r3, r4)
            com.tkay.basead.a.b.a(r0, r1, r2)
            com.tkay.basead.e.a r0 = r5.a
            if (r0 == 0) goto L2c
            r0.onAdShow()
        L2c:
            r5.n()
            return
    }

    @Override
    public final void a(android.app.Activity r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            r0 = this;
            return
    }

    public final void a(android.view.View r2) {
            r1 = this;
            r1.c(r2)
            android.view.View$OnClickListener r0 = r1.o
            r1.a(r2, r0)
            return
    }

    public final void a(android.view.View r4, java.util.List<android.view.View> r5) {
            r3 = this;
            com.tkay.core.common.f.i r0 = r3.d
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.F()
            r1 = 2
            if (r0 != r1) goto L22
            if (r4 == 0) goto L22
            boolean r0 = r3.q
            if (r0 != 0) goto L22
            r0 = 1
            r3.q = r0
            com.tkay.basead.a.a r0 = new com.tkay.basead.a.a
            com.tkay.core.common.f.i r1 = r3.d
            com.tkay.basead.f.e$3 r2 = new com.tkay.basead.f.e$3
            r2.<init>(r3)
            r0.<init>(r4, r1, r2)
            r3.p = r0
        L22:
            r3.c(r4)
            if (r5 == 0) goto L40
            java.util.Iterator r4 = r5.iterator()
        L2b:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L3f
            java.lang.Object r5 = r4.next()
            android.view.View r5 = (android.view.View) r5
            if (r5 == 0) goto L2b
            android.view.View$OnClickListener r0 = r3.o
            r5.setOnClickListener(r0)
            goto L2b
        L3f:
            return
        L40:
            android.view.View$OnClickListener r5 = r3.o
            r4.setOnClickListener(r5)
            return
    }

    public final void a(com.tkay.basead.e.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r1.g
            java.lang.String r0 = r0.r()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r1.g
            java.lang.String r0 = r0.s()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String g() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r1.g
            java.lang.String r0 = r0.w()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String h() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r1.g
            java.lang.String r0 = r0.t()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String i() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r1.g
            java.lang.String r0 = r0.u()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final java.lang.String j() {
            r1 = this;
            com.tkay.core.common.f.r r0 = r1.g
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r1.g
            java.lang.String r0 = r0.v()
            return r0
        Lb:
            java.lang.String r0 = ""
            return r0
    }

    public final void l() {
            r1 = this;
            com.tkay.core.common.l.a.c r0 = r1.k
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    public final void m() {
            r2 = this;
            r2.l()
            r2.o()
            r0 = 0
            r2.a = r0
            com.tkay.basead.a.c r1 = r2.l
            if (r1 == 0) goto L12
            r1.d()
            r2.l = r0
        L12:
            com.tkay.core.common.l.a.c r1 = r2.k
            if (r1 == 0) goto L1b
            r1.b()
            r2.k = r0
        L1b:
            return
    }
}

package com.tkay.basead.ui;

public abstract class BaseATView extends android.widget.RelativeLayout {
    private com.tkay.basead.a.a a;
    java.lang.String b;
    com.tkay.core.common.f.i c;
    com.tkay.core.common.f.h d;
    com.tkay.core.common.l.a.c e;
    com.tkay.basead.a.c f;
    volatile boolean g;
    boolean h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
    java.lang.String q;
    java.util.List<android.view.View> r;
    android.view.View s;




    public BaseATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "BaseATView"
            r0.b = r1
            return
    }

    public BaseATView(android.content.Context r2, com.tkay.core.common.f.i r3, com.tkay.core.common.f.h r4) {
            r1 = this;
            java.lang.String r0 = ""
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public BaseATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "BaseATView"
            r0.b = r1
            r0.c = r2
            r0.d = r3
            r0.q = r4
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.r = r1
            com.tkay.core.common.f.h r1 = r0.d
            boolean r1 = r1.L()
            r2 = 1
            if (r1 != 0) goto L35
            com.tkay.core.common.f.i r1 = r0.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.F()
            if (r1 == r2) goto L35
            com.tkay.basead.a.a r1 = new com.tkay.basead.a.a
            com.tkay.core.common.f.i r3 = r0.c
            com.tkay.basead.ui.BaseATView$1 r4 = new com.tkay.basead.ui.BaseATView$1
            r4.<init>(r0)
            r1.<init>(r0, r3, r4)
            r0.a = r1
        L35:
            r0.d()
            r0.a()
            r0.setFocusable(r2)
            r0.setClickable(r2)
            return
    }

    private void b() {
            r6 = this;
            boolean r0 = r6.g
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r6.g = r0
            com.tkay.core.common.f.h r1 = r6.d
            boolean r2 = r1 instanceof com.tkay.core.common.f.r
            if (r2 == 0) goto L1e
            android.content.Context r1 = r6.getContext()
            com.tkay.basead.f.a.b r1 = com.tkay.basead.f.a.b.a(r1)
            com.tkay.core.common.f.h r2 = r6.d
            com.tkay.core.common.f.r r2 = (com.tkay.core.common.f.r) r2
            r1.a(r2)
            goto L3f
        L1e:
            boolean r1 = r1 instanceof com.tkay.core.common.f.z
            if (r1 == 0) goto L3f
            com.tkay.basead.d.c.c r1 = com.tkay.basead.d.c.c.a()
            android.content.Context r2 = r6.getContext()
            com.tkay.core.common.f.i r3 = r6.c
            java.lang.String r3 = r3.b
            com.tkay.core.common.f.i r4 = r6.c
            java.lang.String r4 = r4.c
            java.lang.String r3 = com.tkay.basead.d.c.c.a(r3, r4)
            com.tkay.core.common.f.h r4 = r6.d
            com.tkay.core.common.f.i r5 = r6.c
            com.tkay.core.common.f.j r5 = r5.m
            r1.a(r2, r3, r4, r5)
        L3f:
            com.tkay.core.common.f.h r1 = r6.d
            boolean r1 = r1 instanceof com.tkay.core.common.f.z
            if (r1 == 0) goto L84
            com.tkay.core.common.f.i r1 = r6.c
            int r1 = r1.f
            r2 = 67
            if (r1 != r2) goto L84
            com.tkay.core.common.f.h r1 = r6.d
            com.tkay.core.common.f.z r1 = (com.tkay.core.common.f.z) r1
            boolean r1 = r1.a(r0, r0)
            r2 = 0
            if (r1 == 0) goto L69
            android.content.Context r1 = r6.getContext()
            com.tkay.core.common.d.c r1 = com.tkay.core.common.d.c.a(r1)
            com.tkay.core.common.f.h r3 = r6.d
            java.lang.String r3 = r3.p()
            r1.a(r3, r2, r0)
        L69:
            com.tkay.core.common.f.h r1 = r6.d
            com.tkay.core.common.f.z r1 = (com.tkay.core.common.f.z) r1
            boolean r1 = r1.a(r2, r0)
            if (r1 == 0) goto L84
            android.content.Context r1 = r6.getContext()
            com.tkay.core.common.d.a r1 = com.tkay.core.common.d.b.a(r1)
            com.tkay.core.common.f.h r3 = r6.d
            java.lang.String r3 = r3.q()
            r1.a(r3, r2, r0)
        L84:
            r6.e()
            r6.o()
            return
    }

    private void b(android.view.View r1) {
            r0 = this;
            r0.s = r1
            return
    }

    private static int c(int r5) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            if (r5 <= 0) goto L1f
            double r1 = (double) r5
            r3 = 4591870180066957722(0x3fb999999999999a, double:0.1)
            double r3 = r3 * r1
            int r5 = (int) r3
            r3 = 4606281698874543309(0x3feccccccccccccd, double:0.9)
            double r1 = r1 * r3
            int r1 = (int) r1
            int r1 = r1 - r5
            int r1 = r1 + 1
            int r0 = r0.nextInt(r1)
            int r0 = r0 + r5
            return r0
        L1f:
            r5 = 0
            return r5
    }

    private void c() {
            r4 = this;
            com.tkay.core.common.f.h r0 = r4.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.z
            if (r0 == 0) goto L46
            com.tkay.core.common.f.i r0 = r4.c
            int r0 = r0.f
            r1 = 67
            if (r0 != r1) goto L46
            com.tkay.core.common.f.h r0 = r4.d
            com.tkay.core.common.f.z r0 = (com.tkay.core.common.f.z) r0
            r1 = 1
            r2 = 0
            boolean r0 = r0.a(r1, r2)
            if (r0 == 0) goto L2b
            android.content.Context r0 = r4.getContext()
            com.tkay.core.common.d.c r0 = com.tkay.core.common.d.c.a(r0)
            com.tkay.core.common.f.h r3 = r4.d
            java.lang.String r3 = r3.p()
            r0.a(r3, r1, r2)
        L2b:
            com.tkay.core.common.f.h r0 = r4.d
            com.tkay.core.common.f.z r0 = (com.tkay.core.common.f.z) r0
            boolean r0 = r0.a(r2, r2)
            if (r0 == 0) goto L46
            android.content.Context r0 = r4.getContext()
            com.tkay.core.common.d.a r0 = com.tkay.core.common.d.b.a(r0)
            com.tkay.core.common.f.h r3 = r4.d
            java.lang.String r3 = r3.q()
            r0.a(r3, r1, r2)
        L46:
            return
    }

    private void o() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }

    protected float a(com.tkay.basead.ui.a r3, int r4) {
            r2 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            if (r3 == 0) goto L1a
            r1 = 2
            if (r4 == r1) goto L14
            r1 = 3
            if (r4 == r1) goto L11
            r1 = 4
            if (r4 == r1) goto Le
            goto L17
        Le:
            r4 = 1056964608(0x3f000000, float:0.5)
            goto L16
        L11:
            r4 = 1061158912(0x3f400000, float:0.75)
            goto L16
        L14:
            r4 = 1069547520(0x3fc00000, float:1.5)
        L16:
            r0 = r4
        L17:
            r3.setClickAreaScaleFactor(r0)
        L1a:
            return r0
    }

    protected abstract void a();

    protected abstract void a(int r1);

    protected final void a(int r3, java.lang.Runnable r4) {
            r2 = this;
            if (r3 <= 0) goto Ld
            com.tkay.core.common.l.a.c r0 = new com.tkay.core.common.l.a.c
            r2.getContext()
            r0.<init>(r3)
            r2.e = r0
            goto L17
        Ld:
            com.tkay.core.common.l.a.c r0 = new com.tkay.core.common.l.a.c
            r2.getContext()
            r0.<init>()
            r2.e = r0
        L17:
            com.tkay.core.common.l.a.c r0 = r2.e
            com.tkay.basead.ui.BaseATView$3 r1 = new com.tkay.basead.ui.BaseATView$3
            r1.<init>(r2, r4, r3)
            r0.a(r2, r1)
            return
    }

    protected final void a(android.view.View r9) {
            r8 = this;
            r0 = 2
            int[] r0 = new int[r0]
            r9.getLocationInWindow(r0)
            r1 = 0
            r1 = r0[r1]
            r2 = 1
            r0 = r0[r2]
            int r2 = r9.getWidth()
            int r9 = r9.getHeight()
            int r2 = c(r2)
            int r9 = c(r9)
            int r3 = r1 + r2
            r8.i = r3
            int r4 = r0 + r9
            r8.j = r4
            r8.m = r2
            r8.n = r9
            double r4 = java.lang.Math.random()
            r6 = 4624633867356078080(0x402e000000000000, double:15.0)
            double r4 = r4 * r6
            int r9 = (int) r4
            int r3 = r3 + r9
            r8.k = r3
            int r2 = r2 + r0
            double r3 = java.lang.Math.random()
            double r3 = r3 * r6
            int r9 = (int) r3
            int r2 = r2 + r9
            r8.l = r2
            int r9 = r8.k
            int r9 = r9 - r1
            r8.o = r9
            int r2 = r2 - r0
            r8.p = r2
            return
    }

    protected abstract void a(boolean r1);

    protected void b(int r5) {
            r4 = this;
            r4.b()
            r4.k()
            com.tkay.basead.a.c r0 = r4.f
            if (r0 != 0) goto L19
            com.tkay.basead.a.c r0 = new com.tkay.basead.a.c
            android.content.Context r1 = r4.getContext()
            com.tkay.core.common.f.i r2 = r4.c
            com.tkay.core.common.f.h r3 = r4.d
            r0.<init>(r1, r2, r3)
            r4.f = r0
        L19:
            com.tkay.basead.a.c r0 = r4.f
            boolean r0 = r0.a()
            if (r0 == 0) goto L22
            return
        L22:
            com.tkay.basead.a.c r0 = r4.f
            com.tkay.basead.ui.BaseATView$2 r1 = new com.tkay.basead.ui.BaseATView$2
            r1.<init>(r4, r5)
            r0.a(r1)
            com.tkay.basead.c.i r5 = r4.i()
            com.tkay.basead.c.a r0 = r4.j()
            r5.g = r0
            com.tkay.basead.a.c r0 = r4.f
            r0.a(r5)
            return
    }

    protected void d() {
            r0 = this;
            return
    }

    protected void destroy() {
            r1 = this;
            r1.k()
            com.tkay.basead.a.c r0 = r1.f
            if (r0 == 0) goto La
            r0.d()
        La:
            com.tkay.core.common.l.a.c r0 = r1.e
            if (r0 == 0) goto L11
            r0.b()
        L11:
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r3) {
            r2 = this;
            int r0 = r3.getAction()
            if (r0 == 0) goto L2a
            r1 = 1
            if (r0 == r1) goto Ld
            r1 = 3
            if (r0 == r1) goto Ld
            goto L46
        Ld:
            float r0 = r3.getRawX()
            int r0 = (int) r0
            r2.k = r0
            float r0 = r3.getRawY()
            int r0 = (int) r0
            r2.l = r0
            float r0 = r3.getX()
            int r0 = (int) r0
            r2.o = r0
            float r0 = r3.getY()
            int r0 = (int) r0
            r2.p = r0
            goto L46
        L2a:
            float r0 = r3.getRawX()
            int r0 = (int) r0
            r2.i = r0
            float r0 = r3.getRawY()
            int r0 = (int) r0
            r2.j = r0
            float r0 = r3.getX()
            int r0 = (int) r0
            r2.m = r0
            float r0 = r3.getY()
            int r0 = (int) r0
            r2.n = r0
        L46:
            boolean r3 = super.dispatchTouchEvent(r3)
            return r3
    }

    protected abstract void e();

    protected void f() {
            r0 = this;
            return
    }

    protected void g() {
            r0 = this;
            return
    }

    protected synchronized void h() {
            r1 = this;
            monitor-enter(r1)
            r1.b()     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    protected com.tkay.basead.c.i i() {
            r3 = this;
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r1 = r1.d
            java.lang.String r2 = ""
            r0.<init>(r1, r2)
            int r1 = r3.getWidth()
            r0.e = r1
            int r1 = r3.getHeight()
            r0.f = r1
            return r0
    }

    protected final com.tkay.basead.c.a j() {
            r2 = this;
            com.tkay.basead.c.a r0 = new com.tkay.basead.c.a
            r0.<init>()
            int r1 = r2.i
            r0.a = r1
            int r1 = r2.j
            r0.b = r1
            int r1 = r2.k
            r0.c = r1
            int r1 = r2.l
            r0.d = r1
            int r1 = r2.m
            r0.e = r1
            int r1 = r2.n
            r0.f = r1
            int r1 = r2.o
            r0.g = r1
            int r1 = r2.p
            r0.h = r1
            return r0
    }

    protected final void k() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.a
            if (r0 == 0) goto La
            r0.b()
            r0 = 0
            r1.a = r0
        La:
            return
    }

    protected final void l() {
            r1 = this;
            com.tkay.basead.a.a r0 = r1.a
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    protected boolean m() {
            r2 = this;
            com.tkay.expressad.shake.a r0 = com.tkay.expressad.shake.a.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto L1e
            com.tkay.core.common.f.i r0 = r2.c
            if (r0 == 0) goto L1e
            com.tkay.core.common.f.j r0 = r0.m
            if (r0 == 0) goto L1e
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.M()
            r1 = 1
            if (r0 != r1) goto L1e
            return r1
        L1e:
            r0 = 0
            return r0
    }

    protected final boolean n() {
            r1 = this;
            com.tkay.core.common.f.h r0 = r1.d
            if (r0 == 0) goto Lc
            boolean r0 = r0.g()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            r0.k()
            return
    }
}

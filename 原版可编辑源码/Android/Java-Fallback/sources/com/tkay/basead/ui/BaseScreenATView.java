package com.tkay.basead.ui;

public abstract class BaseScreenATView extends com.tkay.basead.ui.BaseATView {
    public static final int FORMAT_INTERSTITIAL = 3;
    public static final int FORMAT_REWARD_VIDEO = 1;
    public static final java.lang.String TAG = null;
    public static final int TYPE_FULL_SCREEN = 0;
    public static final int TYPE_HALF_SCREEN = 1;
    protected com.tkay.basead.ui.b A;
    int B;
    protected int C;
    protected int D;
    protected com.tkay.basead.e.b.b E;
    protected boolean F;
    protected int G;
    protected com.tkay.basead.ui.CountDownView H;
    protected com.tkay.basead.ui.CloseImageView I;
    protected android.view.ViewGroup J;
    protected com.tkay.basead.ui.MuteImageView K;
    protected int L;
    protected boolean M;
    protected float N;
    protected int O;
    protected int P;
    protected int Q;
    protected com.tkay.basead.ui.BaseShakeView R;
    protected com.tkay.basead.ui.BaseShakeView S;
    final long T;
    final long U;
    java.lang.Runnable V;
    java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> W;
    protected int a;
    protected int aa;
    protected int ab;
    protected int ac;
    protected int ad;
    private boolean ae;
    private boolean af;
    private long ag;
    private long ah;
    private long ai;
    private long aj;
    private com.tkay.basead.c ak;
    private boolean al;
    private boolean am;
    private boolean an;
    protected int t;
    protected boolean u;
    protected boolean v;
    protected android.widget.RelativeLayout w;
    protected com.tkay.basead.ui.PlayerView x;
    protected com.tkay.basead.ui.PanelView y;
    protected com.tkay.basead.ui.BaseEndCardView z;









    final class 2 implements com.tkay.basead.c.a {
        final com.tkay.basead.ui.BaseScreenATView a;

        2(com.tkay.basead.ui.BaseScreenATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.tkay.basead.ui.BaseScreenATView r0 = r1.a
                com.tkay.basead.ui.BaseScreenATView.c(r0)
                return
        }

        @Override
        public final void b() {
                r1 = this;
                com.tkay.basead.ui.BaseScreenATView r0 = r1.a
                r0.r()
                com.tkay.basead.ui.BaseScreenATView r0 = r1.a
                com.tkay.basead.c r0 = com.tkay.basead.ui.BaseScreenATView.d(r0)
                r0.b()
                return
        }
    }





    final class 7 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.BaseScreenATView a;

        7(com.tkay.basead.ui.BaseScreenATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.basead.ui.BaseScreenATView r1 = r0.a
                r1.A()
                return
        }
    }

    final class 8 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.BaseScreenATView a;

        8(com.tkay.basead.ui.BaseScreenATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.basead.ui.BaseScreenATView r1 = r0.a
                com.tkay.basead.ui.BaseScreenATView.f(r1)
                return
        }
    }


    static {
            java.lang.Class<com.tkay.basead.ui.BaseScreenATView> r0 = com.tkay.basead.ui.BaseScreenATView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.BaseScreenATView.TAG = r0
            return
    }

    public BaseScreenATView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            r3 = 0
            r2.G = r3
            r2.al = r3
            r0 = 3000(0xbb8, double:1.482E-320)
            r2.T = r0
            r0 = 500(0x1f4, double:2.47E-321)
            r2.U = r0
            r2.am = r3
            r2.an = r3
            com.tkay.basead.ui.BaseScreenATView$1 r3 = new com.tkay.basead.ui.BaseScreenATView$1
            r3.<init>(r2)
            r2.V = r3
            return
    }

    public BaseScreenATView(android.content.Context r3, com.tkay.core.common.f.i r4, com.tkay.core.common.f.h r5, java.lang.String r6, int r7, int r8) {
            r2 = this;
            r2.<init>(r3, r4, r5, r6)
            r3 = 0
            r2.G = r3
            r2.al = r3
            r4 = 3000(0xbb8, double:1.482E-320)
            r2.T = r4
            r4 = 500(0x1f4, double:2.47E-321)
            r2.U = r4
            r2.am = r3
            r2.an = r3
            com.tkay.basead.ui.BaseScreenATView$1 r4 = new com.tkay.basead.ui.BaseScreenATView$1
            r4.<init>(r2)
            r2.V = r4
            r2.a = r7
            r2.t = r8
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.v()
            if (r4 <= 0) goto L34
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.v()
            int r4 = r4 * 1000
            goto L3c
        L34:
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.v()
        L3c:
            long r4 = (long) r4
            r2.ag = r4
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.w()
            if (r4 <= 0) goto L54
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.w()
            int r4 = r4 * 1000
            goto L5c
        L54:
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.w()
        L5c:
            long r4 = (long) r4
            r2.ah = r4
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 <= 0) goto L6f
            long r0 = r2.ag
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 < 0) goto L6f
            long r0 = r0 + r4
            r2.ai = r0
            goto L73
        L6f:
            long r4 = r2.ah
            r2.ai = r4
        L73:
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.z()
            int r4 = r4 * 1000
            r2.L = r4
            com.tkay.core.common.f.i r4 = r2.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.y()
            if (r4 != 0) goto L8a
            r3 = 1
        L8a:
            r2.M = r3
            return
    }

    private void K() {
            r1 = this;
            boolean r0 = r1.n()
            if (r0 == 0) goto L1b
            com.tkay.core.common.f.i r0 = r1.c
            com.tkay.core.common.f.j r0 = r0.m
            boolean r0 = r0.V()
            if (r0 != 0) goto L1b
            com.tkay.basead.ui.BaseEndCardView r0 = r1.z
            if (r0 != 0) goto L1b
            r0 = 1
            com.tkay.basead.ui.BaseEndCardView r0 = r1.b(r0)
            r1.z = r0
        L1b:
            return
    }

    private void L() {
            r2 = this;
            android.content.res.Resources r0 = r2.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.widthPixels
            r2.C = r1
            int r0 = r0.heightPixels
            r2.D = r0
            return
    }

    private void M() {
            r1 = this;
            com.tkay.basead.ui.BaseEndCardView r0 = r1.z
            if (r0 != 0) goto Lb
            r0 = 0
            com.tkay.basead.ui.BaseEndCardView r0 = r1.b(r0)
            r1.z = r0
        Lb:
            r1.H()
            r1.I()
            return
    }

    private void N() {
            r5 = this;
            int r0 = r5.q()
            r5.Q = r0
            boolean r0 = r5.c(r0)
            com.tkay.basead.ui.EndCardView r1 = new com.tkay.basead.ui.EndCardView
            android.content.Context r2 = r5.getContext()
            com.tkay.core.common.f.h r3 = r5.d
            com.tkay.core.common.f.i r4 = r5.c
            r1.<init>(r2, r3, r4)
            int r2 = r5.C
            int r3 = r5.D
            r1.setSize(r2, r3)
            com.tkay.basead.ui.BaseScreenATView$16 r2 = new com.tkay.basead.ui.BaseScreenATView$16
            r2.<init>(r5, r0)
            r0 = 0
            r1.init(r0, r0, r2)
            r5.z = r1
            r5.H()
            com.tkay.basead.ui.PanelView r0 = r5.y
            if (r0 == 0) goto L57
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L57
            com.tkay.basead.ui.PanelView r0 = r5.y
            android.view.View r0 = r0.getCTAButton()
            if (r0 == 0) goto L53
            com.tkay.basead.ui.PanelView r0 = r5.y
            android.view.View r0 = r0.getCTAButton()
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L53
            com.tkay.basead.ui.PanelView r0 = r5.y
            android.view.View r0 = r0.getCTAButton()
            r5.s = r0
            goto L57
        L53:
            com.tkay.basead.ui.PanelView r0 = r5.y
            r5.s = r0
        L57:
            r1.load()
            return
    }

    private void O() {
            r5 = this;
            r5.s()
            com.tkay.basead.c r0 = r5.ak
            if (r0 != 0) goto Le
            com.tkay.basead.c r0 = new com.tkay.basead.c
            r0.<init>()
            r5.ak = r0
        Le:
            com.tkay.basead.c r0 = r5.ak
            android.content.Context r1 = r5.getContext()
            com.tkay.core.common.f.h r2 = r5.d
            com.tkay.core.common.f.i r3 = r5.c
            com.tkay.basead.ui.BaseScreenATView$2 r4 = new com.tkay.basead.ui.BaseScreenATView$2
            r4.<init>(r5)
            r0.a(r1, r2, r3, r4)
            return
    }

    private void P() {
            r2 = this;
            r0 = 1
            r2.ae = r0
            android.view.ViewGroup r0 = r2.J
            if (r0 == 0) goto Lc
            r1 = 8
            r0.setVisibility(r1)
        Lc:
            return
    }

    private void Q() {
            r2 = this;
            com.tkay.basead.ui.b r0 = r2.A
            if (r0 != 0) goto Ld
            com.tkay.basead.ui.b r0 = new com.tkay.basead.ui.b
            android.widget.RelativeLayout r1 = r2.w
            r0.<init>(r1)
            r2.A = r0
        Ld:
            com.tkay.basead.ui.b r0 = r2.A
            r0.b()
            return
    }

    private void R() {
            r1 = this;
            com.tkay.basead.ui.b r0 = r1.A
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    private void S() {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.d
            com.tkay.basead.c.i r1 = r3.i()
            r2 = 1
            com.tkay.basead.a.b.a(r2, r0, r1)
            com.tkay.basead.e.b$b r0 = r3.E
            if (r0 == 0) goto L11
            r0.b()
        L11:
            return
    }

    private void T() {
            r2 = this;
            com.tkay.basead.ui.CountDownView r0 = r2.H
            if (r0 == 0) goto L8
            r1 = 4
            r0.setVisibility(r1)
        L8:
            return
    }

    private void U() {
            r2 = this;
            com.tkay.basead.ui.CloseImageView r0 = r2.I
            if (r0 == 0) goto L23
            com.tkay.core.common.f.i r1 = r2.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.h()
            float r0 = r2.a(r0, r1)
            r2.N = r0
            com.tkay.basead.ui.CloseImageView r0 = r2.I
            r1 = 8
            r0.setVisibility(r1)
            com.tkay.basead.ui.CloseImageView r0 = r2.I
            com.tkay.basead.ui.BaseScreenATView$7 r1 = new com.tkay.basead.ui.BaseScreenATView$7
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L23:
            return
    }

    private void V() {
            r2 = this;
            android.view.ViewGroup r0 = r2.J
            if (r0 == 0) goto L13
            r1 = 8
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r2.J
            com.tkay.basead.ui.BaseScreenATView$8 r1 = new com.tkay.basead.ui.BaseScreenATView$8
            r1.<init>(r2)
            r0.setOnClickListener(r1)
        L13:
            return
    }

    private void W() {
            r2 = this;
            boolean r0 = r2.ae
            if (r0 != 0) goto L14
            android.view.ViewGroup r0 = r2.J
            if (r0 == 0) goto L14
            boolean r0 = r0.isShown()
            if (r0 != 0) goto L14
            android.view.ViewGroup r0 = r2.J
            r1 = 0
            r0.setVisibility(r1)
        L14:
            return
    }

    private static int a(com.tkay.core.common.f.j r4) {
            r0 = 0
            if (r4 == 0) goto L36
            int r1 = r4.B()
            float r1 = (float) r1
            r2 = 1120403456(0x42c80000, float:100.0)
            float r1 = r1 / r2
            int r1 = (int) r1
            if (r1 != 0) goto Lf
            return r0
        Lf:
            java.util.Random r2 = new java.util.Random
            r2.<init>()
            r3 = 100
            int r3 = r2.nextInt(r3)
            if (r3 <= r1) goto L1d
            return r0
        L1d:
            int r1 = r4.C()
            int r4 = r4.D()
            if (r4 > 0) goto L28
            return r0
        L28:
            if (r1 != r4) goto L2b
            return r1
        L2b:
            int r4 = r4 - r1
            int r4 = r2.nextInt(r4)     // Catch: java.lang.Throwable -> L32
            int r4 = r4 + r1
            return r4
        L32:
            r4 = move-exception
            r4.printStackTrace()
        L36:
            return r0
    }

    static long a(com.tkay.basead.ui.BaseScreenATView r0, long r1) {
            r0.aj = r1
            return r1
    }

    static void a(com.tkay.basead.ui.BaseScreenATView r0) {
            super.h()
            return
    }

    static void a(com.tkay.basead.ui.BaseScreenATView r4, int r5) {
            com.tkay.core.common.f.h r0 = r4.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.z
            if (r0 == 0) goto L74
            com.tkay.core.common.f.h r0 = r4.d
            com.tkay.core.common.f.z r0 = (com.tkay.core.common.f.z) r0
            com.tkay.core.common.f.ab r0 = r0.X()
            if (r0 == 0) goto L74
            java.util.Map r0 = r0.y()
            if (r0 == 0) goto L74
            int r1 = r0.size()
            if (r1 <= 0) goto L74
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r1 = r4.W
            if (r1 != 0) goto L27
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r4.W = r1
        L27:
            int r5 = r5 / 1000
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L31:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L74
            java.lang.Object r1 = r0.next()
            java.lang.Integer r1 = (java.lang.Integer) r1
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r2 = r4.W
            java.lang.Object r2 = r2.get(r1)
            if (r2 == 0) goto L53
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r2 = r4.W
            java.lang.Object r2 = r2.get(r1)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            if (r2 != 0) goto L31
        L53:
            int r2 = r1.intValue()
            if (r5 < r2) goto L31
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r2 = r4.W
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            r2.put(r1, r3)
            com.tkay.basead.c.i r2 = r4.i()
            com.tkay.basead.c.j r3 = r2.h
            int r1 = r1.intValue()
            r3.i = r1
            r1 = 32
            com.tkay.core.common.f.h r3 = r4.d
            com.tkay.basead.a.b.a(r1, r3, r2)
            goto L31
        L74:
            return
    }

    private com.tkay.basead.ui.BaseEndCardView b(boolean r5) {
            r4 = this;
            com.tkay.basead.ui.MraidEndCardView r0 = new com.tkay.basead.ui.MraidEndCardView
            android.content.Context r1 = r4.getContext()
            com.tkay.core.common.f.h r2 = r4.d
            com.tkay.core.common.f.i r3 = r4.c
            r0.<init>(r1, r2, r3)
            com.tkay.basead.ui.BaseScreenATView$15 r1 = new com.tkay.basead.ui.BaseScreenATView$15
            r1.<init>(r4)
            r0.setEndCardListener(r1)
            r0.init(r5)
            return r0
    }

    static void b(com.tkay.basead.ui.BaseScreenATView r3) {
            com.tkay.core.common.f.h r0 = r3.d
            com.tkay.basead.c.i r1 = r3.i()
            r2 = 1
            com.tkay.basead.a.b.a(r2, r0, r1)
            com.tkay.basead.e.b$b r3 = r3.E
            if (r3 == 0) goto L11
            r3.b()
        L11:
            return
    }

    static void b(com.tkay.basead.ui.BaseScreenATView r6, int r7) {
            long r0 = r6.ai
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L11
            long r4 = (long) r7
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L11
            r6.F()
            return
        L11:
            boolean r0 = r6.F
            if (r0 == 0) goto L23
            long r0 = r6.ag
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L23
            long r2 = (long) r7
            int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r7 < 0) goto L23
            r6.E()
        L23:
            return
    }

    static void c(com.tkay.basead.ui.BaseScreenATView r1) {
            r0 = 1
            r1.ae = r0
            android.view.ViewGroup r1 = r1.J
            if (r1 == 0) goto Lc
            r0 = 8
            r1.setVisibility(r0)
        Lc:
            return
    }

    static void c(com.tkay.basead.ui.BaseScreenATView r6, int r7) {
            boolean r0 = r6.F
            if (r0 == 0) goto L21
            long r0 = r6.ag
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L21
            long r0 = r6.ah
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L21
            long r4 = (long) r7
            r6.ag = r4
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 <= 0) goto L1e
            long r4 = r4 + r0
            r6.ai = r4
        L1e:
            r6.E()
        L21:
            return
    }

    static com.tkay.basead.c d(com.tkay.basead.ui.BaseScreenATView r0) {
            com.tkay.basead.c r0 = r0.ak
            return r0
    }

    private void e(int r5) {
            r4 = this;
            com.tkay.core.common.f.h r0 = r4.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.z
            if (r0 == 0) goto L75
            com.tkay.core.common.f.h r0 = r4.d
            com.tkay.core.common.f.z r0 = (com.tkay.core.common.f.z) r0
            com.tkay.core.common.f.ab r0 = r0.X()
            if (r0 != 0) goto L11
            return
        L11:
            java.util.Map r0 = r0.y()
            if (r0 == 0) goto L75
            int r1 = r0.size()
            if (r1 <= 0) goto L75
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r1 = r4.W
            if (r1 != 0) goto L28
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>()
            r4.W = r1
        L28:
            int r5 = r5 / 1000
            java.util.Set r0 = r0.keySet()
            java.util.Iterator r0 = r0.iterator()
        L32:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L75
            java.lang.Object r1 = r0.next()
            java.lang.Integer r1 = (java.lang.Integer) r1
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r2 = r4.W
            java.lang.Object r2 = r2.get(r1)
            if (r2 == 0) goto L54
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r2 = r4.W
            java.lang.Object r2 = r2.get(r1)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            if (r2 != 0) goto L32
        L54:
            int r2 = r1.intValue()
            if (r5 < r2) goto L32
            java.util.concurrent.ConcurrentHashMap<java.lang.Integer, java.lang.Boolean> r2 = r4.W
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            r2.put(r1, r3)
            com.tkay.basead.c.i r2 = r4.i()
            com.tkay.basead.c.j r3 = r2.h
            int r1 = r1.intValue()
            r3.i = r1
            r1 = 32
            com.tkay.core.common.f.h r3 = r4.d
            com.tkay.basead.a.b.a(r1, r3, r2)
            goto L32
        L75:
            return
    }

    static void e(com.tkay.basead.ui.BaseScreenATView r0) {
            com.tkay.basead.ui.b r0 = r0.A
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    private void f(int r7) {
            r6 = this;
            long r0 = r6.ai
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L11
            long r4 = (long) r7
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L11
            r6.F()
            return
        L11:
            boolean r0 = r6.F
            if (r0 == 0) goto L23
            long r0 = r6.ag
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L23
            long r2 = (long) r7
            int r7 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r7 < 0) goto L23
            r6.E()
        L23:
            return
    }

    static void f(com.tkay.basead.ui.BaseScreenATView r5) {
            r5.s()
            com.tkay.basead.c r0 = r5.ak
            if (r0 != 0) goto Le
            com.tkay.basead.c r0 = new com.tkay.basead.c
            r0.<init>()
            r5.ak = r0
        Le:
            com.tkay.basead.c r0 = r5.ak
            android.content.Context r1 = r5.getContext()
            com.tkay.core.common.f.h r2 = r5.d
            com.tkay.core.common.f.i r3 = r5.c
            com.tkay.basead.ui.BaseScreenATView$2 r4 = new com.tkay.basead.ui.BaseScreenATView$2
            r4.<init>(r5)
            r0.a(r1, r2, r3, r4)
            return
    }

    private void g(int r7) {
            r6 = this;
            boolean r0 = r6.F
            if (r0 == 0) goto L21
            long r0 = r6.ag
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L21
            long r0 = r6.ah
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L21
            long r4 = (long) r7
            r6.ag = r4
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 <= 0) goto L1e
            long r4 = r4 + r0
            r6.ai = r4
        L1e:
            r6.E()
        L21:
            return
    }

    protected abstract void A();

    protected final void B() {
            r3 = this;
            com.tkay.basead.ui.PlayerView r0 = r3.x
            if (r0 == 0) goto L25
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L25
            com.tkay.basead.ui.PlayerView r0 = r3.x
            r0.stop()
            com.tkay.basead.ui.PlayerView r0 = r3.x
            r0.removeAllViews()
            com.tkay.basead.c.i r0 = r3.i()
            com.tkay.basead.c.a r1 = r3.j()
            r0.g = r1
            r1 = 16
            com.tkay.core.common.f.h r2 = r3.d
            com.tkay.basead.a.b.a(r1, r2, r0)
        L25:
            return
    }

    protected final void C() {
            r3 = this;
            com.tkay.basead.c.i r0 = r3.i()
            com.tkay.basead.c.a r1 = r3.j()
            r0.g = r1
            com.tkay.core.common.f.h r1 = r3.d
            r2 = 7
            com.tkay.basead.a.b.a(r2, r1, r0)
            com.tkay.basead.e.b$b r0 = r3.E
            if (r0 == 0) goto L17
            r0.e()
        L17:
            return
    }

    protected void D() {
            r2 = this;
            com.tkay.basead.ui.CountDownView r0 = r2.H
            r1 = 0
            if (r0 == 0) goto L10
            boolean r0 = r0.isShown()
            if (r0 != 0) goto L10
            com.tkay.basead.ui.CountDownView r0 = r2.H
            r0.setVisibility(r1)
        L10:
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            if (r0 == 0) goto L1f
            boolean r0 = r0.isShown()
            if (r0 != 0) goto L1f
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            r0.setVisibility(r1)
        L1f:
            return
    }

    protected final void E() {
            r2 = this;
            com.tkay.basead.ui.PanelView r0 = r2.y
            int r0 = r0.getVisibility()
            if (r0 == 0) goto Le
            com.tkay.basead.ui.PanelView r0 = r2.y
            r1 = 0
            r0.setVisibility(r1)
        Le:
            return
    }

    protected void F() {
            r2 = this;
            com.tkay.basead.ui.PanelView r0 = r2.y
            int r0 = r0.getVisibility()
            r1 = 8
            if (r0 == r1) goto Lf
            com.tkay.basead.ui.PanelView r0 = r2.y
            r0.setVisibility(r1)
        Lf:
            return
    }

    protected void G() {
            r3 = this;
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            r1 = 0
            if (r0 == 0) goto L17
            boolean r0 = r0.isShown()
            if (r0 != 0) goto L17
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            r0.setVisibility(r1)
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            float r2 = r3.N
            r0.setClickAreaScaleFactor(r2)
        L17:
            boolean r0 = r3.ae
            if (r0 != 0) goto L2a
            android.view.ViewGroup r0 = r3.J
            if (r0 == 0) goto L2a
            boolean r0 = r0.isShown()
            if (r0 != 0) goto L2a
            android.view.ViewGroup r0 = r3.J
            r0.setVisibility(r1)
        L2a:
            return
    }

    protected abstract void H();

    protected abstract void I();

    protected abstract void J();

    @Override
    protected void a() {
            r0 = this;
            return
    }

    @Override
    protected final void a(int r2) {
            r1 = this;
            com.tkay.basead.e.b$b r0 = r1.E
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    protected final void a(com.tkay.basead.c.e r2) {
            r1 = this;
            com.tkay.basead.e.b$b r0 = r1.E
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            r1.k()
            return
    }

    final void a(com.tkay.basead.ui.BaseShakeView r4, com.tkay.basead.ui.BaseShakeView r5) {
            r3 = this;
            boolean r0 = r3.al
            if (r0 != 0) goto L1d
            r0 = 1
            r3.al = r0
            if (r4 == 0) goto L1d
            boolean r0 = r3.m()
            if (r0 == 0) goto L1d
            r0 = 0
            r4.setVisibility(r0)
            com.tkay.basead.ui.BaseScreenATView$4 r0 = new com.tkay.basead.ui.BaseScreenATView$4
            r0.<init>(r3, r4, r5)
            r1 = 3000(0xbb8, double:1.482E-320)
            r4.postDelayed(r0, r1)
        L1d:
            return
    }

    @Override
    protected final void a(boolean r2) {
            r1 = this;
            com.tkay.basead.e.b$b r0 = r1.E
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    protected void b() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_rl_root"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r3.w = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_player_view_id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.PlayerView r0 = (com.tkay.basead.ui.PlayerView) r0
            r3.x = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_banner_view_id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.PanelView r0 = (com.tkay.basead.ui.PanelView) r0
            r3.y = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_count_down_view_id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.CountDownView r0 = (com.tkay.basead.ui.CountDownView) r0
            r3.H = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_btn_mute_id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.MuteImageView r0 = (com.tkay.basead.ui.MuteImageView) r0
            r3.K = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_btn_close_id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.CloseImageView r0 = (com.tkay.basead.ui.CloseImageView) r0
            r3.I = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_feedback_ll_id"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.J = r0
            com.tkay.basead.ui.CountDownView r0 = r3.H
            if (r0 == 0) goto L88
            r1 = 4
            r0.setVisibility(r1)
        L88:
            r3.z()
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            r1 = 8
            if (r0 == 0) goto Lae
            com.tkay.core.common.f.i r2 = r3.c
            com.tkay.core.common.f.j r2 = r2.m
            int r2 = r2.h()
            float r0 = r3.a(r0, r2)
            r3.N = r0
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            r0.setVisibility(r1)
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            com.tkay.basead.ui.BaseScreenATView$7 r2 = new com.tkay.basead.ui.BaseScreenATView$7
            r2.<init>(r3)
            r0.setOnClickListener(r2)
        Lae:
            android.view.ViewGroup r0 = r3.J
            if (r0 == 0) goto Lbf
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r3.J
            com.tkay.basead.ui.BaseScreenATView$8 r1 = new com.tkay.basead.ui.BaseScreenATView$8
            r1.<init>(r3)
            r0.setOnClickListener(r1)
        Lbf:
            r3.v()
            return
    }

    @Override
    protected void b(int r3) {
            r2 = this;
            r0 = 1
            r2.an = r0
            com.tkay.basead.ui.CloseImageView r0 = r2.I
            com.tkay.core.common.f.i r1 = r2.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.g()
            float r0 = r2.a(r0, r1)
            r2.N = r0
            boolean r0 = r2.af
            if (r0 == 0) goto L18
            return
        L18:
            com.tkay.core.common.f.h r0 = r2.d
            if (r0 != 0) goto L1d
            return
        L1d:
            super.b(r3)
            return
    }

    protected void c() {
            r3 = this;
            com.tkay.basead.ui.PlayerView r0 = r3.x
            com.tkay.basead.ui.BaseScreenATView$9 r1 = new com.tkay.basead.ui.BaseScreenATView$9
            r1.<init>(r3)
            r0.setListener(r1)
            com.tkay.basead.ui.PlayerView r0 = r3.x
            boolean r1 = r3.M
            r0.initMuteStatus(r1)
            com.tkay.basead.ui.PlayerView r0 = r3.x
            int r1 = r3.O
            int r2 = r3.P
            r0.setVideoSize(r1, r2)
            com.tkay.basead.ui.PlayerView r0 = r3.x
            com.tkay.core.common.f.h r1 = r3.d
            com.tkay.core.common.f.j r1 = r1.k()
            int r1 = r1.S()
            com.tkay.core.common.f.h r2 = r3.d
            com.tkay.core.common.f.j r2 = r2.k()
            int r2 = r2.T()
            r0.setVideoRateConfig(r1, r2)
            com.tkay.basead.ui.PlayerView r0 = r3.x
            com.tkay.core.common.f.h r1 = r3.d
            java.lang.String r1 = r1.x()
            r2 = 0
            r0.load(r1, r2)
            return
    }

    protected abstract boolean c(int r1);

    @Override
    protected void d() {
            r2 = this;
            android.content.res.Resources r0 = r2.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.widthPixels
            r2.C = r1
            int r0 = r0.heightPixels
            r2.D = r0
            r2.u()
            return
    }

    protected final void d(int r2) {
            r1 = this;
            com.tkay.basead.ui.CountDownView r0 = r1.H
            if (r0 == 0) goto L7
            r0.setDuration(r2)
        L7:
            return
    }

    @Override
    protected void destroy() {
            r1 = this;
            super.destroy()
            r0 = 0
            r1.E = r0
            com.tkay.basead.ui.BaseEndCardView r0 = r1.z
            if (r0 == 0) goto Ld
            r0.a()
        Ld:
            return
    }

    @Override
    protected final void e() {
            r3 = this;
            com.tkay.core.common.f.h r0 = r3.d
            com.tkay.basead.c.i r1 = r3.i()
            r2 = 8
            com.tkay.basead.a.b.a(r2, r0, r1)
            com.tkay.basead.e.b$b r0 = r3.E
            if (r0 == 0) goto L12
            r0.a()
        L12:
            return
    }

    @Override
    protected final void f() {
            r2 = this;
            r0 = 1
            r2.af = r0
            com.tkay.basead.ui.b r0 = r2.A
            if (r0 != 0) goto L10
            com.tkay.basead.ui.b r0 = new com.tkay.basead.ui.b
            android.widget.RelativeLayout r1 = r2.w
            r0.<init>(r1)
            r2.A = r0
        L10:
            com.tkay.basead.ui.b r0 = r2.A
            r0.b()
            return
    }

    public com.tkay.basead.c.j fillVideoEndRecord(boolean r7) {
            r6 = this;
            com.tkay.basead.c.j r0 = new com.tkay.basead.c.j
            r0.<init>()
            int r1 = r6.t
            r2 = 2
            r3 = 1
            if (r1 != r2) goto Ld
            r1 = 4
            goto Le
        Ld:
            r1 = r3
        Le:
            r0.l = r1
            r0.r = r3
            com.tkay.basead.ui.PlayerView r1 = r6.x
            r4 = 0
            if (r1 == 0) goto L1e
            int r1 = r1.getVideoLength()
            int r1 = r1 / 1000
            goto L1f
        L1e:
            r1 = r4
        L1f:
            r0.a = r1
            int r1 = r6.B
            int r1 = r1 / 1000
            r0.b = r1
            com.tkay.basead.ui.PlayerView r1 = r6.x
            if (r1 == 0) goto L32
            int r1 = r1.getCurrentPosition()
            int r1 = r1 / 1000
            goto L33
        L32:
            r1 = r4
        L33:
            r0.c = r1
            int r1 = r6.B
            if (r1 != 0) goto L3b
            r1 = r3
            goto L3c
        L3b:
            r1 = r4
        L3c:
            r0.d = r1
            int r1 = r6.B
            if (r1 != 0) goto L44
            r1 = r3
            goto L45
        L44:
            r1 = r2
        L45:
            r0.o = r1
            com.tkay.basead.ui.PlayerView r1 = r6.x
            if (r1 == 0) goto L58
            int r1 = r1.getCurrentPosition()
            com.tkay.basead.ui.PlayerView r5 = r6.x
            int r5 = r5.getVideoLength()
            if (r1 != r5) goto L58
            goto L59
        L58:
            r3 = r4
        L59:
            r0.e = r3
            if (r7 == 0) goto L5e
            r2 = r4
        L5e:
            r0.u = r2
            long r1 = r6.aj
            r0.f = r1
            long r1 = java.lang.System.currentTimeMillis()
            r0.g = r1
            com.tkay.basead.ui.PlayerView r7 = r6.x
            if (r7 == 0) goto L72
            int r4 = r7.getCurrentPosition()
        L72:
            r0.h = r4
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r1 = "Video End Record:"
            r7.<init>(r1)
            java.lang.String r1 = r0.toString()
            r7.append(r1)
            return r0
    }

    @Override
    protected final void g() {
            r1 = this;
            r0 = 0
            r1.af = r0
            com.tkay.basead.ui.BaseScreenATView$3 r0 = new com.tkay.basead.ui.BaseScreenATView$3
            r0.<init>(r1)
            r1.post(r0)
            return
    }

    public float getCloseButtonScaleFactor() {
            r1 = this;
            float r0 = r1.N
            return r0
    }

    public boolean getHasPerformClick() {
            r1 = this;
            boolean r0 = r1.an
            return r0
    }

    public long getHideBannerTime() {
            r2 = this;
            long r0 = r2.ai
            return r0
    }

    public long getShowBannerTime() {
            r2 = this;
            long r0 = r2.ag
            return r0
    }

    @Override
    protected final synchronized void h() {
            r4 = this;
            monitor-enter(r4)
            com.tkay.core.common.f.i r0 = r4.c     // Catch: java.lang.Throwable -> L24
            com.tkay.core.common.f.j r0 = r0.m     // Catch: java.lang.Throwable -> L24
            int r0 = r0.R()     // Catch: java.lang.Throwable -> L24
            if (r0 <= 0) goto L1f
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L24
            java.lang.Runnable r1 = r4.V     // Catch: java.lang.Throwable -> L24
            com.tkay.core.common.f.i r2 = r4.c     // Catch: java.lang.Throwable -> L24
            com.tkay.core.common.f.j r2 = r2.m     // Catch: java.lang.Throwable -> L24
            int r2 = r2.R()     // Catch: java.lang.Throwable -> L24
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L24
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r4)
            return
        L1f:
            super.h()     // Catch: java.lang.Throwable -> L24
            monitor-exit(r4)
            return
        L24:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public boolean hasReward() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    @Override
    protected final com.tkay.basead.c.i i() {
            r3 = this;
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r1 = r1.d
            java.lang.String r2 = r3.q
            r0.<init>(r1, r2)
            int r1 = r3.getWidth()
            r0.e = r1
            int r1 = r3.getHeight()
            r0.f = r1
            com.tkay.basead.ui.PlayerView r1 = r3.x
            if (r1 == 0) goto L28
            boolean r1 = r1.hasVideo()
            if (r1 == 0) goto L28
            r1 = 1
            com.tkay.basead.c.j r1 = r3.fillVideoEndRecord(r1)
            r0.h = r1
        L28:
            return r0
    }

    public void init() {
            r3 = this;
            r3.b()
            int r0 = r3.Q
            boolean r0 = r3.c(r0)
            r3.F = r0
            boolean r0 = r3.u
            if (r0 == 0) goto L16
            r3.J()
            r3.p()
            return
        L16:
            int r0 = r3.a
            r1 = 1
            if (r1 != r0) goto L40
            com.tkay.core.common.f.h r0 = r3.d
            boolean r0 = r0.E()
            if (r0 == 0) goto L2d
            r3.J()
            r3.c()
            r3.K()
            return
        L2d:
            java.lang.String r0 = "40002"
            java.lang.String r1 = "Video url no exist!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)
            r3.a(r0)
            com.tkay.basead.e.b$b r0 = r3.E
            if (r0 == 0) goto L6c
            r0.e()
            return
        L40:
            r2 = 3
            if (r2 != r0) goto L6c
            com.tkay.core.common.f.h r0 = r3.d
            int r0 = r0.C()
            if (r0 != r1) goto L5d
            com.tkay.core.common.f.h r0 = r3.d
            boolean r0 = r0.E()
            if (r0 == 0) goto L5d
            r3.J()
            r3.c()
            r3.K()
            return
        L5d:
            r3.J()
            r3.p()
            boolean r0 = r3.n()
            if (r0 != 0) goto L6c
            r3.h()
        L6c:
            return
    }

    public boolean isShowEndCard() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    public boolean isVideoMute() {
            r1 = this;
            boolean r0 = r1.M
            return r0
    }

    public boolean needHideFeedbackButton() {
            r1 = this;
            boolean r0 = r1.ae
            return r0
    }

    protected final void o() {
            r3 = this;
            com.tkay.basead.ui.BaseShakeView r0 = r3.R
            if (r0 == 0) goto L1a
            com.tkay.basead.ui.BaseScreenATView$10 r1 = new com.tkay.basead.ui.BaseScreenATView$10
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            com.tkay.basead.ui.BaseShakeView r0 = r3.R
            com.tkay.basead.ui.BaseScreenATView$11 r1 = new com.tkay.basead.ui.BaseScreenATView$11
            r1.<init>(r3)
            com.tkay.core.common.f.i r2 = r3.c
            com.tkay.core.common.f.j r2 = r2.m
            r0.setOnShakeListener(r1, r2)
        L1a:
            com.tkay.basead.ui.BaseShakeView r0 = r3.S
            if (r0 == 0) goto L34
            com.tkay.basead.ui.BaseScreenATView$12 r1 = new com.tkay.basead.ui.BaseScreenATView$12
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            com.tkay.basead.ui.BaseShakeView r0 = r3.S
            com.tkay.basead.ui.BaseScreenATView$13 r1 = new com.tkay.basead.ui.BaseScreenATView$13
            r1.<init>(r3)
            com.tkay.core.common.f.i r2 = r3.c
            com.tkay.core.common.f.j r2 = r2.m
            r0.setOnShakeListener(r1, r2)
        L34:
            return
    }

    protected final void p() {
            r4 = this;
            r0 = 1
            r4.u = r0
            boolean r0 = r4.n()
            if (r0 == 0) goto Ld
            r4.M()
            goto L10
        Ld:
            r4.N()
        L10:
            com.tkay.basead.ui.BaseEndCardView r0 = r4.z
            if (r0 == 0) goto L25
            com.tkay.basead.ui.BaseScreenATView$14 r1 = new com.tkay.basead.ui.BaseScreenATView$14
            r1.<init>(r4)
            com.tkay.core.common.f.i r2 = r4.c
            com.tkay.core.common.f.j r2 = r2.m
            int r2 = a(r2)
            long r2 = (long) r2
            r0.postDelayed(r1, r2)
        L25:
            com.tkay.basead.c.i r0 = r4.i()
            r1 = 6
            com.tkay.core.common.f.h r2 = r4.d
            com.tkay.basead.a.b.a(r1, r2, r0)
            return
    }

    protected abstract int q();

    protected final void r() {
            r3 = this;
            r0 = 1
            r3.am = r0
            com.tkay.basead.c r0 = r3.ak     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L10
            com.tkay.basead.c r0 = r3.ak     // Catch: java.lang.Exception -> L45
            boolean r0 = r0.a()     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L10
            return
        L10:
            com.tkay.basead.ui.PlayerView r0 = r3.x     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L44
            com.tkay.basead.ui.PlayerView r0 = r3.x     // Catch: java.lang.Exception -> L45
            boolean r0 = r0.hasVideo()     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L44
            com.tkay.basead.ui.PlayerView r0 = r3.x     // Catch: java.lang.Exception -> L45
            boolean r0 = r0.isPlaying()     // Catch: java.lang.Exception -> L45
            if (r0 != 0) goto L3f
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L45
            r3.aj = r0     // Catch: java.lang.Exception -> L45
            com.tkay.basead.ui.PlayerView r0 = r3.x     // Catch: java.lang.Exception -> L45
            int r0 = r0.getCurrentPosition()     // Catch: java.lang.Exception -> L45
            r3.B = r0     // Catch: java.lang.Exception -> L45
            if (r0 == 0) goto L3f
            r0 = 15
            com.tkay.core.common.f.h r1 = r3.d     // Catch: java.lang.Exception -> L45
            com.tkay.basead.c.i r2 = r3.i()     // Catch: java.lang.Exception -> L45
            com.tkay.basead.a.b.a(r0, r1, r2)     // Catch: java.lang.Exception -> L45
        L3f:
            com.tkay.basead.ui.PlayerView r0 = r3.x     // Catch: java.lang.Exception -> L45
            r0.start()     // Catch: java.lang.Exception -> L45
        L44:
            return
        L45:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    protected final void s() {
            r3 = this;
            r0 = 0
            r3.am = r0
            com.tkay.basead.ui.PlayerView r0 = r3.x
            if (r0 == 0) goto L1d
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L18
            r0 = 11
            com.tkay.core.common.f.h r1 = r3.d
            com.tkay.basead.c.i r2 = r3.i()
            com.tkay.basead.a.b.a(r0, r1, r2)
        L18:
            com.tkay.basead.ui.PlayerView r0 = r3.x
            r0.pause()
        L1d:
            return
    }

    public void setCloseButtonScaleFactor(float r2) {
            r1 = this;
            r1.N = r2
            com.tkay.basead.ui.CloseImageView r0 = r1.I
            if (r0 == 0) goto L9
            r0.setClickAreaScaleFactor(r2)
        L9:
            return
    }

    public void setHasPerformClick(boolean r1) {
            r0 = this;
            r0.an = r1
            return
    }

    public void setHasReward(boolean r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setHideBannerTime(long r1) {
            r0 = this;
            r0.ai = r1
            return
    }

    public void setHideFeedbackButton(boolean r1) {
            r0 = this;
            r0.ae = r1
            return
    }

    public void setIsShowEndCard(boolean r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public void setListener(com.tkay.basead.e.b.b r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public void setShowBannerTime(long r1) {
            r0 = this;
            r0.ag = r1
            return
    }

    public void setVideoMute(boolean r1) {
            r0 = this;
            r0.M = r1
            return
    }

    protected final void t() {
            r2 = this;
            r2.destroy()
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r1 = r2.V
            r0.c(r1)
            return
    }

    protected void u() {
            r4 = this;
            com.tkay.core.common.f.h r0 = r4.d
            java.lang.String r0 = r0.u()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L23
            com.tkay.basead.a.f.a()
            r1 = 1
            java.lang.String r2 = com.tkay.basead.a.f.a(r1, r0)
            int[] r2 = com.tkay.core.common.l.b.a(r2)
            if (r2 == 0) goto L23
            r3 = 0
            r3 = r2[r3]
            r4.ac = r3
            r1 = r2[r1]
            r4.ad = r1
        L23:
            com.tkay.core.common.f.h r1 = r4.d
            java.lang.String r1 = r1.x()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L46
            com.tkay.basead.a.f.a()
            r0 = 4
            java.lang.String r0 = com.tkay.basead.a.f.a(r0, r1)
            com.tkay.basead.a.b.g$a r0 = com.tkay.basead.a.b.g.a(r0)
            if (r0 == 0) goto L54
            int r1 = r0.a
            r4.aa = r1
            int r0 = r0.b
            r4.ab = r0
            goto L54
        L46:
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L54
            int r0 = r4.ac
            r4.aa = r0
            int r0 = r4.ad
            r4.ab = r0
        L54:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "mMaterialWidth: "
            r0.<init>(r1)
            int r1 = r4.aa
            r0.append(r1)
            java.lang.String r1 = ", mMaterialHeight: "
            r0.append(r1)
            int r1 = r4.ab
            r0.append(r1)
            return
    }

    protected void v() {
            r8 = this;
            com.tkay.basead.ui.PanelView r0 = r8.y
            if (r0 == 0) goto L1c
            r1 = 4
            r0.setVisibility(r1)
            com.tkay.basead.ui.PanelView r2 = r8.y
            com.tkay.core.common.f.h r3 = r8.d
            com.tkay.core.common.f.i r4 = r8.c
            int r5 = r8.t
            boolean r6 = r8.m()
            com.tkay.basead.ui.BaseScreenATView$5 r7 = new com.tkay.basead.ui.BaseScreenATView$5
            r7.<init>(r8)
            r2.init(r3, r4, r5, r6, r7)
        L1c:
            r8.w()
            return
    }

    protected abstract void w();

    protected final boolean x() {
            r1 = this;
            com.tkay.basead.c r0 = r1.ak
            if (r0 == 0) goto La
            boolean r0 = r0.a()
            if (r0 != 0) goto L10
        La:
            boolean r0 = r1.am
            if (r0 == 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    protected void y() {
            r0 = this;
            return
    }

    protected void z() {
            r2 = this;
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r2.M
            if (r1 == 0) goto Le
            r1 = 1
            r0.setMute(r1)
            goto L12
        Le:
            r1 = 0
            r0.setMute(r1)
        L12:
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            r1 = 4
            r0.setVisibility(r1)
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            com.tkay.basead.ui.BaseScreenATView$6 r1 = new com.tkay.basead.ui.BaseScreenATView$6
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }
}

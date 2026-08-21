package com.tkay.basead.ui;

public abstract class BaseSplashATView extends com.tkay.basead.ui.BaseATView {
    protected android.widget.TextView A;
    protected com.tkay.basead.ui.CloseFrameLayout B;
    protected java.lang.String C;
    protected java.util.Timer D;
    protected boolean E;
    protected com.tkay.basead.e.a F;
    protected com.tkay.basead.ui.b G;
    final long H;
    protected com.tkay.basead.ui.BaseShakeView I;
    com.tkay.basead.ui.GuideToClickView J;
    protected final android.view.View.OnClickListener K;
    boolean L;
    boolean M;
    boolean N;
    boolean O;
    private com.tkay.core.common.l.a.f.b a;
    private long t;


    final class 2 implements android.view.View.OnClickListener {
        final com.tkay.basead.ui.BaseSplashATView a;

        2(com.tkay.basead.ui.BaseSplashATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onClick(android.view.View r1) {
                r0 = this;
                com.tkay.basead.ui.BaseSplashATView r1 = r0.a
                com.tkay.core.common.f.i r1 = r1.c
                com.tkay.core.common.f.j r1 = r1.m
                int r1 = r1.p()
                if (r1 == 0) goto L12
                com.tkay.basead.ui.BaseSplashATView r1 = r0.a
                boolean r1 = r1.N
                if (r1 == 0) goto L17
            L12:
                com.tkay.basead.ui.BaseSplashATView r1 = r0.a
                com.tkay.basead.ui.BaseSplashATView.b(r1)
            L17:
                return
        }
    }

    final class 3 extends java.util.TimerTask {
        final com.tkay.basead.ui.BaseSplashATView a;

        3(com.tkay.basead.ui.BaseSplashATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        private void a() {
                r5 = this;
                com.tkay.basead.ui.BaseSplashATView r0 = r5.a
                long r0 = com.tkay.basead.ui.BaseSplashATView.d(r0)
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 > 0) goto L12
                com.tkay.basead.ui.BaseSplashATView r0 = r5.a
                com.tkay.basead.ui.BaseSplashATView.e(r0)
                goto L1b
            L12:
                com.tkay.basead.ui.BaseSplashATView r0 = r5.a
                long r1 = com.tkay.basead.ui.BaseSplashATView.d(r0)
                com.tkay.basead.ui.BaseSplashATView.a(r0, r1)
            L1b:
                com.tkay.basead.ui.BaseSplashATView r0 = r5.a
                long r1 = com.tkay.basead.ui.BaseSplashATView.d(r0)
                r3 = 1000(0x3e8, double:4.94E-321)
                long r1 = r1 - r3
                com.tkay.basead.ui.BaseSplashATView.b(r0, r1)
                return
        }

        public static void lambda$wMQ-UebBlFUUlpx3w6luJJ-WyXs(com.tkay.basead.ui.BaseSplashATView.3 r0) {
                r0.a()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.basead.ui.BaseSplashATView r0 = r2.a
                com.tkay.core.common.l.a.f$b r1 = com.tkay.basead.ui.BaseSplashATView.c(r0)
                boolean r0 = com.tkay.core.common.l.u.a(r0, r1)
                if (r0 == 0) goto L16
                com.tkay.basead.ui.BaseSplashATView r0 = r2.a
                com.tkay.basead.ui.-$$Lambda$BaseSplashATView$3$wMQ-UebBlFUUlpx3w6luJJ-WyXs r1 = new com.tkay.basead.ui.-$$Lambda$BaseSplashATView$3$wMQ-UebBlFUUlpx3w6luJJ-WyXs
                r1.<init>(r2)
                r0.post(r1)
            L16:
                return
        }
    }



    public BaseSplashATView(android.content.Context r3) {
            r2 = this;
            r2.<init>(r3)
            java.lang.String r3 = "Skip"
            r2.C = r3
            r0 = 1000(0x3e8, double:4.94E-321)
            r2.H = r0
            r0 = 5000(0x1388, double:2.4703E-320)
            r2.t = r0
            com.tkay.basead.ui.BaseSplashATView$1 r3 = new com.tkay.basead.ui.BaseSplashATView$1
            r3.<init>(r2)
            r2.K = r3
            r3 = 0
            r2.L = r3
            r2.M = r3
            r2.N = r3
            return
    }

    public BaseSplashATView(android.content.Context r2, com.tkay.core.common.f.i r3, com.tkay.core.common.f.h r4, com.tkay.basead.e.a r5) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            java.lang.String r2 = "Skip"
            r1.C = r2
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.H = r2
            r2 = 5000(0x1388, double:2.4703E-320)
            r1.t = r2
            com.tkay.basead.ui.BaseSplashATView$1 r2 = new com.tkay.basead.ui.BaseSplashATView$1
            r2.<init>(r1)
            r1.K = r2
            r2 = 0
            r1.L = r2
            r1.M = r2
            r1.N = r2
            com.tkay.core.common.l.a.f$b r3 = new com.tkay.core.common.l.a.f$b
            r3.<init>()
            r1.a = r3
            r1.F = r5
            android.content.res.Resources r3 = r1.getResources()
            android.content.Context r4 = r1.getContext()
            java.lang.String r5 = "myoffer_splash_skip_text"
            java.lang.String r0 = "string"
            int r4 = com.tkay.core.common.l.h.a(r4, r5, r0)
            java.lang.String r3 = r3.getString(r4)
            r1.C = r3
            android.content.Context r3 = r1.getContext()
            java.lang.String r4 = "id"
            java.lang.String r5 = "myoffer_splash_skip"
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r4)
            android.view.View r3 = r1.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r1.A = r3
            android.content.Context r3 = r1.getContext()
            java.lang.String r5 = "myoffer_splash_skip_area"
            int r3 = com.tkay.core.common.l.h.a(r3, r5, r4)
            android.view.View r3 = r1.findViewById(r3)
            com.tkay.basead.ui.CloseFrameLayout r3 = (com.tkay.basead.ui.CloseFrameLayout) r3
            r1.B = r3
            com.tkay.core.common.f.i r3 = r1.c
            com.tkay.core.common.f.j r3 = r3.m
            long r3 = r3.n()
            r1.t = r3
            com.tkay.basead.ui.CloseFrameLayout r3 = r1.B
            com.tkay.core.common.f.i r4 = r1.c
            com.tkay.core.common.f.j r4 = r4.m
            int r4 = r4.h()
            r1.a(r3, r4)
            r1.E = r2
            return
    }

    private void a(long r5) {
            r4 = this;
            com.tkay.core.common.f.i r0 = r4.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.p()
            r1 = 1000(0x3e8, double:4.94E-321)
            if (r0 != 0) goto L29
            android.widget.TextView r0 = r4.A
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r5 = r5 / r1
            r3.append(r5)
            java.lang.String r5 = "s | "
            r3.append(r5)
            java.lang.String r5 = r4.C
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            r0.setText(r5)
            return
        L29:
            android.widget.TextView r0 = r4.A
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            long r5 = r5 / r1
            r3.append(r5)
            java.lang.String r5 = " s"
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            r0.setText(r5)
            return
    }

    static void a(com.tkay.basead.ui.BaseSplashATView r1) {
            r0 = 1
            super.b(r0)
            return
    }

    static void a(com.tkay.basead.ui.BaseSplashATView r0, long r1) {
            r0.a(r1)
            return
    }

    static long b(com.tkay.basead.ui.BaseSplashATView r0, long r1) {
            r0.t = r1
            return r1
    }

    private void b() {
            r9 = this;
            boolean r0 = r9.M
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r9.M = r0
            boolean r0 = r9.O
            if (r0 == 0) goto Ld
            return
        Ld:
            com.tkay.basead.ui.CloseFrameLayout r0 = r9.B
            r1 = 0
            r0.setVisibility(r1)
            com.tkay.basead.ui.CloseFrameLayout r0 = r9.B
            com.tkay.basead.ui.BaseSplashATView$2 r2 = new com.tkay.basead.ui.BaseSplashATView$2
            r2.<init>(r9)
            r0.setOnClickListener(r2)
            r9.N = r1
            java.util.Timer r3 = new java.util.Timer
            r3.<init>()
            r9.D = r3
            com.tkay.basead.ui.BaseSplashATView$3 r4 = new com.tkay.basead.ui.BaseSplashATView$3
            r4.<init>(r9)
            r5 = 1000(0x3e8, double:4.94E-321)
            r7 = 1000(0x3e8, double:4.94E-321)
            r3.schedule(r4, r5, r7)
            long r0 = r9.t
            r9.a(r0)
            long r0 = r9.t
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 - r2
            r9.t = r0
            return
    }

    static void b(com.tkay.basead.ui.BaseSplashATView r0) {
            r0.s()
            return
    }

    static com.tkay.core.common.l.a.f.b c(com.tkay.basead.ui.BaseSplashATView r0) {
            com.tkay.core.common.l.a.f$b r0 = r0.a
            return r0
    }

    private void c() {
            r9 = this;
            com.tkay.basead.ui.CloseFrameLayout r0 = r9.B
            r1 = 0
            r0.setVisibility(r1)
            com.tkay.basead.ui.CloseFrameLayout r0 = r9.B
            com.tkay.basead.ui.BaseSplashATView$2 r2 = new com.tkay.basead.ui.BaseSplashATView$2
            r2.<init>(r9)
            r0.setOnClickListener(r2)
            r9.N = r1
            java.util.Timer r3 = new java.util.Timer
            r3.<init>()
            r9.D = r3
            com.tkay.basead.ui.BaseSplashATView$3 r4 = new com.tkay.basead.ui.BaseSplashATView$3
            r4.<init>(r9)
            r5 = 1000(0x3e8, double:4.94E-321)
            r7 = 1000(0x3e8, double:4.94E-321)
            r3.schedule(r4, r5, r7)
            long r0 = r9.t
            r9.a(r0)
            long r0 = r9.t
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 - r2
            r9.t = r0
            return
    }

    static long d(com.tkay.basead.ui.BaseSplashATView r2) {
            long r0 = r2.t
            return r0
    }

    static void e(com.tkay.basead.ui.BaseSplashATView r2) {
            r2.s()
            android.widget.TextView r0 = r2.A
            java.lang.String r1 = r2.C
            r0.setText(r1)
            r0 = 1
            r2.N = r0
            return
    }

    private void o() {
            r2 = this;
            r2.s()
            android.widget.TextView r0 = r2.A
            java.lang.String r1 = r2.C
            r0.setText(r1)
            r0 = 1
            r2.N = r0
            return
    }

    private void s() {
            r2 = this;
            java.util.Timer r0 = r2.D
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            r0 = 0
            r2.D = r0
            boolean r0 = r2.E
            if (r0 != 0) goto L27
            r0 = 1
            r2.E = r0
            boolean r0 = r2.L
            if (r0 != 0) goto L20
            java.lang.String r0 = "40002"
            java.lang.String r1 = "SplashView not showing on screen."
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)
            r2.a(r0)
        L20:
            com.tkay.basead.e.a r0 = r2.F
            if (r0 == 0) goto L27
            r0.onAdClosed()
        L27:
            return
    }

    @Override
    protected final void a(int r2) {
            r1 = this;
            com.tkay.basead.e.a r0 = r1.F
            if (r0 == 0) goto L7
            r0.onAdClick(r2)
        L7:
            return
    }

    protected final void a(com.tkay.basead.c.e r2) {
            r1 = this;
            boolean r0 = r1.L
            if (r0 != 0) goto Le
            r0 = 1
            r1.L = r0
            com.tkay.basead.e.a r0 = r1.F
            if (r0 == 0) goto Le
            r0.onShowFailed(r2)
        Le:
            return
    }

    @Override
    protected final void a(boolean r2) {
            r1 = this;
            com.tkay.basead.e.a r0 = r1.F
            if (r0 == 0) goto L7
            r0.onDeeplinkCallback(r2)
        L7:
            return
    }

    public void checkSkipViewLocation() {
            r5 = this;
            android.widget.TextView r0 = r5.A     // Catch: java.lang.Throwable -> L54
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L54
            boolean r1 = r0 instanceof android.widget.FrameLayout.LayoutParams     // Catch: java.lang.Throwable -> L54
            if (r1 == 0) goto L53
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L54
            int r0 = r0.topMargin     // Catch: java.lang.Throwable -> L54
            android.content.Context r1 = r5.getContext()     // Catch: java.lang.Throwable -> L54
            int r1 = com.tkay.core.common.l.h.b(r1)     // Catch: java.lang.Throwable -> L54
            int r0 = r0 + r1
            r1 = 2
            int[] r1 = new int[r1]     // Catch: java.lang.Throwable -> L54
            android.widget.TextView r2 = r5.A     // Catch: java.lang.Throwable -> L54
            r2.getLocationOnScreen(r1)     // Catch: java.lang.Throwable -> L54
            r2 = 1
            r3 = r1[r2]     // Catch: java.lang.Throwable -> L54
            if (r3 >= r0) goto L53
            r1 = r1[r2]     // Catch: java.lang.Throwable -> L54
            int r0 = r0 - r1
            android.widget.TextView r1 = r5.A     // Catch: java.lang.Throwable -> L54
            android.view.ViewParent r1 = r1.getParent()     // Catch: java.lang.Throwable -> L54
            boolean r2 = r1 instanceof android.view.ViewGroup     // Catch: java.lang.Throwable -> L54
            if (r2 == 0) goto L53
            r2 = r1
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2     // Catch: java.lang.Throwable -> L54
            r3 = r1
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3     // Catch: java.lang.Throwable -> L54
            int r3 = r3.getPaddingLeft()     // Catch: java.lang.Throwable -> L54
            r4 = r1
            android.view.ViewGroup r4 = (android.view.ViewGroup) r4     // Catch: java.lang.Throwable -> L54
            int r4 = r4.getPaddingTop()     // Catch: java.lang.Throwable -> L54
            int r4 = r4 + r0
            r0 = r1
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> L54
            int r0 = r0.getPaddingRight()     // Catch: java.lang.Throwable -> L54
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1     // Catch: java.lang.Throwable -> L54
            int r1 = r1.getPaddingBottom()     // Catch: java.lang.Throwable -> L54
            r2.setPadding(r3, r4, r0, r1)     // Catch: java.lang.Throwable -> L54
        L53:
            return
        L54:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            super.destroy()
            r0 = 0
            r1.F = r0
            return
    }

    @Override
    protected final void e() {
            r3 = this;
            r0 = 1
            r3.L = r0
            com.tkay.core.common.f.h r0 = r3.d
            com.tkay.basead.c.i r1 = r3.i()
            r2 = 8
            com.tkay.basead.a.b.a(r2, r0, r1)
            com.tkay.basead.e.a r0 = r3.F
            if (r0 == 0) goto L15
            r0.onAdShow()
        L15:
            return
    }

    @Override
    protected final void f() {
            r2 = this;
            com.tkay.basead.ui.GuideToClickView r0 = r2.J
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            com.tkay.core.common.f.h r0 = r2.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.z
            if (r0 == 0) goto L1f
            com.tkay.basead.ui.b r0 = r2.G
            if (r0 != 0) goto L1a
            com.tkay.basead.ui.b r0 = new com.tkay.basead.ui.b
            r0.<init>(r2)
            r2.G = r0
        L1a:
            com.tkay.basead.ui.b r0 = r2.G
            r0.b()
        L1f:
            return
    }

    @Override
    protected final void g() {
            r1 = this;
            com.tkay.core.common.f.h r0 = r1.d
            boolean r0 = r0 instanceof com.tkay.core.common.f.z
            if (r0 == 0) goto L12
            com.tkay.basead.ui.b r0 = r1.G
            if (r0 == 0) goto L12
            com.tkay.basead.ui.BaseSplashATView$4 r0 = new com.tkay.basead.ui.BaseSplashATView$4
            r0.<init>(r1)
            r1.post(r0)
        L12:
            return
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
            r0.s()
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            r0.checkSkipViewLocation()
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r9) {
            r8 = this;
            super.onWindowVisibilityChanged(r9)
            if (r9 != 0) goto L41
            boolean r9 = r8.M
            if (r9 != 0) goto L41
            r9 = 1
            r8.M = r9
            boolean r9 = r8.O
            if (r9 != 0) goto L41
            com.tkay.basead.ui.CloseFrameLayout r9 = r8.B
            r0 = 0
            r9.setVisibility(r0)
            com.tkay.basead.ui.CloseFrameLayout r9 = r8.B
            com.tkay.basead.ui.BaseSplashATView$2 r1 = new com.tkay.basead.ui.BaseSplashATView$2
            r1.<init>(r8)
            r9.setOnClickListener(r1)
            r8.N = r0
            java.util.Timer r2 = new java.util.Timer
            r2.<init>()
            r8.D = r2
            com.tkay.basead.ui.BaseSplashATView$3 r3 = new com.tkay.basead.ui.BaseSplashATView$3
            r3.<init>(r8)
            r4 = 1000(0x3e8, double:4.94E-321)
            r6 = 1000(0x3e8, double:4.94E-321)
            r2.schedule(r3, r4, r6)
            long r0 = r8.t
            r8.a(r0)
            long r0 = r8.t
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 - r2
            r8.t = r0
        L41:
            return
    }

    protected void p() {
            r4 = this;
            java.util.List<android.view.View> r0 = r4.r
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1b
            java.util.List<android.view.View> r2 = r4.r
            java.lang.Object r2 = r2.get(r1)
            android.view.View r2 = (android.view.View) r2
            if (r2 == 0) goto L18
            android.view.View$OnClickListener r3 = r4.K
            r2.setOnClickListener(r3)
        L18:
            int r1 = r1 + 1
            goto L7
        L1b:
            return
    }

    protected final void q() {
            r3 = this;
            boolean r0 = r3.m()
            if (r0 == 0) goto L33
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "myoffer_shake_view"
            java.lang.String r2 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.BaseShakeView r0 = (com.tkay.basead.ui.BaseShakeView) r0
            r3.I = r0
            r1 = 0
            r0.setVisibility(r1)
            com.tkay.basead.ui.BaseShakeView r0 = r3.I
            com.tkay.basead.ui.BaseSplashATView$5 r1 = new com.tkay.basead.ui.BaseSplashATView$5
            r1.<init>(r3)
            com.tkay.core.common.f.i r2 = r3.c
            com.tkay.core.common.f.j r2 = r2.m
            r0.setOnShakeListener(r1, r2)
            java.util.List<android.view.View> r0 = r3.r
            com.tkay.basead.ui.BaseShakeView r1 = r3.I
            r0.add(r1)
        L33:
            return
    }

    protected final void r() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "myoffer_guide_to_click_view"
            java.lang.String r2 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.GuideToClickView r0 = (com.tkay.basead.ui.GuideToClickView) r0
            r3.J = r0
            com.tkay.core.common.f.i r0 = r3.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.i()
            r1 = 1
            if (r0 != r1) goto L2e
            com.tkay.basead.ui.GuideToClickView r0 = r3.J
            if (r0 == 0) goto L2e
            r1 = 0
            r0.setVisibility(r1)
            java.util.List<android.view.View> r0 = r3.r
            com.tkay.basead.ui.GuideToClickView r1 = r3.J
            r0.add(r1)
        L2e:
            return
    }

    public void setDontCountDown(boolean r2) {
            r1 = this;
            r1.O = r2
            if (r2 == 0) goto Ld
            com.tkay.basead.ui.CloseFrameLayout r2 = r1.B
            if (r2 == 0) goto Ld
            r0 = 8
            r2.setVisibility(r0)
        Ld:
            return
    }
}

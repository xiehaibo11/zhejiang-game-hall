package com.tkay.expressad.video.module;

public class TkayContainerView extends com.tkay.expressad.video.module.TkayBaseView implements com.tkay.expressad.video.signal.e, com.tkay.expressad.video.signal.h {
    private int A;
    private boolean B;
    private boolean C;
    private boolean D;
    private boolean E;
    private boolean F;
    private boolean G;
    private int H;
    private boolean I;
    private boolean J;
    private int K;
    private int L;
    private int M;
    private int N;
    private int O;
    private java.lang.String P;
    private com.tkay.expressad.video.signal.factory.b Q;
    private com.tkay.expressad.video.dynview.widget.TYOrderCampView R;
    private boolean S;
    private boolean T;
    private java.util.List<com.tkay.expressad.foundation.d.c> U;
    private com.tkay.expressad.video.module.TkayPlayableView n;
    private com.tkay.expressad.video.module.TkayClickCTAView o;
    private com.tkay.expressad.video.module.TkayClickMiniCardView p;
    private com.tkay.expressad.video.module.TkayNativeEndCardView q;
    private com.tkay.expressad.video.module.TkayH5EndCardView r;
    private com.tkay.expressad.video.module.TkayVideoEndCoverView s;
    private com.tkay.expressad.video.module.TkayVastEndCardView t;
    private com.tkay.expressad.video.module.TkayLandingPageView u;
    private com.tkay.expressad.video.module.TkayAlertWebview v;
    private java.lang.String w;
    private int x;
    private int y;
    private int z;




    final class 4 extends com.tkay.expressad.video.module.a.a.i {
        final com.tkay.expressad.video.module.TkayContainerView a;

        4(com.tkay.expressad.video.module.TkayContainerView r1, com.tkay.expressad.video.module.a.a r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void a(int r1, java.lang.Object r2) {
                r0 = this;
                super.a(r1, r2)
                r2 = 100
                if (r1 != r2) goto L19
                com.tkay.expressad.video.module.TkayContainerView r1 = r0.a
                r1.webviewshow()
                com.tkay.expressad.video.module.TkayContainerView r1 = r0.a
                android.content.res.Resources r2 = r1.getResources()
                android.content.res.Configuration r2 = r2.getConfiguration()
                r1.onConfigurationChanged(r2)
            L19:
                return
        }
    }

    public TkayContainerView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 1
            r1.y = r2
            r1.z = r2
            r1.A = r2
            r0 = 0
            r1.B = r0
            r1.C = r0
            r1.D = r0
            r1.E = r0
            r1.F = r2
            r1.G = r0
            r1.I = r0
            r1.J = r0
            r1.S = r0
            r1.T = r0
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.U = r2
            return
    }

    public TkayContainerView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1
            r0.y = r1
            r0.z = r1
            r0.A = r1
            r2 = 0
            r0.B = r2
            r0.C = r2
            r0.D = r2
            r0.E = r2
            r0.F = r1
            r0.G = r2
            r0.I = r2
            r0.J = r2
            r0.S = r2
            r0.T = r2
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.U = r1
            return
    }

    private void a(android.content.res.Configuration r4, com.tkay.expressad.video.module.TkayBaseView... r5) {
            r3 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto L2b
            r1 = r5[r0]
            if (r1 == 0) goto L11
            boolean r2 = r1 instanceof com.tkay.expressad.video.module.TkayClickMiniCardView
            if (r2 == 0) goto L11
            r1.onSelfConfigurationChanged(r4)
            goto L28
        L11:
            if (r1 == 0) goto L28
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L28
            android.view.ViewParent r2 = r1.getParent()
            if (r2 == 0) goto L28
            boolean r2 = r3.isLast()
            if (r2 != 0) goto L28
            r1.onSelfConfigurationChanged(r4)
        L28:
            int r0 = r0 + 1
            goto L1
        L2b:
            return
    }

    private static void a(android.view.View r1) {
            if (r1 == 0) goto L12
            android.view.ViewParent r0 = r1.getParent()     // Catch: java.lang.Throwable -> Le
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto L12
            r0.removeView(r1)     // Catch: java.lang.Throwable -> Le
            goto L12
        Le:
            r1 = move-exception
            r1.getMessage()
        L12:
            return
    }

    static void a(com.tkay.expressad.video.module.TkayContainerView r0, com.tkay.expressad.video.signal.factory.b r1, java.lang.Integer r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.tkay.expressad.video.module.a.a r5, com.tkay.expressad.video.module.TkayBaseView... r6) {
            r4 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto L23
            r1 = r6[r0]
            if (r1 == 0) goto L20
            boolean r2 = r1 instanceof com.tkay.expressad.video.module.TkayClickMiniCardView
            if (r2 == 0) goto L18
            com.tkay.expressad.video.module.a.a.g r2 = new com.tkay.expressad.video.module.a.a.g
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r4.p
            r2.<init>(r3, r5)
            r1.setNotifyListener(r2)
            goto L20
        L18:
            com.tkay.expressad.video.module.a.a.i r2 = new com.tkay.expressad.video.module.a.a.i
            r2.<init>(r5)
            r1.setNotifyListener(r2)
        L20:
            int r0 = r0 + 1
            goto L1
        L23:
            return
    }

    private void a(com.tkay.expressad.video.signal.factory.b r4) {
            r3 = this;
            com.tkay.expressad.video.module.TkayPlayableView r0 = r3.n
            if (r0 != 0) goto Ld
            com.tkay.expressad.video.module.TkayPlayableView r0 = new com.tkay.expressad.video.module.TkayPlayableView
            android.content.Context r1 = r3.a
            r0.<init>(r1)
            r3.n = r0
        Ld:
            com.tkay.expressad.video.module.TkayPlayableView r0 = r3.n
            int r1 = r3.z
            r0.setCloseDelayShowTime(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r3.n
            int r1 = r3.A
            r0.setPlayCloseBtnTm(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r3.n
            com.tkay.expressad.foundation.d.c r1 = r3.b
            r0.setCampaign(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r3.n
            com.tkay.expressad.video.module.TkayContainerView$4 r1 = new com.tkay.expressad.video.module.TkayContainerView$4
            com.tkay.expressad.video.module.a.a r2 = r3.e
            r1.<init>(r3, r2)
            r0.setNotifyListener(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r3.n
            r0.preLoadData(r4)
            return
    }

    private void a(com.tkay.expressad.video.signal.factory.b r12, java.lang.Integer r13) {
            r11 = this;
            r11.Q = r12
            com.tkay.expressad.foundation.d.c r0 = r11.b
            if (r0 == 0) goto L197
            if (r13 != 0) goto L12
            com.tkay.expressad.foundation.d.c r13 = r11.b
            int r13 = r13.F()
            java.lang.Integer r13 = java.lang.Integer.valueOf(r13)
        L12:
            boolean r0 = r11.isLast()
            if (r0 != 0) goto L1b
            r11.p()
        L1b:
            int r13 = r13.intValue()
            r0 = 1
            if (r13 == r0) goto L197
            r1 = 3
            if (r13 == r1) goto L172
            r1 = 4
            if (r13 == r1) goto L151
            r1 = 5
            if (r13 == r1) goto L197
            int r13 = r11.y
            r2 = 2
            if (r13 != r2) goto Lc9
            com.tkay.expressad.foundation.d.c r13 = r11.b
            boolean r13 = r13.j()
            com.tkay.expressad.foundation.d.c r0 = r11.b
            java.lang.String r0 = r0.I()
            boolean r0 = com.tkay.expressad.foundation.h.t.f(r0)
            com.tkay.expressad.foundation.d.c r3 = r11.b
            if (r3 == 0) goto L49
            if (r13 == 0) goto L49
            if (r0 != 0) goto L49
            return
        L49:
            com.tkay.expressad.foundation.d.c r13 = r11.b
            int r13 = r13.f()
            if (r13 == r2) goto Lc8
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = r11.r
            if (r13 != 0) goto L5e
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = new com.tkay.expressad.video.module.TkayH5EndCardView
            android.content.Context r0 = r11.a
            r13.<init>(r0)
            r11.r = r13
        L5e:
            com.tkay.expressad.foundation.d.c r13 = r11.b
            int r13 = r13.k()
            if (r13 != r1) goto L79
            com.tkay.expressad.video.module.a.a r13 = r11.e
            if (r13 == 0) goto L79
            com.tkay.expressad.video.module.a.a r13 = r11.e
            boolean r13 = r13 instanceof com.tkay.expressad.video.module.a.a.k
            if (r13 == 0) goto L79
            com.tkay.expressad.video.module.a.a r13 = r11.e
            com.tkay.expressad.video.module.a.a.k r13 = (com.tkay.expressad.video.module.a.a.k) r13
            com.tkay.expressad.foundation.d.c r0 = r11.b
            r13.a(r0)
        L79:
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = r11.r
            com.tkay.expressad.foundation.d.c r0 = r11.b
            r13.setCampaign(r0)
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = r11.r
            int r0 = r11.z
            r13.setCloseDelayShowTime(r0)
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = r11.r
            com.tkay.expressad.video.module.a.a.i r0 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r1 = r11.e
            r0.<init>(r1)
            r13.setNotifyListener(r0)
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = r11.r
            java.lang.String r0 = r11.w
            r13.setUnitId(r0)
            com.tkay.expressad.video.module.TkayH5EndCardView r1 = r11.r
            java.lang.String r2 = r11.P
            int r3 = r11.K
            int r4 = r11.L
            int r5 = r11.M
            int r6 = r11.N
            r1.setNotchValue(r2, r3, r4, r5, r6)
            com.tkay.expressad.video.module.TkayH5EndCardView r13 = r11.r
            r13.preLoadData(r12)
            boolean r12 = r11.D
            if (r12 != 0) goto Lc8
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.String r13 = "showTransparent = "
            r12.<init>(r13)
            boolean r13 = r11.D
            r12.append(r13)
            java.lang.String r13 = " addview"
            r12.append(r13)
            com.tkay.expressad.video.module.TkayH5EndCardView r12 = r11.r
            r11.addView(r12)
        Lc8:
            return
        Lc9:
            com.tkay.expressad.foundation.d.c r13 = r11.b
            r1 = 0
            if (r13 == 0) goto Le2
            com.tkay.expressad.foundation.d.c r13 = r11.b
            com.tkay.expressad.foundation.d.c$c r13 = r13.M()
            if (r13 == 0) goto Le2
            com.tkay.expressad.foundation.d.c r13 = r11.b
            com.tkay.expressad.foundation.d.c$c r13 = r13.M()
            int r13 = r13.c()
            r9 = r13
            goto Le3
        Le2:
            r9 = r1
        Le3:
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            if (r13 != 0) goto L118
            if (r13 != 0) goto L118
            com.tkay.expressad.foundation.d.c r13 = r11.b
            boolean r13 = r13.j()
            if (r13 == 0) goto Lf5
            r11.q()
            goto L118
        Lf5:
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = new com.tkay.expressad.video.module.TkayNativeEndCardView
            android.content.Context r4 = r11.a
            r5 = 0
            r6 = 0
            r7 = -1
            com.tkay.expressad.foundation.d.c r3 = r11.b
            int r3 = r3.f()
            if (r3 != r2) goto L106
            r8 = r0
            goto L107
        L106:
            r8 = r1
        L107:
            com.tkay.expressad.foundation.d.c r0 = r11.b
            int r10 = r0.as()
            r3 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            r11.q = r13
            com.tkay.expressad.foundation.d.c r0 = r11.b
            r13.setCampaign(r0)
        L118:
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            r13.setLayout()
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            com.tkay.expressad.foundation.d.c r0 = r11.b
            r13.setCampaign(r0)
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            java.lang.String r0 = r11.w
            r13.setUnitId(r0)
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            int r0 = r11.z
            r13.setCloseBtnDelay(r0)
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            com.tkay.expressad.video.module.a.a.i r0 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r1 = r11.e
            r0.<init>(r1)
            r13.setNotifyListener(r0)
            com.tkay.expressad.video.module.TkayNativeEndCardView r13 = r11.q
            r13.preLoadData(r12)
            com.tkay.expressad.video.module.TkayNativeEndCardView r12 = r11.q
            int r13 = r11.K
            int r0 = r11.L
            int r1 = r11.M
            int r2 = r11.N
            r12.setNotchPadding(r13, r0, r1, r2)
            return
        L151:
            com.tkay.expressad.video.module.TkayLandingPageView r12 = r11.u
            if (r12 != 0) goto L15e
            com.tkay.expressad.video.module.TkayLandingPageView r12 = new com.tkay.expressad.video.module.TkayLandingPageView
            android.content.Context r13 = r11.a
            r12.<init>(r13)
            r11.u = r12
        L15e:
            com.tkay.expressad.video.module.TkayLandingPageView r12 = r11.u
            com.tkay.expressad.foundation.d.c r13 = r11.b
            r12.setCampaign(r13)
            com.tkay.expressad.video.module.TkayLandingPageView r12 = r11.u
            com.tkay.expressad.video.module.a.a.i r13 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r0 = r11.e
            r13.<init>(r0)
            r12.setNotifyListener(r13)
            goto L197
        L172:
            com.tkay.expressad.video.module.TkayVastEndCardView r13 = r11.t
            if (r13 != 0) goto L17f
            com.tkay.expressad.video.module.TkayVastEndCardView r13 = new com.tkay.expressad.video.module.TkayVastEndCardView
            android.content.Context r0 = r11.a
            r13.<init>(r0)
            r11.t = r13
        L17f:
            com.tkay.expressad.video.module.TkayVastEndCardView r13 = r11.t
            com.tkay.expressad.foundation.d.c r0 = r11.b
            r13.setCampaign(r0)
            com.tkay.expressad.video.module.TkayVastEndCardView r13 = r11.t
            com.tkay.expressad.video.module.a.a.l r0 = new com.tkay.expressad.video.module.a.a.l
            com.tkay.expressad.video.module.a.a r1 = r11.e
            r0.<init>(r1)
            r13.setNotifyListener(r0)
            com.tkay.expressad.video.module.TkayVastEndCardView r13 = r11.t
            r13.preLoadData(r12)
        L197:
            return
    }

    private void a(com.tkay.expressad.video.module.TkayH5EndCardView... r4) {
            r3 = this;
            r0 = 0
        L1:
            r1 = 4
            if (r0 >= r1) goto L20
            r1 = r4[r0]
            if (r1 == 0) goto L1d
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L1d
            android.view.ViewParent r2 = r1.getParent()
            if (r2 == 0) goto L1d
            boolean r2 = r3.isLast()
            if (r2 != 0) goto L1d
            r1.webviewshow()
        L1d:
            int r0 = r0 + 1
            goto L1
        L20:
            return
    }

    private boolean a() {
            r3 = this;
            android.view.ViewParent r0 = r3.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r1 = r0.getChildCount()
            int r0 = r0.indexOfChild(r3)
            r2 = 1
            int r1 = r1 - r2
            if (r0 != r1) goto L13
            return r2
        L13:
            r0 = 0
            return r0
    }

    private void b() {
            r3 = this;
            r3.setWrapContent()
            android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.RelativeLayout.LayoutParams
            if (r1 == 0) goto L13
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r1 = 12
            r2 = -1
            r0.addRule(r1, r2)
        L13:
            return
    }

    private void b(int r3) {
            r2 = this;
            r0 = -3
            if (r3 == r0) goto L72
            r0 = -2
            if (r3 == r0) goto L35
            com.tkay.expressad.video.module.TkayClickCTAView r3 = r2.o
            if (r3 != 0) goto L13
            com.tkay.expressad.video.module.TkayClickCTAView r3 = new com.tkay.expressad.video.module.TkayClickCTAView
            android.content.Context r0 = r2.a
            r3.<init>(r0)
            r2.o = r3
        L13:
            com.tkay.expressad.video.module.TkayClickCTAView r3 = r2.o
            com.tkay.expressad.foundation.d.c r0 = r2.b
            r3.setCampaign(r0)
            com.tkay.expressad.video.module.TkayClickCTAView r3 = r2.o
            java.lang.String r0 = r2.w
            r3.setUnitId(r0)
            com.tkay.expressad.video.module.TkayClickCTAView r3 = r2.o
            com.tkay.expressad.video.module.a.a.i r0 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r1 = r2.e
            r0.<init>(r1)
            r3.setNotifyListener(r0)
            com.tkay.expressad.video.module.TkayClickCTAView r3 = r2.o
            com.tkay.expressad.video.signal.factory.b r0 = r2.Q
            r3.preLoadData(r0)
            goto L72
        L35:
            com.tkay.expressad.foundation.d.c r3 = r2.b
            if (r3 == 0) goto L72
            com.tkay.expressad.foundation.d.c r3 = r2.b
            int r3 = r3.F()
            r0 = 2
            if (r3 != r0) goto L72
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r2.p
            if (r3 != 0) goto L4f
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = new com.tkay.expressad.video.module.TkayClickMiniCardView
            android.content.Context r0 = r2.a
            r3.<init>(r0)
            r2.p = r3
        L4f:
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r2.p
            com.tkay.expressad.foundation.d.c r0 = r2.b
            r3.setCampaign(r0)
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r2.p
            com.tkay.expressad.video.module.a.a.g r0 = new com.tkay.expressad.video.module.a.a.g
            com.tkay.expressad.video.module.a.a r1 = r2.e
            r0.<init>(r3, r1)
            r3.setNotifyListener(r0)
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r2.p
            com.tkay.expressad.video.signal.factory.b r0 = r2.Q
            r3.preLoadData(r0)
            r2.setMatchParent()
            r2.m()
            r2.p()
        L72:
            return
    }

    private void b(com.tkay.expressad.video.signal.factory.b r4) {
            r3 = this;
            r3.Q = r4
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r3.s
            if (r0 != 0) goto L25
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = new com.tkay.expressad.video.module.TkayVideoEndCoverView
            android.content.Context r1 = r3.a
            r0.<init>(r1)
            r3.s = r0
            com.tkay.expressad.foundation.d.c r1 = r3.b
            r0.setCampaign(r1)
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r3.s
            com.tkay.expressad.video.module.a.a.i r1 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r2 = r3.e
            r1.<init>(r2)
            r0.setNotifyListener(r1)
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r3.s
            r0.preLoadData(r4)
        L25:
            return
    }

    private void b(com.tkay.expressad.video.module.TkayH5EndCardView... r4) {
            r3 = this;
            r0 = 0
        L1:
            r1 = 4
            if (r0 >= r1) goto L1c
            r1 = r4[r0]
            if (r1 == 0) goto L19
            int r2 = r1.getVisibility()
            if (r2 != 0) goto L19
            android.content.res.Resources r2 = r3.getResources()
            android.content.res.Configuration r2 = r2.getConfiguration()
            r1.orientation(r2)
        L19:
            int r0 = r0 + 1
            goto L1
        L1c:
            return
    }

    private void e() {
            r2 = this;
            com.tkay.expressad.foundation.d.c r0 = r2.b
            if (r0 == 0) goto L1c
            com.tkay.expressad.foundation.d.c r0 = r2.b
            boolean r0 = r0.j()
            com.tkay.expressad.foundation.d.c r1 = r2.b
            java.lang.String r1 = r1.I()
            boolean r1 = com.tkay.expressad.foundation.h.t.f(r1)
            if (r0 == 0) goto L1c
            if (r1 != 0) goto L1c
            r2.i()
            return
        L1c:
            int r0 = r2.y
            r1 = 2
            if (r0 != r1) goto L29
            boolean r0 = r2.I
            if (r0 != 0) goto L29
            r2.h()
            return
        L29:
            r2.i()
            return
    }

    private void f() {
            r3 = this;
            com.tkay.expressad.video.module.TkayVastEndCardView r0 = r3.t
            if (r0 != 0) goto Le
            com.tkay.expressad.video.signal.factory.b r0 = r3.Q
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r3.a(r0, r1)
        Le:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2 = 13
            r0.addRule(r2, r1)
            com.tkay.expressad.video.module.TkayVastEndCardView r1 = r3.t
            r3.addView(r1, r0)
            com.tkay.expressad.video.module.TkayVastEndCardView r0 = r3.t
            r0.notifyShowListener()
            return
    }

    private void g() {
            r2 = this;
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r2.u
            if (r0 != 0) goto Le
            com.tkay.expressad.video.signal.factory.b r0 = r2.Q
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2.a(r0, r1)
        Le:
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r2.u
            java.lang.String r1 = r2.w
            r0.setUnitId(r1)
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r2.u
            com.tkay.expressad.video.signal.factory.b r1 = r2.Q
            r0.preLoadData(r1)
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r2.u
            r2.addView(r0)
            return
    }

    private void h() {
            r7 = this;
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            if (r0 != 0) goto Le
            com.tkay.expressad.video.signal.factory.b r0 = r7.Q
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r7.a(r0, r1)
        Le:
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            r1 = 1
            if (r0 == 0) goto L43
            boolean r0 = r0.isLoadSuccess()
            if (r0 == 0) goto L43
            r7.I = r1
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            r7.addView(r0)
            r7.webviewshow()
            android.content.res.Resources r0 = r7.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            r7.onConfigurationChanged(r0)
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            r0.excuteTask()
            com.tkay.expressad.video.module.TkayH5EndCardView r1 = r7.r
            java.lang.String r2 = r7.P
            int r3 = r7.K
            int r4 = r7.L
            int r5 = r7.M
            int r6 = r7.N
            r1.setNotchValue(r2, r3, r4, r5, r6)
            goto L55
        L43:
            r7.i()
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            if (r0 == 0) goto L55
            r2 = 3
            java.lang.String r3 = "timeout"
            r0.reportRenderResult(r3, r2)
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            r0.setError(r1)
        L55:
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r7.r
            if (r0 == 0) goto L5e
            java.lang.String r1 = r7.w
            r0.setUnitId(r1)
        L5e:
            return
    }

    private void i() {
            r3 = this;
            r0 = 1
            r3.y = r0
            com.tkay.expressad.video.module.TkayNativeEndCardView r1 = r3.q
            if (r1 != 0) goto L11
            com.tkay.expressad.video.signal.factory.b r1 = r3.Q
            r2 = 2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3.a(r1, r2)
        L11:
            com.tkay.expressad.video.module.TkayNativeEndCardView r1 = r3.q
            r3.addView(r1)
            android.content.res.Resources r1 = r3.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            r3.onConfigurationChanged(r1)
            com.tkay.expressad.video.module.TkayNativeEndCardView r1 = r3.q
            r1.notifyShowListener()
            r3.T = r0
            r3.bringToFront()
            return
    }

    private void j() {
            r4 = this;
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            if (r0 != 0) goto L29
            com.tkay.expressad.video.signal.factory.b r1 = r4.Q
            r4.Q = r1
            if (r0 != 0) goto L29
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = new com.tkay.expressad.video.module.TkayVideoEndCoverView
            android.content.Context r2 = r4.a
            r0.<init>(r2)
            r4.s = r0
            com.tkay.expressad.foundation.d.c r2 = r4.b
            r0.setCampaign(r2)
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            com.tkay.expressad.video.module.a.a.i r2 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r3 = r4.e
            r2.<init>(r3)
            r0.setNotifyListener(r2)
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            r0.preLoadData(r1)
        L29:
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            r4.addView(r0)
            android.content.res.Resources r0 = r4.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            r4.onConfigurationChanged(r0)
            r0 = 1
            r4.T = r0
            r4.bringToFront()
            return
    }

    private void k() {
            r8 = this;
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            if (r0 != 0) goto L9
            com.tkay.expressad.video.signal.factory.b r0 = r8.Q
            r8.preLoadData(r0)
        L9:
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            r8.addView(r0)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            if (r0 == 0) goto L41
            java.lang.String r1 = r8.w
            r0.setUnitId(r1)
            com.tkay.expressad.foundation.d.c r0 = r8.b
            if (r0 == 0) goto L32
            com.tkay.expressad.foundation.d.c r0 = r8.b
            boolean r0 = r0.H()
            if (r0 == 0) goto L32
            com.tkay.expressad.foundation.d.c r0 = r8.b
            int r0 = r0.J()
            r1 = 2
            if (r0 != r1) goto L32
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            r1 = 0
            r0.setCloseVisible(r1)
        L32:
            com.tkay.expressad.video.module.TkayPlayableView r2 = r8.n
            java.lang.String r3 = r8.P
            int r4 = r8.K
            int r5 = r8.L
            int r6 = r8.M
            int r7 = r8.N
            r2.setNotchValue(r3, r4, r5, r6, r7)
        L41:
            return
    }

    private void l() {
            r3 = this;
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.o
            r1 = -1
            if (r0 != 0) goto L8
            r3.b(r1)
        L8:
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.o
            if (r0 == 0) goto L2a
            com.tkay.expressad.foundation.d.c r0 = r3.b
            if (r0 == 0) goto L19
            com.tkay.expressad.foundation.d.c r0 = r3.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L19
            return
        L19:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r2 = -2
            r0.<init>(r2, r2)
            r2 = 12
            r0.addRule(r2, r1)
            com.tkay.expressad.video.module.TkayClickCTAView r1 = r3.o
            r2 = 0
            r3.addView(r1, r2, r0)
        L2a:
            return
    }

    private void m() {
            r3 = this;
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r3.p
            if (r0 != 0) goto L8
            r0 = -2
            r3.b(r0)
        L8:
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r2 = 13
            r0.addRule(r2, r1)
            boolean r1 = r3.D
            if (r1 == 0) goto L23
            boolean r1 = r3.F
            if (r1 == 0) goto L23
            r1 = 0
            r3.F = r1
            r1 = 1
            r0.width = r1
            r0.height = r1
        L23:
            com.tkay.expressad.video.module.TkayClickMiniCardView r1 = r3.p
            r3.addView(r1, r0)
            return
    }

    private void n() {
            r1 = this;
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r1.v
            if (r0 != 0) goto L7
            r1.o()
        L7:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r1.v
            if (r0 == 0) goto L16
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L16
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r1.v
            r1.removeView(r0)
        L16:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r1.v
            r1.addView(r0)
            return
    }

    private void o() {
            r2 = this;
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r2.v
            if (r0 != 0) goto L19
            com.tkay.expressad.video.module.TkayAlertWebview r0 = new com.tkay.expressad.video.module.TkayAlertWebview
            android.content.Context r1 = r2.a
            r0.<init>(r1)
            r2.v = r0
            java.lang.String r1 = r2.w
            r0.setUnitId(r1)
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r2.v
            com.tkay.expressad.foundation.d.c r1 = r2.b
            r0.setCampaign(r1)
        L19:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r2.v
            com.tkay.expressad.video.signal.factory.b r1 = r2.Q
            r0.preLoadData(r1)
            return
    }

    private void p() {
            r5 = this;
            r0 = 0
            r5.C = r0
            r5.T = r0
            android.view.ViewParent r1 = r5.getParent()
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            if (r1 == 0) goto L25
            r2 = r0
        Le:
            int r3 = r1.getChildCount()
            if (r0 >= r3) goto L25
            android.view.View r3 = r1.getChildAt(r2)
            boolean r4 = r3 instanceof com.tkay.expressad.video.module.TkayContainerView
            if (r4 != 0) goto L20
            r1.bringChildToFront(r3)
            goto L22
        L20:
            int r2 = r2 + 1
        L22:
            int r0 = r0 + 1
            goto Le
        L25:
            return
    }

    private void q() {
            r11 = this;
            com.tkay.expressad.foundation.d.c r0 = r11.b
            if (r0 != 0) goto L5
            return
        L5:
            com.tkay.expressad.foundation.d.c r0 = r11.b
            java.lang.String r0 = r0.I()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 404(0x194, float:5.66E-43)
            if (r1 != 0) goto L22
            java.lang.String r1 = "ecid"
            java.lang.String r0 = com.tkay.expressad.foundation.h.x.a(r0, r1)     // Catch: java.lang.Throwable -> L1e
            int r2 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> L1e
            goto L22
        L1e:
            r0 = move-exception
            r0.getMessage()
        L22:
            r7 = r2
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = new com.tkay.expressad.video.module.TkayNativeEndCardView
            android.content.Context r4 = r11.a
            r5 = 0
            r6 = 1
            com.tkay.expressad.foundation.d.c r1 = r11.b
            int r1 = r1.f()
            r2 = 2
            if (r1 != r2) goto L34
            r1 = 1
            goto L35
        L34:
            r1 = 0
        L35:
            r8 = r1
            int r9 = r11.l
            com.tkay.expressad.foundation.d.c r1 = r11.b
            int r10 = r1.as()
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            r11.q = r0
            com.tkay.expressad.foundation.d.c r0 = r11.b
            int r0 = r0.k()
            r1 = 5
            if (r0 != r1) goto L68
            com.tkay.expressad.video.module.a.a r0 = r11.e
            if (r0 == 0) goto L60
            com.tkay.expressad.video.module.a.a r0 = r11.e
            boolean r0 = r0 instanceof com.tkay.expressad.video.module.a.a.k
            if (r0 == 0) goto L60
            com.tkay.expressad.video.module.a.a r0 = r11.e
            com.tkay.expressad.video.module.a.a.k r0 = (com.tkay.expressad.video.module.a.a.k) r0
            com.tkay.expressad.foundation.d.c r1 = r11.b
            r0.a(r1)
        L60:
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r11.q
            com.tkay.expressad.foundation.d.c r1 = r11.b
            r0.setCampaign(r1)
            return
        L68:
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r11.q
            com.tkay.expressad.foundation.d.c r1 = r11.b
            r0.setCampaign(r1)
            return
    }

    public void addOrderViewData(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.U = r1
            return
    }

    @Override
    public void addView(android.view.View r1) {
            r0 = this;
            if (r1 == 0) goto L8
            a(r1)
            super.addView(r1)
        L8:
            return
    }

    @Override
    public void addView(android.view.View r1, android.view.ViewGroup.LayoutParams r2) {
            r0 = this;
            if (r1 == 0) goto L8
            a(r1)
            super.addView(r1, r2)
        L8:
            return
    }

    public boolean canBackPress() {
            r2 = this;
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.q
            r1 = 0
            if (r0 == 0) goto L6
            goto L20
        L6:
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.r
            if (r0 == 0) goto Lf
            boolean r1 = r0.canBackPress()
            goto L20
        Lf:
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r2.u
            if (r0 == 0) goto L18
            boolean r1 = r0.canBackPress()
            goto L20
        L18:
            com.tkay.expressad.video.module.TkayPlayableView r0 = r2.n
            if (r0 == 0) goto L20
            boolean r1 = r0.canBackPress()
        L20:
            return r1
    }

    @Override
    public void configurationChanged(int r1, int r2, int r3) {
            r0 = this;
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r0.p
            if (r3 == 0) goto Lf
            int r3 = r3.getVisibility()
            if (r3 != 0) goto Lf
            com.tkay.expressad.video.module.TkayClickMiniCardView r3 = r0.p
            r3.resizeMiniCard(r1, r2)
        Lf:
            return
    }

    @Override
    public void defaultShow() {
            r0 = this;
            super.defaultShow()
            return
    }

    @Override
    public boolean endCardShowing() {
            r1 = this;
            boolean r0 = r1.B
            return r0
    }

    public boolean endcardIsPlayable() {
            r1 = this;
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.r
            if (r0 == 0) goto Lc
            boolean r0 = r0.isPlayable()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public com.tkay.expressad.video.module.TkayH5EndCardView getH5EndCardView() {
            r1 = this;
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.r
            if (r0 != 0) goto L6
            com.tkay.expressad.video.module.TkayPlayableView r0 = r1.n
        L6:
            return r0
    }

    public com.tkay.expressad.foundation.d.c getReSetCampaign() {
            r6 = this;
            com.tkay.expressad.foundation.d.c r0 = r6.b
            boolean r0 = r0.j()
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            com.tkay.expressad.foundation.d.c r0 = r6.b
            java.lang.String r0 = r0.I()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L17
            return r1
        L17:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.U
            int r0 = r0.size()
            r2 = 0
            r3 = r2
        L1f:
            if (r3 >= r0) goto L43
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r6.U
            java.lang.Object r4 = r4.get(r3)
            if (r4 == 0) goto L40
            java.util.List<com.tkay.expressad.foundation.d.c> r4 = r6.U
            java.lang.Object r4 = r4.get(r3)
            com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
            java.lang.String r4 = r4.aZ()
            com.tkay.expressad.foundation.d.c r5 = r6.b
            java.lang.String r5 = r5.aZ()
            if (r4 != r5) goto L40
            int r2 = r3 + (-1)
            goto L43
        L40:
            int r3 = r3 + 1
            goto L1f
        L43:
            if (r2 < 0) goto L58
            if (r2 >= r0) goto L58
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.U
            java.lang.Object r0 = r0.get(r2)
            if (r0 == 0) goto L58
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r6.U
            java.lang.Object r0 = r0.get(r2)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            return r0
        L58:
            return r1
    }

    public boolean getShowingTransparent() {
            r1 = this;
            boolean r0 = r1.D
            return r0
    }

    public java.lang.String getUnitID() {
            r1 = this;
            java.lang.String r0 = r1.w
            return r0
    }

    public int getVideoInteractiveType() {
            r1 = this;
            int r0 = r1.x
            return r0
    }

    public int getVideoSkipTime() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    @Override
    public void handlerPlayableException(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.r
            if (r0 == 0) goto Lb
            r0.handlerPlayableException(r2)
            boolean r2 = r1.I
            if (r2 == 0) goto Le
        Lb:
            r1.e()
        Le:
            return
    }

    @Override
    public void hideAlertWebview() {
            r3 = this;
            boolean r0 = r3.isLast()
            if (r0 != 0) goto L40
            boolean r0 = r3.S
            if (r0 == 0) goto L14
            boolean r0 = r3.T
            if (r0 != 0) goto L14
            r3.p()
            r0 = 0
            r3.S = r0
        L14:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r3.v
            if (r0 == 0) goto L40
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L40
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r3.v
            r3.removeView(r0)
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.o
            if (r0 == 0) goto L40
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L40
            r3.setWrapContent()
            android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.RelativeLayout.LayoutParams
            if (r1 == 0) goto L40
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            r1 = 12
            r2 = -1
            r0.addRule(r1, r2)
        L40:
            return
    }

    @Override
    public void init(android.content.Context r1) {
            r0 = this;
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    @Override
    public void install(com.tkay.expressad.foundation.d.c r3) {
            r2 = this;
            com.tkay.expressad.video.module.a.a r0 = r2.e
            r1 = 105(0x69, float:1.47E-43)
            r0.a(r1, r3)
            return
    }

    public boolean isLast() {
            r2 = this;
            android.view.ViewParent r0 = r2.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1 = 0
            if (r0 == 0) goto L11
            int r0 = r0.indexOfChild(r2)
            if (r0 != 0) goto L11
            r0 = 1
            r1 = r0
        L11:
            return r1
    }

    @Override
    public void ivRewardAdsWithoutVideo(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.video.module.a.a r0 = r2.e
            r1 = 103(0x67, float:1.44E-43)
            r0.a(r1, r3)
            return
    }

    @Override
    public boolean miniCardLoaded() {
            r1 = this;
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r1.p
            if (r0 == 0) goto Lc
            boolean r0 = r0.isLoadSuccess()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    @Override
    public boolean miniCardShowing() {
            r1 = this;
            boolean r0 = r1.C
            return r0
    }

    @Override
    public void notifyCloseBtn(int r2) {
            r1 = this;
            com.tkay.expressad.video.module.TkayPlayableView r0 = r1.n
            if (r0 == 0) goto L7
            r0.notifyCloseBtn(r2)
        L7:
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.r
            if (r0 == 0) goto Le
            r0.notifyCloseBtn(r2)
        Le:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r6) {
            r5 = this;
            super.onConfigurationChanged(r6)
            r0 = 8
            com.tkay.expressad.video.module.TkayBaseView[] r1 = new com.tkay.expressad.video.module.TkayBaseView[r0]
            com.tkay.expressad.video.module.TkayPlayableView r2 = r5.n
            r3 = 0
            r1[r3] = r2
            com.tkay.expressad.video.module.TkayClickCTAView r2 = r5.o
            r4 = 1
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r5.p
            r4 = 2
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r5.q
            r4 = 3
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayH5EndCardView r2 = r5.r
            r4 = 4
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayVastEndCardView r2 = r5.t
            r4 = 5
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayLandingPageView r2 = r5.u
            r4 = 6
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayVideoEndCoverView r2 = r5.s
            r4 = 7
            r1[r4] = r2
        L2f:
            if (r3 >= r0) goto L57
            r2 = r1[r3]
            if (r2 == 0) goto L3d
            boolean r4 = r2 instanceof com.tkay.expressad.video.module.TkayClickMiniCardView
            if (r4 == 0) goto L3d
            r2.onSelfConfigurationChanged(r6)
            goto L54
        L3d:
            if (r2 == 0) goto L54
            int r4 = r2.getVisibility()
            if (r4 != 0) goto L54
            android.view.ViewParent r4 = r2.getParent()
            if (r4 == 0) goto L54
            boolean r4 = r5.isLast()
            if (r4 != 0) goto L54
            r2.onSelfConfigurationChanged(r6)
        L54:
            int r3 = r3 + 1
            goto L2f
        L57:
            return
    }

    public void onEndcardBackPress() {
            r3 = this;
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r3.q
            java.lang.String r1 = ""
            if (r0 != 0) goto L1f
            com.tkay.expressad.video.module.TkayVastEndCardView r0 = r3.t
            if (r0 == 0) goto Lb
            goto L1f
        Lb:
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r3.u
            if (r0 == 0) goto L17
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r2 = 103(0x67, float:1.44E-43)
            r0.a(r2, r1)
            return
        L17:
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r3.r
            if (r0 == 0) goto L1e
            r0.onBackPress()
        L1e:
            return
        L1f:
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r2 = 104(0x68, float:1.46E-43)
            r0.a(r2, r1)
            return
    }

    public void onMiniEndcardBackPress() {
            r3 = this;
            boolean r0 = r3.C
            if (r0 == 0) goto Ld
            com.tkay.expressad.video.module.a.a r0 = r3.e
            r1 = 107(0x6b, float:1.5E-43)
            java.lang.String r2 = ""
            r0.a(r1, r2)
        Ld:
            return
    }

    public void onPlayableBackPress() {
            r1 = this;
            com.tkay.expressad.video.module.TkayPlayableView r0 = r1.n
            if (r0 == 0) goto L7
            r0.onBackPress()
        L7:
            return
    }

    @Override
    public void orientation(android.content.res.Configuration r5) {
            r4 = this;
            r5 = 4
            com.tkay.expressad.video.module.TkayH5EndCardView[] r0 = new com.tkay.expressad.video.module.TkayH5EndCardView[r5]
            com.tkay.expressad.video.module.TkayPlayableView r1 = r4.n
            r2 = 0
            r0[r2] = r1
            com.tkay.expressad.video.module.TkayClickMiniCardView r1 = r4.p
            r3 = 1
            r0[r3] = r1
            com.tkay.expressad.video.module.TkayH5EndCardView r1 = r4.r
            r3 = 2
            r0[r3] = r1
            com.tkay.expressad.video.module.TkayAlertWebview r1 = r4.v
            r3 = 3
            r0[r3] = r1
        L17:
            if (r2 >= r5) goto L31
            r1 = r0[r2]
            if (r1 == 0) goto L2e
            int r3 = r1.getVisibility()
            if (r3 != 0) goto L2e
            android.content.res.Resources r3 = r4.getResources()
            android.content.res.Configuration r3 = r3.getConfiguration()
            r1.orientation(r3)
        L2e:
            int r2 = r2 + 1
            goto L17
        L31:
            return
    }

    @Override
    public void preLoadData(com.tkay.expressad.video.signal.factory.b r5) {
            r4 = this;
            r4.Q = r5
            com.tkay.expressad.foundation.d.c r0 = r4.b
            if (r0 == 0) goto L96
            com.tkay.expressad.foundation.d.c r0 = r4.b
            int r0 = r0.J()
            r1 = 2
            if (r0 != r1) goto L43
            com.tkay.expressad.video.module.TkayPlayableView r0 = r4.n
            if (r0 != 0) goto L1c
            com.tkay.expressad.video.module.TkayPlayableView r0 = new com.tkay.expressad.video.module.TkayPlayableView
            android.content.Context r1 = r4.a
            r0.<init>(r1)
            r4.n = r0
        L1c:
            com.tkay.expressad.video.module.TkayPlayableView r0 = r4.n
            int r1 = r4.z
            r0.setCloseDelayShowTime(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r4.n
            int r1 = r4.A
            r0.setPlayCloseBtnTm(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r4.n
            com.tkay.expressad.foundation.d.c r1 = r4.b
            r0.setCampaign(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r4.n
            com.tkay.expressad.video.module.TkayContainerView$4 r1 = new com.tkay.expressad.video.module.TkayContainerView$4
            com.tkay.expressad.video.module.a.a r2 = r4.e
            r1.<init>(r4, r2)
            r0.setNotifyListener(r1)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r4.n
            r0.preLoadData(r5)
            goto L93
        L43:
            int r0 = r4.x
            r4.b(r0)
            com.tkay.expressad.foundation.d.c r0 = r4.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L7d
            com.tkay.expressad.foundation.d.c r0 = r4.b     // Catch: java.lang.Throwable -> L5e
            int r0 = r0.F()     // Catch: java.lang.Throwable -> L5e
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Throwable -> L5e
            r4.a(r5, r0)     // Catch: java.lang.Throwable -> L5e
            goto L73
        L5e:
            r0 = move-exception
            r0.getMessage()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tkay.expressad.video.module.TkayContainerView$1 r1 = new com.tkay.expressad.video.module.TkayContainerView$1
            r1.<init>(r4, r5)
            r0.postAtFrontOfQueue(r1)
        L73:
            com.tkay.expressad.foundation.d.c r5 = r4.b
            java.lang.String r5 = r5.I()
            com.tkay.expressad.foundation.h.t.f(r5)
            goto L93
        L7d:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tkay.expressad.video.module.TkayContainerView$2 r1 = new com.tkay.expressad.video.module.TkayContainerView$2
            r1.<init>(r4, r5)
            int r5 = r4.getVideoSkipTime()
            long r2 = (long) r5
            r0.postDelayed(r1, r2)
        L93:
            r4.o()
        L96:
            return
    }

    @Override
    public void readyStatus(int r2) {
            r1 = this;
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.r
            if (r0 == 0) goto L7
            r0.readyStatus(r2)
        L7:
            return
    }

    public void release() {
            r2 = this;
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r2.r
            r1 = 0
            if (r0 == 0) goto La
            r0.release()
            r2.r = r1
        La:
            com.tkay.expressad.video.module.TkayPlayableView r0 = r2.n
            if (r0 == 0) goto L11
            r0.release()
        L11:
            com.tkay.expressad.video.module.TkayLandingPageView r0 = r2.u
            if (r0 == 0) goto L18
            r0.release()
        L18:
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.q
            if (r0 == 0) goto L24
            r0.clearMoreOfferBitmap()
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r2.q
            r0.release()
        L24:
            com.tkay.expressad.video.module.a.a r0 = r2.e
            if (r0 == 0) goto L2a
            r2.e = r1
        L2a:
            return
    }

    @Override
    public void resizeMiniCard(int r2, int r3, int r4) {
            r1 = this;
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r1.p
            if (r0 == 0) goto L1b
            r0.resizeMiniCard(r2, r3)
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r1.p
            r2.setRadius(r4)
            r1.removeAllViews()
            r1.setMatchParent()
            r2 = 1
            r1.T = r2
            r1.bringToFront()
            r1.m()
        L1b:
            return
    }

    public void setCloseDelayTime(int r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setEndscreenType(int r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setJSFactory(com.tkay.expressad.video.signal.factory.b r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    public void setNotchPadding(int r11, int r12, int r13, int r14, int r15) {
            r10 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "NOTCH ContainerView "
            r0.<init>(r1)
            r1 = 5
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Integer r2 = java.lang.Integer.valueOf(r12)
            r3 = 0
            r1[r3] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)
            r4 = 1
            r1[r4] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r14)
            r4 = 2
            r1[r4] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r15)
            r4 = 3
            r1[r4] = r2
            java.lang.Integer r2 = java.lang.Integer.valueOf(r11)
            r4 = 4
            r1[r4] = r2
            java.lang.String r2 = "%1s-%2s-%3s-%4s-%5s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.append(r1)
            r10.O = r11
            r10.K = r12
            r10.L = r13
            r10.M = r14
            r10.N = r15
            java.lang.String r11 = com.tkay.expressad.foundation.h.h.a(r11, r12, r13, r14, r15)
            r10.P = r11
            com.tkay.expressad.video.module.TkayNativeEndCardView r11 = r10.q
            if (r11 == 0) goto L4d
            r11.setNotchPadding(r12, r13, r14, r15)
        L4d:
            com.tkay.expressad.video.module.TkayH5EndCardView r11 = r10.r
            java.lang.String r0 = "oncutoutfetched"
            if (r11 == 0) goto L76
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r11.s
            if (r11 == 0) goto L76
            com.tkay.expressad.video.module.TkayH5EndCardView r4 = r10.r
            java.lang.String r5 = r10.P
            r6 = r12
            r7 = r13
            r8 = r14
            r9 = r15
            r4.setNotchValue(r5, r6, r7, r8, r9)
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.video.module.TkayH5EndCardView r11 = r10.r
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r11.s
            java.lang.String r1 = r10.P
            byte[] r1 = r1.getBytes()
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            com.tkay.expressad.atsignalcommon.windvane.j.a(r11, r0, r1)
        L76:
            com.tkay.expressad.video.module.TkayPlayableView r11 = r10.n
            if (r11 == 0) goto L9d
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r11.s
            if (r11 == 0) goto L9d
            com.tkay.expressad.video.module.TkayPlayableView r4 = r10.n
            java.lang.String r5 = r10.P
            r6 = r12
            r7 = r13
            r8 = r14
            r9 = r15
            r4.setNotchValue(r5, r6, r7, r8, r9)
            com.tkay.expressad.atsignalcommon.windvane.j.a()
            com.tkay.expressad.video.module.TkayPlayableView r11 = r10.n
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r11 = r11.s
            java.lang.String r1 = r10.P
            byte[] r1 = r1.getBytes()
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r3)
            com.tkay.expressad.atsignalcommon.windvane.j.a(r11, r0, r1)
        L9d:
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r11 = r10.R
            if (r11 == 0) goto La4
            r11.setNotchPadding(r12, r13, r14, r15)
        La4:
            return
    }

    @Override
    public void setNotifyListener(com.tkay.expressad.video.module.a.a r7) {
            r6 = this;
            super.setNotifyListener(r7)
            r0 = 8
            com.tkay.expressad.video.module.TkayBaseView[] r1 = new com.tkay.expressad.video.module.TkayBaseView[r0]
            com.tkay.expressad.video.module.TkayPlayableView r2 = r6.n
            r3 = 0
            r1[r3] = r2
            com.tkay.expressad.video.module.TkayClickCTAView r2 = r6.o
            r4 = 1
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r6.p
            r4 = 2
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayNativeEndCardView r2 = r6.q
            r4 = 3
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayH5EndCardView r2 = r6.r
            r4 = 4
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayVastEndCardView r2 = r6.t
            r4 = 5
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayLandingPageView r2 = r6.u
            r4 = 6
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayVideoEndCoverView r2 = r6.s
            r4 = 7
            r1[r4] = r2
        L2f:
            if (r3 >= r0) goto L4f
            r2 = r1[r3]
            if (r2 == 0) goto L4c
            boolean r4 = r2 instanceof com.tkay.expressad.video.module.TkayClickMiniCardView
            if (r4 == 0) goto L44
            com.tkay.expressad.video.module.a.a.g r4 = new com.tkay.expressad.video.module.a.a.g
            com.tkay.expressad.video.module.TkayClickMiniCardView r5 = r6.p
            r4.<init>(r5, r7)
            r2.setNotifyListener(r4)
            goto L4c
        L44:
            com.tkay.expressad.video.module.a.a.i r4 = new com.tkay.expressad.video.module.a.a.i
            r4.<init>(r7)
            r2.setNotifyListener(r4)
        L4c:
            int r3 = r3 + 1
            goto L2f
        L4f:
            return
    }

    public void setOnPause() {
            r1 = this;
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r1.q
            if (r0 == 0) goto L7
            r0.setOnPause()
        L7:
            return
    }

    public void setOnResume() {
            r1 = this;
            com.tkay.expressad.video.module.TkayNativeEndCardView r0 = r1.q
            if (r0 == 0) goto L7
            r0.setOnResume()
        L7:
            return
    }

    public void setPlayCloseBtnTm(int r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public void setRewardStatus(boolean r1) {
            r0 = this;
            r0.J = r1
            return
    }

    public void setShowingTransparent(boolean r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public void setTkayClickMiniCardViewTransparent() {
            r2 = this;
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r2.p
            if (r0 == 0) goto Ld
            r0.setTkayClickMiniCardViewTransparent()
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r2.p
            r1 = 0
            r0.setTkayClickMiniCardViewClickable(r1)
        Ld:
            return
    }

    public void setUnitID(java.lang.String r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setVideoInteractiveType(int r3) {
            r2 = this;
            com.tkay.expressad.foundation.d.c r0 = r2.b
            if (r0 == 0) goto L1c
            com.tkay.expressad.foundation.d.c r0 = r2.b
            boolean r0 = r0.j()
            if (r0 == 0) goto L1c
            com.tkay.expressad.foundation.d.c r0 = r2.b
            int r0 = com.tkay.expressad.video.dynview.i.c.a(r0)
            r1 = 100
            if (r0 != r1) goto L19
            r2.x = r3
            return
        L19:
            r2.x = r0
            return
        L1c:
            r2.x = r3
            return
    }

    public void setVideoSkipTime(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    @Override
    public boolean showAlertWebView() {
            r4 = this;
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r4.v
            r1 = 0
            if (r0 == 0) goto L60
            boolean r0 = r0.isLoadSuccess()
            if (r0 == 0) goto L60
            r4.setMatchParent()
            android.view.ViewParent r0 = r4.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            int r2 = r0.getChildCount()
            int r0 = r0.indexOfChild(r4)
            r3 = 1
            int r2 = r2 - r3
            if (r0 != r2) goto L22
            r0 = r3
            goto L23
        L22:
            r0 = r1
        L23:
            if (r0 != 0) goto L31
            boolean r0 = r4.T
            if (r0 != 0) goto L31
            r4.removeAllViews()
            r4.bringToFront()
            r4.S = r3
        L31:
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r4.p
            if (r0 == 0) goto L3c
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L3c
            return r1
        L3c:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r4.v
            if (r0 != 0) goto L43
            r4.o()
        L43:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r4.v
            if (r0 == 0) goto L52
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L52
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r4.v
            r4.removeView(r0)
        L52:
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r4.v
            r4.addView(r0)
            r4.setBackgroundColor(r1)
            com.tkay.expressad.video.module.TkayAlertWebview r0 = r4.v
            r0.webviewshow()
            return r3
        L60:
            return r1
    }

    @Override
    public void showEndcard(int r5) {
            r4 = this;
            com.tkay.expressad.foundation.d.c r0 = r4.b
            r1 = 1
            if (r0 == 0) goto Lb5
            java.lang.String r0 = ""
            if (r5 == r1) goto Lae
            r2 = 100
            if (r5 == r2) goto L97
            r2 = 3
            if (r5 == r2) goto L69
            r2 = 4
            if (r5 == r2) goto L36
            r2 = 5
            if (r5 == r2) goto L2d
            r4.removeAllViews()
            r4.setMatchParent()
            r4.T = r1
            r4.bringToFront()
            r4.e()
            com.tkay.expressad.video.module.a.a r5 = r4.e
            r2 = 117(0x75, float:1.64E-43)
            r5.a(r2, r0)
            goto Lb5
        L2d:
            com.tkay.expressad.video.module.a.a r5 = r4.e
            r2 = 106(0x6a, float:1.49E-43)
            r5.a(r2, r0)
            goto Lb5
        L36:
            com.tkay.expressad.video.module.a.a r5 = r4.e
            r3 = 113(0x71, float:1.58E-43)
            r5.a(r3, r0)
            r4.removeAllViews()
            r4.setMatchParent()
            com.tkay.expressad.video.module.TkayLandingPageView r5 = r4.u
            if (r5 != 0) goto L50
            com.tkay.expressad.video.signal.factory.b r5 = r4.Q
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            r4.a(r5, r0)
        L50:
            com.tkay.expressad.video.module.TkayLandingPageView r5 = r4.u
            java.lang.String r0 = r4.w
            r5.setUnitId(r0)
            com.tkay.expressad.video.module.TkayLandingPageView r5 = r4.u
            com.tkay.expressad.video.signal.factory.b r0 = r4.Q
            r5.preLoadData(r0)
            com.tkay.expressad.video.module.TkayLandingPageView r5 = r4.u
            r4.addView(r5)
            r4.T = r1
            r4.bringToFront()
            goto Lb5
        L69:
            r4.removeAllViews()
            r4.setMatchParent()
            com.tkay.expressad.video.module.TkayVastEndCardView r5 = r4.t
            if (r5 != 0) goto L7c
            com.tkay.expressad.video.signal.factory.b r5 = r4.Q
            java.lang.Integer r0 = java.lang.Integer.valueOf(r2)
            r4.a(r5, r0)
        L7c:
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r5.<init>(r0, r0)
            r2 = 13
            r5.addRule(r2, r0)
            com.tkay.expressad.video.module.TkayVastEndCardView r0 = r4.t
            r4.addView(r0, r5)
            com.tkay.expressad.video.module.TkayVastEndCardView r5 = r4.t
            r5.notifyShowListener()
            r4.T = r1
            r4.bringToFront()
            goto Lb5
        L97:
            com.tkay.expressad.foundation.d.c r5 = r4.b
            int r5 = r5.J()
            r0 = 2
            if (r5 != r0) goto La2
            r4.E = r1
        La2:
            com.tkay.expressad.video.module.TkayPlayableView r5 = r4.n
            a(r5)
            r4.setMatchParent()
            r4.i()
            goto Lb5
        Lae:
            com.tkay.expressad.video.module.a.a r5 = r4.e
            r2 = 104(0x68, float:1.46E-43)
            r5.a(r2, r0)
        Lb5:
            r4.B = r1
            return
    }

    @Override
    public void showMiniCard(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            com.tkay.expressad.video.module.TkayClickMiniCardView r0 = r1.p
            if (r0 == 0) goto L3e
            r0.setMiniCardLocation(r2, r3, r4, r5)
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r1.p
            r2.setRadius(r6)
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r1.p
            r3 = 8
            r2.setCloseVisible(r3)
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r1.p
            r3 = 0
            r2.setClickable(r3)
            r1.removeAllViews()
            r1.setMatchParent()
            r2 = 1
            r1.T = r2
            r1.bringToFront()
            r1.m()
            boolean r3 = r1.G
            if (r3 != 0) goto L3e
            r1.G = r2
            com.tkay.expressad.video.module.a.a r2 = r1.e
            r3 = 109(0x6d, float:1.53E-43)
            java.lang.String r4 = ""
            r2.a(r3, r4)
            com.tkay.expressad.video.module.a.a r2 = r1.e
            r3 = 117(0x75, float:1.64E-43)
            r2.a(r3, r4)
        L3e:
            return
    }

    public void showOrderCampView() {
            r5 = this;
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = new com.tkay.expressad.video.dynview.widget.TYOrderCampView
            android.content.Context r1 = r5.a
            r0.<init>(r1)
            r5.R = r0
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r5.U
            r0.setCampaignExes(r1)
            com.tkay.expressad.video.module.a.a r0 = r5.e
            if (r0 == 0) goto L21
            com.tkay.expressad.video.module.a.a r0 = r5.e
            boolean r0 = r0 instanceof com.tkay.expressad.video.module.a.a.k
            if (r0 == 0) goto L21
            com.tkay.expressad.video.module.a.a r0 = r5.e
            com.tkay.expressad.video.module.a.a.k r0 = (com.tkay.expressad.video.module.a.a.k) r0
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r5.U
            r0.a(r1)
        L21:
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r5.R
            com.tkay.expressad.video.module.a.a.i r1 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r2 = r5.e
            r1.<init>(r2)
            r0.setNotifyListener(r1)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r5.R
            boolean r1 = r5.J
            r0.setRewarded(r1)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r5.R
            int r1 = r5.K
            int r2 = r5.L
            int r3 = r5.M
            int r4 = r5.N
            r0.setNotchPadding(r1, r2, r3, r4)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r5.R
            com.tkay.expressad.video.module.TkayContainerView$3 r1 = new com.tkay.expressad.video.module.TkayContainerView$3
            r1.<init>(r5)
            r0.setCampOrderViewBuildCallback(r1)
            com.tkay.expressad.video.dynview.widget.TYOrderCampView r0 = r5.R
            r0.createView(r5)
            return
    }

    @Override
    public void showPlayableView() {
            r8 = this;
            com.tkay.expressad.foundation.d.c r0 = r8.b
            if (r0 == 0) goto L55
            boolean r0 = r8.E
            if (r0 != 0) goto L55
            r8.removeAllViews()
            r8.setMatchParent()
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            if (r0 != 0) goto L17
            com.tkay.expressad.video.signal.factory.b r0 = r8.Q
            r8.preLoadData(r0)
        L17:
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            r8.addView(r0)
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            if (r0 == 0) goto L4f
            java.lang.String r1 = r8.w
            r0.setUnitId(r1)
            com.tkay.expressad.foundation.d.c r0 = r8.b
            if (r0 == 0) goto L40
            com.tkay.expressad.foundation.d.c r0 = r8.b
            boolean r0 = r0.H()
            if (r0 == 0) goto L40
            com.tkay.expressad.foundation.d.c r0 = r8.b
            int r0 = r0.J()
            r1 = 2
            if (r0 != r1) goto L40
            com.tkay.expressad.video.module.TkayPlayableView r0 = r8.n
            r1 = 0
            r0.setCloseVisible(r1)
        L40:
            com.tkay.expressad.video.module.TkayPlayableView r2 = r8.n
            java.lang.String r3 = r8.P
            int r4 = r8.K
            int r5 = r8.L
            int r6 = r8.M
            int r7 = r8.N
            r2.setNotchValue(r3, r4, r5, r6, r7)
        L4f:
            r0 = 1
            r8.T = r0
            r8.bringToFront()
        L55:
            return
    }

    @Override
    public void showVideoClickView(int r4) {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b
            if (r0 == 0) goto L128
            r0 = -1
            if (r4 == r0) goto L119
            r1 = 1
            if (r4 == r1) goto La7
            r0 = 2
            if (r4 == r0) goto Lf
            goto L128
        Lf:
            com.tkay.expressad.video.module.TkayClickCTAView r4 = r3.o
            if (r4 == 0) goto L1e
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto L1e
            com.tkay.expressad.video.module.TkayClickCTAView r4 = r3.o
            r3.removeView(r4)
        L1e:
            com.tkay.expressad.video.module.TkayAlertWebview r4 = r3.v
            if (r4 == 0) goto L29
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto L29
            return
        L29:
            com.tkay.expressad.video.module.TkayClickMiniCardView r4 = r3.p
            if (r4 == 0) goto L33
            android.view.ViewParent r4 = r4.getParent()
            if (r4 != 0) goto L4a
        L33:
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L46
            if (r4 == 0) goto L4a
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L46
            int r4 = r4.J()     // Catch: java.lang.Exception -> L46
            if (r4 != r1) goto L4a
            r3.setMatchParent()     // Catch: java.lang.Exception -> L46
            r3.m()     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r4 = move-exception
            r4.printStackTrace()
        L4a:
            boolean r4 = r3.miniCardLoaded()
            if (r4 == 0) goto La2
            com.tkay.expressad.video.module.TkayH5EndCardView r4 = r3.r
            if (r4 == 0) goto L5f
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto L5f
            com.tkay.expressad.video.module.TkayH5EndCardView r4 = r3.r
            r3.removeView(r4)
        L5f:
            com.tkay.expressad.video.module.a.a r4 = r3.e
            r0 = 112(0x70, float:1.57E-43)
            java.lang.String r2 = ""
            r4.a(r0, r2)
            com.tkay.expressad.foundation.d.c r4 = r3.b
            if (r4 == 0) goto L80
            com.tkay.expressad.foundation.d.c r4 = r3.b
            boolean r4 = r4.aw()
            if (r4 != 0) goto L80
            com.tkay.expressad.foundation.d.c r4 = r3.b
            r4.ax()
            android.content.Context r4 = r3.a
            com.tkay.expressad.foundation.d.c r0 = r3.b
            com.tkay.expressad.video.module.b.a.e(r4, r0)
        L80:
            boolean r4 = r3.D
            if (r4 == 0) goto L8c
            com.tkay.expressad.video.module.a.a r4 = r3.e
            r0 = 115(0x73, float:1.61E-43)
            r4.a(r0, r2)
            goto L9f
        L8c:
            r3.T = r1
            r3.bringToFront()
            r3.webviewshow()
            android.content.res.Resources r4 = r3.getResources()
            android.content.res.Configuration r4 = r4.getConfiguration()
            r3.onConfigurationChanged(r4)
        L9f:
            r3.C = r1
            return
        La2:
            r3.p()
            goto L128
        La7:
            boolean r4 = r3.B
            if (r4 == 0) goto Lac
            return
        Lac:
            com.tkay.expressad.video.module.TkayH5EndCardView r4 = r3.r
            if (r4 == 0) goto Lbb
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto Lbb
            com.tkay.expressad.video.module.TkayH5EndCardView r4 = r3.r
            r3.removeView(r4)
        Lbb:
            com.tkay.expressad.video.module.TkayClickMiniCardView r4 = r3.p
            if (r4 == 0) goto Lca
            android.view.ViewParent r4 = r4.getParent()
            if (r4 == 0) goto Lca
            com.tkay.expressad.video.module.TkayClickMiniCardView r4 = r3.p
            r3.removeView(r4)
        Lca:
            com.tkay.expressad.video.module.TkayClickCTAView r4 = r3.o
            if (r4 == 0) goto Ld4
            android.view.ViewParent r4 = r4.getParent()
            if (r4 != 0) goto L10f
        Ld4:
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L10b
            if (r4 == 0) goto L10f
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L10b
            int r4 = r4.J()     // Catch: java.lang.Exception -> L10b
            if (r4 != r1) goto L10f
            r3.T = r1     // Catch: java.lang.Exception -> L10b
            com.tkay.expressad.video.module.TkayClickCTAView r4 = r3.o     // Catch: java.lang.Exception -> L10b
            if (r4 != 0) goto Le9
            r3.b(r0)     // Catch: java.lang.Exception -> L10b
        Le9:
            com.tkay.expressad.video.module.TkayClickCTAView r4 = r3.o     // Catch: java.lang.Exception -> L10b
            if (r4 == 0) goto L10f
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L10b
            if (r4 == 0) goto Lf9
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Exception -> L10b
            boolean r4 = r4.j()     // Catch: java.lang.Exception -> L10b
            if (r4 != 0) goto L10f
        Lf9:
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Exception -> L10b
            r1 = -2
            r4.<init>(r1, r1)     // Catch: java.lang.Exception -> L10b
            r1 = 12
            r4.addRule(r1, r0)     // Catch: java.lang.Exception -> L10b
            com.tkay.expressad.video.module.TkayClickCTAView r0 = r3.o     // Catch: java.lang.Exception -> L10b
            r1 = 0
            r3.addView(r0, r1, r4)     // Catch: java.lang.Exception -> L10b
            goto L10f
        L10b:
            r4 = move-exception
            r4.printStackTrace()
        L10f:
            boolean r4 = r3.isLast()
            if (r4 == 0) goto L128
            r3.bringToFront()
            return
        L119:
            boolean r4 = r3.isLast()
            if (r4 != 0) goto L128
            boolean r4 = r3.endCardShowing()
            if (r4 != 0) goto L128
            r3.p()
        L128:
            return
    }

    @Override
    public void showVideoEndCover() {
            r4 = this;
            r4.removeAllViews()
            r4.setMatchParent()
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            if (r0 != 0) goto L2f
            com.tkay.expressad.video.signal.factory.b r1 = r4.Q
            r4.Q = r1
            if (r0 != 0) goto L2f
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = new com.tkay.expressad.video.module.TkayVideoEndCoverView
            android.content.Context r2 = r4.a
            r0.<init>(r2)
            r4.s = r0
            com.tkay.expressad.foundation.d.c r2 = r4.b
            r0.setCampaign(r2)
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            com.tkay.expressad.video.module.a.a.i r2 = new com.tkay.expressad.video.module.a.a.i
            com.tkay.expressad.video.module.a.a r3 = r4.e
            r2.<init>(r3)
            r0.setNotifyListener(r2)
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            r0.preLoadData(r1)
        L2f:
            com.tkay.expressad.video.module.TkayVideoEndCoverView r0 = r4.s
            r4.addView(r0)
            android.content.res.Resources r0 = r4.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            r4.onConfigurationChanged(r0)
            r0 = 1
            r4.T = r0
            r4.bringToFront()
            return
    }

    @Override
    public void toggleCloseBtn(int r2) {
            r1 = this;
            com.tkay.expressad.video.module.TkayPlayableView r0 = r1.n
            if (r0 == 0) goto L7
            r0.toggleCloseBtn(r2)
        L7:
            com.tkay.expressad.video.module.TkayH5EndCardView r0 = r1.r
            if (r0 == 0) goto Le
            r0.toggleCloseBtn(r2)
        Le:
            return
    }

    public void triggerCloseBtn(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.foundation.d.c r3 = r2.b
            if (r3 == 0) goto L14
            com.tkay.expressad.video.module.a.a r3 = r2.e
            r0 = 122(0x7a, float:1.71E-43)
            java.lang.String r1 = ""
            r3.a(r0, r1)
            com.tkay.expressad.video.module.a.a r3 = r2.e
            r0 = 104(0x68, float:1.46E-43)
            r3.a(r0, r1)
        L14:
            return
    }

    @Override
    public void webviewshow() {
            r5 = this;
            r0 = 4
            com.tkay.expressad.video.module.TkayH5EndCardView[] r1 = new com.tkay.expressad.video.module.TkayH5EndCardView[r0]
            com.tkay.expressad.video.module.TkayPlayableView r2 = r5.n
            r3 = 0
            r1[r3] = r2
            com.tkay.expressad.video.module.TkayClickMiniCardView r2 = r5.p
            r4 = 1
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayH5EndCardView r2 = r5.r
            r4 = 2
            r1[r4] = r2
            com.tkay.expressad.video.module.TkayAlertWebview r2 = r5.v
            r4 = 3
            r1[r4] = r2
        L17:
            if (r3 >= r0) goto L35
            r2 = r1[r3]
            if (r2 == 0) goto L32
            int r4 = r2.getVisibility()
            if (r4 != 0) goto L32
            android.view.ViewParent r4 = r2.getParent()
            if (r4 == 0) goto L32
            boolean r4 = r5.isLast()
            if (r4 != 0) goto L32
            r2.webviewshow()
        L32:
            int r3 = r3 + 1
            goto L17
        L35:
            return
    }
}

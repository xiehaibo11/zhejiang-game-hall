package com.tkay.basead.ui;

public class ThirdPartyFullScreenATView extends com.tkay.basead.ui.BaseScreenATView {
    public static final java.lang.String TAG = null;
    android.view.View ae;
    java.util.Timer af;
    private com.tkay.core.api.BaseAd ag;
    private final com.tkay.core.common.j.a ah;
    private final com.tkay.core.common.j.b ai;





    final class 5 extends java.util.TimerTask {
        final com.tkay.basead.ui.ThirdPartyFullScreenATView a;

        5(com.tkay.basead.ui.ThirdPartyFullScreenATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.basead.ui.ThirdPartyFullScreenATView r0 = r3.a
                com.tkay.core.api.BaseAd r1 = com.tkay.basead.ui.ThirdPartyFullScreenATView.c(r0)
                double r1 = r1.getVideoProgress()
                int r1 = (int) r1
                com.tkay.basead.ui.ThirdPartyFullScreenATView.a(r0, r1)
                return
        }
    }

    static {
            java.lang.Class<com.tkay.basead.ui.ThirdPartyFullScreenATView> r0 = com.tkay.basead.ui.ThirdPartyFullScreenATView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.ThirdPartyFullScreenATView.TAG = r0
            return
    }

    public ThirdPartyFullScreenATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            com.tkay.core.common.j.a r1 = com.tkay.core.common.j.c.a()
            r0.ah = r1
            com.tkay.basead.ui.ThirdPartyFullScreenATView$1 r1 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$1
            r1.<init>(r0)
            r0.ai = r1
            return
    }

    public ThirdPartyFullScreenATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, java.lang.String r4, int r5, int r6, com.tkay.core.api.BaseAd r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6)
            com.tkay.core.common.j.a r1 = com.tkay.core.common.j.c.a()
            r0.ah = r1
            com.tkay.basead.ui.ThirdPartyFullScreenATView$1 r1 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$1
            r1.<init>(r0)
            r0.ai = r1
            r0.ag = r7
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            android.view.View r2 = r7.getAdMediaView(r2)
            r0.ae = r2
            android.content.Context r2 = r0.getContext()
            java.lang.String r3 = "myoffer_thirdparty_full_screen_view_id"
            java.lang.String r4 = "id"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r0.setId(r2)
            r0.G = r1
            return
    }

    private void K() {
            r5 = this;
            int r0 = r5.L
            if (r0 >= 0) goto L5
            return
        L5:
            int r0 = r5.L
            if (r0 <= 0) goto L15
            com.tkay.core.common.j.a r0 = r5.ah
            com.tkay.core.common.j.b r1 = r5.ai
            int r2 = r5.L
            long r2 = (long) r2
            r4 = 1
            r0.a(r1, r2, r4)
            return
        L15:
            r5.G()
            return
    }

    private void L() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.tkay.core.common.f.i r1 = r3.c
            com.tkay.core.common.f.j r1 = r1.m
            int r1 = r1.x()
            if (r1 == 0) goto L37
            r2 = 1
            if (r1 == r2) goto L25
            r2 = 2
            if (r1 == r2) goto L16
            goto L4e
        L16:
            com.tkay.basead.ui.PanelView r1 = r3.y
            java.util.List r1 = r1.getClickViews()
            r0.addAll(r1)
            com.tkay.basead.ui.PanelView r1 = r3.y
            r0.add(r1)
            goto L4e
        L25:
            com.tkay.basead.ui.PanelView r1 = r3.y
            android.view.View r1 = r1.getCTAButton()
            if (r1 == 0) goto L4e
            com.tkay.basead.ui.PanelView r1 = r3.y
            android.view.View r1 = r1.getCTAButton()
            r0.add(r1)
            goto L4e
        L37:
            com.tkay.basead.ui.PanelView r1 = r3.y
            java.util.List r1 = r1.getClickViews()
            r0.addAll(r1)
            com.tkay.basead.ui.PanelView r1 = r3.y
            r0.add(r1)
            com.tkay.basead.ui.BaseEndCardView r1 = r3.z
            if (r1 == 0) goto L4e
            com.tkay.basead.ui.BaseEndCardView r1 = r3.z
            r0.add(r1)
        L4e:
            com.tkay.core.api.BaseAd r1 = r3.ag
            r2 = 0
            r1.registerListener(r3, r0, r2)
            return
    }

    private void M() {
            r7 = this;
            java.util.Timer r0 = r7.af
            if (r0 != 0) goto L17
            java.util.Timer r1 = new java.util.Timer
            r1.<init>()
            r7.af = r1
            com.tkay.basead.ui.ThirdPartyFullScreenATView$5 r2 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$5
            r2.<init>(r7)
            r3 = 0
            r5 = 300(0x12c, double:1.48E-321)
            r1.schedule(r2, r3, r5)
        L17:
            return
    }

    private void N() {
            r1 = this;
            java.util.Timer r0 = r1.af
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    private void O() {
            r2 = this;
            java.util.Timer r0 = r2.af
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r2.af = r0
        La:
            com.tkay.core.common.j.a r0 = r2.ah
            com.tkay.core.common.j.b r1 = r2.ai
            r0.a(r1)
            return
    }

    static void a(com.tkay.basead.ui.ThirdPartyFullScreenATView r7) {
            java.util.Timer r0 = r7.af
            if (r0 != 0) goto L17
            java.util.Timer r1 = new java.util.Timer
            r1.<init>()
            r7.af = r1
            com.tkay.basead.ui.ThirdPartyFullScreenATView$5 r2 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$5
            r2.<init>(r7)
            r3 = 0
            r5 = 300(0x12c, double:1.48E-321)
            r1.schedule(r2, r3, r5)
        L17:
            return
    }

    static void a(com.tkay.basead.ui.ThirdPartyFullScreenATView r1, int r2) {
            com.tkay.basead.ui.-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4 r0 = new com.tkay.basead.ui.-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4
            r0.<init>(r1, r2)
            r1.post(r0)
            return
    }

    static void b(com.tkay.basead.ui.ThirdPartyFullScreenATView r0) {
            java.util.Timer r0 = r0.af
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }

    static com.tkay.core.api.BaseAd c(com.tkay.basead.ui.ThirdPartyFullScreenATView r0) {
            com.tkay.core.api.BaseAd r0 = r0.ag
            return r0
    }

    private void e(int r2) {
            r1 = this;
            com.tkay.basead.ui.-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4 r0 = new com.tkay.basead.ui.-$$Lambda$ThirdPartyFullScreenATView$KGTMASoqLZMXr69F-klAnlgxrX4
            r0.<init>(r1, r2)
            r1.post(r0)
            return
    }

    private void f(int r2) {
            r1 = this;
            int r2 = r2 * 1000
            com.tkay.basead.ui.CountDownView r0 = r1.H
            if (r0 == 0) goto L13
            com.tkay.basead.ui.CountDownView r0 = r1.H
            boolean r0 = r0.isShown()
            if (r0 == 0) goto L13
            com.tkay.basead.ui.CountDownView r0 = r1.H
            r0.refresh(r2)
        L13:
            int r0 = r1.L
            if (r0 < 0) goto L1e
            int r0 = r1.L
            if (r2 < r0) goto L1e
            r1.G()
        L1e:
            return
    }

    public static void lambda$KGTMASoqLZMXr69F-klAnlgxrX4(com.tkay.basead.ui.ThirdPartyFullScreenATView r0, int r1) {
            r0.f(r1)
            return
    }

    @Override
    protected final void A() {
            r0 = this;
            super.C()
            return
    }

    @Override
    protected final void G() {
            r2 = this;
            super.G()
            com.tkay.core.common.j.a r0 = r2.ah
            com.tkay.core.common.j.b r1 = r2.ai
            r0.a(r1)
            return
    }

    @Override
    protected final void H() {
            r6 = this;
            android.widget.RelativeLayout r0 = r6.w
            if (r0 == 0) goto L10c
            com.tkay.basead.ui.BaseEndCardView r0 = r6.z
            if (r0 == 0) goto L10c
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.tkay.basead.ui.BaseEndCardView r2 = r6.z
            r2.setLayoutParams(r0)
            int r0 = r6.Q
            boolean r0 = r6.c(r0)
            r2 = 1
            if (r0 == 0) goto L102
            int r0 = r6.Q
            r3 = 1056964608(0x3f000000, float:0.5)
            if (r0 == r2) goto Laa
            r4 = 2
            if (r0 == r4) goto L73
            r4 = 5
            if (r0 == r4) goto L3e
            r3 = 6
            if (r0 == r3) goto L73
            r1 = 8
            if (r0 == r1) goto L31
            goto L102
        L31:
            com.tkay.basead.ui.PanelView r0 = r6.y
            android.view.View r0 = r0.getShakeView()
            if (r0 == 0) goto L102
            r0.setVisibility(r1)
            goto L102
        L3e:
            int r0 = r6.D
            float r0 = (float) r0
            float r0 = r0 * r3
            int r0 = (int) r0
            int r3 = r6.D
            int r3 = r3 - r0
            com.tkay.basead.ui.BaseEndCardView r4 = r6.z
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r1, r3)
            r4.setLayoutParams(r5)
            com.tkay.basead.ui.PanelView r1 = r6.y
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            if (r1 == 0) goto L102
            int r3 = r6.C
            r1.width = r3
            r1.height = r0
            com.tkay.basead.ui.PanelView r0 = r6.y
            r0.setLayoutParams(r1)
            com.tkay.basead.ui.PanelView r0 = r6.y
            r0.removeAllViews()
            com.tkay.basead.ui.PanelView r0 = r6.y
            int r1 = r6.Q
            r0.setLayoutType(r1)
            goto L102
        L73:
            android.content.Context r0 = r6.getContext()
            r3 = 1133903872(0x43960000, float:300.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r3)
            int r3 = r6.C
            int r3 = r3 - r0
            com.tkay.basead.ui.BaseEndCardView r4 = r6.z
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r3, r1)
            r4.setLayoutParams(r5)
            com.tkay.basead.ui.PanelView r3 = r6.y
            android.view.ViewGroup$LayoutParams r3 = r3.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3
            if (r3 == 0) goto L102
            r3.width = r0
            r3.height = r1
            com.tkay.basead.ui.PanelView r0 = r6.y
            r0.setLayoutParams(r3)
            com.tkay.basead.ui.PanelView r0 = r6.y
            r0.removeAllViews()
            com.tkay.basead.ui.PanelView r0 = r6.y
            int r1 = r6.Q
            r0.setLayoutType(r1)
            goto L102
        Laa:
            android.widget.RelativeLayout r0 = r6.w
            r0.setBackgroundColor(r1)
            int r0 = r6.D
            float r0 = (float) r0
            float r0 = r0 * r3
            int r0 = (int) r0
            com.tkay.core.common.f.h r3 = r6.d
            java.lang.String r3 = r3.t()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto Lc4
            int r3 = r6.D
            int r3 = r3 - r0
            goto Ld2
        Lc4:
            int r3 = r6.D
            int r3 = r3 - r0
            android.content.Context r4 = r6.getContext()
            r5 = 1112014848(0x42480000, float:50.0)
            int r4 = com.tkay.core.common.l.h.a(r4, r5)
            int r3 = r3 + r4
        Ld2:
            com.tkay.basead.ui.BaseEndCardView r4 = r6.z
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams
            r5.<init>(r1, r0)
            r4.setLayoutParams(r5)
            com.tkay.basead.ui.BaseEndCardView r0 = r6.z
            r0.setNeedArc(r2)
            com.tkay.basead.ui.PanelView r0 = r6.y
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            if (r0 == 0) goto L102
            int r1 = r6.C
            r0.width = r1
            r0.height = r3
            com.tkay.basead.ui.PanelView r1 = r6.y
            r1.setLayoutParams(r0)
            com.tkay.basead.ui.PanelView r0 = r6.y
            r0.removeAllViews()
            com.tkay.basead.ui.PanelView r0 = r6.y
            int r1 = r6.Q
            r0.setLayoutType(r1)
        L102:
            android.widget.RelativeLayout r0 = r6.w
            com.tkay.basead.ui.BaseEndCardView r1 = r6.z
            r0.addView(r1, r2)
            r6.L()
        L10c:
            return
    }

    @Override
    protected final void I() {
            r2 = this;
            android.view.View r0 = r2.ae
            if (r0 == 0) goto L17
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L17
            android.view.View r0 = r2.ae
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.View r1 = r2.ae
            r0.removeView(r1)
        L17:
            com.tkay.basead.ui.CountDownView r0 = r2.H
            r1 = 8
            if (r0 == 0) goto L22
            com.tkay.basead.ui.CountDownView r0 = r2.H
            r0.setVisibility(r1)
        L22:
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            if (r0 == 0) goto L2b
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            r0.setVisibility(r1)
        L2b:
            return
    }

    @Override
    protected final void J() {
            r1 = this;
            int r0 = r1.C
            r1.O = r0
            int r0 = r1.D
            r1.P = r0
            return
    }

    @Override
    protected final void a() {
            r4 = this;
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_thirdparty_full_screen"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.inflate(r1, r4)
            return
    }

    @Override
    protected final void c() {
            r5 = this;
            android.view.View r0 = r5.ae
            if (r0 == 0) goto L24
            android.widget.RelativeLayout r0 = r5.w
            android.view.View r1 = r5.ae
            r2 = 0
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r4 = -1
            r3.<init>(r4, r4)
            r0.addView(r1, r2, r3)
            com.tkay.core.api.BaseAd r0 = r5.ag
            double r0 = r0.getVideoDuration()
            int r0 = (int) r0
            int r0 = r0 * 1000
            r5.d(r0)
            r5.D()
            r5.L()
        L24:
            return
    }

    @Override
    protected final boolean c(int r3) {
            r2 = this;
            if (r3 == 0) goto L15
            r0 = 1
            if (r3 == r0) goto L15
            r1 = 2
            if (r3 == r1) goto L15
            r1 = 5
            if (r3 == r1) goto L15
            r1 = 6
            if (r3 == r1) goto L15
            r1 = 8
            if (r3 == r1) goto L14
            r3 = 0
            return r3
        L14:
            return r0
        L15:
            com.tkay.core.common.f.h r3 = r2.d
            boolean r3 = com.tkay.basead.a.e.a(r3)
            return r3
    }

    @Override
    protected void destroy() {
            r2 = this;
            super.destroy()
            java.util.Timer r0 = r2.af
            if (r0 == 0) goto Ld
            r0.cancel()
            r0 = 0
            r2.af = r0
        Ld:
            com.tkay.core.common.j.a r0 = r2.ah
            com.tkay.core.common.j.b r1 = r2.ai
            r0.a(r1)
            return
    }

    @Override
    public void init() {
            r5 = this;
            r5.b()
            int r0 = r5.Q
            boolean r0 = r5.c(r0)
            r5.F = r0
            com.tkay.core.api.BaseAd r0 = r5.ag
            com.tkay.basead.ui.ThirdPartyFullScreenATView$2 r1 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$2
            r1.<init>(r5)
            r0.setNativeEventListener(r1)
            boolean r0 = r5.u
            if (r0 != 0) goto L52
            int r0 = r5.a
            r1 = 1
            if (r1 == r0) goto L58
            r0 = 3
            int r2 = r5.a
            if (r0 != r2) goto L58
            com.tkay.core.api.BaseAd r0 = r5.ag
            java.lang.String r0 = r0.getAdType()
            java.lang.String r2 = "1"
            boolean r0 = android.text.TextUtils.equals(r0, r2)
            if (r0 == 0) goto L52
            android.view.View r0 = r5.ae
            if (r0 == 0) goto L52
            r5.J()
            r5.c()
            int r0 = r5.L
            if (r0 < 0) goto L51
            int r0 = r5.L
            if (r0 <= 0) goto L4e
            com.tkay.core.common.j.a r0 = r5.ah
            com.tkay.core.common.j.b r2 = r5.ai
            int r3 = r5.L
            long r3 = (long) r3
            r0.a(r2, r3, r1)
            return
        L4e:
            r5.G()
        L51:
            return
        L52:
            r5.J()
            r5.p()
        L58:
            return
    }

    @Override
    protected final int q() {
            r2 = this;
            int r0 = r2.Q
            r1 = 8
            if (r0 != r1) goto L9
            int r0 = r2.Q
            return r0
        L9:
            int r0 = r2.C
            int r1 = r2.D
            if (r0 >= r1) goto L19
            int r0 = r2.ac
            int r1 = r2.ad
            if (r0 < r1) goto L17
            r0 = 1
            return r0
        L17:
            r0 = 5
            return r0
        L19:
            int r0 = r2.ac
            int r1 = r2.ad
            if (r0 >= r1) goto L21
            r0 = 2
            return r0
        L21:
            r0 = 6
            return r0
    }

    @Override
    protected final void u() {
            r2 = this;
            com.tkay.core.common.f.h r0 = r2.d
            java.lang.String r0 = r0.u()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L24
            com.tkay.basead.a.f.a()
            r1 = 2
            java.lang.String r0 = com.tkay.basead.a.f.a(r1, r0)
            int[] r0 = com.tkay.core.common.l.b.a(r0)
            if (r0 == 0) goto L24
            r1 = 0
            r1 = r0[r1]
            r2.ac = r1
            r1 = 1
            r0 = r0[r1]
            r2.ad = r0
        L24:
            return
    }

    @Override
    protected final void v() {
            r8 = this;
            com.tkay.basead.ui.PanelView r0 = r8.y
            if (r0 == 0) goto L1b
            com.tkay.basead.ui.PanelView r0 = r8.y
            r1 = 4
            r0.setVisibility(r1)
            com.tkay.basead.ui.PanelView r2 = r8.y
            com.tkay.core.common.f.h r3 = r8.d
            com.tkay.core.common.f.i r4 = r8.c
            int r5 = r8.t
            r6 = 0
            com.tkay.basead.ui.ThirdPartyFullScreenATView$3 r7 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$3
            r7.<init>(r8)
            r2.init(r3, r4, r5, r6, r7)
        L1b:
            r8.w()
            return
    }

    @Override
    protected final void w() {
            r4 = this;
            com.tkay.basead.ui.PanelView r0 = r4.y
            if (r0 == 0) goto L37
            com.tkay.core.common.f.h r0 = r4.d
            boolean r0 = com.tkay.basead.a.e.a(r0)
            r1 = 0
            r2 = 8
            if (r0 != 0) goto L12
            r4.Q = r2
            goto L14
        L12:
            r4.Q = r1
        L14:
            com.tkay.basead.ui.PanelView r0 = r4.y
            int r3 = r4.Q
            r0.setLayoutType(r3)
            int r0 = r4.Q
            if (r0 != r2) goto L32
            com.tkay.core.common.f.i r0 = r4.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.x()
            if (r0 != 0) goto L32
            com.tkay.basead.ui.PanelView r0 = r4.y
            android.view.View r0 = r0.getCTAButton()
            r0.setVisibility(r2)
        L32:
            com.tkay.basead.ui.PanelView r0 = r4.y
            r0.setVisibility(r1)
        L37:
            return
    }

    @Override
    protected final void z() {
            r2 = this;
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r2.M
            if (r0 == 0) goto L10
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            r1 = 1
            r0.setMute(r1)
            goto L16
        L10:
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            r1 = 0
            r0.setMute(r1)
        L16:
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            r1 = 4
            r0.setVisibility(r1)
            com.tkay.basead.ui.MuteImageView r0 = r2.K
            com.tkay.basead.ui.ThirdPartyFullScreenATView$4 r1 = new com.tkay.basead.ui.ThirdPartyFullScreenATView$4
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            return
    }
}

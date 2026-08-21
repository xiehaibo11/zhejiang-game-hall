package com.tkay.basead.ui;

public class FullScreenATView extends com.tkay.basead.ui.BaseScreenATView {
    public static final java.lang.String TAG = null;
    private com.tkay.basead.ui.GuideToClickView ae;



    static {
            java.lang.Class<com.tkay.basead.ui.FullScreenATView> r0 = com.tkay.basead.ui.FullScreenATView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.FullScreenATView.TAG = r0
            return
    }

    public FullScreenATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public FullScreenATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, java.lang.String r4, int r5, int r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6)
            android.content.Context r1 = r0.getContext()
            java.lang.String r2 = "myoffer_full_screen_view_id"
            java.lang.String r3 = "id"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.setId(r1)
            r1 = 0
            r0.G = r1
            return
    }

    @Override
    protected final void A() {
            r6 = this;
            boolean r0 = r6.u
            if (r0 == 0) goto L8
            r6.C()
            return
        L8:
            r0 = 1
            int r1 = r6.a
            if (r0 != r1) goto L4b
            boolean r0 = r6.v
            if (r0 != 0) goto L4b
            com.tkay.core.common.f.i r0 = r6.c
            com.tkay.core.common.f.j r0 = r0.m
            long r0 = r0.e()
            double r0 = (double) r0
            r2 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r0 = r0 / r2
            double r0 = java.lang.Math.ceil(r0)
            com.tkay.basead.ui.PlayerView r4 = r6.x
            if (r4 == 0) goto L39
            com.tkay.basead.ui.PlayerView r4 = r6.x
            int r4 = r4.getVideoLength()
            double r4 = (double) r4
            double r4 = r4 / r2
            double r2 = java.lang.Math.ceil(r4)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L39
            r0 = r2
        L39:
            int r0 = (int) r0
            java.lang.String r0 = java.lang.String.valueOf(r0)
            android.content.Context r1 = r6.getContext()
            com.tkay.basead.ui.FullScreenATView$2 r2 = new com.tkay.basead.ui.FullScreenATView$2
            r2.<init>(r6)
            com.tkay.basead.ui.RewardExitConfirmDialogActivity.a(r1, r0, r2)
            return
        L4b:
            r6.B()
            r6.p()
            return
    }

    @Override
    protected final void D() {
            r2 = this;
            super.D()
            com.tkay.basead.ui.BaseShakeView r0 = r2.R
            com.tkay.basead.ui.BaseShakeView r1 = r2.S
            r2.a(r0, r1)
            return
    }

    @Override
    protected final void H() {
            r9 = this;
            android.widget.RelativeLayout r0 = r9.w
            if (r0 == 0) goto L1f5
            com.tkay.basead.ui.BaseEndCardView r0 = r9.z
            if (r0 == 0) goto L1f5
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            com.tkay.basead.ui.BaseEndCardView r2 = r9.z
            r2.setLayoutParams(r0)
            boolean r0 = r9.n()
            r2 = 3
            if (r0 == 0) goto L22
            android.widget.RelativeLayout r0 = r9.w
            com.tkay.basead.ui.BaseEndCardView r1 = r9.z
            r0.addView(r1, r2)
            return
        L22:
            int r0 = r9.Q
            boolean r0 = r9.c(r0)
            r3 = 6
            r4 = 2
            r5 = 1
            if (r0 == 0) goto L157
            int r0 = r9.Q
            r6 = 1056964608(0x3f000000, float:0.5)
            if (r0 == r5) goto Lff
            if (r0 == r4) goto Lc8
            r7 = 5
            if (r0 == r7) goto L93
            if (r0 == r3) goto Lc8
            r1 = 8
            if (r0 == r1) goto L40
            goto L157
        L40:
            com.tkay.core.common.f.i r0 = r9.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.x()
            r6 = 0
            if (r0 == 0) goto L77
            com.tkay.basead.ui.BaseShakeView r0 = r9.R
            if (r0 == 0) goto L54
            com.tkay.basead.ui.BaseShakeView r0 = r9.R
            r0.setVisibility(r1)
        L54:
            com.tkay.basead.ui.BaseShakeView r0 = r9.S
            if (r0 == 0) goto L5d
            com.tkay.basead.ui.BaseShakeView r0 = r9.S
            r0.setVisibility(r1)
        L5d:
            com.tkay.basead.ui.PanelView r0 = r9.y
            android.view.View r0 = r0.getShakeView()
            boolean r7 = r9.m()
            if (r7 == 0) goto L70
            if (r0 == 0) goto L157
            r0.setVisibility(r6)
            goto L157
        L70:
            if (r0 == 0) goto L157
            r0.setVisibility(r1)
            goto L157
        L77:
            boolean r0 = r9.m()
            if (r0 == 0) goto L88
            com.tkay.basead.ui.BaseShakeView r0 = r9.S
            if (r0 == 0) goto L157
            com.tkay.basead.ui.BaseShakeView r0 = r9.S
            r0.setVisibility(r6)
            goto L157
        L88:
            com.tkay.basead.ui.BaseShakeView r0 = r9.S
            if (r0 == 0) goto L157
            com.tkay.basead.ui.BaseShakeView r0 = r9.S
            r0.setVisibility(r1)
            goto L157
        L93:
            int r0 = r9.D
            float r0 = (float) r0
            float r0 = r0 * r6
            int r0 = (int) r0
            int r6 = r9.D
            int r6 = r6 - r0
            com.tkay.basead.ui.BaseEndCardView r7 = r9.z
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r1, r6)
            r7.setLayoutParams(r8)
            com.tkay.basead.ui.PanelView r1 = r9.y
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            if (r1 == 0) goto L157
            int r6 = r9.C
            r1.width = r6
            r1.height = r0
            com.tkay.basead.ui.PanelView r0 = r9.y
            r0.setLayoutParams(r1)
            com.tkay.basead.ui.PanelView r0 = r9.y
            r0.removeAllViews()
            com.tkay.basead.ui.PanelView r0 = r9.y
            int r1 = r9.Q
            r0.setLayoutType(r1)
            goto L157
        Lc8:
            android.content.Context r0 = r9.getContext()
            r6 = 1133903872(0x43960000, float:300.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r6)
            int r6 = r9.C
            int r6 = r6 - r0
            com.tkay.basead.ui.BaseEndCardView r7 = r9.z
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r6, r1)
            r7.setLayoutParams(r8)
            com.tkay.basead.ui.PanelView r6 = r9.y
            android.view.ViewGroup$LayoutParams r6 = r6.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r6 = (android.widget.RelativeLayout.LayoutParams) r6
            if (r6 == 0) goto L157
            r6.width = r0
            r6.height = r1
            com.tkay.basead.ui.PanelView r0 = r9.y
            r0.setLayoutParams(r6)
            com.tkay.basead.ui.PanelView r0 = r9.y
            r0.removeAllViews()
            com.tkay.basead.ui.PanelView r0 = r9.y
            int r1 = r9.Q
            r0.setLayoutType(r1)
            goto L157
        Lff:
            android.widget.RelativeLayout r0 = r9.w
            r0.setBackgroundColor(r1)
            int r0 = r9.D
            float r0 = (float) r0
            float r0 = r0 * r6
            int r0 = (int) r0
            com.tkay.core.common.f.h r6 = r9.d
            java.lang.String r6 = r6.t()
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 == 0) goto L119
            int r6 = r9.D
            int r6 = r6 - r0
            goto L127
        L119:
            int r6 = r9.D
            int r6 = r6 - r0
            android.content.Context r7 = r9.getContext()
            r8 = 1112014848(0x42480000, float:50.0)
            int r7 = com.tkay.core.common.l.h.a(r7, r8)
            int r6 = r6 + r7
        L127:
            com.tkay.basead.ui.BaseEndCardView r7 = r9.z
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r1, r0)
            r7.setLayoutParams(r8)
            com.tkay.basead.ui.BaseEndCardView r0 = r9.z
            r0.setNeedArc(r5)
            com.tkay.basead.ui.PanelView r0 = r9.y
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            if (r0 == 0) goto L157
            int r1 = r9.C
            r0.width = r1
            r0.height = r6
            com.tkay.basead.ui.PanelView r1 = r9.y
            r1.setLayoutParams(r0)
            com.tkay.basead.ui.PanelView r0 = r9.y
            r0.removeAllViews()
            com.tkay.basead.ui.PanelView r0 = r9.y
            int r1 = r9.Q
            r0.setLayoutType(r1)
        L157:
            android.widget.RelativeLayout r0 = r9.w
            com.tkay.basead.ui.BaseEndCardView r1 = r9.z
            r0.addView(r1, r2)
            int r0 = r9.a
            if (r0 != r5) goto L1f5
            com.tkay.core.common.ui.component.RoundImageView r0 = new com.tkay.core.common.ui.component.RoundImageView
            android.content.Context r1 = r9.getContext()
            r0.<init>(r1)
            android.content.Context r1 = r9.getContext()
            java.lang.String r2 = "myoffer_reward_icon"
            java.lang.String r5 = "drawable"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r5)
            r0.setImageResource(r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r2 = r9.getContext()
            r5 = 1114636288(0x42700000, float:60.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r5)
            android.content.Context r6 = r9.getContext()
            int r5 = com.tkay.core.common.l.h.a(r6, r5)
            r1.<init>(r2, r5)
            int r2 = r9.Q
            boolean r2 = r9.c(r2)
            r5 = 1094713344(0x41400000, float:12.0)
            if (r2 == 0) goto L1d2
            int r2 = r9.Q
            if (r2 == r4) goto L1b6
            if (r2 == r3) goto L1b6
            android.content.Context r2 = r9.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r5)
            r1.leftMargin = r2
            android.content.Context r2 = r9.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r5)
            r1.topMargin = r2
            goto L1e6
        L1b6:
            int r2 = r9.C
            android.content.Context r3 = r9.getContext()
            r5 = 1134886912(0x43a50000, float:330.0)
            int r3 = com.tkay.core.common.l.h.a(r3, r5)
            int r2 = r2 - r3
            r1.leftMargin = r2
            android.content.Context r2 = r9.getContext()
            r3 = 1102053376(0x41b00000, float:22.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            r1.topMargin = r2
            goto L1e6
        L1d2:
            android.content.Context r2 = r9.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r5)
            r1.leftMargin = r2
            android.content.Context r2 = r9.getContext()
            int r2 = com.tkay.core.common.l.h.a(r2, r5)
            r1.topMargin = r2
        L1e6:
            r0.setLayoutParams(r1)
            android.widget.RelativeLayout r1 = r9.w
            android.widget.RelativeLayout r2 = r9.w
            int r2 = r2.getChildCount()
            int r2 = r2 - r4
            r1.addView(r0, r2)
        L1f5:
            return
    }

    @Override
    protected final void I() {
            r4 = this;
            com.tkay.basead.ui.PlayerView r0 = r4.x
            if (r0 == 0) goto Le
            android.widget.RelativeLayout r0 = r4.w
            com.tkay.basead.ui.PlayerView r1 = r4.x
            r0.removeView(r1)
            r0 = 0
            r4.x = r0
        Le:
            com.tkay.basead.ui.CountDownView r0 = r4.H
            r1 = 8
            if (r0 == 0) goto L19
            com.tkay.basead.ui.CountDownView r0 = r4.H
            r0.setVisibility(r1)
        L19:
            com.tkay.basead.ui.CloseImageView r0 = r4.I
            float r2 = r4.N
            r0.setClickAreaScaleFactor(r2)
            com.tkay.basead.ui.MuteImageView r0 = r4.K
            if (r0 == 0) goto L29
            com.tkay.basead.ui.MuteImageView r0 = r4.K
            r0.setVisibility(r1)
        L29:
            com.tkay.basead.ui.BaseShakeView r0 = r4.R
            if (r0 == 0) goto L32
            com.tkay.basead.ui.BaseShakeView r0 = r4.R
            r0.setVisibility(r1)
        L32:
            com.tkay.basead.ui.BaseShakeView r0 = r4.S
            if (r0 == 0) goto L3f
            int r0 = r4.Q
            if (r0 == r1) goto L3f
            com.tkay.basead.ui.BaseShakeView r0 = r4.S
            r0.setVisibility(r1)
        L3f:
            com.tkay.core.common.f.i r0 = r4.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.i()
            r2 = 1
            r3 = 0
            if (r0 != r2) goto L62
            boolean r0 = r4.getHasPerformClick()
            if (r0 != 0) goto L62
            com.tkay.basead.ui.GuideToClickView r0 = r4.ae
            if (r0 == 0) goto L62
            r0.setVisibility(r3)
            com.tkay.basead.ui.GuideToClickView r0 = r4.ae
            com.tkay.basead.ui.FullScreenATView$1 r2 = new com.tkay.basead.ui.FullScreenATView$1
            r2.<init>(r4)
            r0.setOnClickListener(r2)
        L62:
            boolean r0 = r4.n()
            if (r0 == 0) goto L80
            com.tkay.basead.ui.PanelView r0 = r4.y
            if (r0 == 0) goto L71
            com.tkay.basead.ui.PanelView r0 = r4.y
            r0.setVisibility(r1)
        L71:
            boolean r0 = r4.m()
            if (r0 == 0) goto L80
            com.tkay.basead.ui.BaseShakeView r0 = r4.S
            if (r0 == 0) goto L80
            com.tkay.basead.ui.BaseShakeView r0 = r4.S
            r0.setVisibility(r3)
        L80:
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
            java.lang.String r2 = "myoffer_full_screen"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.inflate(r1, r4)
            return
    }

    @Override
    protected final void b(int r2) {
            r1 = this;
            super.b(r2)
            com.tkay.basead.ui.GuideToClickView r2 = r1.ae
            if (r2 == 0) goto Lc
            r0 = 8
            r2.setVisibility(r0)
        Lc:
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
    public void init() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "myoffer_shake_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.BaseShakeView r0 = (com.tkay.basead.ui.BaseShakeView) r0
            r3.R = r0
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_shake_border_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.BaseShakeView r0 = (com.tkay.basead.ui.BaseShakeView) r0
            r3.S = r0
            r3.o()
            android.content.Context r0 = r3.getContext()
            java.lang.String r2 = "myoffer_guide_to_click_view"
            int r0 = com.tkay.core.common.l.h.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.tkay.basead.ui.GuideToClickView r0 = (com.tkay.basead.ui.GuideToClickView) r0
            r3.ae = r0
            super.init()
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
    protected final void w() {
            r3 = this;
            com.tkay.basead.ui.PanelView r0 = r3.y
            if (r0 == 0) goto L32
            com.tkay.core.common.f.h r0 = r3.d
            boolean r0 = com.tkay.basead.a.e.a(r0)
            r1 = 8
            if (r0 != 0) goto L11
            r3.Q = r1
            goto L14
        L11:
            r0 = 0
            r3.Q = r0
        L14:
            com.tkay.basead.ui.PanelView r0 = r3.y
            int r2 = r3.Q
            r0.setLayoutType(r2)
            int r0 = r3.Q
            if (r0 != r1) goto L32
            com.tkay.core.common.f.i r0 = r3.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.x()
            if (r0 != 0) goto L32
            com.tkay.basead.ui.PanelView r0 = r3.y
            android.view.View r0 = r0.getCTAButton()
            r0.setVisibility(r1)
        L32:
            return
    }
}

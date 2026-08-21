package com.tkay.basead.ui;

public class HalfScreenATView extends com.tkay.basead.ui.BaseScreenATView {
    public static final java.lang.String TAG = null;
    private int ae;
    private android.widget.RelativeLayout af;

    static {
            java.lang.Class<com.tkay.basead.ui.HalfScreenATView> r0 = com.tkay.basead.ui.HalfScreenATView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.HalfScreenATView.TAG = r0
            return
    }

    public HalfScreenATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public HalfScreenATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, java.lang.String r4, int r5, int r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6)
            android.content.Context r1 = r0.getContext()
            java.lang.String r2 = "myoffer_half_screen_view_id"
            java.lang.String r3 = "id"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.setId(r1)
            r1 = 1
            r0.G = r1
            return
    }

    private void K() {
            r1 = this;
            com.tkay.core.common.f.h r0 = r1.d
            boolean r0 = com.tkay.basead.a.e.a(r0)
            r0 = r0 ^ 1
            if (r0 == 0) goto Le
            r0 = 7
            r1.ae = r0
            return
        Le:
            boolean r0 = r1.L()
            if (r0 == 0) goto L18
            r0 = 3
            r1.ae = r0
            return
        L18:
            r0 = 4
            r1.ae = r0
            return
    }

    private boolean L() {
            r2 = this;
            int r0 = r2.aa
            int r1 = r2.ab
            if (r0 > r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private boolean M() {
            r1 = this;
            com.tkay.core.common.f.h r0 = r1.d
            boolean r0 = com.tkay.basead.a.e.a(r0)
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    private void N() {
            r17 = this;
            r0 = r17
            com.tkay.basead.ui.PanelView r1 = r0.y
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1
            android.widget.RelativeLayout r2 = r0.w
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            int r3 = r2.leftMargin
            int r4 = r2.rightMargin
            int r5 = r2.topMargin
            int r6 = r2.bottomMargin
            com.tkay.basead.ui.PlayerView r7 = r0.x
            android.view.ViewGroup$LayoutParams r7 = r7.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r7 = (android.widget.RelativeLayout.LayoutParams) r7
            android.widget.RelativeLayout r8 = r0.af
            android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8
            android.content.Context r9 = r17.getContext()
            int r9 = com.tkay.core.common.l.h.b(r9)
            if (r9 > 0) goto L3e
            android.content.Context r9 = r17.getContext()
            r10 = 1103626240(0x41c80000, float:25.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)
        L3e:
            int r10 = r0.ae
            r11 = 7
            r12 = 1058162981(0x3f124925, float:0.5714286)
            r13 = 2
            r14 = 1066192077(0x3f8ccccd, float:1.1)
            r15 = 1065623816(0x3f842108, float:1.032258)
            if (r10 != r11) goto La2
            int r10 = r0.t
            r11 = 1123024896(0x42f00000, float:120.0)
            if (r10 != r13) goto L73
            int r3 = r0.D
            int r3 = r3 - r5
            int r3 = r3 - r6
            float r4 = (float) r3
            r6 = 1071644672(0x3fe00000, float:1.75)
            float r4 = r4 * r6
            int r4 = (int) r4
            android.content.Context r6 = r17.getContext()
            int r6 = com.tkay.core.common.l.h.a(r6, r11)
            if (r5 >= r9) goto L6b
            float r5 = (float) r9
            float r5 = r5 * r14
            int r5 = (int) r5
            r2.topMargin = r5
        L6b:
            r2.width = r4
            android.widget.RelativeLayout r5 = r0.w
            r5.setLayoutParams(r2)
            goto L9c
        L73:
            boolean r2 = r17.L()
            if (r2 == 0) goto L8c
            int r2 = r0.C
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4
            float r2 = r2 / r12
            int r3 = (int) r2
            android.content.Context r2 = r17.getContext()
            r5 = 1131413504(0x43700000, float:240.0)
            int r6 = com.tkay.core.common.l.h.a(r2, r5)
            goto L9c
        L8c:
            int r2 = r0.C
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4
            float r2 = r2 / r15
            int r3 = (int) r2
            android.content.Context r2 = r17.getContext()
            int r6 = com.tkay.core.common.l.h.a(r2, r11)
        L9c:
            r0.O = r4
            r0.P = r3
            goto L169
        La2:
            r11 = 3
            r15 = 1
            r16 = 0
            java.lang.String r14 = "id"
            java.lang.String r13 = "myoffer_panel_view_blank"
            if (r10 != r11) goto L12f
            int r10 = r0.t
            if (r10 != r15) goto L102
            com.tkay.basead.ui.PanelView r2 = r0.y
            android.content.Context r5 = r17.getContext()
            int r5 = com.tkay.core.common.l.h.a(r5, r13, r14)
            android.view.View r2 = r2.findViewById(r5)
            if (r2 == 0) goto Lca
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2
            int r2 = r2.topMargin
            r16 = r2
        Lca:
            int r2 = r0.C
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4
            float r3 = r2 / r12
            int r3 = (int) r3
            int r5 = r0.D
            android.content.Context r6 = r17.getContext()
            r9 = 1105199104(0x41e00000, float:28.0)
            int r6 = com.tkay.core.common.l.h.a(r6, r9)
            r9 = 2
            int r6 = r6 * r9
            int r6 = r6 + r3
            if (r5 >= r6) goto Lf3
            r5 = 1072216623(0x3fe8ba2f, float:1.8181819)
            float r2 = r2 / r5
            int r6 = (int) r2
            r0.O = r4
            int r2 = r3 - r6
            int r2 = r2 + r16
            r0.P = r2
            goto L169
        Lf3:
            r0.O = r4
            int r2 = r0.O
            float r2 = (float) r2
            r5 = 1061997773(0x3f4ccccd, float:0.8)
            float r2 = r2 / r5
            int r2 = (int) r2
            r0.P = r2
            int r2 = r0.P
            goto L165
        L102:
            if (r5 >= r9) goto L10c
            float r3 = (float) r9
            r4 = 1066192077(0x3f8ccccd, float:1.1)
            float r3 = r3 * r4
            int r5 = (int) r3
            r2.topMargin = r5
        L10c:
            int r3 = r0.D
            int r3 = r3 - r5
            int r3 = r3 - r6
            float r4 = (float) r3
            r5 = 1070386381(0x3fcccccd, float:1.6)
            float r4 = r4 * r5
            int r4 = (int) r4
            r0.P = r3
            int r5 = r0.P
            float r5 = (float) r5
            r6 = 1057971241(0x3f0f5c29, float:0.56)
            float r5 = r5 * r6
            int r5 = (int) r5
            r0.O = r5
            int r5 = r0.O
            int r5 = r4 - r5
            r2.width = r4
            android.widget.RelativeLayout r6 = r0.w
            r6.setLayoutParams(r2)
            r6 = r3
            goto L196
        L12f:
            com.tkay.basead.ui.PanelView r10 = r0.y
            android.content.Context r11 = r17.getContext()
            int r11 = com.tkay.core.common.l.h.a(r11, r13, r14)
            android.view.View r10 = r10.findViewById(r11)
            if (r10 == 0) goto L149
            android.view.ViewGroup$LayoutParams r10 = r10.getLayoutParams()
            android.widget.RelativeLayout$LayoutParams r10 = (android.widget.RelativeLayout.LayoutParams) r10
            int r10 = r10.topMargin
            r16 = r10
        L149:
            int r10 = r0.t
            r11 = 1073741824(0x40000000, float:2.0)
            if (r10 != r15) goto L16b
            int r2 = r0.C
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4
            r3 = 1065623816(0x3f842108, float:1.032258)
            float r2 = r2 / r3
            int r3 = (int) r2
            r0.O = r4
            int r2 = r0.O
            float r2 = (float) r2
            float r2 = r2 / r11
            int r2 = (int) r2
            r0.P = r2
            int r2 = r0.P
        L165:
            int r2 = r3 - r2
            int r6 = r2 + r16
        L169:
            r5 = r4
            goto L196
        L16b:
            if (r5 >= r9) goto L175
            float r3 = (float) r9
            r4 = 1066192077(0x3f8ccccd, float:1.1)
            float r3 = r3 * r4
            int r5 = (int) r3
            r2.topMargin = r5
        L175:
            int r3 = r0.D
            int r3 = r3 - r5
            int r3 = r3 - r6
            float r4 = (float) r3
            r5 = 1065623816(0x3f842108, float:1.032258)
            float r4 = r4 * r5
            int r4 = (int) r4
            r0.O = r4
            int r5 = r0.O
            float r5 = (float) r5
            float r5 = r5 / r11
            int r5 = (int) r5
            r0.P = r5
            int r5 = r0.P
            int r5 = r3 - r5
            int r6 = r5 + r16
            r2.width = r4
            android.widget.RelativeLayout r5 = r0.w
            r5.setLayoutParams(r2)
            goto L169
        L196:
            r8.width = r4
            r8.height = r3
            android.widget.RelativeLayout r2 = r0.af
            r2.setLayoutParams(r8)
            int r2 = r0.O
            r7.width = r2
            int r2 = r0.P
            r7.height = r2
            com.tkay.basead.ui.PlayerView r2 = r0.x
            r2.setLayoutParams(r7)
            r1.width = r5
            r1.height = r6
            com.tkay.basead.ui.PanelView r2 = r0.y
            r2.setLayoutParams(r1)
            return
    }

    @Override
    protected final void A() {
            r0 = this;
            super.B()
            super.C()
            return
    }

    @Override
    protected final void F() {
            r0 = this;
            return
    }

    @Override
    protected final void H() {
            r4 = this;
            android.widget.RelativeLayout r0 = r4.af
            if (r0 == 0) goto L16
            com.tkay.basead.ui.BaseEndCardView r0 = r4.z
            if (r0 == 0) goto L16
            com.tkay.basead.ui.PlayerView r0 = r4.x
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.widget.RelativeLayout r1 = r4.af
            com.tkay.basead.ui.BaseEndCardView r2 = r4.z
            r3 = 1
            r1.addView(r2, r3, r0)
        L16:
            return
    }

    @Override
    protected final void I() {
            r3 = this;
            com.tkay.basead.ui.PlayerView r0 = r3.x
            if (r0 == 0) goto Le
            android.widget.RelativeLayout r0 = r3.af
            com.tkay.basead.ui.PlayerView r1 = r3.x
            r0.removeView(r1)
            r0 = 0
            r3.x = r0
        Le:
            com.tkay.basead.ui.CountDownView r0 = r3.H
            r1 = 8
            if (r0 == 0) goto L19
            com.tkay.basead.ui.CountDownView r0 = r3.H
            r0.setVisibility(r1)
        L19:
            com.tkay.basead.ui.CloseImageView r0 = r3.I
            float r2 = r3.N
            r0.setClickAreaScaleFactor(r2)
            com.tkay.basead.ui.MuteImageView r0 = r3.K
            if (r0 == 0) goto L29
            com.tkay.basead.ui.MuteImageView r0 = r3.K
            r0.setVisibility(r1)
        L29:
            return
    }

    @Override
    protected final void J() {
            r17 = this;
            r1 = r17
            com.tkay.basead.ui.PanelView r0 = r1.y     // Catch: java.lang.Throwable -> L1b9
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout r2 = r1.w     // Catch: java.lang.Throwable -> L1b9
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Throwable -> L1b9
            int r3 = r2.leftMargin     // Catch: java.lang.Throwable -> L1b9
            int r4 = r2.rightMargin     // Catch: java.lang.Throwable -> L1b9
            int r5 = r2.topMargin     // Catch: java.lang.Throwable -> L1b9
            int r6 = r2.bottomMargin     // Catch: java.lang.Throwable -> L1b9
            com.tkay.basead.ui.PlayerView r7 = r1.x     // Catch: java.lang.Throwable -> L1b9
            android.view.ViewGroup$LayoutParams r7 = r7.getLayoutParams()     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout$LayoutParams r7 = (android.widget.RelativeLayout.LayoutParams) r7     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout r8 = r1.af     // Catch: java.lang.Throwable -> L1b9
            android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout$LayoutParams r8 = (android.widget.RelativeLayout.LayoutParams) r8     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r9 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            int r9 = com.tkay.core.common.l.h.b(r9)     // Catch: java.lang.Throwable -> L1b9
            if (r9 > 0) goto L3e
            android.content.Context r9 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            r10 = 1103626240(0x41c80000, float:25.0)
            int r9 = com.tkay.core.common.l.h.a(r9, r10)     // Catch: java.lang.Throwable -> L1b9
        L3e:
            int r10 = r1.ae     // Catch: java.lang.Throwable -> L1b9
            r11 = 7
            r12 = 1058162981(0x3f124925, float:0.5714286)
            r13 = 2
            r14 = 1065623816(0x3f842108, float:1.032258)
            r15 = 1066192077(0x3f8ccccd, float:1.1)
            if (r10 != r11) goto La3
            int r10 = r1.t     // Catch: java.lang.Throwable -> L1b9
            r11 = 1123024896(0x42f00000, float:120.0)
            if (r10 != r13) goto L73
            int r3 = r1.D     // Catch: java.lang.Throwable -> L1b9
            int r3 = r3 - r5
            int r3 = r3 - r6
            float r4 = (float) r3     // Catch: java.lang.Throwable -> L1b9
            r6 = 1071644672(0x3fe00000, float:1.75)
            float r4 = r4 * r6
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r6 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            int r6 = com.tkay.core.common.l.h.a(r6, r11)     // Catch: java.lang.Throwable -> L1b9
            if (r5 >= r9) goto L6b
            float r5 = (float) r9     // Catch: java.lang.Throwable -> L1b9
            float r5 = r5 * r15
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L1b9
            r2.topMargin = r5     // Catch: java.lang.Throwable -> L1b9
        L6b:
            r2.width = r4     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout r5 = r1.w     // Catch: java.lang.Throwable -> L1b9
            r5.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L1b9
            goto L9c
        L73:
            boolean r2 = r17.L()     // Catch: java.lang.Throwable -> L1b9
            if (r2 == 0) goto L8c
            int r2 = r1.C     // Catch: java.lang.Throwable -> L1b9
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4     // Catch: java.lang.Throwable -> L1b9
            float r2 = r2 / r12
            int r3 = (int) r2     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r2 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            r5 = 1131413504(0x43700000, float:240.0)
            int r6 = com.tkay.core.common.l.h.a(r2, r5)     // Catch: java.lang.Throwable -> L1b9
            goto L9c
        L8c:
            int r2 = r1.C     // Catch: java.lang.Throwable -> L1b9
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4     // Catch: java.lang.Throwable -> L1b9
            float r2 = r2 / r14
            int r3 = (int) r2     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r2 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            int r6 = com.tkay.core.common.l.h.a(r2, r11)     // Catch: java.lang.Throwable -> L1b9
        L9c:
            r1.O = r4     // Catch: java.lang.Throwable -> L1b9
            r1.P = r3     // Catch: java.lang.Throwable -> L1b9
        La0:
            r5 = r4
            goto L199
        La3:
            int r10 = r1.ae     // Catch: java.lang.Throwable -> L1b9
            r11 = 3
            r16 = 0
            java.lang.String r14 = "id"
            java.lang.String r15 = "myoffer_panel_view_blank"
            r13 = 1
            if (r10 != r11) goto L131
            int r10 = r1.t     // Catch: java.lang.Throwable -> L1b9
            if (r10 != r13) goto L104
            com.tkay.basead.ui.PanelView r2 = r1.y     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r5 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            int r5 = com.tkay.core.common.l.h.a(r5, r15, r14)     // Catch: java.lang.Throwable -> L1b9
            android.view.View r2 = r2.findViewById(r5)     // Catch: java.lang.Throwable -> L1b9
            if (r2 == 0) goto Lcd
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Throwable -> L1b9
            int r2 = r2.topMargin     // Catch: java.lang.Throwable -> L1b9
            r16 = r2
        Lcd:
            int r2 = r1.C     // Catch: java.lang.Throwable -> L1b9
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4     // Catch: java.lang.Throwable -> L1b9
            float r3 = r2 / r12
            int r3 = (int) r3     // Catch: java.lang.Throwable -> L1b9
            int r5 = r1.D     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r6 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            r9 = 1105199104(0x41e00000, float:28.0)
            int r6 = com.tkay.core.common.l.h.a(r6, r9)     // Catch: java.lang.Throwable -> L1b9
            r9 = 2
            int r6 = r6 * r9
            int r6 = r6 + r3
            if (r5 >= r6) goto Lf5
            r5 = 1072216623(0x3fe8ba2f, float:1.8181819)
            float r2 = r2 / r5
            int r6 = (int) r2     // Catch: java.lang.Throwable -> L1b9
            r1.O = r4     // Catch: java.lang.Throwable -> L1b9
            int r2 = r3 - r6
            int r2 = r2 + r16
            r1.P = r2     // Catch: java.lang.Throwable -> L1b9
            goto La0
        Lf5:
            r1.O = r4     // Catch: java.lang.Throwable -> L1b9
            int r2 = r1.O     // Catch: java.lang.Throwable -> L1b9
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L1b9
            r5 = 1061997773(0x3f4ccccd, float:0.8)
            float r2 = r2 / r5
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L1b9
            r1.P = r2     // Catch: java.lang.Throwable -> L1b9
            int r2 = r1.P     // Catch: java.lang.Throwable -> L1b9
            goto L167
        L104:
            if (r5 >= r9) goto L10e
            float r3 = (float) r9     // Catch: java.lang.Throwable -> L1b9
            r4 = 1066192077(0x3f8ccccd, float:1.1)
            float r3 = r3 * r4
            int r5 = (int) r3     // Catch: java.lang.Throwable -> L1b9
            r2.topMargin = r5     // Catch: java.lang.Throwable -> L1b9
        L10e:
            int r3 = r1.D     // Catch: java.lang.Throwable -> L1b9
            int r3 = r3 - r5
            int r3 = r3 - r6
            float r4 = (float) r3     // Catch: java.lang.Throwable -> L1b9
            r5 = 1070386381(0x3fcccccd, float:1.6)
            float r4 = r4 * r5
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L1b9
            r1.P = r3     // Catch: java.lang.Throwable -> L1b9
            int r5 = r1.P     // Catch: java.lang.Throwable -> L1b9
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L1b9
            r6 = 1057971241(0x3f0f5c29, float:0.56)
            float r5 = r5 * r6
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L1b9
            r1.O = r5     // Catch: java.lang.Throwable -> L1b9
            int r5 = r1.O     // Catch: java.lang.Throwable -> L1b9
            int r5 = r4 - r5
            r2.width = r4     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout r6 = r1.w     // Catch: java.lang.Throwable -> L1b9
            r6.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L1b9
            r6 = r3
            goto L199
        L131:
            com.tkay.basead.ui.PanelView r10 = r1.y     // Catch: java.lang.Throwable -> L1b9
            android.content.Context r11 = r17.getContext()     // Catch: java.lang.Throwable -> L1b9
            int r11 = com.tkay.core.common.l.h.a(r11, r15, r14)     // Catch: java.lang.Throwable -> L1b9
            android.view.View r10 = r10.findViewById(r11)     // Catch: java.lang.Throwable -> L1b9
            if (r10 == 0) goto L14b
            android.view.ViewGroup$LayoutParams r10 = r10.getLayoutParams()     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout$LayoutParams r10 = (android.widget.RelativeLayout.LayoutParams) r10     // Catch: java.lang.Throwable -> L1b9
            int r10 = r10.topMargin     // Catch: java.lang.Throwable -> L1b9
            r16 = r10
        L14b:
            int r10 = r1.t     // Catch: java.lang.Throwable -> L1b9
            r11 = 1073741824(0x40000000, float:2.0)
            if (r10 != r13) goto L16d
            int r2 = r1.C     // Catch: java.lang.Throwable -> L1b9
            int r2 = r2 - r3
            int r4 = r2 - r4
            float r2 = (float) r4     // Catch: java.lang.Throwable -> L1b9
            r3 = 1065623816(0x3f842108, float:1.032258)
            float r2 = r2 / r3
            int r3 = (int) r2     // Catch: java.lang.Throwable -> L1b9
            r1.O = r4     // Catch: java.lang.Throwable -> L1b9
            int r2 = r1.O     // Catch: java.lang.Throwable -> L1b9
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L1b9
            float r2 = r2 / r11
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L1b9
            r1.P = r2     // Catch: java.lang.Throwable -> L1b9
            int r2 = r1.P     // Catch: java.lang.Throwable -> L1b9
        L167:
            int r2 = r3 - r2
            int r6 = r2 + r16
            goto La0
        L16d:
            if (r5 >= r9) goto L177
            float r3 = (float) r9     // Catch: java.lang.Throwable -> L1b9
            r4 = 1066192077(0x3f8ccccd, float:1.1)
            float r3 = r3 * r4
            int r5 = (int) r3     // Catch: java.lang.Throwable -> L1b9
            r2.topMargin = r5     // Catch: java.lang.Throwable -> L1b9
        L177:
            int r3 = r1.D     // Catch: java.lang.Throwable -> L1b9
            int r3 = r3 - r5
            int r3 = r3 - r6
            float r4 = (float) r3     // Catch: java.lang.Throwable -> L1b9
            r5 = 1065623816(0x3f842108, float:1.032258)
            float r4 = r4 * r5
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L1b9
            r1.O = r4     // Catch: java.lang.Throwable -> L1b9
            int r5 = r1.O     // Catch: java.lang.Throwable -> L1b9
            float r5 = (float) r5     // Catch: java.lang.Throwable -> L1b9
            float r5 = r5 / r11
            int r5 = (int) r5     // Catch: java.lang.Throwable -> L1b9
            r1.P = r5     // Catch: java.lang.Throwable -> L1b9
            int r5 = r1.P     // Catch: java.lang.Throwable -> L1b9
            int r5 = r3 - r5
            int r6 = r5 + r16
            r2.width = r4     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout r5 = r1.w     // Catch: java.lang.Throwable -> L1b9
            r5.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L1b9
            goto La0
        L199:
            r8.width = r4     // Catch: java.lang.Throwable -> L1b9
            r8.height = r3     // Catch: java.lang.Throwable -> L1b9
            android.widget.RelativeLayout r2 = r1.af     // Catch: java.lang.Throwable -> L1b9
            r2.setLayoutParams(r8)     // Catch: java.lang.Throwable -> L1b9
            int r2 = r1.O     // Catch: java.lang.Throwable -> L1b9
            r7.width = r2     // Catch: java.lang.Throwable -> L1b9
            int r2 = r1.P     // Catch: java.lang.Throwable -> L1b9
            r7.height = r2     // Catch: java.lang.Throwable -> L1b9
            com.tkay.basead.ui.PlayerView r2 = r1.x     // Catch: java.lang.Throwable -> L1b9
            r2.setLayoutParams(r7)     // Catch: java.lang.Throwable -> L1b9
            r0.width = r5     // Catch: java.lang.Throwable -> L1b9
            r0.height = r6     // Catch: java.lang.Throwable -> L1b9
            com.tkay.basead.ui.PanelView r2 = r1.y     // Catch: java.lang.Throwable -> L1b9
            r2.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L1b9
            return
        L1b9:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    @Override
    protected final void a() {
            r4 = this;
            int r0 = r4.ae
            r1 = 3
            java.lang.String r2 = "layout"
            if (r0 == r1) goto L36
            r1 = 7
            if (r0 == r1) goto L20
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_half_screen_horizontal"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            r0.inflate(r1, r4)
            return
        L20:
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_half_screen_empty_info"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            r0.inflate(r1, r4)
            return
        L36:
            android.content.Context r0 = r4.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r4.getContext()
            java.lang.String r3 = "myoffer_half_screen_vertical"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r2)
            r0.inflate(r1, r4)
            return
    }

    @Override
    protected final void b() {
            r4 = this;
            super.b()
            android.widget.RelativeLayout r0 = r4.w
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "myoffer_rl_container"
            java.lang.String r3 = "id"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            android.view.View r0 = r0.findViewById(r1)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r4.af = r0
            return
    }

    @Override
    protected final boolean c(int r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    protected final void d() {
            r1 = this;
            super.d()
            com.tkay.core.common.f.h r0 = r1.d
            boolean r0 = com.tkay.basead.a.e.a(r0)
            r0 = r0 ^ 1
            if (r0 == 0) goto L11
            r0 = 7
            r1.ae = r0
            return
        L11:
            boolean r0 = r1.L()
            if (r0 == 0) goto L1b
            r0 = 3
            r1.ae = r0
            return
        L1b:
            r0 = 4
            r1.ae = r0
            return
    }

    @Override
    protected final int q() {
            r1 = this;
            int r0 = r1.Q
            return r0
    }

    @Override
    protected final void w() {
            r3 = this;
            com.tkay.basead.ui.PanelView r0 = r3.y
            if (r0 == 0) goto L5f
            int r0 = r3.ae
            r3.Q = r0
            com.tkay.basead.ui.PanelView r0 = r3.y
            int r1 = r3.Q
            r0.setLayoutType(r1)
            int r0 = r3.ae
            r1 = 7
            if (r0 != r1) goto L5f
            com.tkay.core.common.f.i r0 = r3.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.x()
            if (r0 != 0) goto L29
            com.tkay.basead.ui.PanelView r0 = r3.y
            android.view.View r0 = r0.getCTAButton()
            r1 = 8
            r0.setVisibility(r1)
        L29:
            boolean r0 = r3.m()
            if (r0 == 0) goto L5f
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
            com.tkay.basead.ui.BaseShakeView r0 = r3.R
            com.tkay.basead.ui.BaseShakeView r1 = r3.S
            r3.a(r0, r1)
        L5f:
            super.E()
            return
    }

    @Override
    protected final void y() {
            r0 = this;
            return
    }
}

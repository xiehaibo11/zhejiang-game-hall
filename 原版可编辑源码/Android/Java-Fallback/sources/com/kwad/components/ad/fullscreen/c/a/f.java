package com.kwad.components.ad.fullscreen.c.a;

public final class f extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.m, com.kwad.sdk.core.g.b, com.kwad.sdk.widget.c {
    private com.kwad.sdk.core.g.d dO;
    private android.os.Vibrator dP;
    private android.view.ViewGroup gP;
    private android.widget.TextView gQ;
    private android.widget.TextView gR;
    private android.widget.ImageView gS;
    private android.widget.FrameLayout gT;
    private android.widget.ImageView gU;
    private android.widget.FrameLayout gV;
    private android.widget.TextView gW;
    private android.animation.Animator gX;
    private com.kwad.components.ad.reward.e.f mPlayEndPageListener;














    public f() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.fullscreen.c.a.f$1 r0 = new com.kwad.components.ad.fullscreen.c.a.f$1
            r0.<init>(r1)
            r1.mPlayEndPageListener = r0
            return
    }

    private android.animation.Animator a(float r20, float r21) {
            r19 = this;
            r0 = r19
            android.view.ViewGroup r1 = r0.gP
            r2 = 0
            if (r1 != 0) goto L8
            return r2
        L8:
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet
            r1.<init>()
            android.view.ViewGroup r3 = r0.gP
            android.content.res.Resources r3 = r3.getResources()
            android.widget.ImageView r4 = r0.gS
            r5 = 100
            r7 = 1098907648(0x41800000, float:16.0)
            android.animation.Animator r4 = com.kwad.components.core.t.m.a(r4, r2, r5, r7)
            com.kwad.components.ad.fullscreen.c.a.f$7 r5 = new com.kwad.components.ad.fullscreen.c.a.f$7
            r5.<init>(r0)
            r4.addListener(r5)
            android.view.ViewGroup r5 = r0.gP
            int r5 = r5.getLeft()
            float r5 = (float) r5
            android.view.ViewGroup r6 = r0.gP
            int r6 = r6.getWidth()
            float r6 = (float) r6
            r7 = 1073741824(0x40000000, float:2.0)
            float r6 = r6 / r7
            float r5 = r5 + r6
            android.view.ViewGroup r6 = r0.gP
            int r6 = r6.getTop()
            float r6 = (float) r6
            android.view.ViewGroup r8 = r0.gP
            int r8 = r8.getHeight()
            float r8 = (float) r8
            float r8 = r8 / r7
            float r6 = r6 + r8
            android.view.ViewGroup r7 = r0.gP
            r8 = 1
            float[] r9 = new float[r8]
            float r5 = r20 - r5
            r10 = 0
            r9[r10] = r5
            java.lang.String r5 = "translationX"
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofFloat(r7, r5, r9)
            android.view.ViewGroup r7 = r0.gP
            float[] r9 = new float[r8]
            float r6 = r21 - r6
            r9[r10] = r6
            java.lang.String r6 = "translationY"
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r7, r6, r9)
            int r7 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_height
            float r7 = r3.getDimension(r7)
            int r9 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_icon_size
            float r9 = r3.getDimension(r9)
            android.widget.FrameLayout r11 = r0.gT
            int r11 = r11.getWidth()
            float r11 = (float) r11
            android.widget.ImageView r12 = r0.gS
            int r12 = r12.getWidth()
            float r12 = (float) r12
            r13 = 0
            int r14 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r14 == 0) goto L1c5
            int r14 = (r12 > r13 ? 1 : (r12 == r13 ? 0 : -1))
            if (r14 != 0) goto L8a
            goto L1c5
        L8a:
            r2 = 2
            float[] r14 = new float[r2]
            r14[r10] = r11
            r14[r8] = r7
            android.animation.ValueAnimator r7 = android.animation.ValueAnimator.ofFloat(r14)
            com.kwad.components.ad.fullscreen.c.a.f$8 r11 = new com.kwad.components.ad.fullscreen.c.a.f$8
            android.widget.ImageView r14 = r0.gU
            r11.<init>(r0, r14)
            r7.addUpdateListener(r11)
            float[] r11 = new float[r2]
            r11[r10] = r12
            r11[r8] = r9
            android.animation.ValueAnimator r11 = android.animation.ValueAnimator.ofFloat(r11)
            com.kwad.components.ad.fullscreen.c.a.f$9 r12 = new com.kwad.components.ad.fullscreen.c.a.f$9
            android.widget.ImageView r14 = r0.gS
            r12.<init>(r0, r14)
            r11.addUpdateListener(r12)
            int r12 = com.kwad.sdk.R.color.ksad_shake_icon_bg_start_color
            int r12 = r3.getColor(r12)
            int r14 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r14 = r3.getColor(r14)
            int r15 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_icon_stroke_size
            int r15 = r3.getDimensionPixelSize(r15)
            int[] r13 = new int[r2]
            r13[r10] = r12
            r13[r8] = r14
            android.animation.ValueAnimator r12 = com.kwad.sdk.widget.a.ofArgb(r13)
            com.kwad.components.ad.fullscreen.c.a.f$10 r13 = new com.kwad.components.ad.fullscreen.c.a.f$10
            r13.<init>(r0, r14, r15)
            r12.addUpdateListener(r13)
            float[] r13 = new float[r2]
            r13 = {x01c6: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            android.animation.ValueAnimator r13 = android.animation.ValueAnimator.ofFloat(r13)
            r14 = 200(0xc8, double:9.9E-322)
            r13.setDuration(r14)
            com.kwad.components.ad.fullscreen.c.a.f$11 r14 = new com.kwad.components.ad.fullscreen.c.a.f$11
            r14.<init>(r0)
            r13.addUpdateListener(r14)
            float[] r14 = new float[r2]
            android.widget.TextView r15 = r0.gQ
            int r15 = r15.getHeight()
            float r15 = (float) r15
            r14[r10] = r15
            r15 = 0
            r14[r8] = r15
            android.animation.ValueAnimator r14 = android.animation.ValueAnimator.ofFloat(r14)
            com.kwad.components.ad.fullscreen.c.a.f$12 r8 = new com.kwad.components.ad.fullscreen.c.a.f$12
            android.widget.TextView r15 = r0.gQ
            r8.<init>(r0, r15)
            r14.addUpdateListener(r8)
            float[] r8 = new float[r2]
            android.widget.TextView r15 = r0.gR
            int r15 = r15.getHeight()
            float r15 = (float) r15
            r8[r10] = r15
            r15 = 0
            r16 = 1
            r8[r16] = r15
            android.animation.ValueAnimator r8 = android.animation.ValueAnimator.ofFloat(r8)
            com.kwad.components.ad.fullscreen.c.a.f$13 r15 = new com.kwad.components.ad.fullscreen.c.a.f$13
            android.widget.TextView r2 = r0.gR
            r15.<init>(r0, r2)
            r8.addUpdateListener(r15)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r17 = r11
            r10 = 500(0x1f4, double:2.47E-321)
            r2.setDuration(r10)
            r15 = 7
            android.animation.Animator[] r15 = new android.animation.Animator[r15]
            r18 = 0
            r15[r18] = r5
            r5 = r15
            r16 = 1
            r5[r16] = r6
            r6 = 2
            r5[r6] = r7
            r6 = 3
            r5[r6] = r17
            r7 = 4
            r5[r7] = r12
            r12 = 5
            r5[r12] = r14
            r14 = 6
            r5[r14] = r8
            r2.playTogether(r5)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            android.animation.Animator r8 = r4.clone()
            com.kwad.components.ad.fullscreen.c.a.f$2 r15 = new com.kwad.components.ad.fullscreen.c.a.f$2
            r15.<init>(r0, r9, r8)
            r8.addListener(r15)
            android.widget.FrameLayout r9 = r0.gV
            android.view.ViewGroup$LayoutParams r9 = r9.getLayoutParams()
            int r15 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_width
            float r3 = r3.getDimension(r15)
            r15 = 2
            float[] r12 = new float[r15]
            r17 = 0
            r18 = 0
            r12[r18] = r17
            r16 = 1
            r12[r16] = r3
            android.animation.ValueAnimator r3 = android.animation.ValueAnimator.ofFloat(r12)
            android.animation.ValueAnimator r3 = r3.setDuration(r10)
            com.kwad.components.ad.fullscreen.c.a.f$3 r12 = new com.kwad.components.ad.fullscreen.c.a.f$3
            r12.<init>(r0, r9)
            r3.addUpdateListener(r12)
            android.widget.TextView r9 = r0.gW
            float[] r12 = new float[r15]
            r12 = {x01ce: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            java.lang.String r7 = "alpha"
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofFloat(r9, r7, r12)
            android.animation.ObjectAnimator r7 = r7.setDuration(r10)
            android.animation.Animator[] r9 = new android.animation.Animator[r6]
            r10 = 0
            r9[r10] = r8
            r8 = 1
            r9[r8] = r3
            r9[r15] = r7
            r5.playTogether(r9)
            android.animation.Animator[] r3 = new android.animation.Animator[r14]
            r3[r10] = r4
            android.animation.Animator r7 = r4.clone()
            r3[r8] = r7
            android.animation.Animator r4 = r4.clone()
            r3[r15] = r4
            r3[r6] = r13
            r4 = 4
            r3[r4] = r2
            r2 = 5
            r3[r2] = r5
            r1.playSequentially(r3)
            return r1
        L1c5:
            return r2
    }

    static android.animation.Animator a(com.kwad.components.ad.fullscreen.c.a.f r0, float r1, float r2) {
            android.animation.Animator r0 = r0.a(r1, r2)
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.fullscreen.c.a.f r0, android.animation.Animator r1) {
            r0.gX = r1
            return r1
    }

    static android.view.ViewGroup a(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.view.ViewGroup r0 = r0.gP
            return r0
    }

    private static java.lang.String a(com.kwad.components.ad.reward.j r2, com.kwad.sdk.core.response.model.AdInfo r3) {
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.dw(r3)
            com.kwad.components.core.e.d.c r2 = r2.mApkDownloadHelper
            boolean r1 = com.kwad.sdk.core.response.b.a.ax(r3)
            if (r1 == 0) goto L26
            if (r2 == 0) goto L26
            int r2 = r2.nw()
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r3 = com.kwad.sdk.core.response.b.b.dy(r3)
            r0 = 8
            if (r2 == r0) goto L24
            r0 = 12
            if (r2 == r0) goto L21
            java.lang.String r0 = r3.adActionDescription
            goto L26
        L21:
            java.lang.String r0 = r3.openAppLabel
            goto L26
        L24:
            java.lang.String r0 = r3.installAppLabel
        L26:
            return r0
    }

    private void a(com.kwad.sdk.core.response.model.AdInfo r4) {
            r3 = this;
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.du(r4)
            android.widget.TextView r1 = r3.gQ
            if (r1 == 0) goto Lb
            r1.setText(r0)
        Lb:
            android.widget.TextView r1 = r3.gW
            if (r1 == 0) goto L12
            r1.setText(r0)
        L12:
            com.kwad.components.ad.reward.j r0 = r3.qx
            java.lang.String r4 = a(r0, r4)
            android.widget.TextView r0 = r3.gR
            if (r0 == 0) goto L2d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "或点击"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.setText(r4)
        L2d:
            return
    }

    static android.widget.FrameLayout b(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.widget.FrameLayout r0 = r0.gV
            return r0
    }

    static com.kwad.sdk.core.g.d c(com.kwad.components.ad.fullscreen.c.a.f r0) {
            com.kwad.sdk.core.g.d r0 = r0.dO
            return r0
    }

    private void ca() {
            r8 = this;
            int r0 = com.kwad.sdk.R.id.ksad_root_container
            android.view.View r0 = r8.findViewById(r0)
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = (com.kwad.sdk.core.view.AdBaseFrameLayout) r0
            android.content.Context r1 = r8.getContext()
            int r2 = com.kwad.sdk.R.layout.ksad_shake_center
            r3 = 0
            android.view.View r1 = com.kwad.sdk.m.l.a(r1, r2, r0, r3)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r8.gP = r1
            r1.setVisibility(r3)
            android.view.ViewGroup r1 = r8.gP
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_icon_marginLeft
            int r2 = r1.getDimensionPixelSize(r2)
            int r4 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_icon_marginBottom
            int r4 = r1.getDimensionPixelSize(r4)
            int r5 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_title_marginBottom
            int r5 = r1.getDimensionPixelSize(r5)
            int r6 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_height
            int r1 = r1.getDimensionPixelSize(r6)
            android.content.Context r6 = r8.getContext()
            int r7 = com.kwad.sdk.R.layout.ksad_shake_tips_title
            android.view.View r3 = com.kwad.sdk.m.l.a(r6, r7, r0, r3)
            android.widget.FrameLayout r3 = (android.widget.FrameLayout) r3
            r8.gV = r3
            int r6 = com.kwad.sdk.R.id.ksad_shake_tips_label
            android.view.View r3 = r3.findViewById(r6)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r8.gW = r3
            android.widget.FrameLayout r3 = r8.gV
            r6 = 4
            r3.setVisibility(r6)
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r6 = -2
            r3.<init>(r6, r1)
            r3.leftMargin = r2
            r3.bottomMargin = r5
            r1 = 83
            r3.gravity = r1
            android.widget.FrameLayout r1 = r8.gV
            r0.addView(r1, r3)
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r1.<init>(r6, r6)
            r3 = 17
            r1.gravity = r3
            android.view.ViewGroup r3 = r8.gP
            r0.addView(r3, r1)
            com.kwad.components.ad.reward.j r1 = r8.qx
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            r3 = 185(0xb9, float:2.59E-43)
            r5 = 0
            com.kwad.sdk.core.report.a.b(r1, r3, r5)
            android.view.ViewGroup r1 = r8.gP
            com.kwad.components.ad.fullscreen.c.a.f$6 r3 = new com.kwad.components.ad.fullscreen.c.a.f$6
            r3.<init>(r8, r0, r2, r4)
            r1.post(r3)
            return
    }

    static android.content.Context d(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.content.Context r0 = r0.getContext()
            return r0
    }

    static android.animation.Animator e(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.animation.Animator r0 = r0.gX
            return r0
    }

    static android.widget.ImageView f(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.widget.ImageView r0 = r0.gS
            return r0
    }

    static android.widget.ImageView g(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.widget.ImageView r0 = r0.gU
            return r0
    }

    static android.widget.TextView h(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.widget.TextView r0 = r0.gQ
            return r0
    }

    static android.widget.TextView i(com.kwad.components.ad.fullscreen.c.a.f r0) {
            android.widget.TextView r0 = r0.gR
            return r0
    }

    private void initView() {
            r3 = this;
            android.view.ViewGroup r0 = r3.gP
            int r1 = com.kwad.sdk.R.id.ksad_shake_center_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.gQ = r0
            android.view.ViewGroup r0 = r3.gP
            int r1 = com.kwad.sdk.R.id.ksad_shake_center_sub_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.gR = r0
            android.view.ViewGroup r0 = r3.gP
            int r1 = com.kwad.sdk.R.id.ksad_shake_center_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.gS = r0
            android.view.ViewGroup r0 = r3.gP
            int r1 = com.kwad.sdk.R.id.ksad_shake_center_circle_area
            android.view.View r0 = r0.findViewById(r1)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r3.gT = r0
            android.view.ViewGroup r0 = r3.gP
            int r1 = com.kwad.sdk.R.id.ksad_shake_center_circle_area_bg
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.gU = r0
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.content.Context r1 = r3.getContext()
            android.view.ViewGroup r2 = r3.gP
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    public final void a(double r16) {
            r15 = this;
            r0 = r15
            com.kwad.sdk.core.c.b.AU()
            android.app.Activity r1 = com.kwad.sdk.core.c.b.getCurrentActivity()
            android.app.Activity r2 = r15.getActivity()
            if (r2 == 0) goto L16
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L16
            r1 = 1
            goto L17
        L16:
            r1 = 0
        L17:
            boolean r2 = com.kwad.components.core.e.c.b.mZ()
            r3 = 500(0x1f4, double:2.47E-321)
            r5 = 0
            if (r2 != 0) goto L53
            if (r1 != 0) goto L23
            goto L53
        L23:
            com.kwad.components.ad.reward.j r1 = r0.qx
            if (r1 == 0) goto L41
            com.kwad.sdk.core.report.j r14 = new com.kwad.sdk.core.report.j
            r14.<init>()
            r1 = r16
            r14.i(r1)
            com.kwad.components.ad.reward.j r6 = r0.qx
            r7 = 1
            android.content.Context r8 = r15.getContext()
            r9 = 157(0x9d, float:2.2E-43)
            r10 = 1
            r11 = 0
            r13 = 0
            r6.a(r7, r8, r9, r10, r11, r13, r14)
        L41:
            com.kwad.components.ad.fullscreen.c.a.f$5 r1 = new com.kwad.components.ad.fullscreen.c.a.f$5
            r1.<init>(r15)
            com.kwad.sdk.utils.bj.a(r1, r5, r3)
            android.content.Context r1 = r15.getContext()
            android.os.Vibrator r2 = r0.dP
            com.kwad.sdk.utils.bj.a(r1, r2)
            return
        L53:
            com.kwad.components.ad.fullscreen.c.a.f$4 r1 = new com.kwad.components.ad.fullscreen.c.a.f$4
            r1.<init>(r15)
            com.kwad.sdk.utils.bj.a(r1, r5, r3)
            return
    }

    @Override
    public final void a(android.view.View r4) {
            r3 = this;
            com.kwad.components.ad.reward.j r4 = r3.qx
            android.content.Context r0 = r3.getContext()
            r1 = 1
            r2 = 158(0x9e, float:2.21E-43)
            r4.a(r1, r0, r2, r1)
            return
    }

    @Override
    public final void aT() {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r3 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            android.content.Context r1 = r3.getContext()
            com.kwad.components.ad.reward.j r2 = r3.qx
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            boolean r1 = com.kwad.components.ad.fullscreen.b.a.a(r1, r2)
            if (r1 != 0) goto L1a
            return
        L1a:
            com.kwad.components.ad.reward.j r1 = r3.qx
            r1.a(r3)
            com.kwad.components.ad.reward.j r1 = r3.qx
            com.kwad.components.ad.reward.e.f r2 = r3.mPlayEndPageListener
            r1.b(r2)
            r3.ca()
            r3.initView()
            r3.a(r0)
            float r0 = com.kwad.sdk.core.response.b.b.ds(r0)
            com.kwad.sdk.core.g.d r1 = r3.dO
            if (r1 != 0) goto L42
            com.kwad.sdk.core.g.d r1 = new com.kwad.sdk.core.g.d
            r1.<init>(r0)
            r3.dO = r1
            r1.a(r3)
            goto L45
        L42:
            r1.e(r0)
        L45:
            com.kwad.sdk.core.g.d r0 = r3.dO
            android.content.Context r1 = r3.getContext()
            r0.bg(r1)
            android.content.Context r0 = r3.getContext()
            if (r0 == 0) goto L5e
            java.lang.String r1 = "vibrator"
            java.lang.Object r0 = r0.getSystemService(r1)
            android.os.Vibrator r0 = (android.os.Vibrator) r0
            r3.dP = r0
        L5e:
            android.content.Context r0 = r3.getContext()
            com.kwad.components.ad.fullscreen.b.a.H(r0)
            return
    }

    @Override
    public final void b(android.view.View r4) {
            r3 = this;
            com.kwad.components.ad.reward.j r4 = r3.qx
            android.content.Context r0 = r3.getContext()
            r1 = 1
            r2 = 158(0x9e, float:2.21E-43)
            r4.a(r1, r0, r2, r1)
            return
    }

    @Override
    public final int bZ() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_title_marginBottom
            int r0 = com.kwad.sdk.d.a.a.g(r0, r1)
            android.content.Context r1 = r3.getContext()
            int r2 = com.kwad.sdk.R.dimen.ksad_fullscreen_shake_tips_height
            int r1 = com.kwad.sdk.d.a.a.g(r1, r2)
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final void onUnbind() {
            r3 = this;
            super.onUnbind()
            android.view.ViewGroup r0 = r3.gP
            r1 = 0
            if (r0 == 0) goto L1d
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L1b
            android.view.ViewGroup r0 = r3.gP
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.ViewGroup r2 = r3.gP
            r0.removeView(r2)
        L1b:
            r3.gP = r1
        L1d:
            android.content.Context r0 = r3.getContext()
            android.os.Vibrator r2 = r3.dP
            com.kwad.sdk.utils.bj.b(r0, r2)
            r3.dP = r1
            android.animation.Animator r0 = r3.gX
            if (r0 == 0) goto L31
            r0.cancel()
            r3.gX = r1
        L31:
            com.kwad.components.ad.reward.j r0 = r3.qx
            com.kwad.components.ad.reward.e.f r1 = r3.mPlayEndPageListener
            r0.c(r1)
            return
    }
}

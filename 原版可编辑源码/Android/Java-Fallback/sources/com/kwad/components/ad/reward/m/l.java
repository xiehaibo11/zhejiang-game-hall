package com.kwad.components.ad.reward.m;

public final class l extends com.kwad.components.ad.reward.m.s implements android.view.View.OnClickListener {
    private android.widget.ImageView eZ;
    private android.widget.TextView lC;
    private com.kwad.components.ad.reward.j qx;
    private android.widget.TextView zA;
    private android.widget.TextView zB;
    private android.view.View zC;
    private java.util.Set<android.widget.ImageView> zD;
    private android.widget.TextView zE;
    private android.animation.Animator zF;
    private android.widget.ImageView zy;
    private android.widget.TextView zz;



    public l(com.kwad.components.ad.reward.j r2) {
            r1 = this;
            r1.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.zD = r0
            r1.qx = r2
            return
    }

    private static android.animation.Animator a(android.view.View r18, long r19, float r21) {
            r0 = r18
            r1 = r19
            r3 = r21
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            android.animation.AnimatorSet r4 = new android.animation.AnimatorSet
            r4.<init>()
            r5 = 1046562734(0x3e6147ae, float:0.22)
            r6 = 1058474557(0x3f170a3d, float:0.59)
            r7 = 1052266988(0x3eb851ec, float:0.36)
            r8 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r5 = android.support.v4.view.animation.PathInterpolatorCompat.create(r5, r6, r7, r8)
            r6 = 0
            r0.setPivotX(r6)
            int r7 = r18.getHeight()
            float r7 = (float) r7
            r0.setPivotY(r7)
            r7 = 2
            float[] r8 = new float[r7]
            r8 = {x00b2: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r9 = "alpha"
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r0, r9, r8)
            r9 = 100
            r8.setDuration(r9)
            float[] r9 = new float[r7]
            r10 = 0
            r9[r10] = r6
            r11 = 1
            r9[r11] = r3
            java.lang.String r12 = "rotation"
            android.animation.ObjectAnimator r9 = android.animation.ObjectAnimator.ofFloat(r0, r12, r9)
            android.animation.ObjectAnimator r9 = r9.setDuration(r1)
            float[] r13 = new float[r7]
            r13[r10] = r3
            float r14 = -r3
            r13[r11] = r14
            android.animation.ObjectAnimator r13 = android.animation.ObjectAnimator.ofFloat(r0, r12, r13)
            r15 = 2
            r17 = r12
            long r11 = r1 * r15
            android.animation.ObjectAnimator r13 = r13.setDuration(r11)
            r13.setInterpolator(r5)
            float[] r15 = new float[r7]
            r15[r10] = r14
            r16 = 1
            r15[r16] = r3
            r6 = r17
            android.animation.ObjectAnimator r15 = android.animation.ObjectAnimator.ofFloat(r0, r6, r15)
            android.animation.ObjectAnimator r15 = r15.setDuration(r11)
            r17 = r4
            float[] r4 = new float[r7]
            r4[r10] = r3
            r4[r16] = r14
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r0, r6, r4)
            android.animation.ObjectAnimator r3 = r3.setDuration(r11)
            r3.setInterpolator(r5)
            float[] r4 = new float[r7]
            r4[r10] = r14
            r5 = 0
            r4[r16] = r5
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r6, r4)
            android.animation.ObjectAnimator r0 = r0.setDuration(r1)
            r1 = 6
            android.animation.Animator[] r1 = new android.animation.Animator[r1]
            r1[r10] = r8
            r1[r16] = r9
            r1[r7] = r13
            r2 = 3
            r1[r2] = r15
            r2 = 4
            r1[r2] = r3
            r2 = 5
            r1[r2] = r0
            r0 = r17
            r0.playSequentially(r1)
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.m.l r0, android.animation.Animator r1) {
            r0.zF = r1
            return r1
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.m.l r0, android.view.View r1) {
            android.animation.Animator r0 = r(r1)
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.m.l r0, android.view.View r1, long r2, float r4) {
            r2 = 100
            r0 = 1090519040(0x41000000, float:8.0)
            android.animation.Animator r0 = a(r1, r2, r0)
            return r0
    }

    static android.widget.TextView a(com.kwad.components.ad.reward.m.l r0) {
            android.widget.TextView r0 = r0.zB
            return r0
    }

    private void a(com.kwad.components.ad.reward.model.a r7) {
            r6 = this;
            android.widget.TextView r0 = r6.zz
            java.lang.String r1 = r7.getTitle()
            r0.setText(r1)
            android.widget.TextView r0 = r6.lC
            java.lang.String r1 = r7.hq()
            r0.setText(r1)
            android.widget.TextView r0 = r6.zA
            java.lang.String r1 = r7.hn()
            r0.setText(r1)
            java.lang.String r0 = r7.gu()
            android.widget.ImageView r1 = r6.eZ
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_ic_default_user_avatar
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            android.widget.ImageView r2 = r6.eZ
            com.kwad.sdk.core.imageloader.KSImageLoader.loadCircleIcon(r2, r0, r1)
            java.lang.String r0 = com.kwad.components.ad.d.b.X()
            boolean r2 = com.kwad.sdk.utils.bc.isNullString(r0)
            if (r2 != 0) goto L43
            android.widget.ImageView r2 = r6.zy
            com.kwad.sdk.core.response.model.AdTemplate r3 = r7.hh()
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r0, r3)
        L43:
            boolean r0 = r7.ho()
            if (r0 == 0) goto L9c
            android.view.View r0 = r6.zC
            r2 = 0
            r0.setVisibility(r2)
            java.lang.String r0 = r7.hm()
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L69
            android.widget.TextView r3 = r6.zE
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r4[r2] = r0
            java.lang.String r0 = "%s已预约直播"
            java.lang.String r0 = java.lang.String.format(r0, r4)
            r3.setText(r0)
        L69:
            java.util.List r0 = r7.hp()
            if (r0 == 0) goto L9b
            java.util.List r7 = r7.hp()
            java.util.Set<android.widget.ImageView> r0 = r6.zD
            java.util.Iterator r0 = r0.iterator()
            r3 = r2
        L7a:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L9b
            java.lang.Object r4 = r0.next()
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            int r5 = r7.size()
            if (r3 >= r5) goto L98
            r4.setVisibility(r2)
            java.lang.Object r5 = r7.get(r3)
            java.lang.String r5 = (java.lang.String) r5
            com.kwad.sdk.core.imageloader.KSImageLoader.loadCircleIcon(r4, r5, r1)
        L98:
            int r3 = r3 + 1
            goto L7a
        L9b:
            return
        L9c:
            android.view.View r7 = r6.zC
            r0 = 8
            r7.setVisibility(r0)
            return
    }

    static android.animation.Animator b(com.kwad.components.ad.reward.m.l r0) {
            android.animation.Animator r0 = r0.zF
            return r0
    }

    static android.view.View c(com.kwad.components.ad.reward.m.l r0) {
            android.view.View r0 = r0.zC
            return r0
    }

    private void initView() {
            r4 = this;
            android.view.ViewGroup r0 = r4.sw
            if (r0 != 0) goto L5
            return
        L5:
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_badge
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.zB = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_kwai_logo
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.zy = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r4.eZ = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_name
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.zz = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_desc
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.lC = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_btn_follow
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.zA = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_follower_area
            android.view.View r0 = r0.findViewById(r1)
            r4.zC = r0
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_follower_icon1
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            android.view.ViewGroup r1 = r4.sw
            int r2 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_follower_icon2
            android.view.View r1 = r1.findViewById(r2)
            android.widget.ImageView r1 = (android.widget.ImageView) r1
            android.view.ViewGroup r2 = r4.sw
            int r3 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_follower_icon3
            android.view.View r2 = r2.findViewById(r3)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            java.util.Set<android.widget.ImageView> r3 = r4.zD
            r3.add(r0)
            java.util.Set<android.widget.ImageView> r0 = r4.zD
            r0.add(r1)
            java.util.Set<android.widget.ImageView> r0 = r4.zD
            r0.add(r2)
            android.view.ViewGroup r0 = r4.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_count
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r4.zE = r0
            android.view.ViewGroup r0 = r4.sw
            r0.setOnClickListener(r4)
            android.widget.TextView r0 = r4.zA
            r0.setOnClickListener(r4)
            return
    }

    private void kf() {
            r4 = this;
            android.widget.TextView r0 = r4.zB
            com.kwad.components.ad.reward.m.l$1 r1 = new com.kwad.components.ad.reward.m.l$1
            r1.<init>(r4)
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)
            return
    }

    private void kg() {
            r3 = this;
            com.kwad.components.ad.reward.m.l$2 r0 = new com.kwad.components.ad.reward.m.l$2
            r0.<init>(r3)
            r1 = 2000(0x7d0, double:9.88E-321)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            return
    }

    private static android.animation.Animator r(android.view.View r4) {
            r0 = 0
            r1 = 1058306785(0x3f147ae1, float:0.58)
            r2 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r0 = android.support.v4.view.animation.PathInterpolatorCompat.create(r0, r0, r1, r2)
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_count_area_trans_y
            float r1 = r1.getDimension(r2)
            r2 = 1
            float[] r2 = new float[r2]
            r3 = 0
            r2[r3] = r1
            java.lang.String r1 = "translationY"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r4, r1, r2)
            r1 = 250(0xfa, double:1.235E-321)
            android.animation.ObjectAnimator r4 = r4.setDuration(r1)
            r4.setInterpolator(r0)
            return r4
    }

    @Override
    protected final void a(com.kwad.components.ad.reward.m.r r1) {
            r0 = this;
            super.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            if (r1 == 0) goto L10
            com.kwad.components.ad.reward.model.a r1 = com.kwad.components.ad.reward.model.a.w(r1)
            r0.a(r1)
        L10:
            return
    }

    @Override
    protected final void ad(boolean r3) {
            r2 = this;
            super.ad(r3)
            android.view.ViewGroup r3 = r2.sw
            android.content.Context r3 = r3.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L26
            android.view.ViewGroup r0 = r2.sw
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.content.res.Resources r3 = r3.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_width_horizontal
            int r3 = r3.getDimensionPixelSize(r1)
            r0.width = r3
            android.view.ViewGroup r3 = r2.sw
            r3.setLayoutParams(r0)
        L26:
            return
    }

    public final void h(android.view.ViewGroup r3) {
            r2 = this;
            int r0 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_stub
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_subscribe_root
            super.a(r3, r0, r1)
            r2.initView()
            return
    }

    public final void ke() {
            r0 = this;
            r0.kf()
            r0.kg()
            return
    }

    @Override
    public final void onClick(android.view.View r5) {
            r4 = this;
            android.widget.TextView r0 = r4.zA
            boolean r0 = r5.equals(r0)
            r1 = 1
            if (r0 == 0) goto L15
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 29
            r0.a(r1, r5, r2, r1)
            return
        L15:
            android.view.ViewGroup r0 = r4.sw
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L29
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 53
            r3 = 2
            r0.a(r1, r5, r2, r3)
        L29:
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            android.animation.Animator r0 = r1.zF
            if (r0 == 0) goto Ld
            r0.cancel()
            r0 = 0
            r1.zF = r0
        Ld:
            return
    }
}

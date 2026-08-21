package com.kwad.components.ad.reward.m;

public final class i extends com.kwad.components.ad.reward.m.d implements android.view.View.OnClickListener {
    private android.widget.TextView gQ;
    private com.kwad.components.core.widget.KSCornerImageView lB;
    private android.widget.TextView lC;
    private com.kwad.components.core.widget.KsLogoView mLogoView;
    private com.kwad.components.ad.reward.j qx;
    private android.view.ViewGroup sw;
    private android.view.ViewGroup yV;
    private com.kwad.components.ad.widget.KsPriceView yW;
    private android.widget.TextView yX;
    private com.kwad.components.core.widget.KsStyledTextButton yY;
    private android.widget.TextView yZ;
    private android.widget.TextView za;
    private android.view.View zb;
    private android.widget.ImageView zc;




    static class a {
        private java.lang.String ln;
        private java.lang.String ql;
        private java.lang.String qm;
        private java.lang.String rO;
        private java.lang.String rating;
        private java.lang.String title;
        private java.lang.String zm;
        private java.lang.String zn;
        private java.lang.String zo;
        private java.lang.String zp;

        private a() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.kwad.components.ad.reward.m.i.a B(com.kwad.sdk.core.response.model.AdTemplate r3) {
                com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
                com.kwad.sdk.core.response.model.AdProductInfo r0 = com.kwad.sdk.core.response.b.a.cy(r3)
                com.kwad.components.ad.reward.m.i$a r1 = new com.kwad.components.ad.reward.m.i$a
                r1.<init>()
                java.lang.String r2 = r0.getName()
                r1.title = r2
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L1f
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.ap(r3)
                r1.title = r2
            L1f:
                java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r3)
                r1.zo = r2
                java.lang.String r2 = r0.getIcon()
                r1.ql = r2
                java.lang.String r3 = com.kwad.sdk.core.response.b.a.an(r3)
                r1.qm = r3
                java.lang.String r3 = r0.getPrice()
                r1.zm = r3
                java.lang.String r3 = r0.getOriginPrice()
                r1.ln = r3
                java.lang.String r3 = r0.getVolume()
                r1.zp = r3
                java.lang.String r3 = r0.getRating()
                r1.rating = r3
                boolean r3 = r0.isCouponListEmpty()
                if (r3 != 0) goto L62
                com.kwad.sdk.core.response.model.CouponInfo r3 = r0.getFirstCouponList()
                if (r3 == 0) goto L62
                java.lang.String r0 = com.kwad.sdk.core.response.model.CouponInfo.jinniuFormatCoupon(r3)
                r1.zn = r0
                java.lang.String r3 = r3.getFormattedJinniuPrefix()
                r1.P(r3)
            L62:
                return r1
        }

        private void P(java.lang.String r1) {
                r0 = this;
                r0.rO = r1
                return
        }

        public final java.lang.String ef() {
                r1 = this;
                java.lang.String r0 = r1.ln
                return r0
        }

        public final java.lang.String getRating() {
                r1 = this;
                java.lang.String r0 = r1.rating
                return r0
        }

        public final java.lang.String getTitle() {
                r1 = this;
                java.lang.String r0 = r1.title
                return r0
        }

        public final java.lang.String gu() {
                r1 = this;
                java.lang.String r0 = r1.ql
                return r0
        }

        public final java.lang.String gv() {
                r1 = this;
                java.lang.String r0 = r1.qm
                return r0
        }

        public final java.lang.String hg() {
                r1 = this;
                java.lang.String r0 = r1.rO
                return r0
        }

        public final java.lang.String ka() {
                r1 = this;
                java.lang.String r0 = r1.zm
                return r0
        }

        public final java.lang.String kb() {
                r1 = this;
                java.lang.String r0 = r1.zn
                return r0
        }

        public final java.lang.String kc() {
                r1 = this;
                java.lang.String r0 = r1.zo
                return r0
        }

        public final java.lang.String kd() {
                r1 = this;
                java.lang.String r0 = r1.zp
                return r0
        }
    }

    public i(com.kwad.components.ad.reward.j r1, android.view.ViewGroup r2, com.kwad.components.core.widget.KsLogoView r3) {
            r0 = this;
            r0.<init>()
            r0.qx = r1
            r0.mLogoView = r3
            r0.yV = r2
            r0.initView()
            return
    }

    private static android.animation.Animator a(android.view.View r7, float r8) {
            if (r7 == 0) goto L52
            int r0 = r7.getWidth()
            if (r0 > 0) goto L9
            goto L52
        L9:
            android.content.res.Resources r0 = r7.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_jinniu_light_sweep_width
            float r0 = r0.getDimension(r1)
            float r0 = r0 + r8
            r8 = 1
            float[] r1 = new float[r8]
            r2 = 0
            r1[r2] = r0
            java.lang.String r0 = "translationX"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r7, r0, r1)
            r3 = 1000(0x3e8, double:4.94E-321)
            android.animation.ObjectAnimator r0 = r0.setDuration(r3)
            r1 = 1054280253(0x3ed70a3d, float:0.42)
            r5 = 0
            r6 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r5, r6, r6)
            r0.setInterpolator(r1)
            r1 = 2
            float[] r5 = new float[r1]
            r5 = {x0054: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r6 = "alpha"
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofFloat(r7, r6, r5)
            android.animation.ObjectAnimator r7 = r7.setDuration(r3)
            android.animation.AnimatorSet r3 = new android.animation.AnimatorSet
            r3.<init>()
            android.animation.Animator[] r1 = new android.animation.Animator[r1]
            r1[r2] = r0
            r1[r8] = r7
            r3.playSequentially(r1)
            return r3
        L52:
            r7 = 0
            return r7
    }

    private android.animation.Animator a(android.view.View r16, android.view.View r17, android.view.View r18) {
            r15 = this;
            r0 = r17
            int r3 = r16.getHeight()
            if (r3 <= 0) goto Lb1
            android.view.ViewGroup$LayoutParams r1 = r16.getLayoutParams()
            if (r1 != 0) goto L10
            goto Lb1
        L10:
            r1 = 1057132380(0x3f028f5c, float:0.51)
            r2 = 1059816735(0x3f2b851f, float:0.67)
            r8 = 1065353216(0x3f800000, float:1.0)
            r9 = 0
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r9, r2, r8)
            android.content.res.Resources r2 = r16.getResources()
            int r4 = com.kwad.sdk.R.dimen.ksad_reward_jinniu_card_height_full
            int r2 = r2.getDimensionPixelSize(r4)
            r10 = 2
            int[] r4 = new int[r10]
            r11 = 0
            r4[r11] = r3
            r12 = 1
            r4[r12] = r2
            android.animation.ValueAnimator r2 = android.animation.ValueAnimator.ofInt(r4)
            r4 = 500(0x1f4, double:2.47E-321)
            android.animation.ValueAnimator r13 = r2.setDuration(r4)
            r13.setInterpolator(r1)
            r16.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            if (r1 == 0) goto L67
            if (r18 == 0) goto L67
            android.view.ViewGroup$LayoutParams r1 = r18.getLayoutParams()
            boolean r1 = r1 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r1 == 0) goto L67
            android.view.ViewGroup$LayoutParams r1 = r18.getLayoutParams()
            r4 = r1
            android.view.ViewGroup$MarginLayoutParams r4 = (android.view.ViewGroup.MarginLayoutParams) r4
            int r5 = r4.bottomMargin
            com.kwad.components.ad.reward.m.i$3 r14 = new com.kwad.components.ad.reward.m.i$3
            r1 = r14
            r2 = r15
            r6 = r18
            r7 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r13.addUpdateListener(r14)
        L67:
            android.animation.AnimatorSet r1 = new android.animation.AnimatorSet
            r1.<init>()
            float[] r2 = new float[r10]
            r2 = {x00b4: FILL_ARRAY_DATA , data: [0, 0} // fill-array
            java.lang.String r3 = "alpha"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r0, r3, r2)
            r4 = 200(0xc8, double:9.9E-322)
            android.animation.ObjectAnimator r2 = r2.setDuration(r4)
            r4 = 1063004406(0x3f5c28f6, float:0.86)
            r5 = 1062501089(0x3f547ae1, float:0.83)
            android.view.animation.Interpolator r4 = android.support.v4.view.animation.PathInterpolatorCompat.create(r4, r9, r5, r8)
            float[] r5 = new float[r10]
            r5 = {x00bc: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r3, r5)
            r5 = 300(0x12c, double:1.48E-321)
            android.animation.ObjectAnimator r0 = r0.setDuration(r5)
            r0.setInterpolator(r4)
            android.animation.Animator[] r3 = new android.animation.Animator[r10]
            r3[r11] = r2
            r3[r12] = r0
            r1.playSequentially(r3)
            android.animation.AnimatorSet r0 = new android.animation.AnimatorSet
            r0.<init>()
            android.animation.Animator[] r2 = new android.animation.Animator[r10]
            r2[r11] = r13
            r2[r12] = r1
            r0.playTogether(r2)
            return r0
        Lb1:
            r0 = 0
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.m.i r0, android.view.View r1, float r2) {
            android.animation.Animator r0 = a(r1, r2)
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.m.i r0, android.view.View r1, android.view.View r2, android.view.View r3) {
            android.animation.Animator r0 = r0.a(r1, r2, r3)
            return r0
    }

    static android.view.ViewGroup a(com.kwad.components.ad.reward.m.i r0) {
            android.view.ViewGroup r0 = r0.sw
            return r0
    }

    private void a(com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.components.ad.reward.m.i.a r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.kwad.components.core.widget.KSCornerImageView r0 = r3.lB
            java.lang.String r1 = r5.gu()
            r2 = 4
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r4, r2)
            android.widget.TextView r4 = r3.gQ
            if (r4 == 0) goto L18
            java.lang.String r0 = r5.getTitle()
            r4.setText(r0)
        L18:
            android.widget.TextView r4 = r3.lC
            if (r4 == 0) goto L23
            java.lang.String r0 = r5.gv()
            r4.setText(r0)
        L23:
            com.kwad.components.ad.widget.KsPriceView r4 = r3.yW
            if (r4 == 0) goto L5c
            android.content.res.Resources r4 = r4.getResources()
            int r0 = com.kwad.sdk.R.dimen.ksad_reward_jinniu_end_origin_text_size
            int r4 = r4.getDimensionPixelSize(r0)
            com.kwad.components.ad.widget.KsPriceView r0 = r3.yW
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.color.ksad_jinniu_end_origin_color
            int r0 = r0.getColor(r1)
            com.kwad.components.ad.widget.KsPriceView r1 = r3.yW
            com.kwad.components.ad.widget.KsPriceView$a r1 = r1.getConfig()
            com.kwad.components.ad.widget.KsPriceView$a r1 = r1.ag(r4)
            com.kwad.components.ad.widget.KsPriceView$a r4 = r1.ai(r4)
            r4.ah(r0)
            com.kwad.components.ad.widget.KsPriceView r4 = r3.yW
            java.lang.String r0 = r5.ka()
            java.lang.String r1 = r5.ef()
            r2 = 1
            r4.d(r0, r1, r2)
        L5c:
            android.widget.TextView r4 = r3.yX
            r0 = 8
            if (r4 == 0) goto L8c
            java.lang.String r4 = r5.kd()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L76
            android.widget.TextView r4 = r3.yX
            java.lang.String r1 = r5.kd()
        L72:
            r4.setText(r1)
            goto L8c
        L76:
            java.lang.String r4 = r5.getRating()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L87
            android.widget.TextView r4 = r3.yX
            java.lang.String r1 = r5.getRating()
            goto L72
        L87:
            android.widget.TextView r4 = r3.yX
            r4.setVisibility(r0)
        L8c:
            android.widget.TextView r4 = r3.yZ
            if (r4 == 0) goto La3
            java.lang.String r4 = r5.kb()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto La3
            android.widget.TextView r4 = r3.yZ
            java.lang.String r1 = r5.kb()
            r4.setText(r1)
        La3:
            com.kwad.components.core.widget.KsStyledTextButton r4 = r3.yY
            if (r4 == 0) goto Lba
            java.lang.String r4 = r5.kc()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lba
            com.kwad.components.core.widget.KsStyledTextButton r4 = r3.yY
            java.lang.String r1 = r5.kc()
            r4.setText(r1)
        Lba:
            java.lang.String r4 = r5.kb()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto Lc5
            goto Lc6
        Lc5:
            r0 = 0
        Lc6:
            android.view.View r4 = r3.zb
            if (r4 == 0) goto Lcd
            r4.setVisibility(r0)
        Lcd:
            android.widget.TextView r4 = r3.za
            if (r4 == 0) goto Le4
            java.lang.String r4 = r5.hg()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Le4
            android.widget.TextView r4 = r3.za
            java.lang.String r5 = r5.hg()
            r4.setText(r5)
        Le4:
            return
    }

    static com.kwad.components.core.widget.KsStyledTextButton b(com.kwad.components.ad.reward.m.i r0) {
            com.kwad.components.core.widget.KsStyledTextButton r0 = r0.yY
            return r0
    }

    static com.kwad.components.core.widget.KsLogoView c(com.kwad.components.ad.reward.m.i r0) {
            com.kwad.components.core.widget.KsLogoView r0 = r0.mLogoView
            return r0
    }

    static android.widget.ImageView d(com.kwad.components.ad.reward.m.i r0) {
            android.widget.ImageView r0 = r0.zc
            return r0
    }

    private void initView() {
            r3 = this;
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_root
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.sw = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_icon
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KSCornerImageView r0 = (com.kwad.components.core.widget.KSCornerImageView) r0
            r3.lB = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.gQ = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_desc
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lC = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_price
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.widget.KsPriceView r0 = (com.kwad.components.ad.widget.KsPriceView) r0
            r3.yW = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_right_label
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.yX = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_btn_buy
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KsStyledTextButton r0 = (com.kwad.components.core.widget.KsStyledTextButton) r0
            r3.yY = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_light_sweep
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.zc = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_coupon_layout
            android.view.View r0 = r0.findViewById(r1)
            r3.zb = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_coupon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.yZ = r0
            android.view.ViewGroup r0 = r3.yV
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_coupon_prefix
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.za = r0
            android.view.ViewGroup r0 = r3.sw
            r0.setOnClickListener(r3)
            com.kwad.components.core.widget.KsStyledTextButton r0 = r3.yY
            if (r0 == 0) goto L8e
            r0.setOnClickListener(r3)
        L8e:
            android.view.ViewGroup r0 = r3.sw
            android.content.Context r0 = r0.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            if (r1 != 0) goto Lb7
            android.view.ViewGroup r1 = r3.sw
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            boolean r2 = r1 instanceof android.widget.FrameLayout.LayoutParams
            if (r2 == 0) goto Lb7
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            android.content.res.Resources r0 = r0.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_follow_card_width_horizontal
            int r0 = r0.getDimensionPixelSize(r2)
            r1.width = r0
            android.view.ViewGroup r0 = r3.sw
            r0.setLayoutParams(r1)
        Lb7:
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.m.r r4) {
            r3 = this;
            super.a(r4)
            if (r4 != 0) goto L6
            return
        L6:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.getAdTemplate()
            com.kwad.components.ad.reward.m.i$a r0 = com.kwad.components.ad.reward.m.i.a.B(r0)
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.getAdTemplate()
            r3.a(r4, r0)
            android.view.ViewGroup r4 = r3.sw
            if (r4 == 0) goto L2f
            com.kwad.components.ad.reward.m.i$1 r0 = new com.kwad.components.ad.reward.m.i$1
            r0.<init>(r3)
            r1 = 3000(0xbb8, double:1.482E-320)
            r4.postDelayed(r0, r1)
            android.view.ViewGroup r4 = r3.sw
            com.kwad.components.ad.reward.m.i$2 r0 = new com.kwad.components.ad.reward.m.i$2
            r0.<init>(r3)
            r1 = 5000(0x1388, double:2.4703E-320)
            r4.postDelayed(r0, r1)
        L2f:
            return
    }

    @Override
    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.sw
            return r0
    }

    @Override
    public final void onClick(android.view.View r5) {
            r4 = this;
            android.view.ViewGroup r0 = r4.sw
            boolean r0 = r5.equals(r0)
            r1 = 1
            if (r0 == 0) goto L16
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 118(0x76, float:1.65E-43)
            r3 = 2
            r0.a(r1, r5, r2, r3)
            return
        L16:
            com.kwad.components.core.widget.KsStyledTextButton r0 = r4.yY
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L27
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r0.a(r1, r5, r1, r1)
        L27:
            return
    }
}

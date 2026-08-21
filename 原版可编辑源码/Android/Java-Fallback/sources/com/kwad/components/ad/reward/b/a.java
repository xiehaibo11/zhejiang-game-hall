package com.kwad.components.ad.reward.b;

public final class a extends com.kwad.components.ad.reward.m.d implements android.view.View.OnClickListener {
    private android.widget.TextView gQ;
    private final android.view.ViewGroup gg;
    private android.widget.TextView lC;
    private int[] qS;
    private android.view.View qT;
    private android.widget.ImageView qU;
    private android.widget.TextView qV;
    private android.widget.Button qW;
    private com.kwad.components.ad.reward.b.a.b qX;

    final class 1 implements java.lang.Runnable {
        final com.kwad.components.ad.reward.m.r qY;
        final long qZ;
        final com.kwad.components.ad.reward.b.a ra;


        1(com.kwad.components.ad.reward.b.a r1, com.kwad.components.ad.reward.m.r r2, long r3) {
                r0 = this;
                r0.ra = r1
                r0.qY = r2
                r0.qZ = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.kwad.components.ad.reward.b.a r0 = r2.ra
                android.view.View r1 = com.kwad.components.ad.reward.b.a.a(r0)
                android.animation.Animator r0 = com.kwad.components.ad.reward.b.a.a(r0, r1)
                com.kwad.components.ad.reward.b.a$1$1 r1 = new com.kwad.components.ad.reward.b.a$1$1
                r1.<init>(r2, r0)
                r0.addListener(r1)
                r0.start()
                return
        }
    }


    static class a {
        private java.lang.CharSequence rf;
        private java.lang.CharSequence rg;
        private java.lang.CharSequence rh;
        private java.lang.CharSequence title;

        private a(com.kwad.sdk.core.response.model.CouponInfo r4) {
                r3 = this;
                r3.<init>()
                java.lang.String r0 = r4.displayTitle
                r3.title = r0
                java.lang.String r0 = r4.displayValue
                r3.rf = r0
                java.lang.String r0 = r4.displayBase
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L22
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                java.lang.String r2 = r4.displayBase
                r0[r1] = r2
                java.lang.String r1 = "满%s可用"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                goto L24
            L22:
                java.lang.String r0 = ""
            L24:
                r3.rg = r0
                java.lang.String r4 = r4.displayActionWords
                r3.rh = r4
                return
        }

        private static com.kwad.components.ad.reward.b.a.a a(com.kwad.sdk.core.response.model.CouponInfo r1) {
                if (r1 != 0) goto L4
                r1 = 0
                return r1
            L4:
                com.kwad.components.ad.reward.b.a$a r0 = new com.kwad.components.ad.reward.b.a$a
                r0.<init>(r1)
                return r0
        }

        public static com.kwad.components.ad.reward.b.a.a u(com.kwad.sdk.core.response.model.AdTemplate r1) {
                com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
                com.kwad.sdk.core.response.model.AdProductInfo r1 = com.kwad.sdk.core.response.b.a.cy(r1)
                if (r1 == 0) goto L24
                java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r0 = r1.couponList
                if (r0 == 0) goto L24
                java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r0 = r1.couponList
                int r0 = r0.size()
                if (r0 <= 0) goto L24
                java.util.List<com.kwad.sdk.core.response.model.CouponInfo> r1 = r1.couponList
                r0 = 0
                java.lang.Object r1 = r1.get(r0)
                com.kwad.sdk.core.response.model.CouponInfo r1 = (com.kwad.sdk.core.response.model.CouponInfo) r1
                com.kwad.components.ad.reward.b.a$a r1 = a(r1)
                return r1
            L24:
                r1 = 0
                return r1
        }

        public final java.lang.CharSequence N(android.content.Context r5) {
                r4 = this;
                android.content.res.Resources r5 = r5.getResources()
                int r0 = com.kwad.sdk.R.dimen.ksad_coupon_dialog_value_prefix_text_size
                int r5 = r5.getDimensionPixelSize(r0)
                android.text.style.AbsoluteSizeSpan r0 = new android.text.style.AbsoluteSizeSpan
                r0.<init>(r5)
                android.text.SpannableString r5 = new android.text.SpannableString
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "¥"
                r1.<init>(r2)
                java.lang.CharSequence r2 = r4.rf
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r5.<init>(r1)
                r1 = 0
                r2 = 1
                r3 = 17
                r5.setSpan(r0, r1, r2, r3)
                return r5
        }

        public final java.lang.CharSequence gS() {
                r1 = this;
                java.lang.CharSequence r0 = r1.rg
                return r0
        }

        public final java.lang.CharSequence gT() {
                r1 = this;
                java.lang.CharSequence r0 = r1.rh
                return r0
        }

        public final java.lang.CharSequence getTitle() {
                r1 = this;
                java.lang.CharSequence r0 = r1.title
                return r0
        }
    }

    public interface b {
        void gU();

        void gV();
    }

    public a(android.content.Context r2, android.view.ViewGroup r3, int[] r4) {
            r1 = this;
            r1.<init>()
            r1.qS = r4
            int r4 = com.kwad.sdk.R.layout.ksad_reward_coupon_dialog
            r0 = 0
            android.view.View r2 = com.kwad.sdk.m.l.a(r2, r4, r3, r0)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.gg = r2
            r1.d(r2)
            return
    }

    private static android.animation.Animator a(android.widget.ImageView r3, long r4) {
            float r0 = r3.getAlpha()
            r1 = 2
            float[] r1 = new float[r1]
            r2 = 0
            r1[r2] = r0
            r0 = 1
            r2 = 0
            r1[r0] = r2
            java.lang.String r0 = "alpha"
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r3, r0, r1)
            r3.setDuration(r4)
            return r3
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.b.a r0, android.view.View r1) {
            android.animation.Animator r0 = m(r1)
            return r0
    }

    static android.animation.Animator a(com.kwad.components.ad.reward.b.a r0, android.widget.ImageView r1, long r2) {
            android.animation.Animator r0 = a(r1, r2)
            return r0
    }

    static android.view.View a(com.kwad.components.ad.reward.b.a r0) {
            android.view.View r0 = r0.qT
            return r0
    }

    private void a(com.kwad.components.ad.reward.b.a.a r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            android.widget.TextView r0 = r2.gQ
            if (r0 == 0) goto Le
            java.lang.CharSequence r1 = r3.getTitle()
            r0.setText(r1)
        Le:
            android.widget.TextView r0 = r2.qV
            if (r0 == 0) goto L1f
            android.view.ViewGroup r1 = r2.gg
            android.content.Context r1 = r1.getContext()
            java.lang.CharSequence r1 = r3.N(r1)
            r0.setText(r1)
        L1f:
            android.widget.TextView r0 = r2.lC
            if (r0 == 0) goto L2a
            java.lang.CharSequence r1 = r3.gS()
            r0.setText(r1)
        L2a:
            android.widget.Button r0 = r2.qW
            if (r0 == 0) goto L35
            java.lang.CharSequence r3 = r3.gT()
            r0.setText(r3)
        L35:
            return
    }

    static android.widget.ImageView b(com.kwad.components.ad.reward.b.a r0) {
            android.widget.ImageView r0 = r0.qU
            return r0
    }

    static void c(com.kwad.components.ad.reward.b.a r0) {
            r0.gR()
            return
    }

    static com.kwad.components.ad.reward.b.a.b d(com.kwad.components.ad.reward.b.a r0) {
            com.kwad.components.ad.reward.b.a$b r0 = r0.qX
            return r0
    }

    private void d(android.view.ViewGroup r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_coupon_dialog_card
            android.view.View r0 = r2.findViewById(r0)
            r1.qT = r0
            int r0 = com.kwad.sdk.R.id.ksad_coupon_dialog_bg
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.qU = r0
            int r0 = com.kwad.sdk.R.id.ksad_coupon_dialog_title
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.gQ = r0
            int r0 = com.kwad.sdk.R.id.ksad_coupon_dialog_content
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.qV = r0
            int r0 = com.kwad.sdk.R.id.ksad_coupon_dialog_desc
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.lC = r0
            int r0 = com.kwad.sdk.R.id.ksad_coupon_dialog_btn_action
            android.view.View r2 = r2.findViewById(r0)
            android.widget.Button r2 = (android.widget.Button) r2
            r1.qW = r2
            r2.setOnClickListener(r1)
            return
    }

    private void gR() {
            r2 = this;
            android.view.View r0 = r2.qT
            android.animation.Animator r0 = r2.n(r0)
            com.kwad.components.ad.reward.b.a$2 r1 = new com.kwad.components.ad.reward.b.a$2
            r1.<init>(r2, r0)
            r0.addListener(r1)
            r0.start()
            return
    }

    private static android.animation.Animator m(android.view.View r5) {
            r0 = 2
            float[] r1 = new float[r0]
            r1 = {x002e: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            java.lang.String r2 = "scaleX"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r5, r2, r1)
            float[] r2 = new float[r0]
            r2 = {x0036: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            java.lang.String r3 = "scaleY"
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofFloat(r5, r3, r2)
            android.animation.AnimatorSet r2 = new android.animation.AnimatorSet
            r2.<init>()
            r3 = 300(0x12c, double:1.48E-321)
            r2.setDuration(r3)
            android.animation.Animator[] r0 = new android.animation.Animator[r0]
            r3 = 0
            r0[r3] = r1
            r1 = 1
            r0[r1] = r5
            r2.playTogether(r0)
            return r2
    }

    private android.animation.Animator n(android.view.View r13) {
            r12 = this;
            r0 = 1065353216(0x3f800000, float:1.0)
            r1 = 1063507722(0x3f63d70a, float:0.89)
            r2 = 1017370378(0x3ca3d70a, float:0.02)
            r3 = 1060655596(0x3f3851ec, float:0.72)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r2, r3, r0)
            r2 = 2
            float[] r3 = new float[r2]
            r3 = {x00c8: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            java.lang.String r4 = "scaleX"
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r13, r4, r3)
            float[] r4 = new float[r2]
            r4 = {x00d0: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            java.lang.String r5 = "scaleY"
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofFloat(r13, r5, r4)
            r3.setInterpolator(r1)
            r4.setInterpolator(r1)
            int[] r1 = r12.qS
            r5 = 0
            r6 = 1
            r7 = 0
            if (r1 == 0) goto L72
            int r1 = r1.length
            if (r1 < r2) goto L72
            int[] r1 = com.kwad.sdk.d.a.a.D(r13)
            if (r1 == 0) goto L72
            r5 = 1051260355(0x3ea8f5c3, float:0.33)
            r8 = 0
            r9 = 1062501089(0x3f547ae1, float:0.83)
            android.view.animation.Interpolator r0 = android.support.v4.view.animation.PathInterpolatorCompat.create(r5, r8, r9, r0)
            float[] r5 = new float[r6]
            int[] r8 = r12.qS
            r8 = r8[r7]
            r9 = r1[r7]
            int r8 = r8 - r9
            float r8 = (float) r8
            r5[r7] = r8
            java.lang.String r8 = "translationX"
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofFloat(r13, r8, r5)
            float[] r8 = new float[r6]
            int[] r9 = r12.qS
            r9 = r9[r6]
            r1 = r1[r6]
            int r9 = r9 - r1
            float r1 = (float) r9
            r8[r7] = r1
            java.lang.String r1 = "translationY"
            android.animation.ObjectAnimator r1 = android.animation.ObjectAnimator.ofFloat(r13, r1, r8)
            r5.setInterpolator(r0)
            r1.setInterpolator(r0)
            goto L73
        L72:
            r1 = r5
        L73:
            float[] r0 = new float[r2]
            r0 = {x00d8: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r8 = "alpha"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r13, r8, r0)
            r9 = 200(0xc8, double:9.9E-322)
            r0.setDuration(r9)
            float[] r11 = new float[r2]
            r11 = {x00e0: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            android.animation.ObjectAnimator r13 = android.animation.ObjectAnimator.ofFloat(r13, r8, r11)
            r13.setDuration(r9)
            android.animation.AnimatorSet r8 = new android.animation.AnimatorSet
            r8.<init>()
            android.animation.Animator[] r9 = new android.animation.Animator[r2]
            r9[r7] = r0
            r9[r6] = r13
            r8.playSequentially(r9)
            android.animation.AnimatorSet r13 = new android.animation.AnimatorSet
            r13.<init>()
            r9 = 500(0x1f4, double:2.47E-321)
            r13.setDuration(r9)
            r0 = 3
            if (r5 == 0) goto Lbc
            r9 = 5
            android.animation.Animator[] r9 = new android.animation.Animator[r9]
            r9[r7] = r3
            r9[r6] = r4
            r9[r2] = r8
            r9[r0] = r5
            r0 = 4
            r9[r0] = r1
            r13.playTogether(r9)
            goto Lc7
        Lbc:
            android.animation.Animator[] r0 = new android.animation.Animator[r0]
            r0[r7] = r3
            r0[r6] = r4
            r0[r2] = r8
            r13.playTogether(r0)
        Lc7:
            return r13
    }

    public final void a(com.kwad.components.ad.reward.b.a.b r1) {
            r0 = this;
            r0.qX = r1
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.m.r r5) {
            r4 = this;
            super.a(r5)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.getAdTemplate()
            com.kwad.components.ad.reward.b.a$a r0 = com.kwad.components.ad.reward.b.a.a.u(r0)
            r4.a(r0)
            long r0 = com.kwad.components.ad.reward.a.b.gL()
            android.view.ViewGroup r2 = r4.gg
            com.kwad.components.ad.reward.b.a$1 r3 = new com.kwad.components.ad.reward.b.a$1
            r3.<init>(r4, r5, r0)
            r2.post(r3)
            return
    }

    @Override
    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.gg
            return r0
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.widget.Button r0 = r1.qW
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto Lf
            com.kwad.components.ad.reward.b.a$b r2 = r1.qX
            if (r2 == 0) goto Lf
            r2.gU()
        Lf:
            return
    }
}

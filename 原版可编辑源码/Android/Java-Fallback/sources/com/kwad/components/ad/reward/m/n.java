package com.kwad.components.ad.reward.m;

public final class n extends com.kwad.components.ad.reward.m.d implements android.view.View.OnClickListener {
    private android.view.ViewGroup gg;
    private android.widget.TextView yP;
    private android.view.ViewGroup zI;
    private com.kwad.components.core.widget.KSCornerImageView zO;
    private android.widget.LinearLayout zP;
    private com.kwad.components.ad.widget.KsPriceView zQ;
    private android.widget.TextView zR;
    private android.view.View zS;
    private com.kwad.components.core.widget.KSCornerImageView zT;
    private com.kwad.components.ad.reward.m.b zU;
    private com.kwad.components.ad.reward.m.n.a zV;


    public interface a {
        void hB();
    }

    public n(android.view.ViewGroup r1, com.kwad.components.ad.reward.m.b r2) {
            r0 = this;
            r0.<init>()
            r0.gg = r1
            r0.zU = r2
            r0.initView()
            return
    }

    private static android.view.View a(android.content.Context r2, com.kwad.sdk.core.response.model.CouponInfo r3, android.view.ViewGroup r4) {
            int r0 = com.kwad.sdk.R.layout.ksad_reward_order_card_coupon
            r1 = 0
            android.view.View r2 = com.kwad.sdk.m.l.a(r2, r0, r4, r1)
            com.kwad.components.ad.reward.widget.KSCouponLabelTextView r2 = (com.kwad.components.ad.reward.widget.KSCouponLabelTextView) r2
            java.lang.String r3 = r3.getDisplayName()
            r2.setText(r3)
            return r2
    }

    static android.view.View a(com.kwad.components.ad.reward.m.n r0, android.content.Context r1, com.kwad.sdk.core.response.model.CouponInfo r2, android.view.ViewGroup r3) {
            android.view.View r0 = a(r1, r2, r3)
            return r0
    }

    static android.widget.LinearLayout a(com.kwad.components.ad.reward.m.n r0) {
            android.widget.LinearLayout r0 = r0.zP
            return r0
    }

    private void a(com.kwad.sdk.core.response.model.AdProductInfo r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            r2 = this;
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.zO
            java.lang.String r1 = r3.getIcon()
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1, r4)
            android.widget.TextView r0 = r2.yP
            java.lang.String r1 = r3.getName()
            r0.setText(r1)
            boolean r0 = r3.isCouponListEmpty()
            if (r0 == 0) goto L25
            android.widget.LinearLayout r0 = r2.zP
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.reward.m.n$a r0 = r2.zV
            r0.hB()
            goto L35
        L25:
            android.widget.LinearLayout r0 = r2.zP
            r1 = 0
            r0.setVisibility(r1)
            android.widget.LinearLayout r0 = r2.zP
            com.kwad.components.ad.reward.m.n$1 r1 = new com.kwad.components.ad.reward.m.n$1
            r1.<init>(r2, r3)
            r0.post(r1)
        L35:
            com.kwad.components.ad.widget.KsPriceView r0 = r2.zQ
            java.lang.String r1 = r3.getPrice()
            java.lang.String r3 = r3.getOriginPrice()
            r0.f(r1, r3)
            java.lang.String r3 = com.kwad.components.ad.d.b.X()
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r3)
            if (r0 != 0) goto L51
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.zT
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r3, r4)
        L51:
            return
    }

    static com.kwad.components.ad.reward.m.n.a b(com.kwad.components.ad.reward.m.n r0) {
            com.kwad.components.ad.reward.m.n$a r0 = r0.zV
            return r0
    }

    private void initView() {
            r3 = this;
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_root
            android.view.View r0 = r0.findViewById(r1)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.zI = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_icon
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KSCornerImageView r0 = (com.kwad.components.core.widget.KSCornerImageView) r0
            r3.zO = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.yP = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_coupon_list
            android.view.View r0 = r0.findViewById(r1)
            android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
            r3.zP = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_price
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.widget.KsPriceView r0 = (com.kwad.components.ad.widget.KsPriceView) r0
            r3.zQ = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_btn_buy
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.zR = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_text_area
            android.view.View r0 = r0.findViewById(r1)
            r3.zS = r0
            android.view.ViewGroup r0 = r3.gg
            int r1 = com.kwad.sdk.R.id.ksad_reward_order_kwai_logo
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KSCornerImageView r0 = (com.kwad.components.core.widget.KSCornerImageView) r0
            r3.zT = r0
            android.widget.TextView r0 = r3.zR
            java.lang.String r1 = com.kwad.components.ad.d.b.W()
            r0.setText(r1)
            android.widget.TextView r0 = r3.zR
            r0.setOnClickListener(r3)
            com.kwad.components.core.widget.KSCornerImageView r0 = r3.zO
            r0.setOnClickListener(r3)
            android.view.View r0 = r3.zS
            r0.setOnClickListener(r3)
            android.view.ViewGroup r0 = r3.gg
            android.content.Context r0 = r0.getContext()
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            if (r1 != 0) goto L9f
            android.view.ViewGroup r1 = r3.gg
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            boolean r2 = r1 instanceof android.widget.FrameLayout.LayoutParams
            if (r2 == 0) goto L9f
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            android.content.res.Resources r0 = r0.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_reward_follow_card_width_horizontal
            int r0 = r0.getDimensionPixelSize(r2)
            r1.width = r0
            android.view.ViewGroup r0 = r3.gg
            r0.setLayoutParams(r1)
        L9f:
            return
    }

    public final void a(com.kwad.components.ad.reward.m.n.a r1) {
            r0 = this;
            r0.zV = r1
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.m.r r2) {
            r1 = this;
            super.a(r2)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdProductInfo r0 = com.kwad.sdk.core.response.b.a.cy(r0)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
            r1.a(r0, r2)
            return
    }

    @Override
    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.zI
            return r0
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            com.kwad.components.ad.reward.m.b r0 = r1.zU
            if (r0 != 0) goto L5
            return
        L5:
            android.widget.TextView r0 = r1.zR
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L13
            com.kwad.components.ad.reward.m.b r2 = r1.zU
            r2.gU()
            return
        L13:
            com.kwad.components.core.widget.KSCornerImageView r0 = r1.zO
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L21
            com.kwad.components.ad.reward.m.b r2 = r1.zU
            r2.ip()
            return
        L21:
            android.view.View r0 = r1.zS
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L2e
            com.kwad.components.ad.reward.m.b r2 = r1.zU
            r2.iq()
        L2e:
            return
    }
}

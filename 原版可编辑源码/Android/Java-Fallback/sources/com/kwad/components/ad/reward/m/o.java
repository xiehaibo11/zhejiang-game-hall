package com.kwad.components.ad.reward.m;

public final class o extends com.kwad.components.ad.reward.m.s implements android.view.View.OnClickListener {
    private com.kwad.components.core.widget.KsLogoView Aa;
    private com.kwad.components.ad.reward.widget.KsAuthorIconView Ab;
    private android.widget.RelativeLayout Ac;
    private boolean Ad;
    private java.lang.String Ae;
    private java.lang.Runnable Af;
    private android.widget.TextView lC;
    private com.kwad.components.ad.reward.j qx;
    private android.widget.TextView zA;
    private com.kwad.components.core.widget.KsLogoView zZ;
    private android.widget.TextView zz;



    public o(com.kwad.components.ad.reward.j r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.Ad = r0
            com.kwad.components.ad.reward.m.o$2 r0 = new com.kwad.components.ad.reward.m.o$2
            r0.<init>(r1)
            r1.Af = r0
            r1.qx = r2
            return
    }

    static java.lang.Runnable a(com.kwad.components.ad.reward.m.o r0) {
            java.lang.Runnable r0 = r0.Af
            return r0
    }

    static android.widget.TextView b(com.kwad.components.ad.reward.m.o r0) {
            android.widget.TextView r0 = r0.lC
            return r0
    }

    private void b(com.kwad.sdk.core.response.model.AdTemplate r5) {
            r4 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            android.widget.TextView r1 = r4.zz
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bO(r0)
            r1.setText(r2)
            com.kwad.components.core.widget.e r1 = new com.kwad.components.core.widget.e
            r1.<init>()
            com.kwad.components.ad.reward.widget.KsAuthorIconView r2 = r4.Ab
            r3 = 0
            r2.setVisibility(r3)
            com.kwad.components.ad.reward.widget.KsAuthorIconView r2 = r4.Ab
            r2.b(r5)
            com.kwad.components.ad.reward.widget.KsAuthorIconView r2 = r4.Ab
            r2.a(r1)
            android.widget.TextView r1 = r4.zA
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r0)
            r1.setText(r2)
            int r1 = com.kwad.sdk.core.response.b.a.aX(r0)
            r2 = 8
            if (r1 != r2) goto L47
            com.kwad.components.core.widget.KsLogoView r1 = r4.Aa
            r1.setVisibility(r3)
            com.kwad.components.core.widget.KsLogoView r1 = r4.Aa
            r1.aa(r5)
            android.widget.TextView r5 = r4.lC
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r0)
            r5.setText(r0)
            return
        L47:
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r0)
            r4.Ae = r0
            com.kwad.components.core.widget.KsLogoView r0 = new com.kwad.components.core.widget.KsLogoView
            android.view.ViewGroup r1 = r4.sw
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1, r3)
            r4.zZ = r0
            com.kwad.components.ad.reward.m.o$1 r1 = new com.kwad.components.ad.reward.m.o$1
            r1.<init>(r4)
            r0.setLogoLoadFinishListener(r1)
            com.kwad.components.core.widget.KsLogoView r0 = r4.zZ
            r0.aa(r5)
            com.kwad.components.core.widget.KsLogoView r5 = r4.Aa
            r5.setVisibility(r2)
            return
    }

    static java.lang.String c(com.kwad.components.ad.reward.m.o r0) {
            java.lang.String r0 = r0.Ae
            return r0
    }

    static com.kwad.components.core.widget.KsLogoView d(com.kwad.components.ad.reward.m.o r0) {
            com.kwad.components.core.widget.KsLogoView r0 = r0.zZ
            return r0
    }

    private static void h(android.view.View r2, int r3) {
            if (r2 != 0) goto L3
            return
        L3:
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            boolean r0 = r3 instanceof android.widget.FrameLayout.LayoutParams
            if (r0 == 0) goto L20
            android.widget.FrameLayout$LayoutParams r3 = (android.widget.FrameLayout.LayoutParams) r3
            r0 = 85
            r3.gravity = r0
            android.content.Context r0 = r2.getContext()
            r1 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r3.bottomMargin = r0
            r2.requestLayout()
        L20:
            return
    }

    private void initView() {
            r2 = this;
            android.view.ViewGroup r0 = r2.sw
            if (r0 != 0) goto L5
            return
        L5:
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_author_icon
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.ad.reward.widget.KsAuthorIconView r0 = (com.kwad.components.ad.reward.widget.KsAuthorIconView) r0
            r2.Ab = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.kwad_actionbar_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.zz = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.kwad_actionbar_des_text
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.lC = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_live_actionbar_btn
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.zA = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_live_kwai_logo
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r2.Aa = r0
            boolean r0 = r2.Ad
            if (r0 != 0) goto L51
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_origin_live_relative
            android.view.View r0 = r0.findViewById(r1)
            android.widget.RelativeLayout r0 = (android.widget.RelativeLayout) r0
            r2.Ac = r0
        L51:
            android.view.ViewGroup r0 = r2.sw
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.zA
            r0.setOnClickListener(r2)
            com.kwad.components.ad.reward.widget.KsAuthorIconView r0 = r2.Ab
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.lC
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.zz
            r0.setOnClickListener(r2)
            return
    }

    public final void a(android.view.ViewGroup r2, int r3) {
            r1 = this;
            r0 = 8
            if (r3 != r0) goto Ld
            int r3 = com.kwad.sdk.R.id.ksad_reward_origin_live_shop_stub
            int r0 = com.kwad.sdk.R.id.ksad_reward_origin_live_root
            super.a(r2, r3, r0)
            r2 = 1
            goto L15
        Ld:
            int r3 = com.kwad.sdk.R.id.ksad_reward_origin_live_base_stub
            int r0 = com.kwad.sdk.R.id.ksad_reward_origin_live_root
            super.a(r2, r3, r0)
            r2 = 0
        L15:
            r1.Ad = r2
            r1.initView()
            return
    }

    @Override
    protected final void a(com.kwad.components.ad.reward.m.r r1) {
            r0 = this;
            super.a(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            r0.b(r1)
            return
    }

    @Override
    protected final void ad(boolean r4) {
            r3 = this;
            super.ad(r4)
            android.view.ViewGroup r4 = r3.sw
            android.content.Context r4 = r4.getContext()
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            if (r0 != 0) goto L6c
            boolean r0 = r3.Ad
            if (r0 != 0) goto L4e
            android.view.ViewGroup r0 = r3.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_origin_live_base1
            android.view.View r0 = r0.findViewById(r1)
            r1 = 0
            r0.setVisibility(r1)
            android.widget.RelativeLayout r0 = r3.Ac
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.content.res.Resources r1 = r4.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_width_horizontal
            int r1 = r1.getDimensionPixelSize(r2)
            r0.width = r1
            android.widget.RelativeLayout r1 = r3.Ac
            r1.setLayoutParams(r0)
            android.widget.TextView r0 = r3.zA
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.content.res.Resources r4 = r4.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_width_horizontal
            int r4 = r4.getDimensionPixelSize(r1)
            r0.width = r4
            android.widget.TextView r4 = r3.zA
            r4.setLayoutParams(r0)
            return
        L4e:
            android.view.ViewGroup r0 = r3.sw
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            android.content.res.Resources r4 = r4.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_live_subscribe_card_width_horizontal
            int r4 = r4.getDimensionPixelSize(r1)
            r0.width = r4
            android.view.ViewGroup r4 = r3.sw
            r4.setLayoutParams(r0)
            android.view.ViewGroup r4 = r3.sw
            r0 = 85
            h(r4, r0)
        L6c:
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
        L11:
            r0.a(r1, r5, r2, r1)
            return
        L15:
            com.kwad.components.ad.reward.widget.KsAuthorIconView r0 = r4.Ab
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L26
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 30
            goto L11
        L26:
            android.widget.TextView r0 = r4.lC
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L37
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 32
            goto L11
        L37:
            android.widget.TextView r0 = r4.zz
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L48
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 31
            goto L11
        L48:
            android.view.ViewGroup r0 = r4.sw
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L5c
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            r2 = 53
            r3 = 2
            r0.a(r1, r5, r2, r3)
        L5c:
            return
    }
}

package com.kwad.components.ad.reward.m;

public final class k extends com.kwad.components.ad.reward.m.d implements com.kwad.sdk.widget.c {
    private android.widget.TextView gQ;
    private com.kwad.components.core.widget.KSCornerImageView lB;
    private android.widget.TextView lC;
    private com.kwad.components.ad.reward.j qx;
    private com.kwad.components.ad.widget.KsPriceView yW;
    private android.widget.TextView yZ;
    private android.widget.TextView za;
    private android.view.View zb;
    private android.view.ViewStub zu;
    private android.view.ViewGroup zv;
    private com.kwad.components.core.widget.KsStyledTextButton zw;
    private com.kwad.components.core.widget.KsStyledTextButton zx;

    public k(com.kwad.components.ad.reward.j r1, android.view.ViewGroup r2) {
            r0 = this;
            r0.<init>()
            r0.zv = r2
            r0.qx = r1
            return
    }

    public k(com.kwad.components.ad.reward.j r1, android.view.ViewStub r2) {
            r0 = this;
            r0.<init>()
            r0.zu = r2
            r0.qx = r1
            return
    }

    private void a(com.kwad.sdk.core.response.model.AdTemplate r5, com.kwad.components.ad.reward.model.a r6) {
            r4 = this;
            com.kwad.components.core.widget.KSCornerImageView r0 = r4.lB
            java.lang.String r1 = r6.gu()
            r2 = 8
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r5, r2)
            android.widget.TextView r5 = r4.gQ
            java.lang.String r0 = r6.getTitle()
            r5.setText(r0)
            android.widget.TextView r5 = r4.lC
            java.lang.String r0 = r6.gv()
            r5.setText(r0)
            android.view.ViewGroup r5 = r4.zv
            android.content.res.Resources r5 = r5.getResources()
            int r0 = com.kwad.sdk.R.dimen.ksad_reward_jinniu_end_origin_text_size
            int r5 = r5.getDimensionPixelSize(r0)
            android.view.ViewGroup r0 = r4.zv
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.color.ksad_jinniu_end_origin_color
            int r0 = r0.getColor(r1)
            com.kwad.components.ad.widget.KsPriceView r1 = r4.yW
            com.kwad.components.ad.widget.KsPriceView$a r1 = r1.getConfig()
            com.kwad.components.ad.widget.KsPriceView$a r1 = r1.ag(r5)
            com.kwad.components.ad.widget.KsPriceView$a r5 = r1.ai(r5)
            r5.ah(r0)
            com.kwad.components.ad.widget.KsPriceView r5 = r4.yW
            java.lang.String r0 = r6.getPrice()
            java.lang.String r1 = r6.getOriginPrice()
            r3 = 1
            r5.d(r0, r1, r3)
            java.lang.String r5 = r6.hf()
            android.view.View r0 = r4.zb
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L61
            goto L62
        L61:
            r2 = 0
        L62:
            r0.setVisibility(r2)
            if (r5 == 0) goto L6c
            android.widget.TextView r0 = r4.yZ
            r0.setText(r5)
        L6c:
            android.widget.TextView r5 = r4.za
            java.lang.String r6 = r6.hg()
            r5.setText(r6)
            return
    }

    private void d(android.view.View r5, boolean r6) {
            r4 = this;
            com.kwad.components.core.widget.KsStyledTextButton r0 = r4.zx
            boolean r0 = r5.equals(r0)
            r1 = 1
            r2 = 153(0x99, float:2.14E-43)
            r3 = 2
            if (r0 == 0) goto L1a
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            if (r6 == 0) goto L16
            r2 = 38
        L16:
            r0.a(r3, r5, r2, r1)
            return
        L1a:
            com.kwad.components.core.widget.KsStyledTextButton r0 = r4.zw
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L30
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            if (r6 == 0) goto L2c
            r2 = 37
        L2c:
            r0.a(r3, r5, r2, r1)
            return
        L30:
            android.view.ViewGroup r0 = r4.zv
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L44
            com.kwad.components.ad.reward.j r0 = r4.qx
            android.content.Context r5 = r5.getContext()
            if (r6 == 0) goto L41
            r2 = r3
        L41:
            r0.a(r3, r5, r2, r3)
        L44:
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.d(r2, r0)
            return
    }

    @Override
    public final void a(com.kwad.components.ad.reward.m.r r2) {
            r1 = this;
            super.a(r2)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.getAdTemplate()
            com.kwad.components.ad.reward.model.a r0 = com.kwad.components.ad.reward.model.a.v(r0)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
            r1.a(r2, r0)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Le
            r0 = 0
            r1.d(r2, r0)
        Le:
            return
    }

    @Override
    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.zv
            return r0
    }

    public final void hide() {
            r2 = this;
            android.view.ViewGroup r0 = r2.zv
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }
}

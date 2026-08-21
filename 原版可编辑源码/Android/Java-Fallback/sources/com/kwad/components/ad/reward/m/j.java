package com.kwad.components.ad.reward.m;

public final class j extends com.kwad.components.ad.reward.m.d implements android.view.View.OnClickListener {
    private com.kwad.sdk.core.response.model.AdTemplate adTemplate;
    private android.widget.TextView gQ;
    private com.kwad.components.core.widget.KSCornerImageView lB;
    private android.widget.TextView lC;
    private android.widget.TextView lD;
    private com.kwad.components.ad.reward.k.a qa;
    private android.view.ViewGroup sw;
    private android.view.View vn;
    private android.app.DialogFragment zq;
    private android.widget.TextView zr;
    private android.view.View zs;
    private android.view.View zt;

    public j(android.app.DialogFragment r1, com.kwad.sdk.core.response.model.AdTemplate r2, android.view.LayoutInflater r3, android.view.ViewGroup r4, com.kwad.components.ad.reward.k.a r5) {
            r0 = this;
            r0.<init>()
            r0.zq = r1
            r0.adTemplate = r2
            r0.qa = r5
            int r1 = com.kwad.sdk.R.layout.ksad_reward_jinniu_dialog
            r2 = 0
            android.view.View r1 = r3.inflate(r1, r4, r2)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r0.sw = r1
            r0.initView()
            return
    }

    private void initView() {
            r2 = this;
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_icon
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.components.core.widget.KSCornerImageView r0 = (com.kwad.components.core.widget.KSCornerImageView) r0
            r2.lB = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.gQ = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_desc
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.lC = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_play_time_tips
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.zr = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_detail
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.lD = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_btn_close
            android.view.View r0 = r0.findViewById(r1)
            r2.vn = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_btn_deny
            android.view.View r0 = r0.findViewById(r1)
            r2.zs = r0
            android.view.ViewGroup r0 = r2.sw
            int r1 = com.kwad.sdk.R.id.ksad_reward_jinniu_dialog_btn_continue
            android.view.View r0 = r0.findViewById(r1)
            r2.zt = r0
            android.view.View r0 = r2.vn
            r0.setOnClickListener(r2)
            android.view.View r0 = r2.zs
            r0.setOnClickListener(r2)
            android.view.View r0 = r2.zt
            r0.setOnClickListener(r2)
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.lB
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.gQ
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.lC
            r0.setOnClickListener(r2)
            android.widget.TextView r0 = r2.lD
            r0.setOnClickListener(r2)
            return
    }

    public final void a(com.kwad.components.ad.reward.k.c r5) {
            r4 = this;
            com.kwad.components.core.widget.KSCornerImageView r0 = r4.lB
            java.lang.String r1 = r5.gu()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.adTemplate
            r3 = 4
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r2, r3)
            android.widget.TextView r0 = r4.gQ
            java.lang.String r1 = r5.getTitle()
            r0.setText(r1)
            android.widget.TextView r0 = r4.lC
            java.lang.String r1 = r5.gv()
            r0.setText(r1)
            android.widget.TextView r0 = r4.zr
            java.lang.String r5 = r5.gx()
            r0.setText(r5)
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.adTemplate
            boolean r5 = com.kwad.sdk.core.response.b.a.aN(r5)
            if (r5 == 0) goto L4a
            android.widget.TextView r5 = r4.lD
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.adTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            r0[r1] = r2
            java.lang.String r1 = "%s >"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r5.setText(r0)
        L4a:
            return
    }

    @Override
    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.sw
            return r0
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.view.View r0 = r2.vn
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L15
            android.app.DialogFragment r3 = r2.zq
            r3.dismiss()
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r3.gp()
            return
        L15:
            android.view.View r0 = r2.zs
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L2b
            android.app.DialogFragment r3 = r2.zq
            r3.dismiss()
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r0 = 0
            r3.H(r0)
            return
        L2b:
            android.view.View r0 = r2.zt
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L40
            android.app.DialogFragment r3 = r2.zq
            r3.dismiss()
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r3.gp()
            return
        L40:
            com.kwad.components.core.widget.KSCornerImageView r0 = r2.lB
            boolean r0 = r3.equals(r0)
            r1 = 2
            if (r0 == 0) goto L53
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r0 = 127(0x7f, float:1.78E-43)
            r3.g(r0, r1)
            return
        L53:
            android.widget.TextView r0 = r2.gQ
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L65
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r0 = 128(0x80, float:1.8E-43)
            r3.g(r0, r1)
            return
        L65:
            android.widget.TextView r0 = r2.lC
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L77
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r0 = 129(0x81, float:1.81E-43)
            r3.g(r0, r1)
            return
        L77:
            android.widget.TextView r0 = r2.lD
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L88
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L88
            r0 = 131(0x83, float:1.84E-43)
            r3.g(r0, r1)
        L88:
            return
    }
}

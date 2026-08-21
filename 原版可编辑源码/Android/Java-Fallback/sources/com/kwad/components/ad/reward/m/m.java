package com.kwad.components.ad.reward.m;

public final class m extends com.kwad.components.ad.reward.m.d implements android.view.View.OnClickListener {
    private android.widget.ImageView eZ;
    private android.widget.TextView gQ;
    private com.kwad.components.ad.reward.k.a qa;
    private android.view.ViewGroup zI;
    private android.view.View zJ;
    private android.widget.TextView zK;
    private android.widget.TextView zL;
    private android.widget.TextView zM;
    private android.view.View zN;
    private android.app.DialogFragment zq;
    private android.view.View zt;

    public m(android.app.DialogFragment r1, com.kwad.sdk.core.response.model.AdTemplate r2, android.view.LayoutInflater r3, android.view.ViewGroup r4, com.kwad.components.ad.reward.k.a r5) {
            r0 = this;
            r0.<init>()
            r0.zq = r1
            r0.qa = r5
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r1 = com.kwad.sdk.core.response.b.a.cw(r1)
            r2 = 0
            if (r1 == 0) goto L21
            int r1 = com.kwad.sdk.R.layout.ksad_live_origin_dialog
            android.view.View r1 = r3.inflate(r1, r4, r2)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r0.zI = r1
            r1 = 1
            r0.s(r1)
            return
        L21:
            int r1 = com.kwad.sdk.R.layout.ksad_live_subscribe_dialog
            android.view.View r1 = r3.inflate(r1, r4, r2)
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
            r0.zI = r1
            r0.s(r2)
            return
    }

    private void s(boolean r3) {
            r2 = this;
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_btn_close
            android.view.View r0 = r0.findViewById(r1)
            r2.zJ = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_title
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.gQ = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.eZ = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_content_txt
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.zL = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_content
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.zK = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_btn_continue
            android.view.View r0 = r0.findViewById(r1)
            r2.zt = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_btn_deny
            android.view.View r0 = r0.findViewById(r1)
            r2.zN = r0
            android.view.ViewGroup r0 = r2.zI
            int r1 = com.kwad.sdk.R.id.ksad_live_subscribe_dialog_vide_detail
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.zM = r0
            if (r3 == 0) goto L63
            android.view.View r3 = r2.zJ
            r0 = 8
            r3.setVisibility(r0)
        L63:
            android.view.View r3 = r2.zJ
            r3.setOnClickListener(r2)
            android.view.View r3 = r2.zt
            r3.setOnClickListener(r2)
            android.view.View r3 = r2.zN
            r3.setOnClickListener(r2)
            android.widget.TextView r3 = r2.zM
            r3.setOnClickListener(r2)
            return
    }

    public final void a(com.kwad.components.ad.reward.k.c r8) {
            r7 = this;
            java.lang.String r0 = r8.gu()
            android.view.ViewGroup r1 = r7.zI
            android.content.Context r1 = r1.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_ic_default_user_avatar
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            android.widget.ImageView r2 = r7.eZ
            com.kwad.sdk.core.imageloader.KSImageLoader.loadCircleIcon(r2, r0, r1)
            java.lang.String r0 = r8.getTitle()
            android.widget.TextView r1 = r7.gQ
            if (r1 == 0) goto L55
            if (r0 == 0) goto L55
            android.text.SpannableString r1 = new android.text.SpannableString
            r1.<init>(r0)
            android.view.ViewGroup r2 = r7.gQ()
            android.content.res.Resources r2 = r2.getResources()
            int r3 = com.kwad.sdk.R.color.ksad_reward_main_color
            int r2 = r2.getColor(r3)
            android.text.style.ForegroundColorSpan r3 = new android.text.style.ForegroundColorSpan
            r3.<init>(r2)
            r4 = 4
            r5 = 18
            r6 = 2
            r1.setSpan(r3, r6, r4, r5)
            android.text.style.ForegroundColorSpan r3 = new android.text.style.ForegroundColorSpan
            r3.<init>(r2)
            int r0 = r0.length()
            int r2 = r0 + (-2)
            r1.setSpan(r3, r2, r0, r5)
            android.widget.TextView r0 = r7.gQ
            r0.setText(r1)
        L55:
            android.widget.TextView r0 = r7.zK
            java.lang.String r1 = r8.gv()
            r0.setText(r1)
            android.widget.TextView r0 = r7.zL
            java.lang.String r1 = r8.gw()
            r0.setText(r1)
            android.widget.TextView r0 = r7.zM
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r8 = r8.qj
            r1[r2] = r8
            java.lang.String r8 = "%s"
            java.lang.String r8 = java.lang.String.format(r8, r1)
            r0.setText(r8)
            return
    }

    @Override
    public final android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.zI
            return r0
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.view.View r0 = r2.zJ
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L15
            android.app.DialogFragment r3 = r2.zq
            r3.dismiss()
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L52
            r3.gp()
            return
        L15:
            android.view.View r0 = r2.zt
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L2a
            android.app.DialogFragment r3 = r2.zq
            r3.dismiss()
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L52
            r3.gp()
            return
        L2a:
            android.view.View r0 = r2.zN
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L40
            android.app.DialogFragment r3 = r2.zq
            r3.dismiss()
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L52
            r0 = 0
            r3.H(r0)
            return
        L40:
            android.widget.TextView r0 = r2.zM
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L52
            com.kwad.components.ad.reward.k$a r3 = r2.qa
            if (r3 == 0) goto L52
            r0 = 131(0x83, float:1.84E-43)
            r1 = 2
            r3.g(r0, r1)
        L52:
            return
    }
}

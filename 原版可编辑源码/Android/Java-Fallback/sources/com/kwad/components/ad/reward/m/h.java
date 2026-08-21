package com.kwad.components.ad.reward.m;

public class h extends com.kwad.components.ad.reward.m.s implements android.view.View.OnClickListener {
    protected com.kwad.components.core.widget.KsLogoView mLogoView;
    protected com.kwad.components.core.widget.KsConvertButton yO;
    protected android.widget.TextView yP;
    protected android.widget.TextView yQ;
    protected android.widget.TextView yR;
    protected com.kwad.components.ad.reward.m.h.a yS;
    protected int yT;
    protected boolean yU;
    protected android.widget.ImageView yt;
    protected com.kwad.components.ad.widget.KsAppTagsView yx;

    public interface a {
        void ig();

        void ih();

        void ii();

        void ij();

        void ik();

        void il();
    }

    public h() {
            r1 = this;
            r1.<init>()
            int r0 = com.kwad.sdk.R.layout.ksad_reward_apk_info_card_tag_item
            r1.yT = r0
            r0 = 1
            r1.yU = r0
            return
    }

    private void T(int r4) {
            r3 = this;
            com.kwad.components.core.widget.KsConvertButton r0 = r3.yO
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 1
            if (r4 != r1) goto L10
            com.kwad.sdk.widget.h$a r4 = r0.getCornerConf()
            r4.setAllCorner(r1)
            goto L27
        L10:
            r2 = 2
            if (r4 != r2) goto L27
            com.kwad.sdk.widget.h$a r4 = r0.getCornerConf()
            r0 = 0
            com.kwad.sdk.widget.h$a r4 = r4.bS(r0)
            com.kwad.sdk.widget.h$a r4 = r4.bV(r0)
            com.kwad.sdk.widget.h$a r4 = r4.bU(r1)
            r4.bT(r1)
        L27:
            com.kwad.components.core.widget.KsConvertButton r4 = r3.yO
            r4.postInvalidate()
            return
    }

    private void a(com.kwad.components.ad.reward.model.a r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            int r0 = r6.hl()
            r5.T(r0)
            com.kwad.components.core.widget.KsLogoView r0 = r5.mLogoView
            if (r0 == 0) goto L15
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.hh()
            r0.aa(r1)
        L15:
            android.widget.TextView r0 = r5.yP
            java.lang.String r1 = r6.getTitle()
            r0.setText(r1)
            android.widget.TextView r0 = r5.yQ
            if (r0 == 0) goto L29
            java.lang.String r1 = r6.gv()
            r0.setText(r1)
        L29:
            android.widget.TextView r0 = r5.yR
            r1 = 0
            r2 = 8
            if (r0 == 0) goto L59
            java.lang.String r3 = r6.gv()
            r0.setText(r3)
            java.lang.String r0 = r6.gv()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L44
            r0 = r2
            r3 = r0
            goto L4f
        L44:
            boolean r0 = r6.hk()
            if (r0 == 0) goto L4d
            r3 = r1
            r0 = r2
            goto L4f
        L4d:
            r0 = r1
            r3 = r2
        L4f:
            android.widget.TextView r4 = r5.yQ
            if (r4 == 0) goto L56
            r4.setVisibility(r0)
        L56:
            android.widget.TextView r0 = r5.yR
            goto L6a
        L59:
            android.widget.TextView r0 = r5.yQ
            if (r0 == 0) goto L6d
            java.lang.String r3 = r6.gv()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L69
            r3 = r2
            goto L6a
        L69:
            r3 = r1
        L6a:
            r0.setVisibility(r3)
        L6d:
            com.kwad.components.ad.widget.KsAppTagsView r0 = r5.yx
            if (r0 == 0) goto L86
            java.util.List r3 = r6.hj()
            int r4 = r5.yT
            r0.a(r3, r4)
            com.kwad.components.ad.widget.KsAppTagsView r0 = r5.yx
            boolean r3 = r6.hk()
            if (r3 == 0) goto L83
            r1 = r2
        L83:
            r0.setVisibility(r1)
        L86:
            com.kwad.components.core.widget.KsConvertButton r0 = r5.yO
            if (r0 == 0) goto L95
            com.kwad.components.core.e.d.c r1 = r6.hi()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.hh()
            r0.a(r1, r2)
        L95:
            android.widget.ImageView r0 = r5.yt
            java.lang.String r1 = r6.gu()
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.hh()
            r2 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r6, r2)
            return
    }

    private void g(android.view.ViewGroup r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = com.kwad.sdk.R.id.ksad_common_app_logo
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r1.mLogoView = r0
            int r0 = com.kwad.sdk.R.id.ksad_common_app_icon
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.yt = r0
            int r0 = com.kwad.sdk.R.id.ksad_common_app_name
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.yP = r0
            int r0 = com.kwad.sdk.R.id.ksad_common_app_tags
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.widget.KsAppTagsView r0 = (com.kwad.components.ad.widget.KsAppTagsView) r0
            r1.yx = r0
            int r0 = com.kwad.sdk.R.id.ksad_common_app_desc
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.yQ = r0
            int r0 = com.kwad.sdk.R.id.ksad_common_app_desc2
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.yR = r0
            int r0 = com.kwad.sdk.R.id.ksad_common_app_action
            android.view.View r2 = r2.findViewById(r0)
            com.kwad.components.core.widget.KsConvertButton r2 = (com.kwad.components.core.widget.KsConvertButton) r2
            r1.yO = r2
            return
    }

    private static int jZ() {
            int r0 = com.kwad.sdk.R.id.ksad_common_app_card_root
            return r0
    }

    public final void a(com.kwad.components.ad.reward.m.h.a r1) {
            r0 = this;
            r0.yS = r1
            return
    }

    @Override
    protected final void a(com.kwad.components.ad.reward.m.r r2) {
            r1 = this;
            super.a(r2)
            boolean r0 = r1.yU
            com.kwad.components.ad.reward.model.a r2 = com.kwad.components.ad.reward.model.a.a(r2, r0)
            r1.a(r2)
            return
    }

    public final void f(android.view.ViewGroup r3) {
            r2 = this;
            int r0 = r2.if()
            int r1 = jZ()
            super.a(r3, r0, r1)
            android.view.ViewGroup r3 = r2.sw
            r2.g(r3)
            android.view.ViewGroup r3 = r2.sw
            if (r3 == 0) goto L3d
            android.view.ViewGroup r3 = r2.sw
            r3.setOnClickListener(r2)
            com.kwad.components.core.widget.KsConvertButton r3 = r2.yO
            r3.setOnClickListener(r2)
            android.widget.ImageView r3 = r2.yt
            r3.setOnClickListener(r2)
            android.widget.TextView r3 = r2.yP
            r3.setOnClickListener(r2)
            android.widget.TextView r3 = r2.yQ
            if (r3 == 0) goto L2f
            r3.setOnClickListener(r2)
        L2f:
            android.widget.TextView r3 = r2.yR
            if (r3 == 0) goto L36
            r3.setOnClickListener(r2)
        L36:
            com.kwad.components.ad.widget.KsAppTagsView r3 = r2.yx
            if (r3 == 0) goto L3d
            r3.setOnClickListener(r2)
        L3d:
            return
    }

    protected int if() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_common_app_card_stub
            return r0
    }

    @Override
    public void onClick(android.view.View r2) {
            r1 = this;
            com.kwad.components.core.widget.KsConvertButton r0 = r1.yO
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L10
            com.kwad.components.ad.reward.m.h$a r2 = r1.yS
            if (r2 == 0) goto L68
            r2.ig()
            return
        L10:
            android.widget.ImageView r0 = r1.yt
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L20
            com.kwad.components.ad.reward.m.h$a r2 = r1.yS
            if (r2 == 0) goto L68
            r2.ih()
            return
        L20:
            android.widget.TextView r0 = r1.yP
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L30
            com.kwad.components.ad.reward.m.h$a r2 = r1.yS
            if (r2 == 0) goto L68
            r2.ii()
            return
        L30:
            android.widget.TextView r0 = r1.yQ
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L61
            android.widget.TextView r0 = r1.yR
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L41
            goto L61
        L41:
            com.kwad.components.ad.widget.KsAppTagsView r0 = r1.yx
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L51
            com.kwad.components.ad.reward.m.h$a r2 = r1.yS
            if (r2 == 0) goto L68
            r2.ik()
            return
        L51:
            android.view.ViewGroup r0 = r1.sw
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L68
            com.kwad.components.ad.reward.m.h$a r2 = r1.yS
            if (r2 == 0) goto L68
            r2.il()
            goto L68
        L61:
            com.kwad.components.ad.reward.m.h$a r2 = r1.yS
            if (r2 == 0) goto L68
            r2.ij()
        L68:
            return
    }

    public final void show() {
            r2 = this;
            android.view.ViewGroup r0 = r2.sw
            if (r0 == 0) goto La
            android.view.ViewGroup r0 = r2.sw
            r1 = 0
            r0.setVisibility(r1)
        La:
            return
    }
}

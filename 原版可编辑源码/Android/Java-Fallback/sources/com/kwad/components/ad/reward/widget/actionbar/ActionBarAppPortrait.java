package com.kwad.components.ad.reward.widget.actionbar;

public class ActionBarAppPortrait extends android.widget.LinearLayout implements com.kwad.sdk.widget.c {
    private com.kwad.components.ad.widget.AppScoreView Bd;
    private com.kwad.components.core.page.widget.TextProgressBar Be;
    private android.view.View Bf;
    private com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait.a Bi;
    private com.kwad.sdk.api.KsAppDownloadListener cn;
    private android.widget.ImageView du;
    private android.widget.TextView dv;
    private android.widget.TextView dx;
    private android.widget.TextView eo;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;



    public interface a {
        void P(boolean r1);
    }

    public ActionBarAppPortrait(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ActionBarAppPortrait(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ActionBarAppPortrait(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.initView()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.core.page.widget.TextProgressBar b(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0) {
            com.kwad.components.core.page.widget.TextProgressBar r0 = r0.Be
            return r0
    }

    private void b(android.view.View r5, boolean r6) {
            r4 = this;
            android.view.View r0 = r4.Bf
            r1 = 1
            if (r5 != r0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 2
        L8:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r5.getContext()
            r2.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r3)
            com.kwad.components.core.e.d.c r3 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            com.kwad.components.core.e.d.a$a r2 = r2.am(r1)
            com.kwad.components.core.e.d.a$a r2 = r2.an(r0)
            com.kwad.components.core.page.widget.TextProgressBar r3 = r4.Be
            if (r5 != r3) goto L2a
            goto L2b
        L2a:
            r1 = 0
        L2b:
            com.kwad.components.core.e.d.a$a r5 = r2.am(r1)
            com.kwad.components.core.e.d.a$a r5 = r5.ao(r0)
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait$2 r0 = new com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait$2
            r0.<init>(r4, r6)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
            return
    }

    static android.view.View c(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0) {
            android.view.View r0 = r0.Bf
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait.a e(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait r0) {
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait$a r0 = r0.Bi
            return r0
    }

    private com.kwad.sdk.api.KsAppDownloadListener getAppDownloadListener() {
            r1 = this;
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            if (r0 != 0) goto Lb
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait$1 r0 = new com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait$1
            r0.<init>(r1)
            r1.cn = r0
        Lb:
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            return r0
    }

    private void initView() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_video_actionbar_app_portrait
            com.kwad.sdk.m.l.inflate(r0, r1, r3)
            int r0 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.du = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_title
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.dv = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.eo = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_score
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.ad.widget.AppScoreView r0 = (com.kwad.components.ad.widget.AppScoreView) r0
            r3.Bd = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_count
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.dx = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_btn
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.page.widget.TextProgressBar r0 = (com.kwad.components.core.page.widget.TextProgressBar) r0
            r3.Be = r0
            android.content.Context r1 = r3.getContext()
            r2 = 1098907648(0x41800000, float:16.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTextDimen(r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.Be
            r1 = -1
            r0.setTextColor(r1)
            int r0 = com.kwad.sdk.R.id.ksad_download_bar_cover
            android.view.View r0 = r3.findViewById(r0)
            r3.Bf = r0
            return
    }

    private void kl() {
            r7 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r7.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ar(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 1
            r1 = r1 ^ r2
            com.kwad.sdk.core.response.model.AdInfo r3 = r7.mAdInfo
            float r3 = com.kwad.sdk.core.response.b.a.as(r3)
            r4 = 1077936128(0x40400000, float:3.0)
            int r4 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            r5 = 0
            if (r4 < 0) goto L1a
            goto L1b
        L1a:
            r2 = r5
        L1b:
            r4 = 8
            if (r1 == 0) goto L61
            if (r2 == 0) goto L61
            android.widget.TextView r1 = r7.dv
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r1 = (android.widget.LinearLayout.LayoutParams) r1
            android.content.Context r2 = r7.getContext()
            r6 = 1065353216(0x3f800000, float:1.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r6)
            r1.bottomMargin = r2
            com.kwad.components.ad.widget.AppScoreView r1 = r7.Bd
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r1 = (android.widget.LinearLayout.LayoutParams) r1
            android.content.Context r2 = r7.getContext()
            int r2 = com.kwad.sdk.d.a.a.a(r2, r6)
            r1.bottomMargin = r2
            android.widget.TextView r1 = r7.dx
            r1.setText(r0)
            android.widget.TextView r0 = r7.dx
            r0.setVisibility(r5)
            com.kwad.components.ad.widget.AppScoreView r0 = r7.Bd
            r0.setVisibility(r5)
            com.kwad.components.ad.widget.AppScoreView r0 = r7.Bd
            r0.setScore(r3)
            android.widget.TextView r0 = r7.eo
            r0.setVisibility(r4)
            return
        L61:
            if (r1 == 0) goto L78
            android.widget.TextView r1 = r7.dx
            r1.setText(r0)
            android.widget.TextView r0 = r7.dx
            r0.setVisibility(r5)
            com.kwad.components.ad.widget.AppScoreView r0 = r7.Bd
            r0.setVisibility(r4)
            android.widget.TextView r0 = r7.eo
            r0.setVisibility(r4)
            return
        L78:
            if (r2 == 0) goto L8f
            android.widget.TextView r0 = r7.dx
            r0.setVisibility(r4)
            com.kwad.components.ad.widget.AppScoreView r0 = r7.Bd
            r0.setScore(r3)
            com.kwad.components.ad.widget.AppScoreView r0 = r7.Bd
            r0.setVisibility(r5)
            android.widget.TextView r0 = r7.eo
            r0.setVisibility(r4)
            return
        L8f:
            android.widget.TextView r0 = r7.eo
            com.kwad.sdk.core.response.model.AdInfo r1 = r7.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.an(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r7.dx
            r0.setVisibility(r4)
            com.kwad.components.ad.widget.AppScoreView r0 = r7.Bd
            r0.setVisibility(r4)
            android.widget.TextView r0 = r7.eo
            r0.setVisibility(r5)
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.e.d.c r3, com.kwad.components.ad.reward.widget.actionbar.ActionBarAppPortrait.a r4) {
            r1 = this;
            r1.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            r1.mAdInfo = r0
            r1.Bi = r4
            r1.mApkDownloadHelper = r3
            android.widget.ImageView r3 = r1.du
            java.lang.String r4 = com.kwad.sdk.core.response.b.a.bQ(r0)
            r0 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r3, r4, r2, r0)
            android.widget.TextView r2 = r1.dv
            com.kwad.sdk.core.response.model.AdInfo r3 = r1.mAdInfo
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bO(r3)
            r2.setText(r3)
            r1.kl()
            com.kwad.components.core.page.widget.TextProgressBar r2 = r1.Be
            com.kwad.sdk.core.response.model.AdInfo r3 = r1.mAdInfo
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.aw(r3)
            r4 = 0
            r2.e(r3, r4)
            com.kwad.components.core.e.d.c r2 = r1.mApkDownloadHelper
            if (r2 == 0) goto L3c
            com.kwad.sdk.api.KsAppDownloadListener r3 = r1.getAppDownloadListener()
            r2.b(r3)
        L3c:
            r2 = 1
            r1.setClickable(r2)
            com.kwad.sdk.widget.f r2 = new com.kwad.sdk.widget.f
            r2.<init>(r1, r1)
            com.kwad.sdk.widget.f r2 = new com.kwad.sdk.widget.f
            android.view.View r3 = r1.Bf
            r2.<init>(r3, r1)
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            r1.b(r2, r0)
        Lc:
            return
    }
}

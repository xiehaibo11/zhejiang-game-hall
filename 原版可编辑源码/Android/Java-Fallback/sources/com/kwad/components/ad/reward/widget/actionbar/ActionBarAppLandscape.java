package com.kwad.components.ad.reward.widget.actionbar;

public class ActionBarAppLandscape extends android.widget.LinearLayout implements com.kwad.sdk.widget.c {
    private com.kwad.components.ad.widget.AppScoreView Bd;
    private com.kwad.components.core.page.widget.TextProgressBar Be;
    private android.view.View Bf;
    private com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape.a Bg;
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

    public ActionBarAppLandscape(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ActionBarAppLandscape(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ActionBarAppLandscape(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.initView()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.core.page.widget.TextProgressBar b(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0) {
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
            com.kwad.components.core.page.widget.TextProgressBar r3 = r4.Be
            if (r5 != r3) goto L22
            goto L23
        L22:
            r1 = 0
        L23:
            com.kwad.components.core.e.d.a$a r5 = r2.am(r1)
            com.kwad.components.core.e.d.a$a r5 = r5.ao(r0)
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape$2 r0 = new com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape$2
            r0.<init>(r4, r6)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
            return
    }

    static android.view.View c(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0) {
            android.view.View r0 = r0.Bf
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape.a e(com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape r0) {
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape$a r0 = r0.Bg
            return r0
    }

    private com.kwad.sdk.api.KsAppDownloadListener getAppDownloadListener() {
            r1 = this;
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            if (r0 != 0) goto Lb
            com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape$1 r0 = new com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape$1
            r0.<init>(r1)
            r1.cn = r0
        Lb:
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            return r0
    }

    private void initView() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_video_actionbar_app_landscape
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
            r5 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            float r0 = com.kwad.sdk.core.response.b.a.as(r0)
            r1 = 1077936128(0x40400000, float:3.0)
            int r1 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r2 = 1
            r3 = 0
            if (r1 < 0) goto L10
            r1 = r2
            goto L11
        L10:
            r1 = r3
        L11:
            if (r1 == 0) goto L1d
            com.kwad.components.ad.widget.AppScoreView r4 = r5.Bd
            r4.setScore(r0)
            com.kwad.components.ad.widget.AppScoreView r0 = r5.Bd
            r0.setVisibility(r3)
        L1d:
            com.kwad.sdk.core.response.model.AdInfo r0 = r5.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ar(r0)
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            r2 = r2 ^ r4
            if (r2 == 0) goto L34
            android.widget.TextView r4 = r5.dx
            r4.setText(r0)
            android.widget.TextView r0 = r5.dx
            r0.setVisibility(r3)
        L34:
            r0 = 8
            if (r2 != 0) goto L56
            if (r1 == 0) goto L3b
            goto L56
        L3b:
            android.widget.TextView r1 = r5.eo
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r2)
            r1.setText(r2)
            com.kwad.components.ad.widget.AppScoreView r1 = r5.Bd
            r1.setVisibility(r0)
            android.widget.TextView r1 = r5.dx
            r1.setVisibility(r0)
            android.widget.TextView r0 = r5.eo
            r0.setVisibility(r3)
            return
        L56:
            android.widget.TextView r1 = r5.eo
            r1.setVisibility(r0)
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.e.d.c r3, com.kwad.components.ad.reward.widget.actionbar.ActionBarAppLandscape.a r4) {
            r1 = this;
            r1.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            r1.mAdInfo = r0
            r1.Bg = r4
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

package com.kwad.components.ad.draw.view.playcard;

public class DrawCardApp extends android.widget.FrameLayout implements android.view.View.OnClickListener {
    private com.kwad.sdk.api.KsAppDownloadListener cn;
    private com.kwad.components.ad.draw.view.playcard.DrawCardApp.a da;
    private android.widget.ImageView db;
    private android.widget.ImageView dc;
    private android.widget.TextView dd;
    private android.view.ViewGroup de;
    private com.kwad.components.ad.widget.AppScoreView df;
    private android.widget.TextView dg;
    private android.widget.TextView dh;
    private com.kwad.components.core.widget.KsLogoView di;
    private com.kwad.components.ad.draw.view.DrawDownloadProgressBar dj;
    private android.animation.ValueAnimator dk;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private int mHeight;



    public interface a {
        void at();

        void au();
    }

    public DrawCardApp(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.D(r1)
            return
    }

    public DrawCardApp(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.D(r1)
            return
    }

    public DrawCardApp(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.D(r1)
            return
    }

    private void D(android.content.Context r3) {
            r2 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_draw_card_app
            com.kwad.sdk.m.l.inflate(r3, r0, r2)
            int r0 = com.kwad.sdk.R.id.ksad_card_app_close
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.db = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_icon
            android.view.View r0 = r2.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r2.dc = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_name
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.dd = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_score_container
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.de = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_score
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.widget.AppScoreView r0 = (com.kwad.components.ad.widget.AppScoreView) r0
            r2.df = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_download_count
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.dg = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_desc
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.dh = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_logo
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r2.di = r0
            int r0 = com.kwad.sdk.R.id.ksad_card_app_download_btn
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = (com.kwad.components.ad.draw.view.DrawDownloadProgressBar) r0
            r2.dj = r0
            r1 = 16
            r0.setTextSize(r1)
            r0 = 1125908480(0x431c0000, float:156.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r0)
            r2.mHeight = r3
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.draw.view.playcard.DrawCardApp r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    private void aE() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.dk
            if (r0 == 0) goto Lc
            r0.removeAllListeners()
            android.animation.ValueAnimator r0 = r1.dk
            r0.cancel()
        Lc:
            return
    }

    private void aN() {
            r2 = this;
            int r0 = r2.mHeight
            r1 = 0
            r2.d(r0, r1)
            return
    }

    static com.kwad.components.ad.draw.view.DrawDownloadProgressBar b(com.kwad.components.ad.draw.view.playcard.DrawCardApp r0) {
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r0.dj
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.draw.view.playcard.DrawCardApp r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.draw.view.playcard.DrawCardApp.a d(com.kwad.components.ad.draw.view.playcard.DrawCardApp r0) {
            com.kwad.components.ad.draw.view.playcard.DrawCardApp$a r0 = r0.da
            return r0
    }

    private void d(int r3, int r4) {
            r2 = this;
            r2.aE()
            android.animation.ValueAnimator r3 = com.kwad.components.core.t.m.b(r2, r3, r4)
            r2.dk = r3
            android.view.animation.DecelerateInterpolator r4 = new android.view.animation.DecelerateInterpolator
            r0 = 1073741824(0x40000000, float:2.0)
            r4.<init>(r0)
            r3.setInterpolator(r4)
            android.animation.ValueAnimator r3 = r2.dk
            r0 = 300(0x12c, double:1.48E-321)
            r3.setDuration(r0)
            android.animation.ValueAnimator r3 = r2.dk
            r3.start()
            return
    }

    private com.kwad.sdk.api.KsAppDownloadListener getAppDownloadListener() {
            r1 = this;
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            if (r0 != 0) goto Lb
            com.kwad.components.ad.draw.view.playcard.DrawCardApp$1 r0 = new com.kwad.components.ad.draw.view.playcard.DrawCardApp$1
            r0.<init>(r1)
            r1.cn = r0
        Lb:
            com.kwad.sdk.api.KsAppDownloadListener r0 = r1.cn
            return r0
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r5, com.kwad.components.ad.draw.view.playcard.DrawCardApp.a r6) {
            r4 = this;
            r4.mAdTemplate = r5
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            r4.mAdInfo = r0
            r4.da = r6
            com.kwad.components.core.e.d.c r6 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.api.KsAppDownloadListener r1 = r4.getAppDownloadListener()
            r6.<init>(r0, r1)
            r4.mApkDownloadHelper = r6
            android.widget.ImageView r6 = r4.dc
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bQ(r0)
            r1 = 11
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r6, r0, r5, r1)
            android.widget.TextView r5 = r4.dd
            com.kwad.sdk.core.response.model.AdInfo r6 = r4.mAdInfo
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.ao(r6)
            r5.setText(r6)
            com.kwad.sdk.core.response.model.AdInfo r5 = r4.mAdInfo
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.ar(r5)
            com.kwad.sdk.core.response.model.AdInfo r6 = r4.mAdInfo
            float r6 = com.kwad.sdk.core.response.b.a.as(r6)
            r0 = 1077936128(0x40400000, float:3.0)
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 < 0) goto L45
            r0 = r1
            goto L46
        L45:
            r0 = r2
        L46:
            if (r0 == 0) goto L52
            com.kwad.components.ad.widget.AppScoreView r3 = r4.df
            r3.setScore(r6)
            com.kwad.components.ad.widget.AppScoreView r6 = r4.df
            r6.setVisibility(r2)
        L52:
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            r6 = r6 ^ r1
            if (r6 == 0) goto L63
            android.widget.TextView r1 = r4.dg
            r1.setText(r5)
            android.widget.TextView r5 = r4.dg
            r5.setVisibility(r2)
        L63:
            if (r0 != 0) goto L70
            if (r6 == 0) goto L68
            goto L70
        L68:
            android.view.ViewGroup r5 = r4.de
            r6 = 8
            r5.setVisibility(r6)
            goto L75
        L70:
            android.view.ViewGroup r5 = r4.de
            r5.setVisibility(r2)
        L75:
            com.kwad.components.core.widget.KsLogoView r5 = r4.di
            com.kwad.sdk.core.response.model.AdTemplate r6 = r4.mAdTemplate
            r5.aa(r6)
            android.widget.TextView r5 = r4.dh
            com.kwad.sdk.core.response.model.AdInfo r6 = r4.mAdInfo
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.an(r6)
            r5.setText(r6)
            android.widget.ImageView r5 = r4.db
            r5.setOnClickListener(r4)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r5 = r4.dj
            r5.setOnClickListener(r4)
            r4.setOnClickListener(r4)
            return
    }

    public final void aM() {
            r2 = this;
            int r0 = r2.mHeight
            r1 = 0
            r2.d(r1, r0)
            return
    }

    @Override
    public void onClick(android.view.View r5) {
            r4 = this;
            android.widget.ImageView r0 = r4.db
            if (r5 != r0) goto Lf
            r4.aN()
            com.kwad.components.ad.draw.view.playcard.DrawCardApp$a r5 = r4.da
            if (r5 == 0) goto L46
            r5.at()
            return
        Lf:
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r4.dj
            r1 = 1
            if (r5 != r0) goto L16
            r0 = r1
            goto L17
        L16:
            r0 = 2
        L17:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r4.getContext()
            r2.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r3)
            com.kwad.components.core.e.d.c r3 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r3 = r4.dj
            if (r5 != r3) goto L31
            goto L32
        L31:
            r1 = 0
        L32:
            com.kwad.components.core.e.d.a$a r5 = r2.am(r1)
            com.kwad.components.core.e.d.a$a r5 = r5.ao(r0)
            com.kwad.components.ad.draw.view.playcard.DrawCardApp$2 r0 = new com.kwad.components.ad.draw.view.playcard.DrawCardApp$2
            r0.<init>(r4)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
        L46:
            return
    }

    public final void release() {
            r1 = this;
            r1.aE()
            r0 = 0
            r1.mApkDownloadHelper = r0
            return
    }
}

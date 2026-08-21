package com.kwad.components.ad.draw.view.playend;

public class DrawVideoTailFrame extends android.widget.FrameLayout implements android.view.View.OnClickListener {
    private com.kwad.sdk.api.KsDrawAd.AdInteractionListener bD;
    private com.kwad.sdk.api.KsAppDownloadListener cn;
    private android.view.ViewGroup dA;
    private android.widget.TextView dB;
    private android.widget.TextView dC;
    private com.kwad.sdk.core.view.AdBaseFrameLayout dr;
    private android.widget.ImageView ds;
    private android.view.ViewGroup dt;
    private android.widget.ImageView du;
    private android.widget.TextView dv;
    private com.kwad.components.ad.widget.AppScoreView dw;
    private android.widget.TextView dx;
    private android.widget.TextView dy;
    private com.kwad.components.ad.draw.view.DrawDownloadProgressBar dz;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.widget.KsLogoView mLogoView;



    public DrawVideoTailFrame(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.D(r1)
            return
    }

    public DrawVideoTailFrame(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.D(r1)
            return
    }

    public DrawVideoTailFrame(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.D(r1)
            return
    }

    private void D(android.content.Context r2) {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_draw_video_tailframe
            com.kwad.sdk.m.l.inflate(r2, r0, r1)
            int r2 = com.kwad.sdk.R.id.ksad_video_cover
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.ds = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_container
            android.view.View r2 = r1.findViewById(r2)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.dt = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r2 = r1.findViewById(r2)
            android.widget.ImageView r2 = (android.widget.ImageView) r2
            r1.du = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_name
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dv = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_score
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.ad.widget.AppScoreView r2 = (com.kwad.components.ad.widget.AppScoreView) r2
            r1.dw = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_download_count
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dx = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_ad_desc
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dy = r2
            int r2 = com.kwad.sdk.R.id.ksad_app_download_btn
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r2 = (com.kwad.components.ad.draw.view.DrawDownloadProgressBar) r2
            r1.dz = r2
            r0 = 15
            r2.setTextSize(r0)
            int r2 = com.kwad.sdk.R.id.ksad_h5_container
            android.view.View r2 = r1.findViewById(r2)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.dA = r2
            int r2 = com.kwad.sdk.R.id.ksad_h5_ad_desc
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dB = r2
            int r2 = com.kwad.sdk.R.id.ksad_h5_open_btn
            android.view.View r2 = r1.findViewById(r2)
            android.widget.TextView r2 = (android.widget.TextView) r2
            r1.dC = r2
            int r2 = com.kwad.sdk.R.id.ksad_draw_tailframe_logo
            android.view.View r2 = r1.findViewById(r2)
            com.kwad.components.core.widget.KsLogoView r2 = (com.kwad.components.core.widget.KsLogoView) r2
            r1.mLogoView = r2
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo a(com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static com.kwad.components.ad.draw.view.DrawDownloadProgressBar b(com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0) {
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r0.dz
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate c(com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.api.KsDrawAd.AdInteractionListener d(com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0) {
            com.kwad.sdk.api.KsDrawAd$AdInteractionListener r0 = r0.bD
            return r0
    }

    static com.kwad.sdk.core.view.AdBaseFrameLayout e(com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame r0) {
            com.kwad.sdk.core.view.AdBaseFrameLayout r0 = r0.dr
            return r0
    }

    private com.kwad.sdk.api.KsAppDownloadListener getAppDownloadListener() {
            r1 = this;
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame$1 r0 = new com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame$1
            r0.<init>(r1)
            return r0
    }

    public final void aP() {
            r2 = this;
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L17
            com.kwad.sdk.api.KsAppDownloadListener r1 = r2.cn
            if (r1 == 0) goto Lc
            r0.d(r1)
            return
        Lc:
            com.kwad.sdk.api.KsAppDownloadListener r0 = r2.getAppDownloadListener()
            r2.cn = r0
            com.kwad.components.core.e.d.c r1 = r2.mApkDownloadHelper
            r1.b(r0)
        L17:
            return
    }

    public final void b(com.kwad.sdk.core.response.model.AdTemplate r6) {
            r5 = this;
            r5.mAdTemplate = r6
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r6)
            r5.mAdInfo = r0
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = com.kwad.sdk.core.response.b.a.aN(r0)
            java.lang.String r1 = r0.coverUrl
            com.kwad.components.core.widget.KsLogoView r2 = r5.mLogoView
            r2.aa(r6)
            boolean r6 = android.text.TextUtils.isEmpty(r1)
            if (r6 != 0) goto L4b
            int r6 = r0.width
            int r0 = r0.height
            if (r6 <= 0) goto L44
            if (r6 <= r0) goto L44
            android.content.Context r2 = r5.getContext()
            int r2 = com.kwad.sdk.d.a.a.getScreenWidth(r2)
            int r3 = r5.getWidth()
            if (r3 != 0) goto L30
            goto L34
        L30:
            int r2 = r5.getWidth()
        L34:
            float r3 = (float) r2
            float r0 = (float) r0
            float r6 = (float) r6
            float r0 = r0 / r6
            float r3 = r3 * r0
            int r6 = (int) r3
            android.widget.ImageView r0 = r5.ds
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            r0.width = r2
            r0.height = r6
        L44:
            android.widget.ImageView r6 = r5.ds
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r6, r1, r0)
        L4b:
            com.kwad.sdk.core.response.model.AdInfo r6 = r5.mAdInfo
            boolean r6 = com.kwad.sdk.core.response.b.a.ax(r6)
            r0 = 8
            r1 = 0
            if (r6 == 0) goto Lac
            android.widget.ImageView r6 = r5.du
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bQ(r2)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate
            r4 = 11
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r6, r2, r3, r4)
            android.widget.TextView r6 = r5.dv
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.ao(r2)
            r6.setText(r2)
            com.kwad.sdk.core.response.model.AdInfo r6 = r5.mAdInfo
            float r6 = com.kwad.sdk.core.response.b.a.as(r6)
            r2 = 1077936128(0x40400000, float:3.0)
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 < 0) goto L7e
            r2 = 1
            goto L7f
        L7e:
            r2 = r1
        L7f:
            if (r2 == 0) goto L8b
            com.kwad.components.ad.widget.AppScoreView r2 = r5.dw
            r2.setScore(r6)
            com.kwad.components.ad.widget.AppScoreView r6 = r5.dw
            r6.setVisibility(r1)
        L8b:
            android.widget.TextView r6 = r5.dx
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.ar(r2)
            r6.setText(r2)
            android.widget.TextView r6 = r5.dy
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r2)
            r6.setText(r2)
            android.view.ViewGroup r6 = r5.dt
            r6.setVisibility(r1)
            android.view.ViewGroup r6 = r5.dA
            r6.setVisibility(r0)
            goto Lcc
        Lac:
            android.widget.TextView r6 = r5.dB
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.an(r2)
            r6.setText(r2)
            android.widget.TextView r6 = r5.dC
            com.kwad.sdk.core.response.model.AdInfo r2 = r5.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            r6.setText(r2)
            android.view.ViewGroup r6 = r5.dt
            r6.setVisibility(r0)
            android.view.ViewGroup r6 = r5.dA
            r6.setVisibility(r1)
        Lcc:
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r6 = r5.dz
            r6.setOnClickListener(r5)
            r5.setOnClickListener(r5)
            return
    }

    @Override
    public void onClick(android.view.View r5) {
            r4 = this;
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r4.dz
            r1 = 1
            if (r5 != r0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 2
        L8:
            com.kwad.components.core.e.d.a$a r2 = new com.kwad.components.core.e.d.a$a
            android.content.Context r3 = r4.getContext()
            r2.<init>(r3)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.mAdTemplate
            com.kwad.components.core.e.d.a$a r2 = r2.P(r3)
            com.kwad.components.core.e.d.c r3 = r4.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r2 = r2.b(r3)
            com.kwad.components.core.e.d.a$a r0 = r2.ao(r0)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r2 = r4.dz
            if (r5 != r2) goto L26
            goto L27
        L26:
            r1 = 0
        L27:
            com.kwad.components.core.e.d.a$a r5 = r0.am(r1)
            com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame$2 r0 = new com.kwad.components.ad.draw.view.playend.DrawVideoTailFrame$2
            r0.<init>(r4)
            com.kwad.components.core.e.d.a$a r5 = r5.a(r0)
            com.kwad.components.core.e.d.a.a(r5)
            return
    }

    public final void release() {
            r2 = this;
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto Lb
            com.kwad.sdk.api.KsAppDownloadListener r1 = r2.cn
            if (r1 == 0) goto Lb
            r0.c(r1)
        Lb:
            return
    }

    public void setAdBaseFrameLayout(com.kwad.sdk.core.view.AdBaseFrameLayout r1) {
            r0 = this;
            r0.dr = r1
            return
    }

    public void setAdInteractionListener(com.kwad.sdk.api.KsDrawAd.AdInteractionListener r1) {
            r0 = this;
            r0.bD = r1
            return
    }

    public void setApkDownloadHelper(com.kwad.components.core.e.d.c r1) {
            r0 = this;
            r0.mApkDownloadHelper = r1
            return
    }
}

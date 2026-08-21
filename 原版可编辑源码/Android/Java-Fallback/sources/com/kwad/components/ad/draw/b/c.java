package com.kwad.components.ad.draw.b;

public final class c extends com.kwad.components.ad.draw.a.a implements android.view.View.OnClickListener {
    private android.view.ViewGroup ce;
    private android.widget.TextView cf;
    private android.widget.TextView cg;
    private android.widget.TextView ch;
    private com.kwad.components.ad.draw.view.DrawDownloadProgressBar ci;
    private android.animation.ValueAnimator cj;
    private int ck;
    private int cl;
    private int cm;
    private com.kwad.sdk.api.KsAppDownloadListener cn;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private com.kwad.components.core.widget.KsLogoView mLogoView;
    private com.kwad.components.core.video.k mVideoPlayStateListener;




    public c() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.draw.b.c$1 r0 = new com.kwad.components.ad.draw.b.c$1
            r0.<init>(r1)
            r1.mVideoPlayStateListener = r0
            com.kwad.components.ad.draw.b.c$2 r0 = new com.kwad.components.ad.draw.b.c$2
            r0.<init>(r1)
            r1.cn = r0
            return
    }

    static int a(com.kwad.components.ad.draw.b.c r0) {
            int r0 = r0.cm
            return r0
    }

    private void a(boolean r3, int r4) {
            r2 = this;
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.view.ViewGroup r1 = r2.ce
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r1)
            com.kwad.components.core.e.d.c r1 = r2.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r0 = r0.b(r1)
            com.kwad.components.core.e.d.a$a r4 = r0.ao(r4)
            com.kwad.components.core.e.d.a$a r3 = r4.am(r3)
            com.kwad.components.ad.draw.b.c$3 r4 = new com.kwad.components.ad.draw.b.c$3
            r4.<init>(r2)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r4)
            com.kwad.components.core.e.d.a.a(r3)
            return
    }

    private void ai() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.bf(r0)
            r1.ck = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.bg(r0)
            r1.cl = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = com.kwad.sdk.core.response.b.a.bh(r0)
            r1.cm = r0
            return
    }

    private void aj() {
            r4 = this;
            android.widget.TextView r0 = r4.ch
            int r0 = r0.getVisibility()
            if (r0 == 0) goto L44
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r4.ci
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L11
            goto L44
        L11:
            android.widget.TextView r0 = r4.ch
            r0.setOnClickListener(r4)
            android.widget.TextView r0 = r4.ch
            r1 = 0
            r0.setVisibility(r1)
            android.widget.TextView r0 = r4.ch
            android.content.Context r2 = r0.getContext()
            r3 = 1110441984(0x42300000, float:44.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            android.animation.ValueAnimator r0 = com.kwad.components.core.t.m.b(r0, r1, r2)
            r4.cj = r0
            android.view.animation.DecelerateInterpolator r1 = new android.view.animation.DecelerateInterpolator
            r2 = 1073741824(0x40000000, float:2.0)
            r1.<init>(r2)
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r4.cj
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r4.cj
            r0.start()
        L44:
            return
    }

    private void ak() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.cj
            if (r0 == 0) goto Lc
            r0.removeAllListeners()
            android.animation.ValueAnimator r0 = r1.cj
            r0.cancel()
        Lc:
            return
    }

    private void al() {
            r2 = this;
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r2.ci
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L9
            return
        L9:
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r2.ci
            r0.setOnClickListener(r2)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r2.ci
            r1 = 0
            r0.setVisibility(r1)
            android.widget.TextView r0 = r2.ch
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    static com.kwad.components.ad.draw.a.b b(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static int c(com.kwad.components.ad.draw.b.c r0) {
            int r0 = r0.cl
            return r0
    }

    static void d(com.kwad.components.ad.draw.b.c r0) {
            r0.al()
            return
    }

    static int e(com.kwad.components.ad.draw.b.c r0) {
            int r0 = r0.ck
            return r0
    }

    static void f(com.kwad.components.ad.draw.b.c r0) {
            r0.aj()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo g(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static android.widget.TextView h(com.kwad.components.ad.draw.b.c r0) {
            android.widget.TextView r0 = r0.ch
            return r0
    }

    static com.kwad.components.ad.draw.view.DrawDownloadProgressBar i(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r0.ci
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate j(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.draw.a.b k(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b l(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b m(com.kwad.components.ad.draw.b.c r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    @Override
    public final void ah() {
            r4 = this;
            super.ah()
            com.kwad.components.ad.draw.a.b r0 = r4.bE
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r4.mAdInfo = r0
            com.kwad.components.ad.draw.a.b r0 = r4.bE
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r4.mApkDownloadHelper = r0
            r4.ai()
            com.kwad.components.core.widget.KsLogoView r0 = r4.mLogoView
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.mAdTemplate
            r0.aa(r1)
            android.widget.TextView r0 = r4.ch
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aw(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r4.ch
            r1 = 8
            r0.setVisibility(r1)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r4.ci
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aw(r2)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r3 = r4.ci
            int r3 = r3.getMax()
            r0.e(r2, r3)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r4.ci
            r0.setVisibility(r1)
            android.view.ViewGroup r0 = r4.ce
            r2 = 0
            r0.setVisibility(r2)
            android.view.ViewGroup r0 = r4.ce
            r0.setOnClickListener(r4)
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L74
            android.widget.TextView r0 = r4.cf
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ao(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r4.cf
            r0.setVisibility(r2)
            com.kwad.components.core.e.d.c r0 = r4.mApkDownloadHelper
            if (r0 == 0) goto L79
            com.kwad.sdk.api.KsAppDownloadListener r1 = r4.cn
            r0.b(r1)
            goto L79
        L74:
            android.widget.TextView r0 = r4.cf
            r0.setVisibility(r1)
        L79:
            android.widget.TextView r0 = r4.cg
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.an(r1)
            r0.setText(r1)
            com.kwad.components.ad.draw.a.b r0 = r4.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r4.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onClick(android.view.View r3) {
            r2 = this;
            android.view.ViewGroup r0 = r2.ce
            if (r3 != r0) goto Ld
            r2.al()
            r3 = 0
            r0 = 2
            r2.a(r3, r0)
            return
        Ld:
            android.widget.TextView r0 = r2.ch
            r1 = 1
            if (r3 != r0) goto L19
            r2.al()
            r2.a(r1, r1)
            return
        L19:
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = r2.ci
            if (r3 != r0) goto L20
            r2.a(r1, r1)
        L20:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_container
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.ce = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_title
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.cf = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_des
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.cg = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_logo
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r2.mLogoView = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_normal_convert_btn
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.ch = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_light_convert_btn
            android.view.View r0 = r2.findViewById(r0)
            com.kwad.components.ad.draw.view.DrawDownloadProgressBar r0 = (com.kwad.components.ad.draw.view.DrawDownloadProgressBar) r0
            r2.ci = r0
            r1 = 16
            r0.setTextSize(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            r2.ak()
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto L11
            com.kwad.sdk.api.KsAppDownloadListener r1 = r2.cn
            if (r1 == 0) goto L11
            r0.c(r1)
        L11:
            com.kwad.components.ad.draw.a.b r0 = r2.bE
            com.kwad.components.ad.draw.c.a r0 = r0.bF
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            return
    }
}

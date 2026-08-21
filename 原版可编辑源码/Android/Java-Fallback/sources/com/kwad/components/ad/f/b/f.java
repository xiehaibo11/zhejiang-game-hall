package com.kwad.components.ad.f.b;

public final class f extends com.kwad.components.ad.f.a.a implements android.view.View.OnClickListener {
    private android.widget.ImageView du;
    private android.widget.TextView dv;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private android.view.ViewGroup ni;
    private android.widget.TextView nj;
    private com.kwad.sdk.api.KsAppDownloadListener nk;




    public f() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.f.b.f$2 r0 = new com.kwad.components.ad.f.b.f$2
            r0.<init>(r1)
            r1.nk = r0
            return
    }

    private void F(int r3) {
            r2 = this;
            com.kwad.components.core.e.d.a$a r0 = new com.kwad.components.core.e.d.a$a
            android.view.ViewGroup r1 = r2.ni
            android.content.Context r1 = r1.getContext()
            r0.<init>(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.components.core.e.d.a$a r0 = r0.P(r1)
            com.kwad.components.core.e.d.a$a r3 = r0.ao(r3)
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            com.kwad.components.core.e.d.a$a r3 = r3.b(r0)
            com.kwad.components.ad.f.b.f$3 r0 = new com.kwad.components.ad.f.b.f$3
            r0.<init>(r2)
            com.kwad.components.core.e.d.a$a r3 = r3.a(r0)
            com.kwad.components.core.e.d.a.a(r3)
            return
    }

    static void a(com.kwad.components.ad.f.b.f r0) {
            r0.eP()
            return
    }

    static com.kwad.sdk.core.response.model.AdInfo b(com.kwad.components.ad.f.b.f r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    static android.widget.TextView c(com.kwad.components.ad.f.b.f r0) {
            android.widget.TextView r0 = r0.nj
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.ad.f.b.f r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.components.ad.f.a.b e(com.kwad.components.ad.f.b.f r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    private void eP() {
            r4 = this;
            android.widget.ImageView r0 = r4.du
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.bQ(r1)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.mAdTemplate
            r3 = 12
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r0, r1, r2, r3)
            android.widget.TextView r0 = r4.dv
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.ao(r1)
            r0.setText(r1)
            android.widget.TextView r0 = r4.nj
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aw(r1)
            r0.setText(r1)
            com.kwad.components.core.e.d.c r0 = r4.mApkDownloadHelper
            if (r0 == 0) goto L2e
            com.kwad.sdk.api.KsAppDownloadListener r1 = r4.nk
            r0.b(r1)
        L2e:
            android.view.ViewGroup r0 = r4.ni
            r0.setOnClickListener(r4)
            android.view.ViewGroup r0 = r4.ni
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    private void notifyAdClick() {
            r2 = this;
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.d$a r0 = r0.mE
            android.view.ViewGroup r1 = r2.ni
            r0.l(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            r2.mAdInfo = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            r2.mApkDownloadHelper = r0
            com.kwad.components.ad.f.b.f$1 r0 = new com.kwad.components.ad.f.b.f$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            android.view.ViewGroup r0 = r2.ni
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onClick(android.view.View r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.ni
            if (r2 != r0) goto Lc
            r2 = 2
            r1.F(r2)
            r1.notifyAdClick()
            return
        Lc:
            android.widget.TextView r0 = r1.nj
            if (r2 != r0) goto L17
            r2 = 1
            r1.F(r2)
            r1.notifyAdClick()
        L17:
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_complete_app_container
            android.view.View r0 = r1.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r1.ni = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.du = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_name
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.dv = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download
            android.view.View r0 = r1.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r1.nj = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.e.d.c r0 = r2.mApkDownloadHelper
            if (r0 == 0) goto Lc
            com.kwad.sdk.api.KsAppDownloadListener r1 = r2.nk
            r0.c(r1)
        Lc:
            return
    }
}

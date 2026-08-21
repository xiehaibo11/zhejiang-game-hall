package com.kwad.components.ad.f.b;

public final class g extends com.kwad.components.ad.f.a.a {
    private android.widget.ImageView nm;


    public g() {
            r0 = this;
            r0.<init>()
            return
    }

    static void a(com.kwad.components.ad.f.b.g r0) {
            r0.eQ()
            return
    }

    private void eQ() {
            r3 = this;
            android.widget.ImageView r0 = r3.nm
            com.kwad.components.ad.f.a.b r1 = r3.mV
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.P(r1)
            com.kwad.components.ad.f.a.b r2 = r3.mV
            com.kwad.sdk.core.response.model.AdTemplate r2 = r2.mAdTemplate
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r1, r2)
            android.widget.ImageView r0 = r3.nm
            r1 = 0
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.b.g$1 r0 = new com.kwad.components.ad.f.b.g$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            android.widget.ImageView r0 = r2.nm
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_cover_image
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.nm = r0
            return
    }
}

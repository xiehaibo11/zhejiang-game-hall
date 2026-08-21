package com.kwad.components.ad.f.b;

public final class b extends com.kwad.components.ad.f.a.a {
    private android.widget.ImageView ca;
    private com.kwad.sdk.core.response.model.b cb;
    private java.lang.Runnable cc;



    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.f.b.b$2 r0 = new com.kwad.components.ad.f.b.b$2
            r0.<init>(r1)
            r1.cc = r0
            return
    }

    static android.widget.ImageView a(com.kwad.components.ad.f.b.b r0) {
            android.widget.ImageView r0 = r0.ca
            return r0
    }

    static com.kwad.sdk.core.response.model.b b(com.kwad.components.ad.f.b.b r0) {
            com.kwad.sdk.core.response.model.b r0 = r0.cb
            return r0
    }

    static com.kwad.components.ad.f.a.b c(com.kwad.components.ad.f.b.b r0) {
            com.kwad.components.ad.f.a.b r0 = r0.mV
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.b r0 = com.kwad.sdk.core.response.b.a.bi(r0)
            r2.cb = r0
            java.lang.String r0 = r0.getUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1c
            return
        L1c:
            android.view.View r0 = r2.getRootView()
            java.lang.Runnable r1 = r2.cc
            r0.post(r1)
            android.widget.ImageView r0 = r2.ca
            r1 = 0
            r0.setVisibility(r1)
            com.kwad.components.ad.f.b.b$1 r0 = new com.kwad.components.ad.f.b.b$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_video_first_frame
            android.view.View r0 = r1.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r1.ca = r0
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            android.view.View r0 = r2.getRootView()
            java.lang.Runnable r1 = r2.cc
            r0.removeCallbacks(r1)
            return
    }
}

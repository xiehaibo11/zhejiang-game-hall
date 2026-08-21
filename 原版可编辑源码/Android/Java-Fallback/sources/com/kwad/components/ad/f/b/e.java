package com.kwad.components.ad.f.b;

public final class e extends com.kwad.components.ad.f.a.a {
    private boolean bH;
    private com.kwad.sdk.api.KsNativeAd.VideoPlayListener mz;


    public e() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.bH = r0
            return
    }

    static com.kwad.sdk.api.KsNativeAd.VideoPlayListener a(com.kwad.components.ad.f.b.e r0) {
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r0 = r0.mz
            return r0
    }

    static boolean a(com.kwad.components.ad.f.b.e r0, boolean r1) {
            r0.bH = r1
            return r1
    }

    static boolean b(com.kwad.components.ad.f.b.e r0) {
            boolean r0 = r0.bH
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.sdk.api.KsNativeAd$VideoPlayListener r0 = r0.mz
            r2.mz = r0
            com.kwad.components.ad.f.b.e$1 r0 = new com.kwad.components.ad.f.b.e$1
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            return
    }
}

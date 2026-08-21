package com.kwad.components.ad.f.a;

public class a extends com.kwad.sdk.mvp.Presenter {
    public com.kwad.components.ad.f.a.b mV;
    public com.kwad.components.core.video.k mVideoPlayStateListener;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void ah() {
            r1 = this;
            super.ah()
            java.lang.Object r0 = r1.Gk()
            com.kwad.components.ad.f.a.b r0 = (com.kwad.components.ad.f.a.b) r0
            r1.mV = r0
            return
    }

    @Override
    public void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.f.a.b r0 = r2.mV
            com.kwad.components.ad.f.c.a r0 = r0.mW
            com.kwad.components.core.video.k r1 = r2.mVideoPlayStateListener
            r0.b(r1)
            return
    }
}

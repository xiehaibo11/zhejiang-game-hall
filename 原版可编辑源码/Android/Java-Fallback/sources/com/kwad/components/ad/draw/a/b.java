package com.kwad.components.ad.draw.a;

public final class b extends com.kwad.sdk.mvp.a {
    public com.kwad.sdk.api.KsDrawAd.AdInteractionListener bD;
    public com.kwad.components.ad.draw.c.a bF;
    public com.kwad.components.ad.draw.b.b.a bX;
    public com.kwad.components.ad.k.b bY;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void release() {
            r1 = this;
            com.kwad.components.core.e.d.c r0 = r1.mApkDownloadHelper
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            com.kwad.components.ad.draw.c.a r0 = r1.bF
            r0.release()
            return
    }
}

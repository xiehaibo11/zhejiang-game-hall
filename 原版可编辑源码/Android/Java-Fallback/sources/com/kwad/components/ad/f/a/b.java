package com.kwad.components.ad.f.a;

public final class b extends com.kwad.sdk.mvp.a {
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public com.kwad.components.ad.f.d.a mE;
    public com.kwad.sdk.core.view.AdBasePvFrameLayout mQ;
    public com.kwad.components.ad.f.c.a mW;
    public com.kwad.sdk.api.KsNativeAd.VideoPlayListener mz;

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
            com.kwad.components.ad.f.c.a r0 = r1.mW
            r0.release()
            return
    }
}

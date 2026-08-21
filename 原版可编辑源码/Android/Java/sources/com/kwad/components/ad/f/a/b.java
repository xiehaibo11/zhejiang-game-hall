package com.kwad.components.ad.f.a;

import com.kwad.components.ad.f.d;
import com.kwad.components.core.e.d.c;
import com.kwad.sdk.api.KsNativeAd;
import com.kwad.sdk.core.view.AdBasePvFrameLayout;

public final class b extends com.kwad.sdk.mvp.a {
    public c mApkDownloadHelper;
    public d.a mE;
    public AdBasePvFrameLayout mQ;
    public com.kwad.components.ad.f.c.a mW;
    public KsNativeAd.VideoPlayListener mz;

    @Override
    public final void release() {
        c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.clear();
        }
        this.mW.release();
    }
}

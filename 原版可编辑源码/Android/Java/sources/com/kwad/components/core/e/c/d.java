package com.kwad.components.core.e.c;

import com.kwad.components.core.e.c.b;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;

public final class d extends com.kwad.sdk.mvp.a {
    public b Jp;
    public b.b Jq;
    public AdTemplate mAdTemplate;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public AdBaseFrameLayout mRootContainer;

    @Override
    public final void release() {
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar != null) {
            cVar.clear();
        }
    }
}

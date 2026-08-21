package com.kwad.components.core.e.c;

public final class d extends com.kwad.sdk.mvp.a {
    public com.kwad.components.core.e.c.b Jp;
    public com.kwad.components.core.e.c.b.b Jq;
    public com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    public com.kwad.components.core.e.d.c mApkDownloadHelper;
    public com.kwad.sdk.core.view.AdBaseFrameLayout mRootContainer;

    public d() {
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
            return
    }
}

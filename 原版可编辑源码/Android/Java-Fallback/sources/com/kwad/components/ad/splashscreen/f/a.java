package com.kwad.components.ad.splashscreen.f;

public abstract class a extends com.kwad.sdk.core.download.a.a {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private android.content.Context mContext;

    public a(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            r0 = this;
            r0.<init>()
            r0.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            r0.mAdInfo = r2
            r0.mContext = r1
            return
    }

    private void ab(int r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.b.dd(r0)
            if (r0 == 0) goto L11
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            java.lang.String r3 = com.kwad.components.ad.splashscreen.d.a(r0, r1, r3)
            goto L26
        L11:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            boolean r0 = com.kwad.sdk.core.response.b.b.dj(r0)
            if (r0 == 0) goto L20
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            java.lang.String r3 = com.kwad.components.ad.splashscreen.d.c(r0, r3)
            goto L26
        L20:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            java.lang.String r3 = com.kwad.components.ad.splashscreen.d.a(r0, r3)
        L26:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2f
            r2.aa(r3)
        L2f:
            return
    }

    protected abstract void aa(java.lang.String r1);

    @Override
    public void onDownloadFailed() {
            r1 = this;
            r0 = 7
            r1.ab(r0)
            return
    }

    @Override
    public void onDownloadFinished() {
            r1 = this;
            r0 = 8
            r1.ab(r0)
            return
    }

    @Override
    public void onIdle() {
            r1 = this;
            r0 = 0
            r1.ab(r0)
            return
    }

    @Override
    public void onInstalled() {
            r1 = this;
            r0 = 12
            r1.ab(r0)
            return
    }

    @Override
    public final void onPaused(int r1) {
            r0 = this;
            r1 = 4
            r0.ab(r1)
            return
    }

    @Override
    public void onProgressUpdate(int r1) {
            r0 = this;
            r1 = 2
            r0.ab(r1)
            return
    }

    public final void setAdTemplate(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.mAdTemplate = r1
            return
    }
}

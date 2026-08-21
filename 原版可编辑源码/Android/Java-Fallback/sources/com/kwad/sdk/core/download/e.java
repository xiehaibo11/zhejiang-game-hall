package com.kwad.sdk.core.download;

public class e implements com.kwad.sdk.core.download.d {
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;

    public e(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.<init>()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            r0.mAdInfo = r1
            return
    }

    @Override
    public final void a(java.lang.String r1, int r2, int r3, int r4) {
            r0 = this;
            return
    }

    @Override
    public void a(java.lang.String r1, int r2, com.kwad.sdk.core.download.f r3) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r1, int r2, java.lang.String r3, com.kwad.sdk.core.download.f r4) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.download.f r2) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r1, java.lang.String r2, com.kwad.sdk.core.download.f r3) {
            r0 = this;
            return
    }

    @Override
    public final void am(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public final void b(java.lang.String r1, com.kwad.sdk.core.download.f r2) {
            r0 = this;
            return
    }

    @Override
    public final void c(java.lang.String r1, com.kwad.sdk.core.download.f r2) {
            r0 = this;
            return
    }

    @Override
    public final void d(java.lang.String r1, com.kwad.sdk.core.download.f r2) {
            r0 = this;
            return
    }

    @Override
    public final void e(java.lang.String r1, com.kwad.sdk.core.download.f r2) {
            r0 = this;
            return
    }

    @Override
    public final java.lang.String nx() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            return r0
    }

    @Override
    public final java.lang.String ny() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.appPackageName
            return r0
    }
}

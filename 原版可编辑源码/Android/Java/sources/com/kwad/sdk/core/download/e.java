package com.kwad.sdk.core.download;

import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public class e implements d {
    private AdInfo mAdInfo;

    public e(AdTemplate adTemplate) {
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
    }

    @Override
    public final void a(String str, int i, int i2, int i3) {
    }

    @Override
    public void a(String str, int i, f fVar) {
    }

    @Override
    public final void a(String str, int i, String str2, f fVar) {
    }

    @Override
    public final void a(String str, f fVar) {
    }

    @Override
    public final void a(String str, String str2, f fVar) {
    }

    @Override
    public final void am(String str) {
    }

    @Override
    public final void b(String str, f fVar) {
    }

    @Override
    public final void c(String str, f fVar) {
    }

    @Override
    public final void d(String str, f fVar) {
    }

    @Override
    public final void e(String str, f fVar) {
    }

    @Override
    public final String nx() {
        return this.mAdInfo.downloadId;
    }

    @Override
    public final String ny() {
        return this.mAdInfo.adBaseInfo.appPackageName;
    }
}

package com.kwad.components.ad.splashscreen.f;

import android.content.Context;
import android.text.TextUtils;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;

public abstract class a extends com.kwad.sdk.core.download.a.a {
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private Context mContext;

    public a(Context context, AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        this.mAdInfo = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mContext = context;
    }

    private void ab(int i) {
        String strA = com.kwad.sdk.core.response.b.b.dd(this.mAdInfo) ? com.kwad.components.ad.splashscreen.d.a(this.mAdTemplate, this.mAdInfo, i) : com.kwad.sdk.core.response.b.b.dj(this.mAdInfo) ? com.kwad.components.ad.splashscreen.d.c(this.mAdInfo, i) : com.kwad.components.ad.splashscreen.d.a(this.mAdInfo, i);
        if (TextUtils.isEmpty(strA)) {
            return;
        }
        aa(strA);
    }

    protected abstract void aa(String str);

    @Override
    public void onDownloadFailed() {
        ab(7);
    }

    @Override
    public void onDownloadFinished() {
        ab(8);
    }

    @Override
    public void onIdle() {
        ab(0);
    }

    @Override
    public void onInstalled() {
        ab(12);
    }

    @Override
    public final void onPaused(int i) {
        ab(4);
    }

    @Override
    public void onProgressUpdate(int i) {
        ab(2);
    }

    public final void setAdTemplate(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
    }
}

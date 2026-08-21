package com.kwad.components.core.widget;

import android.content.Context;
import android.util.AttributeSet;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.core.response.model.AdTemplate;

public class KsConvertButton extends KSCornerButton implements KsAppDownloadListener {
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;

    public KsConvertButton(Context context) {
        super(context);
    }

    public KsConvertButton(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public KsConvertButton(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public KsConvertButton(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
    }

    private void aT(String str) {
        if (str != null) {
            setText(str);
        }
    }

    private String getAdActionDesc() {
        AdTemplate adTemplate = this.mAdTemplate;
        if (adTemplate != null) {
            return com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        }
        return null;
    }

    public final void a(com.kwad.components.core.e.d.c cVar, AdTemplate adTemplate) {
        this.mApkDownloadHelper = cVar;
        this.mAdTemplate = adTemplate;
        if (cVar != null) {
            cVar.b(this);
        }
        aT(getAdActionDesc());
    }

    @Override
    public void onDownloadFailed() {
        AdTemplate adTemplate = this.mAdTemplate;
        aT(adTemplate != null ? com.kwad.sdk.core.response.b.a.aw(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即下载");
    }

    @Override
    public void onDownloadFinished() {
    }

    @Override
    public void onDownloadStarted() {
    }

    @Override
    public void onIdle() {
        aT(getAdActionDesc());
    }

    @Override
    public void onInstalled() {
        AdTemplate adTemplate = this.mAdTemplate;
        aT(adTemplate != null ? com.kwad.sdk.core.response.b.a.U(com.kwad.sdk.core.response.b.d.cg(adTemplate)) : "立即打开");
    }

    @Override
    public void onProgressUpdate(int i) {
        aT("下载中..." + i + "%");
    }
}

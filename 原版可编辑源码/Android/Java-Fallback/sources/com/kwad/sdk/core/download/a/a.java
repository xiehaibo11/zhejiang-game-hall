package com.kwad.sdk.core.download.a;

public abstract class a implements com.kwad.sdk.api.KsAppDownloadListener {
    public java.lang.String downloadId;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public a(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.downloadId = r1
            return
    }

    public final java.lang.String nx() {
            r1 = this;
            java.lang.String r0 = r1.downloadId
            return r0
    }

    @Override
    public void onDownloadStarted() {
            r0 = this;
            return
    }

    public void onPaused(int r1) {
            r0 = this;
            return
    }
}

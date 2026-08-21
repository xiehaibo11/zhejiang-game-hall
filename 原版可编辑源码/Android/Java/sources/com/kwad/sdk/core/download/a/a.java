package com.kwad.sdk.core.download.a;

import com.kwad.sdk.api.KsAppDownloadListener;

public abstract class a implements KsAppDownloadListener {
    public String downloadId;

    public a() {
    }

    public a(String str) {
        this.downloadId = str;
    }

    public final String nx() {
        return this.downloadId;
    }

    @Override
    public void onDownloadStarted() {
    }

    public void onPaused(int i) {
    }
}

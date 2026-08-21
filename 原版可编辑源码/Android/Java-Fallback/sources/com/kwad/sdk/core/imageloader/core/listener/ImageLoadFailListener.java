package com.kwad.sdk.core.imageloader.core.listener;

public abstract class ImageLoadFailListener implements com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener {
    public ImageLoadFailListener() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean onDecode(java.lang.String r1, java.io.InputStream r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final void onLoadingCancelled(java.lang.String r1, android.view.View r2) {
            r0 = this;
            return
    }

    @Override
    public final void onLoadingComplete(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
            r0 = this;
            return
    }

    @Override
    public final void onLoadingStarted(java.lang.String r1, android.view.View r2) {
            r0 = this;
            return
    }
}

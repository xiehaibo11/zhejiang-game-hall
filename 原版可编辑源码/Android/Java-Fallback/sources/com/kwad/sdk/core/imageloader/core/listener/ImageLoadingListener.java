package com.kwad.sdk.core.imageloader.core.listener;

public interface ImageLoadingListener {
    boolean onDecode(java.lang.String r1, java.io.InputStream r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3);

    void onLoadingCancelled(java.lang.String r1, android.view.View r2);

    void onLoadingComplete(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3);

    void onLoadingFailed(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.assist.FailReason r3);

    void onLoadingStarted(java.lang.String r1, android.view.View r2);
}

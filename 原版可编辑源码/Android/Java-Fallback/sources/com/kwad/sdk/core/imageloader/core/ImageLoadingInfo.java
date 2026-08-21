package com.kwad.sdk.core.imageloader.core;

final class ImageLoadingInfo {
    final com.kwad.sdk.core.imageloader.core.imageaware.ImageAware imageAware;
    final com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener listener;
    final java.util.concurrent.locks.ReentrantLock loadFromUriLock;
    final java.lang.String memoryCacheKey;
    final com.kwad.sdk.core.imageloader.core.DisplayImageOptions options;
    final com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener progressListener;
    final com.kwad.sdk.core.imageloader.core.assist.ImageSize targetSize;
    final java.lang.String uri;

    public ImageLoadingInfo(java.lang.String r1, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2, com.kwad.sdk.core.imageloader.core.assist.ImageSize r3, java.lang.String r4, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r5, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r6, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r7, java.util.concurrent.locks.ReentrantLock r8) {
            r0 = this;
            r0.<init>()
            r0.uri = r1
            r0.imageAware = r2
            r0.targetSize = r3
            r0.options = r5
            r0.listener = r6
            r0.progressListener = r7
            r0.loadFromUriLock = r8
            r0.memoryCacheKey = r4
            return
    }
}

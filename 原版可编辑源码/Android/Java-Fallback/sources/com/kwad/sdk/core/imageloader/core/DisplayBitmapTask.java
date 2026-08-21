package com.kwad.sdk.core.imageloader.core;

final class DisplayBitmapTask implements java.lang.Runnable {
    private static final java.lang.String LOG_DISPLAY_IMAGE_IN_IMAGEAWARE = "Display image in ImageAware (loaded from %1$s) [%2$s]";
    private static final java.lang.String LOG_TASK_CANCELLED_IMAGEAWARE_COLLECTED = "ImageAware was collected by GC. Task is cancelled. [%s]";
    private static final java.lang.String LOG_TASK_CANCELLED_IMAGEAWARE_REUSED = "ImageAware is reused for another image. Task is cancelled. [%s]";
    private final com.kwad.sdk.core.imageloader.core.decode.DecodedResult decodedResult;
    private final com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer displayer;
    private final com.kwad.sdk.core.imageloader.core.ImageLoaderEngine engine;
    private final com.kwad.sdk.core.imageloader.core.imageaware.ImageAware imageAware;
    private final java.lang.String imageUri;
    private final com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener listener;
    private final com.kwad.sdk.core.imageloader.core.assist.LoadedFrom loadedFrom;
    private final java.lang.String memoryCacheKey;

    public DisplayBitmapTask(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1, com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r2, com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3, com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r4) {
            r0 = this;
            r0.<init>()
            r0.decodedResult = r1
            java.lang.String r1 = r2.uri
            r0.imageUri = r1
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r1 = r2.imageAware
            r0.imageAware = r1
            java.lang.String r1 = r2.memoryCacheKey
            r0.memoryCacheKey = r1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r1 = r2.options
            com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r1 = r1.getDisplayer()
            r0.displayer = r1
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r1 = r2.listener
            r0.listener = r1
            r0.engine = r3
            r0.loadedFrom = r4
            return
    }

    private boolean isViewWasReused() {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r2.engine
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r1 = r2.imageAware
            java.lang.String r0 = r0.getLoadingUriForView(r1)
            java.lang.String r1 = r2.memoryCacheKey
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L12
            r0 = 1
            return r0
        L12:
            r0 = 0
            return r0
    }

    @Override
    public final void run() {
            r4 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r0 = r4.imageAware
            boolean r0 = r0.isCollected()
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L23
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r2 = r4.memoryCacheKey
            r0[r1] = r2
            java.lang.String r1 = "ImageAware was collected by GC. Task is cancelled. [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r0)
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r4.listener
            java.lang.String r1 = r4.imageUri
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2 = r4.imageAware
            android.view.View r2 = r2.getWrappedView()
            r0.onLoadingCancelled(r1, r2)
            return
        L23:
            boolean r0 = r4.isViewWasReused()
            if (r0 == 0) goto L42
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r2 = r4.memoryCacheKey
            r0[r1] = r2
            java.lang.String r1 = "ImageAware is reused for another image. Task is cancelled. [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r0)
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r4.listener
            java.lang.String r1 = r4.imageUri
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2 = r4.imageAware
            android.view.View r2 = r2.getWrappedView()
            r0.onLoadingCancelled(r1, r2)
            return
        L42:
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r3 = r4.loadedFrom
            r0[r1] = r3
            java.lang.String r1 = r4.memoryCacheKey
            r0[r2] = r1
            java.lang.String r1 = "Display image in ImageAware (loaded from %1$s) [%2$s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r0)
            com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r0 = r4.displayer
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1 = r4.decodedResult
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2 = r4.imageAware
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r3 = r4.loadedFrom
            r0.display(r1, r2, r3)
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r4.engine
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r1 = r4.imageAware
            r0.cancelDisplayTaskFor(r1)
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r4.listener
            java.lang.String r1 = r4.imageUri
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2 = r4.imageAware
            android.view.View r2 = r2.getWrappedView()
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3 = r4.decodedResult
            r0.onLoadingComplete(r1, r2, r3)
            return
    }
}

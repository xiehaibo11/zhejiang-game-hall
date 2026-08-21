package com.kwad.sdk.core.imageloader.core;

final class ProcessAndDisplayImageTask implements java.lang.Runnable {
    private static final java.lang.String LOG_POSTPROCESS_IMAGE = "PostProcess image before displaying [%s]";
    private final com.kwad.sdk.core.imageloader.core.decode.DecodedResult decodedResult;
    private final com.kwad.sdk.core.imageloader.core.ImageLoaderEngine engine;
    private final android.os.Handler handler;
    private final com.kwad.sdk.core.imageloader.core.ImageLoadingInfo imageLoadingInfo;

    public ProcessAndDisplayImageTask(com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r1, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2, com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r3, android.os.Handler r4) {
            r0 = this;
            r0.<init>()
            r0.engine = r1
            r0.imageLoadingInfo = r3
            r0.handler = r4
            r0.decodedResult = r2
            return
    }

    @Override
    public final void run() {
            r5 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r1 = r5.imageLoadingInfo
            java.lang.String r1 = r1.memoryCacheKey
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "PostProcess image before displaying [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r0)
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r0 = r5.imageLoadingInfo
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = r0.options
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.getPostProcessor()
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1 = r5.decodedResult
            android.graphics.Bitmap r2 = r1.mBitmap
            android.graphics.Bitmap r0 = r0.process(r2)
            r1.mBitmap = r0
            com.kwad.sdk.core.imageloader.core.DisplayBitmapTask r0 = new com.kwad.sdk.core.imageloader.core.DisplayBitmapTask
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1 = r5.decodedResult
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r2 = r5.imageLoadingInfo
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3 = r5.engine
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r4 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.MEMORY_CACHE
            r0.<init>(r1, r2, r3, r4)
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r1 = r5.imageLoadingInfo
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r1 = r1.options
            boolean r1 = r1.isSyncLoading()
            android.os.Handler r2 = r5.handler
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3 = r5.engine
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.runTask(r0, r1, r2, r3)
            return
    }
}

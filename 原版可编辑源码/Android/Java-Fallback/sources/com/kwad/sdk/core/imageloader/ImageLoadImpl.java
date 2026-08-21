package com.kwad.sdk.core.imageloader;

public class ImageLoadImpl implements com.kwad.sdk.core.imageloader.IImageLoader {


    public ImageLoadImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    private com.kwad.sdk.core.imageloader.core.DisplayImageOptions adapter(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r5) {
            r4 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            android.content.res.Resources r1 = r0.getResources()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r2.<init>()
            android.graphics.drawable.Drawable r3 = r5.getImageOnLoading(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.showImageOnLoading(r3)
            android.graphics.drawable.Drawable r3 = r5.getImageForEmptyUri(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.showImageForEmptyUri(r3)
            android.graphics.drawable.Drawable r1 = r5.getImageOnFail(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r1 = r2.showImageOnFail(r1)
            r2 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r1 = r1.cacheInMemory(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r1 = r1.cacheOnDisc(r2)
            android.graphics.Bitmap$Config r2 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r1 = r1.bitmapConfig(r2)
            float r2 = r5.getStrokeWidth()
            r3 = 0
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 <= 0) goto L5f
            com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer r2 = new com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer
            int r3 = r5.getStrokeColor()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            float r5 = r5.getStrokeWidth()
            int r5 = com.kwad.sdk.d.a.a.a(r0, r5)
            float r5 = (float) r5
            r2.<init>(r3, r5)
        L5b:
            r1.displayer(r2)
            goto L83
        L5f:
            boolean r2 = r5.isCircle()
            if (r2 == 0) goto L6e
            com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer r5 = new com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer
            r5.<init>()
            r1.displayer(r5)
            goto L83
        L6e:
            int r2 = r5.getCornerRound()
            if (r2 <= 0) goto L83
            com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer r2 = new com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer
            int r5 = r5.getCornerRound()
            float r5 = (float) r5
            int r5 = com.kwad.sdk.d.a.a.a(r0, r5)
            r2.<init>(r5)
            goto L5b
        L83:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r5 = r1.build()
            return r5
    }

    private java.lang.String parseModel(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.String
            if (r0 == 0) goto L7
            java.lang.String r2 = (java.lang.String) r2
            return r2
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unsupport object except String!"
            r2.<init>(r0)
            throw r2
    }

    public void checkInit() {
            r3 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            boolean r0 = r0.isInited()
            if (r0 == 0) goto Lb
            return
        Lb:
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r1 = new com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder
            android.content.Context r2 = r0.getApplicationContext()
            r1.<init>(r2)
            java.util.concurrent.ExecutorService r2 = com.kwad.sdk.core.threads.GlobalThreadPools.CR()
            r1.taskExecutor(r2)
            java.util.concurrent.ExecutorService r2 = com.kwad.sdk.core.threads.GlobalThreadPools.CS()
            r1.taskExecutorForCachedImages(r2)
            java.util.concurrent.ExecutorService r2 = com.kwad.sdk.core.threads.GlobalThreadPools.CT()
            r1.setTaskDistributor(r2)
            r1.denyCacheImageMultipleSizesInMemory()
            com.kwad.sdk.core.imageloader.cache.disc.naming.Md5FileNameGenerator r2 = new com.kwad.sdk.core.imageloader.cache.disc.naming.Md5FileNameGenerator
            r2.<init>()
            r1.diskCacheFileNameGenerator(r2)
            r2 = 20971520(0x1400000, float:3.526483E-38)
            r1.diskCacheSize(r2)
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r2 = com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.LIFO
            r1.tasksProcessingOrder(r2)
            java.io.File r2 = com.kwad.sdk.utils.av.cJ(r0)
            java.lang.String r2 = r2.getPath()
            r1.cacheParentDir(r2)
            com.kwad.sdk.core.imageloader.ImageLoadImpl$1 r2 = new com.kwad.sdk.core.imageloader.ImageLoadImpl$1
            r2.<init>(r3, r0)
            r1.imageDownloader(r2)
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r1 = r1.build()
            r0.init(r1)
            return
    }

    @Override
    public void clearMemory(android.content.Context r1) {
            r0 = this;
            r0.checkInit()
            com.kwad.sdk.core.imageloader.core.ImageLoader r1 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r1.clearMemoryCache()
            return
    }

    @Override
    public void load(android.content.Context r2, android.widget.ImageView r3, java.lang.Object r4, int r5, int r6) {
            r1 = this;
            r1.checkInit()
            java.lang.String r2 = r1.parseModel(r4)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r4.<init>()
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = r4.bitmapConfig(r0)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = r4.cacheOnDisk(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = r4.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = r4.showImageOnLoading(r6)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = r4.showImageForEmptyUri(r5)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r4 = r4.showImageOnFail(r5)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r4 = r4.build()
            com.kwad.sdk.core.imageloader.core.ImageLoader r5 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r5.displayImage(r2, r3, r4)
            return
    }

    @Override
    public void load(android.content.Context r1, java.lang.String r2, android.widget.ImageView r3, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5) {
            r0 = this;
            r0.checkInit()
            com.kwad.sdk.core.imageloader.core.ImageLoader r1 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r4 = r0.adapter(r4)
            r1.displayImage(r2, r3, r4, r5)
            return
    }

    @Override
    public void load(android.content.Context r1, java.lang.String r2, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r3, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4) {
            r0 = this;
            r0.checkInit()
            com.kwad.sdk.core.imageloader.core.ImageLoader r1 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r0.adapter(r3)
            r1.loadImage(r2, r3, r4)
            return
    }

    @Override
    public void load(android.widget.ImageView r2, java.lang.Object r3) {
            r1 = this;
            r1.checkInit()
            java.lang.String r3 = r1.parseModel(r3)
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r0.displayImage(r3, r2)
            return
    }

    @Override
    public void load(android.widget.ImageView r2, java.lang.Object r3, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4) {
            r1 = this;
            r1.checkInit()
            java.lang.String r3 = r1.parseModel(r3)
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r0.displayImage(r3, r2, r4)
            return
    }

    @Override
    public void load(android.widget.ImageView r4, java.lang.Object r5, com.kwad.sdk.core.response.model.AdTemplate r6) {
            r3 = this;
            r3.checkInit()
            java.lang.String r5 = r3.parseModel(r5)
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r1 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r2 = 0
            r1.<init>(r6, r2)
            r0.displayImage(r5, r4, r1)
            return
    }

    @Override
    public void load(com.kwad.sdk.api.core.fragment.KsFragment r1, android.content.Context r2, java.lang.String r3, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r5) {
            r0 = this;
            r0.checkInit()
            com.kwad.sdk.core.imageloader.core.ImageLoader r1 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r0.adapter(r4)
            r1.loadImage(r3, r2, r5)
            return
    }

    @Override
    public void load(com.kwad.sdk.api.core.fragment.KsFragment r2, java.lang.String r3, android.widget.ImageView r4, android.graphics.drawable.Drawable r5, android.graphics.drawable.Drawable r6) {
            r1 = this;
            r1.checkInit()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r2.<init>()
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.bitmapConfig(r0)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.cacheOnDisk(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.showImageOnLoading(r5)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.showImageOnFail(r6)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r2.build()
            com.kwad.sdk.core.imageloader.core.ImageLoader r5 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r5.displayImage(r3, r4, r2)
            return
    }

    @Override
    public void load(com.kwad.sdk.api.core.fragment.KsFragment r2, java.lang.String r3, android.widget.ImageView r4, android.graphics.drawable.Drawable r5, android.graphics.drawable.Drawable r6, float r7) {
            r1 = this;
            r1.checkInit()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r2.<init>()
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.bitmapConfig(r0)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.cacheOnDisk(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.showImageOnLoading(r5)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.showImageOnFail(r6)
            com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer r5 = new com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer
            android.content.Context r6 = r4.getContext()
            int r6 = com.kwad.sdk.d.a.a.a(r6, r7)
            r5.<init>(r6)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r2 = r2.displayer(r5)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r2.build()
            com.kwad.sdk.core.imageloader.core.ImageLoader r5 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r5.displayImage(r3, r4, r2)
            return
    }

    @Override
    public void pause() {
            r1 = this;
            r1.checkInit()
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r0.pause()
            return
    }

    @Override
    public void resume() {
            r1 = this;
            r1.checkInit()
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.getInstance()
            r0.resume()
            return
    }
}

package com.bumptech.glide;

public class Glide {
    private static final java.lang.String TAG = "Glide";
    private static volatile com.bumptech.glide.Glide glide;
    private final com.bumptech.glide.load.resource.bitmap.CenterCrop bitmapCenterCrop;
    private final com.bumptech.glide.load.resource.bitmap.FitCenter bitmapFitCenter;
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private final com.bumptech.glide.load.engine.prefill.BitmapPreFiller bitmapPreFiller;
    private final com.bumptech.glide.provider.DataLoadProviderRegistry dataLoadProviderRegistry;
    private final com.bumptech.glide.load.DecodeFormat decodeFormat;
    private final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation drawableCenterCrop;
    private final com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation drawableFitCenter;
    private final com.bumptech.glide.load.engine.Engine engine;
    private final com.bumptech.glide.request.target.ImageViewTargetFactory imageViewTargetFactory;
    private final com.bumptech.glide.load.model.GenericLoaderFactory loaderFactory;
    private final android.os.Handler mainHandler;
    private final com.bumptech.glide.load.engine.cache.MemoryCache memoryCache;
    private final com.bumptech.glide.load.resource.transcode.TranscoderRegistry transcoderRegistry;

    private static class ClearTarget extends com.bumptech.glide.request.target.ViewTarget<android.view.View, java.lang.Object> {
        public ClearTarget(android.view.View r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onLoadCleared(android.graphics.drawable.Drawable r1) {
                r0 = this;
                return
        }

        @Override
        public void onLoadFailed(java.lang.Exception r1, android.graphics.drawable.Drawable r2) {
                r0 = this;
                return
        }

        @Override
        public void onLoadStarted(android.graphics.drawable.Drawable r1) {
                r0 = this;
                return
        }

        @Override
        public void onResourceReady(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation<? super java.lang.Object> r2) {
                r0 = this;
                return
        }
    }

    Glide(com.bumptech.glide.load.engine.Engine r4, com.bumptech.glide.load.engine.cache.MemoryCache r5, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r6, android.content.Context r7, com.bumptech.glide.load.DecodeFormat r8) {
            r3 = this;
            r3.<init>()
            com.bumptech.glide.request.target.ImageViewTargetFactory r0 = new com.bumptech.glide.request.target.ImageViewTargetFactory
            r0.<init>()
            r3.imageViewTargetFactory = r0
            com.bumptech.glide.load.resource.transcode.TranscoderRegistry r0 = new com.bumptech.glide.load.resource.transcode.TranscoderRegistry
            r0.<init>()
            r3.transcoderRegistry = r0
            r3.engine = r4
            r3.bitmapPool = r6
            r3.memoryCache = r5
            r3.decodeFormat = r8
            com.bumptech.glide.load.model.GenericLoaderFactory r4 = new com.bumptech.glide.load.model.GenericLoaderFactory
            r4.<init>(r7)
            r3.loaderFactory = r4
            android.os.Handler r4 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            r4.<init>(r0)
            r3.mainHandler = r4
            com.bumptech.glide.load.engine.prefill.BitmapPreFiller r4 = new com.bumptech.glide.load.engine.prefill.BitmapPreFiller
            r4.<init>(r5, r6, r8)
            r3.bitmapPreFiller = r4
            com.bumptech.glide.provider.DataLoadProviderRegistry r4 = new com.bumptech.glide.provider.DataLoadProviderRegistry
            r4.<init>()
            r3.dataLoadProviderRegistry = r4
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDataLoadProvider r4 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDataLoadProvider
            r4.<init>(r6, r8)
            com.bumptech.glide.provider.DataLoadProviderRegistry r5 = r3.dataLoadProviderRegistry
            java.lang.Class<java.io.InputStream> r0 = java.io.InputStream.class
            java.lang.Class<android.graphics.Bitmap> r1 = android.graphics.Bitmap.class
            r5.register(r0, r1, r4)
            com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDataLoadProvider r5 = new com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDataLoadProvider
            r5.<init>(r6, r8)
            com.bumptech.glide.provider.DataLoadProviderRegistry r8 = r3.dataLoadProviderRegistry
            java.lang.Class<android.os.ParcelFileDescriptor> r0 = android.os.ParcelFileDescriptor.class
            java.lang.Class<android.graphics.Bitmap> r1 = android.graphics.Bitmap.class
            r8.register(r0, r1, r5)
            com.bumptech.glide.load.resource.bitmap.ImageVideoDataLoadProvider r8 = new com.bumptech.glide.load.resource.bitmap.ImageVideoDataLoadProvider
            r8.<init>(r4, r5)
            com.bumptech.glide.provider.DataLoadProviderRegistry r4 = r3.dataLoadProviderRegistry
            java.lang.Class<com.bumptech.glide.load.model.ImageVideoWrapper> r5 = com.bumptech.glide.load.model.ImageVideoWrapper.class
            java.lang.Class<android.graphics.Bitmap> r0 = android.graphics.Bitmap.class
            r4.register(r5, r0, r8)
            com.bumptech.glide.load.resource.gif.GifDrawableLoadProvider r4 = new com.bumptech.glide.load.resource.gif.GifDrawableLoadProvider
            r4.<init>(r7, r6)
            com.bumptech.glide.provider.DataLoadProviderRegistry r5 = r3.dataLoadProviderRegistry
            java.lang.Class<java.io.InputStream> r0 = java.io.InputStream.class
            java.lang.Class<com.bumptech.glide.load.resource.gif.GifDrawable> r1 = com.bumptech.glide.load.resource.gif.GifDrawable.class
            r5.register(r0, r1, r4)
            com.bumptech.glide.provider.DataLoadProviderRegistry r5 = r3.dataLoadProviderRegistry
            java.lang.Class<com.bumptech.glide.load.model.ImageVideoWrapper> r0 = com.bumptech.glide.load.model.ImageVideoWrapper.class
            java.lang.Class<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1 = com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper.class
            com.bumptech.glide.load.resource.gifbitmap.ImageVideoGifDrawableLoadProvider r2 = new com.bumptech.glide.load.resource.gifbitmap.ImageVideoGifDrawableLoadProvider
            r2.<init>(r8, r4, r6)
            r5.register(r0, r1, r2)
            com.bumptech.glide.provider.DataLoadProviderRegistry r4 = r3.dataLoadProviderRegistry
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            java.lang.Class<java.io.File> r8 = java.io.File.class
            com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider r0 = new com.bumptech.glide.load.resource.file.StreamFileDataLoadProvider
            r0.<init>()
            r4.register(r5, r8, r0)
            java.lang.Class<java.io.File> r4 = java.io.File.class
            java.lang.Class<android.os.ParcelFileDescriptor> r5 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.file_descriptor.FileDescriptorFileLoader$Factory r8 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorFileLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<java.io.File> r4 = java.io.File.class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamFileLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamFileLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class r4 = java.lang.Integer.TYPE
            java.lang.Class<android.os.ParcelFileDescriptor> r5 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.file_descriptor.FileDescriptorResourceLoader$Factory r8 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorResourceLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class r4 = java.lang.Integer.TYPE
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamResourceLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamResourceLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<java.lang.Integer> r4 = java.lang.Integer.class
            java.lang.Class<android.os.ParcelFileDescriptor> r5 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.file_descriptor.FileDescriptorResourceLoader$Factory r8 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorResourceLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<java.lang.Integer> r4 = java.lang.Integer.class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamResourceLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamResourceLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            java.lang.Class<android.os.ParcelFileDescriptor> r5 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.file_descriptor.FileDescriptorStringLoader$Factory r8 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorStringLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamStringLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamStringLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<android.net.Uri> r4 = android.net.Uri.class
            java.lang.Class<android.os.ParcelFileDescriptor> r5 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.file_descriptor.FileDescriptorUriLoader$Factory r8 = new com.bumptech.glide.load.model.file_descriptor.FileDescriptorUriLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<android.net.Uri> r4 = android.net.Uri.class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamUriLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamUriLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<java.net.URL> r4 = java.net.URL.class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamUrlLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamUrlLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<com.bumptech.glide.load.model.GlideUrl> r4 = com.bumptech.glide.load.model.GlideUrl.class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.HttpUrlGlideUrlLoader$Factory r8 = new com.bumptech.glide.load.model.stream.HttpUrlGlideUrlLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            java.lang.Class<byte[]> r4 = byte[].class
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            com.bumptech.glide.load.model.stream.StreamByteArrayLoader$Factory r8 = new com.bumptech.glide.load.model.stream.StreamByteArrayLoader$Factory
            r8.<init>()
            r3.register(r4, r5, r8)
            com.bumptech.glide.load.resource.transcode.TranscoderRegistry r4 = r3.transcoderRegistry
            java.lang.Class<android.graphics.Bitmap> r5 = android.graphics.Bitmap.class
            java.lang.Class<com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable> r8 = com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.class
            com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder r0 = new com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder
            android.content.res.Resources r1 = r7.getResources()
            r0.<init>(r1, r6)
            r4.register(r5, r8, r0)
            com.bumptech.glide.load.resource.transcode.TranscoderRegistry r4 = r3.transcoderRegistry
            java.lang.Class<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r5 = com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper.class
            java.lang.Class<com.bumptech.glide.load.resource.drawable.GlideDrawable> r8 = com.bumptech.glide.load.resource.drawable.GlideDrawable.class
            com.bumptech.glide.load.resource.transcode.GifBitmapWrapperDrawableTranscoder r0 = new com.bumptech.glide.load.resource.transcode.GifBitmapWrapperDrawableTranscoder
            com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder r1 = new com.bumptech.glide.load.resource.transcode.GlideBitmapDrawableTranscoder
            android.content.res.Resources r7 = r7.getResources()
            r1.<init>(r7, r6)
            r0.<init>(r1)
            r4.register(r5, r8, r0)
            com.bumptech.glide.load.resource.bitmap.CenterCrop r4 = new com.bumptech.glide.load.resource.bitmap.CenterCrop
            r4.<init>(r6)
            r3.bitmapCenterCrop = r4
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r4 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation
            com.bumptech.glide.load.resource.bitmap.CenterCrop r5 = r3.bitmapCenterCrop
            r4.<init>(r6, r5)
            r3.drawableCenterCrop = r4
            com.bumptech.glide.load.resource.bitmap.FitCenter r4 = new com.bumptech.glide.load.resource.bitmap.FitCenter
            r4.<init>(r6)
            r3.bitmapFitCenter = r4
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r4 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation
            com.bumptech.glide.load.resource.bitmap.FitCenter r5 = r3.bitmapFitCenter
            r4.<init>(r6, r5)
            r3.drawableFitCenter = r4
            return
    }

    public static <T> com.bumptech.glide.load.model.ModelLoader<T, android.os.ParcelFileDescriptor> buildFileDescriptorModelLoader(java.lang.Class<T> r1, android.content.Context r2) {
            java.lang.Class<android.os.ParcelFileDescriptor> r0 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.ModelLoader r1 = buildModelLoader(r1, r0, r2)
            return r1
    }

    public static <T> com.bumptech.glide.load.model.ModelLoader<T, android.os.ParcelFileDescriptor> buildFileDescriptorModelLoader(T r1, android.content.Context r2) {
            java.lang.Class<android.os.ParcelFileDescriptor> r0 = android.os.ParcelFileDescriptor.class
            com.bumptech.glide.load.model.ModelLoader r1 = buildModelLoader(r1, r0, r2)
            return r1
    }

    public static <T, Y> com.bumptech.glide.load.model.ModelLoader<T, Y> buildModelLoader(java.lang.Class<T> r0, java.lang.Class<Y> r1, android.content.Context r2) {
            if (r0 != 0) goto L12
            r0 = 3
            java.lang.String r1 = "Glide"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L10
            java.lang.String r0 = "Unable to load null model, setting placeholder only"
            android.util.Log.d(r1, r0)
        L10:
            r0 = 0
            return r0
        L12:
            com.bumptech.glide.Glide r2 = get(r2)
            com.bumptech.glide.load.model.GenericLoaderFactory r2 = r2.getLoaderFactory()
            com.bumptech.glide.load.model.ModelLoader r0 = r2.buildModelLoader(r0, r1)
            return r0
    }

    public static <T, Y> com.bumptech.glide.load.model.ModelLoader<T, Y> buildModelLoader(T r0, java.lang.Class<Y> r1, android.content.Context r2) {
            if (r0 == 0) goto L7
            java.lang.Class r0 = r0.getClass()
            goto L8
        L7:
            r0 = 0
        L8:
            com.bumptech.glide.load.model.ModelLoader r0 = buildModelLoader(r0, r1, r2)
            return r0
    }

    public static <T> com.bumptech.glide.load.model.ModelLoader<T, java.io.InputStream> buildStreamModelLoader(java.lang.Class<T> r1, android.content.Context r2) {
            java.lang.Class<java.io.InputStream> r0 = java.io.InputStream.class
            com.bumptech.glide.load.model.ModelLoader r1 = buildModelLoader(r1, r0, r2)
            return r1
    }

    public static <T> com.bumptech.glide.load.model.ModelLoader<T, java.io.InputStream> buildStreamModelLoader(T r1, android.content.Context r2) {
            java.lang.Class<java.io.InputStream> r0 = java.io.InputStream.class
            com.bumptech.glide.load.model.ModelLoader r1 = buildModelLoader(r1, r0, r2)
            return r1
    }

    public static void clear(android.view.View r1) {
            com.bumptech.glide.Glide$ClearTarget r0 = new com.bumptech.glide.Glide$ClearTarget
            r0.<init>(r1)
            clear(r0)
            return
    }

    public static void clear(com.bumptech.glide.request.FutureTarget<?> r0) {
            r0.clear()
            return
    }

    public static void clear(com.bumptech.glide.request.target.Target<?> r1) {
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.request.Request r0 = r1.getRequest()
            if (r0 == 0) goto L10
            r0.clear()
            r0 = 0
            r1.setRequest(r0)
        L10:
            return
    }

    public static com.bumptech.glide.Glide get(android.content.Context r5) {
            com.bumptech.glide.Glide r0 = com.bumptech.glide.Glide.glide
            if (r0 != 0) goto L52
            java.lang.Class<com.bumptech.glide.Glide> r0 = com.bumptech.glide.Glide.class
            monitor-enter(r0)
            com.bumptech.glide.Glide r1 = com.bumptech.glide.Glide.glide     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto L4d
            android.content.Context r5 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L4f
            com.bumptech.glide.module.ManifestParser r1 = new com.bumptech.glide.module.ManifestParser     // Catch: java.lang.Throwable -> L4f
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L4f
            java.util.List r1 = r1.parse()     // Catch: java.lang.Throwable -> L4f
            com.bumptech.glide.GlideBuilder r2 = new com.bumptech.glide.GlideBuilder     // Catch: java.lang.Throwable -> L4f
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r3 = r1.iterator()     // Catch: java.lang.Throwable -> L4f
        L21:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r4 == 0) goto L31
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L4f
            com.bumptech.glide.module.GlideModule r4 = (com.bumptech.glide.module.GlideModule) r4     // Catch: java.lang.Throwable -> L4f
            r4.applyOptions(r5, r2)     // Catch: java.lang.Throwable -> L4f
            goto L21
        L31:
            com.bumptech.glide.Glide r2 = r2.createGlide()     // Catch: java.lang.Throwable -> L4f
            com.bumptech.glide.Glide.glide = r2     // Catch: java.lang.Throwable -> L4f
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L4f
        L3b:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L4f
            if (r2 == 0) goto L4d
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L4f
            com.bumptech.glide.module.GlideModule r2 = (com.bumptech.glide.module.GlideModule) r2     // Catch: java.lang.Throwable -> L4f
            com.bumptech.glide.Glide r3 = com.bumptech.glide.Glide.glide     // Catch: java.lang.Throwable -> L4f
            r2.registerComponents(r5, r3)     // Catch: java.lang.Throwable -> L4f
            goto L3b
        L4d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            goto L52
        L4f:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r5
        L52:
            com.bumptech.glide.Glide r5 = com.bumptech.glide.Glide.glide
            return r5
    }

    private com.bumptech.glide.load.model.GenericLoaderFactory getLoaderFactory() {
            r1 = this;
            com.bumptech.glide.load.model.GenericLoaderFactory r0 = r1.loaderFactory
            return r0
    }

    public static java.io.File getPhotoCacheDir(android.content.Context r1) {
            java.lang.String r0 = "image_manager_disk_cache"
            java.io.File r1 = getPhotoCacheDir(r1, r0)
            return r1
    }

    public static java.io.File getPhotoCacheDir(android.content.Context r2, java.lang.String r3) {
            java.io.File r2 = r2.getCacheDir()
            r0 = 0
            if (r2 == 0) goto L20
            java.io.File r1 = new java.io.File
            r1.<init>(r2, r3)
            boolean r2 = r1.mkdirs()
            if (r2 != 0) goto L1f
            boolean r2 = r1.exists()
            if (r2 == 0) goto L1e
            boolean r2 = r1.isDirectory()
            if (r2 != 0) goto L1f
        L1e:
            return r0
        L1f:
            return r1
        L20:
            r2 = 6
            java.lang.String r3 = "Glide"
            boolean r2 = android.util.Log.isLoggable(r3, r2)
            if (r2 == 0) goto L2e
            java.lang.String r2 = "default disk cache dir is null"
            android.util.Log.e(r3, r2)
        L2e:
            return r0
    }

    @java.lang.Deprecated
    public static boolean isSetup() {
            com.bumptech.glide.Glide r0 = com.bumptech.glide.Glide.glide
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    @java.lang.Deprecated
    public static void setup(com.bumptech.glide.GlideBuilder r1) {
            boolean r0 = isSetup()
            if (r0 != 0) goto Ld
            com.bumptech.glide.Glide r1 = r1.createGlide()
            com.bumptech.glide.Glide.glide = r1
            return
        Ld:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Glide is already setup, check with isSetup() first"
            r1.<init>(r0)
            throw r1
    }

    static void tearDown() {
            r0 = 0
            com.bumptech.glide.Glide.glide = r0
            return
    }

    public static com.bumptech.glide.RequestManager with(android.app.Activity r1) {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = com.bumptech.glide.manager.RequestManagerRetriever.get()
            com.bumptech.glide.RequestManager r1 = r0.get(r1)
            return r1
    }

    public static com.bumptech.glide.RequestManager with(android.app.Fragment r1) {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = com.bumptech.glide.manager.RequestManagerRetriever.get()
            com.bumptech.glide.RequestManager r1 = r0.get(r1)
            return r1
    }

    public static com.bumptech.glide.RequestManager with(android.content.Context r1) {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = com.bumptech.glide.manager.RequestManagerRetriever.get()
            com.bumptech.glide.RequestManager r1 = r0.get(r1)
            return r1
    }

    public static com.bumptech.glide.RequestManager with(android.support.v4.app.Fragment r1) {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = com.bumptech.glide.manager.RequestManagerRetriever.get()
            com.bumptech.glide.RequestManager r1 = r0.get(r1)
            return r1
    }

    public static com.bumptech.glide.RequestManager with(android.support.v4.app.FragmentActivity r1) {
            com.bumptech.glide.manager.RequestManagerRetriever r0 = com.bumptech.glide.manager.RequestManagerRetriever.get()
            com.bumptech.glide.RequestManager r1 = r0.get(r1)
            return r1
    }

    <T, Z> com.bumptech.glide.provider.DataLoadProvider<T, Z> buildDataProvider(java.lang.Class<T> r2, java.lang.Class<Z> r3) {
            r1 = this;
            com.bumptech.glide.provider.DataLoadProviderRegistry r0 = r1.dataLoadProviderRegistry
            com.bumptech.glide.provider.DataLoadProvider r2 = r0.get(r2, r3)
            return r2
    }

    <R> com.bumptech.glide.request.target.Target<R> buildImageViewTarget(android.widget.ImageView r2, java.lang.Class<R> r3) {
            r1 = this;
            com.bumptech.glide.request.target.ImageViewTargetFactory r0 = r1.imageViewTargetFactory
            com.bumptech.glide.request.target.Target r2 = r0.buildTarget(r2, r3)
            return r2
    }

    <Z, R> com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> buildTranscoder(java.lang.Class<Z> r2, java.lang.Class<R> r3) {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.TranscoderRegistry r0 = r1.transcoderRegistry
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r2 = r0.get(r2, r3)
            return r2
    }

    public void clearDiskCache() {
            r1 = this;
            com.bumptech.glide.util.Util.assertBackgroundThread()
            com.bumptech.glide.load.engine.Engine r0 = r1.getEngine()
            r0.clearDiskCache()
            return
    }

    public void clearMemory() {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r1.memoryCache
            r0.clearMemory()
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r1.bitmapPool
            r0.clearMemory()
            return
    }

    com.bumptech.glide.load.resource.bitmap.CenterCrop getBitmapCenterCrop() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.CenterCrop r0 = r1.bitmapCenterCrop
            return r0
    }

    com.bumptech.glide.load.resource.bitmap.FitCenter getBitmapFitCenter() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.FitCenter r0 = r1.bitmapFitCenter
            return r0
    }

    public com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool getBitmapPool() {
            r1 = this;
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r1.bitmapPool
            return r0
    }

    com.bumptech.glide.load.DecodeFormat getDecodeFormat() {
            r1 = this;
            com.bumptech.glide.load.DecodeFormat r0 = r1.decodeFormat
            return r0
    }

    com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation getDrawableCenterCrop() {
            r1 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r0 = r1.drawableCenterCrop
            return r0
    }

    com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation getDrawableFitCenter() {
            r1 = this;
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r0 = r1.drawableFitCenter
            return r0
    }

    com.bumptech.glide.load.engine.Engine getEngine() {
            r1 = this;
            com.bumptech.glide.load.engine.Engine r0 = r1.engine
            return r0
    }

    android.os.Handler getMainHandler() {
            r1 = this;
            android.os.Handler r0 = r1.mainHandler
            return r0
    }

    public void preFillBitmapPool(com.bumptech.glide.load.engine.prefill.PreFillType.Builder... r2) {
            r1 = this;
            com.bumptech.glide.load.engine.prefill.BitmapPreFiller r0 = r1.bitmapPreFiller
            r0.preFill(r2)
            return
    }

    public <T, Y> void register(java.lang.Class<T> r2, java.lang.Class<Y> r3, com.bumptech.glide.load.model.ModelLoaderFactory<T, Y> r4) {
            r1 = this;
            com.bumptech.glide.load.model.GenericLoaderFactory r0 = r1.loaderFactory
            com.bumptech.glide.load.model.ModelLoaderFactory r2 = r0.register(r2, r3, r4)
            if (r2 == 0) goto Lb
            r2.teardown()
        Lb:
            return
    }

    public void setMemoryCategory(com.bumptech.glide.MemoryCategory r3) {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r2.memoryCache
            float r1 = r3.getMultiplier()
            r0.setSizeMultiplier(r1)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r2.bitmapPool
            float r3 = r3.getMultiplier()
            r0.setSizeMultiplier(r3)
            return
    }

    public void trimMemory(int r2) {
            r1 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.load.engine.cache.MemoryCache r0 = r1.memoryCache
            r0.trimMemory(r2)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r1.bitmapPool
            r0.trimMemory(r2)
            return
    }

    @java.lang.Deprecated
    public <T, Y> void unregister(java.lang.Class<T> r2, java.lang.Class<Y> r3) {
            r1 = this;
            com.bumptech.glide.load.model.GenericLoaderFactory r0 = r1.loaderFactory
            com.bumptech.glide.load.model.ModelLoaderFactory r2 = r0.unregister(r2, r3)
            if (r2 == 0) goto Lb
            r2.teardown()
        Lb:
            return
    }
}

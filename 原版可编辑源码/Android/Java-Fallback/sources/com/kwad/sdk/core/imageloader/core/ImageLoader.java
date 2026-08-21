package com.kwad.sdk.core.imageloader.core;

public class ImageLoader {
    private static final java.lang.String ERROR_INIT_CONFIG_WITH_NULL = "ImageLoader configuration can not be initialized with null";
    private static final java.lang.String ERROR_NOT_INIT = "ImageLoader must be init with configuration before using";
    private static final java.lang.String ERROR_WRONG_ARGUMENTS = "Wrong arguments were passed to displayImage() method (ImageView reference must not be null)";
    static final java.lang.String LOG_DESTROY = "Destroy ImageLoader";
    static final java.lang.String LOG_INIT_CONFIG = "Initialize ImageLoader with configuration";
    static final java.lang.String LOG_LOAD_IMAGE_FROM_MEMORY_CACHE = "Load image from memory cache [%s]";
    public static final java.lang.String TAG = null;
    private static final java.lang.String WARNING_RE_INIT_CONFIG = "Try to initialize ImageLoader which had already been initialized before. To re-init ImageLoader with new configuration call ImageLoader.destroy() at first.";
    private static volatile com.kwad.sdk.core.imageloader.core.ImageLoader instance;
    private volatile com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration configuration;
    private com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener defaultListener;
    private com.kwad.sdk.core.imageloader.core.ImageLoaderEngine engine;

    static class 1 {
    }

    static class SyncImageLoadingListener extends com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener {
        private android.graphics.Bitmap loadedImage;

        private SyncImageLoadingListener() {
                r0 = this;
                r0.<init>()
                return
        }

        SyncImageLoadingListener(com.kwad.sdk.core.imageloader.core.ImageLoader.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public android.graphics.Bitmap getLoadedBitmap() {
                r1 = this;
                android.graphics.Bitmap r0 = r1.loadedImage
                return r0
        }

        @Override
        public void onLoadingComplete(java.lang.String r1, android.view.View r2, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3) {
                r0 = this;
                android.graphics.Bitmap r1 = r3.mBitmap
                r0.loadedImage = r1
                return
        }
    }

    static {
            java.lang.Class<com.kwad.sdk.core.imageloader.core.ImageLoader> r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.class
            java.lang.String r0 = r0.getSimpleName()
            com.kwad.sdk.core.imageloader.core.ImageLoader.TAG = r0
            return
    }

    protected ImageLoader() {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener r0 = new com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener
            r0.<init>()
            r1.defaultListener = r0
            return
    }

    private void checkConfiguration() {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r2.configuration
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "ImageLoader must be init with configuration before using"
            r0.<init>(r1)
            throw r0
    }

    private static android.os.Handler defineHandler(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2) {
            android.os.Handler r0 = r2.getHandler()
            boolean r2 = r2.isSyncLoading()
            if (r2 == 0) goto Lc
            r0 = 0
            goto L1d
        Lc:
            if (r0 != 0) goto L1d
            android.os.Looper r2 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r2 != r1) goto L1d
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
        L1d:
            return r0
    }

    public static com.kwad.sdk.core.imageloader.core.ImageLoader getInstance() {
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.instance
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.imageloader.core.ImageLoader> r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.class
            monitor-enter(r0)
            com.kwad.sdk.core.imageloader.core.ImageLoader r1 = com.kwad.sdk.core.imageloader.core.ImageLoader.instance     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.imageloader.core.ImageLoader r1 = new com.kwad.sdk.core.imageloader.core.ImageLoader     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.imageloader.core.ImageLoader.instance = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.imageloader.core.ImageLoader r0 = com.kwad.sdk.core.imageloader.core.ImageLoader.instance
            return r0
    }

    public void cancelDisplayTask(android.widget.ImageView r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r2.engine
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r1 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r1.<init>(r3)
            r0.cancelDisplayTaskFor(r1)
            return
    }

    public void cancelDisplayTask(com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            r0.cancelDisplayTaskFor(r2)
            return
    }

    @java.lang.Deprecated
    public void clearDiscCache() {
            r0 = this;
            r0.clearDiskCache()
            return
    }

    public void clearDiskCache() {
            r1 = this;
            r1.checkConfiguration()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r0.diskCache
            r0.clear()
            return
    }

    public void clearMemoryCache() {
            r1 = this;
            r1.checkConfiguration()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r0.memoryCache
            r0.clear()
            return
    }

    public void denyNetworkDownloads(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            r0.denyNetworkDownloads(r2)
            return
    }

    public void destroy() {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r2.configuration
            if (r0 == 0) goto Lc
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "Destroy ImageLoader"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r0)
        Lc:
            r2.stop()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r2.configuration
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r0.diskCache
            r0.close()
            r0 = 0
            r2.engine = r0
            r2.configuration = r0
            return
    }

    public void displayImage(java.lang.String r7, android.widget.ImageView r8) {
            r6 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r2 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r2.<init>(r8)
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r7, android.widget.ImageView r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9) {
            r6 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r2 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r2.<init>(r8)
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r9
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r7, android.widget.ImageView r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r7, android.widget.ImageView r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r11) {
            r6 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r2 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r2.<init>(r8)
            r0 = r6
            r1 = r7
            r3 = r9
            r4 = r10
            r5 = r11
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r8, android.widget.ImageView r9, com.kwad.sdk.core.imageloader.core.assist.ImageSize r10) {
            r7 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r2 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r2.<init>(r9)
            r3 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r4 = r10
            r0.displayImage(r1, r2, r3, r4, r5, r6)
            return
    }

    public void displayImage(java.lang.String r7, android.widget.ImageView r8, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r9) {
            r6 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r2 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r2.<init>(r8)
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r4 = r9
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r8) {
            r6 = this;
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r10, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r11, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r12, com.kwad.sdk.core.imageloader.core.assist.ImageSize r13, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r14, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r15) {
            r9 = this;
            r9.checkConfiguration()
            if (r11 == 0) goto L100
            if (r14 != 0) goto L9
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r14 = r9.defaultListener
        L9:
            r6 = r14
            if (r12 != 0) goto L10
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r12 = r9.configuration
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r12 = r12.defaultDisplayImageOptions
        L10:
            boolean r14 = android.text.TextUtils.isEmpty(r10)
            r0 = 0
            if (r14 == 0) goto L40
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r13 = r9.engine
            r13.cancelDisplayTaskFor(r11)
            android.view.View r13 = r11.getWrappedView()
            r6.onLoadingStarted(r10, r13)
            boolean r13 = r12.shouldShowImageForEmptyUri()
            if (r13 == 0) goto L35
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r13 = r9.configuration
            android.content.res.Resources r13 = r13.resources
            android.graphics.drawable.Drawable r12 = r12.getImageForEmptyUri(r13)
            r11.setImageDrawable(r12)
            goto L38
        L35:
            r11.setImageDrawable(r0)
        L38:
            android.view.View r11 = r11.getWrappedView()
            r6.onLoadingComplete(r10, r11, r0)
            return
        L40:
            if (r13 != 0) goto L4c
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r13 = r9.configuration
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r13 = r13.getMaxImageSize()
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r13 = com.kwad.sdk.core.imageloader.utils.ImageSizeUtils.defineTargetSizeForView(r11, r13)
        L4c:
            r3 = r13
            java.lang.String r4 = com.kwad.sdk.core.imageloader.utils.MemoryCacheUtils.generateKey(r10, r3)
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r13 = r9.engine
            r13.prepareDisplayTaskFor(r11, r4)
            android.view.View r13 = r11.getWrappedView()
            r6.onLoadingStarted(r10, r13)
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r13 = r9.configuration
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r13 = r13.memoryCache
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r13 = r13.get(r4)
            if (r13 == 0) goto Lba
            boolean r14 = r13.isDecoded()
            if (r14 == 0) goto Lba
            r14 = 1
            java.lang.Object[] r14 = new java.lang.Object[r14]
            r0 = 0
            r14[r0] = r4
            java.lang.String r0 = "Load image from memory cache [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r0, r14)
            boolean r14 = r12.shouldPostProcess()
            if (r14 == 0) goto La9
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r14 = new com.kwad.sdk.core.imageloader.core.ImageLoadingInfo
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r9.engine
            java.util.concurrent.locks.ReentrantLock r8 = r0.getLockForUri(r10)
            r0 = r14
            r1 = r10
            r2 = r11
            r5 = r12
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            com.kwad.sdk.core.imageloader.core.ProcessAndDisplayImageTask r10 = new com.kwad.sdk.core.imageloader.core.ProcessAndDisplayImageTask
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r11 = r9.engine
            android.os.Handler r15 = defineHandler(r12)
            r10.<init>(r11, r13, r14, r15)
            boolean r11 = r12.isSyncLoading()
            if (r11 == 0) goto La3
            r10.run()
            goto Lff
        La3:
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r11 = r9.engine
            r11.submit(r10)
            return
        La9:
            com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r12 = r12.getDisplayer()
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r14 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.MEMORY_CACHE
            r12.display(r13, r11, r14)
            android.view.View r11 = r11.getWrappedView()
            r6.onLoadingComplete(r10, r11, r13)
            return
        Lba:
            boolean r13 = r12.shouldShowImageOnLoading()
            if (r13 == 0) goto Lcc
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r13 = r9.configuration
            android.content.res.Resources r13 = r13.resources
            android.graphics.drawable.Drawable r13 = r12.getImageOnLoading(r13)
            r11.setImageDrawable(r13)
            goto Ld5
        Lcc:
            boolean r13 = r12.isResetViewBeforeLoading()
            if (r13 == 0) goto Ld5
            r11.setImageDrawable(r0)
        Ld5:
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r13 = new com.kwad.sdk.core.imageloader.core.ImageLoadingInfo
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r14 = r9.engine
            java.util.concurrent.locks.ReentrantLock r8 = r14.getLockForUri(r10)
            r0 = r13
            r1 = r10
            r2 = r11
            r5 = r12
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r10 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r11 = r9.engine
            android.os.Handler r14 = defineHandler(r12)
            r10.<init>(r11, r13, r14)
            boolean r11 = r12.isSyncLoading()
            if (r11 == 0) goto Lfa
            r10.run()
            return
        Lfa:
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r11 = r9.engine
            r11.submit(r10)
        Lff:
            return
        L100:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "Wrong arguments were passed to displayImage() method (ImageView reference must not be null)"
            r10.<init>(r11)
            throw r10
    }

    public void displayImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void displayImage(java.lang.String r8, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r9, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r10, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r11, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r12) {
            r7 = this;
            r4 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r6 = r12
            r0.displayImage(r1, r2, r3, r4, r5, r6)
            return
    }

    public void displayImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r8, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r9) {
            r6 = this;
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    @java.lang.Deprecated
    public com.kwad.sdk.core.imageloader.cache.disc.DiskCache getDiscCache() {
            r1 = this;
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r1.getDiskCache()
            return r0
    }

    public com.kwad.sdk.core.imageloader.cache.disc.DiskCache getDiskCache() {
            r1 = this;
            r1.checkConfiguration()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r0.diskCache
            return r0
    }

    public java.lang.String getLoadingUriForView(android.widget.ImageView r3) {
            r2 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r2.engine
            com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware r1 = new com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            r1.<init>(r3)
            java.lang.String r3 = r0.getLoadingUriForView(r1)
            return r3
    }

    public java.lang.String getLoadingUriForView(com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            java.lang.String r2 = r0.getLoadingUriForView(r2)
            return r2
    }

    public com.kwad.sdk.core.imageloader.cache.memory.MemoryCache getMemoryCache() {
            r1 = this;
            r1.checkConfiguration()
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r0.memoryCache
            return r0
    }

    public void handleSlowNetwork(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            r0.handleSlowNetwork(r2)
            return
    }

    public synchronized void init(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r3) {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L25
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r2.configuration     // Catch: java.lang.Throwable -> L23
            r1 = 0
            if (r0 != 0) goto L1a
            java.lang.String r0 = "Initialize ImageLoader with configuration"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L23
            com.kwad.sdk.core.imageloader.utils.L.d(r0, r1)     // Catch: java.lang.Throwable -> L23
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = new com.kwad.sdk.core.imageloader.core.ImageLoaderEngine     // Catch: java.lang.Throwable -> L23
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L23
            r2.engine = r0     // Catch: java.lang.Throwable -> L23
            r2.configuration = r3     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)
            return
        L1a:
            java.lang.String r3 = "Try to initialize ImageLoader which had already been initialized before. To re-init ImageLoader with new configuration call ImageLoader.destroy() at first."
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L23
            com.kwad.sdk.core.imageloader.utils.L.w(r3, r0)     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)
            return
        L23:
            r3 = move-exception
            goto L2d
        L25:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L23
            java.lang.String r0 = "ImageLoader configuration can not be initialized with null"
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L23
            throw r3     // Catch: java.lang.Throwable -> L23
        L2d:
            monitor-exit(r2)
            throw r3
    }

    public boolean isInited() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r1.configuration
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public void loadImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r8, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r9) {
            r6 = this;
            r2 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r3 = r8
            r4 = r9
            r0.loadImage(r1, r2, r3, r4, r5)
            return
    }

    public void loadImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.assist.ImageSize r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.loadImage(r1, r2, r3, r4, r5)
            return
    }

    public void loadImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.assist.ImageSize r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r11) {
            r6 = this;
            r6.checkConfiguration()
            if (r8 != 0) goto Lb
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r8 = r6.configuration
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r8 = r8.getMaxImageSize()
        Lb:
            if (r9 != 0) goto L11
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r9 = r6.configuration
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r9 = r9.defaultDisplayImageOptions
        L11:
            r3 = r9
            com.kwad.sdk.core.imageloader.core.imageaware.NonViewAware r2 = new com.kwad.sdk.core.imageloader.core.imageaware.NonViewAware
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r9 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.CROP
            r2.<init>(r7, r8, r9)
            r0 = r6
            r1 = r7
            r4 = r10
            r5 = r11
            r0.displayImage(r1, r2, r3, r4, r5)
            return
    }

    public void loadImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.assist.ImageSize r8, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r9) {
            r6 = this;
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r0.loadImage(r1, r2, r3, r4, r5)
            return
    }

    public void loadImage(java.lang.String r7, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r8) {
            r6 = this;
            r2 = 0
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r0.loadImage(r1, r2, r3, r4, r5)
            return
    }

    public android.graphics.Bitmap loadImageSync(java.lang.String r2) {
            r1 = this;
            r0 = 0
            android.graphics.Bitmap r2 = r1.loadImageSync(r2, r0, r0)
            return r2
    }

    public android.graphics.Bitmap loadImageSync(java.lang.String r2, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3) {
            r1 = this;
            r0 = 0
            android.graphics.Bitmap r2 = r1.loadImageSync(r2, r0, r3)
            return r2
    }

    public android.graphics.Bitmap loadImageSync(java.lang.String r2, com.kwad.sdk.core.imageloader.core.assist.ImageSize r3) {
            r1 = this;
            r0 = 0
            android.graphics.Bitmap r2 = r1.loadImageSync(r2, r3, r0)
            return r2
    }

    public android.graphics.Bitmap loadImageSync(java.lang.String r3, com.kwad.sdk.core.imageloader.core.assist.ImageSize r4, com.kwad.sdk.core.imageloader.core.DisplayImageOptions r5) {
            r2 = this;
            if (r5 != 0) goto L6
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r5 = r2.configuration
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r5 = r5.defaultDisplayImageOptions
        L6:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r5 = r0.cloneFrom(r5)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r5 = r5.syncLoading(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r5 = r5.build()
            com.kwad.sdk.core.imageloader.core.ImageLoader$SyncImageLoadingListener r0 = new com.kwad.sdk.core.imageloader.core.ImageLoader$SyncImageLoadingListener
            r1 = 0
            r0.<init>(r1)
            r2.loadImage(r3, r4, r5, r0)
            android.graphics.Bitmap r3 = r0.getLoadedBitmap()
            return r3
    }

    public void pause() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            r0.pause()
            return
    }

    public void resume() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            r0.resume()
            return
    }

    public void setDefaultLoadingListener(com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r1) {
            r0 = this;
            if (r1 != 0) goto L7
            com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener r1 = new com.kwad.sdk.core.imageloader.core.listener.SimpleImageLoadingListener
            r1.<init>()
        L7:
            r0.defaultListener = r1
            return
    }

    public void stop() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            r0.stop()
            return
    }
}

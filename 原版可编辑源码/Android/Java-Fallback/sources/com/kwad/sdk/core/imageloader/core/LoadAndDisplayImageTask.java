package com.kwad.sdk.core.imageloader.core;

final class LoadAndDisplayImageTask implements com.kwad.sdk.core.imageloader.utils.IoUtils.CopyListener, java.lang.Runnable {
    private static final java.lang.String ERROR_NO_IMAGE_STREAM = "No stream for image [%s]";
    private static final java.lang.String ERROR_POST_PROCESSOR_NULL = "Post-processor returned null [%s]";
    private static final java.lang.String ERROR_PRE_PROCESSOR_NULL = "Pre-processor returned null [%s]";
    private static final java.lang.String ERROR_PROCESSOR_FOR_DISK_CACHE_NULL = "Bitmap processor for disk cache returned null [%s]";
    private static final java.lang.String LOG_CACHE_IMAGE_IN_MEMORY = "Cache image in memory [%s]";
    private static final java.lang.String LOG_CACHE_IMAGE_ON_DISK = "Cache image on disk [%s]";
    private static final java.lang.String LOG_DELAY_BEFORE_LOADING = "Delay %d ms before loading...  [%s]";
    private static final java.lang.String LOG_GET_IMAGE_FROM_MEMORY_CACHE_AFTER_WAITING = "...Get cached bitmap from memory after waiting. [%s]";
    private static final java.lang.String LOG_LOAD_IMAGE_FROM_DISK_CACHE = "Load image from disk cache [%s]";
    private static final java.lang.String LOG_LOAD_IMAGE_FROM_NETWORK = "Load image from network [%s]";
    private static final java.lang.String LOG_POSTPROCESS_IMAGE = "PostProcess image before displaying [%s]";
    private static final java.lang.String LOG_PREPROCESS_IMAGE = "PreProcess image before caching in memory [%s]";
    private static final java.lang.String LOG_PROCESS_IMAGE_BEFORE_CACHE_ON_DISK = "Process image before cache on disk [%s]";
    private static final java.lang.String LOG_RESIZE_CACHED_IMAGE_FILE = "Resize image in disk cache [%s]";
    private static final java.lang.String LOG_RESUME_AFTER_PAUSE = ".. Resume loading [%s]";
    private static final java.lang.String LOG_START_DISPLAY_IMAGE_TASK = "Start display image task [%s]";
    private static final java.lang.String LOG_TASK_CANCELLED_IMAGEAWARE_COLLECTED = "ImageAware was collected by GC. Task is cancelled. [%s]";
    private static final java.lang.String LOG_TASK_CANCELLED_IMAGEAWARE_REUSED = "ImageAware is reused for another image. Task is cancelled. [%s]";
    private static final java.lang.String LOG_TASK_INTERRUPTED = "Task was interrupted [%s]";
    private static final java.lang.String LOG_WAITING_FOR_IMAGE_LOADED = "Image already is loading. Waiting... [%s]";
    private static final java.lang.String LOG_WAITING_FOR_RESUME = "ImageLoader is paused. Waiting...  [%s]";
    private final com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration configuration;
    private final com.kwad.sdk.core.imageloader.core.decode.ImageDecoder decoder;
    private final com.kwad.sdk.core.imageloader.core.download.ImageDownloader downloader;
    private final com.kwad.sdk.core.imageloader.core.ImageLoaderEngine engine;
    private final android.os.Handler handler;
    final com.kwad.sdk.core.imageloader.core.imageaware.ImageAware imageAware;
    private final com.kwad.sdk.core.imageloader.core.ImageLoadingInfo imageLoadingInfo;
    final com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener listener;
    private com.kwad.sdk.core.imageloader.core.assist.LoadedFrom loadedFrom;
    private final java.lang.String memoryCacheKey;
    private final com.kwad.sdk.core.imageloader.core.download.ImageDownloader networkDeniedDownloader;
    final com.kwad.sdk.core.imageloader.core.DisplayImageOptions options;
    final com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener progressListener;
    private final com.kwad.sdk.core.imageloader.core.download.ImageDownloader slowNetworkDownloader;
    private final boolean syncLoading;
    private final com.kwad.sdk.core.imageloader.core.assist.ImageSize targetSize;
    final java.lang.String uri;


    static class FireCancelEventRunnable implements java.lang.Runnable {
        private java.lang.ref.WeakReference<com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask> weakReference;

        FireCancelEventRunnable(com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.weakReference = r0
                return
        }

        @Override
        public void run() {
                r3 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask> r0 = r3.weakReference
                java.lang.Object r0 = r0.get()
                com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r0 = (com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask) r0
                if (r0 == 0) goto L17
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r1 = r0.listener
                java.lang.String r2 = r0.uri
                com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r0 = r0.imageAware
                android.view.View r0 = r0.getWrappedView()
                r1.onLoadingCancelled(r2, r0)
            L17:
                return
        }
    }

    static class FireFailEventRunnable implements java.lang.Runnable {
        final java.lang.Throwable failCause;
        final com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType failType;
        private java.lang.ref.WeakReference<com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask> weakReference;

        FireFailEventRunnable(com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r2, com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType r3, java.lang.Throwable r4) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.weakReference = r0
                r1.failCause = r4
                r1.failType = r3
                return
        }

        @Override
        public void run() {
                r6 = this;
                java.lang.ref.WeakReference<com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask> r0 = r6.weakReference
                java.lang.Object r0 = r0.get()
                com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r0 = (com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask) r0
                if (r0 == 0) goto L39
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions r1 = r0.options
                boolean r1 = r1.shouldShowImageOnFail()
                if (r1 == 0) goto L23
                com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r1 = r0.imageAware
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r0.options
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r3 = com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.access$000(r0)
                android.content.res.Resources r3 = r3.resources
                android.graphics.drawable.Drawable r2 = r2.getImageOnFail(r3)
                r1.setImageDrawable(r2)
            L23:
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r1 = r0.listener
                java.lang.String r2 = r0.uri
                com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r0 = r0.imageAware
                android.view.View r0 = r0.getWrappedView()
                com.kwad.sdk.core.imageloader.core.assist.FailReason r3 = new com.kwad.sdk.core.imageloader.core.assist.FailReason
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r4 = r6.failType
                java.lang.Throwable r5 = r6.failCause
                r3.<init>(r4, r5)
                r1.onLoadingFailed(r2, r0, r3)
            L39:
                return
        }
    }

    class TaskCancelledException extends java.lang.Exception {
        private static final long serialVersionUID = -504619855289909996L;
        final com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask this$0;

        TaskCancelledException(com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }
    }

    public LoadAndDisplayImageTask(com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r2, com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r3, android.os.Handler r4) {
            r1 = this;
            r1.<init>()
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r0 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.NETWORK
            r1.loadedFrom = r0
            r1.engine = r2
            r1.imageLoadingInfo = r3
            r1.handler = r4
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r2.configuration
            r1.configuration = r2
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r2 = r2.downloader
            r1.downloader = r2
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r1.configuration
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r2 = r2.networkDeniedDownloader
            r1.networkDeniedDownloader = r2
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r1.configuration
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r2 = r2.slowNetworkDownloader
            r1.slowNetworkDownloader = r2
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r1.configuration
            com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r2 = r2.decoder
            r1.decoder = r2
            java.lang.String r2 = r3.uri
            r1.uri = r2
            java.lang.String r2 = r3.memoryCacheKey
            r1.memoryCacheKey = r2
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r2 = r3.imageAware
            r1.imageAware = r2
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r2 = r3.targetSize
            r1.targetSize = r2
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r3.options
            r1.options = r2
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r2 = r3.listener
            r1.listener = r2
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r2 = r3.progressListener
            r1.progressListener = r2
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r1.options
            boolean r2 = r2.isSyncLoading()
            r1.syncLoading = r2
            return
    }

    static com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration access$000(com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask r0) {
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r0.configuration
            return r0
    }

    private void checkTaskInterrupted() {
            r1 = this;
            boolean r0 = r1.isTaskInterrupted()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$TaskCancelledException r0 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$TaskCancelledException
            r0.<init>(r1)
            throw r0
    }

    private void checkTaskNotActual() {
            r0 = this;
            r0.checkViewCollected()
            r0.checkViewReused()
            return
    }

    private void checkViewCollected() {
            r1 = this;
            boolean r0 = r1.isViewCollected()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$TaskCancelledException r0 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$TaskCancelledException
            r0.<init>(r1)
            throw r0
    }

    private void checkViewReused() {
            r1 = this;
            boolean r0 = r1.isViewReused()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$TaskCancelledException r0 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$TaskCancelledException
            r0.<init>(r1)
            throw r0
    }

    private com.kwad.sdk.core.imageloader.core.decode.DecodedResult decodeImage(java.lang.String r11) {
            r10 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r0 = r10.imageAware
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r6 = r0.getScaleType()
            com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r0 = new com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo
            java.lang.String r2 = r10.memoryCacheKey
            java.lang.String r4 = r10.uri
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r5 = r10.targetSize
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r7 = r10.getDownloader()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r8 = r10.options
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r9 = r10.listener
            r1 = r0
            r3 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r11 = r10.decoder
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r11 = r11.decode(r0)
            return r11
    }

    private boolean delayIfNeed() {
            r6 = this;
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = r6.options
            boolean r0 = r0.shouldDelayBeforeLoading()
            r1 = 0
            if (r0 == 0) goto L3d
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r6.options
            int r2 = r2.getDelayBeforeLoading()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            java.lang.String r2 = r6.memoryCacheKey
            r3 = 1
            r0[r3] = r2
            java.lang.String r2 = "Delay %d ms before loading...  [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r2, r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = r6.options     // Catch: java.lang.InterruptedException -> L31
            int r0 = r0.getDelayBeforeLoading()     // Catch: java.lang.InterruptedException -> L31
            long r4 = (long) r0     // Catch: java.lang.InterruptedException -> L31
            java.lang.Thread.sleep(r4)     // Catch: java.lang.InterruptedException -> L31
            boolean r0 = r6.isTaskNotActual()
            return r0
        L31:
            java.lang.Object[] r0 = new java.lang.Object[r3]
            java.lang.String r2 = r6.memoryCacheKey
            r0[r1] = r2
            java.lang.String r1 = "Task was interrupted [%s]"
            com.kwad.sdk.core.imageloader.utils.L.e(r1, r0)
            return r3
        L3d:
            return r1
    }

    private boolean downloadImage() {
            r3 = this;
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r3.getDownloader()
            java.lang.String r1 = r3.uri
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2 = r3.options
            java.lang.Object r2 = r2.getExtraForDownloader()
            java.io.InputStream r0 = r0.getStream(r1, r2)
            if (r0 != 0) goto L20
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.memoryCacheKey
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "No stream for image [%s]"
            com.kwad.sdk.core.imageloader.utils.L.e(r1, r0)
            return r2
        L20:
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r1 = r3.configuration     // Catch: java.lang.Throwable -> L2e
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r1 = r1.diskCache     // Catch: java.lang.Throwable -> L2e
            java.lang.String r2 = r3.uri     // Catch: java.lang.Throwable -> L2e
            boolean r1 = r1.save(r2, r0, r3)     // Catch: java.lang.Throwable -> L2e
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            return r1
        L2e:
            r1 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            throw r1
    }

    private void fireCancelEvent() {
            r4 = this;
            boolean r0 = r4.syncLoading
            if (r0 != 0) goto L18
            boolean r0 = r4.isTaskInterrupted()
            if (r0 == 0) goto Lb
            goto L18
        Lb:
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$FireCancelEventRunnable r0 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$FireCancelEventRunnable
            r0.<init>(r4)
            r1 = 0
            android.os.Handler r2 = r4.handler
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3 = r4.engine
            runTask(r0, r1, r2, r3)
        L18:
            return
    }

    private void fireFailEvent(com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType r3, java.lang.Throwable r4) {
            r2 = this;
            boolean r0 = r2.syncLoading
            if (r0 != 0) goto L1e
            boolean r0 = r2.isTaskInterrupted()
            if (r0 != 0) goto L1e
            boolean r0 = r2.isTaskNotActual()
            if (r0 == 0) goto L11
            goto L1e
        L11:
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$FireFailEventRunnable r0 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$FireFailEventRunnable
            r0.<init>(r2, r3, r4)
            r3 = 0
            android.os.Handler r4 = r2.handler
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r1 = r2.engine
            runTask(r0, r3, r4, r1)
        L1e:
            return
    }

    private boolean fireProgressEvent(int r3, int r4) {
            r2 = this;
            boolean r0 = r2.isTaskInterrupted()
            r1 = 0
            if (r0 != 0) goto L20
            boolean r0 = r2.isTaskNotActual()
            if (r0 == 0) goto Le
            goto L20
        Le:
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingProgressListener r0 = r2.progressListener
            if (r0 == 0) goto L1e
            com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$1 r0 = new com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask$1
            r0.<init>(r2, r3, r4)
            android.os.Handler r3 = r2.handler
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r4 = r2.engine
            runTask(r0, r1, r3, r4)
        L1e:
            r3 = 1
            return r3
        L20:
            return r1
    }

    private com.kwad.sdk.core.imageloader.core.download.ImageDownloader getDownloader() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            boolean r0 = r0.isNetworkDenied()
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r1.networkDeniedDownloader
            goto L18
        Lb:
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r1.engine
            boolean r0 = r0.isSlowNetwork()
            if (r0 == 0) goto L16
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r1.slowNetworkDownloader
            goto L18
        L16:
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r1.downloader
        L18:
            return r0
    }

    private boolean isTaskInterrupted() {
            r4 = this;
            boolean r0 = java.lang.Thread.interrupted()
            r1 = 0
            if (r0 == 0) goto L14
            r0 = 1
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = r4.memoryCacheKey
            r2[r1] = r3
            java.lang.String r1 = "Task was interrupted [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r2)
            return r0
        L14:
            return r1
    }

    private boolean isTaskNotActual() {
            r1 = this;
            boolean r0 = r1.isViewCollected()
            if (r0 != 0) goto Lf
            boolean r0 = r1.isViewReused()
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    private boolean isViewCollected() {
            r4 = this;
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r0 = r4.imageAware
            boolean r0 = r0.isCollected()
            r1 = 0
            if (r0 == 0) goto L16
            r0 = 1
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = r4.memoryCacheKey
            r2[r1] = r3
            java.lang.String r1 = "ImageAware was collected by GC. Task is cancelled. [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r1, r2)
            return r0
        L16:
            return r1
    }

    private boolean isViewReused() {
            r4 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r4.engine
            com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r1 = r4.imageAware
            java.lang.String r0 = r0.getLoadingUriForView(r1)
            java.lang.String r1 = r4.memoryCacheKey
            boolean r0 = r1.equals(r0)
            r1 = 1
            r0 = r0 ^ r1
            r2 = 0
            if (r0 == 0) goto L1f
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r3 = r4.memoryCacheKey
            r0[r2] = r3
            java.lang.String r2 = "ImageAware is reused for another image. Task is cancelled. [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r2, r0)
            return r1
        L1f:
            return r2
    }

    private boolean resizeAndSaveImage(int r13, int r14) {
            r12 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r12.configuration
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r0.diskCache
            java.lang.String r1 = r12.uri
            java.io.File r0 = r0.get(r1)
            r1 = 0
            if (r0 == 0) goto L8c
            boolean r2 = r0.exists()
            if (r2 == 0) goto L8c
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r7 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            r7.<init>(r13, r14)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r13 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r13.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r14 = r12.options
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r13 = r13.cloneFrom(r14)
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r14 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_INT
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r13 = r13.imageScaleType(r14)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r10 = r13.build()
            com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo r13 = new com.kwad.sdk.core.imageloader.core.decode.ImageDecodingInfo
            java.lang.String r4 = r12.memoryCacheKey
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r14 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE
            java.lang.String r0 = r0.getAbsolutePath()
            java.lang.String r5 = r14.wrap(r0)
            java.lang.String r6 = r12.uri
            com.kwad.sdk.core.imageloader.core.assist.ViewScaleType r8 = com.kwad.sdk.core.imageloader.core.assist.ViewScaleType.FIT_INSIDE
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r9 = r12.getDownloader()
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r11 = r12.listener
            r3 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
            com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r14 = r12.decoder
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r13 = r14.decode(r13)
            r14 = 0
            if (r13 == 0) goto L54
            android.graphics.Bitmap r14 = r13.mBitmap
        L54:
            if (r14 == 0) goto L7d
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r13 = r12.configuration
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r13 = r13.processorForDiskCache
            if (r13 == 0) goto L7d
            r13 = 1
            java.lang.Object[] r0 = new java.lang.Object[r13]
            java.lang.String r2 = r12.memoryCacheKey
            r0[r1] = r2
            java.lang.String r2 = "Process image before cache on disk [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r2, r0)
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = r12.configuration
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.processorForDiskCache
            android.graphics.Bitmap r14 = r0.process(r14)
            if (r14 != 0) goto L7d
            java.lang.Object[] r13 = new java.lang.Object[r13]
            java.lang.String r0 = r12.memoryCacheKey
            r13[r1] = r0
            java.lang.String r0 = "Bitmap processor for disk cache returned null [%s]"
            com.kwad.sdk.core.imageloader.utils.L.e(r0, r13)
        L7d:
            if (r14 == 0) goto L8c
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r13 = r12.configuration
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r13 = r13.diskCache
            java.lang.String r0 = r12.uri
            boolean r1 = r13.save(r0, r14)
            r14.recycle()
        L8c:
            return r1
    }

    static void runTask(java.lang.Runnable r0, boolean r1, android.os.Handler r2, com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3) {
            if (r1 == 0) goto L6
            r0.run()
            return
        L6:
            if (r2 != 0) goto Lc
            r3.fireCallback(r0)
            return
        Lc:
            r2.post(r0)
            return
    }

    private boolean tryCacheImageOnDisk() {
            r7 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = r7.memoryCacheKey
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "Cache image on disk [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r2, r1)
            boolean r1 = r7.downloadImage()     // Catch: java.io.IOException -> L2f
            if (r1 == 0) goto L2d
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r7.configuration     // Catch: java.io.IOException -> L2f
            int r2 = r2.maxImageWidthForDiskCache     // Catch: java.io.IOException -> L2f
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r4 = r7.configuration     // Catch: java.io.IOException -> L2f
            int r4 = r4.maxImageHeightForDiskCache     // Catch: java.io.IOException -> L2f
            if (r2 > 0) goto L1f
            if (r4 <= 0) goto L2d
        L1f:
            java.lang.String r5 = "Resize image in disk cache [%s]"
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.io.IOException -> L2f
            java.lang.String r6 = r7.memoryCacheKey     // Catch: java.io.IOException -> L2f
            r0[r3] = r6     // Catch: java.io.IOException -> L2f
            com.kwad.sdk.core.imageloader.utils.L.d(r5, r0)     // Catch: java.io.IOException -> L2f
            r7.resizeAndSaveImage(r2, r4)     // Catch: java.io.IOException -> L2f
        L2d:
            r3 = r1
            goto L33
        L2f:
            r0 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r0)
        L33:
            return r3
    }

    private com.kwad.sdk.core.imageloader.core.decode.DecodedResult tryLoadBitmap() {
            r9 = this;
            r0 = 0
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r1 = r9.configuration     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r1 = r1.diskCache     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            java.lang.String r2 = r9.uri     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            java.io.File r1 = r1.get(r2)     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L40
            boolean r4 = r1.exists()     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            if (r4 == 0) goto L40
            long r4 = r1.length()     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L40
            java.lang.String r4 = "Load image from disk cache [%s]"
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            java.lang.String r6 = r9.memoryCacheKey     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            r5[r2] = r6     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            com.kwad.sdk.core.imageloader.utils.L.d(r4, r5)     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r4 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.DISC_CACHE     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            r9.loadedFrom = r4     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            r9.checkTaskNotActual()     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r4 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            java.lang.String r1 = r4.wrap(r1)     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1 = r9.decodeImage(r1)     // Catch: java.lang.Throwable -> La2 java.lang.OutOfMemoryError -> La9 java.io.IOException -> Lb0 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbd
            goto L41
        L40:
            r1 = r0
        L41:
            if (r1 == 0) goto L49
            boolean r4 = r1.isDecoded()     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            if (r4 != 0) goto L85
        L49:
            java.lang.String r4 = "Load image from network [%s]"
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            java.lang.String r5 = r9.memoryCacheKey     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            r3[r2] = r5     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            com.kwad.sdk.core.imageloader.utils.L.d(r4, r3)     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r2 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.NETWORK     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            r9.loadedFrom = r2     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            java.lang.String r2 = r9.uri     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r9.options     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            boolean r3 = r3.isCacheOnDisk()     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            if (r3 == 0) goto L7e
            boolean r3 = r9.tryCacheImageOnDisk()     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            if (r3 == 0) goto L7e
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r3 = r9.configuration     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r3 = r3.diskCache     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            java.lang.String r4 = r9.uri     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            java.io.File r3 = r3.get(r4)     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            if (r3 == 0) goto L7e
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r2 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.FILE     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            java.lang.String r3 = r3.getAbsolutePath()     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            java.lang.String r2 = r2.wrap(r3)     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
        L7e:
            r9.checkTaskNotActual()     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r1 = r9.decodeImage(r2)     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
        L85:
            if (r1 == 0) goto L8d
            boolean r2 = r1.isDecoded()     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            if (r2 != 0) goto Lc3
        L8d:
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r2 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.DECODING_ERROR     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            r9.fireFailEvent(r2, r0)     // Catch: java.lang.Throwable -> L93 java.lang.OutOfMemoryError -> L98 java.io.IOException -> L9d com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> Lbb java.lang.IllegalStateException -> Lbe
            goto Lc3
        L93:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto La3
        L98:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto Laa
        L9d:
            r0 = move-exception
            r8 = r1
            r1 = r0
            r0 = r8
            goto Lb1
        La2:
            r1 = move-exception
        La3:
            com.kwad.sdk.core.imageloader.utils.L.e(r1)
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r2 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.UNKNOWN
            goto Lb6
        La9:
            r1 = move-exception
        Laa:
            com.kwad.sdk.core.imageloader.utils.L.e(r1)
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r2 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.OUT_OF_MEMORY
            goto Lb6
        Lb0:
            r1 = move-exception
        Lb1:
            com.kwad.sdk.core.imageloader.utils.L.e(r1)
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r2 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.IO_ERROR
        Lb6:
            r9.fireFailEvent(r2, r1)
            r1 = r0
            goto Lc3
        Lbb:
            r0 = move-exception
            throw r0
        Lbd:
            r1 = r0
        Lbe:
            com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r2 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.NETWORK_DENIED
            r9.fireFailEvent(r2, r0)
        Lc3:
            return r1
    }

    private boolean waitIfPaused() {
            r6 = this;
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r6.engine
            java.util.concurrent.atomic.AtomicBoolean r0 = r0.getPause()
            boolean r1 = r0.get()
            if (r1 == 0) goto L4d
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r1 = r6.engine
            java.lang.Object r1 = r1.getPauseLock()
            monitor-enter(r1)
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto L48
            java.lang.String r0 = "ImageLoader is paused. Waiting...  [%s]"
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4a
            java.lang.String r4 = r6.memoryCacheKey     // Catch: java.lang.Throwable -> L4a
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.core.imageloader.utils.L.d(r0, r3)     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r0 = r6.engine     // Catch: java.lang.InterruptedException -> L3b java.lang.Throwable -> L4a
            java.lang.Object r0 = r0.getPauseLock()     // Catch: java.lang.InterruptedException -> L3b java.lang.Throwable -> L4a
            r0.wait()     // Catch: java.lang.InterruptedException -> L3b java.lang.Throwable -> L4a
            java.lang.String r0 = ".. Resume loading [%s]"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = r6.memoryCacheKey     // Catch: java.lang.Throwable -> L4a
            r2[r5] = r3     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.core.imageloader.utils.L.d(r0, r2)     // Catch: java.lang.Throwable -> L4a
            goto L48
        L3b:
            java.lang.String r0 = "Task was interrupted [%s]"
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L4a
            java.lang.String r4 = r6.memoryCacheKey     // Catch: java.lang.Throwable -> L4a
            r3[r5] = r4     // Catch: java.lang.Throwable -> L4a
            com.kwad.sdk.core.imageloader.utils.L.e(r0, r3)     // Catch: java.lang.Throwable -> L4a
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L4a
            return r2
        L48:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L4a
            goto L4d
        L4a:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L4a
            throw r0
        L4d:
            boolean r0 = r6.isTaskNotActual()
            return r0
    }

    final java.lang.String getLoadingUri() {
            r1 = this;
            java.lang.String r0 = r1.uri
            return r0
    }

    @Override
    public final boolean onBytesCopied(int r2, int r3) {
            r1 = this;
            boolean r0 = r1.syncLoading
            if (r0 != 0) goto Ld
            boolean r2 = r1.fireProgressEvent(r2, r3)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            return r2
        Ld:
            r2 = 1
            return r2
    }

    @Override
    public final void run() {
            r7 = this;
            boolean r0 = r7.waitIfPaused()
            if (r0 == 0) goto L7
            return
        L7:
            boolean r0 = r7.delayIfNeed()
            if (r0 == 0) goto Le
            return
        Le:
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r0 = r7.imageLoadingInfo
            java.util.concurrent.locks.ReentrantLock r0 = r0.loadFromUriLock
            r1 = 1
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = r7.memoryCacheKey
            r4 = 0
            r2[r4] = r3
            java.lang.String r3 = "Start display image task [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r3, r2)
            boolean r2 = r0.isLocked()
            if (r2 == 0) goto L30
            java.lang.Object[] r2 = new java.lang.Object[r1]
            java.lang.String r3 = r7.memoryCacheKey
            r2[r4] = r3
            java.lang.String r3 = "Image already is loading. Waiting... [%s]"
            com.kwad.sdk.core.imageloader.utils.L.d(r3, r2)
        L30:
            r0.lock()
            r7.checkTaskNotActual()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r2 = r7.configuration     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r2 = r2.memoryCache     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r3 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r2 == 0) goto L59
            boolean r3 = r2.isDecoded()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 != 0) goto L49
            goto L59
        L49:
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r3 = com.kwad.sdk.core.imageloader.core.assist.LoadedFrom.MEMORY_CACHE     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r7.loadedFrom = r3     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r3 = "...Get cached bitmap from memory after waiting. [%s]"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r6 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r5[r4] = r6     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.utils.L.d(r3, r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            goto Lbf
        L59:
            com.kwad.sdk.core.imageloader.core.decode.DecodedResult r2 = r7.tryLoadBitmap()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r2 == 0) goto L10f
            boolean r3 = r2.isDecoded()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 != 0) goto L67
            goto L10f
        L67:
            r7.checkTaskNotActual()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r7.checkTaskInterrupted()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r7.options     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            boolean r3 = r3.shouldPreProcess()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 == 0) goto La1
            java.lang.String r3 = "PreProcess image before caching in memory [%s]"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r6 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r5[r4] = r6     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.utils.L.d(r3, r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            android.graphics.Bitmap r3 = r2.mBitmap     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 == 0) goto L92
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r7.options     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r3 = r3.getPreProcessor()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            android.graphics.Bitmap r5 = r2.mBitmap     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            android.graphics.Bitmap r3 = r3.process(r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r2.mBitmap = r3     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
        L92:
            android.graphics.Bitmap r3 = r2.mBitmap     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 != 0) goto La1
            java.lang.String r3 = "Pre-processor returned null [%s]"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r6 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r5[r4] = r6     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.utils.L.e(r3, r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
        La1:
            if (r2 == 0) goto Lbf
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r7.options     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            boolean r3 = r3.isCacheInMemory()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 == 0) goto Lbf
            java.lang.String r3 = "Cache image in memory [%s]"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r6 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r5[r4] = r6     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.utils.L.d(r3, r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r3 = r7.configuration     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r3 = r3.memoryCache     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r5 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r3.put(r5, r2)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
        Lbf:
            if (r2 == 0) goto Lf1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r7.options     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            boolean r3 = r3.shouldPostProcess()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 == 0) goto Lf1
            java.lang.String r3 = "PostProcess image before displaying [%s]"
            java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r6 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r5[r4] = r6     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.utils.L.d(r3, r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r3 = r7.options     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r3 = r3.getPostProcessor()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            android.graphics.Bitmap r5 = r2.mBitmap     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            android.graphics.Bitmap r3 = r3.process(r5)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r2.mBitmap = r3     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            android.graphics.Bitmap r3 = r2.mBitmap     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            if (r3 != 0) goto Lf1
            java.lang.String r3 = "Post-processor returned null [%s]"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            java.lang.String r5 = r7.memoryCacheKey     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r1[r4] = r5     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            com.kwad.sdk.core.imageloader.utils.L.e(r3, r1)     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
        Lf1:
            r7.checkTaskNotActual()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r7.checkTaskInterrupted()     // Catch: java.lang.Throwable -> L113 com.kwad.sdk.core.imageloader.core.LoadAndDisplayImageTask.TaskCancelledException -> L115
            r0.unlock()
            com.kwad.sdk.core.imageloader.core.DisplayBitmapTask r0 = new com.kwad.sdk.core.imageloader.core.DisplayBitmapTask
            com.kwad.sdk.core.imageloader.core.ImageLoadingInfo r1 = r7.imageLoadingInfo
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3 = r7.engine
            com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r4 = r7.loadedFrom
            r0.<init>(r2, r1, r3, r4)
            boolean r1 = r7.syncLoading
            android.os.Handler r2 = r7.handler
            com.kwad.sdk.core.imageloader.core.ImageLoaderEngine r3 = r7.engine
            runTask(r0, r1, r2, r3)
            return
        L10f:
            r0.unlock()
            return
        L113:
            r1 = move-exception
            goto L11c
        L115:
            r7.fireCancelEvent()     // Catch: java.lang.Throwable -> L113
            r0.unlock()
            return
        L11c:
            r0.unlock()
            throw r1
    }
}

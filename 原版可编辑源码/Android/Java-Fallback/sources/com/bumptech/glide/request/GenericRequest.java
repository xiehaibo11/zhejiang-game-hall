package com.bumptech.glide.request;

public final class GenericRequest<A, T, Z, R> implements com.bumptech.glide.request.Request, com.bumptech.glide.request.target.SizeReadyCallback, com.bumptech.glide.request.ResourceCallback {
    private static final java.util.Queue<com.bumptech.glide.request.GenericRequest<?, ?, ?, ?>> REQUEST_POOL = null;
    private static final java.lang.String TAG = "GenericRequest";
    private static final double TO_MEGABYTE = 9.5367431640625E-7d;
    private com.bumptech.glide.request.animation.GlideAnimationFactory<R> animationFactory;
    private android.content.Context context;
    private com.bumptech.glide.load.engine.DiskCacheStrategy diskCacheStrategy;
    private com.bumptech.glide.load.engine.Engine engine;
    private android.graphics.drawable.Drawable errorDrawable;
    private int errorResourceId;
    private android.graphics.drawable.Drawable fallbackDrawable;
    private int fallbackResourceId;
    private boolean isMemoryCacheable;
    private com.bumptech.glide.provider.LoadProvider<A, T, Z, R> loadProvider;
    private com.bumptech.glide.load.engine.Engine.LoadStatus loadStatus;
    private boolean loadedFromMemoryCache;
    private A model;
    private int overrideHeight;
    private int overrideWidth;
    private android.graphics.drawable.Drawable placeholderDrawable;
    private int placeholderResourceId;
    private com.bumptech.glide.Priority priority;
    private com.bumptech.glide.request.RequestCoordinator requestCoordinator;
    private com.bumptech.glide.request.RequestListener<? super A, R> requestListener;
    private com.bumptech.glide.load.engine.Resource<?> resource;
    private com.bumptech.glide.load.Key signature;
    private float sizeMultiplier;
    private long startTime;
    private com.bumptech.glide.request.GenericRequest.Status status;
    private final java.lang.String tag;
    private com.bumptech.glide.request.target.Target<R> target;
    private java.lang.Class<R> transcodeClass;
    private com.bumptech.glide.load.Transformation<Z> transformation;

    private enum Status extends java.lang.Enum<com.bumptech.glide.request.GenericRequest.Status> {
        private static final com.bumptech.glide.request.GenericRequest.Status[] $VALUES = null;
        public static final com.bumptech.glide.request.GenericRequest.Status CANCELLED = null;
        public static final com.bumptech.glide.request.GenericRequest.Status CLEARED = null;
        public static final com.bumptech.glide.request.GenericRequest.Status COMPLETE = null;
        public static final com.bumptech.glide.request.GenericRequest.Status FAILED = null;
        public static final com.bumptech.glide.request.GenericRequest.Status PAUSED = null;
        public static final com.bumptech.glide.request.GenericRequest.Status PENDING = null;
        public static final com.bumptech.glide.request.GenericRequest.Status RUNNING = null;
        public static final com.bumptech.glide.request.GenericRequest.Status WAITING_FOR_SIZE = null;

        static {
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "PENDING"
                r2 = 0
                r0.<init>(r1, r2)
                com.bumptech.glide.request.GenericRequest.Status.PENDING = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "RUNNING"
                r3 = 1
                r0.<init>(r1, r3)
                com.bumptech.glide.request.GenericRequest.Status.RUNNING = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "WAITING_FOR_SIZE"
                r4 = 2
                r0.<init>(r1, r4)
                com.bumptech.glide.request.GenericRequest.Status.WAITING_FOR_SIZE = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "COMPLETE"
                r5 = 3
                r0.<init>(r1, r5)
                com.bumptech.glide.request.GenericRequest.Status.COMPLETE = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "FAILED"
                r6 = 4
                r0.<init>(r1, r6)
                com.bumptech.glide.request.GenericRequest.Status.FAILED = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "CANCELLED"
                r7 = 5
                r0.<init>(r1, r7)
                com.bumptech.glide.request.GenericRequest.Status.CANCELLED = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "CLEARED"
                r8 = 6
                r0.<init>(r1, r8)
                com.bumptech.glide.request.GenericRequest.Status.CLEARED = r0
                com.bumptech.glide.request.GenericRequest$Status r0 = new com.bumptech.glide.request.GenericRequest$Status
                java.lang.String r1 = "PAUSED"
                r9 = 7
                r0.<init>(r1, r9)
                com.bumptech.glide.request.GenericRequest.Status.PAUSED = r0
                r1 = 8
                com.bumptech.glide.request.GenericRequest$Status[] r1 = new com.bumptech.glide.request.GenericRequest.Status[r1]
                com.bumptech.glide.request.GenericRequest$Status r10 = com.bumptech.glide.request.GenericRequest.Status.PENDING
                r1[r2] = r10
                com.bumptech.glide.request.GenericRequest$Status r2 = com.bumptech.glide.request.GenericRequest.Status.RUNNING
                r1[r3] = r2
                com.bumptech.glide.request.GenericRequest$Status r2 = com.bumptech.glide.request.GenericRequest.Status.WAITING_FOR_SIZE
                r1[r4] = r2
                com.bumptech.glide.request.GenericRequest$Status r2 = com.bumptech.glide.request.GenericRequest.Status.COMPLETE
                r1[r5] = r2
                com.bumptech.glide.request.GenericRequest$Status r2 = com.bumptech.glide.request.GenericRequest.Status.FAILED
                r1[r6] = r2
                com.bumptech.glide.request.GenericRequest$Status r2 = com.bumptech.glide.request.GenericRequest.Status.CANCELLED
                r1[r7] = r2
                com.bumptech.glide.request.GenericRequest$Status r2 = com.bumptech.glide.request.GenericRequest.Status.CLEARED
                r1[r8] = r2
                r1[r9] = r0
                com.bumptech.glide.request.GenericRequest.Status.$VALUES = r1
                return
        }

        Status(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.bumptech.glide.request.GenericRequest.Status valueOf(java.lang.String r1) {
                java.lang.Class<com.bumptech.glide.request.GenericRequest$Status> r0 = com.bumptech.glide.request.GenericRequest.Status.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.bumptech.glide.request.GenericRequest$Status r1 = (com.bumptech.glide.request.GenericRequest.Status) r1
                return r1
        }

        public static com.bumptech.glide.request.GenericRequest.Status[] values() {
                com.bumptech.glide.request.GenericRequest$Status[] r0 = com.bumptech.glide.request.GenericRequest.Status.$VALUES
                java.lang.Object r0 = r0.clone()
                com.bumptech.glide.request.GenericRequest$Status[] r0 = (com.bumptech.glide.request.GenericRequest.Status[]) r0
                return r0
        }
    }

    static {
            r0 = 0
            java.util.Queue r0 = com.bumptech.glide.util.Util.createQueue(r0)
            com.bumptech.glide.request.GenericRequest.REQUEST_POOL = r0
            return
    }

    private GenericRequest() {
            r1 = this;
            r1.<init>()
            int r0 = r1.hashCode()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.tag = r0
            return
    }

    private boolean canNotifyStatusChanged() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.requestCoordinator
            if (r0 == 0) goto Ld
            boolean r0 = r0.canNotifyStatusChanged(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    private boolean canSetResource() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.requestCoordinator
            if (r0 == 0) goto Ld
            boolean r0 = r0.canSetImage(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    private static void check(java.lang.String r0, java.lang.Object r1, java.lang.String r2) {
            if (r1 != 0) goto L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r0)
            java.lang.String r0 = " must not be null"
            r1.append(r0)
            if (r2 == 0) goto L16
            java.lang.String r0 = ", "
            r1.append(r0)
            r1.append(r2)
        L16:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L20:
            return
    }

    private android.graphics.drawable.Drawable getErrorDrawable() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.errorDrawable
            if (r0 != 0) goto L16
            int r0 = r2.errorResourceId
            if (r0 <= 0) goto L16
            android.content.Context r0 = r2.context
            android.content.res.Resources r0 = r0.getResources()
            int r1 = r2.errorResourceId
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            r2.errorDrawable = r0
        L16:
            android.graphics.drawable.Drawable r0 = r2.errorDrawable
            return r0
    }

    private android.graphics.drawable.Drawable getFallbackDrawable() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.fallbackDrawable
            if (r0 != 0) goto L16
            int r0 = r2.fallbackResourceId
            if (r0 <= 0) goto L16
            android.content.Context r0 = r2.context
            android.content.res.Resources r0 = r0.getResources()
            int r1 = r2.fallbackResourceId
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            r2.fallbackDrawable = r0
        L16:
            android.graphics.drawable.Drawable r0 = r2.fallbackDrawable
            return r0
    }

    private android.graphics.drawable.Drawable getPlaceholderDrawable() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.placeholderDrawable
            if (r0 != 0) goto L16
            int r0 = r2.placeholderResourceId
            if (r0 <= 0) goto L16
            android.content.Context r0 = r2.context
            android.content.res.Resources r0 = r0.getResources()
            int r1 = r2.placeholderResourceId
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            r2.placeholderDrawable = r0
        L16:
            android.graphics.drawable.Drawable r0 = r2.placeholderDrawable
            return r0
    }

    private void init(com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r8, A r9, com.bumptech.glide.load.Key r10, android.content.Context r11, com.bumptech.glide.Priority r12, com.bumptech.glide.request.target.Target<R> r13, float r14, android.graphics.drawable.Drawable r15, int r16, android.graphics.drawable.Drawable r17, int r18, android.graphics.drawable.Drawable r19, int r20, com.bumptech.glide.request.RequestListener<? super A, R> r21, com.bumptech.glide.request.RequestCoordinator r22, com.bumptech.glide.load.engine.Engine r23, com.bumptech.glide.load.Transformation<Z> r24, java.lang.Class<R> r25, boolean r26, com.bumptech.glide.request.animation.GlideAnimationFactory<R> r27, int r28, int r29, com.bumptech.glide.load.engine.DiskCacheStrategy r30) {
            r7 = this;
            r0 = r7
            r1 = r9
            r2 = r24
            r3 = r8
            r0.loadProvider = r3
            r0.model = r1
            r4 = r10
            r0.signature = r4
            r4 = r19
            r0.fallbackDrawable = r4
            r4 = r20
            r0.fallbackResourceId = r4
            android.content.Context r4 = r11.getApplicationContext()
            r0.context = r4
            r4 = r12
            r0.priority = r4
            r4 = r13
            r0.target = r4
            r4 = r14
            r0.sizeMultiplier = r4
            r4 = r15
            r0.placeholderDrawable = r4
            r4 = r16
            r0.placeholderResourceId = r4
            r4 = r17
            r0.errorDrawable = r4
            r4 = r18
            r0.errorResourceId = r4
            r4 = r21
            r0.requestListener = r4
            r4 = r22
            r0.requestCoordinator = r4
            r4 = r23
            r0.engine = r4
            r0.transformation = r2
            r4 = r25
            r0.transcodeClass = r4
            r4 = r26
            r0.isMemoryCacheable = r4
            r4 = r27
            r0.animationFactory = r4
            r4 = r28
            r0.overrideWidth = r4
            r4 = r29
            r0.overrideHeight = r4
            r4 = r30
            r0.diskCacheStrategy = r4
            com.bumptech.glide.request.GenericRequest$Status r5 = com.bumptech.glide.request.GenericRequest.Status.PENDING
            r0.status = r5
            if (r1 == 0) goto Lc0
            com.bumptech.glide.load.model.ModelLoader r1 = r8.getModelLoader()
            java.lang.String r5 = "ModelLoader"
            java.lang.String r6 = "try .using(ModelLoader)"
            check(r5, r1, r6)
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r1 = r8.getTranscoder()
            java.lang.String r5 = "Transcoder"
            java.lang.String r6 = "try .as*(Class).transcode(ResourceTranscoder)"
            check(r5, r1, r6)
            java.lang.String r1 = "Transformation"
            java.lang.String r5 = "try .transform(UnitTransformation.get())"
            check(r1, r2, r5)
            boolean r1 = r30.cacheSource()
            if (r1 == 0) goto L8d
            com.bumptech.glide.load.Encoder r1 = r8.getSourceEncoder()
            java.lang.String r2 = "SourceEncoder"
            java.lang.String r5 = "try .sourceEncoder(Encoder) or .diskCacheStrategy(NONE/RESULT)"
            check(r2, r1, r5)
            goto L98
        L8d:
            com.bumptech.glide.load.ResourceDecoder r1 = r8.getSourceDecoder()
            java.lang.String r2 = "SourceDecoder"
            java.lang.String r5 = "try .decoder/.imageDecoder/.videoDecoder(ResourceDecoder) or .diskCacheStrategy(ALL/SOURCE)"
            check(r2, r1, r5)
        L98:
            boolean r1 = r30.cacheSource()
            if (r1 != 0) goto La4
            boolean r1 = r30.cacheResult()
            if (r1 == 0) goto Laf
        La4:
            com.bumptech.glide.load.ResourceDecoder r1 = r8.getCacheDecoder()
            java.lang.String r2 = "CacheDecoder"
            java.lang.String r5 = "try .cacheDecoder(ResouceDecoder) or .diskCacheStrategy(NONE)"
            check(r2, r1, r5)
        Laf:
            boolean r1 = r30.cacheResult()
            if (r1 == 0) goto Lc0
            com.bumptech.glide.load.ResourceEncoder r1 = r8.getEncoder()
            java.lang.String r2 = "Encoder"
            java.lang.String r3 = "try .encode(ResourceEncoder) or .diskCacheStrategy(NONE/SOURCE)"
            check(r2, r1, r3)
        Lc0:
            return
    }

    private boolean isFirstReadyResource() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.requestCoordinator
            if (r0 == 0) goto Ld
            boolean r0 = r0.isAnyResourceSet()
            if (r0 != 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    private void logV(java.lang.String r2) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " this: "
            r0.append(r2)
            java.lang.String r2 = r1.tag
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "GenericRequest"
            android.util.Log.v(r0, r2)
            return
    }

    private void notifyLoadSuccess() {
            r1 = this;
            com.bumptech.glide.request.RequestCoordinator r0 = r1.requestCoordinator
            if (r0 == 0) goto L7
            r0.onRequestSuccess(r1)
        L7:
            return
    }

    public static <A, T, Z, R> com.bumptech.glide.request.GenericRequest<A, T, Z, R> obtain(com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r25, A r26, com.bumptech.glide.load.Key r27, android.content.Context r28, com.bumptech.glide.Priority r29, com.bumptech.glide.request.target.Target<R> r30, float r31, android.graphics.drawable.Drawable r32, int r33, android.graphics.drawable.Drawable r34, int r35, android.graphics.drawable.Drawable r36, int r37, com.bumptech.glide.request.RequestListener<? super A, R> r38, com.bumptech.glide.request.RequestCoordinator r39, com.bumptech.glide.load.engine.Engine r40, com.bumptech.glide.load.Transformation<Z> r41, java.lang.Class<R> r42, boolean r43, com.bumptech.glide.request.animation.GlideAnimationFactory<R> r44, int r45, int r46, com.bumptech.glide.load.engine.DiskCacheStrategy r47) {
            java.util.Queue<com.bumptech.glide.request.GenericRequest<?, ?, ?, ?>> r0 = com.bumptech.glide.request.GenericRequest.REQUEST_POOL
            java.lang.Object r0 = r0.poll()
            com.bumptech.glide.request.GenericRequest r0 = (com.bumptech.glide.request.GenericRequest) r0
            if (r0 != 0) goto Lf
            com.bumptech.glide.request.GenericRequest r0 = new com.bumptech.glide.request.GenericRequest
            r0.<init>()
        Lf:
            r1 = r0
            r2 = r25
            r3 = r26
            r4 = r27
            r5 = r28
            r6 = r29
            r7 = r30
            r8 = r31
            r9 = r32
            r10 = r33
            r11 = r34
            r12 = r35
            r13 = r36
            r14 = r37
            r15 = r38
            r16 = r39
            r17 = r40
            r18 = r41
            r19 = r42
            r20 = r43
            r21 = r44
            r22 = r45
            r23 = r46
            r24 = r47
            r1.init(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24)
            return r0
    }

    private void onResourceReady(com.bumptech.glide.load.engine.Resource<?> r8, R r9) {
            r7 = this;
            boolean r6 = r7.isFirstReadyResource()
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.COMPLETE
            r7.status = r0
            r7.resource = r8
            com.bumptech.glide.request.RequestListener<? super A, R> r0 = r7.requestListener
            if (r0 == 0) goto L1c
            A r2 = r7.model
            com.bumptech.glide.request.target.Target<R> r3 = r7.target
            boolean r4 = r7.loadedFromMemoryCache
            r1 = r9
            r5 = r6
            boolean r0 = r0.onResourceReady(r1, r2, r3, r4, r5)
            if (r0 != 0) goto L29
        L1c:
            com.bumptech.glide.request.animation.GlideAnimationFactory<R> r0 = r7.animationFactory
            boolean r1 = r7.loadedFromMemoryCache
            com.bumptech.glide.request.animation.GlideAnimation r0 = r0.build(r1, r6)
            com.bumptech.glide.request.target.Target<R> r1 = r7.target
            r1.onResourceReady(r9, r0)
        L29:
            r7.notifyLoadSuccess()
            r9 = 2
            java.lang.String r0 = "GenericRequest"
            boolean r9 = android.util.Log.isLoggable(r0, r9)
            if (r9 == 0) goto L6d
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Resource ready in "
            r9.append(r0)
            long r0 = r7.startTime
            double r0 = com.bumptech.glide.util.LogTime.getElapsedMillis(r0)
            r9.append(r0)
            java.lang.String r0 = " size: "
            r9.append(r0)
            int r8 = r8.getSize()
            double r0 = (double) r8
            r2 = 4517110426252607488(0x3eb0000000000000, double:9.5367431640625E-7)
            java.lang.Double.isNaN(r0)
            double r0 = r0 * r2
            r9.append(r0)
            java.lang.String r8 = " fromCache: "
            r9.append(r8)
            boolean r8 = r7.loadedFromMemoryCache
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            r7.logV(r8)
        L6d:
            return
    }

    private void releaseResource(com.bumptech.glide.load.engine.Resource r2) {
            r1 = this;
            com.bumptech.glide.load.engine.Engine r0 = r1.engine
            r0.release(r2)
            r2 = 0
            r1.resource = r2
            return
    }

    private void setErrorPlaceholder(java.lang.Exception r3) {
            r2 = this;
            boolean r0 = r2.canNotifyStatusChanged()
            if (r0 != 0) goto L7
            return
        L7:
            A r0 = r2.model
            if (r0 != 0) goto L10
            android.graphics.drawable.Drawable r0 = r2.getFallbackDrawable()
            goto L11
        L10:
            r0 = 0
        L11:
            if (r0 != 0) goto L17
            android.graphics.drawable.Drawable r0 = r2.getErrorDrawable()
        L17:
            if (r0 != 0) goto L1d
            android.graphics.drawable.Drawable r0 = r2.getPlaceholderDrawable()
        L1d:
            com.bumptech.glide.request.target.Target<R> r1 = r2.target
            r1.onLoadFailed(r3, r0)
            return
    }

    @Override
    public void begin() {
            r3 = this;
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            r3.startTime = r0
            A r0 = r3.model
            if (r0 != 0) goto Lf
            r0 = 0
            r3.onException(r0)
            return
        Lf:
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.WAITING_FOR_SIZE
            r3.status = r0
            int r0 = r3.overrideWidth
            int r1 = r3.overrideHeight
            boolean r0 = com.bumptech.glide.util.Util.isValidDimensions(r0, r1)
            if (r0 == 0) goto L25
            int r0 = r3.overrideWidth
            int r1 = r3.overrideHeight
            r3.onSizeReady(r0, r1)
            goto L2a
        L25:
            com.bumptech.glide.request.target.Target<R> r0 = r3.target
            r0.getSize(r3)
        L2a:
            boolean r0 = r3.isComplete()
            if (r0 != 0) goto L45
            boolean r0 = r3.isFailed()
            if (r0 != 0) goto L45
            boolean r0 = r3.canNotifyStatusChanged()
            if (r0 == 0) goto L45
            com.bumptech.glide.request.target.Target<R> r0 = r3.target
            android.graphics.drawable.Drawable r1 = r3.getPlaceholderDrawable()
            r0.onLoadStarted(r1)
        L45:
            r0 = 2
            java.lang.String r1 = "GenericRequest"
            boolean r0 = android.util.Log.isLoggable(r1, r0)
            if (r0 == 0) goto L68
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "finished run method in "
            r0.append(r1)
            long r1 = r3.startTime
            double r1 = com.bumptech.glide.util.LogTime.getElapsedMillis(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.logV(r0)
        L68:
            return
    }

    void cancel() {
            r1 = this;
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.CANCELLED
            r1.status = r0
            com.bumptech.glide.load.engine.Engine$LoadStatus r0 = r1.loadStatus
            if (r0 == 0) goto Le
            r0.cancel()
            r0 = 0
            r1.loadStatus = r0
        Le:
            return
    }

    @Override
    public void clear() {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.CLEARED
            if (r0 != r1) goto La
            return
        La:
            r2.cancel()
            com.bumptech.glide.load.engine.Resource<?> r0 = r2.resource
            if (r0 == 0) goto L14
            r2.releaseResource(r0)
        L14:
            boolean r0 = r2.canNotifyStatusChanged()
            if (r0 == 0) goto L23
            com.bumptech.glide.request.target.Target<R> r0 = r2.target
            android.graphics.drawable.Drawable r1 = r2.getPlaceholderDrawable()
            r0.onLoadCleared(r1)
        L23:
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.CLEARED
            r2.status = r0
            return
    }

    @Override
    public boolean isCancelled() {
            r2 = this;
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.CANCELLED
            if (r0 == r1) goto Lf
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.CLEARED
            if (r0 != r1) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    @Override
    public boolean isComplete() {
            r2 = this;
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.COMPLETE
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public boolean isFailed() {
            r2 = this;
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.FAILED
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public boolean isPaused() {
            r2 = this;
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.PAUSED
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public boolean isResourceSet() {
            r1 = this;
            boolean r0 = r1.isComplete()
            return r0
    }

    @Override
    public boolean isRunning() {
            r2 = this;
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.RUNNING
            if (r0 == r1) goto Lf
            com.bumptech.glide.request.GenericRequest$Status r0 = r2.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.WAITING_FOR_SIZE
            if (r0 != r1) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    @Override
    public void onException(java.lang.Exception r5) {
            r4 = this;
            java.lang.String r0 = "GenericRequest"
            r1 = 3
            boolean r1 = android.util.Log.isLoggable(r0, r1)
            if (r1 == 0) goto Le
            java.lang.String r1 = "load failed"
            android.util.Log.d(r0, r1, r5)
        Le:
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.FAILED
            r4.status = r0
            com.bumptech.glide.request.RequestListener<? super A, R> r0 = r4.requestListener
            if (r0 == 0) goto L24
            A r1 = r4.model
            com.bumptech.glide.request.target.Target<R> r2 = r4.target
            boolean r3 = r4.isFirstReadyResource()
            boolean r0 = r0.onException(r5, r1, r2, r3)
            if (r0 != 0) goto L27
        L24:
            r4.setErrorPlaceholder(r5)
        L27:
            return
    }

    @Override
    public void onResourceReady(com.bumptech.glide.load.engine.Resource<?> r6) {
            r5 = this;
            if (r6 != 0) goto L23
            java.lang.Exception r6 = new java.lang.Exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Expected to receive a Resource<R> with an object of "
            r0.append(r1)
            java.lang.Class<R> r1 = r5.transcodeClass
            r0.append(r1)
            java.lang.String r1 = " inside, but instead got null."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            r5.onException(r6)
            return
        L23:
            java.lang.Object r0 = r6.get()
            if (r0 == 0) goto L48
            java.lang.Class<R> r1 = r5.transcodeClass
            java.lang.Class r2 = r0.getClass()
            boolean r1 = r1.isAssignableFrom(r2)
            if (r1 != 0) goto L36
            goto L48
        L36:
            boolean r1 = r5.canSetResource()
            if (r1 != 0) goto L44
            r5.releaseResource(r6)
            com.bumptech.glide.request.GenericRequest$Status r6 = com.bumptech.glide.request.GenericRequest.Status.COMPLETE
            r5.status = r6
            return
        L44:
            r5.onResourceReady(r6, r0)
            return
        L48:
            r5.releaseResource(r6)
            java.lang.Exception r1 = new java.lang.Exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected to receive an object of "
            r2.append(r3)
            java.lang.Class<R> r3 = r5.transcodeClass
            r2.append(r3)
            java.lang.String r3 = " but instead got "
            r2.append(r3)
            java.lang.String r3 = ""
            if (r0 == 0) goto L6a
            java.lang.Class r4 = r0.getClass()
            goto L6b
        L6a:
            r4 = r3
        L6b:
            r2.append(r4)
            java.lang.String r4 = "{"
            r2.append(r4)
            r2.append(r0)
            java.lang.String r4 = "}"
            r2.append(r4)
            java.lang.String r4 = " inside Resource{"
            r2.append(r4)
            r2.append(r6)
            java.lang.String r6 = "}."
            r2.append(r6)
            if (r0 == 0) goto L8b
            goto L8d
        L8b:
            java.lang.String r3 = " To indicate failure return a null Resource object, rather than a Resource object containing null data."
        L8d:
            r2.append(r3)
            java.lang.String r6 = r2.toString()
            r1.<init>(r6)
            r5.onException(r1)
            return
    }

    @Override
    public void onSizeReady(int r17, int r18) {
            r16 = this;
            r12 = r16
            java.lang.String r13 = "GenericRequest"
            r14 = 2
            boolean r0 = android.util.Log.isLoggable(r13, r14)
            if (r0 == 0) goto L25
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Got onSizeReady in "
            r0.append(r1)
            long r1 = r12.startTime
            double r1 = com.bumptech.glide.util.LogTime.getElapsedMillis(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r12.logV(r0)
        L25:
            com.bumptech.glide.request.GenericRequest$Status r0 = r12.status
            com.bumptech.glide.request.GenericRequest$Status r1 = com.bumptech.glide.request.GenericRequest.Status.WAITING_FOR_SIZE
            if (r0 == r1) goto L2c
            return
        L2c:
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.RUNNING
            r12.status = r0
            float r0 = r12.sizeMultiplier
            r1 = r17
            float r1 = (float) r1
            float r0 = r0 * r1
            int r2 = java.lang.Math.round(r0)
            float r0 = r12.sizeMultiplier
            r1 = r18
            float r1 = (float) r1
            float r0 = r0 * r1
            int r3 = java.lang.Math.round(r0)
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r12.loadProvider
            com.bumptech.glide.load.model.ModelLoader r0 = r0.getModelLoader()
            A r1 = r12.model
            com.bumptech.glide.load.data.DataFetcher r4 = r0.getResourceFetcher(r1, r2, r3)
            if (r4 != 0) goto L75
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed to load model: '"
            r1.append(r2)
            A r2 = r12.model
            r1.append(r2)
            java.lang.String r2 = "'"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            r12.onException(r0)
            return
        L75:
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r0 = r12.loadProvider
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r7 = r0.getTranscoder()
            boolean r0 = android.util.Log.isLoggable(r13, r14)
            if (r0 == 0) goto L9b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "finished setup for calling load in "
            r0.append(r1)
            long r5 = r12.startTime
            double r5 = com.bumptech.glide.util.LogTime.getElapsedMillis(r5)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r12.logV(r0)
        L9b:
            r15 = 1
            r12.loadedFromMemoryCache = r15
            com.bumptech.glide.load.engine.Engine r0 = r12.engine
            com.bumptech.glide.load.Key r1 = r12.signature
            com.bumptech.glide.provider.LoadProvider<A, T, Z, R> r5 = r12.loadProvider
            com.bumptech.glide.load.Transformation<Z> r6 = r12.transformation
            com.bumptech.glide.Priority r8 = r12.priority
            boolean r9 = r12.isMemoryCacheable
            com.bumptech.glide.load.engine.DiskCacheStrategy r10 = r12.diskCacheStrategy
            r11 = r16
            com.bumptech.glide.load.engine.Engine$LoadStatus r0 = r0.load(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r12.loadStatus = r0
            com.bumptech.glide.load.engine.Resource<?> r0 = r12.resource
            if (r0 == 0) goto Lb9
            goto Lba
        Lb9:
            r15 = 0
        Lba:
            r12.loadedFromMemoryCache = r15
            boolean r0 = android.util.Log.isLoggable(r13, r14)
            if (r0 == 0) goto Ldc
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "finished onSizeReady in "
            r0.append(r1)
            long r1 = r12.startTime
            double r1 = com.bumptech.glide.util.LogTime.getElapsedMillis(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r12.logV(r0)
        Ldc:
            return
    }

    @Override
    public void pause() {
            r1 = this;
            r1.clear()
            com.bumptech.glide.request.GenericRequest$Status r0 = com.bumptech.glide.request.GenericRequest.Status.PAUSED
            r1.status = r0
            return
    }

    @Override
    public void recycle() {
            r2 = this;
            r0 = 0
            r2.loadProvider = r0
            r2.model = r0
            r2.context = r0
            r2.target = r0
            r2.placeholderDrawable = r0
            r2.errorDrawable = r0
            r2.fallbackDrawable = r0
            r2.requestListener = r0
            r2.requestCoordinator = r0
            r2.transformation = r0
            r2.animationFactory = r0
            r1 = 0
            r2.loadedFromMemoryCache = r1
            r2.loadStatus = r0
            java.util.Queue<com.bumptech.glide.request.GenericRequest<?, ?, ?, ?>> r0 = com.bumptech.glide.request.GenericRequest.REQUEST_POOL
            r0.offer(r2)
            return
    }
}

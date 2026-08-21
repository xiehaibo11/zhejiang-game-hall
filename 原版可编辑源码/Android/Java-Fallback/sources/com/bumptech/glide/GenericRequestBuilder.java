package com.bumptech.glide;

public class GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> implements java.lang.Cloneable {
    private com.bumptech.glide.request.animation.GlideAnimationFactory<TranscodeType> animationFactory;
    protected final android.content.Context context;
    private com.bumptech.glide.load.engine.DiskCacheStrategy diskCacheStrategy;
    private int errorId;
    private android.graphics.drawable.Drawable errorPlaceholder;
    private android.graphics.drawable.Drawable fallbackDrawable;
    private int fallbackResource;
    protected final com.bumptech.glide.Glide glide;
    private boolean isCacheable;
    private boolean isModelSet;
    private boolean isThumbnailBuilt;
    private boolean isTransformationSet;
    protected final com.bumptech.glide.manager.Lifecycle lifecycle;
    private com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> loadProvider;
    private ModelType model;
    protected final java.lang.Class<ModelType> modelClass;
    private int overrideHeight;
    private int overrideWidth;
    private android.graphics.drawable.Drawable placeholderDrawable;
    private int placeholderId;
    private com.bumptech.glide.Priority priority;
    private com.bumptech.glide.request.RequestListener<? super ModelType, TranscodeType> requestListener;
    protected final com.bumptech.glide.manager.RequestTracker requestTracker;
    private com.bumptech.glide.load.Key signature;
    private java.lang.Float sizeMultiplier;
    private java.lang.Float thumbSizeMultiplier;
    private com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> thumbnailRequestBuilder;
    protected final java.lang.Class<TranscodeType> transcodeClass;
    private com.bumptech.glide.load.Transformation<ResourceType> transformation;


    static class 2 {
        static final int[] $SwitchMap$android$widget$ImageView$ScaleType = null;

        static {
                android.widget.ImageView$ScaleType[] r0 = android.widget.ImageView.ScaleType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.bumptech.glide.GenericRequestBuilder.2.$SwitchMap$android$widget$ImageView$ScaleType = r0
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.bumptech.glide.GenericRequestBuilder.2.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L1d
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_CENTER     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.bumptech.glide.GenericRequestBuilder.2.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L28
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_START     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.bumptech.glide.GenericRequestBuilder.2.$SwitchMap$android$widget$ImageView$ScaleType     // Catch: java.lang.NoSuchFieldError -> L33
                android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.FIT_END     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    GenericRequestBuilder(android.content.Context r3, java.lang.Class<ModelType> r4, com.bumptech.glide.provider.LoadProvider<ModelType, DataType, ResourceType, TranscodeType> r5, java.lang.Class<TranscodeType> r6, com.bumptech.glide.Glide r7, com.bumptech.glide.manager.RequestTracker r8, com.bumptech.glide.manager.Lifecycle r9) {
            r2 = this;
            r2.<init>()
            com.bumptech.glide.signature.EmptySignature r0 = com.bumptech.glide.signature.EmptySignature.obtain()
            r2.signature = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            java.lang.Float r0 = java.lang.Float.valueOf(r0)
            r2.sizeMultiplier = r0
            r0 = 0
            r2.priority = r0
            r1 = 1
            r2.isCacheable = r1
            com.bumptech.glide.request.animation.GlideAnimationFactory r1 = com.bumptech.glide.request.animation.NoAnimation.getFactory()
            r2.animationFactory = r1
            r1 = -1
            r2.overrideHeight = r1
            r2.overrideWidth = r1
            com.bumptech.glide.load.engine.DiskCacheStrategy r1 = com.bumptech.glide.load.engine.DiskCacheStrategy.RESULT
            r2.diskCacheStrategy = r1
            com.bumptech.glide.load.resource.UnitTransformation r1 = com.bumptech.glide.load.resource.UnitTransformation.get()
            r2.transformation = r1
            r2.context = r3
            r2.modelClass = r4
            r2.transcodeClass = r6
            r2.glide = r7
            r2.requestTracker = r8
            r2.lifecycle = r9
            if (r5 == 0) goto L3f
            com.bumptech.glide.provider.ChildLoadProvider r0 = new com.bumptech.glide.provider.ChildLoadProvider
            r0.<init>(r5)
        L3f:
            r2.loadProvider = r0
            if (r3 == 0) goto L51
            if (r4 == 0) goto L50
            if (r5 == 0) goto L48
            goto L50
        L48:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "LoadProvider must not be null"
            r3.<init>(r4)
            throw r3
        L50:
            return
        L51:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r4 = "Context can't be null"
            r3.<init>(r4)
            throw r3
    }

    GenericRequestBuilder(com.bumptech.glide.provider.LoadProvider<ModelType, DataType, ResourceType, TranscodeType> r9, java.lang.Class<TranscodeType> r10, com.bumptech.glide.GenericRequestBuilder<ModelType, ?, ?, ?> r11) {
            r8 = this;
            android.content.Context r1 = r11.context
            java.lang.Class<ModelType> r2 = r11.modelClass
            com.bumptech.glide.Glide r5 = r11.glide
            com.bumptech.glide.manager.RequestTracker r6 = r11.requestTracker
            com.bumptech.glide.manager.Lifecycle r7 = r11.lifecycle
            r0 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            ModelType r9 = r11.model
            r8.model = r9
            boolean r9 = r11.isModelSet
            r8.isModelSet = r9
            com.bumptech.glide.load.Key r9 = r11.signature
            r8.signature = r9
            com.bumptech.glide.load.engine.DiskCacheStrategy r9 = r11.diskCacheStrategy
            r8.diskCacheStrategy = r9
            boolean r9 = r11.isCacheable
            r8.isCacheable = r9
            return
    }

    private com.bumptech.glide.request.Request buildRequest(com.bumptech.glide.request.target.Target<TranscodeType> r2) {
            r1 = this;
            com.bumptech.glide.Priority r0 = r1.priority
            if (r0 != 0) goto L8
            com.bumptech.glide.Priority r0 = com.bumptech.glide.Priority.NORMAL
            r1.priority = r0
        L8:
            r0 = 0
            com.bumptech.glide.request.Request r2 = r1.buildRequestRecursive(r2, r0)
            return r2
    }

    private com.bumptech.glide.request.Request buildRequestRecursive(com.bumptech.glide.request.target.Target<TranscodeType> r4, com.bumptech.glide.request.ThumbnailRequestCoordinator r5) {
            r3 = this;
            com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r0 = r3.thumbnailRequestBuilder
            if (r0 == 0) goto L6e
            boolean r1 = r3.isThumbnailBuilt
            if (r1 != 0) goto L66
            com.bumptech.glide.request.animation.GlideAnimationFactory<TranscodeType> r0 = r0.animationFactory
            com.bumptech.glide.request.animation.GlideAnimationFactory r1 = com.bumptech.glide.request.animation.NoAnimation.getFactory()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1a
            com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r0 = r3.thumbnailRequestBuilder
            com.bumptech.glide.request.animation.GlideAnimationFactory<TranscodeType> r1 = r3.animationFactory
            r0.animationFactory = r1
        L1a:
            com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r0 = r3.thumbnailRequestBuilder
            com.bumptech.glide.Priority r1 = r0.priority
            if (r1 != 0) goto L26
            com.bumptech.glide.Priority r1 = r3.getThumbnailPriority()
            r0.priority = r1
        L26:
            int r0 = r3.overrideWidth
            int r1 = r3.overrideHeight
            boolean r0 = com.bumptech.glide.util.Util.isValidDimensions(r0, r1)
            if (r0 == 0) goto L45
            com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r0 = r3.thumbnailRequestBuilder
            int r1 = r0.overrideWidth
            int r0 = r0.overrideHeight
            boolean r0 = com.bumptech.glide.util.Util.isValidDimensions(r1, r0)
            if (r0 != 0) goto L45
            com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r0 = r3.thumbnailRequestBuilder
            int r1 = r3.overrideWidth
            int r2 = r3.overrideHeight
            r0.override(r1, r2)
        L45:
            com.bumptech.glide.request.ThumbnailRequestCoordinator r0 = new com.bumptech.glide.request.ThumbnailRequestCoordinator
            r0.<init>(r5)
            java.lang.Float r5 = r3.sizeMultiplier
            float r5 = r5.floatValue()
            com.bumptech.glide.Priority r1 = r3.priority
            com.bumptech.glide.request.Request r5 = r3.obtainRequest(r4, r5, r1, r0)
            r1 = 1
            r3.isThumbnailBuilt = r1
            com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r1 = r3.thumbnailRequestBuilder
            com.bumptech.glide.request.Request r4 = r1.buildRequestRecursive(r4, r0)
            r1 = 0
            r3.isThumbnailBuilt = r1
            r0.setRequests(r5, r4)
            return r0
        L66:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r5 = "You cannot use a request as both the main request and a thumbnail, consider using clone() on the request(s) passed to thumbnail()"
            r4.<init>(r5)
            throw r4
        L6e:
            java.lang.Float r0 = r3.thumbSizeMultiplier
            if (r0 == 0) goto L95
            com.bumptech.glide.request.ThumbnailRequestCoordinator r0 = new com.bumptech.glide.request.ThumbnailRequestCoordinator
            r0.<init>(r5)
            java.lang.Float r5 = r3.sizeMultiplier
            float r5 = r5.floatValue()
            com.bumptech.glide.Priority r1 = r3.priority
            com.bumptech.glide.request.Request r5 = r3.obtainRequest(r4, r5, r1, r0)
            java.lang.Float r1 = r3.thumbSizeMultiplier
            float r1 = r1.floatValue()
            com.bumptech.glide.Priority r2 = r3.getThumbnailPriority()
            com.bumptech.glide.request.Request r4 = r3.obtainRequest(r4, r1, r2, r0)
            r0.setRequests(r5, r4)
            return r0
        L95:
            java.lang.Float r0 = r3.sizeMultiplier
            float r0 = r0.floatValue()
            com.bumptech.glide.Priority r1 = r3.priority
            com.bumptech.glide.request.Request r4 = r3.obtainRequest(r4, r0, r1, r5)
            return r4
    }

    private com.bumptech.glide.Priority getThumbnailPriority() {
            r2 = this;
            com.bumptech.glide.Priority r0 = r2.priority
            com.bumptech.glide.Priority r1 = com.bumptech.glide.Priority.LOW
            if (r0 != r1) goto L9
            com.bumptech.glide.Priority r0 = com.bumptech.glide.Priority.NORMAL
            goto L14
        L9:
            com.bumptech.glide.Priority r0 = r2.priority
            com.bumptech.glide.Priority r1 = com.bumptech.glide.Priority.NORMAL
            if (r0 != r1) goto L12
            com.bumptech.glide.Priority r0 = com.bumptech.glide.Priority.HIGH
            goto L14
        L12:
            com.bumptech.glide.Priority r0 = com.bumptech.glide.Priority.IMMEDIATE
        L14:
            return r0
    }

    private com.bumptech.glide.request.Request obtainRequest(com.bumptech.glide.request.target.Target<TranscodeType> r25, float r26, com.bumptech.glide.Priority r27, com.bumptech.glide.request.RequestCoordinator r28) {
            r24 = this;
            r0 = r24
            r6 = r25
            r7 = r26
            r5 = r27
            r15 = r28
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r1 = r0.loadProvider
            ModelType r2 = r0.model
            com.bumptech.glide.load.Key r3 = r0.signature
            android.content.Context r4 = r0.context
            android.graphics.drawable.Drawable r8 = r0.placeholderDrawable
            int r9 = r0.placeholderId
            android.graphics.drawable.Drawable r10 = r0.errorPlaceholder
            int r11 = r0.errorId
            android.graphics.drawable.Drawable r12 = r0.fallbackDrawable
            int r13 = r0.fallbackResource
            com.bumptech.glide.request.RequestListener<? super ModelType, TranscodeType> r14 = r0.requestListener
            r25 = r1
            com.bumptech.glide.Glide r1 = r0.glide
            com.bumptech.glide.load.engine.Engine r16 = r1.getEngine()
            com.bumptech.glide.load.Transformation<ResourceType> r1 = r0.transformation
            r17 = r1
            java.lang.Class<TranscodeType> r1 = r0.transcodeClass
            r18 = r1
            boolean r1 = r0.isCacheable
            r19 = r1
            com.bumptech.glide.request.animation.GlideAnimationFactory<TranscodeType> r1 = r0.animationFactory
            r20 = r1
            int r1 = r0.overrideWidth
            r21 = r1
            int r1 = r0.overrideHeight
            r22 = r1
            com.bumptech.glide.load.engine.DiskCacheStrategy r1 = r0.diskCacheStrategy
            r23 = r1
            r1 = r25
            com.bumptech.glide.request.GenericRequest r1 = com.bumptech.glide.request.GenericRequest.obtain(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23)
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> animate(int r3) {
            r2 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory
            android.content.Context r1 = r2.context
            r0.<init>(r1, r3)
            com.bumptech.glide.GenericRequestBuilder r3 = r2.animate(r0)
            return r3
    }

    @java.lang.Deprecated
    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> animate(android.view.animation.Animation r2) {
            r1 = this;
            com.bumptech.glide.request.animation.ViewAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewAnimationFactory
            r0.<init>(r2)
            com.bumptech.glide.GenericRequestBuilder r2 = r1.animate(r0)
            return r2
    }

    com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> animate(com.bumptech.glide.request.animation.GlideAnimationFactory<TranscodeType> r2) {
            r1 = this;
            if (r2 == 0) goto L5
            r1.animationFactory = r2
            return r1
        L5:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Animation factory must not be null!"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r2) {
            r1 = this;
            com.bumptech.glide.request.animation.ViewPropertyAnimationFactory r0 = new com.bumptech.glide.request.animation.ViewPropertyAnimationFactory
            r0.<init>(r2)
            com.bumptech.glide.GenericRequestBuilder r2 = r1.animate(r0)
            return r2
    }

    void applyCenterCrop() {
            r0 = this;
            return
    }

    void applyFitCenter() {
            r0 = this;
            return
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, ResourceType> r2) {
            r1 = this;
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r0 = r1.loadProvider
            if (r0 == 0) goto L7
            r0.setCacheDecoder(r2)
        L7:
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> clone() {
            r2 = this;
            java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L15
            com.bumptech.glide.GenericRequestBuilder r0 = (com.bumptech.glide.GenericRequestBuilder) r0     // Catch: java.lang.CloneNotSupportedException -> L15
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r1 = r2.loadProvider     // Catch: java.lang.CloneNotSupportedException -> L15
            if (r1 == 0) goto L11
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r1 = r2.loadProvider     // Catch: java.lang.CloneNotSupportedException -> L15
            com.bumptech.glide.provider.ChildLoadProvider r1 = r1.clone()     // Catch: java.lang.CloneNotSupportedException -> L15
            goto L12
        L11:
            r1 = 0
        L12:
            r0.loadProvider = r1     // Catch: java.lang.CloneNotSupportedException -> L15
            return r0
        L15:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r1.<init>(r0)
            throw r1
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.bumptech.glide.GenericRequestBuilder r0 = r1.clone()
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> decoder(com.bumptech.glide.load.ResourceDecoder<DataType, ResourceType> r2) {
            r1 = this;
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r0 = r1.loadProvider
            if (r0 == 0) goto L7
            r0.setSourceDecoder(r2)
        L7:
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            r0.diskCacheStrategy = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> dontAnimate() {
            r1 = this;
            com.bumptech.glide.request.animation.GlideAnimationFactory r0 = com.bumptech.glide.request.animation.NoAnimation.getFactory()
            com.bumptech.glide.GenericRequestBuilder r0 = r1.animate(r0)
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> dontTransform() {
            r3 = this;
            com.bumptech.glide.load.resource.UnitTransformation r0 = com.bumptech.glide.load.resource.UnitTransformation.get()
            r1 = 1
            com.bumptech.glide.load.Transformation[] r1 = new com.bumptech.glide.load.Transformation[r1]
            r2 = 0
            r1[r2] = r0
            com.bumptech.glide.GenericRequestBuilder r0 = r3.transform(r1)
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> encoder(com.bumptech.glide.load.ResourceEncoder<ResourceType> r2) {
            r1 = this;
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r0 = r1.loadProvider
            if (r0 == 0) goto L7
            r0.setEncoder(r2)
        L7:
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> error(int r1) {
            r0 = this;
            r0.errorId = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.errorPlaceholder = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> fallback(int r1) {
            r0 = this;
            r0.fallbackResource = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.fallbackDrawable = r1
            return r0
    }

    public com.bumptech.glide.request.FutureTarget<TranscodeType> into(int r3, int r4) {
            r2 = this;
            com.bumptech.glide.request.RequestFutureTarget r0 = new com.bumptech.glide.request.RequestFutureTarget
            com.bumptech.glide.Glide r1 = r2.glide
            android.os.Handler r1 = r1.getMainHandler()
            r0.<init>(r1, r3, r4)
            com.bumptech.glide.Glide r3 = r2.glide
            android.os.Handler r3 = r3.getMainHandler()
            com.bumptech.glide.GenericRequestBuilder$1 r4 = new com.bumptech.glide.GenericRequestBuilder$1
            r4.<init>(r2, r0)
            r3.post(r4)
            return r0
    }

    public com.bumptech.glide.request.target.Target<TranscodeType> into(android.widget.ImageView r3) {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            if (r3 == 0) goto L3c
            boolean r0 = r2.isTransformationSet
            if (r0 != 0) goto L2f
            android.widget.ImageView$ScaleType r0 = r3.getScaleType()
            if (r0 == 0) goto L2f
            int[] r0 = com.bumptech.glide.GenericRequestBuilder.2.$SwitchMap$android$widget$ImageView$ScaleType
            android.widget.ImageView$ScaleType r1 = r3.getScaleType()
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L2c
            r1 = 2
            if (r0 == r1) goto L28
            r1 = 3
            if (r0 == r1) goto L28
            r1 = 4
            if (r0 == r1) goto L28
            goto L2f
        L28:
            r2.applyFitCenter()
            goto L2f
        L2c:
            r2.applyCenterCrop()
        L2f:
            com.bumptech.glide.Glide r0 = r2.glide
            java.lang.Class<TranscodeType> r1 = r2.transcodeClass
            com.bumptech.glide.request.target.Target r3 = r0.buildImageViewTarget(r3, r1)
            com.bumptech.glide.request.target.Target r3 = r2.into(r3)
            return r3
        L3c:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You must pass in a non null View"
            r3.<init>(r0)
            throw r3
    }

    public <Y extends com.bumptech.glide.request.target.Target<TranscodeType>> Y into(Y r3) {
            r2 = this;
            com.bumptech.glide.util.Util.assertMainThread()
            if (r3 == 0) goto L34
            boolean r0 = r2.isModelSet
            if (r0 == 0) goto L2c
            com.bumptech.glide.request.Request r0 = r3.getRequest()
            if (r0 == 0) goto L1a
            r0.clear()
            com.bumptech.glide.manager.RequestTracker r1 = r2.requestTracker
            r1.removeRequest(r0)
            r0.recycle()
        L1a:
            com.bumptech.glide.request.Request r0 = r2.buildRequest(r3)
            r3.setRequest(r0)
            com.bumptech.glide.manager.Lifecycle r1 = r2.lifecycle
            r1.addListener(r3)
            com.bumptech.glide.manager.RequestTracker r1 = r2.requestTracker
            r1.runRequest(r0)
            return r3
        L2c:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You must first set a model (try #load())"
            r3.<init>(r0)
            throw r3
        L34:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You must pass in a non null Target"
            r3.<init>(r0)
            throw r3
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> listener(com.bumptech.glide.request.RequestListener<? super ModelType, TranscodeType> r1) {
            r0 = this;
            r0.requestListener = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> load(ModelType r1) {
            r0 = this;
            r0.model = r1
            r1 = 1
            r0.isModelSet = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> override(int r2, int r3) {
            r1 = this;
            boolean r0 = com.bumptech.glide.util.Util.isValidDimensions(r2, r3)
            if (r0 == 0) goto Lb
            r1.overrideWidth = r2
            r1.overrideHeight = r3
            return r1
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Width and height must be Target#SIZE_ORIGINAL or > 0"
            r2.<init>(r3)
            throw r2
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> placeholder(int r1) {
            r0 = this;
            r0.placeholderId = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.placeholderDrawable = r1
            return r0
    }

    public com.bumptech.glide.request.target.Target<TranscodeType> preload() {
            r1 = this;
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            com.bumptech.glide.request.target.Target r0 = r1.preload(r0, r0)
            return r0
    }

    public com.bumptech.glide.request.target.Target<TranscodeType> preload(int r1, int r2) {
            r0 = this;
            com.bumptech.glide.request.target.PreloadTarget r1 = com.bumptech.glide.request.target.PreloadTarget.obtain(r1, r2)
            com.bumptech.glide.request.target.Target r1 = r0.into(r1)
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            r0.priority = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> signature(com.bumptech.glide.load.Key r2) {
            r1 = this;
            if (r2 == 0) goto L5
            r1.signature = r2
            return r1
        L5:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r0 = "Signature must not be null"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> sizeMultiplier(float r2) {
            r1 = this;
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 < 0) goto L12
            r0 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L12
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r1.sizeMultiplier = r2
            return r1
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sizeMultiplier must be between 0 and 1"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> skipMemoryCache(boolean r1) {
            r0 = this;
            r1 = r1 ^ 1
            r0.isCacheable = r1
            return r0
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> sourceEncoder(com.bumptech.glide.load.Encoder<DataType> r2) {
            r1 = this;
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r0 = r1.loadProvider
            if (r0 == 0) goto L7
            r0.setSourceEncoder(r2)
        L7:
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> thumbnail(float r2) {
            r1 = this;
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 < 0) goto L12
            r0 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L12
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r1.thumbSizeMultiplier = r2
            return r1
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sizeMultiplier must be between 0 and 1"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> thumbnail(com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r2) {
            r1 = this;
            boolean r0 = r1.equals(r2)
            if (r0 != 0) goto L9
            r1.thumbnailRequestBuilder = r2
            return r1
        L9:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "You cannot set a request as a thumbnail for itself. Consider using clone() on the request you are passing to thumbnail()"
            r2.<init>(r0)
            throw r2
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<ResourceType, TranscodeType> r2) {
            r1 = this;
            com.bumptech.glide.provider.ChildLoadProvider<ModelType, DataType, ResourceType, TranscodeType> r0 = r1.loadProvider
            if (r0 == 0) goto L7
            r0.setTranscoder(r2)
        L7:
            return r1
    }

    public com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> transform(com.bumptech.glide.load.Transformation<ResourceType>... r3) {
            r2 = this;
            r0 = 1
            r2.isTransformationSet = r0
            int r1 = r3.length
            if (r1 != r0) goto Lc
            r0 = 0
            r3 = r3[r0]
            r2.transformation = r3
            goto L13
        Lc:
            com.bumptech.glide.load.MultiTransformation r0 = new com.bumptech.glide.load.MultiTransformation
            r0.<init>(r3)
            r2.transformation = r0
        L13:
            return r2
    }
}

package com.bumptech.glide;

public class DrawableRequestBuilder<ModelType> extends com.bumptech.glide.GenericRequestBuilder<ModelType, com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper, com.bumptech.glide.load.resource.drawable.GlideDrawable> implements com.bumptech.glide.BitmapOptions, com.bumptech.glide.DrawableOptions {
    DrawableRequestBuilder(android.content.Context r9, java.lang.Class<ModelType> r10, com.bumptech.glide.provider.LoadProvider<ModelType, com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper, com.bumptech.glide.load.resource.drawable.GlideDrawable> r11, com.bumptech.glide.Glide r12, com.bumptech.glide.manager.RequestTracker r13, com.bumptech.glide.manager.Lifecycle r14) {
            r8 = this;
            java.lang.Class<com.bumptech.glide.load.resource.drawable.GlideDrawable> r4 = com.bumptech.glide.load.resource.drawable.GlideDrawable.class
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r8.crossFade()
            return
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> animate(int r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    @java.lang.Deprecated
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> animate(android.view.animation.Animation r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(int r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(android.view.animation.Animation r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    void applyCenterCrop() {
            r0 = this;
            r0.centerCrop()
            return
    }

    @Override
    void applyFitCenter() {
            r0 = this;
            r0.fitCenter()
            return
    }

    public com.bumptech.glide.DrawableRequestBuilder<ModelType> bitmapTransform(com.bumptech.glide.load.Transformation<android.graphics.Bitmap>... r6) {
            r5 = this;
            int r0 = r6.length
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation[] r0 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation[r0]
            r1 = 0
        L4:
            int r2 = r6.length
            if (r1 >= r2) goto L19
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r2 = new com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation
            com.bumptech.glide.Glide r3 = r5.glide
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3 = r3.getBitmapPool()
            r4 = r6[r1]
            r2.<init>(r3, r4)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L4
        L19:
            com.bumptech.glide.DrawableRequestBuilder r6 = r5.transform(r0)
            return r6
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            super.cacheDecoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.cacheDecoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> centerCrop() {
            r3 = this;
            r0 = 1
            com.bumptech.glide.load.Transformation[] r0 = new com.bumptech.glide.load.Transformation[r0]
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r1 = r1.getDrawableCenterCrop()
            r2 = 0
            r0[r2] = r1
            com.bumptech.glide.DrawableRequestBuilder r0 = r3.transform(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder centerCrop() {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.centerCrop()
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> clone() {
            r1 = this;
            com.bumptech.glide.GenericRequestBuilder r0 = super.clone()
            com.bumptech.glide.DrawableRequestBuilder r0 = (com.bumptech.glide.DrawableRequestBuilder) r0
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder clone() {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.clone()
            return r0
    }

    @Override
    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.clone()
            return r0
    }

    @Override
    public final com.bumptech.glide.DrawableRequestBuilder<ModelType> crossFade() {
            r1 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            r0.<init>()
            super.animate(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> crossFade(int r2) {
            r1 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            r0.<init>(r2)
            super.animate(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> crossFade(int r3, int r4) {
            r2 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            android.content.Context r1 = r2.context
            r0.<init>(r1, r3, r4)
            super.animate(r0)
            return r2
    }

    @Override
    @java.lang.Deprecated
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> crossFade(android.view.animation.Animation r2, int r3) {
            r1 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            r0.<init>(r2, r3)
            super.animate(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade() {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.crossFade()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade(int r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.crossFade(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade(int r1, int r2) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.crossFade(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade(android.view.animation.Animation r1, int r2) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.crossFade(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> decoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            super.decoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder decoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.decoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            super.diskCacheStrategy(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.diskCacheStrategy(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> dontAnimate() {
            r0 = this;
            super.dontAnimate()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder dontAnimate() {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.dontAnimate()
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> dontTransform() {
            r0 = this;
            super.dontTransform()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder dontTransform() {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.dontTransform()
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> encoder(com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            super.encoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder encoder(com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.encoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> error(int r1) {
            r0 = this;
            super.error(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.error(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder error(int r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.error(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.error(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> fallback(int r1) {
            r0 = this;
            super.fallback(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.fallback(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fallback(int r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.fallback(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.fallback(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> fitCenter() {
            r3 = this;
            r0 = 1
            com.bumptech.glide.load.Transformation[] r0 = new com.bumptech.glide.load.Transformation[r0]
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapperTransformation r1 = r1.getDrawableFitCenter()
            r2 = 0
            r0[r2] = r1
            com.bumptech.glide.DrawableRequestBuilder r0 = r3.transform(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fitCenter() {
            r1 = this;
            com.bumptech.glide.DrawableRequestBuilder r0 = r1.fitCenter()
            return r0
    }

    @Override
    public com.bumptech.glide.request.target.Target<com.bumptech.glide.load.resource.drawable.GlideDrawable> into(android.widget.ImageView r1) {
            r0 = this;
            com.bumptech.glide.request.target.Target r1 = super.into(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> listener(com.bumptech.glide.request.RequestListener<? super ModelType, com.bumptech.glide.load.resource.drawable.GlideDrawable> r1) {
            r0 = this;
            super.listener(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder listener(com.bumptech.glide.request.RequestListener r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.listener(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> load(ModelType r1) {
            r0 = this;
            super.load(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder load(java.lang.Object r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.load(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> override(int r1, int r2) {
            r0 = this;
            super.override(r1, r2)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder override(int r1, int r2) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.override(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> placeholder(int r1) {
            r0 = this;
            super.placeholder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.placeholder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder placeholder(int r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.placeholder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.placeholder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            super.priority(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.priority(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> signature(com.bumptech.glide.load.Key r1) {
            r0 = this;
            super.signature(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder signature(com.bumptech.glide.load.Key r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.signature(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> sizeMultiplier(float r1) {
            r0 = this;
            super.sizeMultiplier(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder sizeMultiplier(float r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.sizeMultiplier(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> skipMemoryCache(boolean r1) {
            r0 = this;
            super.skipMemoryCache(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder skipMemoryCache(boolean r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.skipMemoryCache(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> sourceEncoder(com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> r1) {
            r0 = this;
            super.sourceEncoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder sourceEncoder(com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.sourceEncoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> thumbnail(float r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    public com.bumptech.glide.DrawableRequestBuilder<ModelType> thumbnail(com.bumptech.glide.DrawableRequestBuilder<?> r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> thumbnail(com.bumptech.glide.GenericRequestBuilder<?, ?, ?, com.bumptech.glide.load.resource.drawable.GlideDrawable> r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder thumbnail(float r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.thumbnail(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder thumbnail(com.bumptech.glide.GenericRequestBuilder<?, ?, ?, com.bumptech.glide.load.resource.drawable.GlideDrawable> r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.thumbnail(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper, com.bumptech.glide.load.resource.drawable.GlideDrawable> r1) {
            r0 = this;
            super.transcoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper, com.bumptech.glide.load.resource.drawable.GlideDrawable> r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.transcoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.DrawableRequestBuilder<ModelType> transform(com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper>... r1) {
            r0 = this;
            super.transform(r1)
            return r0
    }

    public com.bumptech.glide.DrawableRequestBuilder<ModelType> transform(com.bumptech.glide.load.resource.bitmap.BitmapTransformation... r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.bitmapTransform(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder transform(com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper>[] r1) {
            r0 = this;
            com.bumptech.glide.DrawableRequestBuilder r1 = r0.transform(r1)
            return r1
    }
}

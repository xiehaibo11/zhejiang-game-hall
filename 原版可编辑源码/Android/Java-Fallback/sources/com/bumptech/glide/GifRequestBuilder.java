package com.bumptech.glide;

public class GifRequestBuilder<ModelType> extends com.bumptech.glide.GenericRequestBuilder<ModelType, java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable, com.bumptech.glide.load.resource.gif.GifDrawable> implements com.bumptech.glide.BitmapOptions, com.bumptech.glide.DrawableOptions {
    GifRequestBuilder(com.bumptech.glide.provider.LoadProvider<ModelType, java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable, com.bumptech.glide.load.resource.gif.GifDrawable> r1, java.lang.Class<com.bumptech.glide.load.resource.gif.GifDrawable> r2, com.bumptech.glide.GenericRequestBuilder<ModelType, ?, ?, ?> r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private com.bumptech.glide.load.resource.gif.GifDrawableTransformation[] toGifTransformations(com.bumptech.glide.load.Transformation<android.graphics.Bitmap>[] r6) {
            r5 = this;
            int r0 = r6.length
            com.bumptech.glide.load.resource.gif.GifDrawableTransformation[] r0 = new com.bumptech.glide.load.resource.gif.GifDrawableTransformation[r0]
            r1 = 0
        L4:
            int r2 = r6.length
            if (r1 >= r2) goto L19
            com.bumptech.glide.load.resource.gif.GifDrawableTransformation r2 = new com.bumptech.glide.load.resource.gif.GifDrawableTransformation
            r3 = r6[r1]
            com.bumptech.glide.Glide r4 = r5.glide
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r4 = r4.getBitmapPool()
            r2.<init>(r3, r4)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L4
        L19:
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(int r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(android.view.animation.Animation r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> animate(int r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    @java.lang.Deprecated
    public com.bumptech.glide.GifRequestBuilder<ModelType> animate(android.view.animation.Animation r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            super.animate(r1)
            return r0
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

    @Override
    public com.bumptech.glide.GenericRequestBuilder cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.cacheDecoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            super.cacheDecoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder centerCrop() {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.centerCrop()
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> centerCrop() {
            r3 = this;
            r0 = 1
            com.bumptech.glide.load.resource.bitmap.BitmapTransformation[] r0 = new com.bumptech.glide.load.resource.bitmap.BitmapTransformation[r0]
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.resource.bitmap.CenterCrop r1 = r1.getBitmapCenterCrop()
            r2 = 0
            r0[r2] = r1
            com.bumptech.glide.GifRequestBuilder r0 = r3.transformFrame(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder clone() {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.clone()
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> clone() {
            r1 = this;
            com.bumptech.glide.GenericRequestBuilder r0 = super.clone()
            com.bumptech.glide.GifRequestBuilder r0 = (com.bumptech.glide.GifRequestBuilder) r0
            return r0
    }

    @Override
    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.clone()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade() {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.crossFade()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade(int r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.crossFade(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade(int r1, int r2) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.crossFade(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder crossFade(android.view.animation.Animation r1, int r2) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.crossFade(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> crossFade() {
            r1 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            r0.<init>()
            super.animate(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> crossFade(int r2) {
            r1 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            r0.<init>(r2)
            super.animate(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> crossFade(int r3, int r4) {
            r2 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            android.content.Context r1 = r2.context
            r0.<init>(r1, r3, r4)
            super.animate(r0)
            return r2
    }

    @Override
    @java.lang.Deprecated
    public com.bumptech.glide.GifRequestBuilder<ModelType> crossFade(android.view.animation.Animation r2, int r3) {
            r1 = this;
            com.bumptech.glide.request.animation.DrawableCrossFadeFactory r0 = new com.bumptech.glide.request.animation.DrawableCrossFadeFactory
            r0.<init>(r2, r3)
            super.animate(r0)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder decoder(com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.decoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> decoder(com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            super.decoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.diskCacheStrategy(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            super.diskCacheStrategy(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder dontAnimate() {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.dontAnimate()
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> dontAnimate() {
            r0 = this;
            super.dontAnimate()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder dontTransform() {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.dontTransform()
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> dontTransform() {
            r0 = this;
            super.dontTransform()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder encoder(com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.encoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> encoder(com.bumptech.glide.load.ResourceEncoder<com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            super.encoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder error(int r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.error(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.error(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> error(int r1) {
            r0 = this;
            super.error(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.error(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fallback(int r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.fallback(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.fallback(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> fallback(int r1) {
            r0 = this;
            super.fallback(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.fallback(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fitCenter() {
            r1 = this;
            com.bumptech.glide.GifRequestBuilder r0 = r1.fitCenter()
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> fitCenter() {
            r3 = this;
            r0 = 1
            com.bumptech.glide.load.resource.bitmap.BitmapTransformation[] r0 = new com.bumptech.glide.load.resource.bitmap.BitmapTransformation[r0]
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.resource.bitmap.FitCenter r1 = r1.getBitmapFitCenter()
            r2 = 0
            r0[r2] = r1
            com.bumptech.glide.GifRequestBuilder r0 = r3.transformFrame(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder listener(com.bumptech.glide.request.RequestListener r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.listener(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> listener(com.bumptech.glide.request.RequestListener<? super ModelType, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            super.listener(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder load(java.lang.Object r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.load(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> load(ModelType r1) {
            r0 = this;
            super.load(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder override(int r1, int r2) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.override(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> override(int r1, int r2) {
            r0 = this;
            super.override(r1, r2)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder placeholder(int r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.placeholder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.placeholder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> placeholder(int r1) {
            r0 = this;
            super.placeholder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.placeholder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.priority(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            super.priority(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder signature(com.bumptech.glide.load.Key r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.signature(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> signature(com.bumptech.glide.load.Key r1) {
            r0 = this;
            super.signature(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder sizeMultiplier(float r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.sizeMultiplier(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> sizeMultiplier(float r1) {
            r0 = this;
            super.sizeMultiplier(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder skipMemoryCache(boolean r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.skipMemoryCache(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> skipMemoryCache(boolean r1) {
            r0 = this;
            super.skipMemoryCache(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder sourceEncoder(com.bumptech.glide.load.Encoder<java.io.InputStream> r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.sourceEncoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> sourceEncoder(com.bumptech.glide.load.Encoder<java.io.InputStream> r1) {
            r0 = this;
            super.sourceEncoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder thumbnail(float r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.thumbnail(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder thumbnail(com.bumptech.glide.GenericRequestBuilder<?, ?, ?, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.thumbnail(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> thumbnail(float r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> thumbnail(com.bumptech.glide.GenericRequestBuilder<?, ?, ?, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    public com.bumptech.glide.GifRequestBuilder<ModelType> thumbnail(com.bumptech.glide.GifRequestBuilder<?> r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gif.GifDrawable, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.transcoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<com.bumptech.glide.load.resource.gif.GifDrawable, com.bumptech.glide.load.resource.gif.GifDrawable> r1) {
            r0 = this;
            super.transcoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder transform(com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gif.GifDrawable>[] r1) {
            r0 = this;
            com.bumptech.glide.GifRequestBuilder r1 = r0.transform(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GifRequestBuilder<ModelType> transform(com.bumptech.glide.load.Transformation<com.bumptech.glide.load.resource.gif.GifDrawable>... r1) {
            r0 = this;
            super.transform(r1)
            return r0
    }

    public com.bumptech.glide.GifRequestBuilder<ModelType> transformFrame(com.bumptech.glide.load.Transformation<android.graphics.Bitmap>... r1) {
            r0 = this;
            com.bumptech.glide.load.resource.gif.GifDrawableTransformation[] r1 = r0.toGifTransformations(r1)
            com.bumptech.glide.GifRequestBuilder r1 = r0.transform(r1)
            return r1
    }

    public com.bumptech.glide.GifRequestBuilder<ModelType> transformFrame(com.bumptech.glide.load.resource.bitmap.BitmapTransformation... r1) {
            r0 = this;
            com.bumptech.glide.load.resource.gif.GifDrawableTransformation[] r1 = r0.toGifTransformations(r1)
            com.bumptech.glide.GifRequestBuilder r1 = r0.transform(r1)
            return r1
    }
}

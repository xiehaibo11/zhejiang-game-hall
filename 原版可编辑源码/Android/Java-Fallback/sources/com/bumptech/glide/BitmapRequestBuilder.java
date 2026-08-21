package com.bumptech.glide;

public class BitmapRequestBuilder<ModelType, TranscodeType> extends com.bumptech.glide.GenericRequestBuilder<ModelType, com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap, TranscodeType> implements com.bumptech.glide.BitmapOptions {
    private final com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
    private com.bumptech.glide.load.DecodeFormat decodeFormat;
    private com.bumptech.glide.load.resource.bitmap.Downsampler downsampler;
    private com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> imageDecoder;
    private com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> videoDecoder;

    BitmapRequestBuilder(com.bumptech.glide.provider.LoadProvider<ModelType, com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap, TranscodeType> r1, java.lang.Class<TranscodeType> r2, com.bumptech.glide.GenericRequestBuilder<ModelType, ?, ?, ?> r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.bumptech.glide.load.resource.bitmap.Downsampler r1 = com.bumptech.glide.load.resource.bitmap.Downsampler.AT_LEAST
            r0.downsampler = r1
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r1.getBitmapPool()
            r0.bitmapPool = r1
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.DecodeFormat r1 = r1.getDecodeFormat()
            r0.decodeFormat = r1
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r1 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r0.bitmapPool
            com.bumptech.glide.load.DecodeFormat r3 = r0.decodeFormat
            r1.<init>(r2, r3)
            r0.imageDecoder = r1
            com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder r1 = new com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r0.bitmapPool
            com.bumptech.glide.load.DecodeFormat r3 = r0.decodeFormat
            r1.<init>(r2, r3)
            r0.videoDecoder = r1
            return
    }

    private com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> downsample(com.bumptech.glide.load.resource.bitmap.Downsampler r4) {
            r3 = this;
            r3.downsampler = r4
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r1 = r3.bitmapPool
            com.bumptech.glide.load.DecodeFormat r2 = r3.decodeFormat
            r0.<init>(r4, r1, r2)
            r3.imageDecoder = r0
            com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder r4 = new com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> r0 = r3.imageDecoder
            com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r1 = r3.videoDecoder
            r4.<init>(r0, r1)
            super.decoder(r4)
            return r3
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> animate(int r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    @java.lang.Deprecated
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> animate(android.view.animation.Animation r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            super.animate(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(int r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(android.view.animation.Animation r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.animate(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder animate(com.bumptech.glide.request.animation.ViewPropertyAnimation.Animator r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.animate(r1)
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

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> approximate() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.Downsampler r0 = com.bumptech.glide.load.resource.bitmap.Downsampler.AT_LEAST
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.downsample(r0)
            return r0
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> asIs() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.Downsampler r0 = com.bumptech.glide.load.resource.bitmap.Downsampler.NONE
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.downsample(r0)
            return r0
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> atMost() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.Downsampler r0 = com.bumptech.glide.load.resource.bitmap.Downsampler.AT_MOST
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.downsample(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> r1) {
            r0 = this;
            super.cacheDecoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder cacheDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.File, android.graphics.Bitmap> r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.cacheDecoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> centerCrop() {
            r3 = this;
            r0 = 1
            com.bumptech.glide.load.resource.bitmap.BitmapTransformation[] r0 = new com.bumptech.glide.load.resource.bitmap.BitmapTransformation[r0]
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.resource.bitmap.CenterCrop r1 = r1.getBitmapCenterCrop()
            r2 = 0
            r0[r2] = r1
            com.bumptech.glide.BitmapRequestBuilder r0 = r3.transform(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder centerCrop() {
            r1 = this;
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.centerCrop()
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> clone() {
            r1 = this;
            com.bumptech.glide.GenericRequestBuilder r0 = super.clone()
            com.bumptech.glide.BitmapRequestBuilder r0 = (com.bumptech.glide.BitmapRequestBuilder) r0
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder clone() {
            r1 = this;
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.clone()
            return r0
    }

    @Override
    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.clone()
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> decoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r1) {
            r0 = this;
            super.decoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder decoder(com.bumptech.glide.load.ResourceDecoder<com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap> r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.decoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            super.diskCacheStrategy(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder diskCacheStrategy(com.bumptech.glide.load.engine.DiskCacheStrategy r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.diskCacheStrategy(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> dontAnimate() {
            r0 = this;
            super.dontAnimate()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder dontAnimate() {
            r1 = this;
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.dontAnimate()
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> dontTransform() {
            r0 = this;
            super.dontTransform()
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder dontTransform() {
            r1 = this;
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.dontTransform()
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> encoder(com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> r1) {
            r0 = this;
            super.encoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder encoder(com.bumptech.glide.load.ResourceEncoder<android.graphics.Bitmap> r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.encoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> error(int r1) {
            r0 = this;
            super.error(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.error(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder error(int r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.error(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder error(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.error(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> fallback(int r1) {
            r0 = this;
            super.fallback(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.fallback(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fallback(int r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.fallback(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fallback(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.fallback(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> fitCenter() {
            r3 = this;
            r0 = 1
            com.bumptech.glide.load.resource.bitmap.BitmapTransformation[] r0 = new com.bumptech.glide.load.resource.bitmap.BitmapTransformation[r0]
            com.bumptech.glide.Glide r1 = r3.glide
            com.bumptech.glide.load.resource.bitmap.FitCenter r1 = r1.getBitmapFitCenter()
            r2 = 0
            r0[r2] = r1
            com.bumptech.glide.BitmapRequestBuilder r0 = r3.transform(r0)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder fitCenter() {
            r1 = this;
            com.bumptech.glide.BitmapRequestBuilder r0 = r1.fitCenter()
            return r0
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> format(com.bumptech.glide.load.DecodeFormat r5) {
            r4 = this;
            r4.decodeFormat = r5
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder
            com.bumptech.glide.load.resource.bitmap.Downsampler r1 = r4.downsampler
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r4.bitmapPool
            r0.<init>(r1, r2, r5)
            r4.imageDecoder = r0
            com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.FileDescriptorBitmapDecoder
            com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder r1 = new com.bumptech.glide.load.resource.bitmap.VideoBitmapDecoder
            r1.<init>()
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r2 = r4.bitmapPool
            r0.<init>(r1, r2, r5)
            r4.videoDecoder = r0
            com.bumptech.glide.load.resource.file.FileToStreamDecoder r0 = new com.bumptech.glide.load.resource.file.FileToStreamDecoder
            com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder r1 = new com.bumptech.glide.load.resource.bitmap.StreamBitmapDecoder
            com.bumptech.glide.load.resource.bitmap.Downsampler r2 = r4.downsampler
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r3 = r4.bitmapPool
            r1.<init>(r2, r3, r5)
            r0.<init>(r1)
            super.cacheDecoder(r0)
            com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder r5 = new com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> r0 = r4.imageDecoder
            com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r1 = r4.videoDecoder
            r5.<init>(r0, r1)
            super.decoder(r5)
            return r4
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> imageDecoder(com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> r3) {
            r2 = this;
            r2.imageDecoder = r3
            com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder
            com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r1 = r2.videoDecoder
            r0.<init>(r3, r1)
            super.decoder(r0)
            return r2
    }

    @Override
    public com.bumptech.glide.request.target.Target<TranscodeType> into(android.widget.ImageView r1) {
            r0 = this;
            com.bumptech.glide.request.target.Target r1 = super.into(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> listener(com.bumptech.glide.request.RequestListener<? super ModelType, TranscodeType> r1) {
            r0 = this;
            super.listener(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder listener(com.bumptech.glide.request.RequestListener r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.listener(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> load(ModelType r1) {
            r0 = this;
            super.load(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder load(java.lang.Object r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.load(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> override(int r1, int r2) {
            r0 = this;
            super.override(r1, r2)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder override(int r1, int r2) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.override(r1, r2)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> placeholder(int r1) {
            r0 = this;
            super.placeholder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.placeholder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder placeholder(int r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.placeholder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder placeholder(android.graphics.drawable.Drawable r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.placeholder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            super.priority(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder priority(com.bumptech.glide.Priority r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.priority(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> signature(com.bumptech.glide.load.Key r1) {
            r0 = this;
            super.signature(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder signature(com.bumptech.glide.load.Key r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.signature(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> sizeMultiplier(float r1) {
            r0 = this;
            super.sizeMultiplier(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder sizeMultiplier(float r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.sizeMultiplier(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> skipMemoryCache(boolean r1) {
            r0 = this;
            super.skipMemoryCache(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder skipMemoryCache(boolean r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.skipMemoryCache(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> sourceEncoder(com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> r1) {
            r0 = this;
            super.sourceEncoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder sourceEncoder(com.bumptech.glide.load.Encoder<com.bumptech.glide.load.model.ImageVideoWrapper> r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.sourceEncoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> thumbnail(float r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> thumbnail(com.bumptech.glide.BitmapRequestBuilder<?, TranscodeType> r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> thumbnail(com.bumptech.glide.GenericRequestBuilder<?, ?, ?, TranscodeType> r1) {
            r0 = this;
            super.thumbnail(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder thumbnail(float r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.thumbnail(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder thumbnail(com.bumptech.glide.GenericRequestBuilder r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.thumbnail(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, TranscodeType> r1) {
            r0 = this;
            super.transcoder(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder transcoder(com.bumptech.glide.load.resource.transcode.ResourceTranscoder r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.transcoder(r1)
            return r1
    }

    @Override
    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> transform(com.bumptech.glide.load.Transformation<android.graphics.Bitmap>... r1) {
            r0 = this;
            super.transform(r1)
            return r0
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> transform(com.bumptech.glide.load.resource.bitmap.BitmapTransformation... r1) {
            r0 = this;
            super.transform(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.GenericRequestBuilder transform(com.bumptech.glide.load.Transformation<android.graphics.Bitmap>[] r1) {
            r0 = this;
            com.bumptech.glide.BitmapRequestBuilder r1 = r0.transform(r1)
            return r1
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, TranscodeType> videoDecoder(com.bumptech.glide.load.ResourceDecoder<android.os.ParcelFileDescriptor, android.graphics.Bitmap> r3) {
            r2 = this;
            r2.videoDecoder = r3
            com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder r0 = new com.bumptech.glide.load.resource.bitmap.ImageVideoBitmapDecoder
            com.bumptech.glide.load.ResourceDecoder<java.io.InputStream, android.graphics.Bitmap> r1 = r2.imageDecoder
            r0.<init>(r1, r3)
            super.decoder(r0)
            return r2
    }
}

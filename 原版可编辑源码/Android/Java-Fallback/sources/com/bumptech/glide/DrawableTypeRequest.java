package com.bumptech.glide;

public class DrawableTypeRequest<ModelType> extends com.bumptech.glide.DrawableRequestBuilder<ModelType> implements com.bumptech.glide.DownloadOptions {
    private final com.bumptech.glide.load.model.ModelLoader<ModelType, android.os.ParcelFileDescriptor> fileDescriptorModelLoader;
    private final com.bumptech.glide.RequestManager.OptionsApplier optionsApplier;
    private final com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> streamModelLoader;

    DrawableTypeRequest(java.lang.Class<ModelType> r9, com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r10, com.bumptech.glide.load.model.ModelLoader<ModelType, android.os.ParcelFileDescriptor> r11, android.content.Context r12, com.bumptech.glide.Glide r13, com.bumptech.glide.manager.RequestTracker r14, com.bumptech.glide.manager.Lifecycle r15, com.bumptech.glide.RequestManager.OptionsApplier r16) {
            r8 = this;
            r7 = r8
            java.lang.Class<com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper> r3 = com.bumptech.glide.load.resource.gifbitmap.GifBitmapWrapper.class
            java.lang.Class<com.bumptech.glide.load.resource.drawable.GlideDrawable> r4 = com.bumptech.glide.load.resource.drawable.GlideDrawable.class
            r5 = 0
            r0 = r13
            r1 = r10
            r2 = r11
            com.bumptech.glide.provider.FixedLoadProvider r3 = buildProvider(r0, r1, r2, r3, r4, r5)
            r0 = r8
            r1 = r12
            r2 = r9
            r4 = r13
            r5 = r14
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r0 = r10
            r7.streamModelLoader = r0
            r0 = r11
            r7.fileDescriptorModelLoader = r0
            r0 = r16
            r7.optionsApplier = r0
            return
    }

    private static <A, Z, R> com.bumptech.glide.provider.FixedLoadProvider<A, com.bumptech.glide.load.model.ImageVideoWrapper, Z, R> buildProvider(com.bumptech.glide.Glide r0, com.bumptech.glide.load.model.ModelLoader<A, java.io.InputStream> r1, com.bumptech.glide.load.model.ModelLoader<A, android.os.ParcelFileDescriptor> r2, java.lang.Class<Z> r3, java.lang.Class<R> r4, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r5) {
            if (r1 != 0) goto L6
            if (r2 != 0) goto L6
            r0 = 0
            return r0
        L6:
            if (r5 != 0) goto Lc
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r5 = r0.buildTranscoder(r3, r4)
        Lc:
            java.lang.Class<com.bumptech.glide.load.model.ImageVideoWrapper> r4 = com.bumptech.glide.load.model.ImageVideoWrapper.class
            com.bumptech.glide.provider.DataLoadProvider r0 = r0.buildDataProvider(r4, r3)
            com.bumptech.glide.load.model.ImageVideoModelLoader r3 = new com.bumptech.glide.load.model.ImageVideoModelLoader
            r3.<init>(r1, r2)
            com.bumptech.glide.provider.FixedLoadProvider r1 = new com.bumptech.glide.provider.FixedLoadProvider
            r1.<init>(r3, r5, r0)
            return r1
    }

    private com.bumptech.glide.GenericTranscodeRequest<ModelType, java.io.InputStream, java.io.File> getDownloadOnlyRequest() {
            r9 = this;
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r9.optionsApplier
            com.bumptech.glide.GenericTranscodeRequest r8 = new com.bumptech.glide.GenericTranscodeRequest
            java.lang.Class<java.io.File> r2 = java.io.File.class
            com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r4 = r9.streamModelLoader
            java.lang.Class<java.io.InputStream> r5 = java.io.InputStream.class
            java.lang.Class<java.io.File> r6 = java.io.File.class
            com.bumptech.glide.RequestManager$OptionsApplier r7 = r9.optionsApplier
            r1 = r8
            r3 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.bumptech.glide.GenericRequestBuilder r0 = r0.apply(r8)
            com.bumptech.glide.GenericTranscodeRequest r0 = (com.bumptech.glide.GenericTranscodeRequest) r0
            return r0
    }

    public com.bumptech.glide.BitmapTypeRequest<ModelType> asBitmap() {
            r5 = this;
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r5.optionsApplier
            com.bumptech.glide.BitmapTypeRequest r1 = new com.bumptech.glide.BitmapTypeRequest
            com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r2 = r5.streamModelLoader
            com.bumptech.glide.load.model.ModelLoader<ModelType, android.os.ParcelFileDescriptor> r3 = r5.fileDescriptorModelLoader
            com.bumptech.glide.RequestManager$OptionsApplier r4 = r5.optionsApplier
            r1.<init>(r5, r2, r3, r4)
            com.bumptech.glide.GenericRequestBuilder r0 = r0.apply(r1)
            com.bumptech.glide.BitmapTypeRequest r0 = (com.bumptech.glide.BitmapTypeRequest) r0
            return r0
    }

    public com.bumptech.glide.GifTypeRequest<ModelType> asGif() {
            r4 = this;
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r4.optionsApplier
            com.bumptech.glide.GifTypeRequest r1 = new com.bumptech.glide.GifTypeRequest
            com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r2 = r4.streamModelLoader
            com.bumptech.glide.RequestManager$OptionsApplier r3 = r4.optionsApplier
            r1.<init>(r4, r2, r3)
            com.bumptech.glide.GenericRequestBuilder r0 = r0.apply(r1)
            com.bumptech.glide.GifTypeRequest r0 = (com.bumptech.glide.GifTypeRequest) r0
            return r0
    }

    @Override
    public com.bumptech.glide.request.FutureTarget<java.io.File> downloadOnly(int r2, int r3) {
            r1 = this;
            com.bumptech.glide.GenericTranscodeRequest r0 = r1.getDownloadOnlyRequest()
            com.bumptech.glide.request.FutureTarget r2 = r0.downloadOnly(r2, r3)
            return r2
    }

    @Override
    public <Y extends com.bumptech.glide.request.target.Target<java.io.File>> Y downloadOnly(Y r2) {
            r1 = this;
            com.bumptech.glide.GenericTranscodeRequest r0 = r1.getDownloadOnlyRequest()
            com.bumptech.glide.request.target.Target r2 = r0.downloadOnly(r2)
            return r2
    }
}

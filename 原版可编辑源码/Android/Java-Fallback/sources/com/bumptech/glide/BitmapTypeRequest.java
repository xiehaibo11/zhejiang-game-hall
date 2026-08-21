package com.bumptech.glide;

public class BitmapTypeRequest<ModelType> extends com.bumptech.glide.BitmapRequestBuilder<ModelType, android.graphics.Bitmap> {
    private final com.bumptech.glide.load.model.ModelLoader<ModelType, android.os.ParcelFileDescriptor> fileDescriptorModelLoader;
    private final com.bumptech.glide.Glide glide;
    private final com.bumptech.glide.RequestManager.OptionsApplier optionsApplier;
    private final com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> streamModelLoader;

    BitmapTypeRequest(com.bumptech.glide.GenericRequestBuilder<ModelType, ?, ?, ?> r4, com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r5, com.bumptech.glide.load.model.ModelLoader<ModelType, android.os.ParcelFileDescriptor> r6, com.bumptech.glide.RequestManager.OptionsApplier r7) {
            r3 = this;
            com.bumptech.glide.Glide r0 = r4.glide
            java.lang.Class<android.graphics.Bitmap> r1 = android.graphics.Bitmap.class
            r2 = 0
            com.bumptech.glide.provider.FixedLoadProvider r0 = buildProvider(r0, r5, r6, r1, r2)
            java.lang.Class<android.graphics.Bitmap> r1 = android.graphics.Bitmap.class
            r3.<init>(r0, r1, r4)
            r3.streamModelLoader = r5
            r3.fileDescriptorModelLoader = r6
            com.bumptech.glide.Glide r4 = r4.glide
            r3.glide = r4
            r3.optionsApplier = r7
            return
    }

    private static <A, R> com.bumptech.glide.provider.FixedLoadProvider<A, com.bumptech.glide.load.model.ImageVideoWrapper, android.graphics.Bitmap, R> buildProvider(com.bumptech.glide.Glide r1, com.bumptech.glide.load.model.ModelLoader<A, java.io.InputStream> r2, com.bumptech.glide.load.model.ModelLoader<A, android.os.ParcelFileDescriptor> r3, java.lang.Class<R> r4, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, R> r5) {
            if (r2 != 0) goto L6
            if (r3 != 0) goto L6
            r1 = 0
            return r1
        L6:
            if (r5 != 0) goto Le
            java.lang.Class<android.graphics.Bitmap> r5 = android.graphics.Bitmap.class
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r5 = r1.buildTranscoder(r5, r4)
        Le:
            java.lang.Class<com.bumptech.glide.load.model.ImageVideoWrapper> r4 = com.bumptech.glide.load.model.ImageVideoWrapper.class
            java.lang.Class<android.graphics.Bitmap> r0 = android.graphics.Bitmap.class
            com.bumptech.glide.provider.DataLoadProvider r1 = r1.buildDataProvider(r4, r0)
            com.bumptech.glide.load.model.ImageVideoModelLoader r4 = new com.bumptech.glide.load.model.ImageVideoModelLoader
            r4.<init>(r2, r3)
            com.bumptech.glide.provider.FixedLoadProvider r2 = new com.bumptech.glide.provider.FixedLoadProvider
            r2.<init>(r4, r5, r1)
            return r2
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, byte[]> toBytes() {
            r2 = this;
            com.bumptech.glide.load.resource.transcode.BitmapBytesTranscoder r0 = new com.bumptech.glide.load.resource.transcode.BitmapBytesTranscoder
            r0.<init>()
            java.lang.Class<byte[]> r1 = byte[].class
            com.bumptech.glide.BitmapRequestBuilder r0 = r2.transcode(r0, r1)
            return r0
    }

    public com.bumptech.glide.BitmapRequestBuilder<ModelType, byte[]> toBytes(android.graphics.Bitmap.CompressFormat r2, int r3) {
            r1 = this;
            com.bumptech.glide.load.resource.transcode.BitmapBytesTranscoder r0 = new com.bumptech.glide.load.resource.transcode.BitmapBytesTranscoder
            r0.<init>(r2, r3)
            java.lang.Class<byte[]> r2 = byte[].class
            com.bumptech.glide.BitmapRequestBuilder r2 = r1.transcode(r0, r2)
            return r2
    }

    public <R> com.bumptech.glide.BitmapRequestBuilder<ModelType, R> transcode(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<android.graphics.Bitmap, R> r6, java.lang.Class<R> r7) {
            r5 = this;
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r5.optionsApplier
            com.bumptech.glide.BitmapRequestBuilder r1 = new com.bumptech.glide.BitmapRequestBuilder
            com.bumptech.glide.Glide r2 = r5.glide
            com.bumptech.glide.load.model.ModelLoader<ModelType, java.io.InputStream> r3 = r5.streamModelLoader
            com.bumptech.glide.load.model.ModelLoader<ModelType, android.os.ParcelFileDescriptor> r4 = r5.fileDescriptorModelLoader
            com.bumptech.glide.provider.FixedLoadProvider r6 = buildProvider(r2, r3, r4, r7, r6)
            r1.<init>(r6, r7, r5)
            com.bumptech.glide.GenericRequestBuilder r6 = r0.apply(r1)
            com.bumptech.glide.BitmapRequestBuilder r6 = (com.bumptech.glide.BitmapRequestBuilder) r6
            return r6
    }
}

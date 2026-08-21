package com.bumptech.glide;

public class GenericTranscodeRequest<ModelType, DataType, ResourceType> extends com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, ResourceType> implements com.bumptech.glide.DownloadOptions {
    private final java.lang.Class<DataType> dataClass;
    private final com.bumptech.glide.load.model.ModelLoader<ModelType, DataType> modelLoader;
    private final com.bumptech.glide.RequestManager.OptionsApplier optionsApplier;
    private final java.lang.Class<ResourceType> resourceClass;

    GenericTranscodeRequest(android.content.Context r13, com.bumptech.glide.Glide r14, java.lang.Class<ModelType> r15, com.bumptech.glide.load.model.ModelLoader<ModelType, DataType> r16, java.lang.Class<DataType> r17, java.lang.Class<ResourceType> r18, com.bumptech.glide.manager.RequestTracker r19, com.bumptech.glide.manager.Lifecycle r20, com.bumptech.glide.RequestManager.OptionsApplier r21) {
            r12 = this;
            r8 = r12
            r9 = r16
            r10 = r17
            r11 = r18
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r0 = com.bumptech.glide.load.resource.transcode.UnitTranscoder.get()
            r5 = r14
            com.bumptech.glide.provider.LoadProvider r3 = build(r14, r9, r10, r11, r0)
            r0 = r12
            r1 = r13
            r2 = r15
            r4 = r18
            r6 = r19
            r7 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r8.modelLoader = r9
            r8.dataClass = r10
            r8.resourceClass = r11
            r0 = r21
            r8.optionsApplier = r0
            return
    }

    GenericTranscodeRequest(java.lang.Class<ResourceType> r3, com.bumptech.glide.GenericRequestBuilder<ModelType, ?, ?, ?> r4, com.bumptech.glide.load.model.ModelLoader<ModelType, DataType> r5, java.lang.Class<DataType> r6, java.lang.Class<ResourceType> r7, com.bumptech.glide.RequestManager.OptionsApplier r8) {
            r2 = this;
            com.bumptech.glide.Glide r0 = r4.glide
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r1 = com.bumptech.glide.load.resource.transcode.UnitTranscoder.get()
            com.bumptech.glide.provider.LoadProvider r0 = build(r0, r5, r6, r7, r1)
            r2.<init>(r0, r3, r4)
            r2.modelLoader = r5
            r2.dataClass = r6
            r2.resourceClass = r7
            r2.optionsApplier = r8
            return
    }

    private static <A, T, Z, R> com.bumptech.glide.provider.LoadProvider<A, T, Z, R> build(com.bumptech.glide.Glide r0, com.bumptech.glide.load.model.ModelLoader<A, T> r1, java.lang.Class<T> r2, java.lang.Class<Z> r3, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<Z, R> r4) {
            com.bumptech.glide.provider.DataLoadProvider r0 = r0.buildDataProvider(r2, r3)
            com.bumptech.glide.provider.FixedLoadProvider r2 = new com.bumptech.glide.provider.FixedLoadProvider
            r2.<init>(r1, r4, r0)
            return r2
    }

    private com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, java.io.File, java.io.File> getDownloadOnlyRequest() {
            r4 = this;
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder r0 = com.bumptech.glide.load.resource.transcode.UnitTranscoder.get()
            com.bumptech.glide.Glide r1 = r4.glide
            java.lang.Class<DataType> r2 = r4.dataClass
            java.lang.Class<java.io.File> r3 = java.io.File.class
            com.bumptech.glide.provider.DataLoadProvider r1 = r1.buildDataProvider(r2, r3)
            com.bumptech.glide.provider.FixedLoadProvider r2 = new com.bumptech.glide.provider.FixedLoadProvider
            com.bumptech.glide.load.model.ModelLoader<ModelType, DataType> r3 = r4.modelLoader
            r2.<init>(r3, r0, r1)
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r4.optionsApplier
            com.bumptech.glide.GenericRequestBuilder r1 = new com.bumptech.glide.GenericRequestBuilder
            java.lang.Class<java.io.File> r3 = java.io.File.class
            r1.<init>(r2, r3, r4)
            com.bumptech.glide.GenericRequestBuilder r0 = r0.apply(r1)
            com.bumptech.glide.Priority r1 = com.bumptech.glide.Priority.LOW
            com.bumptech.glide.GenericRequestBuilder r0 = r0.priority(r1)
            com.bumptech.glide.load.engine.DiskCacheStrategy r1 = com.bumptech.glide.load.engine.DiskCacheStrategy.SOURCE
            com.bumptech.glide.GenericRequestBuilder r0 = r0.diskCacheStrategy(r1)
            r1 = 1
            com.bumptech.glide.GenericRequestBuilder r0 = r0.skipMemoryCache(r1)
            return r0
    }

    @Override
    public com.bumptech.glide.request.FutureTarget<java.io.File> downloadOnly(int r2, int r3) {
            r1 = this;
            com.bumptech.glide.GenericRequestBuilder r0 = r1.getDownloadOnlyRequest()
            com.bumptech.glide.request.FutureTarget r2 = r0.into(r2, r3)
            return r2
    }

    @Override
    public <Y extends com.bumptech.glide.request.target.Target<java.io.File>> Y downloadOnly(Y r2) {
            r1 = this;
            com.bumptech.glide.GenericRequestBuilder r0 = r1.getDownloadOnlyRequest()
            com.bumptech.glide.request.target.Target r2 = r0.into(r2)
            return r2
    }

    public <TranscodeType> com.bumptech.glide.GenericRequestBuilder<ModelType, DataType, ResourceType, TranscodeType> transcode(com.bumptech.glide.load.resource.transcode.ResourceTranscoder<ResourceType, TranscodeType> r5, java.lang.Class<TranscodeType> r6) {
            r4 = this;
            com.bumptech.glide.Glide r0 = r4.glide
            com.bumptech.glide.load.model.ModelLoader<ModelType, DataType> r1 = r4.modelLoader
            java.lang.Class<DataType> r2 = r4.dataClass
            java.lang.Class<ResourceType> r3 = r4.resourceClass
            com.bumptech.glide.provider.LoadProvider r5 = build(r0, r1, r2, r3, r5)
            com.bumptech.glide.RequestManager$OptionsApplier r0 = r4.optionsApplier
            com.bumptech.glide.GenericRequestBuilder r1 = new com.bumptech.glide.GenericRequestBuilder
            r1.<init>(r5, r6, r4)
            com.bumptech.glide.GenericRequestBuilder r5 = r0.apply(r1)
            return r5
    }
}

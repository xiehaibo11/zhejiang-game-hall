package com.bumptech.glide.load.engine;

class DecodeJob<A, T, Z> {
    private static final com.bumptech.glide.load.engine.DecodeJob.FileOpener DEFAULT_FILE_OPENER = null;
    private static final java.lang.String TAG = "DecodeJob";
    private final com.bumptech.glide.load.engine.DecodeJob.DiskCacheProvider diskCacheProvider;
    private final com.bumptech.glide.load.engine.DiskCacheStrategy diskCacheStrategy;
    private final com.bumptech.glide.load.data.DataFetcher<A> fetcher;
    private final com.bumptech.glide.load.engine.DecodeJob.FileOpener fileOpener;
    private final int height;
    private volatile boolean isCancelled;
    private final com.bumptech.glide.provider.DataLoadProvider<A, T> loadProvider;
    private final com.bumptech.glide.Priority priority;
    private final com.bumptech.glide.load.engine.EngineKey resultKey;
    private final com.bumptech.glide.load.resource.transcode.ResourceTranscoder<T, Z> transcoder;
    private final com.bumptech.glide.load.Transformation<T> transformation;
    private final int width;

    interface DiskCacheProvider {
        com.bumptech.glide.load.engine.cache.DiskCache getDiskCache();
    }

    static class FileOpener {
        FileOpener() {
                r0 = this;
                r0.<init>()
                return
        }

        public java.io.OutputStream open(java.io.File r3) throws java.io.FileNotFoundException {
                r2 = this;
                java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream
                java.io.FileOutputStream r1 = new java.io.FileOutputStream
                r1.<init>(r3)
                r0.<init>(r1)
                return r0
        }
    }

    class SourceWriter<DataType> implements com.bumptech.glide.load.engine.cache.DiskCache.Writer {
        private final DataType data;
        private final com.bumptech.glide.load.Encoder<DataType> encoder;
        final com.bumptech.glide.load.engine.DecodeJob this$0;

        public SourceWriter(com.bumptech.glide.load.engine.DecodeJob r1, com.bumptech.glide.load.Encoder<DataType> r2, DataType r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.encoder = r2
                r0.data = r3
                return
        }

        @Override
        public boolean write(java.io.File r4) {
                r3 = this;
                java.lang.String r0 = "DecodeJob"
                r1 = 0
                com.bumptech.glide.load.engine.DecodeJob r2 = r3.this$0     // Catch: java.lang.Throwable -> L1b java.io.FileNotFoundException -> L1d
                com.bumptech.glide.load.engine.DecodeJob$FileOpener r2 = com.bumptech.glide.load.engine.DecodeJob.access$000(r2)     // Catch: java.lang.Throwable -> L1b java.io.FileNotFoundException -> L1d
                java.io.OutputStream r1 = r2.open(r4)     // Catch: java.lang.Throwable -> L1b java.io.FileNotFoundException -> L1d
                com.bumptech.glide.load.Encoder<DataType> r4 = r3.encoder     // Catch: java.lang.Throwable -> L1b java.io.FileNotFoundException -> L1d
                DataType r2 = r3.data     // Catch: java.lang.Throwable -> L1b java.io.FileNotFoundException -> L1d
                boolean r4 = r4.encode(r2, r1)     // Catch: java.lang.Throwable -> L1b java.io.FileNotFoundException -> L1d
                if (r1 == 0) goto L30
                r1.close()     // Catch: java.io.IOException -> L30
                goto L30
            L1b:
                r4 = move-exception
                goto L31
            L1d:
                r4 = move-exception
                r2 = 3
                boolean r2 = android.util.Log.isLoggable(r0, r2)     // Catch: java.lang.Throwable -> L1b
                if (r2 == 0) goto L2a
                java.lang.String r2 = "Failed to find file to write to disk cache"
                android.util.Log.d(r0, r2, r4)     // Catch: java.lang.Throwable -> L1b
            L2a:
                if (r1 == 0) goto L2f
                r1.close()     // Catch: java.io.IOException -> L2f
            L2f:
                r4 = 0
            L30:
                return r4
            L31:
                if (r1 == 0) goto L36
                r1.close()     // Catch: java.io.IOException -> L36
            L36:
                throw r4
        }
    }

    static {
            com.bumptech.glide.load.engine.DecodeJob$FileOpener r0 = new com.bumptech.glide.load.engine.DecodeJob$FileOpener
            r0.<init>()
            com.bumptech.glide.load.engine.DecodeJob.DEFAULT_FILE_OPENER = r0
            return
    }

    public DecodeJob(com.bumptech.glide.load.engine.EngineKey r13, int r14, int r15, com.bumptech.glide.load.data.DataFetcher<A> r16, com.bumptech.glide.provider.DataLoadProvider<A, T> r17, com.bumptech.glide.load.Transformation<T> r18, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<T, Z> r19, com.bumptech.glide.load.engine.DecodeJob.DiskCacheProvider r20, com.bumptech.glide.load.engine.DiskCacheStrategy r21, com.bumptech.glide.Priority r22) {
            r12 = this;
            com.bumptech.glide.load.engine.DecodeJob$FileOpener r11 = com.bumptech.glide.load.engine.DecodeJob.DEFAULT_FILE_OPENER
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r9 = r21
            r10 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return
    }

    DecodeJob(com.bumptech.glide.load.engine.EngineKey r1, int r2, int r3, com.bumptech.glide.load.data.DataFetcher<A> r4, com.bumptech.glide.provider.DataLoadProvider<A, T> r5, com.bumptech.glide.load.Transformation<T> r6, com.bumptech.glide.load.resource.transcode.ResourceTranscoder<T, Z> r7, com.bumptech.glide.load.engine.DecodeJob.DiskCacheProvider r8, com.bumptech.glide.load.engine.DiskCacheStrategy r9, com.bumptech.glide.Priority r10, com.bumptech.glide.load.engine.DecodeJob.FileOpener r11) {
            r0 = this;
            r0.<init>()
            r0.resultKey = r1
            r0.width = r2
            r0.height = r3
            r0.fetcher = r4
            r0.loadProvider = r5
            r0.transformation = r6
            r0.transcoder = r7
            r0.diskCacheProvider = r8
            r0.diskCacheStrategy = r9
            r0.priority = r10
            r0.fileOpener = r11
            return
    }

    static com.bumptech.glide.load.engine.DecodeJob.FileOpener access$000(com.bumptech.glide.load.engine.DecodeJob r0) {
            com.bumptech.glide.load.engine.DecodeJob$FileOpener r0 = r0.fileOpener
            return r0
    }

    private com.bumptech.glide.load.engine.Resource<T> cacheAndDecodeSourceData(A r5) throws java.io.IOException {
            r4 = this;
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.DecodeJob$SourceWriter r2 = new com.bumptech.glide.load.engine.DecodeJob$SourceWriter
            com.bumptech.glide.provider.DataLoadProvider<A, T> r3 = r4.loadProvider
            com.bumptech.glide.load.Encoder r3 = r3.getSourceEncoder()
            r2.<init>(r4, r3, r5)
            com.bumptech.glide.load.engine.DecodeJob$DiskCacheProvider r5 = r4.diskCacheProvider
            com.bumptech.glide.load.engine.cache.DiskCache r5 = r5.getDiskCache()
            com.bumptech.glide.load.engine.EngineKey r3 = r4.resultKey
            com.bumptech.glide.load.Key r3 = r3.getOriginalKey()
            r5.put(r3, r2)
            java.lang.String r5 = "DecodeJob"
            r2 = 2
            boolean r3 = android.util.Log.isLoggable(r5, r2)
            if (r3 == 0) goto L2c
            java.lang.String r3 = "Wrote source to cache"
            r4.logWithTimeAndKey(r3, r0)
        L2c:
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.EngineKey r3 = r4.resultKey
            com.bumptech.glide.load.Key r3 = r3.getOriginalKey()
            com.bumptech.glide.load.engine.Resource r3 = r4.loadFromCache(r3)
            boolean r5 = android.util.Log.isLoggable(r5, r2)
            if (r5 == 0) goto L47
            if (r3 == 0) goto L47
            java.lang.String r5 = "Decoded source from cache"
            r4.logWithTimeAndKey(r5, r0)
        L47:
            return r3
    }

    private com.bumptech.glide.load.engine.Resource<T> decodeFromSourceData(A r6) throws java.io.IOException {
            r5 = this;
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = r5.diskCacheStrategy
            boolean r0 = r0.cacheSource()
            if (r0 == 0) goto Ld
            com.bumptech.glide.load.engine.Resource r6 = r5.cacheAndDecodeSourceData(r6)
            goto L2d
        Ld:
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.provider.DataLoadProvider<A, T> r2 = r5.loadProvider
            com.bumptech.glide.load.ResourceDecoder r2 = r2.getSourceDecoder()
            int r3 = r5.width
            int r4 = r5.height
            com.bumptech.glide.load.engine.Resource r6 = r2.decode(r6, r3, r4)
            r2 = 2
            java.lang.String r3 = "DecodeJob"
            boolean r2 = android.util.Log.isLoggable(r3, r2)
            if (r2 == 0) goto L2d
            java.lang.String r2 = "Decoded from source"
            r5.logWithTimeAndKey(r2, r0)
        L2d:
            return r6
    }

    private com.bumptech.glide.load.engine.Resource<T> decodeSource() throws java.lang.Exception {
            r5 = this;
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()     // Catch: java.lang.Throwable -> L2f
            com.bumptech.glide.load.data.DataFetcher<A> r2 = r5.fetcher     // Catch: java.lang.Throwable -> L2f
            com.bumptech.glide.Priority r3 = r5.priority     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r2 = r2.loadData(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = "DecodeJob"
            r4 = 2
            boolean r3 = android.util.Log.isLoggable(r3, r4)     // Catch: java.lang.Throwable -> L2f
            if (r3 == 0) goto L1a
            java.lang.String r3 = "Fetched data"
            r5.logWithTimeAndKey(r3, r0)     // Catch: java.lang.Throwable -> L2f
        L1a:
            boolean r0 = r5.isCancelled     // Catch: java.lang.Throwable -> L2f
            if (r0 == 0) goto L25
            r0 = 0
            com.bumptech.glide.load.data.DataFetcher<A> r1 = r5.fetcher
            r1.cleanup()
            return r0
        L25:
            com.bumptech.glide.load.engine.Resource r0 = r5.decodeFromSourceData(r2)     // Catch: java.lang.Throwable -> L2f
            com.bumptech.glide.load.data.DataFetcher<A> r1 = r5.fetcher
            r1.cleanup()
            return r0
        L2f:
            r0 = move-exception
            com.bumptech.glide.load.data.DataFetcher<A> r1 = r5.fetcher
            r1.cleanup()
            throw r0
    }

    private com.bumptech.glide.load.engine.Resource<T> loadFromCache(com.bumptech.glide.load.Key r5) throws java.io.IOException {
            r4 = this;
            com.bumptech.glide.load.engine.DecodeJob$DiskCacheProvider r0 = r4.diskCacheProvider
            com.bumptech.glide.load.engine.cache.DiskCache r0 = r0.getDiskCache()
            java.io.File r0 = r0.get(r5)
            if (r0 != 0) goto Le
            r5 = 0
            return r5
        Le:
            com.bumptech.glide.provider.DataLoadProvider<A, T> r1 = r4.loadProvider     // Catch: java.lang.Throwable -> L28
            com.bumptech.glide.load.ResourceDecoder r1 = r1.getCacheDecoder()     // Catch: java.lang.Throwable -> L28
            int r2 = r4.width     // Catch: java.lang.Throwable -> L28
            int r3 = r4.height     // Catch: java.lang.Throwable -> L28
            com.bumptech.glide.load.engine.Resource r0 = r1.decode(r0, r2, r3)     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L27
            com.bumptech.glide.load.engine.DecodeJob$DiskCacheProvider r1 = r4.diskCacheProvider
            com.bumptech.glide.load.engine.cache.DiskCache r1 = r1.getDiskCache()
            r1.delete(r5)
        L27:
            return r0
        L28:
            r0 = move-exception
            com.bumptech.glide.load.engine.DecodeJob$DiskCacheProvider r1 = r4.diskCacheProvider
            com.bumptech.glide.load.engine.cache.DiskCache r1 = r1.getDiskCache()
            r1.delete(r5)
            throw r0
    }

    private void logWithTimeAndKey(java.lang.String r2, long r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " in "
            r0.append(r2)
            double r2 = com.bumptech.glide.util.LogTime.getElapsedMillis(r3)
            r0.append(r2)
            java.lang.String r2 = ", key: "
            r0.append(r2)
            com.bumptech.glide.load.engine.EngineKey r2 = r1.resultKey
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "DecodeJob"
            android.util.Log.v(r3, r2)
            return
    }

    private com.bumptech.glide.load.engine.Resource<Z> transcode(com.bumptech.glide.load.engine.Resource<T> r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.bumptech.glide.load.resource.transcode.ResourceTranscoder<T, Z> r0 = r1.transcoder
            com.bumptech.glide.load.engine.Resource r2 = r0.transcode(r2)
            return r2
    }

    private com.bumptech.glide.load.engine.Resource<T> transform(com.bumptech.glide.load.engine.Resource<T> r4) {
            r3 = this;
            if (r4 != 0) goto L4
            r4 = 0
            return r4
        L4:
            com.bumptech.glide.load.Transformation<T> r0 = r3.transformation
            int r1 = r3.width
            int r2 = r3.height
            com.bumptech.glide.load.engine.Resource r0 = r0.transform(r4, r1, r2)
            boolean r1 = r4.equals(r0)
            if (r1 != 0) goto L17
            r4.recycle()
        L17:
            return r0
    }

    private com.bumptech.glide.load.engine.Resource<Z> transformEncodeAndTranscode(com.bumptech.glide.load.engine.Resource<T> r6) {
            r5 = this;
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.Resource r6 = r5.transform(r6)
            java.lang.String r2 = "DecodeJob"
            r3 = 2
            boolean r4 = android.util.Log.isLoggable(r2, r3)
            if (r4 == 0) goto L16
            java.lang.String r4 = "Transformed resource from source"
            r5.logWithTimeAndKey(r4, r0)
        L16:
            r5.writeTransformedToCache(r6)
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.Resource r6 = r5.transcode(r6)
            boolean r2 = android.util.Log.isLoggable(r2, r3)
            if (r2 == 0) goto L2c
            java.lang.String r2 = "Transcoded transformed from source"
            r5.logWithTimeAndKey(r2, r0)
        L2c:
            return r6
    }

    private void writeTransformedToCache(com.bumptech.glide.load.engine.Resource<T> r5) {
            r4 = this;
            if (r5 == 0) goto L33
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = r4.diskCacheStrategy
            boolean r0 = r0.cacheResult()
            if (r0 != 0) goto Lb
            goto L33
        Lb:
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.DecodeJob$SourceWriter r2 = new com.bumptech.glide.load.engine.DecodeJob$SourceWriter
            com.bumptech.glide.provider.DataLoadProvider<A, T> r3 = r4.loadProvider
            com.bumptech.glide.load.ResourceEncoder r3 = r3.getEncoder()
            r2.<init>(r4, r3, r5)
            com.bumptech.glide.load.engine.DecodeJob$DiskCacheProvider r5 = r4.diskCacheProvider
            com.bumptech.glide.load.engine.cache.DiskCache r5 = r5.getDiskCache()
            com.bumptech.glide.load.engine.EngineKey r3 = r4.resultKey
            r5.put(r3, r2)
            r5 = 2
            java.lang.String r2 = "DecodeJob"
            boolean r5 = android.util.Log.isLoggable(r2, r5)
            if (r5 == 0) goto L33
            java.lang.String r5 = "Wrote transformed from source to cache"
            r4.logWithTimeAndKey(r5, r0)
        L33:
            return
    }

    public void cancel() {
            r1 = this;
            r0 = 1
            r1.isCancelled = r0
            com.bumptech.glide.load.data.DataFetcher<A> r0 = r1.fetcher
            r0.cancel()
            return
    }

    public com.bumptech.glide.load.engine.Resource<Z> decodeFromSource() throws java.lang.Exception {
            r1 = this;
            com.bumptech.glide.load.engine.Resource r0 = r1.decodeSource()
            com.bumptech.glide.load.engine.Resource r0 = r1.transformEncodeAndTranscode(r0)
            return r0
    }

    public com.bumptech.glide.load.engine.Resource<Z> decodeResultFromCache() throws java.lang.Exception {
            r6 = this;
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = r6.diskCacheStrategy
            boolean r0 = r0.cacheResult()
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.EngineKey r2 = r6.resultKey
            com.bumptech.glide.load.engine.Resource r2 = r6.loadFromCache(r2)
            java.lang.String r3 = "DecodeJob"
            r4 = 2
            boolean r5 = android.util.Log.isLoggable(r3, r4)
            if (r5 == 0) goto L22
            java.lang.String r5 = "Decoded transformed from cache"
            r6.logWithTimeAndKey(r5, r0)
        L22:
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.Resource r2 = r6.transcode(r2)
            boolean r3 = android.util.Log.isLoggable(r3, r4)
            if (r3 == 0) goto L35
            java.lang.String r3 = "Transcoded transformed from cache"
            r6.logWithTimeAndKey(r3, r0)
        L35:
            return r2
    }

    public com.bumptech.glide.load.engine.Resource<Z> decodeSourceFromCache() throws java.lang.Exception {
            r5 = this;
            com.bumptech.glide.load.engine.DiskCacheStrategy r0 = r5.diskCacheStrategy
            boolean r0 = r0.cacheSource()
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            long r0 = com.bumptech.glide.util.LogTime.getLogTime()
            com.bumptech.glide.load.engine.EngineKey r2 = r5.resultKey
            com.bumptech.glide.load.Key r2 = r2.getOriginalKey()
            com.bumptech.glide.load.engine.Resource r2 = r5.loadFromCache(r2)
            r3 = 2
            java.lang.String r4 = "DecodeJob"
            boolean r3 = android.util.Log.isLoggable(r4, r3)
            if (r3 == 0) goto L26
            java.lang.String r3 = "Decoded source from cache"
            r5.logWithTimeAndKey(r3, r0)
        L26:
            com.bumptech.glide.load.engine.Resource r0 = r5.transformEncodeAndTranscode(r2)
            return r0
    }
}

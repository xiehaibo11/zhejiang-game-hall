package com.kwad.sdk.core.imageloader.core;

public final class ImageLoaderConfiguration {
    final boolean customExecutor;
    final boolean customExecutorForCachedImages;
    final com.kwad.sdk.core.imageloader.core.decode.ImageDecoder decoder;
    final com.kwad.sdk.core.imageloader.core.DisplayImageOptions defaultDisplayImageOptions;
    final com.kwad.sdk.core.imageloader.cache.disc.DiskCache diskCache;
    final com.kwad.sdk.core.imageloader.core.download.ImageDownloader downloader;
    final int maxImageHeightForDiskCache;
    final int maxImageHeightForMemoryCache;
    final int maxImageWidthForDiskCache;
    final int maxImageWidthForMemoryCache;
    final com.kwad.sdk.core.imageloader.cache.memory.MemoryCache memoryCache;
    final com.kwad.sdk.core.imageloader.core.download.ImageDownloader networkDeniedDownloader;
    final com.kwad.sdk.core.imageloader.core.process.BitmapProcessor processorForDiskCache;
    final android.content.res.Resources resources;
    final com.kwad.sdk.core.imageloader.core.download.ImageDownloader slowNetworkDownloader;
    final java.util.concurrent.Executor taskDistributor;
    final java.util.concurrent.Executor taskExecutor;
    final java.util.concurrent.Executor taskExecutorForCachedImages;
    final com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType tasksProcessingType;
    final int threadPoolSize;
    final int threadPriority;

    static class 1 {
        static final int[] $SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme = null;

        static {
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme[] r0 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme = r0
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTP     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.HTTPS     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    public static class Builder {
        public static final com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType DEFAULT_TASK_PROCESSING_TYPE = null;
        public static final int DEFAULT_THREAD_POOL_SIZE = 3;
        public static final int DEFAULT_THREAD_PRIORITY = 3;
        private static final java.lang.String WARNING_OVERLAP_DISK_CACHE_NAME_GENERATOR = "diskCache() and diskCacheFileNameGenerator() calls overlap each other";
        private static final java.lang.String WARNING_OVERLAP_DISK_CACHE_PARAMS = "diskCache(), diskCacheSize() and diskCacheFileCount calls overlap each other";
        private static final java.lang.String WARNING_OVERLAP_EXECUTOR = "threadPoolSize(), threadPriority() and tasksProcessingOrder() calls can overlap taskExecutor() and taskExecutorForCachedImages() calls.";
        private static final java.lang.String WARNING_OVERLAP_MEMORY_CACHE = "memoryCache() and memoryCacheSize() calls overlap each other";
        private java.lang.String cacheParentDir;
        private com.kwad.sdk.core.imageloader.core.download.ConnectionConfig connectionConfig;
        private android.content.Context context;
        private boolean customExecutor;
        private boolean customExecutorForCachedImages;
        private com.kwad.sdk.core.imageloader.core.decode.ImageDecoder decoder;
        private com.kwad.sdk.core.imageloader.core.DisplayImageOptions defaultDisplayImageOptions;
        private boolean denyCacheImageMultipleSizesInMemory;
        private com.kwad.sdk.core.imageloader.cache.disc.DiskCache diskCache;
        private int diskCacheFileCount;
        private com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator diskCacheFileNameGenerator;
        private long diskCacheSize;
        private com.kwad.sdk.core.imageloader.core.download.ImageDownloader downloader;
        private int maxImageHeightForDiskCache;
        private int maxImageHeightForMemoryCache;
        private int maxImageWidthForDiskCache;
        private int maxImageWidthForMemoryCache;
        private com.kwad.sdk.core.imageloader.cache.memory.MemoryCache memoryCache;
        private int memoryCacheSize;
        private com.kwad.sdk.core.imageloader.core.process.BitmapProcessor processorForDiskCache;
        private java.util.concurrent.Executor taskDistributor;
        private java.util.concurrent.Executor taskExecutor;
        private java.util.concurrent.Executor taskExecutorForCachedImages;
        private com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType tasksProcessingType;
        private int threadPoolSize;
        private int threadPriority;
        private boolean writeLogs;

        static {
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.FIFO
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.DEFAULT_TASK_PROCESSING_TYPE = r0
                return
        }

        public Builder(android.content.Context r5) {
                r4 = this;
                r4.<init>()
                r0 = 0
                r4.maxImageWidthForMemoryCache = r0
                r4.maxImageHeightForMemoryCache = r0
                r4.maxImageWidthForDiskCache = r0
                r4.maxImageHeightForDiskCache = r0
                r1 = 0
                r4.processorForDiskCache = r1
                r4.taskExecutor = r1
                r4.taskExecutorForCachedImages = r1
                r4.taskDistributor = r1
                r4.customExecutor = r0
                r4.customExecutorForCachedImages = r0
                r2 = 3
                r4.threadPoolSize = r2
                r4.threadPriority = r2
                r4.denyCacheImageMultipleSizesInMemory = r0
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r2 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.DEFAULT_TASK_PROCESSING_TYPE
                r4.tasksProcessingType = r2
                r4.memoryCacheSize = r0
                r2 = 0
                r4.diskCacheSize = r2
                r4.diskCacheFileCount = r0
                r4.memoryCache = r1
                r4.diskCache = r1
                r4.diskCacheFileNameGenerator = r1
                r4.downloader = r1
                r4.defaultDisplayImageOptions = r1
                r4.writeLogs = r0
                android.content.Context r5 = r5.getApplicationContext()
                r4.context = r5
                return
        }

        static android.content.Context access$000(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                android.content.Context r0 = r0.context
                return r0
        }

        static int access$100(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                int r0 = r0.maxImageWidthForMemoryCache
                return r0
        }

        static int access$1000(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                int r0 = r0.threadPriority
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType access$1100(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = r0.tasksProcessingType
                return r0
        }

        static com.kwad.sdk.core.imageloader.cache.disc.DiskCache access$1200(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r0.diskCache
                return r0
        }

        static com.kwad.sdk.core.imageloader.cache.memory.MemoryCache access$1300(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r0.memoryCache
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.DisplayImageOptions access$1400(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = r0.defaultDisplayImageOptions
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.download.ImageDownloader access$1500(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r0.downloader
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.decode.ImageDecoder access$1600(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r0 = r0.decoder
                return r0
        }

        static boolean access$1700(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                boolean r0 = r0.customExecutor
                return r0
        }

        static boolean access$1800(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                boolean r0 = r0.customExecutorForCachedImages
                return r0
        }

        static boolean access$1900(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                boolean r0 = r0.writeLogs
                return r0
        }

        static int access$200(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                int r0 = r0.maxImageHeightForMemoryCache
                return r0
        }

        static int access$300(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                int r0 = r0.maxImageWidthForDiskCache
                return r0
        }

        static int access$400(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                int r0 = r0.maxImageHeightForDiskCache
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.process.BitmapProcessor access$500(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.processorForDiskCache
                return r0
        }

        static java.util.concurrent.Executor access$600(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                java.util.concurrent.Executor r0 = r0.taskExecutor
                return r0
        }

        static java.util.concurrent.Executor access$700(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                java.util.concurrent.Executor r0 = r0.taskExecutorForCachedImages
                return r0
        }

        static java.util.concurrent.Executor access$800(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                java.util.concurrent.Executor r0 = r0.taskDistributor
                return r0
        }

        static int access$900(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r0) {
                int r0 = r0.threadPoolSize
                return r0
        }

        private void initEmptyFieldsWithDefaultValues() {
                r7 = this;
                java.util.concurrent.Executor r0 = r7.taskExecutor
                r1 = 1
                if (r0 != 0) goto L12
                int r0 = r7.threadPoolSize
                int r2 = r7.threadPriority
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r3 = r7.tasksProcessingType
                java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createExecutor(r0, r2, r3)
                r7.taskExecutor = r0
                goto L14
            L12:
                r7.customExecutor = r1
            L14:
                java.util.concurrent.Executor r0 = r7.taskExecutorForCachedImages
                if (r0 != 0) goto L25
                int r0 = r7.threadPoolSize
                int r1 = r7.threadPriority
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r2 = r7.tasksProcessingType
                java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createExecutor(r0, r1, r2)
                r7.taskExecutorForCachedImages = r0
                goto L27
            L25:
                r7.customExecutorForCachedImages = r1
            L27:
                java.util.concurrent.Executor r0 = r7.taskDistributor
                if (r0 != 0) goto L31
                java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createTaskDistributor()
                r7.taskDistributor = r0
            L31:
                com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r7.diskCache
                if (r0 != 0) goto L5f
                com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r0 = r7.diskCacheFileNameGenerator
                if (r0 != 0) goto L3f
                com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createFileNameGenerator()
                r7.diskCacheFileNameGenerator = r0
            L3f:
                java.lang.String r0 = r7.cacheParentDir
                if (r0 != 0) goto L4f
                android.content.Context r0 = r7.context
                java.io.File r0 = r0.getExternalCacheDir()
                java.lang.String r0 = r0.getPath()
                r7.cacheParentDir = r0
            L4f:
                android.content.Context r1 = r7.context
                com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r2 = r7.diskCacheFileNameGenerator
                long r3 = r7.diskCacheSize
                int r5 = r7.diskCacheFileCount
                java.lang.String r6 = r7.cacheParentDir
                com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createDiskCache(r1, r2, r3, r5, r6)
                r7.diskCache = r0
            L5f:
                com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r7.memoryCache
                if (r0 != 0) goto L6d
                android.content.Context r0 = r7.context
                int r1 = r7.memoryCacheSize
                com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createMemoryCache(r0, r1)
                r7.memoryCache = r0
            L6d:
                boolean r0 = r7.denyCacheImageMultipleSizesInMemory
                if (r0 == 0) goto L7e
                com.kwad.sdk.core.imageloader.cache.memory.impl.FuzzyKeyMemoryCache r0 = new com.kwad.sdk.core.imageloader.cache.memory.impl.FuzzyKeyMemoryCache
                com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r1 = r7.memoryCache
                java.util.Comparator r2 = com.kwad.sdk.core.imageloader.utils.MemoryCacheUtils.createFuzzyKeyComparator()
                r0.<init>(r1, r2)
                r7.memoryCache = r0
            L7e:
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r7.downloader
                if (r0 != 0) goto L8a
                android.content.Context r0 = r7.context
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createImageDownloader(r0)
                r7.downloader = r0
            L8a:
                com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r0 = r7.decoder
                if (r0 != 0) goto L96
                boolean r0 = r7.writeLogs
                com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r0 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createImageDecoder(r0)
                r7.decoder = r0
            L96:
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = r7.defaultDisplayImageOptions
                if (r0 != 0) goto La0
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.createSimple()
                r7.defaultDisplayImageOptions = r0
            La0:
                return
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration build() {
                r2 = this;
                r2.initEmptyFieldsWithDefaultValues()
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r0 = new com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder cacheParentDir(java.lang.String r1) {
                r0 = this;
                r0.cacheParentDir = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder connectionConfig(com.kwad.sdk.core.imageloader.core.download.ConnectionConfig r1) {
                r0 = this;
                r0.connectionConfig = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder defaultDisplayImageOptions(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r1) {
                r0 = this;
                r0.defaultDisplayImageOptions = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder denyCacheImageMultipleSizesInMemory() {
                r1 = this;
                r0 = 1
                r1.denyCacheImageMultipleSizesInMemory = r0
                return r1
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder discCache(com.kwad.sdk.core.imageloader.cache.disc.DiskCache r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r1 = r0.diskCache(r1)
                return r1
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder discCacheExtraOptions(int r1, int r2, com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r3) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r1 = r0.diskCacheExtraOptions(r1, r2, r3)
                return r1
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder discCacheFileCount(int r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r1 = r0.diskCacheFileCount(r1)
                return r1
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder discCacheFileNameGenerator(com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r1 = r0.diskCacheFileNameGenerator(r1)
                return r1
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder discCacheSize(int r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r1 = r0.diskCacheSize(r1)
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder diskCache(com.kwad.sdk.core.imageloader.cache.disc.DiskCache r5) {
                r4 = this;
                long r0 = r4.diskCacheSize
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                r1 = 0
                if (r0 > 0) goto Ld
                int r0 = r4.diskCacheFileCount
                if (r0 <= 0) goto L14
            Ld:
                java.lang.Object[] r0 = new java.lang.Object[r1]
                java.lang.String r2 = "diskCache(), diskCacheSize() and diskCacheFileCount calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r2, r0)
            L14:
                com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r0 = r4.diskCacheFileNameGenerator
                if (r0 == 0) goto L1f
                java.lang.Object[] r0 = new java.lang.Object[r1]
                java.lang.String r1 = "diskCache() and diskCacheFileNameGenerator() calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L1f:
                r4.diskCache = r5
                return r4
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder diskCacheExtraOptions(int r1, int r2, com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r3) {
                r0 = this;
                r0.maxImageWidthForDiskCache = r1
                r0.maxImageHeightForDiskCache = r2
                r0.processorForDiskCache = r3
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder diskCacheFileCount(int r3) {
                r2 = this;
                if (r3 <= 0) goto L11
                com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r2.diskCache
                if (r0 == 0) goto Le
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "diskCache(), diskCacheSize() and diskCacheFileCount calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            Le:
                r2.diskCacheFileCount = r3
                return r2
            L11:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "maxFileCount must be a positive number"
                r3.<init>(r0)
                throw r3
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder diskCacheFileNameGenerator(com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r3) {
                r2 = this;
                com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r2.diskCache
                if (r0 == 0) goto Lc
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "diskCache() and diskCacheFileNameGenerator() calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            Lc:
                r2.diskCacheFileNameGenerator = r3
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder diskCacheSize(int r3) {
                r2 = this;
                if (r3 <= 0) goto L12
                com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = r2.diskCache
                if (r0 == 0) goto Le
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "diskCache(), diskCacheSize() and diskCacheFileCount calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            Le:
                long r0 = (long) r3
                r2.diskCacheSize = r0
                return r2
            L12:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "maxCacheSize must be a positive number"
                r3.<init>(r0)
                throw r3
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder imageDecoder(com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r1) {
                r0 = this;
                r0.decoder = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder imageDownloader(com.kwad.sdk.core.imageloader.core.download.ImageDownloader r1) {
                r0 = this;
                r0.downloader = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder memoryCache(com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r3) {
                r2 = this;
                int r0 = r2.memoryCacheSize
                if (r0 == 0) goto Lc
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "memoryCache() and memoryCacheSize() calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            Lc:
                r2.memoryCache = r3
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder memoryCacheExtraOptions(int r1, int r2) {
                r0 = this;
                r0.maxImageWidthForMemoryCache = r1
                r0.maxImageHeightForMemoryCache = r2
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder memoryCacheSize(int r3) {
                r2 = this;
                if (r3 <= 0) goto L11
                com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r2.memoryCache
                if (r0 == 0) goto Le
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "memoryCache() and memoryCacheSize() calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            Le:
                r2.memoryCacheSize = r3
                return r2
            L11:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "memoryCacheSize must be a positive number"
                r3.<init>(r0)
                throw r3
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder memoryCacheSizePercentage(int r3) {
                r2 = this;
                if (r3 <= 0) goto L24
                r0 = 100
                if (r3 >= r0) goto L24
                com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = r2.memoryCache
                if (r0 == 0) goto L12
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "memoryCache() and memoryCacheSize() calls overlap each other"
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L12:
                java.lang.Runtime r0 = java.lang.Runtime.getRuntime()
                long r0 = r0.maxMemory()
                float r0 = (float) r0
                float r3 = (float) r3
                r1 = 1120403456(0x42c80000, float:100.0)
                float r3 = r3 / r1
                float r0 = r0 * r3
                int r3 = (int) r0
                r2.memoryCacheSize = r3
                return r2
            L24:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "availableMemoryPercent must be in range (0 < % < 100)"
                r3.<init>(r0)
                throw r3
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder setTaskDistributor(java.util.concurrent.Executor r1) {
                r0 = this;
                r0.taskDistributor = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder taskExecutor(java.util.concurrent.Executor r3) {
                r2 = this;
                int r0 = r2.threadPoolSize
                r1 = 3
                if (r0 != r1) goto Lf
                int r0 = r2.threadPriority
                if (r0 != r1) goto Lf
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = r2.tasksProcessingType
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r1 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.DEFAULT_TASK_PROCESSING_TYPE
                if (r0 == r1) goto L17
            Lf:
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "threadPoolSize(), threadPriority() and tasksProcessingOrder() calls can overlap taskExecutor() and taskExecutorForCachedImages() calls."
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L17:
                r2.taskExecutor = r3
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder taskExecutorForCachedImages(java.util.concurrent.Executor r3) {
                r2 = this;
                int r0 = r2.threadPoolSize
                r1 = 3
                if (r0 != r1) goto Lf
                int r0 = r2.threadPriority
                if (r0 != r1) goto Lf
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = r2.tasksProcessingType
                com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r1 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.DEFAULT_TASK_PROCESSING_TYPE
                if (r0 == r1) goto L17
            Lf:
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "threadPoolSize(), threadPriority() and tasksProcessingOrder() calls can overlap taskExecutor() and taskExecutorForCachedImages() calls."
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L17:
                r2.taskExecutorForCachedImages = r3
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder tasksProcessingOrder(com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r3) {
                r2 = this;
                java.util.concurrent.Executor r0 = r2.taskExecutor
                if (r0 != 0) goto L8
                java.util.concurrent.Executor r0 = r2.taskExecutorForCachedImages
                if (r0 == 0) goto L10
            L8:
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "threadPoolSize(), threadPriority() and tasksProcessingOrder() calls can overlap taskExecutor() and taskExecutorForCachedImages() calls."
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L10:
                r2.tasksProcessingType = r3
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder threadPoolSize(int r3) {
                r2 = this;
                java.util.concurrent.Executor r0 = r2.taskExecutor
                if (r0 != 0) goto L8
                java.util.concurrent.Executor r0 = r2.taskExecutorForCachedImages
                if (r0 == 0) goto L10
            L8:
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "threadPoolSize(), threadPriority() and tasksProcessingOrder() calls can overlap taskExecutor() and taskExecutorForCachedImages() calls."
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L10:
                r2.threadPoolSize = r3
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder threadPriority(int r3) {
                r2 = this;
                java.util.concurrent.Executor r0 = r2.taskExecutor
                if (r0 != 0) goto L8
                java.util.concurrent.Executor r0 = r2.taskExecutorForCachedImages
                if (r0 == 0) goto L10
            L8:
                r0 = 0
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r1 = "threadPoolSize(), threadPriority() and tasksProcessingOrder() calls can overlap taskExecutor() and taskExecutorForCachedImages() calls."
                com.kwad.sdk.core.imageloader.utils.L.w(r1, r0)
            L10:
                if (r3 > 0) goto L16
                r3 = 1
            L13:
                r2.threadPriority = r3
                goto L1c
            L16:
                r0 = 10
                if (r3 <= r0) goto L13
                r2.threadPriority = r0
            L1c:
                return r2
        }

        public com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder writeDebugLogs() {
                r1 = this;
                r0 = 1
                r1.writeLogs = r0
                return r1
        }
    }

    static class NetworkDeniedImageDownloader implements com.kwad.sdk.core.imageloader.core.download.ImageDownloader {
        private final com.kwad.sdk.core.imageloader.core.download.ImageDownloader wrappedDownloader;

        public NetworkDeniedImageDownloader(com.kwad.sdk.core.imageloader.core.download.ImageDownloader r1) {
                r0 = this;
                r0.<init>()
                r0.wrappedDownloader = r1
                return
        }

        @Override
        public java.io.InputStream getStream(java.lang.String r3, java.lang.Object r4) {
                r2 = this;
                int[] r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r1 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ofUri(r3)
                int r1 = r1.ordinal()
                r0 = r0[r1]
                r1 = 1
                if (r0 == r1) goto L19
                r1 = 2
                if (r0 == r1) goto L19
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r2.wrappedDownloader
                java.io.InputStream r3 = r0.getStream(r3, r4)
                return r3
            L19:
                java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
                r3.<init>()
                throw r3
        }
    }

    static class SlowNetworkImageDownloader implements com.kwad.sdk.core.imageloader.core.download.ImageDownloader {
        private final com.kwad.sdk.core.imageloader.core.download.ImageDownloader wrappedDownloader;

        public SlowNetworkImageDownloader(com.kwad.sdk.core.imageloader.core.download.ImageDownloader r1) {
                r0 = this;
                r0.<init>()
                r0.wrappedDownloader = r1
                return
        }

        @Override
        public java.io.InputStream getStream(java.lang.String r2, java.lang.Object r3) {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = r1.wrappedDownloader
                java.io.InputStream r3 = r0.getStream(r2, r3)
                int[] r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$download$ImageDownloader$Scheme
                com.kwad.sdk.core.imageloader.core.download.ImageDownloader$Scheme r2 = com.kwad.sdk.core.imageloader.core.download.ImageDownloader.Scheme.ofUri(r2)
                int r2 = r2.ordinal()
                r2 = r0[r2]
                r0 = 1
                if (r2 == r0) goto L19
                r0 = 2
                if (r2 == r0) goto L19
                return r3
            L19:
                com.kwad.sdk.core.imageloader.core.assist.FlushedInputStream r2 = new com.kwad.sdk.core.imageloader.core.assist.FlushedInputStream
                r2.<init>(r3)
                return r2
        }
    }

    private ImageLoaderConfiguration(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r3) {
            r2 = this;
            r2.<init>()
            android.content.Context r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$000(r3)
            android.content.res.Resources r0 = r0.getResources()
            r2.resources = r0
            int r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$100(r3)
            r2.maxImageWidthForMemoryCache = r0
            int r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$200(r3)
            r2.maxImageHeightForMemoryCache = r0
            int r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$300(r3)
            r2.maxImageWidthForDiskCache = r0
            int r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$400(r3)
            r2.maxImageHeightForDiskCache = r0
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$500(r3)
            r2.processorForDiskCache = r0
            java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$600(r3)
            r2.taskExecutor = r0
            java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$700(r3)
            r2.taskExecutorForCachedImages = r0
            java.util.concurrent.Executor r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$800(r3)
            r2.taskDistributor = r0
            int r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$900(r3)
            r2.threadPoolSize = r0
            int r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1000(r3)
            r2.threadPriority = r0
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1100(r3)
            r2.tasksProcessingType = r0
            com.kwad.sdk.core.imageloader.cache.disc.DiskCache r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1200(r3)
            r2.diskCache = r0
            com.kwad.sdk.core.imageloader.cache.memory.MemoryCache r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1300(r3)
            r2.memoryCache = r0
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1400(r3)
            r2.defaultDisplayImageOptions = r0
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1500(r3)
            r2.downloader = r0
            com.kwad.sdk.core.imageloader.core.decode.ImageDecoder r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1600(r3)
            r2.decoder = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1700(r3)
            r2.customExecutor = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1800(r3)
            r2.customExecutorForCachedImages = r0
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$NetworkDeniedImageDownloader r0 = new com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$NetworkDeniedImageDownloader
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r1 = r2.downloader
            r0.<init>(r1)
            r2.networkDeniedDownloader = r0
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$SlowNetworkImageDownloader r0 = new com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$SlowNetworkImageDownloader
            com.kwad.sdk.core.imageloader.core.download.ImageDownloader r1 = r2.downloader
            r0.<init>(r1)
            r2.slowNetworkDownloader = r0
            boolean r3 = com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder.access$1900(r3)
            com.kwad.sdk.core.imageloader.utils.L.writeDebugLogs(r3)
            return
    }

    ImageLoaderConfiguration(com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.Builder r1, com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration createDefault(android.content.Context r1) {
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder r0 = new com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration$Builder
            r0.<init>(r1)
            com.kwad.sdk.core.imageloader.core.ImageLoaderConfiguration r1 = r0.build()
            return r1
    }

    final com.kwad.sdk.core.imageloader.core.assist.ImageSize getMaxImageSize() {
            r3 = this;
            android.content.res.Resources r0 = r3.resources
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r3.maxImageWidthForMemoryCache
            if (r1 > 0) goto Lc
            int r1 = r0.widthPixels
        Lc:
            int r2 = r3.maxImageHeightForMemoryCache
            if (r2 > 0) goto L12
            int r2 = r0.heightPixels
        L12:
            com.kwad.sdk.core.imageloader.core.assist.ImageSize r0 = new com.kwad.sdk.core.imageloader.core.assist.ImageSize
            r0.<init>(r1, r2)
            return r0
    }
}

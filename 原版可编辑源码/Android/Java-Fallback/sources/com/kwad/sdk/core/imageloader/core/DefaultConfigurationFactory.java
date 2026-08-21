package com.kwad.sdk.core.imageloader.core;

public class DefaultConfigurationFactory {

    static class DefaultThreadFactory implements java.util.concurrent.ThreadFactory {
        private static final java.util.concurrent.atomic.AtomicInteger poolNumber = null;
        private final java.lang.ThreadGroup group;
        private final java.lang.String namePrefix;
        private final java.util.concurrent.atomic.AtomicInteger threadNumber;
        private final int threadPriority;

        static {
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.DefaultThreadFactory.poolNumber = r0
                return
        }

        DefaultThreadFactory(int r3, java.lang.String r4) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
                r1 = 1
                r0.<init>(r1)
                r2.threadNumber = r0
                r2.threadPriority = r3
                java.lang.Thread r3 = java.lang.Thread.currentThread()
                java.lang.ThreadGroup r3 = r3.getThreadGroup()
                r2.group = r3
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                r3.append(r4)
                java.util.concurrent.atomic.AtomicInteger r4 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.DefaultThreadFactory.poolNumber
                int r4 = r4.getAndIncrement()
                r3.append(r4)
                java.lang.String r4 = "-thread-"
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                r2.namePrefix = r3
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r8) {
                r7 = this;
                java.lang.Thread r6 = new java.lang.Thread
                java.lang.ThreadGroup r1 = r7.group
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = r7.namePrefix
                r0.append(r2)
                java.util.concurrent.atomic.AtomicInteger r2 = r7.threadNumber
                int r2 = r2.getAndIncrement()
                r0.append(r2)
                java.lang.String r3 = r0.toString()
                r4 = 0
                r0 = r6
                r2 = r8
                r0.<init>(r1, r2, r3, r4)
                boolean r8 = r6.isDaemon()
                if (r8 == 0) goto L2c
                r8 = 0
                r6.setDaemon(r8)
            L2c:
                int r8 = r7.threadPriority
                r6.setPriority(r8)
                return r6
        }
    }

    public DefaultConfigurationFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer createBitmapDisplayer() {
            com.kwad.sdk.core.imageloader.core.display.SimpleBitmapDisplayer r0 = new com.kwad.sdk.core.imageloader.core.display.SimpleBitmapDisplayer
            r0.<init>()
            return r0
    }

    public static com.kwad.sdk.core.imageloader.cache.disc.DiskCache createDiskCache(android.content.Context r8, com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator r9, long r10, int r12, java.lang.String r13) {
            java.io.File r7 = createReserveDiskCacheDir(r8, r13)
            r0 = 0
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 > 0) goto Lc
            if (r12 <= 0) goto L1f
        Lc:
            java.io.File r1 = com.kwad.sdk.core.imageloader.utils.StorageUtils.getIndividualCacheDirectory(r8, r13)
            com.kwad.sdk.core.imageloader.cache.disc.impl.ext.LruDiskCache r8 = new com.kwad.sdk.core.imageloader.cache.disc.impl.ext.LruDiskCache     // Catch: java.io.IOException -> L1b
            r0 = r8
            r2 = r7
            r3 = r9
            r4 = r10
            r6 = r12
            r0.<init>(r1, r2, r3, r4, r6)     // Catch: java.io.IOException -> L1b
            return r8
        L1b:
            r8 = move-exception
            com.kwad.sdk.core.imageloader.utils.L.e(r8)
        L1f:
            java.io.File r8 = new java.io.File
            r8.<init>(r13)
            com.kwad.sdk.core.imageloader.cache.disc.impl.UnlimitedDiskCache r10 = new com.kwad.sdk.core.imageloader.cache.disc.impl.UnlimitedDiskCache
            r10.<init>(r8, r7, r9)
            return r10
    }

    public static java.util.concurrent.Executor createExecutor(int r8, int r9, com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r10) {
            com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType r0 = com.kwad.sdk.core.imageloader.core.assist.QueueProcessingType.LIFO
            if (r10 != r0) goto L6
            r10 = 1
            goto L7
        L6:
            r10 = 0
        L7:
            if (r10 == 0) goto Lf
            com.kwad.sdk.core.imageloader.core.assist.deque.LIFOLinkedBlockingDeque r10 = new com.kwad.sdk.core.imageloader.core.assist.deque.LIFOLinkedBlockingDeque
            r10.<init>()
            goto L14
        Lf:
            java.util.concurrent.LinkedBlockingQueue r10 = new java.util.concurrent.LinkedBlockingQueue
            r10.<init>()
        L14:
            r6 = r10
            java.util.concurrent.BlockingQueue r6 = (java.util.concurrent.BlockingQueue) r6
            java.util.concurrent.ThreadPoolExecutor r10 = new java.util.concurrent.ThreadPoolExecutor
            r3 = 0
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            java.lang.String r0 = "uil-pool-"
            java.util.concurrent.ThreadFactory r7 = createThreadFactory(r9, r0)
            r0 = r10
            r1 = r8
            r2 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            return r10
    }

    public static com.kwad.sdk.core.imageloader.cache.disc.naming.FileNameGenerator createFileNameGenerator() {
            com.kwad.sdk.core.imageloader.cache.disc.naming.HashCodeFileNameGenerator r0 = new com.kwad.sdk.core.imageloader.cache.disc.naming.HashCodeFileNameGenerator
            r0.<init>()
            return r0
    }

    public static com.kwad.sdk.core.imageloader.core.decode.ImageDecoder createImageDecoder(boolean r1) {
            com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder r0 = new com.kwad.sdk.core.imageloader.core.decode.BaseImageDecoder
            r0.<init>(r1)
            return r0
    }

    public static com.kwad.sdk.core.imageloader.core.download.ImageDownloader createImageDownloader(android.content.Context r1) {
            com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader r0 = new com.kwad.sdk.core.imageloader.core.download.BaseImageDownloader
            r0.<init>(r1)
            return r0
    }

    public static com.kwad.sdk.core.imageloader.cache.memory.MemoryCache createMemoryCache(android.content.Context r2, int r3) {
            if (r3 != 0) goto L23
            java.lang.String r3 = "activity"
            java.lang.Object r3 = r2.getSystemService(r3)
            android.app.ActivityManager r3 = (android.app.ActivityManager) r3
            int r0 = r3.getMemoryClass()
            boolean r1 = hasHoneycomb()
            if (r1 == 0) goto L1e
            boolean r2 = isLargeHeap(r2)
            if (r2 == 0) goto L1e
            int r0 = getLargeMemoryClass(r3)
        L1e:
            r2 = 1048576(0x100000, float:1.469368E-39)
            int r0 = r0 * r2
            int r3 = r0 / 8
        L23:
            com.kwad.sdk.core.imageloader.cache.memory.impl.LruMemoryCache r2 = new com.kwad.sdk.core.imageloader.cache.memory.impl.LruMemoryCache
            r2.<init>(r3)
            return r2
    }

    private static java.io.File createReserveDiskCacheDir(android.content.Context r1, java.lang.String r2) {
            java.io.File r1 = new java.io.File
            r1.<init>(r2)
            java.io.File r2 = new java.io.File
            java.lang.String r0 = "ksad-images"
            r2.<init>(r1, r0)
            boolean r0 = r2.exists()
            if (r0 != 0) goto L18
            boolean r0 = r2.mkdir()
            if (r0 == 0) goto L19
        L18:
            r1 = r2
        L19:
            return r1
    }

    public static java.util.concurrent.Executor createTaskDistributor() {
            r0 = 5
            java.lang.String r1 = "uil-pool-d-"
            java.util.concurrent.ThreadFactory r0 = createThreadFactory(r0, r1)
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newCachedThreadPool(r0)
            return r0
    }

    private static java.util.concurrent.ThreadFactory createThreadFactory(int r1, java.lang.String r2) {
            com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory$DefaultThreadFactory r0 = new com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory$DefaultThreadFactory
            r0.<init>(r1, r2)
            return r0
    }

    private static int getLargeMemoryClass(android.app.ActivityManager r0) {
            int r0 = r0.getLargeMemoryClass()
            return r0
    }

    private static boolean hasHoneycomb() {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    private static boolean isLargeHeap(android.content.Context r1) {
            android.content.pm.ApplicationInfo r1 = r1.getApplicationInfo()
            int r1 = r1.flags
            r0 = 1048576(0x100000, float:1.469368E-39)
            r1 = r1 & r0
            if (r1 == 0) goto Ld
            r1 = 1
            return r1
        Ld:
            r1 = 0
            return r1
    }
}

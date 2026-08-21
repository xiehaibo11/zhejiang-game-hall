package com.bumptech.glide.load.engine.cache;

final class DiskCacheWriteLocker {
    private final java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock> locks;
    private final com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLockPool writeLockPool;

    static class 1 {
    }

    private static class WriteLock {
        int interestedThreads;
        final java.util.concurrent.locks.Lock lock;

        private WriteLock() {
                r1 = this;
                r1.<init>()
                java.util.concurrent.locks.ReentrantLock r0 = new java.util.concurrent.locks.ReentrantLock
                r0.<init>()
                r1.lock = r0
                return
        }

        WriteLock(com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static class WriteLockPool {
        private static final int MAX_POOL_SIZE = 10;
        private final java.util.Queue<com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock> pool;

        private WriteLockPool() {
                r1 = this;
                r1.<init>()
                java.util.ArrayDeque r0 = new java.util.ArrayDeque
                r0.<init>()
                r1.pool = r0
                return
        }

        WriteLockPool(com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock obtain() {
                r2 = this;
                java.util.Queue<com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r0 = r2.pool
                monitor-enter(r0)
                java.util.Queue<com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r1 = r2.pool     // Catch: java.lang.Throwable -> L15
                java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L15
                com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock r1 = (com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock) r1     // Catch: java.lang.Throwable -> L15
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
                if (r1 != 0) goto L14
                com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock r1 = new com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock
                r0 = 0
                r1.<init>(r0)
            L14:
                return r1
            L15:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
                throw r1
        }

        void offer(com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock r4) {
                r3 = this;
                java.util.Queue<com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r0 = r3.pool
                monitor-enter(r0)
                java.util.Queue<com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r1 = r3.pool     // Catch: java.lang.Throwable -> L14
                int r1 = r1.size()     // Catch: java.lang.Throwable -> L14
                r2 = 10
                if (r1 >= r2) goto L12
                java.util.Queue<com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r1 = r3.pool     // Catch: java.lang.Throwable -> L14
                r1.offer(r4)     // Catch: java.lang.Throwable -> L14
            L12:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                return
            L14:
                r4 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
                throw r4
        }
    }

    DiskCacheWriteLocker() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.locks = r0
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLockPool r0 = new com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLockPool
            r1 = 0
            r0.<init>(r1)
            r2.writeLockPool = r0
            return
    }

    void acquire(com.bumptech.glide.load.Key r3) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r0 = r2.locks     // Catch: java.lang.Throwable -> L23
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L23
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock r0 = (com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock) r0     // Catch: java.lang.Throwable -> L23
            if (r0 != 0) goto L16
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLockPool r0 = r2.writeLockPool     // Catch: java.lang.Throwable -> L23
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock r0 = r0.obtain()     // Catch: java.lang.Throwable -> L23
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r1 = r2.locks     // Catch: java.lang.Throwable -> L23
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L23
        L16:
            int r3 = r0.interestedThreads     // Catch: java.lang.Throwable -> L23
            int r3 = r3 + 1
            r0.interestedThreads = r3     // Catch: java.lang.Throwable -> L23
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L23
            java.util.concurrent.locks.Lock r3 = r0.lock
            r3.lock()
            return
        L23:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L23
            throw r3
    }

    void release(com.bumptech.glide.load.Key r6) {
            r5 = this;
            monitor-enter(r5)
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r0 = r5.locks     // Catch: java.lang.Throwable -> L7f
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L7f
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock r0 = (com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock) r0     // Catch: java.lang.Throwable -> L7f
            if (r0 == 0) goto L5a
            int r1 = r0.interestedThreads     // Catch: java.lang.Throwable -> L7f
            if (r1 > 0) goto L10
            goto L5a
        L10:
            int r1 = r0.interestedThreads     // Catch: java.lang.Throwable -> L7f
            int r1 = r1 + (-1)
            r0.interestedThreads = r1     // Catch: java.lang.Throwable -> L7f
            if (r1 != 0) goto L53
            java.util.Map<com.bumptech.glide.load.Key, com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock> r1 = r5.locks     // Catch: java.lang.Throwable -> L7f
            java.lang.Object r1 = r1.remove(r6)     // Catch: java.lang.Throwable -> L7f
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLock r1 = (com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker.WriteLock) r1     // Catch: java.lang.Throwable -> L7f
            boolean r2 = r1.equals(r0)     // Catch: java.lang.Throwable -> L7f
            if (r2 == 0) goto L2c
            com.bumptech.glide.load.engine.cache.DiskCacheWriteLocker$WriteLockPool r6 = r5.writeLockPool     // Catch: java.lang.Throwable -> L7f
            r6.offer(r1)     // Catch: java.lang.Throwable -> L7f
            goto L53
        L2c:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L7f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7f
            r3.<init>()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r4 = "Removed the wrong lock, expected to remove: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L7f
            r3.append(r0)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r0 = ", but actually removed: "
            r3.append(r0)     // Catch: java.lang.Throwable -> L7f
            r3.append(r1)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r0 = ", key: "
            r3.append(r0)     // Catch: java.lang.Throwable -> L7f
            r3.append(r6)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L7f
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L7f
            throw r2     // Catch: java.lang.Throwable -> L7f
        L53:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L7f
            java.util.concurrent.locks.Lock r6 = r0.lock
            r6.unlock()
            return
        L5a:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L7f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7f
            r2.<init>()     // Catch: java.lang.Throwable -> L7f
            java.lang.String r3 = "Cannot release a lock that is not held, key: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L7f
            r2.append(r6)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r6 = ", interestedThreads: "
            r2.append(r6)     // Catch: java.lang.Throwable -> L7f
            if (r0 != 0) goto L72
            r6 = 0
            goto L74
        L72:
            int r6 = r0.interestedThreads     // Catch: java.lang.Throwable -> L7f
        L74:
            r2.append(r6)     // Catch: java.lang.Throwable -> L7f
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L7f
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L7f
            throw r1     // Catch: java.lang.Throwable -> L7f
        L7f:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L7f
            throw r6
    }
}

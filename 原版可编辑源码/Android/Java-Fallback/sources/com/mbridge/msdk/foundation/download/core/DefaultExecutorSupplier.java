package com.mbridge.msdk.foundation.download.core;

public class DefaultExecutorSupplier implements com.mbridge.msdk.foundation.download.core.ExecutorSupplier {
    private int DEFAULT_MAX_NUM_THREADS;
    private final java.util.concurrent.ExecutorService backgroundExecutor;
    private final java.util.concurrent.ExecutorService downloadResultExecutor;
    private final com.mbridge.msdk.foundation.download.core.DownloadExecutor networkExecutor;

    DefaultExecutorSupplier() {
            r4 = this;
            r4.<init>()
            r0 = 10
            r4.DEFAULT_MAX_NUM_THREADS = r0
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            com.mbridge.msdk.c.a r1 = r1.g(r2)
            if (r1 == 0) goto L1f
            int r1 = r1.m()
            r4.DEFAULT_MAX_NUM_THREADS = r1
        L1f:
            com.mbridge.msdk.foundation.download.core.PriorityThreadFactory r1 = new com.mbridge.msdk.foundation.download.core.PriorityThreadFactory
            r1.<init>(r0)
            java.util.concurrent.ThreadPoolExecutor$DiscardPolicy r0 = new java.util.concurrent.ThreadPoolExecutor$DiscardPolicy
            r0.<init>()
            com.mbridge.msdk.foundation.download.core.DownloadExecutor r2 = new com.mbridge.msdk.foundation.download.core.DownloadExecutor
            int r3 = r4.DEFAULT_MAX_NUM_THREADS
            r2.<init>(r3, r1, r0)
            r4.networkExecutor = r2
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r4.backgroundExecutor = r0
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r4.downloadResultExecutor = r0
            return
    }

    @Override
    public java.util.concurrent.ExecutorService getBackgroundTasks() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.backgroundExecutor
            return r0
    }

    @Override
    public java.util.concurrent.ExecutorService getDownloadResultTasks() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.downloadResultExecutor
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.download.core.DownloadExecutor getDownloadTasks() {
            r1 = this;
            com.mbridge.msdk.foundation.download.core.DownloadExecutor r0 = r1.networkExecutor
            return r0
    }

    @Override
    public java.util.concurrent.ExecutorService getLruCacheThreadTasks() {
            r1 = this;
            java.util.concurrent.ExecutorService r0 = r1.backgroundExecutor
            return r0
    }
}

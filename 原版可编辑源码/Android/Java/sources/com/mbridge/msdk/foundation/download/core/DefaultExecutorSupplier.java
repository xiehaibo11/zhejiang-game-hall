package com.mbridge.msdk.foundation.download.core;

import com.mbridge.msdk.c.a;
import com.mbridge.msdk.c.b;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadPoolExecutor;

public class DefaultExecutorSupplier implements ExecutorSupplier {
    private int DEFAULT_MAX_NUM_THREADS;
    private final ExecutorService backgroundExecutor;
    private final ExecutorService downloadResultExecutor;
    private final DownloadExecutor networkExecutor;

    DefaultExecutorSupplier() {
        this.DEFAULT_MAX_NUM_THREADS = 10;
        a aVarG = b.a().g(com.mbridge.msdk.foundation.controller.a.f().k());
        if (aVarG != null) {
            this.DEFAULT_MAX_NUM_THREADS = aVarG.m();
        }
        this.networkExecutor = new DownloadExecutor(this.DEFAULT_MAX_NUM_THREADS, new PriorityThreadFactory(10), new ThreadPoolExecutor.DiscardPolicy());
        this.backgroundExecutor = Executors.newSingleThreadExecutor();
        this.downloadResultExecutor = Executors.newSingleThreadExecutor();
    }

    @Override
    public DownloadExecutor getDownloadTasks() {
        return this.networkExecutor;
    }

    @Override
    public ExecutorService getDownloadResultTasks() {
        return this.downloadResultExecutor;
    }

    @Override
    public ExecutorService getBackgroundTasks() {
        return this.backgroundExecutor;
    }

    @Override
    public ExecutorService getLruCacheThreadTasks() {
        return this.backgroundExecutor;
    }
}

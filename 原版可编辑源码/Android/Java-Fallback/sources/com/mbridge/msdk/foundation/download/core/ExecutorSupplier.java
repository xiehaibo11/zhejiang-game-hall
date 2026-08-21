package com.mbridge.msdk.foundation.download.core;

public interface ExecutorSupplier {
    java.util.concurrent.ExecutorService getBackgroundTasks();

    java.util.concurrent.ExecutorService getDownloadResultTasks();

    com.mbridge.msdk.foundation.download.core.DownloadExecutor getDownloadTasks();

    java.util.concurrent.ExecutorService getLruCacheThreadTasks();
}

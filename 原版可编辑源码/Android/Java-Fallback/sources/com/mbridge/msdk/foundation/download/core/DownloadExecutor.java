package com.mbridge.msdk.foundation.download.core;

public class DownloadExecutor extends java.util.concurrent.ThreadPoolExecutor {
    DownloadExecutor(int r10, java.util.concurrent.ThreadFactory r11, java.util.concurrent.RejectedExecutionHandler r12) {
            r9 = this;
            int r2 = r10 + 1
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MICROSECONDS
            java.util.concurrent.PriorityBlockingQueue r6 = new java.util.concurrent.PriorityBlockingQueue
            r6.<init>()
            r3 = 15
            r0 = r9
            r1 = r10
            r7 = r11
            r8 = r12
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            return
    }

    @Override
    public java.util.concurrent.Future<?> submit(java.lang.Runnable r2) {
            r1 = this;
            com.mbridge.msdk.foundation.download.core.DownloadFutureTask r0 = new com.mbridge.msdk.foundation.download.core.DownloadFutureTask
            com.mbridge.msdk.foundation.download.core.Downloader r2 = (com.mbridge.msdk.foundation.download.core.Downloader) r2
            r0.<init>(r2)
            r1.execute(r0)
            return r0
    }
}

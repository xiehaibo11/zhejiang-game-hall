package com.mbridge.msdk.foundation.download.core;

public class DownloadFutureTask extends java.util.concurrent.FutureTask<com.mbridge.msdk.foundation.download.core.Downloader> implements java.lang.Comparable<com.mbridge.msdk.foundation.download.core.DownloadFutureTask> {
    private final com.mbridge.msdk.foundation.download.core.Downloader downloader;

    DownloadFutureTask(com.mbridge.msdk.foundation.download.core.Downloader r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            r1.downloader = r2
            return
    }

    public int compareTo(com.mbridge.msdk.foundation.download.core.DownloadFutureTask r3) {
            r2 = this;
            com.mbridge.msdk.foundation.download.core.Downloader r0 = r2.downloader
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = r0.downloadPriority
            com.mbridge.msdk.foundation.download.core.Downloader r1 = r3.downloader
            com.mbridge.msdk.foundation.download.DownloadPriority r1 = r1.downloadPriority
            if (r0 != r1) goto L14
            com.mbridge.msdk.foundation.download.core.Downloader r0 = r2.downloader
            int r0 = r0.sequence
            com.mbridge.msdk.foundation.download.core.Downloader r3 = r3.downloader
            int r3 = r3.sequence
            int r0 = r0 - r3
            goto L1e
        L14:
            int r3 = r1.ordinal()
            int r0 = r0.ordinal()
            int r0 = r3 - r0
        L1e:
            return r0
    }

    @Override
    public int compareTo(com.mbridge.msdk.foundation.download.core.DownloadFutureTask r1) {
            r0 = this;
            com.mbridge.msdk.foundation.download.core.DownloadFutureTask r1 = (com.mbridge.msdk.foundation.download.core.DownloadFutureTask) r1
            int r1 = r0.compareTo(r1)
            return r1
    }
}

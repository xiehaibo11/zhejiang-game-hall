package com.ss.android.socialbase.downloader.utils;

public class DownloadListenerUtils {
    public DownloadListenerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void notifyListener(int r2, android.util.SparseArray<com.ss.android.socialbase.downloader.depend.IDownloadListener> r3, boolean r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5, com.ss.android.socialbase.downloader.exception.BaseException r6) {
            if (r4 == 0) goto L88
            if (r3 == 0) goto L88
            int r4 = r3.size()     // Catch: java.lang.Throwable -> L84
            if (r4 > 0) goto Lc
            goto L88
        Lc:
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L84
            android.util.SparseArray r4 = r3.clone()     // Catch: java.lang.Throwable -> L81
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L81
            r3 = 0
        L13:
            int r0 = r4.size()     // Catch: java.lang.Throwable -> L84
            if (r3 >= r0) goto L88
            int r0 = r4.keyAt(r3)     // Catch: java.lang.Throwable -> L84
            java.lang.Object r0 = r4.get(r0)     // Catch: java.lang.Throwable -> L84
            com.ss.android.socialbase.downloader.depend.IDownloadListener r0 = (com.ss.android.socialbase.downloader.depend.IDownloadListener) r0     // Catch: java.lang.Throwable -> L84
            if (r0 == 0) goto L7e
            r1 = 1
            if (r2 == r1) goto L7b
            r1 = 2
            if (r2 == r1) goto L77
            r1 = 4
            if (r2 == r1) goto L73
            r1 = 5
            if (r2 == r1) goto L6f
            r1 = 6
            if (r2 == r1) goto L6b
            r1 = 7
            if (r2 == r1) goto L67
            r1 = 11
            if (r2 == r1) goto L5d
            switch(r2) {
                case -7: goto L53;
                case -6: goto L4f;
                case -5: goto L4b;
                case -4: goto L47;
                case -3: goto L43;
                case -2: goto L4b;
                case -1: goto L3f;
                default: goto L3e;
            }     // Catch: java.lang.Throwable -> L84
        L3e:
            goto L7e
        L3f:
            r0.onFailed(r5, r6)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L43:
            r0.onSuccessed(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L47:
            r0.onCanceled(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L4b:
            r0.onPause(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L4f:
            r0.onFirstSuccess(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L53:
            boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.AbsDownloadListener     // Catch: java.lang.Throwable -> L84
            if (r1 == 0) goto L7e
            com.ss.android.socialbase.downloader.depend.AbsDownloadListener r0 = (com.ss.android.socialbase.downloader.depend.AbsDownloadListener) r0     // Catch: java.lang.Throwable -> L84
            r0.onIntercept(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L5d:
            boolean r1 = r0 instanceof com.ss.android.socialbase.downloader.depend.IDownloadExtListener     // Catch: java.lang.Throwable -> L84
            if (r1 == 0) goto L7e
            com.ss.android.socialbase.downloader.depend.IDownloadExtListener r0 = (com.ss.android.socialbase.downloader.depend.IDownloadExtListener) r0     // Catch: java.lang.Throwable -> L84
            r0.onWaitingDownloadCompleteHandler(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L67:
            r0.onRetryDelay(r5, r6)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L6b:
            r0.onFirstStart(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L6f:
            r0.onRetry(r5, r6)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L73:
            r0.onProgress(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L77:
            r0.onStart(r5)     // Catch: java.lang.Throwable -> L84
            goto L7e
        L7b:
            r0.onPrepare(r5)     // Catch: java.lang.Throwable -> L84
        L7e:
            int r3 = r3 + 1
            goto L13
        L81:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L81
            throw r2     // Catch: java.lang.Throwable -> L84
        L84:
            r2 = move-exception
            r2.printStackTrace()
        L88:
            return
    }
}

package com.ss.android.socialbase.downloader.impls;

public class DownloadProxy {
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadProxy downloadIndependentProxy;
    private static volatile com.ss.android.socialbase.downloader.downloader.IDownloadProxy downloadProxy;

    public DownloadProxy() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.socialbase.downloader.downloader.IDownloadProxy get(boolean r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.impls.DownloadProxy> r0 = com.ss.android.socialbase.downloader.impls.DownloadProxy.class
            if (r1 == 0) goto L25
            boolean r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.supportMultiProc()
            if (r1 == 0) goto L25
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadIndependentProxy
            if (r1 != 0) goto L22
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadIndependentProxy     // Catch: java.lang.Throwable -> L1f
            if (r1 != 0) goto L1d
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager$IndependentHolderCreator r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getIndependentHolderCreator()     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = r1.createProxy()     // Catch: java.lang.Throwable -> L1f
            com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadIndependentProxy = r1     // Catch: java.lang.Throwable -> L1f
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            goto L22
        L1f:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r1
        L22:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadIndependentProxy
            return r1
        L25:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadProxy
            if (r1 != 0) goto L3a
            monitor-enter(r0)
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadProxy     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L35
            com.ss.android.socialbase.downloader.impls.ProcessDownloadHandler r1 = new com.ss.android.socialbase.downloader.impls.ProcessDownloadHandler     // Catch: java.lang.Throwable -> L37
            r1.<init>()     // Catch: java.lang.Throwable -> L37
            com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadProxy = r1     // Catch: java.lang.Throwable -> L37
        L35:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            goto L3a
        L37:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r1
        L3a:
            com.ss.android.socialbase.downloader.downloader.IDownloadProxy r1 = com.ss.android.socialbase.downloader.impls.DownloadProxy.downloadProxy
            return r1
    }
}

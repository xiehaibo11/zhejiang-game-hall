package com.ss.android.socialbase.downloader.downloader;

class MultiProcCreater implements com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator {
    MultiProcCreater() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.ss.android.socialbase.downloader.downloader.ISqlDownloadCache createCache(com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.IndependentHolderCreator.OnMainProcessRebindErrorListener r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper r0 = new com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper
            r0.<init>()
            r0.setOnMainProcessRebindErrorCallback(r2)
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.downloader.IDownloadProxy createProxy() {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler r0 = new com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler
            r0.<init>()
            return r0
    }

    @Override
    public com.ss.android.socialbase.downloader.downloader.IDownloadServiceHandler createServiceHandler() {
            r1 = this;
            com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler r0 = new com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler
            r0.<init>()
            return r0
    }
}

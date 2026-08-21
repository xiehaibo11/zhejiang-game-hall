package com.ss.android.socialbase.downloader.downloader;

import com.ss.android.socialbase.downloader.db.SqlDownloadCacheAidlWrapper;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.impls.IndependentDownloadServiceHandler;
import com.ss.android.socialbase.downloader.impls.IndependentProcessDownloadHandler;

class MultiProcCreater implements DownloadComponentManager.IndependentHolderCreator {
    MultiProcCreater() {
    }

    @Override
    public IDownloadServiceHandler createServiceHandler() {
        return new IndependentDownloadServiceHandler();
    }

    @Override
    public IDownloadProxy createProxy() {
        return new IndependentProcessDownloadHandler();
    }

    @Override
    public ISqlDownloadCache createCache(DownloadComponentManager.IndependentHolderCreator.OnMainProcessRebindErrorListener onMainProcessRebindErrorListener) {
        SqlDownloadCacheAidlWrapper sqlDownloadCacheAidlWrapper = new SqlDownloadCacheAidlWrapper();
        sqlDownloadCacheAidlWrapper.setOnMainProcessRebindErrorCallback(onMainProcessRebindErrorListener);
        return sqlDownloadCacheAidlWrapper;
    }
}

package com.ss.android.socialbase.downloader.downloader;

public interface ISqlDownloadCache extends com.ss.android.socialbase.downloader.downloader.IDownloadCache {
    void init(android.util.SparseArray<com.ss.android.socialbase.downloader.model.DownloadInfo> r1, android.util.SparseArray<java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk>> r2, com.ss.android.socialbase.downloader.db.SqlCacheLoadCompleteCallback r3);

    void setInitCallback(com.ss.android.socialbase.downloader.db.ISqlCacheLoadCompleteCallbackAidl r1);
}

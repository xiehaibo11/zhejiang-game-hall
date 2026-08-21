package com.ss.android.socialbase.downloader.downloader;

public interface IDownloadCache {
    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCancel(int r1, long r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskCompleted(int r1, long r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskConnected(int r1, long r2, java.lang.String r4, java.lang.String r5);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskError(int r1, long r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskIntercept(int r1);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPause(int r1, long r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskPrepare(int r1);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskProgress(int r1, long r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo OnDownloadTaskRetry(int r1);

    void addDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1);

    void addSubDownloadChunk(com.ss.android.socialbase.downloader.model.DownloadChunk r1);

    boolean cacheExist(int r1);

    void clearData();

    boolean ensureDownloadCacheSyncSuccess();

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getAllDownloadInfo();

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> getDownloadChunk(int r1);

    com.ss.android.socialbase.downloader.model.DownloadInfo getDownloadInfo(int r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getDownloadInfoList(java.lang.String r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getFailedDownloadInfosWithMimeType(java.lang.String r1);

    java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> getSegmentMap(int r1);

    java.util.List<com.ss.android.socialbase.downloader.segment.Segment> getSegments(int r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getSuccessedDownloadInfosWithMimeType(java.lang.String r1);

    java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> getUnCompletedDownloadInfosWithMimeType(java.lang.String r1);

    void init();

    boolean isDownloadCacheSyncSuccess();

    com.ss.android.socialbase.downloader.model.DownloadInfo onDownloadTaskStart(int r1);

    void removeAllDownloadChunk(int r1);

    boolean removeDownloadInfo(int r1);

    boolean removeDownloadTaskData(int r1);

    void removeSegments(int r1);

    void syncDownloadChunks(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2);

    void syncDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    void syncDownloadInfoFromOtherCache(int r1, java.util.List<com.ss.android.socialbase.downloader.model.DownloadChunk> r2);

    com.ss.android.socialbase.downloader.model.DownloadInfo updateChunkCount(int r1, int r2);

    void updateDownloadChunk(int r1, int r2, long r3);

    boolean updateDownloadInfo(com.ss.android.socialbase.downloader.model.DownloadInfo r1);

    boolean updateSegments(int r1, java.util.Map<java.lang.Long, com.ss.android.socialbase.downloader.segment.Segment> r2);

    void updateSubDownloadChunk(int r1, int r2, int r3, long r4);

    void updateSubDownloadChunkIndex(int r1, int r2, int r3, int r4);
}

.class public interface abstract Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;
.super Ljava/lang/Object;


# virtual methods
.method public abstract OnDownloadTaskCancel(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskCompleted(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskConnected(IJLjava/lang/String;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskError(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskIntercept(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskPause(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskPrepare(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskProgress(IJ)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract OnDownloadTaskRetry(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
.end method

.method public abstract addSubDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
.end method

.method public abstract cacheExist(I)Z
.end method

.method public abstract clearData()V
.end method

.method public abstract ensureDownloadCacheSyncSuccess()Z
.end method

.method public abstract getAllDownloadInfo()Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getDownloadChunk(I)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract getDownloadInfoList(Ljava/lang/String;)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getFailedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getSegmentMap(I)Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getSegments(I)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getSuccessedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation
.end method

.method public abstract getUnCompletedDownloadInfosWithMimeType(Ljava/lang/String;)Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;"
        }
    .end annotation
.end method

.method public abstract init()V
.end method

.method public abstract isDownloadCacheSyncSuccess()Z
.end method

.method public abstract onDownloadTaskStart(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract removeAllDownloadChunk(I)V
.end method

.method public abstract removeDownloadInfo(I)Z
.end method

.method public abstract removeDownloadTaskData(I)Z
.end method

.method public abstract removeSegments(I)V
.end method

.method public abstract syncDownloadChunks(ILjava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract syncDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
.end method

.method public abstract syncDownloadInfoFromOtherCache(ILjava/util/List;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;)V"
        }
    .end annotation
.end method

.method public abstract updateChunkCount(II)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;
.end method

.method public abstract updateDownloadChunk(IIJ)V
.end method

.method public abstract updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
.end method

.method public abstract updateSegments(ILjava/util/Map;)Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/util/Map<",
            "Ljava/lang/Long;",
            "Lcom/ss/android/socialbase/downloader/segment/Segment;",
            ">;)Z"
        }
    .end annotation
.end method

.method public abstract updateSubDownloadChunk(IIIJ)V
.end method

.method public abstract updateSubDownloadChunkIndex(IIII)V
.end method

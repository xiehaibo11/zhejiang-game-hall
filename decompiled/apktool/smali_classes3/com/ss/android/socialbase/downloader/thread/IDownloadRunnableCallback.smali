.class public interface abstract Lcom/ss/android/socialbase/downloader/thread/IDownloadRunnableCallback;
.super Ljava/lang/Object;


# virtual methods
.method public abstract canRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)Z
.end method

.method public abstract checkSpaceOverflow(J)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation
.end method

.method public abstract getUnCompletedSubChunk(I)Lcom/ss/android/socialbase/downloader/model/DownloadChunk;
.end method

.method public abstract handleFirstConnection(Ljava/lang/String;Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;J)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Lcom/ss/android/socialbase/downloader/exception/RetryThrowable;
        }
    .end annotation
.end method

.method public abstract onAllChunkRetryWithReset(Lcom/ss/android/socialbase/downloader/exception/BaseException;Z)V
.end method

.method public abstract onChunkDowngradeRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
.end method

.method public abstract onCompleted(Lcom/ss/android/socialbase/downloader/thread/DownloadChunkRunnable;)V
.end method

.method public abstract onError(Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
.end method

.method public abstract onProgress(J)Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation
.end method

.method public abstract onRetry(Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
.end method

.method public abstract onSingleChunkRetry(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Lcom/ss/android/socialbase/downloader/exception/BaseException;J)Lcom/ss/android/socialbase/downloader/exception/RetryCheckStatus;
.end method

.method public abstract setHttpResponseStatus(Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;)V
.end method

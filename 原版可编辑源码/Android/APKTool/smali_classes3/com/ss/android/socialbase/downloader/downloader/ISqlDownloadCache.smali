.class public interface abstract Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;


# virtual methods
.method public abstract init(Landroid/util/SparseArray;Landroid/util/SparseArray;Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/util/SparseArray<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadInfo;",
            ">;",
            "Landroid/util/SparseArray<",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/DownloadChunk;",
            ">;>;",
            "Lcom/ss/android/socialbase/downloader/db/SqlCacheLoadCompleteCallback;",
            ")V"
        }
    .end annotation
.end method

.method public abstract setInitCallback(Lcom/ss/android/socialbase/downloader/db/ISqlCacheLoadCompleteCallbackAidl;)V
.end method

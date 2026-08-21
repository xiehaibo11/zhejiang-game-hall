.class Lcom/ss/android/socialbase/downloader/downloader/MultiProcCreater;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator;


# direct methods
.method constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public createCache(Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;)Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;
    .locals 1

    .line 21
    new-instance v0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;-><init>()V

    .line 22
    invoke-virtual {v0, p1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCacheAidlWrapper;->setOnMainProcessRebindErrorCallback(Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;)V

    return-object v0
.end method

.method public createProxy()Lcom/ss/android/socialbase/downloader/downloader/IDownloadProxy;
    .locals 1

    .line 16
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/impls/IndependentProcessDownloadHandler;-><init>()V

    return-object v0
.end method

.method public createServiceHandler()Lcom/ss/android/socialbase/downloader/downloader/IDownloadServiceHandler;
    .locals 1

    .line 11
    new-instance v0, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadServiceHandler;

    invoke-direct {v0}, Lcom/ss/android/socialbase/downloader/impls/IndependentDownloadServiceHandler;-><init>()V

    return-object v0
.end method

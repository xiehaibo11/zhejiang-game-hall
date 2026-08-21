.class public interface abstract Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;
.super Ljava/lang/Object;


# virtual methods
.method public abstract handle(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/exception/BaseException;
        }
    .end annotation
.end method

.method public abstract needHandle(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z
.end method

.class public interface abstract Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;
.super Ljava/lang/Object;


# virtual methods
.method public abstract downloadWithConnection(Ljava/lang/String;Ljava/util/List;)Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/ss/android/socialbase/downloader/model/HttpHeader;",
            ">;)",
            "Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

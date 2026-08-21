.class public interface abstract Lcom/ss/android/socialbase/downloader/network/IDownloadHttpConnection;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;


# virtual methods
.method public abstract end()V
.end method

.method public abstract getInputStream()Ljava/io/InputStream;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.class public interface abstract Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpConnection;
.super Ljava/lang/Object;


# virtual methods
.method public abstract cancel()V
.end method

.method public abstract getResponseCode()I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public abstract getResponseHeaderField(Ljava/lang/String;)Ljava/lang/String;
.end method

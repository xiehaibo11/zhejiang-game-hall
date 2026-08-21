.class public interface abstract Lcom/ss/android/socialbase/downloader/reader/IStreamReader;
.super Ljava/lang/Object;


# virtual methods
.method public abstract close()V
.end method

.method public abstract read()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/ss/android/socialbase/downloader/exception/BaseException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation
.end method

.method public abstract recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
.end method

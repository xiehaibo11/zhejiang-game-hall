.class public interface abstract Lcom/ss/android/socialbase/downloader/segment/IBufferPool;
.super Ljava/lang/Object;


# virtual methods
.method public abstract obtain()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation
.end method

.method public abstract recycle(Lcom/ss/android/socialbase/downloader/segment/Buffer;)V
.end method

.class public interface abstract Lcom/ss/android/socialbase/downloader/segment/IInput;
.super Ljava/lang/Object;


# virtual methods
.method public abstract read()Lcom/ss/android/socialbase/downloader/segment/Buffer;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/ss/android/socialbase/downloader/segment/StreamClosedException;,
            Ljava/lang/InterruptedException;
        }
    .end annotation
.end method

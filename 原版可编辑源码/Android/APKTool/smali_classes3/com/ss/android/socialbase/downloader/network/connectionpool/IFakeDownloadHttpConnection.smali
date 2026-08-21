.class public interface abstract Lcom/ss/android/socialbase/downloader/network/connectionpool/IFakeDownloadHttpConnection;
.super Ljava/lang/Object;


# virtual methods
.method public abstract execute()V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public abstract isRequesting()Z
.end method

.method public abstract isSuccessful()Z
.end method

.method public abstract isValid()Z
.end method

.method public abstract joinExecute()V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation
.end method

.class public interface abstract Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/socialbase/downloader/downloader/ITTNetHandler$DefaultTTNetHandler;
    }
.end annotation


# virtual methods
.method public abstract getTTNetDownloadHeadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHeadHttpService;
.end method

.method public abstract getTTNetDownloadHttpService()Lcom/ss/android/socialbase/downloader/network/IDownloadHttpService;
.end method

.method public abstract isResponseCode304Error(Ljava/lang/Throwable;)Z
.end method

.method public abstract isTTNetEnable()Z
.end method

.method public abstract translateTTNetException(Ljava/lang/Throwable;Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/exception/DownloadTTNetException;
.end method

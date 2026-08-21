.class public Lcom/ss/android/socialbase/downloader/exception/DownloadTTNetException;
.super Lcom/ss/android/socialbase/downloader/exception/BaseException;


# direct methods
.method public constructor <init>(ILjava/lang/String;)V
    .locals 0

    .line 10
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/String;)V

    return-void
.end method

.method public constructor <init>(ILjava/lang/Throwable;)V
    .locals 0

    .line 14
    invoke-direct {p0, p1, p2}, Lcom/ss/android/socialbase/downloader/exception/BaseException;-><init>(ILjava/lang/Throwable;)V

    return-void
.end method


# virtual methods
.method public getRequestLog()Ljava/lang/String;
    .locals 1

    .line 23
    invoke-virtual {p0}, Lcom/ss/android/socialbase/downloader/exception/DownloadTTNetException;->getExtraInfo()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public setRequestLog(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/exception/DownloadTTNetException;
    .locals 0

    .line 18
    invoke-virtual {p0, p1}, Lcom/ss/android/socialbase/downloader/exception/DownloadTTNetException;->setExtraInfo(Ljava/lang/String;)V

    return-object p0
.end method

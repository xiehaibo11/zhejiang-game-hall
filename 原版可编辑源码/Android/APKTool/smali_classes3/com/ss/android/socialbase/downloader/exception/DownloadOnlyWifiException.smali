.class public Lcom/ss/android/socialbase/downloader/exception/DownloadOnlyWifiException;
.super Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;


# direct methods
.method public constructor <init>()V
    .locals 2

    const/16 v0, 0x3f5

    const-string v1, "download only wifi"

    .line 7
    invoke-direct {p0, v0, v1}, Lcom/ss/android/socialbase/downloader/exception/DownloadRetryNeedlessException;-><init>(ILjava/lang/String;)V

    return-void
.end method

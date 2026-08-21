.class Lcom/ss/android/downloadlib/pp;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/rg;


# direct methods
.method constructor <init>()V
    .locals 0

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/download/api/config/bm;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 105
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/bm;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/df;)Lcom/ss/android/download/api/rg;
    .locals 2

    .line 123
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/df;)V

    .line 124
    invoke-static {}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->getInstance()Lcom/ss/android/socialbase/downloader/common/AppStatusManager;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/pp$1;

    invoke-direct {v1, p0, p1}, Lcom/ss/android/downloadlib/pp$1;-><init>(Lcom/ss/android/downloadlib/pp;Lcom/ss/android/download/api/config/df;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/common/AppStatusManager;->setInnerAppStatusChangeCaller(Lcom/ss/android/socialbase/downloader/common/AppStatusManager$InnerAppStatusChangeCaller;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/fw;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 74
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/fw;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/hq;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 80
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/hq;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/rz;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 68
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/rz;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/ux;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 86
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/ux;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/config/z;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 278
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/config/z;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/download/api/model/rg;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 111
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/model/rg;)V

    return-object p0
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;)Lcom/ss/android/download/api/rg;
    .locals 1

    .line 177
    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->getNotificationClickCallback()Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;

    move-result-object v0

    if-nez v0, :cond_0

    .line 178
    new-instance v0, Lcom/ss/android/downloadlib/pp$2;

    invoke-direct {v0, p0}, Lcom/ss/android/downloadlib/pp$2;-><init>(Lcom/ss/android/downloadlib/pp;)V

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->notificationClickCallback(Lcom/ss/android/socialbase/downloader/depend/INotificationClickCallback;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    .line 239
    :cond_0
    new-instance v0, Lcom/ss/android/downloadlib/q/q;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/q/q;-><init>()V

    .line 240
    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;->addDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/depend/IDownloadCompleteHandler;)Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;

    const/4 v0, 0x1

    .line 242
    invoke-static {p1, v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->initOrCover(Lcom/ss/android/socialbase/downloader/downloader/DownloaderBuilder;Z)V

    return-object p0
.end method

.method public rg(Ljava/lang/String;)Lcom/ss/android/download/api/rg;
    .locals 0

    .line 117
    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Ljava/lang/String;)V

    return-object p0
.end method

.method public rg()V
    .locals 2

    .line 294
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->y()Z

    move-result v0

    if-nez v0, :cond_0

    .line 295
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    const-string v1, "ttdownloader init error"

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/exception/q;->rg(Ljava/lang/String;)V

    .line 297
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/exception/q;->rg()Lcom/ss/android/downloadlib/exception/q;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/bm;->rg(Lcom/ss/android/download/api/df/rg;)V

    .line 299
    :try_start_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->ou()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/appdownloader/pt;->df(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 301
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 303
    :goto_0
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/rg;->rg()Lcom/ss/android/downloadlib/rg;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;)V

    .line 304
    invoke-static {}, Lcom/ss/android/downloadlib/pt;->rg()Lcom/ss/android/downloadlib/pt;

    move-result-object v0

    new-instance v1, Lcom/ss/android/downloadlib/pp$3;

    invoke-direct {v1, p0}, Lcom/ss/android/downloadlib/pp$3;-><init>(Lcom/ss/android/downloadlib/pp;)V

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/pt;->df(Ljava/lang/Runnable;)V

    return-void
.end method

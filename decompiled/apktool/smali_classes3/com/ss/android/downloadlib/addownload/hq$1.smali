.class final Lcom/ss/android/downloadlib/addownload/hq$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/rg/q;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/hq;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ILcom/ss/android/downloadlib/addownload/q/q;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadad/api/rg/df;

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/q/q;

.field final synthetic rg:I


# direct methods
.method constructor <init>(ILcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/addownload/q/q;)V
    .locals 0

    .line 68
    iput p1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->rg:I

    iput-object p2, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->df:Lcom/ss/android/downloadad/api/rg/df;

    iput-object p3, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->q:Lcom/ss/android/downloadlib/addownload/q/q;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df()V
    .locals 3

    const/4 v0, 0x0

    .line 83
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/hq;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)V

    .line 84
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->rg:I

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->stopPauseReserveOnWifi()V

    .line 89
    :cond_0
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->df:Lcom/ss/android/downloadad/api/rg/df;

    const-string v2, "pause_reserve_wifi_cancel"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 90
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->q:Lcom/ss/android/downloadlib/addownload/q/q;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/addownload/q/q;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void
.end method

.method public rg()V
    .locals 3

    const/4 v0, 0x0

    .line 71
    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/hq;->rg(Lcom/ss/android/downloadlib/addownload/rg/q;)V

    .line 72
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->rg:I

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 74
    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->startPauseReserveOnWifi()V

    .line 75
    invoke-static {}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->getInstance()Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ss/android/socialbase/downloader/impls/RetryScheduler;->tryStartScheduleRetry(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    .line 76
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->df:Lcom/ss/android/downloadad/api/rg/df;

    const-string v2, "pause_reserve_wifi_confirm"

    invoke-virtual {v0, v2, v1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    .line 78
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->q:Lcom/ss/android/downloadlib/addownload/q/q;

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/hq$1;->df:Lcom/ss/android/downloadad/api/rg/df;

    invoke-interface {v0, v1}, Lcom/ss/android/downloadlib/addownload/q/q;->rg(Lcom/ss/android/downloadad/api/rg/df;)V

    return-void
.end method

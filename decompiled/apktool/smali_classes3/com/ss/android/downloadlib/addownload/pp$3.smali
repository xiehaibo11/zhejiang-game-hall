.class Lcom/ss/android/downloadlib/addownload/pp$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/q/q;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pp;->c(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Z

.field final synthetic pp:Lcom/ss/android/downloadlib/addownload/pp;

.field final synthetic pt:I

.field final synthetic q:Lcom/ss/android/downloadad/api/rg/df;

.field final synthetic rg:I


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;IZLcom/ss/android/downloadad/api/rg/df;I)V
    .locals 0

    .line 641
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    iput p2, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->rg:I

    iput-boolean p3, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->df:Z

    iput-object p4, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->q:Lcom/ss/android/downloadad/api/rg/df;

    iput p5, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pt:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/downloadad/api/rg/df;)V
    .locals 3

    .line 644
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-nez p1, :cond_0

    .line 645
    invoke-static {}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->obtainGlobal()Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;

    move-result-object p1

    const-string v0, "fix_handle_pause"

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;->optBugFix(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 646
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getInstance(Landroid/content/Context;)Lcom/ss/android/socialbase/downloader/downloader/Downloader;

    move-result-object v0

    iget v1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->rg:I

    invoke-virtual {v0, v1}, Lcom/ss/android/socialbase/downloader/downloader/Downloader;->getDownloadInfo(I)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    .line 649
    :cond_0
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pp(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/fw;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    iget-boolean v1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->df:Z

    invoke-virtual {p1, v0, v1}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Z)V

    .line 651
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/ss/android/socialbase/downloader/utils/DownloadUtils;->isWifi(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->isPauseReserveOnWifi()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 652
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->stopPauseReserveOnWifi()V

    .line 653
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object p1

    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->q:Lcom/ss/android/downloadad/api/rg/df;

    const-string v1, "pause_reserve_wifi_cancel_on_wifi"

    invoke-virtual {p1, v1, v0}, Lcom/ss/android/downloadlib/event/AdEventHandler;->df(Ljava/lang/String;Lcom/ss/android/downloadad/api/rg/rg;)V

    return-void

    .line 656
    :cond_1
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pp:Lcom/ss/android/downloadlib/addownload/pp;

    iget v0, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->rg:I

    iget v1, p0, Lcom/ss/android/downloadlib/addownload/pp$3;->pt:I

    invoke-static {p1}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v2

    invoke-static {p1, v0, v1, v2}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;IILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method

.class Lcom/ss/android/downloadlib/addownload/fw$rg;
.super Lcom/ss/android/socialbase/downloader/depend/AbsDownloadExtListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ss/android/downloadlib/addownload/fw;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "rg"
.end annotation


# instance fields
.field private rg:Lcom/ss/android/downloadlib/utils/hq;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/utils/hq;)V
    .locals 0

    .line 758
    invoke-direct {p0}, Lcom/ss/android/socialbase/downloader/depend/AbsDownloadExtListener;-><init>()V

    .line 759
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg:Lcom/ss/android/downloadlib/utils/hq;

    return-void
.end method

.method private rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V
    .locals 2

    .line 813
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    const/4 v1, 0x3

    .line 814
    iput v1, v0, Landroid/os/Message;->what:I

    .line 815
    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 817
    iput p2, v0, Landroid/os/Message;->arg1:I

    .line 818
    iget-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg:Lcom/ss/android/downloadlib/utils/hq;

    invoke-virtual {p1, v0}, Lcom/ss/android/downloadlib/utils/hq;->sendMessage(Landroid/os/Message;)Z

    return-void
.end method


# virtual methods
.method public onCanceled(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, -0x4

    .line 804
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onFailed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;)V
    .locals 0

    const/4 p2, -0x1

    .line 799
    invoke-direct {p0, p1, p2}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onPause(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, -0x2

    .line 789
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onPrepare(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, 0x1

    .line 764
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onProgress(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, 0x4

    .line 779
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onStart(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, 0x2

    .line 774
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onSuccessed(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/4 v0, -0x3

    .line 794
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

.method public onWaitingDownloadCompleteHandler(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const/16 v0, 0xb

    .line 809
    invoke-direct {p0, p1, v0}, Lcom/ss/android/downloadlib/addownload/fw$rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;I)V

    return-void
.end method

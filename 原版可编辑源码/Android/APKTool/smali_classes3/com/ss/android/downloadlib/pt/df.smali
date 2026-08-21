.class public Lcom/ss/android/downloadlib/pt/df;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/bm;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/rz;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 21
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 24
    invoke-virtual {v0}, Lcom/ss/android/downloadad/api/rg/df;->om()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->setLinkMode(I)V

    :cond_0
    if-eqz p2, :cond_1

    .line 28
    invoke-interface {p2}, Lcom/ss/android/socialbase/appdownloader/q/rz;->rg()V

    :cond_1
    return-void
.end method

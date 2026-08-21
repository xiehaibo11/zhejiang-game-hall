.class public Lcom/ss/android/downloadlib/pt/rg;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/bm;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 2

    .line 51
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object p1

    .line 52
    invoke-static {p1}, Lcom/ss/android/downloadlib/df/c;->rg(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v0

    .line 53
    invoke-static {p1}, Lcom/ss/android/downloadlib/df/c;->df(Lcom/ss/android/downloadad/api/rg/df;)Z

    move-result v1

    if-eqz v0, :cond_1

    if-nez v1, :cond_0

    goto :goto_0

    .line 60
    :cond_0
    new-instance v0, Lcom/ss/android/downloadlib/pt/rg$3;

    invoke-direct {v0, p0, p2}, Lcom/ss/android/downloadlib/pt/rg$3;-><init>(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/downloadlib/guide/install/rg;)V

    invoke-static {p1, v0}, Lcom/ss/android/downloadlib/df/q;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/downloadlib/guide/install/rg;)V

    return-void

    .line 55
    :cond_1
    :goto_0
    invoke-interface {p2}, Lcom/ss/android/downloadlib/guide/install/rg;->rg()V

    return-void
.end method

.method static synthetic rg(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 0

    .line 23
    invoke-direct {p0, p1, p2}, Lcom/ss/android/downloadlib/pt/rg;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 2

    .line 36
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/model/c;->rg()Lcom/ss/android/downloadlib/addownload/model/c;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ss/android/downloadlib/addownload/model/c;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Lcom/ss/android/downloadad/api/rg/df;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 37
    invoke-static {v0}, Lcom/ss/android/downloadlib/df/rz;->rg(Lcom/ss/android/downloadad/api/rg/rg;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 38
    new-instance v1, Lcom/ss/android/downloadlib/pt/rg$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/ss/android/downloadlib/pt/rg$2;-><init>(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V

    invoke-static {v0, v1}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Lcom/ss/android/downloadad/api/rg/rg;Lcom/ss/android/downloadlib/guide/install/rg;)V

    goto :goto_0

    .line 45
    :cond_0
    invoke-direct {p0, p1, p2}, Lcom/ss/android/downloadlib/pt/rg;->df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V

    :goto_0
    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/rz;)V
    .locals 1

    .line 27
    new-instance v0, Lcom/ss/android/downloadlib/pt/rg$1;

    invoke-direct {v0, p0, p2}, Lcom/ss/android/downloadlib/pt/rg$1;-><init>(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/socialbase/appdownloader/q/rz;)V

    invoke-virtual {p0, p1, v0}, Lcom/ss/android/downloadlib/pt/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V

    return-void
.end method

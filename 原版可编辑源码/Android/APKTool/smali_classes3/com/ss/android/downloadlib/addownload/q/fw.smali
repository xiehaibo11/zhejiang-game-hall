.class public Lcom/ss/android/downloadlib/addownload/q/fw;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/q/pt;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/downloadad/api/rg/df;ILcom/ss/android/downloadlib/addownload/q/q;)Z
    .locals 2

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 v0, 0x0

    .line 22
    invoke-static {v0}, Lcom/ss/android/downloadlib/ux;->rg(Landroid/content/Context;)Lcom/ss/android/downloadlib/ux;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ss/android/downloadad/api/rg/df;->rg()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ss/android/downloadlib/ux;->df(Ljava/lang/String;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v0

    .line 23
    invoke-static {p1, v0, p2, p3}, Lcom/ss/android/downloadlib/addownload/hq;->rg(Lcom/ss/android/downloadad/api/rg/df;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ILcom/ss/android/downloadlib/addownload/q/q;)Z

    move-result p1

    return p1
.end method

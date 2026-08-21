.class final Lcom/bykv/vk/openvk/downloadnew/pt$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/download/api/download/rg/rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bykv/vk/openvk/downloadnew/pt;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 724
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 1

    const-string p1, "TTDownloadVisitor"

    const-string v0, "completeListener: onInstalled"

    .line 738
    invoke-static {p1, v0}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 739
    invoke-static {p2}, Lcom/bykv/vk/openvk/downloadnew/pt;->df(Ljava/lang/String;)V

    return-void
.end method

.method public rg(Lcom/ss/android/download/api/download/DownloadModel;Lcom/ss/android/download/api/download/DownloadController;Lcom/ss/android/download/api/download/DownloadEventConfig;)V
    .locals 0

    const-string p1, "TTDownloadVisitor"

    const-string p2, "completeListener: onDownloadStart"

    .line 727
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 1

    const-string p1, "TTDownloadVisitor"

    const-string v0, "completeListener: onCanceled"

    .line 750
    invoke-static {p1, v0}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;Ljava/lang/String;)V
    .locals 0

    const-string p1, "TTDownloadVisitor"

    const-string p2, "completeListener: onDownloadFailed"

    .line 744
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V
    .locals 0

    const-string p1, "TTDownloadVisitor"

    const-string p2, "completeListener: onDownloadFinished"

    .line 733
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

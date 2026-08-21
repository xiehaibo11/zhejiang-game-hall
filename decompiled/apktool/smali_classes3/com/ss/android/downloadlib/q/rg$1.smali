.class Lcom/ss/android/downloadlib/q/rg$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaScannerConnection$OnScanCompletedListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/q/rg;->rg(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/q/rg;

.field final synthetic rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/q/rg;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 0

    .line 96
    iput-object p1, p0, Lcom/ss/android/downloadlib/q/rg$1;->df:Lcom/ss/android/downloadlib/q/rg;

    iput-object p2, p0, Lcom/ss/android/downloadlib/q/rg$1;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onScanCompleted(Ljava/lang/String;Landroid/net/Uri;)V
    .locals 1

    if-eqz p2, :cond_0

    .line 100
    iget-object p1, p0, Lcom/ss/android/downloadlib/q/rg$1;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-virtual {p2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "file_content_uri"

    invoke-virtual {p1, v0, p2}, Lcom/ss/android/socialbase/downloader/model/DownloadInfo;->safePutToDBJsonData(Ljava/lang/String;Ljava/lang/Object;)V

    .line 101
    invoke-static {}, Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager;->getDownloadCache()Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;

    move-result-object p1

    iget-object p2, p0, Lcom/ss/android/downloadlib/q/rg$1;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    invoke-interface {p1, p2}, Lcom/ss/android/socialbase/downloader/downloader/IDownloadCache;->updateDownloadInfo(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)Z

    :cond_0
    return-void
.end method

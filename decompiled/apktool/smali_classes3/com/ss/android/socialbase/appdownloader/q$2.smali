.class final Lcom/ss/android/socialbase/appdownloader/q$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/q;->df(Landroid/content/Context;IZ)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic pp:Ljava/io/File;

.field final synthetic pt:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field final synthetic q:Z

.field final synthetic rg:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/io/File;)V
    .locals 0

    .line 201
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->rg:Landroid/content/Context;

    iput p2, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->df:I

    iput-boolean p3, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->q:Z

    iput-object p4, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->pt:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iput-object p5, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->pp:Ljava/io/File;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 5

    .line 204
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->rg:Landroid/content/Context;

    iget v1, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->df:I

    iget-boolean v2, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->q:Z

    iget-object v3, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->pt:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v4, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->pp:Ljava/io/File;

    invoke-static {v0, v1, v2, v3, v4}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Landroid/content/Context;IZLcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/io/File;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    .line 205
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/pt;->v()Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 206
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ss/android/socialbase/appdownloader/pt;->v()Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;

    move-result-object v1

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->pt:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    const/4 v3, 0x0

    invoke-interface {v1, v2, v3}, Lcom/ss/android/socialbase/downloader/depend/IOpenInstallerListener;->onOpenInstaller(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Ljava/lang/String;)V

    .line 208
    :cond_0
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->pt:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-boolean v2, p0, Lcom/ss/android/socialbase/appdownloader/q$2;->q:Z

    invoke-static {v1, v2, v0}, Lcom/ss/android/socialbase/appdownloader/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ZI)V

    return-void
.end method

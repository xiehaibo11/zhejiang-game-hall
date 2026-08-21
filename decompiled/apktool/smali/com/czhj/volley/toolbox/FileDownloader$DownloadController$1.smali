.class Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field a:Z

.field final synthetic b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;


# direct methods
.method constructor <init>(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public downloadProgress(Lcom/czhj/volley/toolbox/DownloadItem;JJ)V
    .locals 7

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v1, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    move-object v2, p1

    move-wide v3, p2

    move-wide v5, p4

    invoke-interface/range {v1 .. v6}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->downloadProgress(Lcom/czhj/volley/toolbox/DownloadItem;JJ)V

    :cond_0
    return-void
.end method

.method public onCancel(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->a:Z

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    invoke-interface {v0, p1}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->onCancel(Lcom/czhj/volley/toolbox/DownloadItem;)V

    :cond_0
    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object p1, p1, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {p1, v0}, Lcom/czhj/volley/toolbox/FileDownloader;->a(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V

    return-void
.end method

.method public onErrorResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    invoke-interface {v0, p1}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->onErrorResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V

    :cond_0
    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object p1, p1, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {p1, v0}, Lcom/czhj/volley/toolbox/FileDownloader;->a(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V

    return-void
.end method

.method public onSuccess(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    const/4 v1, 0x3

    iput v1, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    invoke-interface {v0, p1}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->onSuccess(Lcom/czhj/volley/toolbox/DownloadItem;)V

    :cond_0
    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    iget-object p1, p1, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;->b:Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {p1, v0}, Lcom/czhj/volley/toolbox/FileDownloader;->a(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V

    return-void
.end method

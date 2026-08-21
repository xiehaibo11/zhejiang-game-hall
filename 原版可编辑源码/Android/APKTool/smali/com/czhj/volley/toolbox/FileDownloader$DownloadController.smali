.class public Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/czhj/volley/toolbox/FileDownloader;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "DownloadController"
.end annotation


# static fields
.field public static final STATUS_DISCARD:I = 0x4

.field public static final STATUS_DOWNLOADING:I = 0x1

.field public static final STATUS_PAUSE:I = 0x2

.field public static final STATUS_SUCCESS:I = 0x3

.field public static final STATUS_WAITING:I


# instance fields
.field a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

.field b:I

.field final synthetic c:Lcom/czhj/volley/toolbox/FileDownloader;

.field private d:Lcom/czhj/volley/toolbox/FileDownloadRequest;

.field private e:Lcom/czhj/volley/toolbox/DownloadItem;


# direct methods
.method constructor <init>(Lcom/czhj/volley/toolbox/FileDownloader;Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p3, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    iput-object p2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->e:Lcom/czhj/volley/toolbox/DownloadItem;

    return-void
.end method


# virtual methods
.method a()Z
    .locals 4

    iget v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    new-instance v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;

    invoke-direct {v0, p0}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController$1;-><init>(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V

    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    iget-object v3, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->e:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-virtual {v2, v3, v0}, Lcom/czhj/volley/toolbox/FileDownloader;->buildRequest(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloadRequest;

    move-result-object v0

    iput-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->d:Lcom/czhj/volley/toolbox/FileDownloadRequest;

    const/4 v0, 0x1

    iput v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    iget-object v2, v2, Lcom/czhj/volley/toolbox/FileDownloader;->a:Lcom/czhj/volley/RequestQueue;

    if-nez v2, :cond_1

    return v1

    :cond_1
    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    iget-object v1, v1, Lcom/czhj/volley/toolbox/FileDownloader;->a:Lcom/czhj/volley/RequestQueue;

    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->d:Lcom/czhj/volley/toolbox/FileDownloadRequest;

    invoke-virtual {v1, v2}, Lcom/czhj/volley/RequestQueue;->add(Lcom/czhj/volley/Request;)Lcom/czhj/volley/Request;

    return v0
.end method

.method public discard()Z
    .locals 5

    iget v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    const/4 v1, 0x1

    const/4 v2, 0x4

    if-nez v0, :cond_1

    iput v2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    invoke-virtual {v0, p0}, Lcom/czhj/volley/toolbox/FileDownloader;->a(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    if-eqz v0, :cond_0

    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->e:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-interface {v0, v2}, Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;->onCancel(Lcom/czhj/volley/toolbox/DownloadItem;)V

    :cond_0
    return v1

    :cond_1
    const/4 v3, 0x0

    if-ne v0, v2, :cond_2

    return v3

    :cond_2
    const/4 v4, 0x3

    if-ne v0, v4, :cond_3

    return v3

    :cond_3
    if-ne v0, v1, :cond_4

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->d:Lcom/czhj/volley/toolbox/FileDownloadRequest;

    invoke-virtual {v0}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->cancel()V

    :cond_4
    iput v2, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    invoke-virtual {v0, p0}, Lcom/czhj/volley/toolbox/FileDownloader;->a(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V

    return v1
.end method

.method public getDownloadItem()Lcom/czhj/volley/toolbox/DownloadItem;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->e:Lcom/czhj/volley/toolbox/DownloadItem;

    return-object v0
.end method

.method public getDownloadListener()Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    return-object v0
.end method

.method public getStatus()I
    .locals 1

    iget v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    return v0
.end method

.method public getStorePath()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->e:Lcom/czhj/volley/toolbox/DownloadItem;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    return-object v0
.end method

.method public getUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->e:Lcom/czhj/volley/toolbox/DownloadItem;

    iget-object v0, v0, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    return-object v0
.end method

.method public isDownloading()Z
    .locals 2

    iget v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    return v1
.end method

.method public pause()Z
    .locals 2

    iget v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    const/4 v0, 0x2

    iput v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->d:Lcom/czhj/volley/toolbox/FileDownloadRequest;

    invoke-virtual {v0}, Lcom/czhj/volley/toolbox/FileDownloadRequest;->cancel()V

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    invoke-virtual {v0}, Lcom/czhj/volley/toolbox/FileDownloader;->a()V

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public resume()Z
    .locals 3

    iget v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    iput v1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->b:I

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->c:Lcom/czhj/volley/toolbox/FileDownloader;

    invoke-virtual {v0}, Lcom/czhj/volley/toolbox/FileDownloader;->a()V

    const/4 v0, 0x1

    return v0

    :cond_0
    return v1
.end method

.method public setDownloadListener(Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a:Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;

    return-void
.end method

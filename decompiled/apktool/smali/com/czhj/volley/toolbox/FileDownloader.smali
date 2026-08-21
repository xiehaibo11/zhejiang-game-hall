.class public Lcom/czhj/volley/toolbox/FileDownloader;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;
    }
.end annotation


# instance fields
.field final a:Lcom/czhj/volley/RequestQueue;

.field private final b:I

.field private final c:Ljava/util/LinkedList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/LinkedList<",
            "Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Lcom/czhj/volley/RequestQueue;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/czhj/volley/toolbox/FileDownloader;-><init>(Lcom/czhj/volley/RequestQueue;I)V

    return-void
.end method

.method public constructor <init>(Lcom/czhj/volley/RequestQueue;I)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    iput-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    iput p2, p0, Lcom/czhj/volley/toolbox/FileDownloader;->b:I

    iput-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->a:Lcom/czhj/volley/RequestQueue;

    return-void
.end method

.method private b()V
    .locals 2

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    if-ne v0, v1, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "FileDownloader must be invoked from the main thread."

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method a()V
    .locals 4

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    invoke-virtual {v2}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {v3}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->isDownloading()Z

    move-result v3

    if-eqz v3, :cond_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    iget v2, p0, Lcom/czhj/volley/toolbox/FileDownloader;->b:I

    if-lt v1, v2, :cond_2

    monitor-exit v0

    return-void

    :cond_2
    iget-object v2, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    invoke-virtual {v2}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_3
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {v3}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->a()Z

    move-result v3

    if-eqz v3, :cond_3

    add-int/lit8 v1, v1, 0x1

    iget v3, p0, Lcom/czhj/volley/toolbox/FileDownloader;->b:I

    if-ne v1, v3, :cond_3

    monitor-exit v0

    return-void

    :cond_4
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method a(Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;)V
    .locals 2

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    invoke-virtual {v1, p1}, Ljava/util/LinkedList;->remove(Ljava/lang/Object;)Z

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {p0}, Lcom/czhj/volley/toolbox/FileDownloader;->a()V

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;
    .locals 2

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    iget-object v1, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {p0, v0, v1}, Lcom/czhj/volley/toolbox/FileDownloader;->get(Ljava/lang/String;Ljava/lang/String;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    move-result-object v0

    if-nez v0, :cond_0

    new-instance v0, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-direct {v0, p0, p1, p2}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;-><init>(Lcom/czhj/volley/toolbox/FileDownloader;Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)V

    iget-object p1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-enter p1

    :try_start_0
    iget-object p2, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    invoke-virtual {p2, v0}, Ljava/util/LinkedList;->add(Ljava/lang/Object;)Z

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-virtual {p0}, Lcom/czhj/volley/toolbox/FileDownloader;->a()V

    goto :goto_0

    :catchall_0
    move-exception p2

    :try_start_1
    monitor-exit p1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p2

    :cond_0
    :goto_0
    return-object v0
.end method

.method public buildRequest(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloadRequest;
    .locals 1

    new-instance v0, Lcom/czhj/volley/toolbox/FileDownloadRequest;

    invoke-direct {v0, p1, p2}, Lcom/czhj/volley/toolbox/FileDownloadRequest;-><init>(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)V

    return-object v0
.end method

.method public clearAll()V
    .locals 3

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-enter v0

    :goto_0
    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->size()I

    move-result v1

    if-lez v1, :cond_0

    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/LinkedList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {v1}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->discard()Z

    goto :goto_0

    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public get(Ljava/lang/String;Ljava/lang/String;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;
    .locals 4

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    invoke-virtual {v1}, Ljava/util/LinkedList;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->getStorePath()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;->getUrl()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    monitor-exit v0

    return-object v2

    :cond_1
    monitor-exit v0

    const/4 p1, 0x0

    return-object p1

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public getAll()Ljava/util/List;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/volley/toolbox/FileDownloader;->c:Ljava/util/LinkedList;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

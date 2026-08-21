.class Lcom/sigmob/sdk/base/common/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/base/common/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/f;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/f;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/f$1;->a:Lcom/sigmob/sdk/base/common/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public downloadProgress(Lcom/czhj/volley/toolbox/DownloadItem;JJ)V
    .locals 0

    return-void
.end method

.method public onCancel(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 5

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->n()Ljava/util/HashMap;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->m()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$1;->a:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/common/f;)Ljava/util/HashSet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/f$a;

    invoke-interface {v1}, Lcom/sigmob/sdk/base/common/f$a;->a()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    if-nez v2, :cond_1

    goto :goto_0

    :cond_1
    iget-object v3, p1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    sget-object v4, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    if-ne v3, v4, :cond_0

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardZipPath()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v1, v2}, Lcom/sigmob/sdk/base/common/f$a;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public onErrorResponse(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 5

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->error:Lcom/czhj/volley/VolleyError;

    const-string v1, "onErrorResponse: "

    invoke-static {v1, v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->n()Ljava/util/HashMap;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->m()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$1;->a:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/common/f;)Ljava/util/HashSet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/f$a;

    invoke-interface {v1}, Lcom/sigmob/sdk/base/common/f$a;->a()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    if-nez v2, :cond_1

    goto :goto_0

    :cond_1
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardZipPath()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    sget-object v4, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    if-ne v3, v4, :cond_0

    invoke-interface {v1, v2}, Lcom/sigmob/sdk/base/common/f$a;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_0

    :cond_2
    new-instance v0, Lcom/sigmob/sdk/base/common/f$c;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$1;->a:Lcom/sigmob/sdk/base/common/f;

    invoke-direct {v0, v1, p1}, Lcom/sigmob/sdk/base/common/f$c;-><init>(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;)V

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/common/f$c;->executeOnExecutor(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method

.method public onSuccess(Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 5

    iget-object v0, p1, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-static {v0}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->n()Ljava/util/HashMap;

    move-result-object v1

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->m()Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/f$1;->a:Lcom/sigmob/sdk/base/common/f;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/common/f;)Ljava/util/HashSet;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/HashSet;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/common/f$a;

    invoke-interface {v1}, Lcom/sigmob/sdk/base/common/f$a;->a()Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    if-nez v2, :cond_1

    goto :goto_0

    :cond_1
    iget-object v3, p1, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    sget-object v4, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    if-ne v3, v4, :cond_0

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getEndCardZipPath()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p1, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v1, v2}, Lcom/sigmob/sdk/base/common/f$a;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_0

    :cond_2
    new-instance v0, Lcom/sigmob/sdk/base/common/f$c;

    iget-object v1, p0, Lcom/sigmob/sdk/base/common/f$1;->a:Lcom/sigmob/sdk/base/common/f;

    invoke-direct {v0, v1, p1}, Lcom/sigmob/sdk/base/common/f$c;-><init>(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;)V

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object p1

    invoke-virtual {p1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object p1

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0, p1, v1}, Lcom/sigmob/sdk/base/common/f$c;->executeOnExecutor(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;

    return-void
.end method

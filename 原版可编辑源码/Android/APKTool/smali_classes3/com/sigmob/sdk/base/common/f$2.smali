.class Lcom/sigmob/sdk/base/common/f$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/videocache/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/f;->a(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/volley/toolbox/DownloadItem;

.field final synthetic b:Lcom/sigmob/sdk/base/common/f;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/f$2;->b:Lcom/sigmob/sdk/base/common/f;

    iput-object p2, p0, Lcom/sigmob/sdk/base/common/f$2;->a:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/io/File;Ljava/lang/String;I)V
    .locals 1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, " onCacheAvailable "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/16 p2, 0x64

    if-ne p3, p2, :cond_0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    const-string p2, "download"

    invoke-virtual {p1, p2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->o()Lcom/sigmob/sdk/videocache/h;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/videocache/h;->a(Lcom/sigmob/sdk/videocache/d;)V

    new-instance p1, Lcom/sigmob/sdk/base/common/f$c;

    iget-object p2, p0, Lcom/sigmob/sdk/base/common/f$2;->b:Lcom/sigmob/sdk/base/common/f;

    iget-object p3, p0, Lcom/sigmob/sdk/base/common/f$2;->a:Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {p1, p2, p3}, Lcom/sigmob/sdk/base/common/f$c;-><init>(Lcom/sigmob/sdk/base/common/f;Lcom/czhj/volley/toolbox/DownloadItem;)V

    invoke-static {}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getInstance()Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;

    move-result-object p2

    invoke-virtual {p2}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory$BackgroundThreadPool;->getExecutorService()Ljava/util/concurrent/ExecutorService;

    move-result-object p2

    const/4 p3, 0x0

    new-array p3, p3, [Ljava/lang/Object;

    invoke-virtual {p1, p2, p3}, Lcom/sigmob/sdk/base/common/f$c;->executeOnExecutor(Ljava/util/concurrent/Executor;[Ljava/lang/Object;)Landroid/os/AsyncTask;

    :cond_0
    return-void
.end method

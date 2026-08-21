.class Lcom/sigmob/sdk/Sigmob$8;
.super Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/Sigmob;->k()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/Sigmob;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/Sigmob;Landroid/os/Handler;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/Sigmob$8;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-direct {p0, p2}, Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;-><init>(Landroid/os/Handler;)V

    return-void
.end method


# virtual methods
.method protected doWork()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/base/network/f;->a()V

    iget-object v0, p0, Lcom/sigmob/sdk/Sigmob$8;->a:Lcom/sigmob/sdk/Sigmob;

    invoke-static {v0}, Lcom/sigmob/sdk/Sigmob;->e(Lcom/sigmob/sdk/Sigmob;)Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/i;->A()I

    move-result v1

    int-to-long v1, v1

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;->startRepeating(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "retryFaildTracking error "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.class Lcom/czhj/sdk/common/mta/BuriedPointManager$1;
.super Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/sdk/common/mta/BuriedPointManager;->start()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/sdk/common/mta/BuriedPointManager;


# direct methods
.method constructor <init>(Lcom/czhj/sdk/common/mta/BuriedPointManager;Landroid/os/Handler;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager$1;->a:Lcom/czhj/sdk/common/mta/BuriedPointManager;

    invoke-direct {p0, p2}, Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;-><init>(Landroid/os/Handler;)V

    return-void
.end method


# virtual methods
.method protected doWork()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager$1;->a:Lcom/czhj/sdk/common/mta/BuriedPointManager;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->sendPoint()Ljava/lang/String;

    iget-object v0, p0, Lcom/czhj/sdk/common/mta/BuriedPointManager$1;->a:Lcom/czhj/sdk/common/mta/BuriedPointManager;

    invoke-static {v0}, Lcom/czhj/sdk/common/mta/BuriedPointManager;->a(Lcom/czhj/sdk/common/mta/BuriedPointManager;)Lcom/czhj/sdk/common/ThreadPool/RepeatingHandlerRunnable;

    move-result-object v0

    invoke-static {}, Lcom/czhj/sdk/common/models/Config;->sharedInstance()Lcom/czhj/sdk/common/models/Config;

    move-result-object v1

    invoke-virtual {v1}, Lcom/czhj/sdk/common/models/Config;->getSend_log_interval()I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

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

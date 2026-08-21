.class public Lcom/bytedance/pangle/apm/ApmUtils;
.super Ljava/lang/Object;


# static fields
.field private static volatile sApm:Lcom/bytedance/pangle/apm/AbsApm;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getApmInstance()Lcom/bytedance/pangle/apm/AbsApm;
    .locals 2

    .line 23
    sget-object v0, Lcom/bytedance/pangle/apm/ApmUtils;->sApm:Lcom/bytedance/pangle/apm/AbsApm;

    if-nez v0, :cond_1

    .line 24
    const-class v0, Lcom/bytedance/pangle/apm/AbsApm;

    monitor-enter v0

    .line 25
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/apm/ApmUtils;->sApm:Lcom/bytedance/pangle/apm/AbsApm;

    if-nez v1, :cond_0

    .line 27
    new-instance v1, Lcom/bytedance/pangle/apm/ApmUtils$1;

    invoke-direct {v1}, Lcom/bytedance/pangle/apm/ApmUtils$1;-><init>()V

    sput-object v1, Lcom/bytedance/pangle/apm/ApmUtils;->sApm:Lcom/bytedance/pangle/apm/AbsApm;

    .line 52
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 54
    :cond_1
    :goto_0
    sget-object v0, Lcom/bytedance/pangle/apm/ApmUtils;->sApm:Lcom/bytedance/pangle/apm/AbsApm;

    return-object v0
.end method

.method public static declared-synchronized register(Lcom/bytedance/pangle/apm/AbsApm;)V
    .locals 1

    const-class v0, Lcom/bytedance/pangle/apm/ApmUtils;

    monitor-enter v0

    .line 19
    :try_start_0
    sput-object p0, Lcom/bytedance/pangle/apm/ApmUtils;->sApm:Lcom/bytedance/pangle/apm/AbsApm;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 20
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.class public final Lcom/kwad/sdk/core/threads/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/threads/a$a;
    }
.end annotation


# static fields
.field private static auY:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/sdk/core/threads/a$a;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/threads/a;->auY:Ljava/util/Map;

    return-void
.end method

.method public static declared-synchronized CN()Landroid/os/Handler;
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/threads/a;

    monitor-enter v0

    :try_start_0
    const-string v1, "commonHT"

    invoke-static {v1}, Lcom/kwad/sdk/core/threads/a;->dE(Ljava/lang/String;)Lcom/kwad/sdk/core/threads/a$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/threads/a$a;->getHandler()Landroid/os/Handler;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized CO()Landroid/os/Handler;
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/threads/a;

    monitor-enter v0

    :try_start_0
    const-string v1, "reportHT"

    invoke-static {v1}, Lcom/kwad/sdk/core/threads/a;->dE(Ljava/lang/String;)Lcom/kwad/sdk/core/threads/a$a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/threads/a$a;->getHandler()Landroid/os/Handler;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static declared-synchronized a(Lcom/kwad/sdk/utils/bn$a;)Lcom/kwad/sdk/utils/bn;
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/threads/a;

    monitor-enter v0

    :try_start_0
    const-string v1, "commonHT"

    invoke-static {v1}, Lcom/kwad/sdk/core/threads/a;->dE(Ljava/lang/String;)Lcom/kwad/sdk/core/threads/a$a;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/core/threads/a$a;->b(Lcom/kwad/sdk/utils/bn$a;)Lcom/kwad/sdk/utils/bn;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static dE(Ljava/lang/String;)Lcom/kwad/sdk/core/threads/a$a;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/threads/a;->auY:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/threads/a$a;

    return-object p0

    :cond_1
    :goto_0
    new-instance v0, Lcom/kwad/sdk/core/threads/a$a;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/threads/a$a;-><init>(Ljava/lang/String;)V

    sget-object v1, Lcom/kwad/sdk/core/threads/a;->auY:Ljava/util/Map;

    new-instance v2, Ljava/lang/ref/WeakReference;

    invoke-direct {v2, v0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {v1, p0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

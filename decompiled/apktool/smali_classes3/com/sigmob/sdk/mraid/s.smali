.class public Lcom/sigmob/sdk/mraid/s;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid/s$b;,
        Lcom/sigmob/sdk/mraid/s$a;
    }
.end annotation


# static fields
.field static final a:I = 0x32

.field static final b:J = 0x2dc6c0L

.field static final c:Lcom/sigmob/sdk/mraid/s$b;

.field private static final d:J = 0x2dc6c0L

.field private static final e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid/s$a;",
            ">;"
        }
    .end annotation
.end field

.field private static f:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    sput-object v0, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    new-instance v0, Lcom/sigmob/sdk/mraid/s$b;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid/s$b;-><init>(Lcom/sigmob/sdk/mraid/s$1;)V

    sput-object v0, Lcom/sigmob/sdk/mraid/s;->c:Lcom/sigmob/sdk/mraid/s$b;

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    sput-object v0, Lcom/sigmob/sdk/mraid/s;->f:Landroid/os/Handler;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;)Lcom/sigmob/sdk/mraid/s$a;
    .locals 1

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    sget-object v0, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/mraid/s$a;

    return-object p0
.end method

.method static declared-synchronized a()V
    .locals 5

    const-class v0, Lcom/sigmob/sdk/mraid/s;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/mraid/s$a;

    invoke-virtual {v3}, Lcom/sigmob/sdk/mraid/s$a;->b()Ljava/lang/ref/WeakReference;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v3

    if-nez v3, :cond_0

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/mraid/s$a;

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid/s$a;->c()Lcom/sigmob/sdk/base/common/r;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/common/r;->a()V

    invoke-interface {v1}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_1
    sget-object v1, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    sget-object v1, Lcom/sigmob/sdk/mraid/s;->f:Landroid/os/Handler;

    sget-object v2, Lcom/sigmob/sdk/mraid/s;->c:Lcom/sigmob/sdk/mraid/s$b;

    invoke-virtual {v1, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    sget-object v1, Lcom/sigmob/sdk/mraid/s;->f:Landroid/os/Handler;

    sget-object v2, Lcom/sigmob/sdk/mraid/s;->c:Lcom/sigmob/sdk/mraid/s$b;

    const-wide/32 v3, 0x2dc6c0

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method static a(Landroid/os/Handler;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    sput-object p0, Lcom/sigmob/sdk/mraid/s;->f:Landroid/os/Handler;

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/sigmob/sdk/mraid/e;Lcom/sigmob/sdk/base/views/e;Lcom/sigmob/sdk/base/common/r;Lcom/sigmob/sdk/mraid/d;)V
    .locals 2

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    invoke-static {p2}, Lcom/czhj/sdk/common/utils/Preconditions;->checkNotNull(Ljava/lang/Object;)V

    invoke-static {}, Lcom/sigmob/sdk/mraid/s;->a()V

    sget-object v0, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    const/16 v1, 0x32

    if-lt v0, v1, :cond_0

    const-string p0, "Unable to cache web view. Please destroy some via #destroy() and try again."

    invoke-static {p0}, Lcom/czhj/sdk/logger/SigmobLog;->w(Ljava/lang/String;)V

    return-void

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    new-instance v1, Lcom/sigmob/sdk/mraid/s$a;

    invoke-direct {v1, p2, p1, p3, p4}, Lcom/sigmob/sdk/mraid/s$a;-><init>(Lcom/sigmob/sdk/base/views/e;Lcom/sigmob/sdk/base/common/t;Lcom/sigmob/sdk/base/common/r;Lcom/sigmob/sdk/mraid/d;)V

    invoke-interface {v0, p0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static b()V
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    sget-object v0, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->clear()V

    sget-object v0, Lcom/sigmob/sdk/mraid/s;->f:Landroid/os/Handler;

    sget-object v1, Lcom/sigmob/sdk/mraid/s;->c:Lcom/sigmob/sdk/mraid/s$b;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    return-void
.end method

.method static c()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid/s$a;",
            ">;"
        }
    .end annotation

    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    sget-object v0, Lcom/sigmob/sdk/mraid/s;->e:Ljava/util/Map;

    return-object v0
.end method

.class final Lcom/tkay/core/b/b$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/b/b;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/core/b/b;)V
    .locals 0

    .line 375
    iput-object p1, p0, Lcom/tkay/core/b/b$4;->a:Lcom/tkay/core/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 378
    iget-object v0, p0, Lcom/tkay/core/b/b$4;->a:Lcom/tkay/core/b/b;

    monitor-enter v0

    .line 379
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/b/b$4;->a:Lcom/tkay/core/b/b;

    invoke-virtual {v1}, Lcom/tkay/core/b/b;->d()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 380
    iget-object v1, p0, Lcom/tkay/core/b/b$4;->a:Lcom/tkay/core/b/b;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    invoke-static {v1, v2, v3}, Lcom/tkay/core/b/b;->a(Lcom/tkay/core/b/b;J)V

    .line 382
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.class public final Lcom/tkay/basead/d;
.super Ljava/lang/Object;


# instance fields
.field a:J

.field b:J

.field c:Ljava/lang/Runnable;

.field d:Z

.field e:Lcom/tkay/core/common/j/b;

.field private final f:Lcom/tkay/core/common/j/a;


# direct methods
.method public constructor <init>(JLjava/lang/Runnable;)V
    .locals 1

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 16
    iput-boolean v0, p0, Lcom/tkay/basead/d;->d:Z

    .line 1016
    invoke-static {}, Lcom/tkay/core/common/j/c;->a()Lcom/tkay/core/common/j/a;

    move-result-object v0

    .line 18
    iput-object v0, p0, Lcom/tkay/basead/d;->f:Lcom/tkay/core/common/j/a;

    .line 20
    new-instance v0, Lcom/tkay/basead/d$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/d$1;-><init>(Lcom/tkay/basead/d;)V

    iput-object v0, p0, Lcom/tkay/basead/d;->e:Lcom/tkay/core/common/j/b;

    .line 31
    iput-wide p1, p0, Lcom/tkay/basead/d;->b:J

    .line 32
    iput-object p3, p0, Lcom/tkay/basead/d;->c:Ljava/lang/Runnable;

    return-void
.end method


# virtual methods
.method public final declared-synchronized a()V
    .locals 4

    monitor-enter p0

    .line 36
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/basead/d;->b:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/basead/d;->d:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 37
    iput-boolean v0, p0, Lcom/tkay/basead/d;->d:Z

    .line 38
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/d;->a:J

    .line 39
    iget-object v0, p0, Lcom/tkay/basead/d;->f:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/d;->e:Lcom/tkay/core/common/j/b;

    iget-wide v2, p0, Lcom/tkay/basead/d;->b:J

    invoke-interface {v0, v1, v2, v3}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 41
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized b()V
    .locals 6

    monitor-enter p0

    .line 44
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/basead/d;->d:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 45
    iput-boolean v0, p0, Lcom/tkay/basead/d;->d:Z

    .line 46
    iget-wide v0, p0, Lcom/tkay/basead/d;->b:J

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/basead/d;->a:J

    sub-long/2addr v2, v4

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/tkay/basead/d;->b:J

    .line 47
    iget-object v0, p0, Lcom/tkay/basead/d;->f:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/d;->e:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 49
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized c()V
    .locals 2

    monitor-enter p0

    const/4 v0, 0x0

    .line 52
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/basead/d;->d:Z

    .line 53
    iget-object v0, p0, Lcom/tkay/basead/d;->f:Lcom/tkay/core/common/j/a;

    iget-object v1, p0, Lcom/tkay/basead/d;->e:Lcom/tkay/core/common/j/b;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/j/a;->a(Lcom/tkay/core/common/j/b;)V

    const-wide/16 v0, -0x1

    .line 54
    iput-wide v0, p0, Lcom/tkay/basead/d;->b:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 55
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

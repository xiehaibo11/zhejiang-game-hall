.class Lcom/sigmob/sdk/videocache/o;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/videocache/o$a;
    }
.end annotation


# static fields
.field private static final a:I = 0x3


# instance fields
.field private final b:Lcom/sigmob/sdk/videocache/s;

.field private final c:Lcom/sigmob/sdk/videocache/c;

.field private final d:Ljava/lang/Object;

.field private final e:Ljava/lang/Object;

.field private final f:Ljava/util/concurrent/atomic/AtomicInteger;

.field private volatile g:Ljava/lang/Thread;

.field private volatile h:Z

.field private volatile i:I


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/videocache/s;Lcom/sigmob/sdk/videocache/c;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/o;->d:Ljava/lang/Object;

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/o;->e:Ljava/lang/Object;

    const/4 v0, -0x1

    iput v0, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/videocache/s;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-static {p2}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/videocache/c;

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    new-instance p1, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {p1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/o;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videocache/o;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->e()V

    return-void
.end method

.method private b()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    const/4 v1, 0x3

    if-ge v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicInteger;->set(I)V

    new-instance v1, Lcom/sigmob/sdk/videocache/p;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Error reading source "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, " times"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/sigmob/sdk/videocache/p;-><init>(Ljava/lang/String;)V

    throw v1
.end method

.method private b(JJ)V
    .locals 0

    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/sigmob/sdk/videocache/o;->a(JJ)V

    iget-object p1, p0, Lcom/sigmob/sdk/videocache/o;->d:Ljava/lang/Object;

    monitor-enter p1

    :try_start_0
    iget-object p2, p0, Lcom/sigmob/sdk/videocache/o;->d:Ljava/lang/Object;

    invoke-virtual {p2}, Ljava/lang/Object;->notifyAll()V

    monitor-exit p1

    return-void

    :catchall_0
    move-exception p2

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p2
.end method

.method private declared-synchronized c()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    monitor-enter p0

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->g:Ljava/lang/Thread;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->g:Ljava/lang/Thread;

    invoke-virtual {v0}, Ljava/lang/Thread;->getState()Ljava/lang/Thread$State;

    move-result-object v0

    sget-object v1, Ljava/lang/Thread$State;->TERMINATED:Ljava/lang/Thread$State;

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    iget-boolean v1, p0, Lcom/sigmob/sdk/videocache/o;->h:Z

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v1}, Lcom/sigmob/sdk/videocache/c;->d()Z

    move-result v1

    if-nez v1, :cond_1

    if-nez v0, :cond_1

    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/sigmob/sdk/videocache/o$a;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/sigmob/sdk/videocache/o$a;-><init>(Lcom/sigmob/sdk/videocache/o;Lcom/sigmob/sdk/videocache/o$1;)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Source reader for "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v1, v2}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/o;->g:Ljava/lang/Thread;

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->g:Ljava/lang/Thread;

    invoke-virtual {v0}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private d()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->d:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->d:Ljava/lang/Object;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v1, v2, v3}, Ljava/lang/Object;->wait(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    goto :goto_0

    :catch_0
    move-exception v1

    new-instance v2, Lcom/sigmob/sdk/videocache/p;

    const-string v3, "Waiting source data is interrupted!"

    invoke-direct {v2, v3, v1}, Lcom/sigmob/sdk/videocache/p;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    :goto_0
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v1
.end method

.method private e()V
    .locals 8

    const-wide/16 v0, -0x1

    const-wide/16 v2, 0x0

    :try_start_0
    iget-object v4, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v4}, Lcom/sigmob/sdk/videocache/c;->a()J

    move-result-wide v2

    iget-object v4, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-interface {v4, v2, v3}, Lcom/sigmob/sdk/videocache/s;->a(J)V

    iget-object v4, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-interface {v4}, Lcom/sigmob/sdk/videocache/s;->a()J

    move-result-wide v0

    const/16 v4, 0x2000

    new-array v4, v4, [B

    :goto_0
    iget-object v5, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-interface {v5, v4}, Lcom/sigmob/sdk/videocache/s;->a([B)I

    move-result v5

    const/4 v6, -0x1

    if-eq v5, v6, :cond_1

    iget-object v6, p0, Lcom/sigmob/sdk/videocache/o;->e:Ljava/lang/Object;

    monitor-enter v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->h()Z

    move-result v7

    if-eqz v7, :cond_0

    const-string v4, "SourceReaderRunnable\u505c\u6b62\u4ece\u670d\u52a1\u5668\u4e0b\u8f7d\u89c6\u9891\u6570\u636e"

    invoke-static {v4}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    monitor-exit v6
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->i()V

    invoke-direct {p0, v2, v3, v0, v1}, Lcom/sigmob/sdk/videocache/o;->b(JJ)V

    return-void

    :cond_0
    :try_start_2
    iget-object v7, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v7, v4, v5}, Lcom/sigmob/sdk/videocache/c;->a([BI)V

    monitor-exit v6
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    int-to-long v5, v5

    add-long/2addr v2, v5

    :try_start_3
    invoke-direct {p0, v2, v3, v0, v1}, Lcom/sigmob/sdk/videocache/o;->b(JJ)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_0

    :catchall_0
    move-exception v4

    :try_start_4
    monitor-exit v6
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :try_start_5
    throw v4

    :cond_1
    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->g()V

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->f()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v4

    :try_start_6
    iget-object v5, p0, Lcom/sigmob/sdk/videocache/o;->f:Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-virtual {v5}, Ljava/util/concurrent/atomic/AtomicInteger;->incrementAndGet()I

    invoke-virtual {p0, v4}, Lcom/sigmob/sdk/videocache/o;->a(Ljava/lang/Throwable;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :goto_1
    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->i()V

    invoke-direct {p0, v2, v3, v0, v1}, Lcom/sigmob/sdk/videocache/o;->b(JJ)V

    return-void

    :catchall_2
    move-exception v4

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->i()V

    invoke-direct {p0, v2, v3, v0, v1}, Lcom/sigmob/sdk/videocache/o;->b(JJ)V

    throw v4
.end method

.method private f()V
    .locals 1

    const/16 v0, 0x64

    iput v0, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    iget v0, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/videocache/o;->a(I)V

    return-void
.end method

.method private g()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->e:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->h()Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v1}, Lcom/sigmob/sdk/videocache/c;->a()J

    move-result-wide v1

    iget-object v3, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-interface {v3}, Lcom/sigmob/sdk/videocache/s;->a()J

    move-result-wide v3

    cmp-long v1, v1, v3

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v1}, Lcom/sigmob/sdk/videocache/c;->c()V

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

.method private h()Z
    .locals 1

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->isInterrupted()Z

    move-result v0

    if-nez v0, :cond_1

    iget-boolean v0, p0, Lcom/sigmob/sdk/videocache/o;->h:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v0, 0x1

    :goto_1
    return v0
.end method

.method private i()V
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-interface {v0}, Lcom/sigmob/sdk/videocache/s;->b()V
    :try_end_0
    .catch Lcom/sigmob/sdk/videocache/p; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    new-instance v1, Lcom/sigmob/sdk/videocache/p;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Error closing source "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2, v0}, Lcom/sigmob/sdk/videocache/p;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/videocache/o;->a(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public a([BJI)I
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    invoke-static {p1, p2, p3, p4}, Lcom/sigmob/sdk/videocache/q;->a([BJI)V

    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v0}, Lcom/sigmob/sdk/videocache/c;->d()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v0}, Lcom/sigmob/sdk/videocache/c;->a()J

    move-result-wide v0

    int-to-long v2, p4

    add-long/2addr v2, p2

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    iget-boolean v0, p0, Lcom/sigmob/sdk/videocache/o;->h:Z

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->c()V

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->d()V

    invoke-direct {p0}, Lcom/sigmob/sdk/videocache/o;->b()V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v0, p1, p2, p3, p4}, Lcom/sigmob/sdk/videocache/c;->a([BJI)I

    move-result p1

    iget-object p2, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {p2}, Lcom/sigmob/sdk/videocache/c;->d()Z

    move-result p2

    if-eqz p2, :cond_1

    iget p2, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    const/16 p3, 0x64

    if-eq p2, p3, :cond_1

    iput p3, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    invoke-virtual {p0, p3}, Lcom/sigmob/sdk/videocache/o;->a(I)V

    :cond_1
    return p1
.end method

.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/o;->e:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Shutdown proxy for "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/sigmob/sdk/videocache/o;->b:Lcom/sigmob/sdk/videocache/s;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x1

    :try_start_1
    iput-boolean v1, p0, Lcom/sigmob/sdk/videocache/o;->h:Z

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->g:Ljava/lang/Thread;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->g:Ljava/lang/Thread;

    invoke-virtual {v1}, Ljava/lang/Thread;->interrupt()V

    :cond_0
    iget-object v1, p0, Lcom/sigmob/sdk/videocache/o;->c:Lcom/sigmob/sdk/videocache/c;

    invoke-interface {v1}, Lcom/sigmob/sdk/videocache/c;->b()V
    :try_end_1
    .catch Lcom/sigmob/sdk/videocache/p; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    :try_start_2
    invoke-virtual {p0, v1}, Lcom/sigmob/sdk/videocache/o;->a(Ljava/lang/Throwable;)V

    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v1
.end method

.method protected a(I)V
    .locals 0

    return-void
.end method

.method protected a(JJ)V
    .locals 4

    const-wide/16 v0, 0x0

    cmp-long v0, p3, v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_0

    move v3, v1

    goto :goto_0

    :cond_0
    move v3, v2

    :goto_0
    if-eqz v3, :cond_1

    const/16 p1, 0x64

    goto :goto_1

    :cond_1
    long-to-float p1, p1

    long-to-float p2, p3

    div-float/2addr p1, p2

    const/high16 p2, 0x42c80000    # 100.0f

    mul-float/2addr p1, p2

    float-to-int p1, p1

    :goto_1
    iget p2, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    if-eq p1, p2, :cond_2

    move p2, v1

    goto :goto_2

    :cond_2
    move p2, v2

    :goto_2
    if-ltz v0, :cond_3

    goto :goto_3

    :cond_3
    move v1, v2

    :goto_3
    if-eqz v1, :cond_4

    if-eqz p2, :cond_4

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/videocache/o;->a(I)V

    :cond_4
    iput p1, p0, Lcom/sigmob/sdk/videocache/o;->i:I

    return-void
.end method

.method protected final a(Ljava/lang/Throwable;)V
    .locals 1

    instance-of v0, p1, Lcom/sigmob/sdk/videocache/l;

    if-eqz v0, :cond_0

    const-string p1, "ProxyCache is interrupted"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string v0, "ProxyCache error"

    invoke-static {v0, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

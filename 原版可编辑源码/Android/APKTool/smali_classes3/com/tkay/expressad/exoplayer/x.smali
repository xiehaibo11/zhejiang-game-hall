.class public final Lcom/tkay/expressad/exoplayer/x;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/x$a;,
        Lcom/tkay/expressad/exoplayer/x$b;
    }
.end annotation


# instance fields
.field private final a:Lcom/tkay/expressad/exoplayer/x$b;

.field private final b:Lcom/tkay/expressad/exoplayer/x$a;

.field private final c:Lcom/tkay/expressad/exoplayer/ae;

.field private d:I

.field private e:Ljava/lang/Object;

.field private f:Landroid/os/Handler;

.field private g:I

.field private h:J

.field private i:Z

.field private j:Z

.field private k:Z

.field private l:Z

.field private m:Z


# direct methods
.method public constructor <init>(Lcom/tkay/expressad/exoplayer/x$a;Lcom/tkay/expressad/exoplayer/x$b;Lcom/tkay/expressad/exoplayer/ae;ILandroid/os/Handler;)V
    .locals 0

    .line 90
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 91
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/x;->b:Lcom/tkay/expressad/exoplayer/x$a;

    .line 92
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/x;->a:Lcom/tkay/expressad/exoplayer/x$b;

    .line 93
    iput-object p3, p0, Lcom/tkay/expressad/exoplayer/x;->c:Lcom/tkay/expressad/exoplayer/ae;

    .line 94
    iput-object p5, p0, Lcom/tkay/expressad/exoplayer/x;->f:Landroid/os/Handler;

    .line 95
    iput p4, p0, Lcom/tkay/expressad/exoplayer/x;->g:I

    const-wide p1, -0x7fffffffffffffffL    # -4.9E-324

    .line 96
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/x;->h:J

    const/4 p1, 0x1

    .line 97
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/x;->i:Z

    return-void
.end method

.method private a(IJ)Lcom/tkay/expressad/exoplayer/x;
    .locals 4

    .line 198
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, p2, v2

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    .line 199
    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    if-ltz p1, :cond_2

    .line 200
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->c:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->a()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->c:Lcom/tkay/expressad/exoplayer/ae;

    invoke-virtual {v0}, Lcom/tkay/expressad/exoplayer/ae;->b()I

    move-result v0

    if-ge p1, v0, :cond_2

    .line 203
    :cond_1
    iput p1, p0, Lcom/tkay/expressad/exoplayer/x;->g:I

    .line 204
    iput-wide p2, p0, Lcom/tkay/expressad/exoplayer/x;->h:J

    return-object p0

    .line 201
    :cond_2
    new-instance v0, Lcom/tkay/expressad/exoplayer/o;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/x;->c:Lcom/tkay/expressad/exoplayer/ae;

    invoke-direct {v0, v1, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/o;-><init>(Lcom/tkay/expressad/exoplayer/ae;IJ)V

    throw v0
.end method

.method private a(J)Lcom/tkay/expressad/exoplayer/x;
    .locals 1

    .line 173
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 174
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/x;->h:J

    return-object p0
.end method

.method private a(Landroid/os/Handler;)Lcom/tkay/expressad/exoplayer/x;
    .locals 1

    .line 154
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 155
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/x;->f:Landroid/os/Handler;

    return-object p0
.end method

.method private b(Z)Lcom/tkay/expressad/exoplayer/x;
    .locals 1

    .line 223
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 224
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/x;->i:Z

    return-object p0
.end method

.method private declared-synchronized l()Lcom/tkay/expressad/exoplayer/x;
    .locals 1

    monitor-enter p0

    .line 258
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    const/4 v0, 0x1

    .line 259
    iput-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->m:Z

    const/4 v0, 0x0

    .line 260
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/x;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 261
    monitor-exit p0

    return-object p0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final a()Lcom/tkay/expressad/exoplayer/ae;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->c:Lcom/tkay/expressad/exoplayer/ae;

    return-object v0
.end method

.method public final a(I)Lcom/tkay/expressad/exoplayer/x;
    .locals 1

    .line 118
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 119
    iput p1, p0, Lcom/tkay/expressad/exoplayer/x;->d:I

    return-object p0
.end method

.method public final a(Ljava/lang/Object;)Lcom/tkay/expressad/exoplayer/x;
    .locals 1

    .line 136
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 137
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/x;->e:Ljava/lang/Object;

    return-object p0
.end method

.method public final declared-synchronized a(Z)V
    .locals 1

    monitor-enter p0

    .line 308
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->k:Z

    or-int/2addr p1, v0

    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/x;->k:Z

    const/4 p1, 0x1

    .line 309
    iput-boolean p1, p0, Lcom/tkay/expressad/exoplayer/x;->l:Z

    .line 310
    invoke-virtual {p0}, Ljava/lang/Object;->notifyAll()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 311
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final b()Lcom/tkay/expressad/exoplayer/x$b;
    .locals 1

    .line 107
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->a:Lcom/tkay/expressad/exoplayer/x$b;

    return-object v0
.end method

.method public final c()I
    .locals 1

    .line 125
    iget v0, p0, Lcom/tkay/expressad/exoplayer/x;->d:I

    return v0
.end method

.method public final d()Ljava/lang/Object;
    .locals 1

    .line 143
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->e:Ljava/lang/Object;

    return-object v0
.end method

.method public final e()Landroid/os/Handler;
    .locals 1

    .line 161
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->f:Landroid/os/Handler;

    return-object v0
.end method

.method public final f()J
    .locals 2

    .line 183
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/x;->h:J

    return-wide v0
.end method

.method public final g()I
    .locals 1

    .line 210
    iget v0, p0, Lcom/tkay/expressad/exoplayer/x;->g:I

    return v0
.end method

.method public final h()Z
    .locals 1

    .line 230
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->i:Z

    return v0
.end method

.method public final i()Lcom/tkay/expressad/exoplayer/x;
    .locals 6

    .line 242
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 243
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/x;->h:J

    const-wide v4, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v2, v4

    if-nez v0, :cond_0

    .line 244
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->i:Z

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 246
    :cond_0
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    .line 247
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->b:Lcom/tkay/expressad/exoplayer/x$a;

    invoke-interface {v0, p0}, Lcom/tkay/expressad/exoplayer/x$a;->a(Lcom/tkay/expressad/exoplayer/x;)V

    return-object p0
.end method

.method public final declared-synchronized j()Z
    .locals 1

    monitor-enter p0

    .line 266
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->m:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized k()Z
    .locals 6

    monitor-enter p0

    .line 284
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->j:Z

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 285
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/x;->f:Landroid/os/Handler;

    invoke-virtual {v0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-virtual {v0}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v1

    if-eq v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 287
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    const-wide/16 v2, 0x1f4

    add-long/2addr v0, v2

    .line 289
    :goto_1
    iget-boolean v4, p0, Lcom/tkay/expressad/exoplayer/x;->l:Z

    if-nez v4, :cond_1

    const-wide/16 v4, 0x0

    cmp-long v4, v2, v4

    if-lez v4, :cond_1

    .line 290
    invoke-virtual {p0, v2, v3}, Ljava/lang/Object;->wait(J)V

    .line 291
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sub-long v2, v0, v2

    goto :goto_1

    .line 293
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->l:Z

    if-eqz v0, :cond_2

    .line 296
    iget-boolean v0, p0, Lcom/tkay/expressad/exoplayer/x;->k:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    .line 294
    :cond_2
    :try_start_1
    new-instance v0, Ljava/util/concurrent/TimeoutException;

    const-string v1, "Message delivery time out"

    invoke-direct {v0, v1}, Ljava/util/concurrent/TimeoutException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

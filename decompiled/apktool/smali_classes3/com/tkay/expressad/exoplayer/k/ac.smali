.class public final Lcom/tkay/expressad/exoplayer/k/ac;
.super Ljava/lang/Object;


# static fields
.field public static final a:J = 0x7fffffffffffffffL

.field private static final b:J = 0x200000000L


# instance fields
.field private c:J

.field private d:J

.field private volatile e:J


# direct methods
.method public constructor <init>(J)V
    .locals 2

    .line 47
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 48
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    .line 49
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/k/ac;->c(J)V

    return-void
.end method

.method private b()J
    .locals 2

    .line 66
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->c:J

    return-wide v0
.end method

.method private c()J
    .locals 6

    .line 76
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    .line 77
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/k/ac;->d:J

    add-long/2addr v0, v2

    return-wide v0

    .line 78
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->c:J

    const-wide v4, 0x7fffffffffffffffL

    cmp-long v4, v0, v4

    if-eqz v4, :cond_1

    return-wide v0

    :cond_1
    return-wide v2
.end method

.method private declared-synchronized c(J)V
    .locals 4

    monitor-enter p0

    .line 60
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 61
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/k/ac;->c:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 62
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private static d(J)J
    .locals 2

    const-wide/32 v0, 0xf4240

    mul-long/2addr p0, v0

    const-wide/32 v0, 0x15f90

    .line 173
    div-long/2addr p0, v0

    return-wide p0
.end method

.method private d()V
    .locals 2

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    .line 100
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    return-void
.end method

.method private static e(J)J
    .locals 2

    const-wide/32 v0, 0x15f90

    mul-long/2addr p0, v0

    const-wide/32 v0, 0xf4240

    .line 183
    div-long/2addr p0, v0

    return-wide p0
.end method

.method private declared-synchronized e()V
    .locals 4

    monitor-enter p0

    .line 161
    :goto_0
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 162
    invoke-virtual {p0}, Ljava/lang/Object;->wait()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 164
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public final a()J
    .locals 4

    .line 91
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->c:J

    const-wide v2, 0x7fffffffffffffffL

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    .line 93
    :cond_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    const-wide v2, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v0, v0, v2

    if-nez v0, :cond_1

    return-wide v2

    :cond_1
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->d:J

    return-wide v0
.end method

.method public final a(J)J
    .locals 13

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v2, p1, v0

    if-nez v2, :cond_0

    return-wide v0

    .line 113
    :cond_0
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    cmp-long v0, v2, v0

    const-wide/32 v1, 0x15f90

    const-wide/32 v3, 0xf4240

    if-eqz v0, :cond_1

    .line 116
    iget-wide v5, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    mul-long/2addr v5, v1

    .line 1183
    div-long/2addr v5, v3

    const-wide v7, 0x100000000L

    add-long/2addr v7, v5

    const-wide v9, 0x200000000L

    .line 117
    div-long/2addr v7, v9

    const-wide/16 v11, 0x1

    sub-long v11, v7, v11

    mul-long/2addr v11, v9

    add-long/2addr v11, p1

    mul-long/2addr v7, v9

    add-long/2addr p1, v7

    sub-long v7, v11, v5

    .line 121
    invoke-static {v7, v8}, Ljava/lang/Math;->abs(J)J

    move-result-wide v7

    sub-long v5, p1, v5

    invoke-static {v5, v6}, Ljava/lang/Math;->abs(J)J

    move-result-wide v5

    cmp-long v0, v7, v5

    if-gez v0, :cond_1

    move-wide p1, v11

    :cond_1
    mul-long/2addr p1, v3

    .line 2173
    div-long/2addr p1, v1

    .line 125
    invoke-virtual {p0, p1, p2}, Lcom/tkay/expressad/exoplayer/k/ac;->b(J)J

    move-result-wide p1

    return-wide p1
.end method

.method public final b(J)J
    .locals 4

    const-wide v0, -0x7fffffffffffffffL    # -4.9E-324

    cmp-long v2, p1, v0

    if-nez v2, :cond_0

    return-wide v0

    .line 139
    :cond_0
    iget-wide v2, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    cmp-long v0, v2, v0

    if-eqz v0, :cond_1

    .line 140
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    goto :goto_0

    .line 142
    :cond_1
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->c:J

    const-wide v2, 0x7fffffffffffffffL

    cmp-long v2, v0, v2

    if-eqz v2, :cond_2

    sub-long/2addr v0, p1

    .line 144
    iput-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->d:J

    .line 146
    :cond_2
    monitor-enter p0

    .line 147
    :try_start_0
    iput-wide p1, p0, Lcom/tkay/expressad/exoplayer/k/ac;->e:J

    .line 149
    invoke-virtual {p0}, Ljava/lang/Object;->notifyAll()V

    .line 150
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 152
    :goto_0
    iget-wide v0, p0, Lcom/tkay/expressad/exoplayer/k/ac;->d:J

    add-long/2addr p1, v0

    return-wide p1

    :catchall_0
    move-exception p1

    .line 150
    monitor-exit p0

    throw p1
.end method

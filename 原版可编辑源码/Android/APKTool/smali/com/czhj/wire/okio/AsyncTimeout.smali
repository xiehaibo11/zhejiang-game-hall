.class public Lcom/czhj/wire/okio/AsyncTimeout;
.super Lcom/czhj/wire/okio/Timeout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/wire/okio/AsyncTimeout$Watchdog;
    }
.end annotation


# static fields
.field private static final a:I = 0x10000

.field private static b:Lcom/czhj/wire/okio/AsyncTimeout;


# instance fields
.field private c:Z

.field private d:Lcom/czhj/wire/okio/AsyncTimeout;

.field private e:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/czhj/wire/okio/Timeout;-><init>()V

    return-void
.end method

.method private a(J)J
    .locals 2

    iget-wide v0, p0, Lcom/czhj/wire/okio/AsyncTimeout;->e:J

    sub-long/2addr v0, p1

    return-wide v0
.end method

.method static declared-synchronized a()Lcom/czhj/wire/okio/AsyncTimeout;
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/InterruptedException;
        }
    .end annotation

    const-class v0, Lcom/czhj/wire/okio/AsyncTimeout;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    iget-object v1, v1, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    const/4 v2, 0x0

    if-nez v1, :cond_0

    invoke-virtual {v0}, Ljava/lang/Object;->wait()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v2

    :cond_0
    :try_start_1
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v3

    invoke-direct {v1, v3, v4}, Lcom/czhj/wire/okio/AsyncTimeout;->a(J)J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v5, v3, v5

    if-lez v5, :cond_1

    const-wide/32 v5, 0xf4240

    div-long v7, v3, v5
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-static {v7, v8}, Ljava/lang/Long;->signum(J)I

    mul-long/2addr v5, v7

    sub-long/2addr v3, v5

    long-to-int v1, v3

    :try_start_2
    invoke-virtual {v0, v7, v8, v1}, Ljava/lang/Object;->wait(JI)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    monitor-exit v0

    return-object v2

    :cond_1
    :try_start_3
    sget-object v3, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    iget-object v4, v1, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    iput-object v4, v3, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    iput-object v2, v1, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method private static declared-synchronized a(Lcom/czhj/wire/okio/AsyncTimeout;JZ)V
    .locals 5

    const-class v0, Lcom/czhj/wire/okio/AsyncTimeout;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    if-nez v1, :cond_0

    new-instance v1, Lcom/czhj/wire/okio/AsyncTimeout;

    invoke-direct {v1}, Lcom/czhj/wire/okio/AsyncTimeout;-><init>()V

    sput-object v1, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    new-instance v1, Lcom/czhj/wire/okio/AsyncTimeout$Watchdog;

    invoke-direct {v1}, Lcom/czhj/wire/okio/AsyncTimeout$Watchdog;-><init>()V

    invoke-virtual {v1}, Lcom/czhj/wire/okio/AsyncTimeout$Watchdog;->start()V

    :cond_0
    invoke-static {}, Ljava/lang/System;->nanoTime()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v3, p1, v3

    if-eqz v3, :cond_1

    if-eqz p3, :cond_1

    invoke-virtual {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->deadlineNanoTime()J

    move-result-wide v3

    sub-long/2addr v3, v1

    invoke-static {p1, p2, v3, v4}, Ljava/lang/Math;->min(JJ)J

    move-result-wide p1

    :goto_0
    add-long/2addr p1, v1

    iput-wide p1, p0, Lcom/czhj/wire/okio/AsyncTimeout;->e:J

    goto :goto_1

    :cond_1
    if-eqz v3, :cond_2

    goto :goto_0

    :cond_2
    if-eqz p3, :cond_6

    invoke-virtual {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->deadlineNanoTime()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/czhj/wire/okio/AsyncTimeout;->e:J

    :goto_1
    invoke-direct {p0, v1, v2}, Lcom/czhj/wire/okio/AsyncTimeout;->a(J)J

    move-result-wide p1

    sget-object p3, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    :goto_2
    iget-object v3, p3, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    if-eqz v3, :cond_4

    iget-object v3, p3, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    invoke-direct {v3, v1, v2}, Lcom/czhj/wire/okio/AsyncTimeout;->a(J)J

    move-result-wide v3

    cmp-long v3, p1, v3

    if-gez v3, :cond_3

    goto :goto_3

    :cond_3
    iget-object p3, p3, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    goto :goto_2

    :cond_4
    :goto_3
    iget-object p1, p3, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    iput-object p1, p0, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    iput-object p0, p3, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    sget-object p0, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    if-ne p3, p0, :cond_5

    invoke-virtual {v0}, Ljava/lang/Object;->notify()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_5
    monitor-exit v0

    return-void

    :cond_6
    :try_start_1
    new-instance p0, Ljava/lang/AssertionError;

    invoke-direct {p0}, Ljava/lang/AssertionError;-><init>()V

    throw p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized a(Lcom/czhj/wire/okio/AsyncTimeout;)Z
    .locals 3

    const-class v0, Lcom/czhj/wire/okio/AsyncTimeout;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/czhj/wire/okio/AsyncTimeout;->b:Lcom/czhj/wire/okio/AsyncTimeout;

    :goto_0
    if-eqz v1, :cond_1

    iget-object v2, v1, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    if-ne v2, p0, :cond_0

    iget-object v2, p0, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    iput-object v2, v1, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x0

    :goto_1
    monitor-exit v0

    return p0

    :cond_0
    :try_start_1
    iget-object v1, v1, Lcom/czhj/wire/okio/AsyncTimeout;->d:Lcom/czhj/wire/okio/AsyncTimeout;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_1
    const/4 p0, 0x1

    goto :goto_1

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method


# virtual methods
.method final a(Ljava/io/IOException;)Ljava/io/IOException;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->exit()Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    :cond_0
    invoke-virtual {p0, p1}, Lcom/czhj/wire/okio/AsyncTimeout;->newTimeoutException(Ljava/io/IOException;)Ljava/io/IOException;

    move-result-object p1

    return-object p1
.end method

.method final a(Z)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-virtual {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->exit()Z

    move-result v0

    if-eqz v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/czhj/wire/okio/AsyncTimeout;->newTimeoutException(Ljava/io/IOException;)Ljava/io/IOException;

    move-result-object p1

    throw p1

    :cond_1
    :goto_0
    return-void
.end method

.method public final enter()V
    .locals 5

    iget-boolean v0, p0, Lcom/czhj/wire/okio/AsyncTimeout;->c:Z

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->timeoutNanos()J

    move-result-wide v0

    invoke-virtual {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->hasDeadline()Z

    move-result v2

    const-wide/16 v3, 0x0

    cmp-long v3, v0, v3

    if-nez v3, :cond_0

    if-nez v2, :cond_0

    return-void

    :cond_0
    const/4 v3, 0x1

    iput-boolean v3, p0, Lcom/czhj/wire/okio/AsyncTimeout;->c:Z

    invoke-static {p0, v0, v1, v2}, Lcom/czhj/wire/okio/AsyncTimeout;->a(Lcom/czhj/wire/okio/AsyncTimeout;JZ)V

    return-void

    :cond_1
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "Unbalanced enter/exit"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final exit()Z
    .locals 2

    iget-boolean v0, p0, Lcom/czhj/wire/okio/AsyncTimeout;->c:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    iput-boolean v1, p0, Lcom/czhj/wire/okio/AsyncTimeout;->c:Z

    invoke-static {p0}, Lcom/czhj/wire/okio/AsyncTimeout;->a(Lcom/czhj/wire/okio/AsyncTimeout;)Z

    move-result v0

    return v0
.end method

.method protected newTimeoutException(Ljava/io/IOException;)Ljava/io/IOException;
    .locals 2

    new-instance v0, Ljava/io/InterruptedIOException;

    const-string v1, "timeout"

    invoke-direct {v0, v1}, Ljava/io/InterruptedIOException;-><init>(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    invoke-virtual {v0, p1}, Ljava/io/InterruptedIOException;->initCause(Ljava/lang/Throwable;)Ljava/lang/Throwable;

    :cond_0
    return-object v0
.end method

.method public final sink(Lcom/czhj/wire/okio/Sink;)Lcom/czhj/wire/okio/Sink;
    .locals 1

    new-instance v0, Lcom/czhj/wire/okio/AsyncTimeout$1;

    invoke-direct {v0, p0, p1}, Lcom/czhj/wire/okio/AsyncTimeout$1;-><init>(Lcom/czhj/wire/okio/AsyncTimeout;Lcom/czhj/wire/okio/Sink;)V

    return-object v0
.end method

.method public final source(Lcom/czhj/wire/okio/Source;)Lcom/czhj/wire/okio/Source;
    .locals 1

    new-instance v0, Lcom/czhj/wire/okio/AsyncTimeout$2;

    invoke-direct {v0, p0, p1}, Lcom/czhj/wire/okio/AsyncTimeout$2;-><init>(Lcom/czhj/wire/okio/AsyncTimeout;Lcom/czhj/wire/okio/Source;)V

    return-object v0
.end method

.method protected timedOut()V
    .locals 0

    return-void
.end method

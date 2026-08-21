.class public Lcom/igexin/push/f/b/f;
.super Lcom/igexin/push/f/b/g;


# static fields
.field private static a:Lcom/igexin/push/f/b/f;


# instance fields
.field private b:J

.field private c:J


# direct methods
.method private constructor <init>()V
    .locals 2

    const-wide/32 v0, 0x124f80

    invoke-direct {p0, v0, v1}, Lcom/igexin/push/f/b/g;-><init>(J)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/f/b/f;->o:Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/f/b/f;->b:J

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/f/b/f;->c:J

    return-void
.end method

.method public static declared-synchronized i()Lcom/igexin/push/f/b/f;
    .locals 2

    const-class v0, Lcom/igexin/push/f/b/f;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/igexin/push/f/b/f;->a:Lcom/igexin/push/f/b/f;

    if-nez v1, :cond_0

    new-instance v1, Lcom/igexin/push/f/b/f;

    invoke-direct {v1}, Lcom/igexin/push/f/b/f;-><init>()V

    sput-object v1, Lcom/igexin/push/f/b/f;->a:Lcom/igexin/push/f/b/f;

    :cond_0
    sget-object v1, Lcom/igexin/push/f/b/f;->a:Lcom/igexin/push/f/b/f;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method


# virtual methods
.method public a(J)V
    .locals 0

    iput-wide p1, p0, Lcom/igexin/push/f/b/f;->c:J

    return-void
.end method

.method public final b_()I
    .locals 1

    const v0, -0x7ffffff9

    return v0
.end method

.method public c()V
    .locals 0

    invoke-super {p0}, Lcom/igexin/push/f/b/g;->c()V

    return-void
.end method

.method public d()V
    .locals 0

    return-void
.end method

.method protected d_()V
    .locals 5

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->l()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/igexin/push/util/a;->a(J)Z

    move-result v0

    invoke-static {}, Lcom/igexin/push/util/a;->a()Z

    move-result v1

    invoke-static {}, Lcom/igexin/push/util/a;->f()Z

    move-result v2

    sput-boolean v2, Lcom/igexin/push/core/d;->i:Z

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "RTTask|networkAvailable = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/igexin/push/core/d;->i:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ",sdkOnline = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/igexin/push/core/d;->n:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "pushOn ="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/igexin/push/core/d;->k:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", isSilentTime= "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ", blockEndTime= "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    invoke-static {v2, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-boolean v2, Lcom/igexin/push/core/d;->i:Z

    if-eqz v2, :cond_4

    sget-boolean v2, Lcom/igexin/push/core/d;->k:Z

    if-eqz v2, :cond_4

    sget-boolean v2, Lcom/igexin/push/core/d;->n:Z

    if-nez v2, :cond_4

    if-nez v0, :cond_4

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/igexin/push/util/a;->g()Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-wide/32 v0, 0xdbba0

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, v0, v1, v2}, Lcom/igexin/push/f/b/f;->a(JLjava/util/concurrent/TimeUnit;)I

    new-array v0, v3, [Ljava/lang/Object;

    const-string v1, "RTTask|date is error, set connect interval = 15min"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_1
    new-array v0, v3, [Ljava/lang/Object;

    const-string v1, "RTTask reconnect timer task isOnline = false, try login..."

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/igexin/push/f/b/f;->b:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x9c4

    cmp-long v0, v0, v2

    if-gez v0, :cond_2

    sget v0, Lcom/igexin/push/core/d;->q:I

    add-int/lit8 v0, v0, 0x1

    sput v0, Lcom/igexin/push/core/d;->q:I

    :cond_2
    sget v0, Lcom/igexin/push/core/d;->q:I

    const/16 v1, 0x1e

    if-le v0, v1, :cond_3

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/igexin/push/f/b/f;->c:J

    sub-long/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Math;->abs(J)J

    move-result-wide v0

    long-to-double v0, v0

    const-wide v2, 0x40f1940000000000L    # 72000.0

    cmpg-double v0, v0, v2

    if-gez v0, :cond_3

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/b/i;->d()V

    :cond_3
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/igexin/push/f/b/f;->b:J

    invoke-static {}, Lcom/igexin/push/core/m;->a()Lcom/igexin/push/core/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/m;->b()I

    const-wide/32 v0, 0x1b7740

    goto :goto_1

    :cond_4
    :goto_0
    new-array v0, v3, [Ljava/lang/Object;

    const-string v1, "RTTask reconnect timer task stop, connect interval= 20min #######"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-wide/32 v0, 0x124f80

    :goto_1
    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, v0, v1, v2}, Lcom/igexin/push/f/b/f;->a(JLjava/util/concurrent/TimeUnit;)I

    return-void
.end method

.method public j()V
    .locals 4

    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "RTTask|refreshDelayTime, delay = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, v0, v1, v2}, Lcom/igexin/push/f/b/f;->a(JLjava/util/concurrent/TimeUnit;)I

    return-void
.end method

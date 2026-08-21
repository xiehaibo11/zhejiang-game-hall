.class public final Lcom/tencent/bugly/proguard/bg;
.super Ljava/lang/Thread;
.source "BUGLY"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tencent/bugly/proguard/bg$a;
    }
.end annotation


# instance fields
.field public a:Lcom/tencent/bugly/proguard/bf;

.field public b:Z

.field private c:Z

.field private d:Z

.field private e:Z

.field private f:I

.field private g:Lcom/tencent/bugly/proguard/bg$a;


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 18
    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    const/4 v0, 0x0

    .line 26
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->c:Z

    const/4 v1, 0x1

    .line 27
    iput-boolean v1, p0, Lcom/tencent/bugly/proguard/bg;->d:Z

    .line 28
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->e:Z

    .line 29
    iput v1, p0, Lcom/tencent/bugly/proguard/bg;->f:I

    .line 32
    iput-boolean v1, p0, Lcom/tencent/bugly/proguard/bg;->b:Z

    return-void
.end method

.method private declared-synchronized a(Lcom/tencent/bugly/proguard/bf;)V
    .locals 2

    monitor-enter p0

    .line 189
    :try_start_0
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->d:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 190
    monitor-exit p0

    return-void

    .line 193
    :cond_0
    :try_start_1
    iget-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->e:Z

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/tencent/bugly/proguard/bf;->a()Z

    move-result p1

    if-nez p1, :cond_1

    const-string p1, "Restart getting main stack trace."

    const/4 v0, 0x0

    .line 194
    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {p1, v1}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 p1, 0x1

    .line 195
    iput-boolean p1, p0, Lcom/tencent/bugly/proguard/bg;->d:Z

    .line 196
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->e:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 198
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final a()Z
    .locals 3

    const/4 v0, 0x1

    .line 43
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->c:Z

    .line 44
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/bg;->isAlive()Z

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 48
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/bg;->interrupt()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 50
    invoke-static {v1}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    .line 1101
    :goto_0
    new-array v1, v2, [Ljava/lang/Object;

    const-string v2, "MainHandlerChecker is reset to null."

    invoke-static {v2, v1}, Lcom/tencent/bugly/proguard/al;->d(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 v1, 0x0

    .line 1102
    iput-object v1, p0, Lcom/tencent/bugly/proguard/bg;->a:Lcom/tencent/bugly/proguard/bf;

    return v0
.end method

.method public final b()Z
    .locals 4

    .line 2087
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    .line 2089
    iget-object v1, p0, Lcom/tencent/bugly/proguard/bg;->a:Lcom/tencent/bugly/proguard/bf;

    if-eqz v1, :cond_0

    const-wide/16 v2, 0x1388

    .line 2100
    iput-wide v2, v1, Lcom/tencent/bugly/proguard/bf;->b:J

    goto :goto_0

    .line 2092
    :cond_0
    invoke-virtual {v0}, Landroid/os/Handler;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-virtual {v1}, Landroid/os/Looper;->getThread()Ljava/lang/Thread;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Thread;->getName()Ljava/lang/String;

    move-result-object v1

    .line 2093
    new-instance v2, Lcom/tencent/bugly/proguard/bf;

    invoke-direct {v2, v0, v1}, Lcom/tencent/bugly/proguard/bf;-><init>(Landroid/os/Handler;Ljava/lang/String;)V

    iput-object v2, p0, Lcom/tencent/bugly/proguard/bg;->a:Lcom/tencent/bugly/proguard/bf;

    .line 62
    :goto_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/bg;->isAlive()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    return v1

    .line 66
    :cond_1
    :try_start_0
    invoke-virtual {p0}, Lcom/tencent/bugly/proguard/bg;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    goto :goto_1

    :catch_0
    move-exception v0

    .line 69
    invoke-static {v0}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    :goto_1
    return v1
.end method

.method public final declared-synchronized c()V
    .locals 2

    monitor-enter p0

    const/4 v0, 0x0

    .line 204
    :try_start_0
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->d:Z

    const-string v1, "Record stack trace is disabled."

    .line 205
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 206
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized d()V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x1

    .line 214
    :try_start_0
    iput-boolean v0, p0, Lcom/tencent/bugly/proguard/bg;->e:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 215
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final run()V
    .locals 10

    .line 107
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 108
    :goto_0
    iget-boolean v2, p0, Lcom/tencent/bugly/proguard/bg;->c:Z

    if-nez v2, :cond_a

    .line 111
    :try_start_0
    iget-object v2, p0, Lcom/tencent/bugly/proguard/bg;->a:Lcom/tencent/bugly/proguard/bf;

    const/4 v3, 0x0

    if-nez v2, :cond_0

    const-string v2, "Main handler checker is null. Stop thread monitor."

    .line 112
    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    return-void

    .line 116
    :cond_0
    iget-object v2, p0, Lcom/tencent/bugly/proguard/bg;->a:Lcom/tencent/bugly/proguard/bf;

    .line 3045
    iget-boolean v4, v2, Lcom/tencent/bugly/proguard/bf;->c:Z

    if-eqz v4, :cond_1

    .line 3048
    iput-boolean v3, v2, Lcom/tencent/bugly/proguard/bf;->c:Z

    .line 3049
    invoke-static {}, Landroid/os/SystemClock;->uptimeMillis()J

    move-result-wide v4

    iput-wide v4, v2, Lcom/tencent/bugly/proguard/bf;->d:J

    .line 3050
    iget-object v4, v2, Lcom/tencent/bugly/proguard/bf;->a:Landroid/os/Handler;

    invoke-virtual {v4, v2}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 118
    :cond_1
    invoke-direct {p0, v2}, Lcom/tencent/bugly/proguard/bg;->a(Lcom/tencent/bugly/proguard/bf;)V

    .line 3147
    iget-boolean v4, p0, Lcom/tencent/bugly/proguard/bg;->b:Z

    const/4 v5, 0x1

    if-eqz v4, :cond_7

    iget-boolean v4, p0, Lcom/tencent/bugly/proguard/bg;->d:Z

    if-nez v4, :cond_2

    goto :goto_2

    .line 3150
    :cond_2
    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/bf;->b()J

    move-result-wide v6

    const-wide/16 v8, 0x5e6

    cmp-long v4, v6, v8

    if-lez v4, :cond_7

    const-wide/32 v8, 0x30d36

    cmp-long v4, v6, v8

    if-ltz v4, :cond_3

    goto :goto_2

    :cond_3
    const-wide/16 v8, 0x1392

    cmp-long v4, v6, v8

    if-gtz v4, :cond_4

    .line 3158
    iput v5, p0, Lcom/tencent/bugly/proguard/bg;->f:I

    const-string v4, "timeSinceMsgSent in [2s, 5s], record stack"

    .line 3159
    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v4, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    const/4 v3, 0x1

    goto :goto_2

    .line 3163
    :cond_4
    iget v4, p0, Lcom/tencent/bugly/proguard/bg;->f:I

    add-int/2addr v4, v5

    iput v4, p0, Lcom/tencent/bugly/proguard/bg;->f:I

    .line 3165
    iget v4, p0, Lcom/tencent/bugly/proguard/bg;->f:I

    iget v6, p0, Lcom/tencent/bugly/proguard/bg;->f:I

    sub-int/2addr v6, v5

    and-int/2addr v4, v6

    if-nez v4, :cond_5

    goto :goto_1

    :cond_5
    const/4 v5, 0x0

    :goto_1
    if-eqz v5, :cond_6

    const-string v4, "timeSinceMsgSent in (5s, 200s), should record stack:true"

    .line 3167
    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v4, v3}, Lcom/tencent/bugly/proguard/al;->c(Ljava/lang/String;[Ljava/lang/Object;)Z

    :cond_6
    move v3, v5

    :cond_7
    :goto_2
    if-eqz v3, :cond_8

    .line 121
    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/bf;->d()V

    .line 123
    :cond_8
    iget-object v3, p0, Lcom/tencent/bugly/proguard/bg;->g:Lcom/tencent/bugly/proguard/bg$a;

    if-eqz v3, :cond_9

    iget-boolean v3, p0, Lcom/tencent/bugly/proguard/bg;->d:Z

    if-eqz v3, :cond_9

    .line 124
    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/bf;->a()Z

    .line 125
    invoke-virtual {v2}, Lcom/tencent/bugly/proguard/bf;->b()J

    .line 130
    :cond_9
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    sub-long/2addr v2, v0

    const-wide/16 v4, 0x1f4

    rem-long/2addr v2, v4

    sub-long/2addr v4, v2

    .line 131
    invoke-static {v4, v5}, Lcom/tencent/bugly/proguard/ap;->b(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_0

    :catch_0
    move-exception v2

    .line 135
    invoke-static {v2}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    goto/16 :goto_0

    :catch_1
    move-exception v2

    .line 133
    invoke-static {v2}, Lcom/tencent/bugly/proguard/al;->b(Ljava/lang/Throwable;)Z

    goto/16 :goto_0

    :cond_a
    return-void
.end method

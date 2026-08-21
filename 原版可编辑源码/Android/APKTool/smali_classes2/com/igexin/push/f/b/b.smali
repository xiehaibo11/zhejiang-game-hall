.class public Lcom/igexin/push/f/b/b;
.super Lcom/igexin/push/f/b/g;


# static fields
.field private static a:Lcom/igexin/push/f/b/b;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-static {}, Lcom/igexin/push/core/h;->a()Lcom/igexin/push/core/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/h;->b()J

    move-result-wide v0

    invoke-direct {p0, v0, v1}, Lcom/igexin/push/f/b/g;-><init>(J)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/f/b/b;->o:Z

    return-void
.end method

.method public static i()Lcom/igexin/push/f/b/b;
    .locals 1

    sget-object v0, Lcom/igexin/push/f/b/b;->a:Lcom/igexin/push/f/b/b;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/f/b/b;

    invoke-direct {v0}, Lcom/igexin/push/f/b/b;-><init>()V

    sput-object v0, Lcom/igexin/push/f/b/b;->a:Lcom/igexin/push/f/b/b;

    :cond_0
    sget-object v0, Lcom/igexin/push/f/b/b;->a:Lcom/igexin/push/f/b/b;

    return-object v0
.end method


# virtual methods
.method public final b_()I
    .locals 1

    const v0, -0x7ffffffa

    return v0
.end method

.method public c()V
    .locals 1

    invoke-super {p0}, Lcom/igexin/push/f/b/g;->c()V

    iget-boolean v0, p0, Lcom/igexin/push/f/b/b;->k:Z

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/igexin/push/f/b/b;->j()V

    :cond_0
    return-void
.end method

.method public d()V
    .locals 0

    return-void
.end method

.method protected d_()V
    .locals 2

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->l()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sput-wide v0, Lcom/igexin/push/core/d;->G:J

    sget-boolean v0, Lcom/igexin/push/core/d;->n:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-array v0, v1, [Ljava/lang/Object;

    const-string v1, "heartbeatReq"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->j()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->b()V

    goto :goto_0

    :cond_0
    new-array v0, v1, [Ljava/lang/Object;

    const-string v1, "HeartBeatTimerTask doTaskMethod isOnline = false, refresh wait time !!!!!!"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0}, Lcom/igexin/push/f/b/b;->j()V

    :goto_0
    return-void
.end method

.method public j()V
    .locals 3

    invoke-static {}, Lcom/igexin/push/core/h;->a()Lcom/igexin/push/core/h;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/h;->b()J

    move-result-wide v0

    sget-object v2, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    invoke-virtual {p0, v0, v1, v2}, Lcom/igexin/push/f/b/b;->a(JLjava/util/concurrent/TimeUnit;)I

    return-void
.end method

.method public k()V
    .locals 0

    return-void
.end method

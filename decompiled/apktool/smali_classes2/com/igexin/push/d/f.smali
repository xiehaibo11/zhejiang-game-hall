.class public Lcom/igexin/push/d/f;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/d/i;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()J
    .locals 8

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

    const-string v3, "NormalModel|isPushOn = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/igexin/push/core/d;->k:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " checkIsSilentTime = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " isBlockEndTime = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, " isNetworkAvailable = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v3, Lcom/igexin/push/core/d;->i:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    new-array v4, v3, [Ljava/lang/Object;

    invoke-static {v2, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-boolean v2, Lcom/igexin/push/core/d;->i:Z

    const-wide/32 v4, 0x124f80

    if-eqz v2, :cond_5

    sget-boolean v2, Lcom/igexin/push/core/d;->k:Z

    if-eqz v2, :cond_5

    if-nez v0, :cond_5

    if-nez v1, :cond_0

    goto :goto_3

    :cond_0
    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    const-wide/16 v6, 0x0

    cmp-long v0, v0, v6

    if-gtz v0, :cond_1

    const-wide/16 v0, 0x64

    :goto_0
    sput-wide v0, Lcom/igexin/push/core/d;->F:J

    goto :goto_2

    :cond_1
    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    const-wide/16 v6, 0x2710

    cmp-long v0, v0, v6

    if-gtz v0, :cond_2

    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    const-wide/16 v6, 0x1f4

    :goto_1
    add-long/2addr v0, v6

    goto :goto_0

    :cond_2
    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    const-wide/16 v6, 0x7530

    cmp-long v0, v0, v6

    if-gtz v0, :cond_3

    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    const-wide/16 v6, 0x5dc

    goto :goto_1

    :cond_3
    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    const-wide/32 v6, 0x1d4c0

    goto :goto_1

    :goto_2
    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    cmp-long v0, v0, v4

    if-lez v0, :cond_4

    sput-wide v4, Lcom/igexin/push/core/d;->F:J

    :cond_4
    sget-wide v0, Lcom/igexin/push/core/d;->F:J

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "NormalModel|after add auto reconnect delay time = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-wide v0

    :cond_5
    :goto_3
    new-array v0, v3, [Ljava/lang/Object;

    const-string v1, "NormalModel|reconnect stop, interval= 20min ++++"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-wide v4
.end method

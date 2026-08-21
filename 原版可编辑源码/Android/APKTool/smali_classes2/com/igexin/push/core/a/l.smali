.class public Lcom/igexin/push/core/a/l;
.super Lcom/igexin/push/core/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/igexin/push/core/a/a;-><init>()V

    return-void
.end method

.method private b()V
    .locals 3

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Login successed with cid = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/d/b;->a()Lcom/igexin/push/d/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/d/b;->f()V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "loginRsp|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|success"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "isCidBroadcasted|"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v2, Lcom/igexin/push/core/d;->o:Z

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-boolean v0, Lcom/igexin/push/core/d;->o:Z

    const/4 v1, 0x1

    if-nez v0, :cond_0

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/r;->c()V

    sput-boolean v1, Lcom/igexin/push/core/d;->o:Z

    :cond_0
    sput-boolean v1, Lcom/igexin/push/core/d;->n:Z

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/r;->b()V

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->d()V

    sget-object v0, Lcom/igexin/push/core/d;->A:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->e()V

    :cond_1
    invoke-static {}, Lcom/igexin/push/util/c;->f()V

    invoke-virtual {p0}, Lcom/igexin/push/core/a/l;->a()V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/b/i;->b()V

    invoke-direct {p0}, Lcom/igexin/push/core/a/l;->d()V

    invoke-direct {p0}, Lcom/igexin/push/core/a/l;->e()V

    return-void
.end method

.method private c()V
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "loginRsp|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|failed"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Login "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v3, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " failed"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    new-array v0, v1, [Ljava/lang/Object;

    const-string v1, "LoginResultAction login failed, clear session or cid"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/b/i;->a()Lcom/igexin/push/core/b/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/b/i;->c()V

    invoke-static {}, Lcom/igexin/push/core/m;->a()Lcom/igexin/push/core/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/m;->c()V

    return-void
.end method

.method private d()V
    .locals 2

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    sget-object v1, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method private e()V
    .locals 4

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/assist/sdk/a;->i(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v1, Lcom/igexin/push/core/a/m;

    invoke-direct {v1, p0}, Lcom/igexin/push/core/a/m;-><init>(Lcom/igexin/push/core/a/l;)V

    const/4 v2, 0x0

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, v3}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method


# virtual methods
.method public a()V
    .locals 6

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sget-wide v2, Lcom/igexin/push/core/d;->H:J

    sub-long/2addr v0, v2

    const-wide/32 v2, 0x5265c00

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-lez v0, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    sget-object v3, Lcom/igexin/push/core/d;->C:Ljava/lang/String;

    sget-object v4, Lcom/igexin/push/core/d;->B:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/igexin/b/b/a;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    xor-int/2addr v3, v2

    sget-object v4, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    sget-object v5, Lcom/igexin/push/core/d;->v:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    xor-int/2addr v2, v4

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "LoginResultAction|isOverOneDay = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ", isDeviceTokenDiff = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, ", isCidDiff = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v4, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-nez v0, :cond_1

    if-nez v3, :cond_1

    if-eqz v2, :cond_2

    :cond_1
    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->f()V

    :cond_2
    return-void
.end method

.method public a(Lcom/igexin/b/a/d/e;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public a(Ljava/lang/Object;)Z
    .locals 2

    instance-of v0, p1, Lcom/igexin/push/d/c/k;

    if-eqz v0, :cond_1

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/igexin/push/core/d;->F:J

    sget-boolean v0, Lcom/igexin/push/core/d;->n:Z

    if-nez v0, :cond_1

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->d()Lcom/igexin/push/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->h()V

    check-cast p1, Lcom/igexin/push/d/c/k;

    iget-boolean p1, p1, Lcom/igexin/push/d/c/k;->a:Z

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/igexin/push/core/a/l;->b()V

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/igexin/push/core/a/l;->c()V

    :cond_1
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

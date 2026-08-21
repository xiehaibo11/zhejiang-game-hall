.class public Lcom/igexin/push/core/m;
.super Ljava/lang/Object;


# static fields
.field private static a:Lcom/igexin/push/core/m;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/igexin/push/core/m;
    .locals 1

    sget-object v0, Lcom/igexin/push/core/m;->a:Lcom/igexin/push/core/m;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/core/m;

    invoke-direct {v0}, Lcom/igexin/push/core/m;-><init>()V

    sput-object v0, Lcom/igexin/push/core/m;->a:Lcom/igexin/push/core/m;

    :cond_0
    sget-object v0, Lcom/igexin/push/core/m;->a:Lcom/igexin/push/core/m;

    return-object v0
.end method

.method private a(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/igexin/push/d/c/j;",
            ">;)V"
        }
    .end annotation

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    iget-object v0, v0, Lcom/igexin/push/core/x;->b:Landroid/util/Pair;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    iget-object v0, v0, Lcom/igexin/push/core/x;->b:Landroid/util/Pair;

    iget-object v0, v0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    if-ne v0, v2, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "#"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v1

    iget-object v1, v1, Lcom/igexin/push/core/x;->b:Landroid/util/Pair;

    iget-object v1, v1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_1
    new-instance v0, Lcom/igexin/push/d/c/j;

    invoke-direct {v0}, Lcom/igexin/push/d/c/j;-><init>()V

    const/4 v2, 0x5

    iput-byte v2, v0, Lcom/igexin/push/d/c/j;->a:B

    iput-object v1, v0, Lcom/igexin/push/d/c/j;->b:Ljava/lang/Object;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method


# virtual methods
.method public b()I
    .locals 5

    sget-boolean v0, Lcom/igexin/push/core/d;->k:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/igexin/push/util/a;->a(J)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/igexin/push/util/a;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/igexin/push/d/c/g;

    invoke-direct {v0}, Lcom/igexin/push/d/c/g;-><init>()V

    sget-object v2, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    iput-object v2, v0, Lcom/igexin/push/d/c/g;->a:Ljava/lang/String;

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v2

    invoke-virtual {v2}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v2

    const/4 v3, 0x1

    const-string v4, "K-"

    invoke-virtual {v2, v4, v0, v3}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;Z)I

    move-result v0

    if-gez v0, :cond_1

    return v1

    :cond_1
    return v3

    :cond_2
    :goto_0
    new-array v0, v1, [Ljava/lang/Object;

    const-string v1, "LoginInteractor|keyNegotiate stop ++++++++++"

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v0, -0x1

    return v0
.end method

.method public c()V
    .locals 7

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "Start login appid = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " appkey = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    sget-boolean v0, Lcom/igexin/push/core/d;->m:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    sput-boolean v1, Lcom/igexin/push/core/d;->m:Z

    :cond_0
    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->d()Lcom/igexin/push/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->g()V

    sget-wide v2, Lcom/igexin/push/core/d;->t:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    const/4 v2, 0x1

    if-nez v0, :cond_2

    new-array v0, v1, [Ljava/lang/Object;

    const-string v3, "registerReq #####"

    invoke-static {v3, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    new-instance v0, Lcom/igexin/push/d/c/d;

    sget-object v3, Lcom/igexin/push/core/d;->w:Ljava/lang/String;

    sget-object v4, Lcom/igexin/push/core/d;->x:Ljava/lang/String;

    sget-object v5, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    sget-object v6, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-direct {v0, v3, v4, v5, v6}, Lcom/igexin/push/d/c/d;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "R-"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v5, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, v0, v2}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;Z)I

    move-result v0

    if-gez v0, :cond_1

    move v2, v1

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "registerReq|"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->D:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_2
    invoke-virtual {p0}, Lcom/igexin/push/core/m;->d()Lcom/igexin/push/d/c/i;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "loginReqBefore|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v4, v0, Lcom/igexin/push/d/c/i;->a:J

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    new-array v4, v1, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v3

    invoke-virtual {v3}, Lcom/igexin/push/core/c;->i()Lcom/igexin/push/e/a;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "S-"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-wide v5, Lcom/igexin/push/core/d;->t:J

    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, v0, v2}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;Z)I

    move-result v0

    if-gez v0, :cond_3

    move v2, v1

    :cond_3
    if-eqz v2, :cond_4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "LoginInteractor|loginReq|"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/igexin/push/core/d;->u:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    return-void
.end method

.method public d()Lcom/igexin/push/d/c/i;
    .locals 3

    new-instance v0, Lcom/igexin/push/d/c/i;

    invoke-direct {v0}, Lcom/igexin/push/d/c/i;-><init>()V

    sget-wide v1, Lcom/igexin/push/core/d;->t:J

    iput-wide v1, v0, Lcom/igexin/push/d/c/i;->a:J

    const/4 v1, 0x0

    iput-byte v1, v0, Lcom/igexin/push/d/c/i;->b:B

    const v1, 0xff00

    iput v1, v0, Lcom/igexin/push/d/c/i;->c:I

    sget-object v1, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    iput-object v1, v0, Lcom/igexin/push/d/c/i;->d:Ljava/lang/String;

    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-direct {p0, v1}, Lcom/igexin/push/core/m;->a(Ljava/util/List;)V

    invoke-interface {v1}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_0

    iput-object v1, v0, Lcom/igexin/push/d/c/i;->e:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-object v0
.end method

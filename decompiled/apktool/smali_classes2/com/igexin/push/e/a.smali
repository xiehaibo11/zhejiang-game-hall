.class public Lcom/igexin/push/e/a;
.super Ljava/lang/Object;


# static fields
.field private static a:Ljava/lang/String;


# instance fields
.field private b:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-class v0, Lcom/igexin/push/e/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private b(Z)V
    .locals 6

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|call setActive, param active = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, "; this.active = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/igexin/push/e/a;->b:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    iget-boolean v0, p0, Lcom/igexin/push/e/a;->b:Z

    if-eq v0, p1, :cond_1

    iput-boolean p1, p0, Lcom/igexin/push/e/a;->b:Z

    if-eqz p1, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|active = true, start connect~~~~"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0}, Lcom/igexin/push/e/a;->e()V

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|active = false, disconnect..."

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/igexin/push/e/a;->a(Z)V

    goto :goto_0

    :cond_1
    if-eqz v0, :cond_2

    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    if-nez p1, :cond_2

    sget-wide v2, Lcom/igexin/push/core/d;->F:J

    const-wide/16 v4, 0x5dc

    cmp-long p1, v2, v4

    if-lez p1, :cond_2

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|start active again, online = false, reset delay"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v1, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/igexin/push/core/d;->F:J

    invoke-virtual {p0}, Lcom/igexin/push/e/a;->d()V

    :cond_2
    :goto_0
    return-void
.end method


# virtual methods
.method public a(Ljava/lang/String;Lcom/igexin/push/d/c/c;)I
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, p2, v0}, Lcom/igexin/push/e/a;->a(Ljava/lang/String;Lcom/igexin/push/d/c/c;Z)I

    move-result p1

    return p1
.end method

.method public a(Ljava/lang/String;Lcom/igexin/push/d/c/c;Z)I
    .locals 9

    if-eqz p1, :cond_5

    if-nez p2, :cond_0

    goto/16 :goto_0

    :cond_0
    sget-boolean p1, Lcom/igexin/push/core/d;->n:Z

    const/4 v0, 0x0

    if-nez p1, :cond_1

    instance-of p1, p2, Lcom/igexin/push/d/c/g;

    if-nez p1, :cond_1

    instance-of p1, p2, Lcom/igexin/push/d/c/i;

    if-nez p1, :cond_1

    instance-of p1, p2, Lcom/igexin/push/d/c/d;

    if-nez p1, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "networkLayer|sendData|not online|"

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array p2, v0, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, -0x3

    return p1

    :cond_1
    iget-boolean p1, p0, Lcom/igexin/push/e/a;->b:Z

    if-eqz p1, :cond_4

    const/4 p1, -0x2

    if-eqz p3, :cond_3

    const/16 p3, 0xa

    sget v1, Lcom/igexin/push/config/j;->e:I

    if-lez v1, :cond_2

    sget p3, Lcom/igexin/push/config/j;->e:I

    :cond_2
    move v7, p3

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v1

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->getCmAddress()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x3

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p3

    invoke-virtual {p3}, Lcom/igexin/push/core/c;->h()Lcom/igexin/b/a/b/b;

    move-result-object v4

    const/4 v6, 0x1

    new-instance v8, Lcom/igexin/push/d/h;

    invoke-direct {v8}, Lcom/igexin/push/d/h;-><init>()V

    move-object v5, p2

    invoke-virtual/range {v1 .. v8}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/String;ILcom/igexin/b/a/b/b;Ljava/lang/Object;ZILcom/igexin/b/a/d/a/f;)Lcom/igexin/b/a/b/e;

    move-result-object p2

    if-nez p2, :cond_4

    return p1

    :cond_3
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v1

    invoke-static {}, Lcom/igexin/push/config/SDKUrlConfig;->getCmAddress()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x3

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object p3

    invoke-virtual {p3}, Lcom/igexin/push/core/c;->h()Lcom/igexin/b/a/b/b;

    move-result-object v4

    const/4 v6, 0x1

    move-object v5, p2

    invoke-virtual/range {v1 .. v6}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/String;ILcom/igexin/b/a/b/b;Ljava/lang/Object;Z)Lcom/igexin/b/a/b/e;

    move-result-object p2

    if-nez p2, :cond_4

    return p1

    :cond_4
    return v0

    :cond_5
    :goto_0
    const/4 p1, -0x1

    return p1
.end method

.method public a(Lcom/igexin/b/a/b/a/a/q;)V
    .locals 1

    sget-object v0, Lcom/igexin/b/a/b/a/a/q;->a:Lcom/igexin/b/a/b/a/a/q;

    if-ne p1, v0, :cond_0

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/d/b/b;

    invoke-direct {v0}, Lcom/igexin/push/d/b/b;-><init>()V

    :goto_0
    invoke-virtual {p1, v0}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/c;->c()V

    goto :goto_1

    :cond_0
    sget-object v0, Lcom/igexin/b/a/b/a/a/q;->b:Lcom/igexin/b/a/b/a/a/q;

    if-ne p1, v0, :cond_1

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object p1

    new-instance v0, Lcom/igexin/push/d/b/a;

    invoke-direct {v0}, Lcom/igexin/push/d/b/a;-><init>()V

    goto :goto_0

    :cond_1
    :goto_1
    return-void
.end method

.method public a(Lcom/igexin/push/d/c/c;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/d/c/c;)Z

    return-void
.end method

.method public a(Z)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|call -> disconnect, reset delay = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz p1, :cond_0

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/igexin/push/core/d;->F:J

    :cond_0
    invoke-static {}, Lcom/igexin/b/a/b/a/a/f;->a()Lcom/igexin/b/a/b/a/a/f;

    move-result-object p1

    invoke-virtual {p1}, Lcom/igexin/b/a/b/a/a/f;->c()V

    return-void
.end method

.method public a()Z
    .locals 1

    iget-boolean v0, p0, Lcom/igexin/push/e/a;->b:Z

    return v0
.end method

.method public b()V
    .locals 5

    sget-boolean v0, Lcom/igexin/push/core/d;->k:Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Lcom/igexin/push/util/a;->a(J)Z

    move-result v1

    invoke-static {}, Lcom/igexin/push/util/a;->a()Z

    move-result v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|start: isPushOn = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, " silentTime = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, " isBlockEndTime = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v4, 0x0

    new-array v4, v4, [Ljava/lang/Object;

    invoke-static {v3, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    if-eqz v0, :cond_0

    if-nez v1, :cond_0

    if-eqz v2, :cond_0

    const/4 v0, 0x1

    invoke-direct {p0, v0}, Lcom/igexin/push/e/a;->b(Z)V

    :cond_0
    return-void
.end method

.method public c()V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|stop by user"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-direct {p0, v1}, Lcom/igexin/push/e/a;->b(Z)V

    sget-boolean v0, Lcom/igexin/push/core/d;->n:Z

    if-eqz v0, :cond_0

    sput-boolean v1, Lcom/igexin/push/core/d;->n:Z

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/r;->b()V

    :cond_0
    return-void
.end method

.method public d()V
    .locals 2

    invoke-static {}, Lcom/igexin/push/d/b;->a()Lcom/igexin/push/d/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/d/b;->c()Lcom/igexin/push/d/i;

    move-result-object v0

    invoke-interface {v0}, Lcom/igexin/push/d/i;->a()J

    move-result-wide v0

    sput-wide v0, Lcom/igexin/push/core/d;->F:J

    invoke-static {}, Lcom/igexin/push/f/b/f;->i()Lcom/igexin/push/f/b/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/f/b/f;->j()V

    return-void
.end method

.method public e()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|call -> tryConnect and reset delay = 0"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/igexin/push/e/a;->a(Z)V

    return-void
.end method

.method public f()V
    .locals 3

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->d()Lcom/igexin/push/c/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->c()V

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/c/i;->d()Lcom/igexin/push/c/a;

    move-result-object v0

    invoke-static {}, Lcom/igexin/push/core/h;->a()Lcom/igexin/push/core/h;

    move-result-object v1

    sget-object v2, Lcom/igexin/push/core/j;->c:Lcom/igexin/push/core/j;

    invoke-virtual {v1, v2}, Lcom/igexin/push/core/h;->a(Lcom/igexin/push/core/j;)V

    invoke-virtual {v0}, Lcom/igexin/push/c/a;->i()V

    invoke-virtual {p0}, Lcom/igexin/push/e/a;->h()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|sdkOn = false or pushOn = false, disconect|user"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|disconnect by network"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    const-class v2, Lcom/igexin/b/a/b/a/a/m;

    invoke-virtual {v0, v2}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Class;)Z

    invoke-virtual {p0, v1}, Lcom/igexin/push/e/a;->a(Z)V

    return-void
.end method

.method public g()V
    .locals 3

    const/4 v0, -0x1

    sput v0, Lcom/igexin/push/d/a/b;->b:I

    sget-boolean v0, Lcom/igexin/push/core/d;->j:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|isAppidWrong = true"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/b/a/c/a/f;->a()Lcom/igexin/b/a/c/a/f;

    move-result-object v0

    const-string v1, "isAppidWrong = true"

    invoke-virtual {v0, v1}, Lcom/igexin/b/a/c/a/f;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->isLoadSuccess()Z

    move-result v0

    if-eqz v0, :cond_2

    sget-boolean v0, Lcom/igexin/push/core/d;->al:Z

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/igexin/push/e/a;->d()V

    goto :goto_0

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|initSuccess = false"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|so error ++++++++"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_0
    return-void
.end method

.method public h()Z
    .locals 1

    sget-boolean v0, Lcom/igexin/push/core/d;->k:Z

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method public i()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/h;->a()Lcom/igexin/push/core/h;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/j;->d:Lcom/igexin/push/core/j;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/h;->a(Lcom/igexin/push/core/j;)V

    invoke-static {}, Lcom/igexin/push/util/a;->f()Z

    move-result v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|network changed, available = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, ", last = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-boolean v2, Lcom/igexin/push/core/d;->i:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Object;

    invoke-static {v1, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-static {}, Lcom/igexin/push/d/b;->a()Lcom/igexin/push/d/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/d/b;->b()V

    if-nez v0, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|network changed, available = false, do nothing"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    sget-boolean v1, Lcom/igexin/push/core/d;->i:Z

    if-nez v1, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/e/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|network changed, try connect reset delay"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    invoke-virtual {p0}, Lcom/igexin/push/e/a;->e()V

    :cond_1
    :goto_0
    if-eqz v0, :cond_2

    invoke-static {}, Lcom/igexin/push/c/i;->a()Lcom/igexin/push/c/i;

    move-result-object v1

    invoke-virtual {v1}, Lcom/igexin/push/c/i;->c()V

    :cond_2
    sput-boolean v0, Lcom/igexin/push/core/d;->i:Z

    return-void
.end method

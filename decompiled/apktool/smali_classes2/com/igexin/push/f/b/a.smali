.class public Lcom/igexin/push/f/b/a;
.super Lcom/igexin/push/f/b/g;


# static fields
.field private static b:Lcom/igexin/push/f/b/a;


# instance fields
.field private a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/igexin/push/f/b/c;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    const-wide/32 v0, 0xea60

    invoke-direct {p0, v0, v1}, Lcom/igexin/push/f/b/g;-><init>(J)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/igexin/push/f/b/a;->o:Z

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/igexin/push/f/b/a;->a:Ljava/util/List;

    return-void
.end method

.method public static i()Lcom/igexin/push/f/b/a;
    .locals 1

    sget-object v0, Lcom/igexin/push/f/b/a;->b:Lcom/igexin/push/f/b/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/igexin/push/f/b/a;

    invoke-direct {v0}, Lcom/igexin/push/f/b/a;-><init>()V

    sput-object v0, Lcom/igexin/push/f/b/a;->b:Lcom/igexin/push/f/b/a;

    :cond_0
    sget-object v0, Lcom/igexin/push/f/b/a;->b:Lcom/igexin/push/f/b/a;

    return-object v0
.end method

.method private j()V
    .locals 3

    sget-object v0, Ljava/util/concurrent/TimeUnit;->MILLISECONDS:Ljava/util/concurrent/TimeUnit;

    const-wide/32 v1, 0x57e40

    invoke-virtual {p0, v1, v2, v0}, Lcom/igexin/push/f/b/a;->a(JLjava/util/concurrent/TimeUnit;)I

    return-void
.end method


# virtual methods
.method public a(Lcom/igexin/push/f/b/c;)Z
    .locals 1

    iget-object v0, p0, Lcom/igexin/push/f/b/a;->a:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/igexin/push/f/b/a;->a:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public b_()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected d_()V
    .locals 4

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/a/e;->l()V

    iget-object v0, p0, Lcom/igexin/push/f/b/a;->a:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/igexin/push/f/b/c;

    invoke-interface {v1}, Lcom/igexin/push/f/b/c;->b()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Lcom/igexin/push/f/b/c;->a()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-interface {v1, v2, v3}, Lcom/igexin/push/f/b/c;->a(J)V

    goto :goto_0

    :cond_1
    invoke-direct {p0}, Lcom/igexin/push/f/b/a;->j()V

    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/igexin/b/a/b/c;->a(Ljava/lang/Object;)Z

    return-void
.end method

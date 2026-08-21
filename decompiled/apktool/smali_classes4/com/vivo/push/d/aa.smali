.class final Lcom/vivo/push/d/aa;
.super Lcom/vivo/push/d/z;


# direct methods
.method constructor <init>(Lcom/vivo/push/o;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/vivo/push/d/z;-><init>(Lcom/vivo/push/o;)V

    return-void
.end method

.method static synthetic a(Lcom/vivo/push/d/aa;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/aa;->a:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic b(Lcom/vivo/push/d/aa;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/vivo/push/d/aa;->a:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method protected final a(Lcom/vivo/push/o;)V
    .locals 13

    check-cast p1, Lcom/vivo/push/b/t;

    invoke-virtual {p1}, Lcom/vivo/push/b/t;->d()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {p1}, Lcom/vivo/push/b/t;->e()Ljava/util/List;

    move-result-object v1

    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9}, Ljava/util/ArrayList;-><init>()V

    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    new-instance v10, Ljava/util/ArrayList;

    invoke-direct {v10}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {p1}, Lcom/vivo/push/b/t;->h()I

    move-result v8

    invoke-virtual {p1}, Lcom/vivo/push/b/t;->g()Ljava/lang/String;

    move-result-object v11

    const-string v2, ""

    const-string v3, "tag/"

    const-string v4, "ali/"

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    invoke-virtual {v7, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_1

    invoke-virtual {v7, v4, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v9, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    invoke-virtual {v7, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_0

    invoke-virtual {v7, v3, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v7

    invoke-interface {v5, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    if-eqz v1, :cond_5

    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_4

    invoke-virtual {v1, v4, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v10, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_4
    invoke-virtual {v1, v3}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_3

    invoke-virtual {v1, v3, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v6, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_5
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_6

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    :cond_6
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_7

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {v0, v5}, Lcom/vivo/push/e;->a(Ljava/util/List;)V

    :cond_7
    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {p1}, Lcom/vivo/push/b/t;->g()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_8

    const/16 v2, 0x2710

    goto :goto_2

    :cond_8
    move v2, v8

    :goto_2
    invoke-virtual {v0, v1, v2}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    new-instance v0, Lcom/vivo/push/d/ab;

    move-object v2, v0

    move-object v3, p0

    move v4, v8

    move-object v7, v11

    invoke-direct/range {v2 .. v7}, Lcom/vivo/push/d/ab;-><init>(Lcom/vivo/push/d/aa;ILjava/util/List;Ljava/util/List;Ljava/lang/String;)V

    invoke-static {v0}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    :cond_9
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_a

    invoke-interface {v10}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_c

    :cond_a
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_b

    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v9, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/vivo/push/e;->b(Ljava/lang/String;)V

    :cond_b
    invoke-static {}, Lcom/vivo/push/e;->a()Lcom/vivo/push/e;

    move-result-object v0

    invoke-virtual {p1}, Lcom/vivo/push/b/t;->g()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, v8}, Lcom/vivo/push/e;->a(Ljava/lang/String;I)V

    new-instance p1, Lcom/vivo/push/d/ac;

    move-object v6, p1

    move-object v7, p0

    invoke-direct/range {v6 .. v11}, Lcom/vivo/push/d/ac;-><init>(Lcom/vivo/push/d/aa;ILjava/util/List;Ljava/util/List;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/vivo/push/m;->b(Ljava/lang/Runnable;)V

    :cond_c
    return-void
.end method

.class final Lcom/tkay/core/common/h$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/k$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->w()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h;)V
    .locals 0

    .line 1554
    iput-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 1557
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object p1, p1, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/m/h;->c()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 1558
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-static {p1}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;)Ljava/lang/String;

    .line 1560
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 1561
    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-static {p3, p2}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V

    goto :goto_0

    :cond_0
    return-void

    .line 1573
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object p1

    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-virtual {p1, p3, v0, p2}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V

    .line 1576
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget p1, p1, Lcom/tkay/core/common/h;->B:I

    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->an()I

    move-result p3

    const/4 v0, 0x0

    if-ge p1, p3, :cond_2

    .line 1577
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-static {p1}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;)Ljava/lang/String;

    .line 1578
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-virtual {p1, p2, v0, v0}, Lcom/tkay/core/common/h;->a(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V

    .line 1579
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-static {p1}, Lcom/tkay/core/common/h;->e(Lcom/tkay/core/common/h;)V

    return-void

    .line 1582
    :cond_2
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-static {p1}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;)Ljava/lang/String;

    .line 1584
    iget-object p1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object p1, p1, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    const/4 p3, 0x0

    .line 2343
    invoke-virtual {p1, p3}, Lcom/tkay/core/common/m/f;->a(Z)D

    move-result-wide v1

    .line 1586
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    .line 1587
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3, p1}, Ljava/util/ArrayList;-><init>(I)V

    .line 1588
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4, p1}, Ljava/util/ArrayList;-><init>(I)V

    :goto_1
    if-ge p3, p1, :cond_4

    .line 1590
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/f/aj;

    .line 1592
    invoke-static {v5}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    cmpl-double v6, v6, v1

    if-lez v6, :cond_3

    .line 1593
    invoke-virtual {v3, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_2

    .line 1595
    :cond_3
    invoke-virtual {v4, v5}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :goto_2
    add-int/lit8 p3, p3, 0x1

    goto :goto_1

    .line 1599
    :cond_4
    invoke-virtual {v3}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 1602
    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object v1, v1, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object v2, v2, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-static {p3, v1, v2, v0, p2}, Lcom/tkay/core/common/m/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;)V

    const/4 p3, 0x7

    .line 1605
    invoke-virtual {p2, p3}, Lcom/tkay/core/common/f/aj;->x(I)V

    .line 1607
    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    iget-object p3, p3, Lcom/tkay/core/common/h;->u:Ljava/util/List;

    invoke-interface {p3, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1611
    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    const/4 v1, 0x5

    invoke-static {p3, p2, v1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;I)V

    goto :goto_3

    .line 1615
    :cond_5
    invoke-virtual {v4}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_4
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/core/common/f/aj;

    .line 1616
    iget-object p3, p0, Lcom/tkay/core/common/h$7;->a:Lcom/tkay/core/common/h;

    invoke-static {p3, p2}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V

    goto :goto_4

    :cond_6
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

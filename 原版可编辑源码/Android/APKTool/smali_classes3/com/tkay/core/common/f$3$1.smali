.class final Lcom/tkay/core/common/f$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/k$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f$3;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f$3;)V
    .locals 0

    .line 807
    iput-object p1, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 864
    iget-object v0, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v0, v0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/h;

    if-eqz p1, :cond_0

    .line 866
    invoke-virtual {p1}, Lcom/tkay/core/common/h;->d()V

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/util/List;Ljava/util/List;)V
    .locals 9
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

    .line 813
    iget-object v0, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v0, v0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v1, v1, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v1, v1, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    .line 815
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->k()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    const/4 v2, 0x0

    .line 820
    invoke-interface {p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :cond_1
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    if-eqz v0, :cond_4

    .line 823
    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v5

    if-eq v5, v1, :cond_2

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v5

    const/4 v6, 0x3

    if-ne v5, v6, :cond_4

    .line 824
    :cond_2
    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->O()I

    move-result v5

    if-eq v5, v1, :cond_1

    if-nez v2, :cond_3

    .line 830
    new-instance v2, Ljava/util/ArrayList;

    const/4 v5, 0x4

    invoke-direct {v2, v5}, Ljava/util/ArrayList;-><init>(I)V

    :cond_3
    const/4 v5, 0x7

    .line 833
    invoke-virtual {v4, v5}, Lcom/tkay/core/common/f/aj;->x(I)V

    .line 834
    invoke-interface {v2, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_4
    if-nez v0, :cond_1

    .line 839
    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->k()J

    move-result-wide v5

    const-wide/16 v7, 0x0

    cmp-long v5, v5, v7

    if-eqz v5, :cond_1

    .line 840
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object v5

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    .line 1097
    iget-object v5, v5, Lcom/tkay/core/common/c;->c:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-static {v6, v7}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    invoke-virtual {v5, v4, v6}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 845
    :cond_5
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_6

    .line 847
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v1, v1, Lcom/tkay/core/common/f$3;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V

    .line 855
    :cond_6
    iget-object v0, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v0, v0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/h;

    if-eqz p1, :cond_7

    .line 857
    invoke-virtual {p1, p2, p3, v2}, Lcom/tkay/core/common/h;->a(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V

    :cond_7
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 874
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v1, v1, Lcom/tkay/core/common/f$3;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, p1}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 875
    iget-object v0, p0, Lcom/tkay/core/common/f$3$1;->a:Lcom/tkay/core/common/f$3;

    iget-object v0, v0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/h;

    if-eqz p1, :cond_0

    .line 877
    invoke-virtual {p1}, Lcom/tkay/core/common/h;->e()V

    :cond_0
    return-void
.end method

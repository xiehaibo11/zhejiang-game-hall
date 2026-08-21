.class final Lcom/tkay/core/common/f$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/common/j;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/tkay/core/c/d;

.field final synthetic f:Z

.field final synthetic g:Ljava/util/List;

.field final synthetic h:Lcom/tkay/core/common/f/d;

.field final synthetic i:Lcom/tkay/core/common/f/am;

.field final synthetic j:Lcom/tkay/core/common/f/ae;

.field final synthetic k:Ljava/util/List;

.field final synthetic l:Ljava/util/List;

.field final synthetic m:Lcom/tkay/core/common/f;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f;Landroid/content/Context;Lcom/tkay/core/common/j;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;ZLjava/util/List;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/am;Lcom/tkay/core/common/f/ae;Ljava/util/List;Ljava/util/List;)V
    .locals 0

    .line 763
    iput-object p1, p0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iput-object p2, p0, Lcom/tkay/core/common/f$3;->a:Landroid/content/Context;

    iput-object p3, p0, Lcom/tkay/core/common/f$3;->b:Lcom/tkay/core/common/j;

    iput-object p4, p0, Lcom/tkay/core/common/f$3;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/core/common/f$3;->d:Ljava/lang/String;

    iput-object p6, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    iput-boolean p7, p0, Lcom/tkay/core/common/f$3;->f:Z

    iput-object p8, p0, Lcom/tkay/core/common/f$3;->g:Ljava/util/List;

    iput-object p9, p0, Lcom/tkay/core/common/f$3;->h:Lcom/tkay/core/common/f/d;

    iput-object p10, p0, Lcom/tkay/core/common/f$3;->i:Lcom/tkay/core/common/f/am;

    iput-object p11, p0, Lcom/tkay/core/common/f$3;->j:Lcom/tkay/core/common/f/ae;

    iput-object p12, p0, Lcom/tkay/core/common/f$3;->k:Ljava/util/List;

    iput-object p13, p0, Lcom/tkay/core/common/f$3;->l:Ljava/util/List;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 768
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    .line 773
    new-instance v0, Lcom/tkay/core/common/f/ag;

    invoke-direct {v0}, Lcom/tkay/core/common/f/ag;-><init>()V

    .line 774
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->a:Landroid/content/Context;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    .line 775
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->b:Lcom/tkay/core/common/j;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    .line 776
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->c:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    .line 777
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    .line 778
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->Y()I

    move-result v1

    iput v1, v0, Lcom/tkay/core/common/f/ag;->f:I

    .line 779
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->I()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->g:J

    .line 780
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->A()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->h:J

    .line 781
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->j()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/core/common/f/ag;->i:J

    .line 782
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    iget-boolean v2, p0, Lcom/tkay/core/common/f$3;->f:Z

    invoke-static {v1, v2}, Lcom/tkay/core/common/i;->a(Lcom/tkay/core/c/d;Z)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->m:Ljava/lang/String;

    .line 783
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    invoke-static {v1}, Lcom/tkay/core/common/i;->a(Lcom/tkay/core/c/d;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    .line 784
    invoke-static {}, Lcom/tkay/core/common/i;->a()Lcom/tkay/core/common/i;

    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    invoke-static {v1}, Lcom/tkay/core/common/i;->b(Lcom/tkay/core/c/d;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->q:Ljava/lang/String;

    .line 785
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->g:Ljava/util/List;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    .line 786
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->e:Lcom/tkay/core/c/d;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    .line 787
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->h:Lcom/tkay/core/common/f/d;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    .line 788
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->i:Lcom/tkay/core/common/f/am;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->x:Lcom/tkay/core/common/f/am;

    .line 789
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->j:Lcom/tkay/core/common/f/ae;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->y:Lcom/tkay/core/common/f/ae;

    .line 790
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v2, v2, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->r:Ljava/util/Map;

    .line 791
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->k:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 792
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->k:Ljava/util/List;

    const/4 v2, 0x0

    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->u:Lcom/tkay/core/common/f/aj;

    .line 795
    :cond_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 796
    iget-object v2, p0, Lcom/tkay/core/common/f$3;->l:Ljava/util/List;

    if-eqz v2, :cond_1

    .line 797
    iget-object v2, p0, Lcom/tkay/core/common/f$3;->l:Ljava/util/List;

    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 799
    :cond_1
    iput-object v1, v0, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    .line 800
    iget-boolean v1, p0, Lcom/tkay/core/common/f$3;->f:Z

    iput-boolean v1, v0, Lcom/tkay/core/common/f/ag;->n:Z

    .line 801
    iget-object v1, p0, Lcom/tkay/core/common/f$3;->b:Lcom/tkay/core/common/j;

    iget v1, v1, Lcom/tkay/core/common/j;->d:I

    const/16 v2, 0x8

    if-ne v1, v2, :cond_2

    const/4 v1, 0x7

    .line 802
    iput v1, v0, Lcom/tkay/core/common/f/ag;->v:I

    .line 805
    :cond_2
    new-instance v1, Lcom/tkay/core/b/h;

    invoke-direct {v1, v0}, Lcom/tkay/core/b/h;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 806
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    invoke-interface {v1, v0}, Lcom/tkay/core/common/k$b;->a(Z)V

    .line 807
    new-instance v0, Lcom/tkay/core/common/f$3$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/f$3$1;-><init>(Lcom/tkay/core/common/f$3;)V

    invoke-interface {v1, v0}, Lcom/tkay/core/common/k$b;->a(Lcom/tkay/core/common/k$a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 885
    :catchall_0
    iget-object v0, p0, Lcom/tkay/core/common/f$3;->m:Lcom/tkay/core/common/f;

    iget-object v0, v0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v1, p0, Lcom/tkay/core/common/f$3;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/h;

    if-eqz v0, :cond_3

    .line 887
    invoke-virtual {v0}, Lcom/tkay/core/common/h;->e()V

    :cond_3
    return-void
.end method

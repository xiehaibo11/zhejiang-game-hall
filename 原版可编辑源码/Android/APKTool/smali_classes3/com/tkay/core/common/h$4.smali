.class final Lcom/tkay/core/common/h$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/f/aj;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/core/common/f/aj;

.field final synthetic c:I

.field final synthetic d:Lcom/tkay/core/common/m/d;

.field final synthetic e:Lcom/tkay/core/common/h;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h;Ljava/lang/String;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/common/m/d;)V
    .locals 0

    .line 710
    iput-object p1, p0, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iput-object p2, p0, Lcom/tkay/core/common/h$4;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    iput p4, p0, Lcom/tkay/core/common/h$4;->c:I

    iput-object p5, p0, Lcom/tkay/core/common/h$4;->d:Lcom/tkay/core/common/m/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 18

    move-object/from16 v1, p0

    .line 714
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    monitor-enter v2

    .line 715
    :try_start_0
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->K:Lcom/tkay/core/common/m/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/m/h;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 717
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->a:Ljava/lang/String;

    invoke-interface {v0, v3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 718
    monitor-exit v2

    return-void

    .line 722
    :cond_0
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-static {v0}, Lcom/tkay/core/common/l/t;->a(Lcom/tkay/core/common/f/aj;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 723
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v3, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v4, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    invoke-virtual {v0, v3, v4}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    .line 724
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 728
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v3, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v4, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    iget-object v5, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v3, v4, v5}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;ILjava/lang/String;)V

    .line 731
    :cond_1
    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 734
    iget v0, v1, Lcom/tkay/core/common/h$4;->c:I

    invoke-static {v0}, Lcom/tkay/core/common/h;->c(I)Z

    move-result v0

    .line 735
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v2, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v4, v2, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v5, v2, Lcom/tkay/core/common/h;->d:Ljava/lang/String;

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v6, v2, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    if-eqz v0, :cond_2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_2
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->x:Ljava/lang/String;

    :goto_0
    move-object v7, v0

    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->m()I

    move-result v8

    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget v9, v0, Lcom/tkay/core/common/h;->k:I

    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget v10, v0, Lcom/tkay/core/common/h;->c:I

    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_3

    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->j:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    goto :goto_1

    :cond_3
    const/4 v0, 0x0

    :goto_1
    move-object v11, v0

    invoke-static/range {v3 .. v11}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 737
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v2, v2, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    if-eqz v2, :cond_4

    .line 738
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v2, v2, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/d;->a()Ljava/util/Map;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/f/d;->a(Ljava/util/Map;)V

    .line 740
    :cond_4
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget v3, v3, Lcom/tkay/core/common/h;->A:I

    const/4 v4, 0x1

    invoke-static {v0, v2, v3, v4}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 743
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-object v5, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-wide v5, v5, Lcom/tkay/core/common/h;->z:J

    sub-long/2addr v2, v5

    invoke-virtual {v0, v2, v3}, Lcom/tkay/core/common/f/d;->a(J)V

    .line 747
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v3, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/v;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;

    move-result-object v2

    const/4 v3, 0x0

    if-eqz v2, :cond_6

    .line 748
    iget-object v5, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2, v5}, Lcom/tkay/core/common/f/c;->a(Lcom/tkay/core/common/f/aj;)Z

    move-result v5

    if-eqz v5, :cond_6

    .line 753
    iget-object v4, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v12, v4, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    iget-object v15, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    const/16 v16, -0x1

    const/16 v17, -0x1

    const-string v14, "Can\'t Load On Showing"

    move-object v13, v0

    invoke-static/range {v12 .. v17}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    const/4 v4, 0x7

    const-string v5, "2011"

    const-string v6, ""

    const-string v7, "Can\'t Load On Showing"

    .line 754
    invoke-static {v5, v6, v7}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v5

    invoke-static {v0, v4, v5}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    .line 757
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v4, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v4, v4, Lcom/tkay/core/common/h;->g:Ljava/lang/String;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/c;->a()Ljava/lang/String;

    move-result-object v2

    iget-object v5, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v5, v5, Lcom/tkay/core/common/h;->f:Ljava/lang/String;

    invoke-virtual {v0, v4, v2, v5}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 760
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v2, v0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    monitor-enter v2

    .line 761
    :try_start_1
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/m/e;

    .line 762
    invoke-virtual {v4}, Lcom/tkay/core/common/m/e;->a()Lcom/tkay/core/common/f/aj;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    iget-object v6, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-static {v6}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v6

    cmpl-double v4, v4, v6

    if-lez v4, :cond_5

    add-int/lit8 v3, v3, 0x1

    goto :goto_2

    .line 768
    :cond_5
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->w:Ljava/util/List;

    new-instance v4, Lcom/tkay/core/common/m/e;

    iget-object v5, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    iget v6, v1, Lcom/tkay/core/common/h$4;->c:I

    invoke-direct {v4, v5, v6}, Lcom/tkay/core/common/m/e;-><init>(Lcom/tkay/core/common/f/aj;I)V

    invoke-interface {v0, v3, v4}, Ljava/util/List;->add(ILjava/lang/Object;)V

    .line 769
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 771
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-static {v0, v2}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V

    .line 773
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    iget v2, v1, Lcom/tkay/core/common/h$4;->c:I

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/m/f;->a(I)V

    .line 780
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->G:Ljava/util/Map;

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->a:Ljava/lang/String;

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 783
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v0, v0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    const/4 v2, -0x1

    iget v3, v1, Lcom/tkay/core/common/h$4;->c:I

    invoke-virtual {v0, v2, v3}, Lcom/tkay/core/common/m/f;->a(II)V

    .line 784
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v2, v0, Lcom/tkay/core/common/h;->L:Lcom/tkay/core/common/m/f;

    iget v3, v1, Lcom/tkay/core/common/h$4;->c:I

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/m/f;->b(I)Ljava/util/List;

    move-result-object v2

    iget v3, v1, Lcom/tkay/core/common/h$4;->c:I

    invoke-static {v0, v2, v3}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Ljava/util/List;I)V

    return-void

    :catchall_0
    move-exception v0

    .line 769
    monitor-exit v2

    throw v0

    .line 787
    :cond_6
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    invoke-static {v2}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;)Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v5, "startAdSourceRequest: "

    invoke-direct {v2, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->aa()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 795
    :try_start_2
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v2

    if-eqz v2, :cond_9

    .line 796
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    invoke-static {v2}, Lcom/tkay/core/common/h;->c(Lcom/tkay/core/common/h;)Ljava/lang/String;

    .line 797
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v2

    .line 800
    iget-object v5, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v5

    const/16 v6, 0x42

    if-eq v5, v6, :cond_7

    iget-object v5, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v5

    const/16 v6, 0x43

    if-eq v5, v6, :cond_7

    .line 801
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v5

    iget-object v6, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v6}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;)V

    :cond_7
    if-eqz v2, :cond_8

    .line 804
    invoke-virtual {v2}, Lcom/tkay/core/common/f/l;->a()Z

    move-result v5

    if-eqz v5, :cond_8

    move v3, v4

    :cond_8
    if-eqz v3, :cond_9

    if-eqz v2, :cond_9

    .line 811
    new-instance v5, Lcom/tkay/core/common/f/q;

    invoke-direct {v5}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 812
    iput v4, v5, Lcom/tkay/core/common/f/q;->a:I

    .line 813
    invoke-virtual {v2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v6

    iput-wide v6, v5, Lcom/tkay/core/common/f/q;->b:D

    .line 814
    iput-object v0, v5, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 815
    iget-object v6, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    iput-object v6, v5, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 816
    iget-object v6, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    iput-object v6, v5, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 818
    invoke-virtual {v2, v5, v4}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 826
    :catchall_1
    :cond_9
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget v5, v2, Lcom/tkay/core/common/h;->A:I

    add-int/2addr v5, v4

    iput v5, v2, Lcom/tkay/core/common/h;->A:I

    if-eqz v3, :cond_a

    .line 830
    new-instance v2, Lcom/tkay/core/common/m/a;

    invoke-direct {v2}, Lcom/tkay/core/common/m/a;-><init>()V

    const/4 v3, 0x6

    .line 831
    iput v3, v2, Lcom/tkay/core/common/m/a;->a:I

    const-string v3, "4001"

    const-string v4, ""

    const-string v5, "Bid result has expired."

    .line 832
    invoke-static {v3, v4, v5}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v3

    iput-object v3, v2, Lcom/tkay/core/common/m/a;->b:Lcom/tkay/core/api/AdError;

    const-wide/16 v3, 0x0

    .line 833
    iput-wide v3, v2, Lcom/tkay/core/common/m/a;->c:J

    .line 834
    iput-object v0, v2, Lcom/tkay/core/common/m/a;->d:Lcom/tkay/core/common/f/d;

    .line 835
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    iput-object v0, v2, Lcom/tkay/core/common/m/a;->e:Lcom/tkay/core/common/f/aj;

    .line 837
    iget-object v0, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->a:Ljava/lang/String;

    invoke-virtual {v0, v3, v2}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V

    return-void

    .line 842
    :cond_a
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v2

    if-eqz v2, :cond_b

    .line 843
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-static {v2, v3}, Lcom/tkay/core/common/h;->b(Lcom/tkay/core/common/h;Lcom/tkay/core/common/f/aj;)V

    .line 847
    :cond_b
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->b:Lcom/tkay/core/common/f/aj;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->ab()I

    move-result v2

    if-lez v2, :cond_c

    .line 1594
    iput v2, v0, Lcom/tkay/core/common/f/d;->q:I

    goto :goto_3

    .line 850
    :cond_c
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-boolean v2, v2, Lcom/tkay/core/common/h;->n:Z

    if-eqz v2, :cond_d

    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget v2, v2, Lcom/tkay/core/common/h;->B:I

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v3, Lcom/tkay/core/common/h;->e:Lcom/tkay/core/c/d;

    invoke-virtual {v3}, Lcom/tkay/core/c/d;->an()I

    move-result v3

    if-ge v2, v3, :cond_d

    const/4 v2, 0x5

    .line 2594
    iput v2, v0, Lcom/tkay/core/common/f/d;->q:I

    .line 857
    :cond_d
    :goto_3
    iget-object v2, v1, Lcom/tkay/core/common/h$4;->e:Lcom/tkay/core/common/h;

    iget-object v3, v1, Lcom/tkay/core/common/h$4;->d:Lcom/tkay/core/common/m/d;

    invoke-static {v2, v3, v0}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/h;Lcom/tkay/core/common/m/d;Lcom/tkay/core/common/f/d;)V

    return-void

    :catchall_2
    move-exception v0

    .line 731
    monitor-exit v2

    throw v0
.end method

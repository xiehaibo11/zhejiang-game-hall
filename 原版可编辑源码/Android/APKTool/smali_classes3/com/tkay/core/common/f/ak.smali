.class public final Lcom/tkay/core/common/f/ak;
.super Ljava/lang/Object;


# instance fields
.field public a:I

.field public b:Ljava/lang/String;

.field private c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final declared-synchronized a()Lcom/tkay/core/common/f/a;
    .locals 4

    monitor-enter p0

    .line 29
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    if-eqz v0, :cond_2

    .line 30
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/a;

    .line 31
    invoke-virtual {v1}, Lcom/tkay/core/common/f/a;->d()I

    move-result v2

    if-gtz v2, :cond_0

    .line 33
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->indexOf(Ljava/lang/Object;)I

    move-result v0

    iget-object v2, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    sub-int/2addr v2, v3

    if-lt v0, v2, :cond_1

    goto :goto_0

    :cond_1
    const/4 v3, 0x0

    :goto_0
    invoke-virtual {v1, v3}, Lcom/tkay/core/common/f/a;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 34
    monitor-exit p0

    return-object v1

    :cond_2
    const/4 v0, 0x0

    .line 38
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized a(Lcom/tkay/core/common/f/a;)V
    .locals 1

    monitor-enter p0

    .line 74
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 77
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/tkay/core/common/f/d;)V
    .locals 6

    .line 86
    monitor-enter p0

    .line 87
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, -0x1

    .line 88
    iput v1, p0, Lcom/tkay/core/common/f/ak;->a:I

    .line 89
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/f/ak;->b:Ljava/lang/String;

    .line 90
    iget-object v2, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    if-eqz v2, :cond_2

    .line 92
    iget-object v2, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/a;

    .line 94
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->j()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 96
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v4

    .line 98
    invoke-virtual {v4, p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 100
    invoke-virtual {v4}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v4}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 101
    invoke-virtual {v3, v1}, Lcom/tkay/core/common/f/a;->b(I)V

    .line 104
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object v4

    if-eqz v4, :cond_1

    .line 106
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v5

    invoke-virtual {v4, v5}, Lcom/tkay/core/api/BaseAd;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 108
    :cond_1
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 113
    :cond_2
    iput-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    .line 114
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/a;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 23
    :try_start_0
    monitor-enter p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 24
    :try_start_1
    iput-object p1, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    .line 25
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    :try_start_2
    monitor-exit p0

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized b()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/a;",
            ">;"
        }
    .end annotation

    monitor-enter p0

    .line 42
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    .line 44
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/a;

    .line 45
    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->d()I

    move-result v3

    if-gtz v3, :cond_0

    if-nez v1, :cond_1

    .line 47
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 49
    :cond_1
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 52
    :cond_2
    monitor-exit p0

    return-object v1

    .line 54
    :cond_3
    monitor-exit p0

    return-object v1

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final declared-synchronized c()V
    .locals 1

    monitor-enter p0

    .line 62
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    .line 63
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    const/4 v0, 0x0

    .line 64
    iput-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 66
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final d()Z
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/tkay/core/common/f/ak;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

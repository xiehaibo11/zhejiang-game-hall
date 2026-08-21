.class public final Lcom/loc/cz;
.super Ljava/lang/Object;
.source "CellCollector.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/cz$a;
    }
.end annotation


# instance fields
.field private a:Lcom/loc/dz;

.field private b:Lcom/loc/dz;

.field private c:Lcom/loc/ef;

.field private d:Lcom/loc/cz$a;

.field private final e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/loc/dz;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/loc/cz$a;

    invoke-direct {v0}, Lcom/loc/cz$a;-><init>()V

    iput-object v0, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/loc/cz;->e:Ljava/util/List;

    return-void
.end method

.method private a(Lcom/loc/cz$a;)V
    .locals 4

    iget-object v0, p0, Lcom/loc/cz;->e:Ljava/util/List;

    monitor-enter v0

    :try_start_0
    iget-object p1, p1, Lcom/loc/cz$a;->f:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/loc/dz;

    if-eqz v1, :cond_0

    iget-boolean v2, v1, Lcom/loc/dz;->h:Z

    if-eqz v2, :cond_0

    invoke-virtual {v1}, Lcom/loc/dz;->a()Lcom/loc/dz;

    move-result-object v1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/loc/dz;->e:J

    invoke-direct {p0, v1}, Lcom/loc/cz;->a(Lcom/loc/dz;)V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p1, p1, Lcom/loc/cz$a;->g:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->clear()V

    iget-object p1, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p1, p1, Lcom/loc/cz$a;->g:Ljava/util/List;

    iget-object v1, p0, Lcom/loc/cz;->e:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method private a(Lcom/loc/dz;)V
    .locals 9

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/cz;->e:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    :goto_0
    iget-object v0, p0, Lcom/loc/cz;->e:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_1
    const-wide v1, 0x7fffffffffffffffL

    const/4 v3, 0x0

    const/4 v4, -0x1

    const/4 v5, -0x1

    :goto_1
    if-ge v3, v0, :cond_4

    iget-object v6, p0, Lcom/loc/cz;->e:Ljava/util/List;

    invoke-interface {v6, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/loc/dz;

    invoke-virtual {p1, v6}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_2

    iget v3, p1, Lcom/loc/dz;->c:I

    iget v5, v6, Lcom/loc/dz;->c:I

    if-eq v3, v5, :cond_5

    iget v3, p1, Lcom/loc/dz;->c:I

    int-to-long v7, v3

    iput-wide v7, v6, Lcom/loc/dz;->e:J

    iget v3, p1, Lcom/loc/dz;->c:I

    iput v3, v6, Lcom/loc/dz;->c:I

    goto :goto_2

    :cond_2
    iget-wide v7, v6, Lcom/loc/dz;->e:J

    invoke-static {v1, v2, v7, v8}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v1

    iget-wide v6, v6, Lcom/loc/dz;->e:J

    cmp-long v8, v1, v6

    if-nez v8, :cond_3

    move v5, v3

    :cond_3
    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_4
    move v4, v5

    :cond_5
    :goto_2
    if-ltz v4, :cond_7

    const/4 v3, 0x3

    if-ge v0, v3, :cond_6

    goto :goto_0

    :cond_6
    iget-wide v5, p1, Lcom/loc/dz;->e:J

    cmp-long v3, v5, v1

    if-lez v3, :cond_7

    if-ge v4, v0, :cond_7

    iget-object v0, p0, Lcom/loc/cz;->e:Ljava/util/List;

    invoke-interface {v0, v4}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    iget-object v0, p0, Lcom/loc/cz;->e:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_7
    return-void
.end method

.method private a(Lcom/loc/ef;)Z
    .locals 5

    iget v0, p1, Lcom/loc/ef;->g:F

    const/high16 v1, 0x41200000    # 10.0f

    cmpl-float v0, v0, v1

    if-lez v0, :cond_0

    const/high16 v0, 0x44fa0000    # 2000.0f

    goto :goto_0

    :cond_0
    iget v0, p1, Lcom/loc/ef;->g:F

    const/high16 v1, 0x40000000    # 2.0f

    cmpl-float v0, v0, v1

    if-lez v0, :cond_1

    const/high16 v0, 0x43fa0000    # 500.0f

    goto :goto_0

    :cond_1
    const/high16 v0, 0x42c80000    # 100.0f

    :goto_0
    iget-object v1, p0, Lcom/loc/cz;->c:Lcom/loc/ef;

    invoke-virtual {p1, v1}, Lcom/loc/ef;->a(Lcom/loc/ee;)D

    move-result-wide v1

    float-to-double v3, v0

    cmpl-double p1, v1, v3

    if-lez p1, :cond_2

    const/4 p1, 0x1

    return p1

    :cond_2
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method final a(Lcom/loc/ef;ZBLjava/lang/String;Ljava/util/List;)Lcom/loc/cz$a;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/loc/ef;",
            "ZB",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/loc/dz;",
            ">;)",
            "Lcom/loc/cz$a;"
        }
    .end annotation

    const/4 v0, 0x0

    if-eqz p2, :cond_0

    iget-object p1, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    invoke-virtual {p1}, Lcom/loc/cz$a;->a()V

    return-object v0

    :cond_0
    iget-object p2, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    invoke-virtual {p2, p3, p4, p5}, Lcom/loc/cz$a;->a(BLjava/lang/String;Ljava/util/List;)V

    iget-object p2, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p2, p2, Lcom/loc/cz$a;->c:Lcom/loc/dz;

    if-nez p2, :cond_1

    return-object v0

    :cond_1
    iget-object p2, p0, Lcom/loc/cz;->c:Lcom/loc/ef;

    if-eqz p2, :cond_3

    invoke-direct {p0, p1}, Lcom/loc/cz;->a(Lcom/loc/ef;)Z

    move-result p2

    if-nez p2, :cond_3

    iget-object p2, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p2, p2, Lcom/loc/cz$a;->d:Lcom/loc/dz;

    iget-object p3, p0, Lcom/loc/cz;->a:Lcom/loc/dz;

    invoke-static {p2, p3}, Lcom/loc/cz$a;->a(Lcom/loc/dz;Lcom/loc/dz;)Z

    move-result p2

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p2, p2, Lcom/loc/cz$a;->e:Lcom/loc/dz;

    iget-object p3, p0, Lcom/loc/cz;->b:Lcom/loc/dz;

    invoke-static {p2, p3}, Lcom/loc/cz$a;->a(Lcom/loc/dz;Lcom/loc/dz;)Z

    move-result p2

    if-nez p2, :cond_2

    goto :goto_0

    :cond_2
    const/4 p2, 0x0

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p2, 0x1

    :goto_1
    if-eqz p2, :cond_4

    iget-object p2, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p2, p2, Lcom/loc/cz$a;->d:Lcom/loc/dz;

    iput-object p2, p0, Lcom/loc/cz;->a:Lcom/loc/dz;

    iget-object p2, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p2, p2, Lcom/loc/cz$a;->e:Lcom/loc/dz;

    iput-object p2, p0, Lcom/loc/cz;->b:Lcom/loc/dz;

    iput-object p1, p0, Lcom/loc/cz;->c:Lcom/loc/ef;

    iget-object p1, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    iget-object p1, p1, Lcom/loc/cz$a;->f:Ljava/util/List;

    invoke-static {p1}, Lcom/loc/dv;->a(Ljava/util/List;)V

    iget-object p1, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    invoke-direct {p0, p1}, Lcom/loc/cz;->a(Lcom/loc/cz$a;)V

    iget-object p1, p0, Lcom/loc/cz;->d:Lcom/loc/cz$a;

    return-object p1

    :cond_4
    return-object v0
.end method

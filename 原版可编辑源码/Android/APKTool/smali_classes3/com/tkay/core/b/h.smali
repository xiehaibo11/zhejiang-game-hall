.class public Lcom/tkay/core/b/h;
.super Lcom/tkay/core/common/l/a;

# interfaces
.implements Lcom/tkay/core/common/k$b;


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/f/d;",
            ">;"
        }
    .end annotation
.end field

.field c:Ljava/lang/Runnable;

.field private d:Ljava/lang/String;

.field private e:Lcom/tkay/core/common/k$a;

.field private f:Ljava/lang/String;

.field private g:J

.field private h:Z

.field private i:Lcom/tkay/core/common/f/ag;

.field private j:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Lcom/tkay/core/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private k:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 49
    const-class v0, Lcom/tkay/core/b/h;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/b/h;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 16

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 95
    invoke-direct/range {p0 .. p0}, Lcom/tkay/core/common/l/a;-><init>()V

    .line 53
    new-instance v2, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v3, 0x3

    invoke-direct {v2, v3}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object v2, v0, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    .line 71
    new-instance v2, Lcom/tkay/core/b/h$1;

    invoke-direct {v2, v0}, Lcom/tkay/core/b/h$1;-><init>(Lcom/tkay/core/b/h;)V

    iput-object v2, v0, Lcom/tkay/core/b/h;->c:Ljava/lang/Runnable;

    .line 96
    iput-object v1, v0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    .line 97
    iget-object v2, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iput-object v2, v0, Lcom/tkay/core/b/h;->d:Ljava/lang/String;

    .line 98
    iget-object v2, v1, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iput-object v2, v0, Lcom/tkay/core/b/h;->f:Ljava/lang/String;

    .line 99
    iget-wide v4, v1, Lcom/tkay/core/common/f/ag;->g:J

    iput-wide v4, v0, Lcom/tkay/core/b/h;->g:J

    .line 106
    iget-object v2, v1, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    .line 108
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    .line 110
    iget-object v5, v1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    if-eqz v5, :cond_0

    iget-object v5, v1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_0

    .line 111
    iget-object v5, v0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v6, v1, Lcom/tkay/core/common/f/ag;->k:Ljava/util/List;

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v6

    add-int/2addr v6, v4

    iput v6, v5, Lcom/tkay/core/common/f/ag;->z:I

    goto :goto_0

    .line 113
    :cond_0
    iget-object v5, v0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iput v4, v5, Lcom/tkay/core/common/f/ag;->z:I

    .line 116
    :goto_0
    new-instance v5, Ljava/util/ArrayList;

    invoke-direct {v5}, Ljava/util/ArrayList;-><init>()V

    .line 120
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    const/4 v7, 0x0

    const/4 v8, 0x0

    move-object v9, v8

    move-object v10, v9

    :goto_1
    const/4 v12, 0x2

    const/4 v13, 0x1

    const/4 v14, 0x5

    if-ge v7, v4, :cond_a

    .line 127
    invoke-interface {v2, v7}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Lcom/tkay/core/common/f/aj;

    .line 129
    invoke-virtual {v15}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v11

    if-eq v11, v13, :cond_8

    .line 130
    invoke-virtual {v15}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v11

    if-ne v11, v3, :cond_1

    goto :goto_2

    .line 137
    :cond_1
    invoke-virtual {v15}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v11

    if-ne v11, v12, :cond_3

    if-nez v8, :cond_2

    .line 139
    new-instance v8, Ljava/util/ArrayList;

    invoke-direct {v8, v4}, Ljava/util/ArrayList;-><init>(I)V

    .line 141
    :cond_2
    invoke-interface {v8, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 142
    :cond_3
    invoke-virtual {v15}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v11

    if-ne v11, v14, :cond_5

    if-nez v9, :cond_4

    .line 144
    new-instance v9, Ljava/util/ArrayList;

    invoke-direct {v9, v4}, Ljava/util/ArrayList;-><init>(I)V

    .line 146
    :cond_4
    invoke-interface {v9, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 147
    :cond_5
    invoke-virtual {v15}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v11

    const/4 v12, 0x6

    if-ne v11, v12, :cond_7

    if-nez v10, :cond_6

    .line 149
    new-instance v10, Ljava/util/ArrayList;

    invoke-direct {v10, v4}, Ljava/util/ArrayList;-><init>(I)V

    .line 151
    :cond_6
    invoke-interface {v10, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 152
    :cond_7
    invoke-virtual {v15}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v11

    const/4 v12, 0x7

    if-ne v11, v12, :cond_9

    .line 153
    invoke-interface {v6, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_3

    .line 131
    :cond_8
    :goto_2
    invoke-interface {v5, v15}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_9
    :goto_3
    add-int/lit8 v7, v7, 0x1

    goto :goto_1

    .line 157
    :cond_a
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2, v14}, Ljava/util/HashMap;-><init>(I)V

    iput-object v2, v0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    .line 160
    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v2

    if-gtz v2, :cond_b

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_c

    .line 161
    :cond_b
    new-instance v2, Lcom/tkay/core/b/i;

    invoke-virtual {v1, v5, v6}, Lcom/tkay/core/common/f/ag;->a(Ljava/util/List;Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/core/b/i;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 163
    iget-object v3, v0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-static {v13}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_c
    if-eqz v8, :cond_d

    .line 166
    invoke-interface {v8}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_d

    .line 167
    new-instance v2, Lcom/tkay/core/b/g;

    invoke-virtual {v1, v8}, Lcom/tkay/core/common/f/ag;->a(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/core/b/g;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 168
    iget-object v3, v0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-static {v12}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_d
    if-eqz v9, :cond_e

    .line 171
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_e

    .line 172
    new-instance v2, Lcom/tkay/core/b/e;

    invoke-virtual {v1, v9}, Lcom/tkay/core/common/f/ag;->b(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/core/b/e;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 173
    iget-object v3, v0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-static {v14}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-interface {v3, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_e
    if-eqz v10, :cond_f

    .line 176
    invoke-interface {v10}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_f

    .line 177
    new-instance v2, Lcom/tkay/core/b/d;

    invoke-virtual {v1, v10}, Lcom/tkay/core/common/f/ag;->c(Ljava/util/List;)Lcom/tkay/core/common/f/ag;

    move-result-object v1

    invoke-direct {v2, v1}, Lcom/tkay/core/b/d;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 178
    iget-object v1, v0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    const/4 v3, 0x6

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_f
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/h;)V
    .locals 0

    .line 47
    invoke-direct {p0}, Lcom/tkay/core/b/h;->c()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 2

    .line 3524
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v1, 0x7

    if-eq v0, v1, :cond_1

    if-eqz p2, :cond_1

    .line 3526
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    if-eqz v0, :cond_0

    .line 3528
    iget-object v0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v0

    const/4 v1, 0x0

    .line 3529
    invoke-static {v0, p1, v1, v1}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 3530
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 3532
    iget-object p2, p0, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-wide/16 p1, 0x0

    .line 3533
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/d;->d(D)V

    .line 3534
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/d;->a(D)V

    .line 3535
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/d;->b(D)V

    .line 3536
    iget-object p0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object p0, p0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object p0, p0, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/b/b;->a(Lcom/tkay/core/common/f/d;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p0

    .line 3539
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/h;Ljava/lang/Integer;)V
    .locals 0

    .line 47
    invoke-direct {p0, p1}, Lcom/tkay/core/b/h;->a(Ljava/lang/Integer;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/h;Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V
    .locals 0

    .line 47
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/b/h;->b(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;)V
    .locals 3

    .line 550
    iget-object v0, p0, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_0

    .line 552
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/b/h$5;

    invoke-direct {v2, p0, v0, p1}, Lcom/tkay/core/b/h$5;-><init>(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 2

    .line 524
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v1, 0x7

    if-eq v0, v1, :cond_1

    if-eqz p2, :cond_1

    .line 526
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    if-eqz v0, :cond_0

    .line 528
    iget-object v0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v0

    const/4 v1, 0x0

    .line 529
    invoke-static {v0, p1, v1, v1}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 530
    invoke-virtual {p2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p2}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 532
    iget-object p2, p0, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-wide/16 p1, 0x0

    .line 533
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/d;->d(D)V

    .line 534
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/d;->a(D)V

    .line 535
    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/d;->b(D)V

    .line 536
    iget-object p1, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object p1, p1, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/b/b;->a(Lcom/tkay/core/common/f/d;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 539
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private declared-synchronized a(Ljava/lang/Integer;)V
    .locals 1

    monitor-enter p0

    .line 234
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/b/a;

    if-eqz v0, :cond_0

    .line 235
    invoke-virtual {v0}, Lcom/tkay/core/b/a;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 236
    iget-object v0, p0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 238
    invoke-direct {p0}, Lcom/tkay/core/b/h;->e()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 240
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized a(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V
    .locals 17
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    move-object/from16 v2, p3

    monitor-enter p0

    const/4 v3, 0x0

    if-eqz v0, :cond_0

    .line 252
    :try_start_0
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->size()I

    move-result v4

    goto :goto_0

    :catchall_0
    move-exception v0

    goto/16 :goto_6

    :cond_0
    move v4, v3

    :goto_0
    if-eqz v2, :cond_1

    .line 253
    invoke-interface/range {p3 .. p3}, Ljava/util/List;->size()I

    move-result v5

    goto :goto_1

    :cond_1
    move v5, v3

    :goto_1
    if-gtz v4, :cond_2

    if-lez v5, :cond_f

    .line 257
    :cond_2
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    .line 258
    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    .line 259
    new-instance v12, Ljava/util/ArrayList;

    invoke-direct {v12}, Ljava/util/ArrayList;-><init>()V

    .line 261
    iget-object v8, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v8, v8, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v8}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v8

    iget-object v9, v1, Lcom/tkay/core/b/h;->d:Ljava/lang/String;

    invoke-virtual {v8, v9}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v8

    const/16 v9, 0x8

    const/4 v10, 0x1

    if-lez v4, :cond_6

    move v11, v3

    :goto_2
    if-ge v11, v4, :cond_5

    .line 265
    invoke-interface {v0, v11}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Lcom/tkay/core/common/f/aj;

    .line 267
    iget-object v14, v1, Lcom/tkay/core/b/h;->d:Ljava/lang/String;

    invoke-direct {v1, v14, v13, v10}, Lcom/tkay/core/b/h;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;Z)V

    .line 273
    invoke-virtual {v13}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v8, v14}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;)Z

    move-result v14

    if-nez v14, :cond_3

    iget-object v14, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget v14, v14, Lcom/tkay/core/common/f/ag;->v:I

    if-ne v14, v9, :cond_4

    .line 274
    :cond_3
    invoke-interface {v6, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 275
    invoke-interface {v12, v13}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1574
    iget-object v14, v1, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    invoke-virtual {v13}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v15

    invoke-interface {v14, v15}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v14

    check-cast v14, Lcom/tkay/core/common/f/d;

    if-eqz v14, :cond_4

    .line 1576
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v15

    new-instance v10, Lcom/tkay/core/b/h$6;

    invoke-direct {v10, v1, v14, v13}, Lcom/tkay/core/b/h$6;-><init>(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v15, v10}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    :cond_4
    add-int/lit8 v11, v11, 0x1

    const/4 v10, 0x1

    goto :goto_2

    .line 280
    :cond_5
    invoke-interface/range {p2 .. p2}, Ljava/util/List;->clear()V

    :cond_6
    if-lez v5, :cond_c

    move v0, v3

    :goto_3
    if-ge v0, v5, :cond_b

    .line 285
    invoke-interface {v2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v4, :cond_7

    .line 289
    :try_start_1
    new-instance v10, Ljava/lang/Throwable;

    invoke-direct {v10}, Ljava/lang/Throwable;-><init>()V

    .line 290
    invoke-virtual {v10}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v10

    .line 291
    new-instance v11, Ljava/lang/StringBuilder;

    const-string v13, "Bid Fail AdSource Object is null, currentSize:"

    invoke-direct {v11, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface/range {p3 .. p3}, Ljava/util/List;->size()I

    move-result v13

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v13, "\n"

    invoke-virtual {v11, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v10}, Lcom/tkay/core/common/l/h;->a([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v11, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    const-string v11, "Bidding inner error"

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v13

    invoke-virtual {v13}, Lcom/tkay/core/common/b/m;->q()Ljava/lang/String;

    move-result-object v13

    invoke-static {v10, v11, v13}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_5

    .line 298
    :catchall_1
    :cond_7
    :try_start_2
    iget-object v10, v1, Lcom/tkay/core/b/h;->d:Ljava/lang/String;

    invoke-direct {v1, v10, v4, v3}, Lcom/tkay/core/b/h;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;Z)V

    .line 304
    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v8, v10}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;)Z

    move-result v10

    if-nez v10, :cond_8

    iget-object v10, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget v10, v10, Lcom/tkay/core/common/f/ag;->v:I

    if-ne v10, v9, :cond_a

    .line 305
    :cond_8
    invoke-static {v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v10

    const-wide/16 v13, 0x0

    cmpl-double v10, v10, v13

    if-lez v10, :cond_9

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->y()Ljava/lang/String;

    move-result-object v10

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_9

    .line 306
    invoke-interface {v6, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_4

    .line 308
    :cond_9
    invoke-interface {v7, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 310
    :goto_4
    invoke-interface {v12, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2550
    iget-object v10, v1, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v11

    invoke-interface {v10, v11}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Lcom/tkay/core/common/f/d;

    if-eqz v10, :cond_a

    .line 2552
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v11

    new-instance v13, Lcom/tkay/core/b/h$5;

    invoke-direct {v13, v1, v10, v4}, Lcom/tkay/core/b/h$5;-><init>(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v11, v13}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    :cond_a
    :goto_5
    add-int/lit8 v0, v0, 0x1

    goto/16 :goto_3

    .line 315
    :cond_b
    invoke-interface/range {p3 .. p3}, Ljava/util/List;->clear()V

    .line 318
    :cond_c
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v0

    const/4 v2, 0x1

    if-le v0, v2, :cond_d

    .line 319
    new-instance v0, Lcom/tkay/core/b/h$3;

    invoke-direct {v0, v1}, Lcom/tkay/core/b/h$3;-><init>(Lcom/tkay/core/b/h;)V

    invoke-static {v6, v0}, Ljava/util/Collections;->sort(Ljava/util/List;Ljava/util/Comparator;)V

    .line 336
    :cond_d
    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v8, v0, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v9, v0, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v10, v0, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    .line 337
    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_e

    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget v3, v0, Lcom/tkay/core/common/j;->d:I

    :cond_e
    move v11, v3

    iget-wide v13, v1, Lcom/tkay/core/b/h;->k:J

    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    .line 338
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->S()I

    move-result v15

    iget-object v0, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget v0, v0, Lcom/tkay/core/common/f/ag;->v:I

    move/from16 v16, v0

    .line 336
    invoke-static/range {v8 .. v16}, Lcom/tkay/core/b/d/a;->a(Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;ILjava/util/List;JII)V

    .line 341
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v2, Lcom/tkay/core/b/h$4;

    move-object/from16 v3, p1

    invoke-direct {v2, v1, v6, v7, v3}, Lcom/tkay/core/b/h$4;-><init>(Lcom/tkay/core/b/h;Ljava/util/List;Ljava/util/List;Ljava/lang/Integer;)V

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 355
    :cond_f
    monitor-exit p0

    return-void

    :goto_6
    monitor-exit p0

    throw v0
.end method

.method private a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;Z)V
    .locals 21

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move-object/from16 v2, p2

    .line 399
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->m()I

    move-result v3

    const/4 v4, 0x2

    if-ne v3, v4, :cond_b

    .line 400
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v3

    invoke-virtual {v3, v0, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v3

    .line 402
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v5

    if-eqz v3, :cond_b

    .line 407
    :try_start_0
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v6

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x1

    if-eqz v6, :cond_2

    .line 409
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v6

    .line 410
    invoke-virtual {v6}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v6

    if-eqz v6, :cond_1

    .line 414
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v10

    iget-object v11, v6, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v12, v6, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v10, v11, v12}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v10

    .line 417
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v11

    if-eqz v11, :cond_0

    .line 419
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v12

    iget-object v13, v11, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v11, v11, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v12, v13, v11}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v11

    goto :goto_0

    :cond_0
    move-object v11, v7

    :goto_0
    if-eqz v10, :cond_1

    if-eqz v11, :cond_1

    .line 426
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v10

    iget-object v11, v6, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v6, v6, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v10, v11, v6}, Lcom/tkay/core/b/c;->c(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    move v6, v9

    goto :goto_2

    :cond_1
    move v6, v8

    goto :goto_2

    .line 431
    :cond_2
    invoke-static/range {p2 .. p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v10

    .line 432
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v6

    invoke-static {v6}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v12

    cmpl-double v6, v10, v12

    if-lez v6, :cond_1

    goto :goto_1

    :goto_2
    if-eqz v6, :cond_5

    .line 438
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->o()I

    move-result v5

    invoke-virtual {v2, v2, v4, v5, v9}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V

    .line 440
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    .line 441
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v5

    if-eqz v5, :cond_4

    .line 443
    invoke-static/range {p2 .. p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v10

    .line 445
    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v12, v6, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v13, v6, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    const-string v14, ""

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v15, v6, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    const-string v16, ""

    const/16 v17, 0x1

    const/16 v18, 0x0

    const/16 v19, 0x0

    .line 446
    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v6, :cond_3

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v7, v6, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    :cond_3
    move-object/from16 v20, v7

    .line 445
    invoke-static/range {v12 .. v20}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v6

    .line 448
    new-instance v7, Lcom/tkay/core/common/f/q;

    invoke-direct {v7}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 449
    iput v4, v7, Lcom/tkay/core/common/f/q;->a:I

    .line 450
    iput-wide v10, v7, Lcom/tkay/core/common/f/q;->b:D

    .line 451
    iput-object v6, v7, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 452
    iput-object v2, v7, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 453
    iput-object v3, v7, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 455
    invoke-virtual {v5, v7, v9}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V

    .line 459
    :cond_4
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v4

    iget-object v5, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v4, v5, v6, v3}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    .line 462
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v3

    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 467
    :cond_5
    :try_start_1
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    .line 473
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v10

    .line 474
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v6

    if-eqz v6, :cond_6

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->M()Lcom/tkay/core/common/f/l;

    move-result-object v6

    iget-object v6, v6, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    goto :goto_3

    :cond_6
    const-string v6, ""

    :goto_3
    if-eqz v5, :cond_9

    .line 476
    iget-object v12, v5, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    invoke-static {v12, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_9

    .line 481
    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v12, v6, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v13, v6, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    const-string v14, ""

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v15, v6, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    const-string v16, ""

    const/16 v17, 0x1

    const/16 v18, 0x0

    const/16 v19, 0x0

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v6, :cond_7

    iget-object v6, v1, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-object v6, v6, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v7, v6, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    :cond_7
    move-object/from16 v20, v7

    invoke-static/range {v12 .. v20}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v6

    .line 483
    new-instance v7, Lcom/tkay/core/common/f/q;

    invoke-direct {v7}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 484
    iput-wide v10, v7, Lcom/tkay/core/common/f/q;->b:D

    .line 485
    iput-object v6, v7, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 486
    iput-object v0, v7, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 487
    iput-object v2, v7, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 489
    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v0

    if-eqz v0, :cond_8

    const/4 v0, 0x3

    .line 490
    iput v0, v7, Lcom/tkay/core/common/f/q;->a:I

    .line 493
    invoke-virtual {v5, v7, v9}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V

    goto :goto_4

    .line 495
    :cond_8
    iput v4, v7, Lcom/tkay/core/common/f/q;->a:I

    .line 497
    invoke-virtual {v5, v7, v9}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 503
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 506
    :cond_9
    :goto_4
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    .line 508
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/aj;->o()I

    move-result v3

    if-eqz p3, :cond_a

    move v8, v9

    .line 506
    :cond_a
    invoke-virtual {v2, v0, v9, v3, v8}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    :catch_0
    :cond_b
    return-void
.end method

.method private b(Lcom/tkay/core/common/f/aj;)V
    .locals 3

    .line 574
    iget-object v0, p0, Lcom/tkay/core/b/h;->b:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_0

    .line 576
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v1

    new-instance v2, Lcom/tkay/core/b/h$6;

    invoke-direct {v2, p0, v0, p1}, Lcom/tkay/core/b/h$6;-><init>(Lcom/tkay/core/b/h;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;)V

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method private declared-synchronized b(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Integer;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    monitor-enter p0

    .line 359
    :try_start_0
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/b/h;->a(Ljava/lang/Integer;Ljava/util/List;Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 360
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic b(Lcom/tkay/core/b/h;)Z
    .locals 0

    .line 47
    iget-boolean p0, p0, Lcom/tkay/core/b/h;->h:Z

    return p0
.end method

.method static synthetic c(Lcom/tkay/core/b/h;)Lcom/tkay/core/common/k$a;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    return-object p0
.end method

.method private declared-synchronized c()V
    .locals 2

    monitor-enter p0

    .line 85
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    if-eqz v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    iget-object v1, p0, Lcom/tkay/core/b/h;->f:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/k$a;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 90
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    .line 89
    :try_start_1
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 92
    monitor-exit p0

    return-void

    :catchall_1
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic d(Lcom/tkay/core/b/h;)Ljava/lang/String;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/core/b/h;->f:Ljava/lang/String;

    return-object p0
.end method

.method private d()V
    .locals 4

    .line 243
    iget-object v0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-wide v0, v0, Lcom/tkay/core/common/f/ag;->i:J

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-gtz v2, :cond_0

    const-wide/16 v0, 0x7d0

    .line 247
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/b/h;->c:Ljava/lang/Runnable;

    invoke-virtual {v2, v3, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method

.method static synthetic e(Lcom/tkay/core/b/h;)Lcom/tkay/core/common/f/ag;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    return-object p0
.end method

.method private declared-synchronized e()V
    .locals 2

    monitor-enter p0

    .line 376
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    if-nez v0, :cond_1

    .line 378
    invoke-virtual {p0}, Lcom/tkay/core/b/h;->a()V

    .line 380
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/b/h;->c:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    .line 382
    iget-object v0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    if-eqz v0, :cond_0

    .line 383
    iget-object v0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    iget-object v1, p0, Lcom/tkay/core/b/h;->f:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/k$a;->b(Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x0

    .line 3394
    iput-object v0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 390
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private f()V
    .locals 1

    const/4 v0, 0x0

    .line 394
    iput-object v0, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/k$a;)V
    .locals 4

    .line 189
    iput-object p1, p0, Lcom/tkay/core/b/h;->e:Lcom/tkay/core/common/k$a;

    .line 192
    iget-wide v0, p0, Lcom/tkay/core/b/h;->g:J

    invoke-super {p0, v0, v1}, Lcom/tkay/core/common/l/a;->a(J)V

    .line 1243
    iget-object p1, p0, Lcom/tkay/core/b/h;->i:Lcom/tkay/core/common/f/ag;

    iget-wide v0, p1, Lcom/tkay/core/common/f/ag;->i:J

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-gtz p1, :cond_0

    const-wide/16 v0, 0x7d0

    .line 1247
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    iget-object v2, p0, Lcom/tkay/core/b/h;->c:Ljava/lang/Runnable;

    invoke-virtual {p1, v2, v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 196
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/b/h;->k:J

    .line 197
    new-instance p1, Ljava/util/HashMap;

    iget-object v0, p0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-direct {p1, v0}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    .line 199
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 200
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 201
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/b/a;

    .line 204
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v2

    new-instance v3, Lcom/tkay/core/b/h$2;

    invoke-direct {v3, p0, v0, v1}, Lcom/tkay/core/b/h$2;-><init>(Lcom/tkay/core/b/h;Lcom/tkay/core/b/a;Ljava/lang/Integer;)V

    invoke-virtual {v2, v3}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 184
    iput-boolean p1, p0, Lcom/tkay/core/b/h;->h:Z

    return-void
.end method

.method protected final declared-synchronized b()V
    .locals 2

    monitor-enter p0

    .line 365
    :try_start_0
    new-instance v0, Ljava/util/HashMap;

    iget-object v1, p0, Lcom/tkay/core/b/h;->j:Ljava/util/Map;

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    .line 366
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 367
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/b/a;

    if-eqz v1, :cond_0

    .line 369
    invoke-virtual {v1}, Lcom/tkay/core/b/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 372
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

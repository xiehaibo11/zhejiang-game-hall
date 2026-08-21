.class public abstract Lcom/tkay/core/common/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<T:",
        "Lcom/tkay/core/common/j;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/String;

.field protected b:Landroid/content/Context;

.field protected c:Ljava/lang/String;

.field protected d:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/h;",
            ">;"
        }
    .end annotation
.end field

.field protected e:I

.field protected f:Z

.field protected g:Ljava/lang/String;

.field protected h:I

.field protected i:Lcom/tkay/core/common/b/a;

.field protected j:Lcom/tkay/core/common/g;

.field k:D

.field l:Ljava/lang/String;

.field private m:J

.field private n:J

.field private o:Z

.field private p:J

.field private q:Z

.field private r:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/b/a;",
            ">;"
        }
    .end annotation
.end field

.field private s:Ljava/lang/Object;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 4

    .line 156
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 63
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 70
    iput v0, p0, Lcom/tkay/core/common/f;->e:I

    const-string v1, ""

    .line 78
    iput-object v1, p0, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    .line 86
    iput-boolean v0, p0, Lcom/tkay/core/common/f;->q:Z

    const/4 v0, 0x1

    .line 88
    iput v0, p0, Lcom/tkay/core/common/f;->h:I

    .line 92
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/f;->s:Ljava/lang/Object;

    .line 94
    new-instance v0, Lcom/tkay/core/common/f$1;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/f$1;-><init>(Lcom/tkay/core/common/f;)V

    iput-object v0, p0, Lcom/tkay/core/common/f;->i:Lcom/tkay/core/common/b/a;

    const-wide/16 v2, 0x0

    .line 1353
    iput-wide v2, p0, Lcom/tkay/core/common/f;->k:D

    .line 1354
    iput-object v1, p0, Lcom/tkay/core/common/f;->l:Ljava/lang/String;

    .line 157
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    .line 158
    iput-object p2, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    .line 160
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 p2, 0x5

    invoke-direct {p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    .line 162
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    if-nez p1, :cond_0

    .line 163
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    iget-object p2, p0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f;J)J
    .locals 0

    .line 62
    iput-wide p1, p0, Lcom/tkay/core/common/f;->n:J

    return-wide p1
.end method

.method static synthetic a(Lcom/tkay/core/common/f;)Ljava/lang/Object;
    .locals 0

    .line 62
    iget-object p0, p0, Lcom/tkay/core/common/f;->s:Ljava/lang/Object;

    return-object p0
.end method

.method protected static a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;
    .locals 3

    .line 1624
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p0, p0, Lcom/tkay/core/common/f/i;->f:I

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a(ILcom/tkay/core/c/d;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/d;)V
    .locals 15
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Lcom/tkay/core/c/d;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Lcom/tkay/core/common/f/ad;",
            "Lcom/tkay/core/common/f/d;",
            ")V"
        }
    .end annotation

    move-object/from16 v0, p9

    move-object/from16 v9, p11

    .line 994
    invoke-interface/range {p3 .. p3}, Ljava/util/List;->size()I

    move-result v1

    invoke-interface/range {p4 .. p4}, Ljava/util/List;->size()I

    move-result v2

    add-int/2addr v1, v2

    invoke-interface/range {p5 .. p5}, Ljava/util/List;->size()I

    move-result v2

    add-int/2addr v1, v2

    .line 995
    new-instance v10, Ljava/util/concurrent/atomic/AtomicInteger;

    invoke-direct {v10, v1}, Ljava/util/concurrent/atomic/AtomicInteger;-><init>(I)V

    .line 999
    invoke-interface/range {p3 .. p3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v11

    :goto_0
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v12, v1

    check-cast v12, Lcom/tkay/core/common/f/aj;

    .line 1000
    invoke-virtual/range {p11 .. p11}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v4

    move-object v1, p0

    move/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v5, p11

    move-object/from16 v6, p10

    move-object v7, v12

    move-object v8, v10

    invoke-direct/range {v1 .. v8}, Lcom/tkay/core/common/f;->a(ILcom/tkay/core/c/d;Ljava/lang/String;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/aj;Ljava/util/concurrent/atomic/AtomicInteger;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 1001
    invoke-virtual {v12}, Lcom/tkay/core/common/f/aj;->b()V

    .line 1002
    invoke-interface {v0, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    move-object/from16 v13, p6

    .line 1006
    invoke-interface {v13, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    move-object/from16 v13, p6

    .line 1011
    invoke-interface/range {p4 .. p4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v11

    :goto_1
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v12, v1

    check-cast v12, Lcom/tkay/core/common/f/aj;

    .line 1013
    invoke-virtual/range {p11 .. p11}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v4

    move-object v1, p0

    move/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v5, p11

    move-object/from16 v6, p10

    move-object v7, v12

    move-object v8, v10

    invoke-direct/range {v1 .. v8}, Lcom/tkay/core/common/f;->a(ILcom/tkay/core/c/d;Ljava/lang/String;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/aj;Ljava/util/concurrent/atomic/AtomicInteger;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1014
    invoke-virtual {v12}, Lcom/tkay/core/common/f/aj;->b()V

    .line 1015
    invoke-interface {v0, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_2
    move-object/from16 v14, p7

    .line 1018
    invoke-interface {v14, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_3
    move-object/from16 v14, p7

    .line 1021
    invoke-interface/range {p5 .. p5}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v11

    :goto_2
    invoke-interface {v11}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v11}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v12, v1

    check-cast v12, Lcom/tkay/core/common/f/aj;

    .line 1023
    invoke-virtual/range {p11 .. p11}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v4

    move-object v1, p0

    move/from16 v2, p1

    move-object/from16 v3, p2

    move-object/from16 v5, p11

    move-object/from16 v6, p10

    move-object v7, v12

    move-object v8, v10

    invoke-direct/range {v1 .. v8}, Lcom/tkay/core/common/f;->a(ILcom/tkay/core/c/d;Ljava/lang/String;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/aj;Ljava/util/concurrent/atomic/AtomicInteger;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 1024
    invoke-virtual {v12}, Lcom/tkay/core/common/f/aj;->b()V

    .line 1025
    invoke-interface {v0, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_4
    move-object/from16 v1, p8

    .line 1028
    invoke-interface {v1, v12}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_2

    :cond_5
    move-object/from16 v1, p8

    .line 1031
    invoke-interface/range {p6 .. p6}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_7

    invoke-interface/range {p7 .. p7}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_7

    invoke-interface/range {p8 .. p8}, Ljava/util/List;->size()I

    move-result v0

    if-gtz v0, :cond_7

    const/4 v0, 0x6

    .line 1034
    invoke-virtual {v9, v0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 1035
    invoke-virtual {v10}, Ljava/util/concurrent/atomic/AtomicInteger;->get()I

    move-result v0

    if-nez v0, :cond_6

    const/16 v0, 0xa

    .line 1036
    invoke-virtual {v9, v0}, Lcom/tkay/core/common/f/d;->z(I)V

    :cond_6
    const-string v0, ""

    const-string v1, "4005"

    .line 1039
    invoke-static {v1, v0, v0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    .line 1040
    new-instance v1, Lcom/tkay/core/common/e;

    invoke-virtual {v0}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v0, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v1

    :cond_7
    return-void
.end method

.method private a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/j;)V
    .locals 24
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lcom/tkay/core/c/d;",
            "Lcom/tkay/core/common/f/d;",
            "TT;)V"
        }
    .end annotation

    move-object/from16 v15, p0

    move-object/from16 v0, p2

    move-object/from16 v13, p3

    move-object/from16 v14, p4

    move-object/from16 v12, p5

    move-object/from16 v11, p6

    .line 609
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v1

    iget-object v2, v15, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v13, v14}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;)V

    .line 612
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ag()Ljava/lang/String;

    move-result-object v1

    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ah()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v4

    .line 613
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ai()Ljava/lang/String;

    move-result-object v16

    .line 614
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->D()Ljava/lang/String;

    move-result-object v17

    .line 615
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->aj()Ljava/lang/String;

    move-result-object v18

    .line 616
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->B()Ljava/lang/String;

    move-result-object v19

    .line 617
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->t()Ljava/lang/String;

    move-result-object v20

    .line 618
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ap()Ljava/lang/String;

    move-result-object v21

    .line 619
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->aq()Ljava/lang/String;

    move-result-object v22

    .line 613
    invoke-static/range {v16 .. v22}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v5

    .line 621
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->o()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/d;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    .line 623
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->h()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/d;->d(Ljava/lang/String;)Ljava/util/List;

    move-result-object v6

    const/4 v10, 0x0

    if-eqz v1, :cond_0

    .line 626
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    move v3, v10

    :goto_0
    if-ge v3, v2, :cond_0

    .line 629
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/aj;

    .line 631
    invoke-static {v4, v7, v10}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 3929
    :cond_0
    :try_start_0
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ay()Z

    move-result v1
    :try_end_0
    .catch Lcom/tkay/core/common/e; {:try_start_0 .. :try_end_0} :catch_5
    .catchall {:try_start_0 .. :try_end_0} :catchall_5

    const/4 v2, 0x5

    const-string v8, ""

    if-eqz v1, :cond_11

    if-eqz v4, :cond_1

    .line 3940
    :try_start_1
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_3

    goto :goto_1

    :catchall_0
    move-exception v0

    move-object v10, v12

    move-object v1, v15

    const/4 v4, 0x1

    goto/16 :goto_d

    :cond_1
    :goto_1
    if-eqz v5, :cond_2

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v1
    :try_end_1
    .catch Lcom/tkay/core/common/e; {:try_start_1 .. :try_end_1} :catch_5
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v1, :cond_3

    :cond_2
    if-eqz v6, :cond_f

    :try_start_2
    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_3

    goto/16 :goto_a

    .line 651
    :cond_3
    invoke-static/range {p1 .. p1}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/ad;

    move-result-object v7

    .line 3955
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ac()J

    move-result-wide v1

    .line 3956
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ad()J

    move-result-wide v16
    :try_end_2
    .catch Lcom/tkay/core/common/e; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_5

    if-eqz v7, :cond_4

    .line 3958
    :try_start_3
    iget v3, v7, Lcom/tkay/core/common/f/ad;->d:I

    goto :goto_2

    :cond_4
    move v3, v10

    :goto_2
    if-eqz v7, :cond_5

    .line 3959
    iget v10, v7, Lcom/tkay/core/common/f/ad;->c:I
    :try_end_3
    .catch Lcom/tkay/core/common/e; {:try_start_3 .. :try_end_3} :catch_5
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_3

    :cond_5
    const/4 v10, 0x0

    :goto_3
    const-wide/16 v19, -0x1

    cmp-long v21, v1, v19

    if-eqz v21, :cond_7

    int-to-long v9, v10

    cmp-long v1, v9, v1

    if-gez v1, :cond_6

    goto :goto_4

    :cond_6
    const/4 v9, 0x1

    goto :goto_5

    :cond_7
    :goto_4
    cmp-long v1, v16, v19

    if-eqz v1, :cond_8

    int-to-long v1, v3

    cmp-long v1, v1, v16

    if-gez v1, :cond_6

    goto :goto_6

    .line 3967
    :goto_5
    :try_start_4
    invoke-virtual {v12, v9}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 3969
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v1, "2003"

    invoke-static {v1, v8, v8}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    const-string v2, "Capping."

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0
    :try_end_4
    .catch Lcom/tkay/core/common/e; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception v0

    move v4, v9

    move-object v10, v12

    move-object v1, v15

    goto/16 :goto_d

    :catch_0
    move-exception v0

    move v4, v9

    move-object v10, v12

    move-object v1, v15

    goto/16 :goto_e

    :cond_8
    :goto_6
    const/4 v9, 0x1

    .line 3977
    :try_start_5
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    invoke-virtual/range {p5 .. p5}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v14}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Lcom/tkay/core/c/d;)Z

    move-result v1

    if-nez v1, :cond_e

    .line 655
    new-instance v10, Ljava/util/ArrayList;

    const/4 v1, 0x3

    invoke-direct {v10, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 656
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 657
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 658
    new-instance v1, Ljava/util/ArrayList;
    :try_end_5
    .catch Lcom/tkay/core/common/e; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    const/4 v9, 0x2

    :try_start_6
    invoke-direct {v1, v9}, Ljava/util/ArrayList;-><init>(I)V

    .line 660
    iget v9, v11, Lcom/tkay/core/common/j;->d:I
    :try_end_6
    .catch Lcom/tkay/core/common/e; {:try_start_6 .. :try_end_6} :catch_3
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    move-object/from16 v16, v1

    move-object/from16 v1, p0

    move-object/from16 v17, v2

    move v2, v9

    move-object v9, v3

    move-object/from16 v3, p4

    move-object/from16 v19, v7

    move-object v7, v9

    move-object/from16 v23, v8

    move-object/from16 v8, v17

    move-object v0, v9

    const/4 v13, 0x1

    move-object/from16 v9, v16

    move-object/from16 v18, v10

    move-object/from16 v11, v19

    move-object/from16 v12, p5

    :try_start_7
    invoke-direct/range {v1 .. v12}, Lcom/tkay/core/common/f;->a(ILcom/tkay/core/c/d;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/d;)V
    :try_end_7
    .catch Lcom/tkay/core/common/e; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    .line 673
    new-instance v12, Ljava/util/ArrayList;

    invoke-direct {v12, v13}, Ljava/util/ArrayList;-><init>(I)V

    move-object/from16 v10, p5

    move-object/from16 v9, v17

    .line 674
    invoke-direct {v15, v0, v9, v10, v12}, Lcom/tkay/core/common/f;->a(Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/d;Ljava/util/List;)V

    move-object/from16 v1, v16

    .line 675
    invoke-direct {v15, v0, v1, v10, v12}, Lcom/tkay/core/common/f;->a(Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/d;Ljava/util/List;)V

    .line 678
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 681
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 682
    invoke-interface {v2, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    move-object/from16 v3, v18

    .line 683
    invoke-interface {v2, v3}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 685
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v3

    move-object/from16 v6, p2

    move-object/from16 v5, p3

    move v4, v13

    invoke-virtual {v3, v6, v5, v14, v2}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V

    .line 688
    invoke-interface {v12}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_9

    move v8, v4

    goto :goto_7

    :cond_9
    const/4 v8, 0x0

    :goto_7
    if-nez v8, :cond_a

    .line 692
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_a

    .line 693
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v2

    invoke-virtual {v2, v6, v5}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;)V

    move v2, v4

    goto :goto_8

    :cond_a
    const/4 v2, 0x0

    :goto_8
    if-eqz v2, :cond_b

    .line 698
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_b

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_b

    const-string v0, "4005"

    move-object/from16 v1, v23

    .line 699
    invoke-static {v0, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    const/4 v1, 0x6

    .line 700
    invoke-virtual {v10, v1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 702
    invoke-direct {v15, v4, v10, v0}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    const/4 v3, 0x0

    .line 703
    iput-boolean v3, v15, Lcom/tkay/core/common/f;->f:Z

    return-void

    :cond_b
    const/4 v3, 0x0

    .line 707
    invoke-static {}, Lcom/tkay/core/a/b;->a()Lcom/tkay/core/a/b;

    move-result-object v7

    iget-object v11, v15, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-virtual {v7, v11, v6, v14}, Lcom/tkay/core/a/b;->b(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;)V

    .line 708
    invoke-virtual {v10, v4}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 709
    iget-object v4, v15, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v4}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v4

    const/16 v7, 0xa

    invoke-virtual {v4, v7, v10}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 711
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v4

    iget-object v7, v15, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v4, v7}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v4

    .line 713
    iget-object v7, v15, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v7}, Lcom/tkay/core/common/y;->a(Landroid/content/Context;)Lcom/tkay/core/common/y;

    move-result-object v7

    .line 4138
    iget-object v11, v7, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    if-eqz v11, :cond_c

    .line 4139
    iget-object v7, v7, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/am;

    goto :goto_9

    :cond_c
    const/4 v7, 0x0

    :goto_9
    move-object v11, v7

    .line 716
    iget-object v7, v15, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v7}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object v7

    invoke-virtual {v7, v6, v5}, Lcom/tkay/core/common/w;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ae;

    move-result-object v13

    move-object/from16 v7, p6

    .line 731
    invoke-virtual {v15, v7}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;

    move-result-object v3

    .line 4237
    iput-object v4, v3, Lcom/tkay/core/common/h;->h:Ljava/util/Map;

    .line 4241
    iput-object v10, v3, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    .line 734
    invoke-virtual {v3, v7}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/j;)V

    .line 735
    iget-object v4, v7, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    invoke-virtual {v3, v4}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/b/b;)V

    .line 5161
    iput-object v1, v3, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    .line 737
    iput-object v5, v15, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    .line 739
    new-instance v1, Lcom/tkay/core/common/m/g;

    invoke-direct {v1}, Lcom/tkay/core/common/m/g;-><init>()V

    .line 740
    iput-object v6, v1, Lcom/tkay/core/common/m/g;->a:Ljava/lang/String;

    .line 741
    iput-object v5, v1, Lcom/tkay/core/common/m/g;->b:Ljava/lang/String;

    .line 742
    iput-object v14, v1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    .line 743
    iput-object v0, v1, Lcom/tkay/core/common/m/g;->d:Ljava/util/List;

    .line 744
    iput-boolean v2, v1, Lcom/tkay/core/common/m/g;->e:Z

    .line 745
    invoke-virtual/range {p5 .. p5}, Lcom/tkay/core/common/f/d;->S()I

    move-result v4

    iput v4, v1, Lcom/tkay/core/common/m/g;->f:I

    .line 746
    iput-object v11, v1, Lcom/tkay/core/common/m/g;->g:Lcom/tkay/core/common/f/am;

    .line 747
    iput-object v13, v1, Lcom/tkay/core/common/m/g;->h:Lcom/tkay/core/common/f/ae;

    .line 750
    invoke-virtual {v3, v1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/g;)V

    .line 751
    iget-object v1, v15, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v5, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 753
    invoke-virtual {v3}, Lcom/tkay/core/common/h;->b()V

    const/4 v1, 0x0

    .line 756
    iput-boolean v1, v15, Lcom/tkay/core/common/f;->f:Z

    if-nez v2, :cond_d

    .line 763
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v4

    new-instance v3, Lcom/tkay/core/common/f$3;

    move-object v1, v3

    move-object/from16 v2, p0

    move-object v15, v3

    move-object/from16 v3, p1

    move-object/from16 v16, v15

    move-object v15, v4

    move-object/from16 v4, p6

    move-object/from16 v5, p3

    move-object/from16 v6, p2

    move-object/from16 v7, p4

    move-object/from16 v10, p5

    move-object v14, v12

    move-object v12, v13

    move-object v13, v14

    move-object v14, v0

    invoke-direct/range {v1 .. v14}, Lcom/tkay/core/common/f$3;-><init>(Lcom/tkay/core/common/f;Landroid/content/Context;Lcom/tkay/core/common/j;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;ZLjava/util/List;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/am;Lcom/tkay/core/common/f/ae;Ljava/util/List;Ljava/util/List;)V

    move-object/from16 v0, v16

    invoke-virtual {v15, v0}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    :cond_d
    return-void

    :catchall_2
    move-exception v0

    move-object/from16 v10, p5

    move v4, v13

    goto/16 :goto_c

    :catch_1
    move-exception v0

    move-object/from16 v10, p5

    move v4, v13

    goto/16 :goto_b

    :cond_e
    move-object v1, v8

    move v4, v9

    move-object v10, v12

    const/4 v0, 0x2

    .line 3979
    :try_start_8
    invoke-virtual {v10, v0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 3981
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v2, "2004"

    invoke-static {v2, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    const-string v2, "Pacing."

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    :catchall_3
    move-exception v0

    move v4, v9

    move-object v10, v12

    goto :goto_c

    :catch_2
    move-exception v0

    move v4, v9

    move-object v10, v12

    goto :goto_b

    :catch_3
    move-exception v0

    move-object v10, v12

    const/4 v4, 0x1

    goto :goto_b

    :cond_f
    :goto_a
    move-object v1, v8

    move-object v10, v12

    const/4 v4, 0x1

    .line 3942
    invoke-virtual {v10, v2}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 3943
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->i()I

    move-result v0
    :try_end_8
    .catch Lcom/tkay/core/common/e; {:try_start_8 .. :try_end_8} :catch_4
    .catchall {:try_start_8 .. :try_end_8} :catchall_4

    const-string v2, "No Adsource."

    if-ne v0, v4, :cond_10

    .line 3944
    :try_start_9
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v3, "4009"

    invoke-static {v3, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    .line 3946
    :cond_10
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v3, "4004"

    invoke-static {v3, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    :cond_11
    move-object v1, v8

    move-object v10, v12

    const/4 v4, 0x1

    .line 3930
    invoke-virtual {v10, v2}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 3932
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v2, "4003"

    invoke-static {v2, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    const-string v2, "Strategy is close."

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0
    :try_end_9
    .catch Lcom/tkay/core/common/e; {:try_start_9 .. :try_end_9} :catch_4
    .catchall {:try_start_9 .. :try_end_9} :catchall_4

    :catchall_4
    move-exception v0

    goto :goto_c

    :catch_4
    move-exception v0

    :goto_b
    move-object/from16 v1, p0

    goto :goto_e

    :catchall_5
    move-exception v0

    move-object v10, v12

    const/4 v4, 0x1

    :goto_c
    move-object/from16 v1, p0

    .line 669
    :goto_d
    invoke-direct {v1, v4, v10, v0}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    return-void

    :catch_5
    move-exception v0

    move-object v10, v12

    move-object v1, v15

    const/4 v4, 0x1

    .line 666
    :goto_e
    invoke-direct {v1, v4, v10, v0}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    return-void
.end method

.method private a(Lcom/tkay/core/api/TYBaseAdAdapter;Ljava/lang/String;D)V
    .locals 8

    .line 1364
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v7, Lcom/tkay/core/common/f$4;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p1

    move-wide v4, p3

    move-object v6, p2

    invoke-direct/range {v1 .. v6}, Lcom/tkay/core/common/f$4;-><init>(Lcom/tkay/core/common/f;Lcom/tkay/core/api/TYBaseAdAdapter;DLjava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static a(Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/d;)V
    .locals 7

    .line 955
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->ac()J

    move-result-wide v0

    .line 956
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->ad()J

    move-result-wide v2

    const/4 p0, 0x0

    if-eqz p1, :cond_0

    .line 958
    iget v4, p1, Lcom/tkay/core/common/f/ad;->d:I

    goto :goto_0

    :cond_0
    move v4, p0

    :goto_0
    if-eqz p1, :cond_1

    .line 959
    iget p0, p1, Lcom/tkay/core/common/f/ad;->c:I

    :cond_1
    const-wide/16 v5, -0x1

    cmp-long p1, v0, v5

    if-eqz p1, :cond_2

    int-to-long p0, p0

    cmp-long p0, p0, v0

    if-gez p0, :cond_3

    :cond_2
    cmp-long p0, v2, v5

    if-eqz p0, :cond_4

    int-to-long p0, v4

    cmp-long p0, p0, v2

    if-gez p0, :cond_3

    goto :goto_1

    :cond_3
    const/4 p0, 0x1

    .line 967
    invoke-virtual {p2, p0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 969
    new-instance p0, Lcom/tkay/core/common/e;

    const-string p1, ""

    const-string p2, "2003"

    invoke-static {p2, p1, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    const-string p2, "Capping."

    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw p0

    :cond_4
    :goto_1
    return-void
.end method

.method private static a(Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 929
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->ay()Z

    move-result p0

    if-eqz p0, :cond_0

    return-void

    :cond_0
    const/4 p0, 0x5

    .line 930
    invoke-virtual {p1, p0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 932
    new-instance p0, Lcom/tkay/core/common/e;

    const-string p1, ""

    const-string v0, "4003"

    invoke-static {v0, p1, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    const-string v0, "Strategy is close."

    invoke-direct {p0, p1, v0}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw p0
.end method

.method private a(Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 512
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ag()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ah()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 513
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ai()Ljava/lang/String;

    move-result-object v1

    .line 514
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->D()Ljava/lang/String;

    move-result-object v2

    .line 515
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->aj()Ljava/lang/String;

    move-result-object v3

    .line 516
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->B()Ljava/lang/String;

    move-result-object v4

    .line 517
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->t()Ljava/lang/String;

    move-result-object v5

    .line 518
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ap()Ljava/lang/String;

    move-result-object v6

    .line 519
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->aq()Ljava/lang/String;

    move-result-object v7

    .line 513
    invoke-static/range {v1 .. v7}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    .line 521
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->h()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/d;->d(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 523
    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 525
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->o()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/d;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v2, :cond_0

    .line 527
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v5

    move v6, v3

    :goto_0
    if-ge v6, v5, :cond_0

    .line 530
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/aj;

    .line 532
    invoke-static {v0, v7, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_0
    if-eqz v1, :cond_1

    .line 536
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    goto :goto_1

    :cond_1
    move v2, v3

    :goto_1
    if-lez v2, :cond_6

    .line 538
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 540
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v5

    invoke-virtual {v5, p3, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v5

    const/4 v6, 0x3

    if-eqz v5, :cond_3

    .line 545
    :try_start_0
    invoke-virtual {v5}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v5

    .line 547
    invoke-virtual {v2, v5, v3, v6, v4}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V

    .line 552
    invoke-static {v0, v2, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    .line 560
    :catch_0
    :cond_3
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v5

    invoke-virtual {v5, v2}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v5

    if-eqz v5, :cond_4

    const/4 v6, 0x2

    .line 562
    invoke-virtual {v2, v5, v3, v6, v4}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/l;III)V

    .line 566
    invoke-static {v0, v2, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    goto :goto_2

    .line 572
    :cond_4
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 573
    iget-object v5, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v5, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/h;

    const/4 v7, 0x0

    if-eqz v5, :cond_5

    .line 574
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v8

    .line 3079
    iget-object v9, v5, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v9, :cond_5

    .line 3080
    iget-object v5, v5, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v5, v8}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    move-object v7, v5

    check-cast v7, Lcom/tkay/core/common/f/aj;

    :cond_5
    if-eqz v7, :cond_2

    .line 576
    invoke-virtual {v2, v7, v3, v6, v4}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V

    .line 580
    invoke-static {v0, v2, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    goto :goto_2

    .line 589
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v1

    invoke-virtual {v1, p3, p2, p1, v0}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V

    return-void
.end method

.method private static a(Lcom/tkay/core/c/d;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/d;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 940
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_2

    :cond_0
    if-eqz p2, :cond_1

    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_2

    :cond_1
    if-eqz p3, :cond_3

    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_2

    goto :goto_0

    :cond_2
    return-void

    :cond_3
    :goto_0
    const/4 p1, 0x5

    .line 942
    invoke-virtual {p4, p1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 943
    invoke-virtual {p0}, Lcom/tkay/core/c/d;->i()I

    move-result p0

    const/4 p1, 0x1

    const-string p2, "No Adsource."

    const-string p3, ""

    if-ne p0, p1, :cond_4

    .line 944
    new-instance p0, Lcom/tkay/core/common/e;

    const-string p1, "4009"

    invoke-static {p1, p3, p3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw p0

    .line 946
    :cond_4
    new-instance p0, Lcom/tkay/core/common/e;

    const-string p1, "4004"

    invoke-static {p1, p3, p3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw p0
.end method

.method private a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V
    .locals 8

    .line 1422
    new-instance v7, Lcom/tkay/core/common/g;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v3

    move-object v0, v7

    move-object v5, p1

    move-object v6, p2

    invoke-direct/range {v0 .. v6}, Lcom/tkay/core/common/g;-><init>(JJLcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V

    .line 1423
    iput-object v7, p0, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    .line 1424
    invoke-virtual {v7}, Lcom/tkay/core/common/g;->start()Landroid/os/CountDownTimer;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/j;)V
    .locals 24

    move-object/from16 v13, p0

    move-object/from16 v0, p2

    move-object/from16 v14, p3

    move-object/from16 v15, p4

    move-object/from16 v12, p5

    move-object/from16 v11, p6

    .line 5609
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v1

    iget-object v2, v13, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2, v14, v15}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;)V

    .line 5612
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ag()Ljava/lang/String;

    move-result-object v1

    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ah()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v4

    .line 5613
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ai()Ljava/lang/String;

    move-result-object v16

    .line 5614
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->D()Ljava/lang/String;

    move-result-object v17

    .line 5615
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->aj()Ljava/lang/String;

    move-result-object v18

    .line 5616
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->B()Ljava/lang/String;

    move-result-object v19

    .line 5617
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->t()Ljava/lang/String;

    move-result-object v20

    .line 5618
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ap()Ljava/lang/String;

    move-result-object v21

    .line 5619
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->aq()Ljava/lang/String;

    move-result-object v22

    .line 5613
    invoke-static/range {v16 .. v22}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v5

    .line 5621
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->o()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/d;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    .line 5623
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->h()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/d;->d(Ljava/lang/String;)Ljava/util/List;

    move-result-object v6

    const/4 v10, 0x0

    if-eqz v1, :cond_0

    .line 5626
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    move v3, v10

    :goto_0
    if-ge v3, v2, :cond_0

    .line 5629
    invoke-interface {v1, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/aj;

    .line 5631
    invoke-static {v4, v7, v10}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 5929
    :cond_0
    :try_start_0
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ay()Z

    move-result v1
    :try_end_0
    .catch Lcom/tkay/core/common/e; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    const/4 v2, 0x5

    const-string v8, ""

    if-eqz v1, :cond_11

    if-eqz v4, :cond_1

    .line 5940
    :try_start_1
    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_3

    :cond_1
    if-eqz v5, :cond_2

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_3

    :cond_2
    if-eqz v6, :cond_f

    invoke-interface {v6}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_3

    goto/16 :goto_9

    .line 5651
    :cond_3
    invoke-static/range {p1 .. p1}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/a/a;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/ad;

    move-result-object v7

    .line 5955
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ac()J

    move-result-wide v1

    .line 5956
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->ad()J

    move-result-wide v16

    if-eqz v7, :cond_4

    .line 5958
    iget v3, v7, Lcom/tkay/core/common/f/ad;->d:I

    goto :goto_1

    :cond_4
    move v3, v10

    :goto_1
    if-eqz v7, :cond_5

    .line 5959
    iget v10, v7, Lcom/tkay/core/common/f/ad;->c:I
    :try_end_1
    .catch Lcom/tkay/core/common/e; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_3

    goto :goto_2

    :cond_5
    const/4 v10, 0x0

    :goto_2
    const-wide/16 v19, -0x1

    cmp-long v21, v1, v19

    if-eqz v21, :cond_7

    int-to-long v9, v10

    cmp-long v1, v9, v1

    if-gez v1, :cond_6

    goto :goto_3

    :cond_6
    const/4 v9, 0x1

    goto :goto_4

    :cond_7
    :goto_3
    cmp-long v1, v16, v19

    if-eqz v1, :cond_8

    int-to-long v1, v3

    cmp-long v1, v1, v16

    if-gez v1, :cond_6

    goto :goto_5

    .line 5967
    :goto_4
    :try_start_2
    invoke-virtual {v12, v9}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 5969
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v1, "2003"

    invoke-static {v1, v8, v8}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    const-string v2, "Capping."

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    :cond_8
    :goto_5
    const/4 v9, 0x1

    .line 5977
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    invoke-virtual/range {p5 .. p5}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1, v15}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Lcom/tkay/core/c/d;)Z

    move-result v1

    if-nez v1, :cond_e

    .line 5655
    new-instance v10, Ljava/util/ArrayList;

    const/4 v1, 0x3

    invoke-direct {v10, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 5656
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 5657
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 5658
    new-instance v1, Ljava/util/ArrayList;
    :try_end_2
    .catch Lcom/tkay/core/common/e; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/4 v9, 0x2

    :try_start_3
    invoke-direct {v1, v9}, Ljava/util/ArrayList;-><init>(I)V

    .line 5660
    iget v9, v11, Lcom/tkay/core/common/j;->d:I
    :try_end_3
    .catch Lcom/tkay/core/common/e; {:try_start_3 .. :try_end_3} :catch_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    move-object/from16 v16, v1

    move-object/from16 v1, p0

    move-object/from16 v17, v2

    move v2, v9

    move-object v9, v3

    move-object/from16 v3, p4

    move-object/from16 v19, v7

    move-object v7, v9

    move-object/from16 v23, v8

    move-object/from16 v8, v17

    move-object v0, v9

    const/4 v14, 0x1

    move-object/from16 v9, v16

    move-object/from16 v18, v10

    move-object/from16 v11, v19

    move-object/from16 v12, p5

    :try_start_4
    invoke-direct/range {v1 .. v12}, Lcom/tkay/core/common/f;->a(ILcom/tkay/core/c/d;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/d;)V
    :try_end_4
    .catch Lcom/tkay/core/common/e; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 5673
    new-instance v12, Ljava/util/ArrayList;

    invoke-direct {v12, v14}, Ljava/util/ArrayList;-><init>(I)V

    move-object/from16 v10, p5

    move-object/from16 v9, v17

    .line 5674
    invoke-direct {v13, v0, v9, v10, v12}, Lcom/tkay/core/common/f;->a(Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/d;Ljava/util/List;)V

    move-object/from16 v1, v16

    .line 5675
    invoke-direct {v13, v0, v1, v10, v12}, Lcom/tkay/core/common/f;->a(Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/d;Ljava/util/List;)V

    .line 5678
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    .line 5681
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 5682
    invoke-interface {v2, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    move-object/from16 v3, v18

    .line 5683
    invoke-interface {v2, v3}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 5685
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v3

    move-object/from16 v6, p2

    move-object/from16 v5, p3

    move v4, v14

    invoke-virtual {v3, v6, v5, v15, v2}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V

    .line 5688
    invoke-interface {v12}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_9

    move v8, v4

    goto :goto_6

    :cond_9
    const/4 v8, 0x0

    :goto_6
    if-nez v8, :cond_a

    .line 5692
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_a

    .line 5693
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v2

    invoke-virtual {v2, v6, v5}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;)V

    move v2, v4

    goto :goto_7

    :cond_a
    const/4 v2, 0x0

    :goto_7
    if-eqz v2, :cond_b

    .line 5698
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_b

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_b

    const-string v0, "4005"

    move-object/from16 v1, v23

    .line 5699
    invoke-static {v0, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    const/4 v1, 0x6

    .line 5700
    invoke-virtual {v10, v1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 5702
    invoke-direct {v13, v4, v10, v0}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    const/4 v3, 0x0

    .line 5703
    iput-boolean v3, v13, Lcom/tkay/core/common/f;->f:Z

    return-void

    :cond_b
    const/4 v3, 0x0

    .line 5707
    invoke-static {}, Lcom/tkay/core/a/b;->a()Lcom/tkay/core/a/b;

    move-result-object v7

    iget-object v11, v13, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-virtual {v7, v11, v6, v15}, Lcom/tkay/core/a/b;->b(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/c/d;)V

    .line 5708
    invoke-virtual {v10, v4}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 5709
    iget-object v4, v13, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v4}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v4

    const/16 v7, 0xa

    invoke-virtual {v4, v7, v10}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 5711
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v4

    iget-object v7, v13, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v4, v7}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v4

    .line 5713
    iget-object v7, v13, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v7}, Lcom/tkay/core/common/y;->a(Landroid/content/Context;)Lcom/tkay/core/common/y;

    move-result-object v7

    .line 6138
    iget-object v11, v7, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    if-eqz v11, :cond_c

    .line 6139
    iget-object v7, v7, Lcom/tkay/core/common/y;->a:Ljava/util/Map;

    invoke-interface {v7, v6}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/am;

    goto :goto_8

    :cond_c
    const/4 v7, 0x0

    :goto_8
    move-object v11, v7

    .line 5716
    iget-object v7, v13, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v7}, Lcom/tkay/core/common/w;->a(Landroid/content/Context;)Lcom/tkay/core/common/w;

    move-result-object v7

    invoke-virtual {v7, v6, v5}, Lcom/tkay/core/common/w;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f/ae;

    move-result-object v14

    move-object/from16 v7, p6

    .line 5731
    invoke-virtual {v13, v7}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;

    move-result-object v3

    .line 6237
    iput-object v4, v3, Lcom/tkay/core/common/h;->h:Ljava/util/Map;

    .line 6241
    iput-object v10, v3, Lcom/tkay/core/common/h;->i:Lcom/tkay/core/common/f/d;

    .line 5734
    invoke-virtual {v3, v7}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/j;)V

    .line 5735
    iget-object v4, v7, Lcom/tkay/core/common/j;->e:Lcom/tkay/core/common/b/b;

    invoke-virtual {v3, v4}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/b/b;)V

    .line 7161
    iput-object v1, v3, Lcom/tkay/core/common/h;->R:Ljava/util/List;

    .line 5737
    iput-object v5, v13, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    .line 5739
    new-instance v1, Lcom/tkay/core/common/m/g;

    invoke-direct {v1}, Lcom/tkay/core/common/m/g;-><init>()V

    .line 5740
    iput-object v6, v1, Lcom/tkay/core/common/m/g;->a:Ljava/lang/String;

    .line 5741
    iput-object v5, v1, Lcom/tkay/core/common/m/g;->b:Ljava/lang/String;

    .line 5742
    iput-object v15, v1, Lcom/tkay/core/common/m/g;->c:Lcom/tkay/core/c/d;

    .line 5743
    iput-object v0, v1, Lcom/tkay/core/common/m/g;->d:Ljava/util/List;

    .line 5744
    iput-boolean v2, v1, Lcom/tkay/core/common/m/g;->e:Z

    .line 5745
    invoke-virtual/range {p5 .. p5}, Lcom/tkay/core/common/f/d;->S()I

    move-result v4

    iput v4, v1, Lcom/tkay/core/common/m/g;->f:I

    .line 5746
    iput-object v11, v1, Lcom/tkay/core/common/m/g;->g:Lcom/tkay/core/common/f/am;

    .line 5747
    iput-object v14, v1, Lcom/tkay/core/common/m/g;->h:Lcom/tkay/core/common/f/ae;

    .line 5750
    invoke-virtual {v3, v1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/common/m/g;)V

    .line 5751
    iget-object v1, v13, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v1, v5, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5753
    invoke-virtual {v3}, Lcom/tkay/core/common/h;->b()V

    const/4 v1, 0x0

    .line 5756
    iput-boolean v1, v13, Lcom/tkay/core/common/f;->f:Z

    if-nez v2, :cond_d

    .line 5763
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v4

    new-instance v3, Lcom/tkay/core/common/f$3;

    move-object v1, v3

    move-object/from16 v2, p0

    move-object v13, v3

    move-object/from16 v3, p1

    move-object v15, v4

    move-object/from16 v4, p6

    move-object/from16 v5, p3

    move-object/from16 v6, p2

    move-object/from16 v7, p4

    move-object/from16 v10, p5

    move-object/from16 v16, v12

    move-object v12, v14

    move-object v14, v13

    move-object/from16 v13, v16

    move-object/from16 v16, v15

    move-object v15, v14

    move-object v14, v0

    invoke-direct/range {v1 .. v14}, Lcom/tkay/core/common/f$3;-><init>(Lcom/tkay/core/common/f;Landroid/content/Context;Lcom/tkay/core/common/j;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;ZLjava/util/List;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/am;Lcom/tkay/core/common/f/ae;Ljava/util/List;Ljava/util/List;)V

    move-object/from16 v0, v16

    invoke-virtual {v0, v15}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    :cond_d
    return-void

    :catchall_0
    move-exception v0

    move-object/from16 v10, p5

    move v4, v14

    goto/16 :goto_a

    :catch_0
    move-exception v0

    move-object/from16 v10, p5

    move v4, v14

    goto/16 :goto_b

    :cond_e
    move-object v1, v8

    move v4, v9

    move-object v10, v12

    const/4 v0, 0x2

    .line 5979
    :try_start_5
    invoke-virtual {v10, v0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 5981
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v2, "2004"

    invoke-static {v2, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    const-string v2, "Pacing."

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    :catchall_1
    move-exception v0

    move v4, v9

    move-object v10, v12

    goto :goto_a

    :catch_1
    move-exception v0

    move v4, v9

    move-object v10, v12

    goto :goto_b

    :cond_f
    :goto_9
    move-object v1, v8

    move-object v10, v12

    const/4 v4, 0x1

    .line 5942
    invoke-virtual {v10, v2}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 5943
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/c/d;->i()I

    move-result v0
    :try_end_5
    .catch Lcom/tkay/core/common/e; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    const-string v2, "No Adsource."

    if-ne v0, v4, :cond_10

    .line 5944
    :try_start_6
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v3, "4009"

    invoke-static {v3, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    .line 5946
    :cond_10
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v3, "4004"

    invoke-static {v3, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0

    :cond_11
    move-object v1, v8

    move-object v10, v12

    const/4 v4, 0x1

    .line 5930
    invoke-virtual {v10, v2}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 5932
    new-instance v0, Lcom/tkay/core/common/e;

    const-string v2, "4003"

    invoke-static {v2, v1, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    const-string v2, "Strategy is close."

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw v0
    :try_end_6
    .catch Lcom/tkay/core/common/e; {:try_start_6 .. :try_end_6} :catch_2
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :catchall_2
    move-exception v0

    goto :goto_a

    :catch_2
    move-exception v0

    goto :goto_b

    :catchall_3
    move-exception v0

    move-object v10, v12

    const/4 v4, 0x1

    .line 5669
    :goto_a
    invoke-direct {v13, v4, v10, v0}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    return-void

    :catch_3
    move-exception v0

    move-object v10, v12

    const/4 v4, 0x1

    .line 5666
    :goto_b
    invoke-direct {v13, v4, v10, v0}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f;Lcom/tkay/core/c/d;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 7512
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ag()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ah()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    .line 7513
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ai()Ljava/lang/String;

    move-result-object v1

    .line 7514
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->D()Ljava/lang/String;

    move-result-object v2

    .line 7515
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->aj()Ljava/lang/String;

    move-result-object v3

    .line 7516
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->B()Ljava/lang/String;

    move-result-object v4

    .line 7517
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->t()Ljava/lang/String;

    move-result-object v5

    .line 7518
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->ap()Ljava/lang/String;

    move-result-object v6

    .line 7519
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->aq()Ljava/lang/String;

    move-result-object v7

    .line 7513
    invoke-static/range {v1 .. v7}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    .line 7521
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->h()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/d;->d(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    .line 7523
    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 7525
    invoke-virtual {p1}, Lcom/tkay/core/c/d;->o()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/c/d;->c(Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v2, :cond_0

    .line 7527
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v5

    move v6, v3

    :goto_0
    if-ge v6, v5, :cond_0

    .line 7530
    invoke-interface {v2, v6}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/core/common/f/aj;

    .line 7532
    invoke-static {v0, v7, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_0
    if-eqz v1, :cond_1

    .line 7536
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v2

    goto :goto_1

    :cond_1
    move v2, v3

    :goto_1
    if-lez v2, :cond_6

    .line 7538
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_2
    :goto_2
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/aj;

    .line 7540
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v5

    invoke-virtual {v5, p3, v2}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v5

    const/4 v6, 0x3

    if-eqz v5, :cond_3

    .line 7545
    :try_start_0
    invoke-virtual {v5}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v5

    .line 7547
    invoke-virtual {v2, v5, v3, v6, v4}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V

    .line 7552
    invoke-static {v0, v2, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    .line 7560
    :catch_0
    :cond_3
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v5

    invoke-virtual {v5, v2}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v5

    if-eqz v5, :cond_4

    const/4 v6, 0x2

    .line 7562
    invoke-virtual {v2, v5, v3, v6, v4}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/l;III)V

    .line 7566
    invoke-static {v0, v2, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    goto :goto_2

    .line 7572
    :cond_4
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 7573
    iget-object v5, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v5, p2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/h;

    const/4 v7, 0x0

    if-eqz v5, :cond_5

    .line 7574
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v8

    .line 8079
    iget-object v9, v5, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v9, :cond_5

    .line 8080
    iget-object v5, v5, Lcom/tkay/core/common/h;->D:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v5, v8}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    move-object v7, v5

    check-cast v7, Lcom/tkay/core/common/f/aj;

    :cond_5
    if-eqz v7, :cond_2

    .line 7576
    invoke-virtual {v2, v7, v3, v6, v4}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V

    .line 7580
    invoke-static {v0, v2, v4}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V

    goto :goto_2

    .line 7589
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object p0

    invoke-virtual {p0, p3, p2, p1, v0}, Lcom/tkay/core/common/x;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/util/List;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V
    .locals 8

    .line 8422
    new-instance v7, Lcom/tkay/core/common/g;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->p()J

    move-result-wide v3

    move-object v0, v7

    move-object v5, p1

    move-object v6, p2

    invoke-direct/range {v0 .. v6}, Lcom/tkay/core/common/g;-><init>(JJLcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/d;)V

    .line 8423
    iput-object v7, p0, Lcom/tkay/core/common/f;->j:Lcom/tkay/core/common/g;

    .line 8424
    invoke-virtual {v7}, Lcom/tkay/core/common/g;->start()Landroid/os/CountDownTimer;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f;Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V
    .locals 1

    const/4 v0, 0x1

    .line 62
    invoke-direct {p0, v0, p1, p2}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/common/f;ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V
    .locals 0

    .line 62
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V

    return-void
.end method

.method private a(Ljava/util/List;Ljava/util/List;Lcom/tkay/core/common/f/d;Ljava/util/List;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Lcom/tkay/core/common/f/d;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    .line 1053
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    const/4 v4, 0x7

    if-ltz v0, :cond_6

    .line 1054
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/f/aj;

    .line 1055
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v6

    if-eqz v6, :cond_0

    .line 1056
    invoke-interface {p4, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 1060
    :cond_0
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->m()I

    move-result v6

    const/4 v7, 0x2

    if-eq v6, v7, :cond_5

    .line 1064
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v6

    iget-object v8, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v6, v8, v5}, Lcom/tkay/core/common/a;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/a;

    move-result-object v6

    const/4 v8, 0x0

    if-eqz v6, :cond_1

    .line 1070
    invoke-virtual {v6}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v6

    const/4 v8, 0x3

    invoke-virtual {v5, v6, v2, v8, v1}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/aj;III)V

    move-object v8, v5

    :cond_1
    if-nez v8, :cond_3

    .line 1077
    :try_start_0
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v6

    invoke-virtual {v6, v5}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v6

    if-eqz v6, :cond_2

    .line 1078
    invoke-virtual {v6}, Lcom/tkay/core/common/f/l;->a()Z

    move-result v9

    if-nez v9, :cond_2

    .line 1079
    invoke-virtual {v5, v6, v2, v7, v1}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/l;III)V

    move-object v8, v5

    goto :goto_1

    :cond_2
    if-eqz v6, :cond_3

    .line 1085
    new-instance v7, Lcom/tkay/core/common/f/q;

    invoke-direct {v7}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 1086
    iput v1, v7, Lcom/tkay/core/common/f/q;->a:I

    .line 1087
    invoke-virtual {v6}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v9

    iput-wide v9, v7, Lcom/tkay/core/common/f/q;->b:D

    .line 1088
    iput-object p3, v7, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 1089
    iput-object v5, v7, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 1090
    iput-object v5, v7, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 1092
    invoke-virtual {v6, v7, v1}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_3
    :goto_1
    if-eqz v8, :cond_5

    .line 1103
    :try_start_1
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v6

    if-ne v6, v4, :cond_4

    move v3, v1

    .line 1106
    :cond_4
    invoke-interface {p2, v0}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    .line 1107
    invoke-static {p1, v5, v2}, Lcom/tkay/core/common/l/g;->a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :cond_5
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_6
    if-eqz v3, :cond_8

    .line 1116
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    sub-int/2addr p1, v1

    :goto_2
    if-ltz p1, :cond_8

    .line 1117
    invoke-interface {p2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/tkay/core/common/f/aj;

    .line 1118
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p3

    if-ne p3, v4, :cond_7

    .line 1119
    invoke-interface {p2, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    :cond_7
    add-int/lit8 p1, p1, -0x1

    goto :goto_2

    :cond_8
    return-void
.end method

.method private a(ZLcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Lcom/tkay/core/common/f/d;",
            "Lcom/tkay/core/api/AdError;",
            ")V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 1166
    iput-boolean v0, p0, Lcom/tkay/core/common/f;->f:Z

    .line 1168
    invoke-virtual {p0, p3}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/api/AdError;)V

    .line 1169
    invoke-virtual {p2, v0}, Lcom/tkay/core/common/f/d;->a(Z)V

    if-eqz p1, :cond_0

    .line 1171
    iget-object p1, p0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {p1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object p1

    const/16 v0, 0xa

    invoke-virtual {p1, v0, p2}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 1173
    invoke-static {p2, p3}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method

.method private a(ZLcom/tkay/core/common/f/d;Ljava/lang/Throwable;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z",
            "Lcom/tkay/core/common/f/d;",
            "Ljava/lang/Throwable;",
            ")V"
        }
    .end annotation

    .line 1156
    instance-of v0, p3, Lcom/tkay/core/common/e;

    if-eqz v0, :cond_0

    .line 1157
    check-cast p3, Lcom/tkay/core/common/e;

    iget-object p3, p3, Lcom/tkay/core/common/e;->a:Lcom/tkay/core/api/AdError;

    goto :goto_0

    .line 1159
    :cond_0
    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p3

    const-string v0, "9999"

    const-string v1, ""

    invoke-static {v0, v1, p3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p3

    .line 1162
    :goto_0
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/core/common/f;->a(ZLcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method private a(ILcom/tkay/core/c/d;Ljava/lang/String;Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/ad;Lcom/tkay/core/common/f/aj;Ljava/util/concurrent/atomic/AtomicInteger;)Z
    .locals 15

    move-object v0, p0

    move-object/from16 v1, p5

    move-object/from16 v4, p6

    .line 1190
    invoke-virtual/range {p4 .. p4}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v8

    const/4 v2, 0x0

    .line 1191
    invoke-static {v8, v4, v2, v2}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    if-eqz v1, :cond_0

    .line 1194
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/tkay/core/common/f/ad;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/ad$a;

    move-result-object v1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    if-eqz v1, :cond_1

    .line 1196
    iget v3, v1, Lcom/tkay/core/common/f/ad$a;->e:I

    move v5, v3

    goto :goto_1

    :cond_1
    move v5, v2

    :goto_1
    if-eqz v1, :cond_2

    .line 1197
    iget v1, v1, Lcom/tkay/core/common/f/ad$a;->d:I

    move v6, v1

    goto :goto_2

    :cond_2
    move v6, v2

    .line 1199
    :goto_2
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->e()I

    move-result v1

    const-string v7, "2003"

    const/4 v3, -0x5

    const/4 v9, -0x1

    const/4 v10, 0x2

    const-string v11, "Out of Cap"

    const-string v12, ""

    const/4 v13, 0x1

    if-eq v1, v9, :cond_3

    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->e()I

    move-result v1

    if-lt v6, v1, :cond_3

    .line 1200
    invoke-virtual {v4, v3}, Lcom/tkay/core/common/f/aj;->g(I)V

    .line 1201
    invoke-virtual {v4, v11}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v3, "Out of Cap"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object/from16 v4, p6

    .line 1202
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    .line 1203
    invoke-static {v7, v12, v11}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-static {v8, v10, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1207
    :cond_3
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->f()I

    move-result v1

    if-eq v1, v9, :cond_4

    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->f()I

    move-result v1

    if-lt v5, v1, :cond_4

    .line 1208
    invoke-virtual {v4, v3}, Lcom/tkay/core/common/f/aj;->g(I)V

    .line 1209
    invoke-virtual {v4, v11}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v3, "Out of Cap"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object/from16 v4, p6

    .line 1210
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    .line 1211
    invoke-static {v7, v12, v11}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-static {v8, v10, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1215
    :cond_4
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    move-result-object v1

    move-object/from16 v3, p3

    invoke-virtual {v1, v3, v4}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Z

    move-result v1

    const/4 v7, -0x6

    if-eqz v1, :cond_5

    .line 1216
    invoke-virtual {v4, v7}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v7, "Out of Pacing"

    .line 1217
    invoke-virtual {v4, v7}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v9, "Out of Pacing"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v9

    move-object/from16 v4, p6

    .line 1218
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    const/4 v1, 0x3

    const-string v2, "2004"

    .line 1219
    invoke-static {v2, v12, v7}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    invoke-static {v8, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1223
    :cond_5
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object v1

    invoke-virtual {v1, v4}, Lcom/tkay/core/common/c;->a(Lcom/tkay/core/common/f/aj;)Z

    move-result v1

    const-string v9, "2007"

    const/4 v11, 0x4

    if-eqz v1, :cond_6

    .line 1224
    invoke-virtual {v4, v7}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v7, "Request fail in pacing"

    .line 1225
    invoke-virtual {v4, v7}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v10, "Request fail in pacing"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v10

    move-object/from16 v4, p6

    .line 1226
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    .line 1227
    invoke-static {v9, v12, v7}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-static {v8, v11, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1231
    :cond_6
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    iget-object v7, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v7}, Lcom/tkay/core/common/b/m;->l(Ljava/lang/String;)Ljava/util/List;

    move-result-object v7

    const/4 v1, -0x8

    if-eqz v7, :cond_7

    .line 1232
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v14

    invoke-interface {v7, v14}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_7

    .line 1233
    invoke-virtual {v4, v1}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v9, "Request fail in filter list"

    .line 1234
    invoke-virtual {v4, v9}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v10, "Request fail in filter list"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v10

    move-object/from16 v4, p6

    .line 1235
    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;IILjava/util/List;)V

    const/4 v1, 0x5

    const-string v2, "2010"

    .line 1236
    invoke-static {v2, v12, v9}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    invoke-static {v8, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1240
    :cond_7
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v7

    iget-object v14, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v7, v14}, Lcom/tkay/core/common/b/m;->m(Ljava/lang/String;)Ljava/util/List;

    move-result-object v7

    if-eqz v7, :cond_8

    .line 1241
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v14

    invoke-static {v14}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v14

    invoke-interface {v7, v14}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v14

    if-eqz v14, :cond_8

    .line 1242
    invoke-virtual {v4, v1}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v9, "Filter by network firm id."

    .line 1243
    invoke-virtual {v4, v9}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v10, "Filter by network firm id."

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v10

    move-object/from16 v4, p6

    .line 1244
    invoke-static/range {v1 .. v7}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;IILjava/util/List;)V

    const/16 v1, 0x9

    const-string v2, "2013"

    .line 1245
    invoke-static {v2, v12, v9}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    invoke-static {v8, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1249
    :cond_8
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v7

    if-eqz v7, :cond_a

    .line 1250
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object v7

    invoke-virtual {v7, v4}, Lcom/tkay/core/common/c;->b(Lcom/tkay/core/common/f/aj;)Z

    move-result v7

    const/4 v14, -0x7

    if-eqz v7, :cond_9

    .line 1251
    invoke-virtual {v4, v14}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v7, "Bid fail in pacing"

    .line 1252
    invoke-virtual {v4, v7}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v10, "Bid fail in pacing"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v10

    move-object/from16 v4, p6

    .line 1253
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    .line 1254
    invoke-static {v9, v12, v7}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-static {v8, v11, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    .line 1259
    :cond_9
    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->W()I

    move-result v7

    if-eq v7, v13, :cond_a

    invoke-virtual/range {p6 .. p6}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v7

    if-ne v7, v10, :cond_a

    .line 1260
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v7

    iget-object v9, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v7, v9}, Lcom/tkay/core/common/v;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;

    move-result-object v7

    if-eqz v7, :cond_a

    .line 1261
    invoke-virtual {v7, v4}, Lcom/tkay/core/common/f/c;->a(Lcom/tkay/core/common/f/aj;)Z

    move-result v7

    if-eqz v7, :cond_a

    .line 1262
    invoke-virtual {v4, v14}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v7, "Can\'t Load On Showing"

    .line 1263
    invoke-virtual {v4, v7}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v8, "Can\'t Load On Showing"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v8

    move-object/from16 v4, p6

    .line 1264
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    const/4 v1, 0x7

    const-string v2, "2011"

    .line 1265
    invoke-static {v2, v12, v7}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    move-object/from16 v7, p4

    invoke-static {v7, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    :cond_a
    move-object/from16 v7, p4

    .line 1271
    invoke-static {}, Lcom/tkay/core/common/c;->a()Lcom/tkay/core/common/c;

    move-result-object v9

    move/from16 v10, p1

    move-object/from16 v11, p2

    invoke-virtual {v9, v10, v11, v4}, Lcom/tkay/core/common/c;->a(ILcom/tkay/core/c/d;Lcom/tkay/core/common/f/aj;)Z

    move-result v9

    if-eqz v9, :cond_b

    .line 1274
    invoke-virtual/range {p7 .. p7}, Ljava/util/concurrent/atomic/AtomicInteger;->decrementAndGet()I

    .line 1276
    invoke-virtual {v4, v1}, Lcom/tkay/core/common/f/aj;->g(I)V

    const-string v9, "Error Code Request fail in pacing"

    .line 1277
    invoke-virtual {v4, v9}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    const-string v10, "Error Code Request fail in pacing"

    move-object/from16 v1, p3

    move-object/from16 v2, p4

    move-object v3, v10

    move-object/from16 v4, p6

    .line 1278
    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Lcom/tkay/core/common/f/d;Ljava/lang/String;Lcom/tkay/core/common/f/aj;II)V

    const/16 v1, 0xa

    const-string v2, "2014"

    .line 1279
    invoke-static {v2, v12, v9}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v2

    invoke-static {v8, v1, v2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILcom/tkay/core/api/AdError;)V

    return v13

    :cond_b
    return v2
.end method

.method static synthetic a(Lcom/tkay/core/common/f;Z)Z
    .locals 0

    .line 62
    iput-boolean p1, p0, Lcom/tkay/core/common/f;->q:Z

    return p1
.end method

.method private a(ZZLjava/util/Map;)Z
    .locals 22
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(ZZ",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)Z"
        }
    .end annotation

    move-object/from16 v0, p0

    .line 1498
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    .line 1500
    iget-object v2, v0, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const-string v3, ""

    if-eqz v2, :cond_0

    move-object v12, v3

    goto :goto_0

    :cond_0
    iget-object v2, v0, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    move-object v12, v2

    :goto_0
    if-nez v1, :cond_1

    .line 1503
    iget-object v1, v0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v1

    :cond_1
    const/4 v2, 0x1

    if-nez v1, :cond_4

    .line 1508
    iget-object v14, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    const/16 v16, 0x0

    const/16 v18, -0x1

    const/16 v19, 0x0

    const/16 v20, 0x0

    const-string v13, ""

    const-string v15, ""

    const-string v17, ""

    move-object/from16 v21, p3

    invoke-static/range {v13 .. v21}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v4

    if-eqz p1, :cond_2

    const/4 v1, 0x4

    .line 1510
    invoke-static {v4, v1, v3, v12}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    if-eqz p2, :cond_3

    const/4 v5, 0x0

    const/4 v6, 0x4

    const/4 v7, -0x1

    const/4 v9, -0x1

    const/4 v13, 0x0

    const-string v8, ""

    const-string v10, ""

    const-string v11, ""

    const-string v14, ""

    .line 1512
    invoke-static/range {v4 .. v14}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    :cond_3
    :goto_1
    return v2

    .line 1518
    :cond_4
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    iget-object v4, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-static {v4, v1}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Lcom/tkay/core/c/d;)Z

    move-result v4

    if-eqz v4, :cond_7

    .line 1520
    iget-object v14, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->m()I

    move-result v18

    const/16 v19, 0x0

    const/16 v20, 0x0

    const-string v13, ""

    const-string v15, ""

    const-string v17, ""

    move-object/from16 v16, v1

    move-object/from16 v21, p3

    invoke-static/range {v13 .. v21}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v4

    if-eqz p1, :cond_5

    const/4 v1, 0x3

    .line 1522
    invoke-static {v4, v1, v3, v12}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_5
    if-eqz p2, :cond_6

    const/4 v5, 0x0

    const/4 v6, 0x3

    const/4 v7, -0x1

    const/4 v9, -0x1

    const/4 v13, 0x0

    const-string v8, ""

    const-string v10, ""

    const-string v11, ""

    const-string v14, ""

    .line 1524
    invoke-static/range {v4 .. v14}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    :cond_6
    :goto_2
    return v2

    .line 1530
    :cond_7
    iget-object v4, v0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v4}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object v4

    iget-object v5, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v4, v1, v5}, Lcom/tkay/core/a/a;->a(Lcom/tkay/core/c/d;Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_a

    .line 1532
    iget-object v14, v0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v1}, Lcom/tkay/core/c/d;->m()I

    move-result v18

    const/16 v19, 0x0

    const/16 v20, 0x0

    const-string v13, ""

    const-string v15, ""

    const-string v17, ""

    move-object/from16 v16, v1

    move-object/from16 v21, p3

    invoke-static/range {v13 .. v21}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v4

    if-eqz p1, :cond_8

    const/4 v1, 0x2

    .line 1534
    invoke-static {v4, v1, v3, v12}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ILjava/lang/String;Ljava/lang/String;)V

    goto :goto_3

    :cond_8
    if-eqz p2, :cond_9

    const/4 v5, 0x0

    const/4 v6, 0x2

    const/4 v7, -0x1

    const/4 v9, -0x1

    const/4 v13, 0x0

    const-string v8, ""

    const-string v10, ""

    const-string v11, ""

    const-string v14, ""

    .line 1536
    invoke-static/range {v4 .. v14}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    :cond_9
    :goto_3
    return v2

    :cond_a
    const/4 v1, 0x0

    return v1
.end method

.method static synthetic b(Lcom/tkay/core/common/f;)Ljava/util/List;
    .locals 0

    .line 62
    iget-object p0, p0, Lcom/tkay/core/common/f;->r:Ljava/util/List;

    return-object p0
.end method

.method private static b(Lcom/tkay/core/c/d;Lcom/tkay/core/common/f/d;)V
    .locals 1

    .line 977
    invoke-static {}, Lcom/tkay/core/a/c;->a()Lcom/tkay/core/a/c;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/tkay/core/a/c;->a(Ljava/lang/String;Lcom/tkay/core/c/d;)Z

    move-result p0

    if-nez p0, :cond_0

    return-void

    :cond_0
    const/4 p0, 0x2

    .line 979
    invoke-virtual {p1, p0}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 981
    new-instance p0, Lcom/tkay/core/common/e;

    const-string p1, ""

    const-string v0, "2004"

    invoke-static {v0, p1, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    const-string v0, "Pacing."

    invoke-direct {p0, p1, v0}, Lcom/tkay/core/common/e;-><init>(Lcom/tkay/core/api/AdError;Ljava/lang/String;)V

    throw p0
.end method

.method static synthetic c(Lcom/tkay/core/common/f;)Z
    .locals 0

    .line 62
    iget-boolean p0, p0, Lcom/tkay/core/common/f;->o:Z

    return p0
.end method

.method static synthetic d(Lcom/tkay/core/common/f;)J
    .locals 2

    .line 62
    iget-wide v0, p0, Lcom/tkay/core/common/f;->p:J

    return-wide v0
.end method

.method static synthetic e(Lcom/tkay/core/common/f;)Z
    .locals 0

    .line 62
    iget-boolean p0, p0, Lcom/tkay/core/common/f;->q:Z

    return p0
.end method

.method static synthetic f(Lcom/tkay/core/common/f;)Z
    .locals 1

    const/4 v0, 0x0

    .line 62
    iput-boolean v0, p0, Lcom/tkay/core/common/f;->o:Z

    return v0
.end method

.method static synthetic g(Lcom/tkay/core/common/f;)J
    .locals 2

    const-wide/16 v0, 0x0

    .line 62
    iput-wide v0, p0, Lcom/tkay/core/common/f;->p:J

    return-wide v0
.end method


# virtual methods
.method public a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/api/TYAdStatusInfo;"
        }
    .end annotation

    .line 1441
    invoke-virtual {p0}, Lcom/tkay/core/common/f;->e()Z

    move-result v0

    const/4 v1, 0x0

    const/4 v2, 0x1

    .line 1442
    invoke-virtual {p0, p1, v2, v1, p2}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1446
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object p2

    .line 1447
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v3

    if-eqz p2, :cond_0

    .line 1449
    invoke-static {p2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object p2

    goto :goto_0

    :cond_0
    if-eqz v3, :cond_1

    .line 1451
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p2

    goto :goto_0

    :cond_1
    const/4 p2, 0x0

    .line 1455
    :goto_0
    new-instance v3, Lcom/tkay/core/api/TYAdStatusInfo;

    if-eqz p1, :cond_2

    move v1, v2

    :cond_2
    invoke-direct {v3, v0, v1, p2}, Lcom/tkay/core/api/TYAdStatusInfo;-><init>(ZZLcom/tkay/core/api/TYAdInfo;)V

    return-object v3
.end method

.method public a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "ZZ",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/common/f/a;"
        }
    .end annotation

    .line 1489
    invoke-direct {p0, p3, p2, p4}, Lcom/tkay/core/common/f;->a(ZZLjava/util/Map;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 1491
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    move-object v1, p1

    move v3, p2

    move v4, p3

    move-object v5, p4

    invoke-virtual/range {v0 .. v5}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object p1

    return-object p1
.end method

.method public abstract a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TT;)",
            "Lcom/tkay/core/common/h;"
        }
    .end annotation
.end method

.method protected abstract a()Ljava/lang/String;
.end method

.method public final a(Landroid/content/Context;)Ljava/util/List;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/List<",
            "Lcom/tkay/core/api/TYAdInfo;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 1459
    invoke-direct {p0, v0, v0, v1}, Lcom/tkay/core/common/f;->a(ZZLjava/util/Map;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object v1

    .line 1461
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a;->a()Lcom/tkay/core/common/a;

    move-result-object v2

    iget-object v4, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x1

    const/4 v8, 0x0

    move-object v3, p1

    invoke-virtual/range {v2 .. v8}, Lcom/tkay/core/common/a;->a(Landroid/content/Context;Ljava/lang/String;ZZZLjava/util/Map;)Ljava/util/List;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 1462
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_6

    .line 1463
    new-instance v0, Ljava/util/ArrayList;

    const/4 v2, 0x3

    invoke-direct {v0, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 1464
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/core/common/f/a;

    if-eqz v2, :cond_2

    .line 1465
    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->f()Lcom/tkay/core/api/BaseAd;

    move-result-object v3

    goto :goto_1

    :cond_2
    move-object v3, v1

    :goto_1
    if-eqz v2, :cond_3

    .line 1466
    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v2

    goto :goto_2

    :cond_3
    move-object v2, v1

    :goto_2
    if-eqz v3, :cond_4

    .line 1468
    invoke-static {v3}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_4
    if-eqz v2, :cond_1

    .line 1470
    invoke-static {v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_5
    return-object v0

    :cond_6
    return-object v1
.end method

.method protected final a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "TT;",
            "Lcom/tkay/core/common/b/a;",
            ")V"
        }
    .end annotation

    move-object v3, p3

    move-object v2, p4

    .line 267
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p3}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v8

    const/4 v0, 0x1

    new-array v6, v0, [I

    const/4 v0, 0x0

    aput v0, v6, v0

    const-string v1, "ofm_tid_key"

    .line 270
    invoke-interface {v8, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 272
    :try_start_0
    invoke-interface {v8, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    aput v1, v6, v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 277
    :catchall_0
    :cond_0
    iget v0, v2, Lcom/tkay/core/common/j;->d:I

    if-eqz v0, :cond_1

    iget v0, v2, Lcom/tkay/core/common/j;->d:I

    const/4 v1, 0x3

    if-ne v0, v1, :cond_2

    .line 278
    :cond_1
    new-instance v0, Ljava/lang/Throwable;

    invoke-direct {v0}, Ljava/lang/Throwable;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v0

    .line 279
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, p3, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    .line 282
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v9

    new-instance v10, Lcom/tkay/core/common/f$2;

    move-object v0, v10

    move-object v1, p0

    move-object v2, p4

    move-object v3, p3

    move-object/from16 v4, p5

    move-object v5, p1

    move-object v7, p2

    invoke-direct/range {v0 .. v8}, Lcom/tkay/core/common/f$2;-><init>(Lcom/tkay/core/common/f;Lcom/tkay/core/common/j;Ljava/lang/String;Lcom/tkay/core/common/b/a;Landroid/content/Context;[ILjava/lang/String;Ljava/util/Map;)V

    invoke-virtual {v9, v10}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/api/AdError;)V
    .locals 1

    .line 1581
    iget-object v0, p0, Lcom/tkay/core/common/f;->i:Lcom/tkay/core/common/b/a;

    if-eqz v0, :cond_0

    .line 1582
    invoke-interface {v0, p1}, Lcom/tkay/core/common/b/a;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/core/common/b/a;)V
    .locals 4

    .line 137
    iget-object v0, p0, Lcom/tkay/core/common/f;->s:Ljava/lang/Object;

    monitor-enter v0

    .line 138
    :try_start_0
    iget-object v1, p0, Lcom/tkay/core/common/f;->r:Ljava/util/List;

    if-nez v1, :cond_0

    .line 139
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    iput-object v1, p0, Lcom/tkay/core/common/f;->r:Ljava/util/List;

    :cond_0
    if-nez p1, :cond_1

    .line 142
    monitor-exit v0

    return-void

    :cond_1
    const/4 v1, 0x0

    .line 145
    iget-object v2, p0, Lcom/tkay/core/common/f;->r:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_2
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/b/a;

    if-ne v3, p1, :cond_2

    const/4 v1, 0x1

    goto :goto_0

    :cond_3
    if-nez v1, :cond_4

    .line 151
    iget-object v1, p0, Lcom/tkay/core/common/f;->r:Ljava/util/List;

    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 153
    :cond_4
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final a(Lcom/tkay/core/common/f/a;)V
    .locals 0

    .line 1429
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a;->c()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x0

    .line 1430
    iput p1, p0, Lcom/tkay/core/common/f;->e:I

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 172
    iget-object v0, p0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    .line 173
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 174
    iput p1, p0, Lcom/tkay/core/common/f;->e:I

    .line 175
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/core/common/f;->m:J

    .line 177
    iput-boolean v0, p0, Lcom/tkay/core/common/f;->o:Z

    const-wide/16 v1, 0x0

    .line 178
    iput-wide v1, p0, Lcom/tkay/core/common/f;->p:J

    .line 179
    iput-boolean v0, p0, Lcom/tkay/core/common/f;->q:Z

    return-void

    .line 181
    :cond_0
    iput v0, p0, Lcom/tkay/core/common/f;->e:I

    return-void
.end method

.method public final a(Ljava/lang/String;DLcom/tkay/core/common/f/aj;)V
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/h;

    if-eqz p1, :cond_0

    .line 228
    invoke-virtual {p1, p2, p3, p4}, Lcom/tkay/core/common/h;->a(DLcom/tkay/core/common/f/aj;)V

    :cond_0
    return-void
.end method

.method public a(Ljava/lang/String;Lcom/tkay/core/common/b/a;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/core/api/TYAdStatusInfo;)Z
    .locals 4

    .line 1593
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    .line 1596
    iget v1, p0, Lcom/tkay/core/common/f;->e:I

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne v1, v3, :cond_0

    invoke-virtual {p0}, Lcom/tkay/core/common/f;->d()Z

    move-result v1

    if-nez v1, :cond_0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdStatusInfo;->isReady()Z

    move-result p1

    if-eqz p1, :cond_0

    return v2

    .line 1600
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/common/f;->j()Z

    move-result p1

    if-nez p1, :cond_2

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/core/c/d;->W()I

    move-result p1

    if-ne p1, v3, :cond_1

    goto :goto_0

    :cond_1
    return v2

    :cond_2
    :goto_0
    return v3
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "TT;",
            "Lcom/tkay/core/common/b/a;",
            ")Z"
        }
    .end annotation

    const/4 p1, 0x0

    return p1
.end method

.method public final b()V
    .locals 2

    .line 192
    iget-object v0, p0, Lcom/tkay/core/common/f;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/f;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->b(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    .line 193
    iget-boolean v1, p0, Lcom/tkay/core/common/f;->o:Z

    if-nez v1, :cond_0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 194
    iput-boolean v0, p0, Lcom/tkay/core/common/f;->o:Z

    .line 195
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/f;->p:J

    :cond_0
    return-void
.end method

.method protected b(Lcom/tkay/core/api/AdError;)V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 210
    iget-object v0, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public final c(Ljava/lang/String;)Lcom/tkay/core/common/h;
    .locals 1

    .line 214
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 218
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/common/h;

    return-object p1
.end method

.method protected final c()Z
    .locals 4

    .line 200
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/core/common/f;->p:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x7d0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 2

    .line 1544
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 1547
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/f$6;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/f$6;-><init>(Lcom/tkay/core/common/f;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final d()Z
    .locals 4

    .line 236
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/tkay/core/common/f;->m:J

    sub-long/2addr v0, v2

    iget-wide v2, p0, Lcom/tkay/core/common/f;->n:J

    cmp-long v0, v0, v2

    if-ltz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final e()Z
    .locals 3

    .line 248
    iget-boolean v0, p0, Lcom/tkay/core/common/f;->f:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    .line 251
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 252
    iget-object v0, p0, Lcom/tkay/core/common/f;->d:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v2, p0, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/h;

    if-eqz v0, :cond_1

    .line 253
    invoke-virtual {v0}, Lcom/tkay/core/common/h;->c()Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public final f()V
    .locals 2

    .line 1407
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/f$5;

    invoke-direct {v1, p0}, Lcom/tkay/core/common/f$5;-><init>(Lcom/tkay/core/common/f;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public g()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final h()V
    .locals 1

    .line 1575
    iget-object v0, p0, Lcom/tkay/core/common/f;->i:Lcom/tkay/core/common/b/a;

    if-eqz v0, :cond_0

    .line 1576
    invoke-interface {v0}, Lcom/tkay/core/common/b/a;->onAdLoaded()V

    :cond_0
    return-void
.end method

.method public i()Z
    .locals 1

    .line 1588
    iget-object v0, p0, Lcom/tkay/core/common/f;->g:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected j()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected k()V
    .locals 0

    return-void
.end method

.method protected l()V
    .locals 0

    return-void
.end method

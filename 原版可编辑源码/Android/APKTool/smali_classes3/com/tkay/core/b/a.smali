.class public abstract Lcom/tkay/core/b/a;
.super Ljava/lang/Object;


# instance fields
.field protected a:Lcom/tkay/core/common/f/ag;

.field protected b:Z

.field protected c:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private final d:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 2

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/b/a;->d:Ljava/lang/String;

    .line 43
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/tkay/core/b/a;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 46
    iput-object p1, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    return-void
.end method

.method protected static a(Ljava/util/List;)Lorg/json/JSONArray;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    .line 66
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 68
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    .line 69
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "network_firm_id"

    .line 70
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "ad_source_id"

    .line 71
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "content"

    .line 72
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->g()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 74
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    const-string v3, "error"

    .line 75
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 77
    :cond_0
    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    :cond_1
    return-object v0
.end method

.method protected static a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V
    .locals 0

    .line 104
    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/aj;->a(J)V

    const-wide/16 p2, 0x0

    .line 105
    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/aj;->a(D)V

    .line 106
    invoke-virtual {p0, p2, p3}, Lcom/tkay/core/common/f/aj;->d(D)V

    .line 107
    invoke-virtual {p0, p4}, Lcom/tkay/core/common/f/aj;->g(I)V

    .line 108
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->b()V

    .line 110
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    const-string p1, "bid error"

    .line 111
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    return-void

    .line 113
    :cond_0
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    return-void
.end method

.method protected static b(Ljava/util/List;)Lorg/json/JSONArray;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    const-string v0, "unit_ids"

    .line 87
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 89
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lorg/json/JSONObject;

    .line 90
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "network_firm_id"

    const/16 v5, 0x43

    .line 91
    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 92
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 93
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 95
    :cond_0
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    :cond_1
    return-object v1
.end method


# virtual methods
.method protected final a(DLcom/tkay/core/common/f/aj;)D
    .locals 2

    .line 399
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-result-object v0

    if-nez v0, :cond_0

    return-wide p1

    .line 405
    :cond_0
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-result-object v0

    sget-object v1, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    if-ne v0, v1, :cond_1

    .line 406
    iget-object p3, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object p3, p3, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->q()D

    move-result-wide v0

    :goto_0
    mul-double/2addr p1, v0

    goto :goto_1

    .line 407
    :cond_1
    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-result-object p3

    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    if-ne p3, v0, :cond_2

    const-wide/high16 v0, 0x4059000000000000L    # 100.0

    div-double/2addr p1, v0

    .line 408
    iget-object p3, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object p3, p3, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {p3}, Lcom/tkay/core/c/d;->q()D

    move-result-wide v0

    goto :goto_0

    :cond_2
    :goto_1
    return-wide p1
.end method

.method protected final a(Lcom/tkay/core/common/f/aj;)D
    .locals 5

    .line 371
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-result-object v0

    const-wide/high16 v1, 0x3ff0000000000000L    # 1.0

    if-nez v0, :cond_0

    return-wide v1

    .line 377
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-result-object v0

    sget-object v3, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    if-ne v0, v3, :cond_1

    .line 378
    iget-object p1, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->q()D

    move-result-wide v3

    div-double/2addr v1, v3

    const-wide/high16 v3, 0x4059000000000000L    # 100.0

    mul-double/2addr v1, v3

    goto :goto_0

    .line 382
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->ac()Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-result-object p1

    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    if-ne p1, v0, :cond_2

    .line 383
    iget-object p1, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object p1, p1, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->q()D

    move-result-wide v3

    div-double/2addr v1, v3

    :cond_2
    :goto_0
    return-wide v1
.end method

.method protected final a(ILcom/tkay/core/common/f/k;D)V
    .locals 6

    const/16 v0, 0x1c

    if-eq p1, v0, :cond_0

    return-void

    :cond_0
    const-wide v0, 0x3fee666666666666L    # 0.95

    .line 309
    iget-object v2, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    .line 310
    invoke-virtual {v2}, Lcom/tkay/core/c/d;->g()Lorg/json/JSONObject;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 312
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;)D

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmpl-double p1, v2, v4

    if-lez p1, :cond_1

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    cmpg-double p1, v2, v4

    if-gtz p1, :cond_1

    move-wide v0, v2

    .line 318
    :cond_1
    iget-wide v2, p2, Lcom/tkay/core/common/f/k;->originPrice:D

    mul-double/2addr v2, v0

    .line 324
    new-instance p1, Ljava/util/ArrayList;

    const/4 v0, 0x5

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(I)V

    .line 325
    invoke-static {}, Lcom/tkay/core/common/x;->a()Lcom/tkay/core/common/x;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v4, v4, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v0, v1, v4}, Lcom/tkay/core/common/x;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 327
    invoke-interface {p1, v0}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 330
    :cond_2
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    .line 331
    invoke-static {v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    .line 332
    iget-wide v4, p2, Lcom/tkay/core/common/f/k;->originPrice:D

    cmpg-double v4, v0, v4

    if-gez v4, :cond_3

    .line 336
    invoke-static {v2, v3, v0, v1}, Ljava/lang/Math;->max(DD)D

    move-result-wide v2

    .line 346
    :cond_4
    invoke-static {v2, v3, p3, p4}, Ljava/lang/Math;->max(DD)D

    move-result-wide p3

    .line 351
    iget-wide v0, p2, Lcom/tkay/core/common/f/k;->originPrice:D

    sub-double/2addr v0, p3

    .line 352
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v2

    mul-double/2addr v2, v0

    add-double/2addr p3, v2

    .line 358
    invoke-virtual {p2, p3, p4}, Lcom/tkay/core/common/f/k;->setPrice(D)V

    .line 359
    invoke-virtual {p2, p3, p4}, Lcom/tkay/core/common/f/k;->setSortPrice(D)V

    return-void
.end method

.method protected abstract a(Lcom/tkay/core/b/b/a;)V
.end method

.method protected abstract a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V
.end method

.method protected final a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/l;)V
    .locals 21

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    move-object/from16 v3, p2

    .line 120
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v4

    const/4 v0, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x1

    const-wide/16 v7, 0x0

    if-eqz v4, :cond_8

    .line 125
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/l;->d()Z

    move-result v9

    if-eqz v9, :cond_3

    .line 126
    iget-object v9, v4, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    .line 127
    invoke-static {v9}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_2

    .line 129
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v10

    iget-object v11, v4, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v12, v4, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v10, v11, v12}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v10

    .line 130
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v11

    iget-object v12, v3, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v13, v3, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v11, v12, v13}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v11

    if-eqz v10, :cond_0

    if-eqz v11, :cond_0

    .line 135
    iget-wide v7, v11, Lcom/tkay/core/b/j;->c:D

    .line 137
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v10

    iget-object v11, v4, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v10, v9, v11}, Lcom/tkay/core/b/c;->c(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_3

    :cond_0
    if-eqz v10, :cond_1

    .line 140
    iget-wide v7, v10, Lcom/tkay/core/b/j;->c:D

    :cond_1
    :goto_0
    move v9, v5

    goto/16 :goto_4

    :cond_2
    const-string v9, "tkay_bidding"

    const-string v10, "TpBidId is empty, price = 0...."

    .line 146
    invoke-static {v9, v10}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto/16 :goto_3

    .line 149
    :cond_3
    invoke-virtual {v4}, Lcom/tkay/core/common/f/l;->a()Z

    move-result v7

    if-nez v7, :cond_5

    .line 150
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v8

    invoke-virtual {v4}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v10

    cmpl-double v8, v8, v10

    if-lez v8, :cond_4

    goto :goto_1

    .line 168
    :cond_4
    invoke-virtual {v4}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v7

    goto :goto_0

    .line 152
    :cond_5
    :goto_1
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v8

    if-eqz v7, :cond_7

    .line 156
    iget-object v7, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v10, v7, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v11, v7, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v7, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v13, v7, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    const/4 v15, 0x1

    const/16 v16, 0x0

    const/16 v17, 0x0

    iget-object v7, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v7, v7, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v7, :cond_6

    iget-object v7, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v7, v7, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v7, v7, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    move-object/from16 v18, v7

    goto :goto_2

    :cond_6
    move-object/from16 v18, v0

    :goto_2
    const-string v12, ""

    const-string v14, ""

    invoke-static/range {v10 .. v18}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v7

    .line 158
    new-instance v10, Lcom/tkay/core/common/f/q;

    invoke-direct {v10}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 159
    iput v6, v10, Lcom/tkay/core/common/f/q;->a:I

    .line 160
    iput-wide v8, v10, Lcom/tkay/core/common/f/q;->b:D

    .line 161
    iput-object v7, v10, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 162
    iput-object v2, v10, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 163
    iput-object v2, v10, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 165
    invoke-virtual {v4, v10, v6}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V

    :cond_7
    move-wide v7, v8

    goto :goto_3

    .line 172
    :cond_8
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/l;->d()Z

    move-result v9

    if-eqz v9, :cond_9

    .line 173
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v9

    iget-object v10, v3, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v11, v3, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v9, v10, v11}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/b/j;

    move-result-object v9

    if-eqz v9, :cond_a

    .line 175
    iget-wide v7, v9, Lcom/tkay/core/b/j;->c:D

    goto :goto_3

    .line 178
    :cond_9
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v7

    :cond_a
    :goto_3
    move v9, v6

    :goto_4
    const/4 v10, 0x3

    const/4 v11, 0x2

    if-eqz v9, :cond_f

    if-eqz v4, :cond_c

    .line 188
    :try_start_0
    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v12, v9, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v13, v9, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    const-string v14, ""

    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v15, v9, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    const-string v16, ""

    const/16 v17, 0x1

    const/16 v18, 0x0

    const/16 v19, 0x0

    .line 189
    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v9, v9, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v9, :cond_b

    iget-object v0, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    :cond_b
    move-object/from16 v20, v0

    .line 188
    invoke-static/range {v12 .. v20}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 191
    new-instance v9, Lcom/tkay/core/common/f/q;

    invoke-direct {v9}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 192
    iput v11, v9, Lcom/tkay/core/common/f/q;->a:I

    .line 193
    iput-wide v7, v9, Lcom/tkay/core/common/f/q;->b:D

    .line 194
    iput-object v0, v9, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 195
    iput-object v2, v9, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 196
    iput-object v2, v9, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 198
    invoke-virtual {v4, v9, v6}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_5

    :catchall_0
    move-exception v0

    .line 204
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 207
    :cond_c
    :goto_5
    invoke-virtual {v2, v3, v11, v5, v6}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/l;III)V

    .line 208
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->K()I

    move-result v0

    if-eq v0, v11, :cond_13

    .line 209
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    .line 1062
    iget-object v0, v0, Lcom/tkay/core/b/c;->a:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1066
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    if-eq v0, v10, :cond_d

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result v0

    const/4 v4, 0x7

    if-ne v0, v4, :cond_e

    .line 1067
    :cond_d
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, v3}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/l;)V

    :cond_e
    return-void

    :cond_f
    if-eqz v3, :cond_12

    .line 214
    :try_start_1
    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v12, v9, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v13, v9, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    const-string v14, ""

    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v15, v9, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    const-string v16, ""

    const/16 v17, 0x1

    const/16 v18, 0x0

    const/16 v19, 0x0

    .line 215
    iget-object v9, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v9, v9, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v9, :cond_10

    iget-object v0, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v0, v0, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    :cond_10
    move-object/from16 v20, v0

    .line 214
    invoke-static/range {v12 .. v20}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 217
    new-instance v9, Lcom/tkay/core/common/f/q;

    invoke-direct {v9}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 218
    iput-wide v7, v9, Lcom/tkay/core/common/f/q;->b:D

    .line 219
    iput-object v0, v9, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 220
    iput-object v2, v9, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 221
    iput-object v2, v9, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 223
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/l;->d()Z

    move-result v0

    if-eqz v0, :cond_11

    .line 225
    iput v10, v9, Lcom/tkay/core/common/f/q;->a:I

    goto :goto_6

    .line 227
    :cond_11
    iput v11, v9, Lcom/tkay/core/common/f/q;->a:I

    .line 229
    :goto_6
    invoke-virtual {v3, v9, v5}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_7

    :catchall_1
    move-exception v0

    .line 234
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 237
    :cond_12
    :goto_7
    invoke-virtual {v2, v4, v6, v5, v6}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/l;III)V

    :cond_13
    return-void
.end method

.method protected a(Z)V
    .locals 0

    .line 50
    iput-boolean p1, p0, Lcom/tkay/core/b/a;->b:Z

    return-void
.end method

.method public final a()Z
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/tkay/core/b/a;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method protected final a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)Z
    .locals 1

    const/4 v0, 0x0

    .line 255
    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/tkay/core/b/a;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;II)Z

    move-result p1

    return p1
.end method

.method protected final a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;II)Z
    .locals 15

    move-object v1, p0

    move-object/from16 v0, p1

    .line 265
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v2

    const/4 v3, 0x0

    const/4 v4, 0x1

    if-eqz v2, :cond_1

    .line 266
    invoke-virtual {v2}, Lcom/tkay/core/common/f/l;->a()Z

    move-result v5

    if-eqz v5, :cond_0

    goto :goto_0

    :cond_0
    move/from16 v5, p3

    move/from16 v6, p4

    .line 290
    invoke-virtual {v0, v2, v3, v5, v6}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/common/f/l;III)V

    .line 291
    invoke-virtual/range {p1 .. p2}, Lcom/tkay/core/common/f/aj;->h(Ljava/lang/String;)V

    return v4

    :cond_1
    :goto_0
    if-eqz v2, :cond_3

    .line 270
    :try_start_0
    iget-object v5, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v6, v5, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    iget-object v5, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v7, v5, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    const-string v8, ""

    iget-object v5, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v9, v5, Lcom/tkay/core/common/f/ag;->o:Lcom/tkay/core/c/d;

    const-string v10, ""

    const/4 v11, 0x1

    const/4 v12, 0x0

    const/4 v13, 0x0

    .line 271
    iget-object v5, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v5, :cond_2

    iget-object v5, v1, Lcom/tkay/core/b/a;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    iget-object v5, v5, Lcom/tkay/core/common/j;->g:Ljava/util/Map;

    goto :goto_1

    :cond_2
    const/4 v5, 0x0

    :goto_1
    move-object v14, v5

    .line 270
    invoke-static/range {v6 .. v14}, Lcom/tkay/core/common/l/s;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/c/d;Ljava/lang/String;IIILjava/util/Map;)Lcom/tkay/core/common/f/d;

    move-result-object v5

    .line 273
    new-instance v6, Lcom/tkay/core/common/f/q;

    invoke-direct {v6}, Lcom/tkay/core/common/f/q;-><init>()V

    .line 274
    iput v4, v6, Lcom/tkay/core/common/f/q;->a:I

    .line 275
    invoke-virtual {v2}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v7

    iput-wide v7, v6, Lcom/tkay/core/common/f/q;->b:D

    .line 276
    iput-object v5, v6, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    .line 277
    iput-object v0, v6, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 278
    iput-object v0, v6, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 280
    invoke-virtual {v2, v6, v4}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/q;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 286
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_3
    :goto_2
    return v3
.end method

.method protected abstract b()V
.end method

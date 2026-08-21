.class public final Lcom/tkay/core/b/e;
.super Lcom/tkay/core/b/a;


# instance fields
.field private d:Ljava/lang/String;

.field private e:J

.field private f:Lcom/tkay/core/b/b/a;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 0

    .line 37
    invoke-direct {p0, p1}, Lcom/tkay/core/b/a;-><init>(Lcom/tkay/core/common/f/ag;)V

    const-string p1, "IH Bidding"

    .line 32
    iput-object p1, p0, Lcom/tkay/core/b/e;->d:Ljava/lang/String;

    return-void
.end method

.method static synthetic a(Lcom/tkay/core/b/e;Ljava/util/List;)V
    .locals 1

    const/4 v0, -0x1

    .line 31
    invoke-direct {p0, p1, v0}, Lcom/tkay/core/b/e;->a(Ljava/util/List;I)V

    return-void
.end method

.method private declared-synchronized a(Ljava/util/List;I)V
    .locals 22
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;I)V"
        }
    .end annotation

    move-object/from16 v1, p0

    move/from16 v0, p2

    monitor-enter p0

    .line 104
    :try_start_0
    iget-object v2, v1, Lcom/tkay/core/b/e;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v2, :cond_0

    .line 105
    monitor-exit p0

    return-void

    .line 107
    :cond_0
    :try_start_1
    iget-object v2, v1, Lcom/tkay/core/b/e;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    if-nez p1, :cond_1

    .line 110
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    goto :goto_0

    :cond_1
    move-object/from16 v2, p1

    .line 113
    :goto_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    iget-wide v6, v1, Lcom/tkay/core/b/e;->e:J

    sub-long/2addr v4, v6

    .line 114
    new-instance v6, Ljava/util/ArrayList;

    invoke-direct {v6}, Ljava/util/ArrayList;-><init>()V

    .line 115
    iget-object v7, v1, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    iget-object v7, v7, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-interface {v7}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v7

    :cond_2
    :goto_1
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v8

    const/4 v9, 0x0

    if-eqz v8, :cond_8

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Lcom/tkay/core/common/f/aj;

    .line 117
    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v10

    :cond_3
    invoke-interface {v10}, Ljava/util/Iterator;->hasNext()Z

    move-result v11

    if-eqz v11, :cond_5

    invoke-interface {v10}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Lcom/tkay/core/common/f/aj;

    .line 118
    invoke-virtual {v8}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-eqz v12, :cond_3

    .line 119
    invoke-virtual {v11, v4, v5}, Lcom/tkay/core/common/f/aj;->a(J)V

    .line 120
    invoke-virtual {v11, v9}, Lcom/tkay/core/common/f/aj;->g(I)V

    .line 1182
    new-instance v9, Lcom/tkay/core/common/f/l;

    const/4 v14, 0x1

    invoke-virtual {v11}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide v15

    invoke-virtual {v11}, Lcom/tkay/core/common/f/aj;->y()Ljava/lang/String;

    move-result-object v17

    const-string v18, ""

    const-string v19, ""

    const-string v20, ""

    const-string v21, ""

    move-object v13, v9

    invoke-direct/range {v13 .. v21}, Lcom/tkay/core/common/f/l;-><init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 1183
    invoke-virtual {v11}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide v12

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    add-long/2addr v12, v14

    iput-wide v12, v9, Lcom/tkay/core/common/f/l;->f:J

    .line 1184
    invoke-virtual {v11}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide v12

    iput-wide v12, v9, Lcom/tkay/core/common/f/l;->e:J

    .line 1186
    iget-object v10, v1, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    if-eqz v10, :cond_4

    .line 1187
    iget-object v10, v1, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    iget-object v10, v10, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v9, v10}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 1191
    :cond_4
    invoke-virtual {v1, v11, v9}, Lcom/tkay/core/b/e;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/l;)V

    move v9, v3

    :cond_5
    if-nez v9, :cond_2

    const-string v9, "NO_BID_TOKEN"

    .line 127
    invoke-virtual {v8}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v9

    if-eqz v9, :cond_6

    const-string v9, "No Bid Info."

    const-wide/16 v10, 0x0

    const/4 v12, -0x2

    .line 128
    invoke-static {v8, v9, v10, v11, v12}, Lcom/tkay/core/b/e;->b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    goto :goto_2

    :cond_6
    const-string v9, "No Bid Info."

    .line 130
    invoke-static {v8, v9, v4, v5, v0}, Lcom/tkay/core/b/e;->b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    :goto_2
    const-string v9, "No Bid Info."

    .line 132
    invoke-virtual {v1, v8, v9, v0}, Lcom/tkay/core/b/e;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)Z

    move-result v9

    if-eqz v9, :cond_7

    .line 134
    invoke-interface {v2, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_1

    .line 136
    :cond_7
    invoke-interface {v6, v8}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto/16 :goto_1

    .line 142
    :cond_8
    iget-boolean v0, v1, Lcom/tkay/core/b/e;->b:Z

    if-eqz v0, :cond_9

    .line 143
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    const-string v4, "IH Bidding Success List"

    .line 146
    invoke-static {v2}, Lcom/tkay/core/b/e;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v5

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "IH Bidding Fail List"

    .line 147
    invoke-static {v6}, Lcom/tkay/core/b/e;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v5

    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 152
    :catch_0
    :try_start_3
    iget-object v4, v1, Lcom/tkay/core/b/e;->d:Ljava/lang/String;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0, v9}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 156
    :cond_9
    iget-object v0, v1, Lcom/tkay/core/b/e;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, v3}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 158
    iget-object v0, v1, Lcom/tkay/core/b/e;->f:Lcom/tkay/core/b/b/a;

    if-eqz v0, :cond_a

    .line 159
    iget-object v0, v1, Lcom/tkay/core/b/e;->f:Lcom/tkay/core/b/b/a;

    invoke-interface {v0, v2, v6}, Lcom/tkay/core/b/b/a;->a(Ljava/util/List;Ljava/util/List;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 161
    :cond_a
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private b(Lcom/tkay/core/common/f/aj;)V
    .locals 10

    .line 182
    new-instance v9, Lcom/tkay/core/common/f/l;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide v2

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->y()Ljava/lang/String;

    move-result-object v4

    const/4 v1, 0x1

    const-string v5, ""

    const-string v6, ""

    const-string v7, ""

    const-string v8, ""

    move-object v0, v9

    invoke-direct/range {v0 .. v8}, Lcom/tkay/core/common/f/l;-><init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 183
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    add-long/2addr v0, v2

    iput-wide v0, v9, Lcom/tkay/core/common/f/l;->f:J

    .line 184
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide v0

    iput-wide v0, v9, Lcom/tkay/core/common/f/l;->e:J

    .line 186
    iget-object v0, p0, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    if-eqz v0, :cond_0

    .line 187
    iget-object v0, p0, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v9, v0}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 191
    :cond_0
    invoke-virtual {p0, p1, v9}, Lcom/tkay/core/b/e;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/l;)V

    return-void
.end method

.method private static b(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V
    .locals 0

    .line 178
    invoke-static {p0, p1, p2, p3, p4}, Lcom/tkay/core/b/e;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    return-void
.end method


# virtual methods
.method protected final a(Lcom/tkay/core/b/b/a;)V
    .locals 5

    .line 42
    iput-object p1, p0, Lcom/tkay/core/b/e;->f:Lcom/tkay/core/b/b/a;

    .line 43
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/b/e;->e:J

    .line 45
    iget-object v0, p0, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    .line 47
    iget-boolean v1, p0, Lcom/tkay/core/b/e;->b:Z

    const-string v2, "tkay_bidding"

    if-eqz v1, :cond_0

    .line 48
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "Start IH Bidding List"

    .line 50
    invoke-static {v0}, Lcom/tkay/core/b/e;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v4

    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 54
    :catch_0
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v3, 0x0

    invoke-static {v2, v1, v3}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Z)V

    .line 57
    :cond_0
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/b/c;->b()Lcom/tkay/core/api/MediationBidManager;

    move-result-object v1

    if-nez v1, :cond_2

    .line 58
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/f/aj;

    .line 62
    invoke-static {v1}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 64
    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getBidManager()Lcom/tkay/core/api/MediationBidManager;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 66
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/api/MediationBidManager;)V

    .line 73
    :cond_2
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/b/c;->b()Lcom/tkay/core/api/MediationBidManager;

    move-result-object v0

    if-nez v0, :cond_3

    const-string p1, "No BidManager."

    .line 75
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    const/16 v0, -0x9

    .line 76
    invoke-direct {p0, p1, v0}, Lcom/tkay/core/b/e;->a(Ljava/util/List;I)V

    return-void

    .line 80
    :cond_3
    iget-object v1, p0, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/api/MediationBidManager;->setBidRequestUrl(Ljava/lang/String;)V

    .line 81
    iget-object v1, p0, Lcom/tkay/core/b/e;->a:Lcom/tkay/core/common/f/ag;

    new-instance v2, Lcom/tkay/core/b/e$1;

    invoke-direct {v2, p0, p1}, Lcom/tkay/core/b/e$1;-><init>(Lcom/tkay/core/b/e;Lcom/tkay/core/b/b/a;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/api/MediationBidManager;->startBid(Lcom/tkay/core/common/f/ag;Lcom/tkay/core/api/MediationBidManager$BidListener;)V

    return-void
.end method

.method protected final a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V
    .locals 0

    return-void
.end method

.method protected final b()V
    .locals 2

    const/4 v0, 0x0

    const/4 v1, -0x3

    .line 170
    invoke-direct {p0, v0, v1}, Lcom/tkay/core/b/e;->a(Ljava/util/List;I)V

    return-void
.end method

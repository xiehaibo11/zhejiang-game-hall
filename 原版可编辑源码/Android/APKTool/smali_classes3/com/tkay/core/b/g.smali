.class public Lcom/tkay/core/b/g;
.super Lcom/tkay/core/b/a;


# static fields
.field public static final d:Ljava/lang/String;


# instance fields
.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation
.end field

.field private f:Lcom/tkay/core/b/b/a;

.field private g:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 48
    const-class v0, Lcom/tkay/core/b/g;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/core/b/g;->d:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/tkay/core/common/f/ag;)V
    .locals 1

    .line 57
    invoke-direct {p0, p1}, Lcom/tkay/core/b/a;-><init>(Lcom/tkay/core/common/f/ag;)V

    .line 59
    new-instance p1, Ljava/util/ArrayList;

    iget-object v0, p0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    invoke-direct {p1, v0}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    invoke-static {p1}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/b/g;->e:Ljava/util/List;

    return-void
.end method

.method private static a(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;
    .locals 0

    .line 256
    invoke-static {p0}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p0

    return-object p0
.end method

.method private declared-synchronized a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;)V
    .locals 6

    monitor-enter p0

    const/4 v1, 0x0

    const/4 v4, -0x1

    const/4 v5, 0x0

    move-object v0, p0

    move-object v2, p1

    move-object v3, p2

    .line 251
    :try_start_0
    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/b/g;->a(ZLcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/b/c/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 252
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/tkay/core/b/g;ZLcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/b/c/a;)V
    .locals 0

    .line 46
    invoke-direct/range {p0 .. p5}, Lcom/tkay/core/b/g;->a(ZLcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/b/c/a;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;JILcom/tkay/core/b/c/a;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-wide/from16 v3, p3

    move-object/from16 v5, p6

    .line 162
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/k;->isSuccessWithUseType()Z

    move-result v6

    if-eqz v6, :cond_3

    .line 163
    invoke-virtual {v1, v3, v4}, Lcom/tkay/core/common/f/aj;->a(J)V

    .line 164
    iget-object v3, v2, Lcom/tkay/core/common/f/k;->currency:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-virtual {v1, v3}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/api/TYAdConst$CURRENCY;)V

    .line 166
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "C2S Bidding Success: , AdSoruceId:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", NetworkFirmId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " | price:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/k;->getPrice()D

    move-result-wide v6

    invoke-virtual {v3, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, " | sortPrice:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/k;->getSortPrice()D

    move-result-wide v6

    invoke-virtual {v3, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, " | currency:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v2, Lcom/tkay/core/common/f/k;->currency:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-virtual {v4}, Lcom/tkay/core/api/TYAdConst$CURRENCY;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 169
    invoke-virtual/range {p2 .. p2}, Lcom/tkay/core/common/f/k;->getSortPrice()D

    move-result-wide v3

    invoke-virtual {v0, v3, v4, v1}, Lcom/tkay/core/b/g;->a(DLcom/tkay/core/common/f/aj;)D

    move-result-wide v3

    const-wide/16 v6, 0x0

    cmpg-double v8, v3, v6

    if-gtz v8, :cond_0

    .line 172
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v4, "NetworkName:"

    invoke-direct {v3, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ",AdSoruceId:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " c2s price return 0,please check network placement c2s config"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "tkay_bidding"

    invoke-static {v4, v3}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 174
    invoke-static/range {p1 .. p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v3

    :cond_0
    move-wide v10, v3

    .line 178
    new-instance v3, Lcom/tkay/core/common/f/l;

    const/4 v9, 0x1

    iget-object v12, v2, Lcom/tkay/core/common/f/k;->token:Ljava/lang/String;

    iget-object v13, v2, Lcom/tkay/core/common/f/k;->winNoticeUrl:Ljava/lang/String;

    iget-object v14, v2, Lcom/tkay/core/common/f/k;->loseNoticeUrl:Ljava/lang/String;

    iget-object v15, v2, Lcom/tkay/core/common/f/k;->displayNoticeUrl:Ljava/lang/String;

    const-string v16, ""

    move-object v8, v3

    invoke-direct/range {v8 .. v16}, Lcom/tkay/core/common/f/l;-><init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 179
    invoke-virtual/range {p0 .. p1}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v8

    iput-wide v8, v3, Lcom/tkay/core/common/f/l;->l:D

    .line 181
    iget-object v2, v2, Lcom/tkay/core/common/f/k;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/l;->setBiddingNotice(Lcom/tkay/core/api/TYBiddingNotice;)V

    .line 182
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    add-long/2addr v8, v10

    iput-wide v8, v3, Lcom/tkay/core/common/f/l;->f:J

    .line 183
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->n()J

    move-result-wide v8

    iput-wide v8, v3, Lcom/tkay/core/common/f/l;->e:J

    .line 184
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    iput-object v2, v3, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    .line 185
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v2

    iput v2, v3, Lcom/tkay/core/common/f/l;->d:I

    .line 186
    iput-object v5, v3, Lcom/tkay/core/common/f/l;->r:Lcom/tkay/core/b/c/a;

    if-eqz v5, :cond_1

    const/4 v2, 0x1

    goto :goto_0

    :cond_1
    const/4 v2, 0x0

    .line 187
    :goto_0
    iput-boolean v2, v3, Lcom/tkay/core/common/f/l;->s:Z

    .line 189
    iget-object v2, v0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    if-eqz v2, :cond_2

    .line 190
    iget-object v2, v0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v2, v2, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/l;->b(Ljava/lang/String;)V

    .line 193
    :cond_2
    invoke-virtual/range {p1 .. p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v2

    invoke-virtual {v0, v2, v3, v6, v7}, Lcom/tkay/core/b/g;->a(ILcom/tkay/core/common/f/k;D)V

    .line 196
    invoke-virtual {v0, v1, v3}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/l;)V

    .line 198
    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v3, v3, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget v4, v4, Lcom/tkay/core/common/f/ag;->f:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/core/common/l/g;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v3, v4, v1}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    return-void

    .line 201
    :cond_3
    iget-object v2, v2, Lcom/tkay/core/common/f/k;->errorMsg:Ljava/lang/String;

    move/from16 v5, p5

    invoke-static {v1, v2, v3, v4, v5}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;JI)V

    .line 203
    sget-object v2, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v3, v3, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v4, v0, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget v4, v4, Lcom/tkay/core/common/f/ag;->f:I

    invoke-static {v4}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/tkay/core/common/l/g;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v3, v4, v1}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)V

    return-void
.end method

.method private declared-synchronized a(ZLcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/b/c/a;)V
    .locals 11

    move-object v8, p0

    move-object v0, p2

    move-object v9, p3

    monitor-enter p0

    const/4 v10, 0x1

    if-eqz p1, :cond_2

    .line 216
    :try_start_0
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    .line 4188
    iget-object v3, v1, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-eqz v3, :cond_1

    iget-object v1, v1, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_c2sfirstStatus"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    move v3, v1

    goto :goto_1

    :cond_1
    :goto_0
    move v3, v10

    .line 217
    :goto_1
    iget-object v1, v8, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v1, v1, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    iget-wide v6, v8, Lcom/tkay/core/b/g;->g:J

    sub-long/2addr v4, v6

    iget-object v6, v8, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    move-object v2, p3

    invoke-static/range {v1 .. v6}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;ZJLcom/tkay/core/common/f/ag;)V

    .line 220
    :cond_2
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    invoke-virtual {p3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    .line 5181
    iget-object v3, v1, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v3, :cond_3

    .line 5182
    new-instance v3, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v3}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v3, v1, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    .line 5184
    :cond_3
    iget-object v1, v1, Lcom/tkay/core/b/c;->e:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_c2sfirstStatus"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 222
    iget-object v1, v8, Lcom/tkay/core/b/g;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1

    if-nez v1, :cond_8

    .line 223
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, v8, Lcom/tkay/core/b/g;->g:J

    sub-long v4, v1, v3

    move-object v1, p0

    move-object v2, p3

    move-object v3, p2

    move v6, p4

    move-object/from16 v7, p5

    invoke-direct/range {v1 .. v7}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;JILcom/tkay/core/b/c/a;)V

    .line 225
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1, v10}, Ljava/util/ArrayList;-><init>(I)V

    invoke-static {v1}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v1

    .line 226
    invoke-interface {v1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 228
    iget-object v2, v8, Lcom/tkay/core/b/g;->e:Ljava/util/List;

    invoke-interface {v2, p3}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 229
    iget-object v2, v8, Lcom/tkay/core/b/g;->e:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-nez v2, :cond_4

    .line 230
    iget-object v2, v8, Lcom/tkay/core/b/g;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2, v10}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 232
    :cond_4
    iget-object v2, v8, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;

    if-eqz v2, :cond_7

    if-nez p1, :cond_5

    .line 234
    iget-object v0, v0, Lcom/tkay/core/api/TYBiddingResult;->errorMsg:Ljava/lang/String;

    const/4 v2, -0x1

    invoke-virtual {p0, p3, v0, v2}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)Z

    move-result v0

    goto :goto_2

    :cond_5
    move v0, p1

    :goto_2
    const/4 v2, 0x0

    if-eqz v0, :cond_6

    .line 237
    iget-object v0, v8, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;

    invoke-interface {v0, v1, v2}, Lcom/tkay/core/b/b/a;->a(Ljava/util/List;Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    .line 239
    :cond_6
    :try_start_1
    iget-object v0, v8, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;

    invoke-interface {v0, v2, v1}, Lcom/tkay/core/b/b/a;->a(Ljava/util/List;Ljava/util/List;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 243
    :cond_7
    monitor-exit p0

    return-void

    :cond_8
    if-eqz v0, :cond_9

    .line 244
    :try_start_2
    iget-object v1, v0, Lcom/tkay/core/api/TYBiddingResult;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    if-eqz v1, :cond_9

    .line 245
    iget-object v0, v0, Lcom/tkay/core/api/TYBiddingResult;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    const-string v1, "2"

    const-wide/16 v2, 0x0

    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4, v10}, Ljava/util/HashMap;-><init>(I)V

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/tkay/core/api/TYBiddingNotice;->notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 248
    :cond_9
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method protected final a(Lcom/tkay/core/b/b/a;)V
    .locals 17

    move-object/from16 v7, p0

    move-object/from16 v8, p1

    .line 64
    iput-object v8, v7, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;

    .line 66
    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v9, v0, Lcom/tkay/core/common/f/ag;->j:Ljava/util/List;

    .line 67
    invoke-interface {v9}, Ljava/util/List;->size()I

    move-result v10

    .line 69
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, v7, Lcom/tkay/core/b/g;->g:J

    const/4 v11, 0x0

    move v12, v11

    :goto_0
    if-ge v12, v10, :cond_7

    .line 72
    invoke-interface {v9, v12}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    move-object v4, v0

    check-cast v4, Lcom/tkay/core/common/f/aj;

    .line 73
    invoke-static {v4}, Lcom/tkay/core/common/l/i;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v1

    if-nez v1, :cond_0

    .line 76
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Lcom/tkay/core/common/f/aj;->h()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "not exist!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1256
    invoke-static {v0}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v3

    const/4 v2, 0x0

    const/16 v5, -0x9

    const/4 v6, 0x0

    move-object/from16 v1, p0

    .line 77
    invoke-direct/range {v1 .. v6}, Lcom/tkay/core/b/g;->a(ZLcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;ILcom/tkay/core/b/c/a;)V

    goto/16 :goto_4

    .line 82
    :cond_0
    :try_start_0
    new-instance v2, Lcom/tkay/core/b/g$1;

    invoke-direct {v2, v7, v1, v4}, Lcom/tkay/core/b/g$1;-><init>(Lcom/tkay/core/b/g;Lcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/aj;)V

    .line 114
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "start c2s bid request: "

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 115
    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    iget-object v3, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v3, v3, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    .line 116
    iget-object v3, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v3, v3, Lcom/tkay/core/common/f/ag;->e:Ljava/lang/String;

    iget-object v5, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->d:Ljava/lang/String;

    invoke-virtual {v0, v3, v5, v4}, Lcom/tkay/core/c/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f/aj;)Ljava/util/Map;

    move-result-object v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const-wide/16 v5, 0x0

    .line 119
    :try_start_1
    invoke-virtual {v4, v0}, Lcom/tkay/core/common/f/aj;->a(Lcom/tkay/core/c/d;)D

    move-result-wide v13

    cmpl-double v0, v13, v5

    if-lez v0, :cond_1

    .line 121
    invoke-virtual {v7, v4}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v15

    const-string v0, "bid_floor"

    mul-double/2addr v13, v15

    .line 122
    invoke-static {v13, v14}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v13

    invoke-interface {v3, v0, v13}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    :try_start_2
    const-string v13, "tkay_bidding"

    .line 125
    new-instance v14, Ljava/lang/StringBuilder;

    const-string v15, "C2S startBidRequest with exception:"

    invoke-direct {v14, v15}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v14, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v14}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v13, v0}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 132
    :cond_1
    :goto_1
    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->t:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 133
    invoke-static {v0, v4, v11, v11}, Lcom/tkay/core/common/l/s;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;IZ)V

    .line 134
    invoke-static {v3, v0}, Lcom/tkay/core/common/l/g;->a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V

    .line 136
    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget v0, v0, Lcom/tkay/core/common/f/ag;->v:I

    const/16 v13, 0x8

    if-ne v0, v13, :cond_3

    const-string v0, "tkay_dynamic_max_price"

    .line 137
    iget-object v13, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-wide v13, v13, Lcom/tkay/core/common/f/ag;->w:D

    cmpg-double v5, v13, v5

    if-gez v5, :cond_2

    const-string v5, "0"

    goto :goto_2

    :cond_2
    iget-object v5, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-wide v5, v5, Lcom/tkay/core/common/f/ag;->w:D

    invoke-static {v5, v6}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v5

    :goto_2
    invoke-interface {v3, v0, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 141
    :cond_3
    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_4

    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->c:Lcom/tkay/core/common/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/j;->a()Landroid/content/Context;

    move-result-object v0

    goto :goto_3

    :cond_4
    const/4 v0, 0x0

    :goto_3
    if-nez v0, :cond_5

    .line 142
    iget-object v0, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v0, v0, Lcom/tkay/core/common/f/ag;->b:Landroid/content/Context;

    .line 143
    :cond_5
    iget-object v5, v7, Lcom/tkay/core/b/g;->a:Lcom/tkay/core/common/f/ag;

    iget-object v5, v5, Lcom/tkay/core/common/f/ag;->r:Ljava/util/Map;

    invoke-virtual {v1, v0, v3, v5, v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalStartBiddingRequest(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYBiddingListener;)Z

    move-result v0

    .line 145
    invoke-interface {v8, v4, v1}, Lcom/tkay/core/b/b/a;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/api/TYBaseAdAdapter;)V

    if-nez v0, :cond_6

    const-string v0, "This network don\'t support head bidding in current TY\'s version."

    .line 2256
    invoke-static {v0}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    .line 150
    invoke-direct {v7, v0, v4}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_4

    :catchall_1
    move-exception v0

    .line 153
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 154
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    .line 3256
    invoke-static {v0}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    .line 155
    invoke-direct {v7, v0, v4}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/common/f/aj;)V

    :cond_6
    :goto_4
    add-int/lit8 v12, v12, 0x1

    goto/16 :goto_0

    :cond_7
    return-void
.end method

.method protected final a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;J)V
    .locals 7

    const/4 v5, -0x1

    const/4 v6, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-wide v3, p3

    .line 209
    invoke-direct/range {v0 .. v6}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;JILcom/tkay/core/b/c/a;)V

    return-void
.end method

.method public final declared-synchronized b()V
    .locals 12

    monitor-enter p0

    .line 261
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/b/g;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_3

    .line 262
    iget-object v0, p0, Lcom/tkay/core/b/g;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 267
    new-instance v0, Ljava/util/ArrayList;

    const/4 v2, 0x3

    invoke-direct {v0, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 268
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 270
    iget-object v2, p0, Lcom/tkay/core/b/g;->e:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/core/common/f/aj;

    const-string v5, "bid timeout"

    const/4 v6, -0x3

    .line 272
    invoke-virtual {p0, v4, v5, v6}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Ljava/lang/String;I)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 274
    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    const-string v5, "bid timeout!"

    .line 5256
    invoke-static {v5}, Lcom/tkay/core/api/TYBiddingResult;->fail(Ljava/lang/String;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v7

    .line 277
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v5

    iget-wide v8, p0, Lcom/tkay/core/b/g;->g:J

    sub-long v8, v5, v8

    const/4 v10, -0x3

    const/4 v11, 0x0

    move-object v5, p0

    move-object v6, v4

    invoke-direct/range {v5 .. v11}, Lcom/tkay/core/b/g;->a(Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/k;JILcom/tkay/core/b/c/a;)V

    .line 278
    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 281
    :cond_1
    iget-object v2, p0, Lcom/tkay/core/b/g;->e:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->clear()V

    .line 283
    iget-object v2, p0, Lcom/tkay/core/b/g;->c:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 285
    iget-object v1, p0, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;

    if-eqz v1, :cond_2

    .line 286
    iget-object v1, p0, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;

    invoke-interface {v1, v0, v3}, Lcom/tkay/core/b/b/a;->a(Ljava/util/List;Ljava/util/List;)V

    :cond_2
    const/4 v0, 0x0

    .line 289
    iput-object v0, p0, Lcom/tkay/core/b/g;->f:Lcom/tkay/core/b/b/a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 291
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

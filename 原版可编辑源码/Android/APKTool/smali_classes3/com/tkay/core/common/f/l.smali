.class public final Lcom/tkay/core/common/f/l;
.super Lcom/tkay/core/common/f/k;

# interfaces
.implements Ljava/lang/Comparable;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f/k;",
        "Ljava/lang/Comparable<",
        "Lcom/tkay/core/common/f/l;",
        ">;"
    }
.end annotation


# instance fields
.field private A:Z

.field private B:Ljava/lang/String;

.field private C:Ljava/lang/String;

.field private D:Ljava/lang/String;

.field private E:Ljava/lang/String;

.field private F:Ljava/lang/String;

.field private G:Ljava/lang/String;

.field public a:I

.field public b:Ljava/lang/String;

.field public c:Ljava/lang/String;

.field public d:I

.field public e:J

.field public f:J

.field public g:Ljava/lang/String;

.field public h:Ljava/lang/String;

.field public i:Ljava/lang/String;

.field public j:Ljava/lang/String;

.field public k:Ljava/lang/String;

.field public l:D

.field public m:Ljava/lang/String;

.field public n:I

.field public o:D

.field public p:Ljava/lang/String;

.field public q:D

.field public r:Lcom/tkay/core/b/c/a;

.field public s:Z

.field private final t:Ljava/lang/String;

.field private u:Z

.field private final v:Ljava/lang/String;

.field private final w:Ljava/lang/String;

.field private final x:Ljava/lang/String;

.field private final y:Ljava/lang/String;

.field private final z:Ljava/lang/String;


# direct methods
.method public constructor <init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 11

    move-object v10, p0

    .line 82
    sget-object v9, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    move-object v0, p0

    move v1, p1

    move-wide v2, p2

    move-object v4, p4

    move-object/from16 v5, p5

    move-object/from16 v6, p6

    move-object/from16 v7, p7

    move-object/from16 v8, p8

    invoke-direct/range {v0 .. v9}, Lcom/tkay/core/common/f/k;-><init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYAdConst$CURRENCY;)V

    .line 32
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

    iput-object v0, v10, Lcom/tkay/core/common/f/l;->t:Ljava/lang/String;

    const-string v0, "${AUCTION_PRICE}"

    .line 46
    iput-object v0, v10, Lcom/tkay/core/common/f/l;->v:Ljava/lang/String;

    const-string v0, "${AUCTION_LOSS}"

    .line 47
    iput-object v0, v10, Lcom/tkay/core/common/f/l;->w:Ljava/lang/String;

    const-string v0, "${AUCTION_SEAT_ID}"

    .line 48
    iput-object v0, v10, Lcom/tkay/core/common/f/l;->x:Ljava/lang/String;

    const-string v0, "${AUCTION_BID_TO_WIN}"

    .line 49
    iput-object v0, v10, Lcom/tkay/core/common/f/l;->y:Ljava/lang/String;

    const-string v0, "${AUCTION_CURRENCY}"

    .line 50
    iput-object v0, v10, Lcom/tkay/core/common/f/l;->z:Ljava/lang/String;

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/l;)I
    .locals 7

    const/4 v0, -0x1

    if-nez p1, :cond_0

    return v0

    .line 490
    :cond_0
    iget-wide v1, p0, Lcom/tkay/core/common/f/l;->sortPrice:D

    const-wide/16 v3, 0x0

    cmpl-double v1, v1, v3

    if-nez v1, :cond_1

    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v1, v2, v5}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;)D

    move-result-wide v1

    goto :goto_0

    :cond_1
    iget-wide v1, p0, Lcom/tkay/core/common/f/l;->sortPrice:D

    :goto_0
    if-eqz p1, :cond_3

    .line 493
    iget-wide v5, p1, Lcom/tkay/core/common/f/l;->sortPrice:D

    cmpl-double v3, v5, v3

    if-nez v3, :cond_2

    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v3

    iget-object v4, p1, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object p1, p1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v3, v4, p1}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;)D

    move-result-wide v3

    goto :goto_1

    :cond_2
    iget-wide v3, p1, Lcom/tkay/core/common/f/l;->sortPrice:D

    :cond_3
    :goto_1
    cmpl-double p1, v1, v3

    if-lez p1, :cond_4

    return v0

    :cond_4
    const/4 p1, 0x1

    return p1
.end method

.method private a(ZI)I
    .locals 1

    .line 298
    iget v0, p0, Lcom/tkay/core/common/f/l;->d:I

    if-ne p2, v0, :cond_1

    if-nez p1, :cond_0

    const/4 p1, 0x1

    goto :goto_1

    :cond_0
    const/4 p1, 0x4

    goto :goto_1

    :cond_1
    const/16 p1, 0x43

    if-eq p2, p1, :cond_3

    const/16 p1, 0x23

    if-ne v0, p1, :cond_2

    goto :goto_0

    :cond_2
    const/4 p1, 0x2

    goto :goto_1

    :cond_3
    :goto_0
    const/4 p1, 0x3

    :goto_1
    return p1
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/core/common/f/l;
    .locals 18

    const-string v0, "origin_price"

    const-string v1, "s_pty"

    const-string v2, "second_price"

    const-string v3, "ecpm_api"

    const-string v4, "bid_response"

    const-string v5, "price"

    .line 404
    :try_start_0
    new-instance v6, Lorg/json/JSONObject;

    move-object/from16 v7, p0

    invoke-direct {v6, v7}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v7, "is_success"

    .line 405
    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    const/4 v8, 0x1

    if-ne v7, v8, :cond_0

    move v10, v8

    goto :goto_0

    :cond_0
    const/4 v7, 0x0

    move v10, v7

    :goto_0
    const-string v7, "bid_id"

    .line 406
    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    .line 408
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    const-wide/16 v14, 0x0

    if-eqz v7, :cond_1

    .line 409
    invoke-virtual {v6, v5, v14, v15}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v11

    goto :goto_1

    :cond_1
    move-wide v11, v14

    :goto_1
    const-string v5, "nurl"

    .line 411
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string v7, "lurl"

    .line 412
    invoke-virtual {v6, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v9, "burl"

    .line 413
    invoke-virtual {v6, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v16

    const-string v9, "err_msg"

    .line 414
    invoke-virtual {v6, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    .line 416
    new-instance v9, Lcom/tkay/core/common/f/l;

    move-object/from16 p0, v9

    move-object/from16 v9, p0

    move-object v14, v5

    move-object v15, v7

    invoke-direct/range {v9 .. v17}, Lcom/tkay/core/common/f/l;-><init>(ZDLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    const-string v5, "cur"

    .line 417
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    move-object/from16 v7, p0

    iput-object v5, v7, Lcom/tkay/core/common/f/l;->b:Ljava/lang/String;

    const-string v5, "unit_id"

    .line 418
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v7, Lcom/tkay/core/common/f/l;->c:Ljava/lang/String;

    const-string v5, "nw_firm_id"

    .line 419
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    iput v5, v7, Lcom/tkay/core/common/f/l;->d:I

    const-string v5, "err_code"

    .line 420
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    iput v5, v7, Lcom/tkay/core/common/f/l;->a:I

    const-string v5, "expire"

    .line 421
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v9

    iput-wide v9, v7, Lcom/tkay/core/common/f/l;->e:J

    const-string v5, "out_data_time"

    .line 422
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v9

    iput-wide v9, v7, Lcom/tkay/core/common/f/l;->f:J

    const-string v5, "is_send_winurl"

    .line 423
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v5

    iput-boolean v5, v7, Lcom/tkay/core/common/f/l;->u:Z

    const-string v5, "offer_data"

    .line 424
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v7, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    const-string v5, "tp_bid_id"

    .line 425
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v7, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    const-string v5, "burl_win"

    .line 426
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v7, Lcom/tkay/core/common/f/l;->j:Ljava/lang/String;

    const-string v5, "ad_source_id"

    .line 427
    invoke-virtual {v6, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    iput-object v5, v7, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    const-string v5, "cur_rate"

    const-wide/16 v9, 0x0

    .line 429
    invoke-virtual {v6, v5, v9, v10}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v11

    iput-wide v11, v7, Lcom/tkay/core/common/f/l;->l:D

    .line 432
    invoke-virtual {v6, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 433
    invoke-virtual {v6, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    iput-object v4, v7, Lcom/tkay/core/common/f/l;->m:Ljava/lang/String;

    :cond_2
    const-string v4, "ctrl"

    .line 436
    invoke-virtual {v6, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v4

    if-eqz v4, :cond_3

    const-string v5, "hb_preq_sw"

    .line 438
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    iput v4, v7, Lcom/tkay/core/common/f/l;->n:I

    .line 441
    :cond_3
    invoke-virtual {v6, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 442
    invoke-virtual {v6, v3, v9, v10}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v3

    iput-wide v3, v7, Lcom/tkay/core/common/f/l;->o:D

    :cond_4
    const-string v3, "precision"

    .line 445
    invoke-virtual {v6, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v7, Lcom/tkay/core/common/f/l;->p:Ljava/lang/String;

    .line 447
    invoke-virtual {v6, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_5

    .line 448
    invoke-virtual {v6, v2, v9, v10}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v2

    iput-wide v2, v7, Lcom/tkay/core/common/f/l;->q:D

    :cond_5
    const-string v2, "req_url"

    const-string v3, ""

    .line 451
    invoke-virtual {v6, v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v7, Lcom/tkay/core/common/f/l;->h:Ljava/lang/String;

    const-string v2, "bd_type"

    .line 452
    invoke-virtual {v6, v2, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    iput v2, v7, Lcom/tkay/core/common/f/l;->useType:I

    .line 454
    invoke-virtual {v6, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 455
    invoke-virtual {v6, v1, v9, v10}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v1

    iput-wide v1, v7, Lcom/tkay/core/common/f/l;->sortPrice:D

    goto :goto_2

    .line 457
    :cond_6
    iget-wide v1, v7, Lcom/tkay/core/common/f/l;->price:D

    iput-wide v1, v7, Lcom/tkay/core/common/f/l;->sortPrice:D

    .line 460
    :goto_2
    invoke-virtual {v6, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_7

    .line 461
    invoke-virtual {v6, v0, v9, v10}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v0

    iput-wide v0, v7, Lcom/tkay/core/common/f/l;->originPrice:D

    goto :goto_3

    .line 463
    :cond_7
    iget-wide v0, v7, Lcom/tkay/core/common/f/l;->sortPrice:D

    iput-wide v0, v7, Lcom/tkay/core/common/f/l;->originPrice:D

    :goto_3
    const-string v0, "request_id"

    .line 465
    invoke-virtual {v6, v0}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_8

    .line 467
    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v7, Lcom/tkay/core/common/f/l;->B:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_8
    return-object v7

    :catchall_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private a(D)Ljava/lang/String;
    .locals 2

    .line 313
    iget v0, p0, Lcom/tkay/core/common/f/l;->d:I

    const/16 v1, 0x8

    if-eq v0, v1, :cond_1

    const/16 v1, 0x1c

    if-ne v0, v1, :cond_0

    goto :goto_0

    .line 316
    :cond_0
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    :goto_0
    double-to-int p1, p1

    .line 314
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private static a(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const-string p0, "102"

    goto :goto_0

    :cond_0
    const-string p0, "1001"

    :goto_0
    return-object p0
.end method

.method private static a(ILjava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 516
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    const/16 v0, 0x22

    if-ne p0, v0, :cond_1

    .line 519
    sget-object p0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-virtual {p0}, Lcom/tkay/core/api/TYAdConst$CURRENCY;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "${AUCTION_CURRENCY}"

    invoke-virtual {p1, v0, p0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    :cond_1
    return-object p1
.end method

.method private static a(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    .line 579
    invoke-interface {p0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    .line 580
    instance-of p1, p0, Ljava/lang/String;

    if-eqz p1, :cond_0

    .line 581
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    if-eqz p0, :cond_1

    .line 583
    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string p0, ""

    return-object p0
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/aj;D)V
    .locals 12

    monitor-enter p0

    .line 103
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/f/l;->u:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 107
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 114
    :try_start_1
    iput-boolean v0, p0, Lcom/tkay/core/common/f/l;->u:Z

    .line 115
    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->l:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-lez v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->l:D

    mul-double/2addr v0, p2

    goto :goto_0

    :cond_1
    move-wide v0, p2

    .line 116
    :goto_0
    iget-wide v4, p0, Lcom/tkay/core/common/f/l;->l:D

    cmpl-double v2, v4, v2

    if-lez v2, :cond_2

    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/core/common/f/l;->l:D

    mul-double/2addr v2, v4

    goto :goto_1

    :cond_2
    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v2

    .line 126
    :goto_1
    iget-object v4, p0, Lcom/tkay/core/common/f/l;->winNoticeUrl:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/16 v5, 0x1c

    if-nez v4, :cond_4

    .line 127
    iget-object v4, p0, Lcom/tkay/core/common/f/l;->winNoticeUrl:Ljava/lang/String;

    const-string v6, "${AUCTION_BID_TO_WIN}"

    invoke-direct {p0, v0, v1}, Lcom/tkay/core/common/f/l;->a(D)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v6, v7}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    .line 129
    iget v6, p0, Lcom/tkay/core/common/f/l;->d:I

    if-ne v6, v5, :cond_3

    .line 130
    iget-object v4, p0, Lcom/tkay/core/common/f/l;->winNoticeUrl:Ljava/lang/String;

    const-string v6, "${AUCTION_PRICE}"

    invoke-direct {p0, v2, v3}, Lcom/tkay/core/common/f/l;->a(D)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v4, v6, v7}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v4

    .line 133
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v8

    if-eqz p1, :cond_4

    .line 1536
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v6

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v7

    .line 1535
    invoke-static {v4, v6, v7}, Lcom/tkay/core/common/h/f;->a(Ljava/lang/String;ILjava/lang/String;)Lcom/tkay/core/common/h/f;

    move-result-object v4

    move-object v6, p0

    move-object v7, p1

    move-wide v10, p2

    .line 1538
    invoke-direct/range {v6 .. v11}, Lcom/tkay/core/common/f/l;->b(Lcom/tkay/core/common/f/aj;DD)Lcom/tkay/core/common/f/ao;

    move-result-object v6

    invoke-virtual {v4, v6}, Lcom/tkay/core/common/h/f;->a(Lcom/tkay/core/common/f/ao;)V

    const/4 v6, 0x0

    const/4 v7, 0x0

    .line 1539
    invoke-virtual {v4, v6, v7}, Lcom/tkay/core/common/h/f;->a(ILcom/tkay/core/common/h/k;)V

    .line 136
    :cond_4
    iget-object v4, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    if-eqz v4, :cond_6

    .line 138
    iget v4, p0, Lcom/tkay/core/common/f/l;->d:I

    if-ne v4, v5, :cond_5

    .line 139
    iget-object v0, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    invoke-interface {v0, v2, v3}, Lcom/tkay/core/api/TYBiddingNotice;->notifyBidWin(D)V

    goto :goto_2

    .line 141
    :cond_5
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    invoke-interface {v2, v0, v1}, Lcom/tkay/core/api/TYBiddingNotice;->notifyBidWin(D)V

    .line 144
    :goto_2
    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v5

    move-object v3, p0

    move-object v4, p1

    move-wide v7, p2

    .line 1543
    invoke-direct/range {v3 .. v8}, Lcom/tkay/core/common/f/l;->b(Lcom/tkay/core/common/f/aj;DD)Lcom/tkay/core/common/f/ao;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/ao;)V

    .line 149
    :cond_6
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p2

    const/4 p3, 0x3

    if-eq p2, p3, :cond_7

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p1

    const/4 p2, 0x7

    if-ne p1, p2, :cond_8

    .line 150
    :cond_7
    iget-boolean p1, p0, Lcom/tkay/core/common/f/l;->A:Z

    if-nez p1, :cond_8

    .line 151
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    iget-object p1, p0, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-static {p1, p0}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Lcom/tkay/core/common/f/l;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 154
    :cond_8
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Lcom/tkay/core/common/f/aj;DD)V
    .locals 0

    .line 543
    invoke-direct/range {p0 .. p5}, Lcom/tkay/core/common/f/l;->b(Lcom/tkay/core/common/f/aj;DD)Lcom/tkay/core/common/f/ao;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/ao;)V

    return-void
.end method

.method private a(Ljava/lang/String;Lcom/tkay/core/common/f/aj;DD)V
    .locals 6

    if-nez p2, :cond_0

    return-void

    .line 536
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v0

    invoke-virtual {p2}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v1

    .line 535
    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/h/f;->a(Ljava/lang/String;ILjava/lang/String;)Lcom/tkay/core/common/h/f;

    move-result-object p1

    move-object v0, p0

    move-object v1, p2

    move-wide v2, p3

    move-wide v4, p5

    .line 538
    invoke-direct/range {v0 .. v5}, Lcom/tkay/core/common/f/l;->b(Lcom/tkay/core/common/f/aj;DD)Lcom/tkay/core/common/f/ao;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/h/f;->a(Lcom/tkay/core/common/f/ao;)V

    const/4 p2, 0x0

    const/4 p3, 0x0

    .line 539
    invoke-virtual {p1, p2, p3}, Lcom/tkay/core/common/h/f;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method

.method private static b(Lcom/tkay/core/common/f/aj;)I
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 593
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p0

    const/4 v0, 0x2

    if-eq p0, v0, :cond_2

    const/4 v0, 0x5

    if-eq p0, v0, :cond_1

    const/4 v0, 0x6

    if-eq p0, v0, :cond_1

    const/4 v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, 0x3

    :cond_2
    :goto_0
    return v0
.end method

.method private b(Lcom/tkay/core/common/f/aj;DD)Lcom/tkay/core/common/f/ao;
    .locals 8

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    .line 550
    :cond_0
    new-instance v7, Lcom/tkay/core/common/f/ao;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v1

    .line 551
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v2

    move-object v0, v7

    move-wide v3, p2

    move-wide v5, p4

    invoke-direct/range {v0 .. v6}, Lcom/tkay/core/common/f/ao;-><init>(ILjava/lang/String;DD)V

    .line 553
    iget-object p2, p0, Lcom/tkay/core/common/f/l;->B:Ljava/lang/String;

    invoke-virtual {v7, p2}, Lcom/tkay/core/common/f/ao;->c(Ljava/lang/String;)V

    .line 554
    invoke-static {p1}, Lcom/tkay/core/common/f/l;->b(Lcom/tkay/core/common/f/aj;)I

    move-result p1

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->a(I)V

    .line 555
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->f(Ljava/lang/String;)V

    .line 556
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->D:Ljava/lang/String;

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->d(Ljava/lang/String;)V

    .line 557
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->C:Ljava/lang/String;

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->e(Ljava/lang/String;)V

    .line 558
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->E:Ljava/lang/String;

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->g(Ljava/lang/String;)V

    .line 559
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->F:Ljava/lang/String;

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->h(Ljava/lang/String;)V

    .line 560
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->G:Ljava/lang/String;

    invoke-virtual {v7, p1}, Lcom/tkay/core/common/f/ao;->i(Ljava/lang/String;)V

    return-object v7
.end method

.method private b(ZI)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x3

    if-ne p2, v0, :cond_0

    const-string p1, "-1"

    return-object p1

    .line 324
    :cond_0
    iget v0, p0, Lcom/tkay/core/common/f/l;->d:I

    const/16 v1, 0x8

    const/4 v2, 0x1

    if-ne v0, v1, :cond_2

    if-ne p2, v2, :cond_1

    const-string p1, "5"

    return-object p1

    :cond_1
    const-string p1, "1"

    return-object p1

    :cond_2
    const/16 v1, 0x1d

    if-ne v0, v1, :cond_4

    if-ne p2, v2, :cond_3

    const-string p1, "2002"

    return-object p1

    :cond_3
    const-string p1, "2"

    return-object p1

    :cond_4
    const/16 v1, 0x22

    if-ne v0, v1, :cond_5

    .line 341
    invoke-static {p2}, Lcom/tkay/core/common/f/l;->a(I)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_5
    const/16 p2, 0x3b

    const-string v1, "102"

    if-ne v0, p2, :cond_6

    return-object v1

    :cond_6
    if-eqz p1, :cond_7

    return-object v1

    :cond_7
    const-string p1, "103"

    return-object p1
.end method

.method private b(D)V
    .locals 0

    .line 481
    iput-wide p1, p0, Lcom/tkay/core/common/f/l;->q:D

    return-void
.end method

.method private static c(Ljava/lang/String;)V
    .locals 2

    .line 529
    invoke-static {p0}, Lcom/tkay/core/common/h/f;->b(Ljava/lang/String;)Lcom/tkay/core/common/h/f;

    move-result-object p0

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 530
    invoke-virtual {p0, v0, v1}, Lcom/tkay/core/common/h/f;->a(ILcom/tkay/core/common/h/k;)V

    return-void
.end method


# virtual methods
.method public final declared-synchronized a(Lcom/tkay/core/common/f/aj;)V
    .locals 2

    monitor-enter p0

    .line 92
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->q:D

    invoke-direct {p0, p1, v0, v1}, Lcom/tkay/core/common/f/l;->a(Lcom/tkay/core/common/f/aj;D)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 93
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Lcom/tkay/core/common/f/d;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    .line 573
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->U()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/l;->F:Ljava/lang/String;

    .line 574
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->I()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/l;->E:Ljava/lang/String;

    .line 575
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/l;->G:Ljava/lang/String;

    return-void
.end method

.method public final declared-synchronized a(Lcom/tkay/core/common/f/q;Z)V
    .locals 12

    monitor-enter p0

    .line 197
    :try_start_0
    iget v0, p1, Lcom/tkay/core/common/f/q;->a:I

    .line 198
    iget-object v1, p1, Lcom/tkay/core/common/f/q;->d:Lcom/tkay/core/common/f/aj;

    .line 199
    iget-object v2, p1, Lcom/tkay/core/common/f/q;->c:Lcom/tkay/core/common/f/aj;

    .line 200
    iget-wide v3, p1, Lcom/tkay/core/common/f/q;->b:D

    .line 201
    iget-object p1, p1, Lcom/tkay/core/common/f/q;->e:Lcom/tkay/core/common/f/d;

    if-eqz v2, :cond_e

    if-nez v1, :cond_0

    goto/16 :goto_2

    .line 210
    :cond_0
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->j()Z

    move-result v5

    .line 211
    invoke-virtual {v2}, Lcom/tkay/core/common/f/aj;->c()I

    move-result v2

    .line 216
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v6

    invoke-virtual {v6, v1}, Lcom/tkay/core/b/c;->a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/common/f/l;

    move-result-object v6

    const/4 v7, 0x3

    if-eqz p2, :cond_3

    if-eqz v6, :cond_1

    .line 219
    iget-object p2, v6, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    invoke-static {p2, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 223
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object p2

    iget-object v6, p0, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {p2, v6}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;)V

    .line 224
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    iget-object p2, p0, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-static {p2}, Lcom/tkay/core/b/c;->b(Ljava/lang/String;)V

    .line 233
    :cond_1
    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p2

    if-eq p2, v7, :cond_2

    invoke-virtual {v1}, Lcom/tkay/core/common/f/aj;->l()I

    move-result p2

    const/4 v6, 0x7

    if-ne p2, v6, :cond_3

    .line 234
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object p2

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v6

    iget-object v8, p0, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    invoke-virtual {p2, v6, v8}, Lcom/tkay/core/common/a/a;->b(Landroid/content/Context;Ljava/lang/String;)V

    .line 238
    :cond_3
    iget-boolean p2, p0, Lcom/tkay/core/common/f/l;->u:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p2, :cond_4

    .line 242
    monitor-exit p0

    return-void

    :cond_4
    const/4 p2, 0x1

    .line 245
    :try_start_1
    iput-boolean p2, p0, Lcom/tkay/core/common/f/l;->u:Z

    .line 246
    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v8

    cmpg-double p2, v3, v8

    if-gtz p2, :cond_5

    invoke-virtual {p0}, Lcom/tkay/core/common/f/l;->getSortPrice()D

    move-result-wide v3

    const-wide v8, 0x3f847ae147ae147bL    # 0.01

    add-double/2addr v3, v8

    .line 252
    :cond_5
    iget-object p2, p0, Lcom/tkay/core/common/f/l;->loseNoticeUrl:Ljava/lang/String;

    .line 253
    invoke-direct {p0, v5, v0}, Lcom/tkay/core/common/f/l;->b(ZI)Ljava/lang/String;

    move-result-object v0

    .line 255
    invoke-static {p1, v1, v3, v4, v0}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/f/aj;DLjava/lang/String;)V

    .line 257
    iget-wide v8, p0, Lcom/tkay/core/common/f/l;->l:D

    const-wide/16 v10, 0x0

    cmpl-double p1, v8, v10

    if-lez p1, :cond_6

    .line 258
    iget-wide v8, p0, Lcom/tkay/core/common/f/l;->l:D

    mul-double/2addr v3, v8

    :cond_6
    const-string p1, "-1"

    .line 263
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_d

    .line 264
    iget-object p1, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    const/16 v1, 0x8

    if-eqz p1, :cond_8

    .line 265
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1, v7}, Ljava/util/HashMap;-><init>(I)V

    .line 267
    iget v6, p0, Lcom/tkay/core/common/f/l;->d:I

    if-ne v6, v1, :cond_7

    const-string v6, "adn_id"

    .line 268
    invoke-direct {p0, v5, v2}, Lcom/tkay/core/common/f/l;->a(ZI)I

    move-result v7

    invoke-static {v7}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    invoke-interface {p1, v6, v7}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 271
    :cond_7
    iget-object v6, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    invoke-interface {v6, v0, v3, v4, p1}, Lcom/tkay/core/api/TYBiddingNotice;->notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V

    const/4 p1, 0x0

    .line 272
    iput-object p1, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    .line 274
    :cond_8
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_d

    const-string p1, "${AUCTION_PRICE}"

    .line 275
    invoke-direct {p0, v3, v4}, Lcom/tkay/core/common/f/l;->a(D)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2, p1, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "${AUCTION_LOSS}"

    .line 276
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    .line 278
    iget p2, p0, Lcom/tkay/core/common/f/l;->d:I

    if-ne p2, v1, :cond_9

    const-string p2, "${AUCTION_SEAT_ID}"

    .line 279
    invoke-direct {p0, v5, v2}, Lcom/tkay/core/common/f/l;->a(ZI)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    .line 280
    :cond_9
    iget p2, p0, Lcom/tkay/core/common/f/l;->d:I

    const/16 v0, 0x1d

    if-ne p2, v0, :cond_b

    const-string p2, "${AUCTION_SEAT_ID}"

    .line 281
    iget v0, p0, Lcom/tkay/core/common/f/l;->d:I

    if-ne v0, v2, :cond_a

    const-string v0, "1"

    goto :goto_0

    :cond_a
    const-string v0, "10001"

    :goto_0
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    goto :goto_1

    :cond_b
    const-string p2, "${AUCTION_SEAT_ID}"

    const-string v0, ""

    .line 283
    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    .line 286
    :goto_1
    iget p2, p0, Lcom/tkay/core/common/f/l;->d:I

    const/4 v0, 0x6

    if-ne p2, v0, :cond_c

    const-string p2, "${AUCTION_CURRENCY}"

    .line 287
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-virtual {v0}, Lcom/tkay/core/api/TYAdConst$CURRENCY;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    .line 290
    :cond_c
    invoke-static {p1}, Lcom/tkay/core/common/f/l;->c(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 293
    :cond_d
    monitor-exit p0

    return-void

    .line 207
    :cond_e
    :goto_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "offer_id"

    .line 567
    invoke-static {p1, v0}, Lcom/tkay/core/common/f/l;->a(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/l;->C:Ljava/lang/String;

    const-string v0, "dsp_id"

    .line 568
    invoke-static {p1, v0}, Lcom/tkay/core/common/f/l;->a(Ljava/util/Map;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/f/l;->D:Ljava/lang/String;

    return-void
.end method

.method public final declared-synchronized a(ZDZ)V
    .locals 4

    monitor-enter p0

    .line 157
    :try_start_0
    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->l:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-lez v0, :cond_0

    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->l:D

    mul-double/2addr p2, v0

    :cond_0
    if-eqz p1, :cond_2

    .line 160
    iget-object p4, p0, Lcom/tkay/core/common/f/l;->j:Ljava/lang/String;

    .line 161
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 162
    iget-object p4, p0, Lcom/tkay/core/common/f/l;->displayNoticeUrl:Ljava/lang/String;

    .line 165
    :cond_1
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "${AUCTION_PRICE}"

    .line 166
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/common/f/l;->a(D)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p4, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p4

    invoke-static {p4}, Lcom/tkay/core/common/f/l;->c(Ljava/lang/String;)V

    goto :goto_0

    .line 169
    :cond_2
    iget-object v0, p0, Lcom/tkay/core/common/f/l;->displayNoticeUrl:Ljava/lang/String;

    .line 170
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const/4 v1, 0x2

    .line 171
    invoke-direct {p0, p4, v1}, Lcom/tkay/core/common/f/l;->b(ZI)Ljava/lang/String;

    move-result-object p4

    const-string v1, "${AUCTION_PRICE}"

    .line 172
    invoke-direct {p0, p2, p3}, Lcom/tkay/core/common/f/l;->a(D)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "${AUCTION_LOSS}"

    .line 173
    invoke-virtual {v0, v1, p4}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p4

    .line 172
    invoke-static {p4}, Lcom/tkay/core/common/f/l;->c(Ljava/lang/String;)V

    .line 177
    :cond_3
    :goto_0
    iget-object p4, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    if-eqz p4, :cond_4

    .line 178
    iget-object p4, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;

    invoke-interface {p4, p1, p2, p3}, Lcom/tkay/core/api/TYBiddingNotice;->notifyBidDisplay(ZD)V

    if-eqz p1, :cond_4

    const/4 p1, 0x0

    .line 180
    iput-object p1, p0, Lcom/tkay/core/common/f/l;->biddingNotice:Lcom/tkay/core/api/TYBiddingNotice;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 183
    :cond_4
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final a()Z
    .locals 4

    .line 87
    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->f:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final declared-synchronized b()V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x1

    .line 96
    :try_start_0
    iput-boolean v0, p0, Lcom/tkay/core/common/f/l;->A:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 97
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 525
    iput-object p1, p0, Lcom/tkay/core/common/f/l;->B:Ljava/lang/String;

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 4

    .line 356
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "bid_id"

    .line 358
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->token:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "cur"

    .line 359
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "origin_price"

    .line 360
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->originPrice:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "price"

    .line 361
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->price:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "nurl"

    .line 362
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->winNoticeUrl:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "lurl"

    .line 363
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->loseNoticeUrl:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "unit_id"

    .line 364
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "nw_firm_id"

    .line 365
    iget v2, p0, Lcom/tkay/core/common/f/l;->d:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "is_success"

    .line 366
    iget-boolean v2, p0, Lcom/tkay/core/common/f/l;->isSuccess:Z

    if-eqz v2, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "err_code"

    .line 367
    iget v2, p0, Lcom/tkay/core/common/f/l;->a:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "err_msg"

    .line 368
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "expire"

    .line 369
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->e:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "out_data_time"

    .line 370
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->f:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "is_send_winurl"

    .line 371
    iget-boolean v2, p0, Lcom/tkay/core/common/f/l;->u:Z

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "offer_data"

    .line 372
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "tp_bid_id"

    .line 373
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "burl"

    .line 374
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->displayNoticeUrl:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ad_source_id"

    .line 375
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "cur_rate"

    .line 376
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->l:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    .line 378
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "hb_preq_sw"

    .line 379
    iget v3, p0, Lcom/tkay/core/common/f/l;->n:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "ctrl"

    .line 381
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 383
    iget-object v1, p0, Lcom/tkay/core/common/f/l;->m:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "bid_response"

    .line 384
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string v1, "ecpm_api"

    .line 387
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->o:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "precision"

    .line 388
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->p:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "second_price"

    .line 389
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->q:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "req_url"

    .line 390
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->h:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "bd_type"

    .line 391
    iget v2, p0, Lcom/tkay/core/common/f/l;->useType:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "s_pty"

    .line 392
    iget-wide v2, p0, Lcom/tkay/core/common/f/l;->sortPrice:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "request_id"

    .line 393
    iget-object v2, p0, Lcom/tkay/core/common/f/l;->B:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 398
    :catchall_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic compareTo(Ljava/lang/Object;)I
    .locals 7

    .line 30
    check-cast p1, Lcom/tkay/core/common/f/l;

    const/4 v0, -0x1

    if-nez p1, :cond_0

    return v0

    .line 2490
    :cond_0
    iget-wide v1, p0, Lcom/tkay/core/common/f/l;->sortPrice:D

    const-wide/16 v3, 0x0

    cmpl-double v1, v1, v3

    if-nez v1, :cond_1

    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v1, v2, v5}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;)D

    move-result-wide v1

    goto :goto_0

    :cond_1
    iget-wide v1, p0, Lcom/tkay/core/common/f/l;->sortPrice:D

    :goto_0
    if-eqz p1, :cond_3

    .line 2493
    iget-wide v5, p1, Lcom/tkay/core/common/f/l;->sortPrice:D

    cmpl-double v3, v5, v3

    if-nez v3, :cond_2

    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v3

    iget-object v4, p1, Lcom/tkay/core/common/f/l;->g:Ljava/lang/String;

    iget-object p1, p1, Lcom/tkay/core/common/f/l;->k:Ljava/lang/String;

    invoke-virtual {v3, v4, p1}, Lcom/tkay/core/b/c;->a(Ljava/lang/String;Ljava/lang/String;)D

    move-result-wide v3

    goto :goto_1

    :cond_2
    iget-wide v3, p1, Lcom/tkay/core/common/f/l;->sortPrice:D

    :cond_3
    :goto_1
    cmpl-double p1, v1, v3

    if-lez p1, :cond_4

    return v0

    :cond_4
    const/4 p1, 0x1

    return p1
.end method

.method public final d()Z
    .locals 4

    .line 611
    iget-wide v0, p0, Lcom/tkay/core/common/f/l;->price:D

    const-wide/16 v2, 0x0

    cmpl-double v0, v0, v2

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

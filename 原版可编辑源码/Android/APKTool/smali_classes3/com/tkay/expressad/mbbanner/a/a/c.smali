.class public final Lcom/tkay/expressad/mbbanner/a/a/c;
.super Lcom/tkay/expressad/atsignalcommon/bridge/CommonBannerJSBridgeImp;


# static fields
.field private static final b:Ljava/lang/String; = "BannerJSBridgeImpl"


# instance fields
.field private c:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:I

.field private h:Lcom/tkay/expressad/mbbanner/a/c/a;

.field private i:Lcom/tkay/expressad/mbbanner/a/a/b;

.field private j:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 60
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonBannerJSBridgeImp;-><init>()V

    const/4 v0, 0x0

    .line 58
    iput-boolean v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->j:Z

    .line 61
    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->e:Ljava/lang/String;

    .line 62
    iput-object p3, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->f:Ljava/lang/String;

    .line 63
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method private static a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    .locals 19

    move-object/from16 v1, p0

    const-string v2, "resource"

    const-string v3, "message"

    const-string v4, "code"

    const-string v5, "type"

    const-string v6, ""

    .line 380
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7}, Lorg/json/JSONObject;-><init>()V

    const/4 v9, 0x1

    const/4 v10, 0x0

    .line 392
    :try_start_0
    invoke-virtual {v7, v4, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 393
    invoke-virtual {v7, v3, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    move-object/from16 v0, p1

    .line 396
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v11

    if-eqz v11, :cond_b

    .line 397
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_b

    .line 399
    new-instance v12, Lorg/json/JSONArray;

    invoke-direct {v12}, Lorg/json/JSONArray;-><init>()V

    .line 400
    invoke-virtual {v11}, Lorg/json/JSONArray;->length()I

    move-result v13

    move v14, v10

    :goto_0
    if-ge v14, v13, :cond_a

    .line 402
    invoke-virtual {v11, v14}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v0

    const-string v15, "ref"

    .line 403
    invoke-virtual {v0, v15, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v15

    .line 404
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    .line 405
    new-instance v8, Lorg/json/JSONObject;

    invoke-direct {v8}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_4

    const-string v10, "path"

    if-ne v0, v9, :cond_3

    .line 406
    :try_start_1
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v16

    if-nez v16, :cond_3

    .line 408
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 409
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/l;->a()Lcom/tkay/expressad/videocommon/b/l;

    invoke-static {v15}, Lcom/tkay/expressad/videocommon/b/l;->b(Ljava/lang/String;)Lcom/tkay/core/common/a/i;

    move-result-object v16

    if-eqz v16, :cond_2

    .line 412
    invoke-virtual {v0, v5, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v9, "videoDataLength"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_4

    move-object/from16 v17, v3

    move-object/from16 v18, v4

    .line 414
    :try_start_2
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/core/common/a/i;->d()J

    move-result-wide v3

    invoke-virtual {v0, v9, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    .line 415
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/core/common/a/i;->b()Ljava/lang/String;

    move-result-object v3

    .line 416
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const-string v9, "path4Web"

    if-eqz v4, :cond_0

    .line 418
    :try_start_3
    invoke-virtual {v0, v10, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 419
    invoke-virtual {v0, v9, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 422
    :cond_0
    invoke-virtual {v0, v10, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 424
    invoke-virtual {v0, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 432
    :goto_1
    invoke-virtual/range {v16 .. v16}, Lcom/tkay/core/common/a/i;->c()I

    move-result v3
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    const/16 v4, 0x64

    const-string v9, "downloaded"

    if-ne v3, v4, :cond_1

    const/4 v3, 0x1

    .line 433
    :try_start_4
    invoke-virtual {v0, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const/4 v3, 0x0

    goto :goto_2

    :cond_1
    const/4 v3, 0x0

    .line 435
    invoke-virtual {v0, v9, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 437
    :goto_2
    invoke-virtual {v8, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 438
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto/16 :goto_6

    :cond_2
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    const/4 v3, 0x0

    goto/16 :goto_6

    :cond_3
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    const/4 v3, 0x0

    const/4 v4, 0x2

    if-ne v0, v4, :cond_5

    .line 442
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_5

    .line 444
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 445
    invoke-virtual {v0, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 446
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v4

    invoke-virtual {v4, v15}, Lcom/tkay/expressad/videocommon/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-nez v4, :cond_4

    move-object v4, v6

    goto :goto_3

    :cond_4
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v4

    invoke-virtual {v4, v15}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    :goto_3
    invoke-virtual {v0, v10, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 447
    invoke-virtual {v8, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 448
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto/16 :goto_6

    :cond_5
    const/4 v4, 0x3

    if-ne v0, v4, :cond_7

    .line 449
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    if-nez v9, :cond_7

    .line 454
    :try_start_5
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v15}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 455
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v9

    if-eqz v9, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v9

    if-eqz v9, :cond_6

    invoke-virtual {v0}, Ljava/io/File;->canRead()Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "file:////"

    .line 457
    invoke-static {v15}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v0, v9}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 460
    :try_start_6
    sget-boolean v9, Lcom/tkay/expressad/b;->a:Z

    if-eqz v9, :cond_6

    .line 461
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_6
    move-object v0, v6

    .line 464
    :goto_4
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9}, Lorg/json/JSONObject;-><init>()V

    .line 465
    invoke-virtual {v9, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 466
    invoke-virtual {v9, v10, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 467
    invoke-virtual {v8, v15, v9}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 468
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_6

    :cond_7
    const/4 v4, 0x4

    if-ne v0, v4, :cond_9

    .line 469
    invoke-static {v15}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_9

    .line 471
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 472
    invoke-virtual {v0, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 473
    invoke-static {v15}, Lcom/tkay/expressad/foundation/h/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-nez v4, :cond_8

    move-object v4, v6

    goto :goto_5

    :cond_8
    invoke-static {v15}, Lcom/tkay/expressad/foundation/h/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    :goto_5
    invoke-virtual {v0, v10, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 474
    invoke-virtual {v8, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 475
    invoke-virtual {v12, v8}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_9
    :goto_6
    add-int/lit8 v14, v14, 0x1

    move v10, v3

    move-object/from16 v3, v17

    move-object/from16 v4, v18

    const/4 v9, 0x1

    goto/16 :goto_0

    :cond_a
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    .line 478
    invoke-virtual {v7, v2, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 479
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    move-object/from16 v3, v17

    move-object/from16 v2, v18

    goto :goto_8

    :cond_b
    move-object/from16 v17, v3

    move-object/from16 v18, v4

    move-object/from16 v2, v18

    const/4 v3, 0x1

    .line 482
    :try_start_7
    invoke-virtual {v7, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "resource is null"
    :try_end_7
    .catch Lorg/json/JSONException; {:try_start_7 .. :try_end_7} :catch_1
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    move-object/from16 v3, v17

    .line 483
    :try_start_8
    invoke-virtual {v7, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 484
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    const/4 v5, 0x2

    invoke-static {v4, v5}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v1, v4}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_8
    .catch Lorg/json/JSONException; {:try_start_8 .. :try_end_8} :catch_0
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    return-void

    :catch_0
    move-exception v0

    goto :goto_7

    :catchall_2
    move-exception v0

    move-object/from16 v3, v17

    goto :goto_8

    :catch_1
    move-exception v0

    move-object/from16 v3, v17

    .line 486
    :goto_7
    :try_start_9
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    return-void

    :catchall_3
    move-exception v0

    goto :goto_8

    :catchall_4
    move-exception v0

    move-object v2, v4

    :goto_8
    const/4 v4, 0x1

    .line 491
    :try_start_a
    invoke-virtual {v7, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 492
    invoke-virtual {v0}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v7, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 493
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    const/4 v3, 0x2

    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_a
    .catch Lorg/json/JSONException; {:try_start_a .. :try_end_a} :catch_2

    return-void

    :catch_2
    move-exception v0

    .line 495
    invoke-virtual {v0}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 91
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 92
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    .line 95
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->i:Lcom/tkay/expressad/mbbanner/a/a/b;

    if-eqz v0, :cond_1

    .line 96
    iput-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->i:Lcom/tkay/expressad/mbbanner/a/a/b;

    :cond_1
    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 87
    iput p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->g:I

    return-void
.end method

.method public final a(Lcom/tkay/expressad/mbbanner/a/c/a;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 73
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    :cond_0
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 83
    iput-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    return-void
.end method

.method public final click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 156
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 160
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 161
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 163
    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_4

    .line 169
    :try_start_1
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 170
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pt"

    .line 171
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 172
    invoke-virtual {p2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 173
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 174
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 175
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 176
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 178
    :cond_2
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p2

    const-string v1, "unitId"

    .line 179
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 180
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 181
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 185
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 187
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz p2, :cond_4

    .line 188
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_4
    return-void
.end method

.method public final close()V
    .locals 1

    .line 296
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz v0, :cond_0

    .line 297
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {v0}, Lcom/tkay/expressad/mbbanner/a/c/a;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final expand(Ljava/lang/String;Z)V
    .locals 4

    :try_start_0
    const-string v0, ""

    .line 332
    invoke-virtual {p0}, Lcom/tkay/expressad/mbbanner/a/a/c;->getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 333
    invoke-virtual {p0}, Lcom/tkay/expressad/mbbanner/a/a/c;->getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 334
    invoke-virtual {p0}, Lcom/tkay/expressad/mbbanner/a/a/c;->getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->p()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 335
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "file:////"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/expressad/mbbanner/a/a/c;->getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->q()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 338
    :cond_1
    :goto_0
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const-string v2, "url"

    .line 339
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    move-object p1, v0

    :cond_2
    invoke-virtual {v1, v2, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "shouldUseCustomClose"

    .line 340
    invoke-virtual {v1, p1, p2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 342
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->c:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_4

    .line 343
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/Context;

    if-eqz p1, :cond_4

    .line 345
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->i:Lcom/tkay/expressad/mbbanner/a/a/b;

    if-eqz p2, :cond_3

    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->i:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-virtual {p2}, Lcom/tkay/expressad/mbbanner/a/a/b;->isShowing()Z

    move-result p2

    if-eqz p2, :cond_3

    return-void

    .line 349
    :cond_3
    new-instance p2, Lcom/tkay/expressad/mbbanner/a/a/b;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-direct {p2, p1, v1, v0}, Lcom/tkay/expressad/mbbanner/a/a/b;-><init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/tkay/expressad/mbbanner/a/c/a;)V

    iput-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->i:Lcom/tkay/expressad/mbbanner/a/a/b;

    .line 350
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->f:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/b;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 351
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->i:Lcom/tkay/expressad/mbbanner/a/a/b;

    invoke-virtual {p1}, Lcom/tkay/expressad/mbbanner/a/a/b;->show()V

    .line 355
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz p1, :cond_5

    .line 356
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    const/4 p2, 0x1

    invoke-interface {p1, p2}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_5
    return-void
.end method

.method public final getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 368
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is empty"

    .line 369
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 373
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/mbbanner/a/a/c;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 375
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public final getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 2

    .line 311
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 312
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 123
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 124
    new-instance v0, Lcom/tkay/expressad/foundation/h/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/foundation/h/c;-><init>(Landroid/content/Context;)V

    .line 125
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "dev_close_state"

    .line 126
    iget v3, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->g:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "sdkSetting"

    .line 127
    invoke-virtual {p2, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device"

    .line 128
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/h/c;->a()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "campaignList"

    .line 129
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/c;->b(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 130
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 131
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->f:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    if-nez v0, :cond_0

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->f:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    .line 135
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 136
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->e(Ljava/lang/String;)V

    :cond_1
    const-string v1, "unitSetting"

    .line 138
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->s()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 139
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 140
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    const-string v0, "appSetting"

    .line 142
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 145
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 146
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public final open(Ljava/lang/String;)V
    .locals 5

    const/4 v0, 0x0

    .line 277
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x1

    if-le v1, v2, :cond_0

    .line 278
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    new-instance v3, Landroid/content/Intent;

    const-string v4, "android.intent.action.VIEW"

    .line 279
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-direct {v3, v4, p1}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    invoke-virtual {v1, v3}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    move-object p1, v0

    .line 284
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz v0, :cond_1

    .line 285
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {v0, v2, p1}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(ZLjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public final readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 105
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 106
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 108
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->codeToJsonString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 110
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz p1, :cond_0

    .line 111
    iget-object p1, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {p1, p2}, Lcom/tkay/expressad/mbbanner/a/c/a;->b(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_0
    return-void
.end method

.method public final sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 234
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 235
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 236
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, 0x0

    .line 237
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 238
    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 239
    iget-object v2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->d:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    .line 240
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 241
    iget-object v4, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->f:Ljava/lang/String;

    const-string v5, "banner"

    invoke-static {v4, v3, v5}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 243
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catchall_0
    :cond_2
    return-void
.end method

.method public final toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 200
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 201
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 202
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 203
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz p2, :cond_0

    .line 204
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public final triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 216
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 217
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 218
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    .line 219
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz p2, :cond_0

    .line 220
    iget-object p2, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {p2}, Lcom/tkay/expressad/mbbanner/a/c/a;->a()V

    .line 222
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->codeToJsonString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    .line 226
    :catchall_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, -0x1

    invoke-static {v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->codeToJsonString(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public final unload()V
    .locals 0

    .line 306
    invoke-virtual {p0}, Lcom/tkay/expressad/mbbanner/a/a/c;->close()V

    return-void
.end method

.method public final useCustomClose(Z)V
    .locals 1

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 320
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    if-eqz v0, :cond_1

    .line 321
    iget-object v0, p0, Lcom/tkay/expressad/mbbanner/a/a/c;->h:Lcom/tkay/expressad/mbbanner/a/c/a;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/mbbanner/a/c/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

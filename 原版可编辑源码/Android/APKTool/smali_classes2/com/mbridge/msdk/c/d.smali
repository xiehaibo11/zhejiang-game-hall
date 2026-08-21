.class public final Lcom/mbridge/msdk/c/d;
.super Ljava/lang/Object;
.source "UnitSetting.java"


# static fields
.field public static a:Ljava/lang/String;


# instance fields
.field private A:J

.field private B:J

.field private C:I

.field private D:I

.field private E:I

.field private F:I

.field private G:Ljava/lang/String;

.field private H:I

.field private I:I

.field private J:Ljava/lang/String;

.field private K:Ljava/lang/String;

.field private L:I

.field private M:I

.field private N:I

.field private O:I

.field private P:I

.field private Q:Ljava/lang/String;

.field private R:Ljava/lang/String;

.field private b:I

.field private c:I

.field private d:I

.field private e:I

.field private f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private i:J

.field private j:I

.field private k:I

.field private l:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private m:I

.field private n:I

.field private o:I

.field private p:I

.field private q:D

.field private r:Ljava/lang/String;

.field private s:I

.field private t:I

.field private u:I

.field private v:I

.field private w:I

.field private x:J

.field private y:Ljava/lang/String;

.field private z:I


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x1e

    .line 43
    iput v0, p0, Lcom/mbridge/msdk/c/d;->e:I

    const/4 v0, 0x1

    .line 55
    iput v0, p0, Lcom/mbridge/msdk/c/d;->j:I

    const-wide/high16 v1, 0x3ff0000000000000L    # 1.0

    .line 66
    iput-wide v1, p0, Lcom/mbridge/msdk/c/d;->q:D

    .line 72
    iput v0, p0, Lcom/mbridge/msdk/c/d;->t:I

    const/16 v1, 0x1388

    .line 77
    iput v1, p0, Lcom/mbridge/msdk/c/d;->u:I

    const/16 v1, 0x3c

    .line 115
    iput v1, p0, Lcom/mbridge/msdk/c/d;->C:I

    const-string v2, ""

    .line 126
    iput-object v2, p0, Lcom/mbridge/msdk/c/d;->G:Ljava/lang/String;

    const/16 v3, 0xa

    .line 136
    iput v3, p0, Lcom/mbridge/msdk/c/d;->H:I

    .line 143
    iput v1, p0, Lcom/mbridge/msdk/c/d;->I:I

    .line 144
    iput-object v2, p0, Lcom/mbridge/msdk/c/d;->J:Ljava/lang/String;

    .line 146
    iput-object v2, p0, Lcom/mbridge/msdk/c/d;->K:Ljava/lang/String;

    .line 186
    iput v0, p0, Lcom/mbridge/msdk/c/d;->L:I

    const/16 v0, 0x64

    .line 215
    iput v0, p0, Lcom/mbridge/msdk/c/d;->M:I

    const/4 v0, 0x0

    .line 217
    iput v0, p0, Lcom/mbridge/msdk/c/d;->N:I

    return-void
.end method

.method public static b(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 8

    const-string v0, ""

    const/4 v1, 0x0

    .line 495
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    .line 496
    new-instance v2, Lcom/mbridge/msdk/c/d;

    invoke-direct {v2}, Lcom/mbridge/msdk/c/d;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 499
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "unitId"

    .line 500
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 2465
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    const-string p0, "atzu"

    .line 501
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 3162
    sput-object p0, Lcom/mbridge/msdk/c/d;->a:Ljava/lang/String;

    const-string p0, "ab_id"

    .line 502
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 4153
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->J:Ljava/lang/String;

    .line 4154
    sget-object v3, Lcom/mbridge/msdk/foundation/controller/a;->b:Ljava/util/HashMap;

    iget-object v4, v2, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    invoke-virtual {v3, v4, p0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "adSourceList"

    .line 503
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    const/4 v3, 0x0

    if-eqz p0, :cond_1

    .line 504
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_1

    .line 505
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    move v5, v3

    .line 506
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v5, v6, :cond_0

    .line 507
    invoke-virtual {p0, v5}, Lorg/json/JSONArray;->optInt(I)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 4481
    :cond_0
    iput-object v4, v2, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    :cond_1
    const-string p0, "ad_source_timeout"

    .line 511
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 512
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_3

    .line 513
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    move v5, v3

    .line 514
    :goto_1
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v5, v6, :cond_2

    .line 515
    invoke-virtual {p0, v5}, Lorg/json/JSONArray;->optInt(I)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 4489
    :cond_2
    iput-object v4, v2, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    :cond_3
    const-string p0, "tpqn"

    .line 519
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 5421
    iput p0, v2, Lcom/mbridge/msdk/c/d;->m:I

    const-string p0, "aqn"

    .line 520
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 5429
    iput p0, v2, Lcom/mbridge/msdk/c/d;->n:I

    const-string p0, "acn"

    .line 521
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 5437
    iput p0, v2, Lcom/mbridge/msdk/c/d;->o:I

    const-string p0, "wt"

    .line 522
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 6378
    iput p0, v2, Lcom/mbridge/msdk/c/d;->p:I

    const-string p0, "iscasf"

    const/4 v4, 0x1

    .line 523
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6386
    iput p0, v2, Lcom/mbridge/msdk/c/d;->t:I

    const-string p0, "spmxrt"

    const/16 v5, 0x1388

    .line 524
    invoke-virtual {v1, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6394
    iput p0, v2, Lcom/mbridge/msdk/c/d;->u:I

    const-string p0, "ttc_type"

    .line 525
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 6457
    iput p0, v2, Lcom/mbridge/msdk/c/d;->k:I

    const-string p0, "fbPlacementId"

    .line 526
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 6473
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->g:Ljava/lang/String;

    const-string p0, "current_time"

    .line 527
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v5

    .line 6645
    iput-wide v5, v2, Lcom/mbridge/msdk/c/d;->i:J

    const-string p0, "offset"

    .line 528
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 6653
    iput p0, v2, Lcom/mbridge/msdk/c/d;->j:I

    const-string p0, "admobUnitId"

    .line 529
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 7413
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->Q:Ljava/lang/String;

    const-string p0, "myTargetSlotId"

    .line 530
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 8405
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->R:Ljava/lang/String;

    const-string p0, "dlct"

    const-wide/16 v5, 0xe10

    .line 531
    invoke-virtual {v1, p0, v5, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v5

    .line 9330
    iput-wide v5, v2, Lcom/mbridge/msdk/c/d;->x:J

    const-string p0, "autoplay"

    .line 533
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 10322
    iput p0, v2, Lcom/mbridge/msdk/c/d;->v:I

    const-string p0, "dlnet"

    const/4 v5, 0x2

    .line 534
    invoke-virtual {v1, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 11314
    iput p0, v2, Lcom/mbridge/msdk/c/d;->w:I

    const-string p0, "no_offer"

    .line 535
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 12298
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->y:Ljava/lang/String;

    const-string p0, "cb_type"

    .line 536
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 12306
    iput p0, v2, Lcom/mbridge/msdk/c/d;->z:I

    const-string p0, "clct"

    const-wide/32 v6, 0x15180

    .line 537
    invoke-virtual {v1, p0, v6, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v6

    .line 13282
    iput-wide v6, v2, Lcom/mbridge/msdk/c/d;->A:J

    const-string p0, "clcq"

    const-wide/16 v6, 0x12c

    .line 538
    invoke-virtual {v1, p0, v6, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v6

    .line 13290
    iput-wide v6, v2, Lcom/mbridge/msdk/c/d;->B:J

    const-string p0, "ready_rate"

    const/16 v6, 0x64

    .line 540
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 14258
    iput p0, v2, Lcom/mbridge/msdk/c/d;->M:I

    const-string p0, "cd_rate"

    .line 541
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 14266
    iput p0, v2, Lcom/mbridge/msdk/c/d;->N:I

    const-string p0, "content"

    .line 542
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 14274
    iput p0, v2, Lcom/mbridge/msdk/c/d;->O:I

    const-string p0, "impt"

    .line 543
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 15226
    iput p0, v2, Lcom/mbridge/msdk/c/d;->P:I

    const-string p0, "cbp"

    const-wide/high16 v6, 0x3ff0000000000000L    # 1.0

    .line 544
    invoke-virtual {v1, p0, v6, v7}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v6

    .line 15234
    iput-wide v6, v2, Lcom/mbridge/msdk/c/d;->q:D

    const-string p0, "icon_type"

    .line 546
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 15250
    iput p0, v2, Lcom/mbridge/msdk/c/d;->s:I

    const-string p0, "no_ads_url"

    .line 547
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 16242
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->r:Ljava/lang/String;

    const-string p0, "playclosebtn_tm"

    const/4 v6, -0x1

    .line 549
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16338
    iput p0, v2, Lcom/mbridge/msdk/c/d;->b:I

    const-string p0, "play_ctdown"

    .line 550
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16346
    iput p0, v2, Lcom/mbridge/msdk/c/d;->c:I

    const-string p0, "close_alert"

    .line 551
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16354
    iput p0, v2, Lcom/mbridge/msdk/c/d;->d:I

    const-string p0, "intershowlimit"

    const/16 v6, 0x1e

    .line 552
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 16365
    iput p0, v2, Lcom/mbridge/msdk/c/d;->e:I

    const-string p0, "refreshFq"

    const/16 v6, 0x3c

    .line 553
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 17201
    iput p0, v2, Lcom/mbridge/msdk/c/d;->C:I

    const-string p0, "closeBtn"

    .line 554
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 17209
    iput p0, v2, Lcom/mbridge/msdk/c/d;->D:I

    const-string p0, "tmorl"

    .line 556
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-gt p0, v5, :cond_5

    if-gtz p0, :cond_4

    goto :goto_2

    :cond_4
    move v4, p0

    .line 18193
    :cond_5
    :goto_2
    iput v4, v2, Lcom/mbridge/msdk/c/d;->L:I

    const-string p0, "placementid"

    .line 560
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 18834
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->G:Ljava/lang/String;

    const-string p0, "ltafemty"

    const/16 v3, 0xa

    .line 562
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 18842
    iput p0, v2, Lcom/mbridge/msdk/c/d;->H:I

    const-string p0, "ltorwc"

    .line 563
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 18850
    iput p0, v2, Lcom/mbridge/msdk/c/d;->I:I

    const-string p0, "vtag"

    .line 565
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 18858
    iput-object p0, v2, Lcom/mbridge/msdk/c/d;->K:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-object v1, v2

    goto :goto_4

    :catch_0
    move-exception p0

    move-object v1, v2

    goto :goto_3

    :catch_1
    move-exception p0

    .line 568
    :goto_3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_4
    return-object v1
.end method

.method public static c(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 1

    .line 659
    invoke-static {}, Lcom/mbridge/msdk/c/d;->l()Lcom/mbridge/msdk/c/d;

    move-result-object p0

    const/4 v0, 0x0

    .line 19322
    iput v0, p0, Lcom/mbridge/msdk/c/d;->v:I

    return-object p0
.end method

.method public static d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 7

    .line 666
    new-instance v0, Lcom/mbridge/msdk/c/d;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/d;-><init>()V

    .line 667
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x1

    .line 668
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 669
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    const/16 v4, 0x8

    .line 670
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 671
    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v4, 0x2

    .line 19457
    iput v4, v0, Lcom/mbridge/msdk/c/d;->k:I

    .line 19653
    iput v2, v0, Lcom/mbridge/msdk/c/d;->j:I

    .line 20465
    iput-object p0, v0, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    .line 20481
    iput-object v1, v0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    .line 20489
    iput-object v3, v0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    .line 21421
    iput v2, v0, Lcom/mbridge/msdk/c/d;->m:I

    const/4 p0, -0x2

    .line 21437
    iput p0, v0, Lcom/mbridge/msdk/c/d;->o:I

    .line 22429
    iput p0, v0, Lcom/mbridge/msdk/c/d;->n:I

    const/4 p0, 0x5

    .line 23378
    iput p0, v0, Lcom/mbridge/msdk/c/d;->p:I

    const-wide/16 v5, 0xe10

    .line 24330
    iput-wide v5, v0, Lcom/mbridge/msdk/c/d;->x:J

    .line 25314
    iput v4, v0, Lcom/mbridge/msdk/c/d;->w:I

    .line 25322
    iput v2, v0, Lcom/mbridge/msdk/c/d;->v:I

    const/16 p0, 0x64

    .line 26258
    iput p0, v0, Lcom/mbridge/msdk/c/d;->M:I

    const/4 p0, 0x0

    .line 26266
    iput p0, v0, Lcom/mbridge/msdk/c/d;->N:I

    .line 26274
    iput v2, v0, Lcom/mbridge/msdk/c/d;->O:I

    .line 27226
    iput p0, v0, Lcom/mbridge/msdk/c/d;->P:I

    const/16 p0, 0x3c

    .line 28201
    iput p0, v0, Lcom/mbridge/msdk/c/d;->C:I

    const/16 v1, 0xa

    .line 28842
    iput v1, v0, Lcom/mbridge/msdk/c/d;->H:I

    .line 28850
    iput p0, v0, Lcom/mbridge/msdk/c/d;->I:I

    return-object v0
.end method

.method public static e(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 4

    .line 697
    new-instance v0, Lcom/mbridge/msdk/c/d;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/d;-><init>()V

    .line 699
    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x1

    .line 700
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 29481
    iput-object v1, v0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    .line 703
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/16 v3, 0x1e

    .line 704
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 29489
    iput-object v1, v0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    .line 30465
    iput-object p0, v0, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    const/4 p0, 0x2

    .line 31457
    iput p0, v0, Lcom/mbridge/msdk/c/d;->k:I

    .line 31653
    iput v2, v0, Lcom/mbridge/msdk/c/d;->j:I

    .line 32421
    iput v2, v0, Lcom/mbridge/msdk/c/d;->m:I

    const/4 v1, -0x2

    .line 32437
    iput v1, v0, Lcom/mbridge/msdk/c/d;->o:I

    .line 33429
    iput v1, v0, Lcom/mbridge/msdk/c/d;->n:I

    const/4 v1, 0x5

    .line 34378
    iput v1, v0, Lcom/mbridge/msdk/c/d;->p:I

    const-wide/16 v1, 0xe10

    .line 35330
    iput-wide v1, v0, Lcom/mbridge/msdk/c/d;->x:J

    .line 36314
    iput p0, v0, Lcom/mbridge/msdk/c/d;->w:I

    const/4 p0, 0x3

    .line 36322
    iput p0, v0, Lcom/mbridge/msdk/c/d;->v:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 720
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public static f(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;
    .locals 3

    .line 755
    new-instance v0, Lcom/mbridge/msdk/c/d;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/d;-><init>()V

    .line 36465
    :try_start_0
    iput-object p0, v0, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    const/4 p0, 0x2

    .line 37457
    iput p0, v0, Lcom/mbridge/msdk/c/d;->k:I

    const/4 v1, 0x1

    .line 37653
    iput v1, v0, Lcom/mbridge/msdk/c/d;->j:I

    .line 38421
    iput v1, v0, Lcom/mbridge/msdk/c/d;->m:I

    const/4 v2, 0x5

    .line 39378
    iput v2, v0, Lcom/mbridge/msdk/c/d;->p:I

    .line 39457
    iput p0, v0, Lcom/mbridge/msdk/c/d;->k:I

    .line 40437
    iput v1, v0, Lcom/mbridge/msdk/c/d;->o:I

    .line 41429
    iput v1, v0, Lcom/mbridge/msdk/c/d;->n:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 767
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method public static l()Lcom/mbridge/msdk/c/d;
    .locals 1

    .line 369
    new-instance v0, Lcom/mbridge/msdk/c/d;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/d;-><init>()V

    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 149
    iget-object v0, p0, Lcom/mbridge/msdk/c/d;->J:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 169
    iput p1, p0, Lcom/mbridge/msdk/c/d;->E:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 465
    iput-object p1, p0, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 197
    iget v0, p0, Lcom/mbridge/msdk/c/d;->C:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 177
    iput p1, p0, Lcom/mbridge/msdk/c/d;->F:I

    return-void
.end method

.method public final c()I
    .locals 1

    .line 205
    iget v0, p0, Lcom/mbridge/msdk/c/d;->D:I

    return v0
.end method

.method public final c(I)V
    .locals 0

    .line 322
    iput p1, p0, Lcom/mbridge/msdk/c/d;->v:I

    return-void
.end method

.method public final d()I
    .locals 1

    .line 222
    iget v0, p0, Lcom/mbridge/msdk/c/d;->P:I

    return v0
.end method

.method public final e()D
    .locals 2

    .line 230
    iget-wide v0, p0, Lcom/mbridge/msdk/c/d;->q:D

    return-wide v0
.end method

.method public final f()I
    .locals 1

    .line 254
    iget v0, p0, Lcom/mbridge/msdk/c/d;->M:I

    return v0
.end method

.method public final g()I
    .locals 1

    .line 262
    iget v0, p0, Lcom/mbridge/msdk/c/d;->N:I

    return v0
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    .line 834
    iput-object p1, p0, Lcom/mbridge/msdk/c/d;->G:Ljava/lang/String;

    return-void
.end method

.method public final h()I
    .locals 1

    .line 270
    iget v0, p0, Lcom/mbridge/msdk/c/d;->O:I

    return v0
.end method

.method public final i()J
    .locals 2

    .line 310
    iget-wide v0, p0, Lcom/mbridge/msdk/c/d;->x:J

    return-wide v0
.end method

.method public final j()I
    .locals 1

    .line 318
    iget v0, p0, Lcom/mbridge/msdk/c/d;->v:I

    return v0
.end method

.method public final k()I
    .locals 1

    .line 326
    iget v0, p0, Lcom/mbridge/msdk/c/d;->w:I

    return v0
.end method

.method public final m()I
    .locals 1

    .line 374
    iget v0, p0, Lcom/mbridge/msdk/c/d;->p:I

    return v0
.end method

.method public final n()I
    .locals 1

    .line 382
    iget v0, p0, Lcom/mbridge/msdk/c/d;->t:I

    return v0
.end method

.method public final o()I
    .locals 1

    .line 390
    iget v0, p0, Lcom/mbridge/msdk/c/d;->u:I

    return v0
.end method

.method public final p()I
    .locals 1

    .line 425
    iget v0, p0, Lcom/mbridge/msdk/c/d;->n:I

    return v0
.end method

.method public final q()I
    .locals 1

    .line 433
    iget v0, p0, Lcom/mbridge/msdk/c/d;->o:I

    return v0
.end method

.method public final r()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 477
    iget-object v0, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    return-object v0
.end method

.method public final s()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 485
    iget-object v0, p0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    return-object v0
.end method

.method public final t()Lorg/json/JSONObject;
    .locals 6

    .line 574
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 576
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 577
    iget-object v1, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    .line 578
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    move v4, v2

    :goto_0
    if-ge v4, v1, :cond_0

    .line 580
    iget-object v5, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v3, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_0
    const-string v1, "adSourceList"

    .line 582
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 585
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 586
    iget-object v1, p0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    .line 587
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    :goto_1
    if-ge v2, v1, :cond_2

    .line 589
    iget-object v4, p0, Lcom/mbridge/msdk/c/d;->l:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v3, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    const-string v1, "ad_source_timeout"

    .line 591
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "tpqn"

    .line 594
    iget v2, p0, Lcom/mbridge/msdk/c/d;->m:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "aqn"

    .line 595
    iget v2, p0, Lcom/mbridge/msdk/c/d;->n:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "acn"

    .line 596
    iget v2, p0, Lcom/mbridge/msdk/c/d;->o:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "wt"

    .line 597
    iget v2, p0, Lcom/mbridge/msdk/c/d;->p:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ttc_type"

    .line 598
    iget v2, p0, Lcom/mbridge/msdk/c/d;->k:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "fbPlacementId"

    .line 599
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "current_time"

    .line 600
    iget-wide v2, p0, Lcom/mbridge/msdk/c/d;->i:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "offset"

    .line 601
    iget v2, p0, Lcom/mbridge/msdk/c/d;->j:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "admobUnitId"

    .line 602
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->Q:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "myTargetSlotId"

    .line 603
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->R:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "dlct"

    .line 604
    iget-wide v2, p0, Lcom/mbridge/msdk/c/d;->x:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "autoplay"

    .line 605
    iget v2, p0, Lcom/mbridge/msdk/c/d;->v:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "dlnet"

    .line 606
    iget v2, p0, Lcom/mbridge/msdk/c/d;->w:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "no_offer"

    .line 607
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "cb_type"

    .line 608
    iget v2, p0, Lcom/mbridge/msdk/c/d;->z:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "clct"

    .line 609
    iget-wide v2, p0, Lcom/mbridge/msdk/c/d;->A:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "clcq"

    .line 610
    iget-wide v2, p0, Lcom/mbridge/msdk/c/d;->B:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "ready_rate"

    .line 611
    iget v2, p0, Lcom/mbridge/msdk/c/d;->M:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "content"

    .line 612
    iget v2, p0, Lcom/mbridge/msdk/c/d;->O:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "impt"

    .line 613
    iget v2, p0, Lcom/mbridge/msdk/c/d;->P:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "cbp"

    .line 614
    iget-wide v2, p0, Lcom/mbridge/msdk/c/d;->q:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "icon_type"

    .line 615
    iget v2, p0, Lcom/mbridge/msdk/c/d;->s:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "no_ads_url"

    .line 616
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->r:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "playclosebtn_tm"

    .line 618
    iget v2, p0, Lcom/mbridge/msdk/c/d;->b:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "play_ctdown"

    .line 619
    iget v2, p0, Lcom/mbridge/msdk/c/d;->c:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "close_alert"

    .line 620
    iget v2, p0, Lcom/mbridge/msdk/c/d;->d:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "closeBtn"

    .line 621
    iget v2, p0, Lcom/mbridge/msdk/c/d;->D:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "refreshFq"

    .line 622
    iget v2, p0, Lcom/mbridge/msdk/c/d;->C:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "countdown"

    .line 624
    iget v2, p0, Lcom/mbridge/msdk/c/d;->F:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "allowSkip"

    .line 625
    iget v2, p0, Lcom/mbridge/msdk/c/d;->E:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tmorl"

    .line 626
    iget v2, p0, Lcom/mbridge/msdk/c/d;->L:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "unitId"

    .line 627
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "placementid"

    .line 628
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->G:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ltafemty"

    .line 630
    iget v2, p0, Lcom/mbridge/msdk/c/d;->H:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ltorwc"

    .line 631
    iget v2, p0, Lcom/mbridge/msdk/c/d;->I:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "vtag"

    .line 633
    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->K:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 635
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-object v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 4

    .line 444
    iget-object v0, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    const-string v1, ""

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 445
    iget-object v0, p0, Lcom/mbridge/msdk/c/d;->h:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 446
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    .line 449
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "offset = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 1649
    iget v2, p0, Lcom/mbridge/msdk/c/d;->j:I

    .line 449
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " unitId = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->f:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " fbPlacementId = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/c/d;->g:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final u()J
    .locals 2

    .line 641
    iget-wide v0, p0, Lcom/mbridge/msdk/c/d;->i:J

    return-wide v0
.end method

.method public final v()I
    .locals 1

    .line 649
    iget v0, p0, Lcom/mbridge/msdk/c/d;->j:I

    return v0
.end method

.method public final w()I
    .locals 1

    .line 838
    iget v0, p0, Lcom/mbridge/msdk/c/d;->H:I

    return v0
.end method

.method public final x()I
    .locals 1

    .line 846
    iget v0, p0, Lcom/mbridge/msdk/c/d;->I:I

    return v0
.end method

.method public final y()Ljava/lang/String;
    .locals 1

    .line 854
    iget-object v0, p0, Lcom/mbridge/msdk/c/d;->K:Ljava/lang/String;

    return-object v0
.end method

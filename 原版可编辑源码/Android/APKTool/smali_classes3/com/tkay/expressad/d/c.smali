.class public final Lcom/tkay/expressad/d/c;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field public static final d:I = 0x3


# instance fields
.field private A:Ljava/lang/String;

.field private B:I

.field private C:J

.field private D:J

.field private E:I

.field private F:I

.field private G:I

.field private H:I

.field private I:Ljava/lang/String;

.field private J:I

.field private K:I

.field private L:D

.field private M:I

.field private N:I

.field private O:I

.field private P:I

.field private Q:I

.field private e:I

.field private f:I

.field private g:I

.field private h:I

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private l:J

.field private m:I

.field private n:I

.field private o:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field

.field private p:I

.field private q:I

.field private r:I

.field private s:I

.field private t:Ljava/lang/String;

.field private u:I

.field private v:I

.field private w:I

.field private x:I

.field private y:I

.field private z:J


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x1e

    .line 19
    iput v0, p0, Lcom/tkay/expressad/d/c;->h:I

    const/4 v0, 0x1

    .line 29
    iput v0, p0, Lcom/tkay/expressad/d/c;->m:I

    .line 38
    iput v0, p0, Lcom/tkay/expressad/d/c;->v:I

    const/16 v1, 0x1388

    .line 39
    iput v1, p0, Lcom/tkay/expressad/d/c;->w:I

    const/16 v1, 0x3c

    .line 49
    iput v1, p0, Lcom/tkay/expressad/d/c;->E:I

    const-string v2, ""

    .line 56
    iput-object v2, p0, Lcom/tkay/expressad/d/c;->I:Ljava/lang/String;

    const/16 v2, 0xa

    .line 58
    iput v2, p0, Lcom/tkay/expressad/d/c;->J:I

    .line 60
    iput v1, p0, Lcom/tkay/expressad/d/c;->K:I

    const-wide/high16 v1, 0x3ff0000000000000L    # 1.0

    .line 63
    iput-wide v1, p0, Lcom/tkay/expressad/d/c;->L:D

    .line 89
    iput v0, p0, Lcom/tkay/expressad/d/c;->M:I

    const/4 v0, 0x0

    .line 118
    iput v0, p0, Lcom/tkay/expressad/d/c;->O:I

    return-void
.end method

.method private A()I
    .locals 1

    .line 82
    iget v0, p0, Lcom/tkay/expressad/d/c;->H:I

    return v0
.end method

.method private B()I
    .locals 1

    .line 92
    iget v0, p0, Lcom/tkay/expressad/d/c;->M:I

    return v0
.end method

.method private C()I
    .locals 1

    .line 123
    iget v0, p0, Lcom/tkay/expressad/d/c;->Q:I

    return v0
.end method

.method private D()Ljava/lang/String;
    .locals 1

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->t:Ljava/lang/String;

    return-object v0
.end method

.method private E()I
    .locals 1

    .line 139
    iget v0, p0, Lcom/tkay/expressad/d/c;->u:I

    return v0
.end method

.method private F()I
    .locals 1

    .line 171
    iget v0, p0, Lcom/tkay/expressad/d/c;->P:I

    return v0
.end method

.method private G()J
    .locals 2

    .line 179
    iget-wide v0, p0, Lcom/tkay/expressad/d/c;->C:J

    return-wide v0
.end method

.method private H()J
    .locals 2

    .line 187
    iget-wide v0, p0, Lcom/tkay/expressad/d/c;->D:J

    return-wide v0
.end method

.method private I()Ljava/lang/String;
    .locals 1

    .line 195
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->A:Ljava/lang/String;

    return-object v0
.end method

.method private J()I
    .locals 1

    .line 203
    iget v0, p0, Lcom/tkay/expressad/d/c;->B:I

    return v0
.end method

.method private K()I
    .locals 1

    .line 235
    iget v0, p0, Lcom/tkay/expressad/d/c;->e:I

    return v0
.end method

.method private L()I
    .locals 1

    .line 243
    iget v0, p0, Lcom/tkay/expressad/d/c;->f:I

    return v0
.end method

.method private M()I
    .locals 1

    .line 251
    iget v0, p0, Lcom/tkay/expressad/d/c;->g:I

    return v0
.end method

.method private N()I
    .locals 2

    .line 259
    iget v0, p0, Lcom/tkay/expressad/d/c;->h:I

    if-lez v0, :cond_0

    const/16 v1, 0x64

    if-le v0, v1, :cond_1

    :cond_0
    const/16 v0, 0x1e

    .line 260
    iput v0, p0, Lcom/tkay/expressad/d/c;->h:I

    .line 262
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/d/c;->h:I

    return v0
.end method

.method private static O()Lcom/tkay/expressad/d/c;
    .locals 1

    .line 270
    new-instance v0, Lcom/tkay/expressad/d/c;

    invoke-direct {v0}, Lcom/tkay/expressad/d/c;-><init>()V

    return-object v0
.end method

.method private P()I
    .locals 1

    .line 275
    iget v0, p0, Lcom/tkay/expressad/d/c;->s:I

    return v0
.end method

.method private Q()I
    .locals 1

    .line 283
    iget v0, p0, Lcom/tkay/expressad/d/c;->v:I

    return v0
.end method

.method private R()I
    .locals 1

    .line 291
    iget v0, p0, Lcom/tkay/expressad/d/c;->w:I

    return v0
.end method

.method private S()I
    .locals 1

    .line 299
    iget v0, p0, Lcom/tkay/expressad/d/c;->p:I

    return v0
.end method

.method private T()I
    .locals 1

    .line 307
    iget v0, p0, Lcom/tkay/expressad/d/c;->q:I

    return v0
.end method

.method private U()I
    .locals 1

    .line 315
    iget v0, p0, Lcom/tkay/expressad/d/c;->r:I

    return v0
.end method

.method private V()Ljava/lang/String;
    .locals 1

    .line 334
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    return-object v0
.end method

.method private W()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 342
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    return-object v0
.end method

.method private X()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 350
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    return-object v0
.end method

.method private Y()J
    .locals 2

    .line 488
    iget-wide v0, p0, Lcom/tkay/expressad/d/c;->l:J

    return-wide v0
.end method

.method private Z()I
    .locals 1

    .line 504
    iget v0, p0, Lcom/tkay/expressad/d/c;->n:I

    return v0
.end method

.method private a(D)V
    .locals 0

    .line 70
    iput-wide p1, p0, Lcom/tkay/expressad/d/c;->L:D

    return-void
.end method

.method private a(J)V
    .locals 0

    .line 183
    iput-wide p1, p0, Lcom/tkay/expressad/d/c;->C:J

    return-void
.end method

.method private aa()Ljava/lang/String;
    .locals 1

    .line 599
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->I:Ljava/lang/String;

    return-object v0
.end method

.method private ab()I
    .locals 1

    .line 607
    iget v0, p0, Lcom/tkay/expressad/d/c;->J:I

    return v0
.end method

.method private ac()I
    .locals 1

    .line 615
    iget v0, p0, Lcom/tkay/expressad/d/c;->K:I

    return v0
.end method

.method public static b(Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 8

    const-string v0, ""

    const/4 v1, 0x0

    .line 360
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    .line 361
    new-instance v2, Lcom/tkay/expressad/d/c;

    invoke-direct {v2}, Lcom/tkay/expressad/d/c;-><init>()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 364
    :try_start_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "unitId"

    .line 365
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 2338
    iput-object p0, v2, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    const-string p0, "adSourceList"

    .line 366
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    const/4 v3, 0x0

    if-eqz p0, :cond_1

    .line 367
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_1

    .line 368
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    move v5, v3

    .line 369
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v5, v6, :cond_0

    .line 370
    invoke-virtual {p0, v5}, Lorg/json/JSONArray;->optInt(I)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 2346
    :cond_0
    iput-object v4, v2, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    :cond_1
    const-string p0, "ad_source_timeout"

    .line 374
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 375
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-lez v4, :cond_3

    .line 376
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    move v5, v3

    .line 377
    :goto_1
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v5, v6, :cond_2

    .line 378
    invoke-virtual {p0, v5}, Lorg/json/JSONArray;->optInt(I)I

    move-result v6

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    invoke-interface {v4, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 2354
    :cond_2
    iput-object v4, v2, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    :cond_3
    const-string p0, "tpqn"

    .line 382
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 3303
    iput p0, v2, Lcom/tkay/expressad/d/c;->p:I

    const-string p0, "aqn"

    .line 383
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 3311
    iput p0, v2, Lcom/tkay/expressad/d/c;->q:I

    const-string p0, "acn"

    .line 384
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 3319
    iput p0, v2, Lcom/tkay/expressad/d/c;->r:I

    const-string p0, "wt"

    .line 385
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 4279
    iput p0, v2, Lcom/tkay/expressad/d/c;->s:I

    const-string p0, "iscasf"

    const/4 v4, 0x1

    .line 386
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4287
    iput p0, v2, Lcom/tkay/expressad/d/c;->v:I

    const-string p0, "spmxrt"

    const/16 v5, 0x1388

    .line 387
    invoke-virtual {v1, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 4295
    iput p0, v2, Lcom/tkay/expressad/d/c;->w:I

    const-string p0, "current_time"

    .line 388
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v5

    .line 4492
    iput-wide v5, v2, Lcom/tkay/expressad/d/c;->l:J

    const-string p0, "offset"

    .line 389
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 4500
    iput p0, v2, Lcom/tkay/expressad/d/c;->m:I

    const-string p0, "dlct"

    const-wide/16 v5, 0xe10

    .line 390
    invoke-virtual {v1, p0, v5, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v5

    .line 5231
    iput-wide v5, v2, Lcom/tkay/expressad/d/c;->z:J

    const-string p0, "autoplay"

    .line 391
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 6223
    iput p0, v2, Lcom/tkay/expressad/d/c;->x:I

    const-string p0, "dlnet"

    const/4 v5, 0x2

    .line 392
    invoke-virtual {v1, p0, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 7215
    iput p0, v2, Lcom/tkay/expressad/d/c;->y:I

    const-string p0, "no_offer"

    .line 393
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 8199
    iput-object p0, v2, Lcom/tkay/expressad/d/c;->A:Ljava/lang/String;

    const-string p0, "cb_type"

    .line 394
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    .line 8207
    iput p0, v2, Lcom/tkay/expressad/d/c;->B:I

    const-string p0, "clct"

    const-wide/32 v6, 0x15180

    .line 395
    invoke-virtual {v1, p0, v6, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v6

    .line 9183
    iput-wide v6, v2, Lcom/tkay/expressad/d/c;->C:J

    const-string p0, "clcq"

    const-wide/16 v6, 0x12c

    .line 396
    invoke-virtual {v1, p0, v6, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v6

    .line 9191
    iput-wide v6, v2, Lcom/tkay/expressad/d/c;->D:J

    const-string p0, "ready_rate"

    const/16 v6, 0x64

    .line 398
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/expressad/d/c;->c(I)V

    const-string p0, "cd_rate"

    .line 399
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/expressad/d/c;->d(I)V

    const-string p0, "content"

    .line 400
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 10175
    iput p0, v2, Lcom/tkay/expressad/d/c;->P:I

    const-string p0, "impt"

    .line 401
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 11127
    iput p0, v2, Lcom/tkay/expressad/d/c;->Q:I

    const-string p0, "icon_type"

    .line 402
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 11143
    iput p0, v2, Lcom/tkay/expressad/d/c;->u:I

    const-string p0, "no_ads_url"

    .line 403
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 12135
    iput-object p0, v2, Lcom/tkay/expressad/d/c;->t:Ljava/lang/String;

    const-string p0, "playclosebtn_tm"

    const/4 v6, -0x1

    .line 405
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 12239
    iput p0, v2, Lcom/tkay/expressad/d/c;->e:I

    const-string p0, "play_ctdown"

    .line 406
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 12247
    iput p0, v2, Lcom/tkay/expressad/d/c;->f:I

    const-string p0, "close_alert"

    .line 407
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 12255
    iput p0, v2, Lcom/tkay/expressad/d/c;->g:I

    const-string p0, "intershowlimit"

    const/16 v6, 0x1e

    .line 408
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 12266
    iput p0, v2, Lcom/tkay/expressad/d/c;->h:I

    const-string p0, "refreshFq"

    const/16 v6, 0x3c

    .line 409
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 13104
    iput p0, v2, Lcom/tkay/expressad/d/c;->E:I

    const-string p0, "closeBtn"

    .line 410
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 13112
    iput p0, v2, Lcom/tkay/expressad/d/c;->F:I

    const-string p0, "tmorl"

    .line 412
    invoke-virtual {v1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    if-gt p0, v5, :cond_5

    if-gtz p0, :cond_4

    goto :goto_2

    :cond_4
    move v4, p0

    .line 14096
    :cond_5
    :goto_2
    iput v4, v2, Lcom/tkay/expressad/d/c;->M:I

    const-string p0, "placementid"

    .line 416
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 14603
    iput-object p0, v2, Lcom/tkay/expressad/d/c;->I:Ljava/lang/String;

    const-string p0, "ltafemty"

    const/16 v0, 0xa

    .line 418
    invoke-virtual {v1, p0, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 14611
    iput p0, v2, Lcom/tkay/expressad/d/c;->J:I

    const-string p0, "ltorwc"

    .line 419
    invoke-virtual {v1, p0, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    .line 14619
    iput p0, v2, Lcom/tkay/expressad/d/c;->K:I
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

    .line 422
    :goto_3
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_6
    :goto_4
    return-object v1
.end method

.method private b(J)V
    .locals 0

    .line 191
    iput-wide p1, p0, Lcom/tkay/expressad/d/c;->D:J

    return-void
.end method

.method public static c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 5

    .line 512
    new-instance v0, Lcom/tkay/expressad/d/c;

    invoke-direct {v0}, Lcom/tkay/expressad/d/c;-><init>()V

    .line 513
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x1

    .line 514
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 515
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    const/16 v4, 0x8

    .line 516
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 517
    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 15500
    iput v2, v0, Lcom/tkay/expressad/d/c;->m:I

    .line 16338
    iput-object p0, v0, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    .line 16346
    iput-object v1, v0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    .line 16354
    iput-object v3, v0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    .line 17303
    iput v2, v0, Lcom/tkay/expressad/d/c;->p:I

    const/4 p0, -0x2

    .line 17319
    iput p0, v0, Lcom/tkay/expressad/d/c;->r:I

    .line 18311
    iput p0, v0, Lcom/tkay/expressad/d/c;->q:I

    const/4 p0, 0x5

    .line 19279
    iput p0, v0, Lcom/tkay/expressad/d/c;->s:I

    const-wide/16 v3, 0xe10

    .line 20231
    iput-wide v3, v0, Lcom/tkay/expressad/d/c;->z:J

    const/4 p0, 0x2

    .line 21215
    iput p0, v0, Lcom/tkay/expressad/d/c;->y:I

    .line 21223
    iput v2, v0, Lcom/tkay/expressad/d/c;->x:I

    const/16 p0, 0x64

    .line 529
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/d/c;->c(I)V

    const/4 p0, 0x0

    .line 530
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/d/c;->d(I)V

    .line 22175
    iput v2, v0, Lcom/tkay/expressad/d/c;->P:I

    .line 23127
    iput p0, v0, Lcom/tkay/expressad/d/c;->Q:I

    const/16 p0, 0x3c

    .line 24104
    iput p0, v0, Lcom/tkay/expressad/d/c;->E:I

    const/16 v1, 0xa

    .line 24611
    iput v1, v0, Lcom/tkay/expressad/d/c;->J:I

    .line 24619
    iput p0, v0, Lcom/tkay/expressad/d/c;->K:I

    return-object v0
.end method

.method private static c(Ljava/util/List;)Ljava/util/Queue;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 567
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    if-eqz p0, :cond_1

    .line 569
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 570
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    if-eqz v1, :cond_0

    .line 572
    invoke-interface {v0, v1}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 577
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method private c(J)V
    .locals 0

    .line 492
    iput-wide p1, p0, Lcom/tkay/expressad/d/c;->l:J

    return-void
.end method

.method public static d(Ljava/lang/String;)Lcom/tkay/expressad/d/c;
    .locals 4

    .line 540
    new-instance v0, Lcom/tkay/expressad/d/c;

    invoke-direct {v0}, Lcom/tkay/expressad/d/c;-><init>()V

    .line 542
    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/4 v2, 0x1

    .line 543
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 25346
    iput-object v1, v0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    .line 546
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    const/16 v3, 0x1e

    .line 547
    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 25354
    iput-object v1, v0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    .line 26338
    iput-object p0, v0, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    .line 26500
    iput v2, v0, Lcom/tkay/expressad/d/c;->m:I

    .line 27303
    iput v2, v0, Lcom/tkay/expressad/d/c;->p:I

    const/4 p0, -0x2

    .line 27319
    iput p0, v0, Lcom/tkay/expressad/d/c;->r:I

    .line 28311
    iput p0, v0, Lcom/tkay/expressad/d/c;->q:I

    const/4 p0, 0x5

    .line 29279
    iput p0, v0, Lcom/tkay/expressad/d/c;->s:I

    const-wide/16 v1, 0xe10

    .line 30231
    iput-wide v1, v0, Lcom/tkay/expressad/d/c;->z:J

    const/4 p0, 0x2

    .line 31215
    iput p0, v0, Lcom/tkay/expressad/d/c;->y:I

    const/4 p0, 0x3

    .line 31223
    iput p0, v0, Lcom/tkay/expressad/d/c;->x:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 561
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method private d(Ljava/util/List;)Ljava/util/Queue;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)",
            "Ljava/util/Queue<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    .line 583
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    .line 585
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 586
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    if-eqz v1, :cond_0

    .line 588
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    mul-int/lit16 v1, v1, 0x3e8

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Queue;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 593
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-object v0
.end method

.method private e(I)V
    .locals 0

    .line 96
    iput p1, p0, Lcom/tkay/expressad/d/c;->M:I

    return-void
.end method

.method private f(I)V
    .locals 0

    .line 112
    iput p1, p0, Lcom/tkay/expressad/d/c;->F:I

    return-void
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 135
    iput-object p1, p0, Lcom/tkay/expressad/d/c;->t:Ljava/lang/String;

    return-void
.end method

.method private g(I)V
    .locals 0

    .line 143
    iput p1, p0, Lcom/tkay/expressad/d/c;->u:I

    return-void
.end method

.method private g(Ljava/lang/String;)V
    .locals 0

    .line 199
    iput-object p1, p0, Lcom/tkay/expressad/d/c;->A:Ljava/lang/String;

    return-void
.end method

.method private h(I)V
    .locals 0

    .line 207
    iput p1, p0, Lcom/tkay/expressad/d/c;->B:I

    return-void
.end method

.method private i(I)V
    .locals 0

    .line 239
    iput p1, p0, Lcom/tkay/expressad/d/c;->e:I

    return-void
.end method

.method private j(I)V
    .locals 0

    .line 247
    iput p1, p0, Lcom/tkay/expressad/d/c;->f:I

    return-void
.end method

.method private k(I)V
    .locals 0

    .line 255
    iput p1, p0, Lcom/tkay/expressad/d/c;->g:I

    return-void
.end method

.method private l(I)V
    .locals 0

    .line 266
    iput p1, p0, Lcom/tkay/expressad/d/c;->h:I

    return-void
.end method

.method private m(I)V
    .locals 0

    .line 287
    iput p1, p0, Lcom/tkay/expressad/d/c;->v:I

    return-void
.end method

.method private n(I)V
    .locals 0

    .line 295
    iput p1, p0, Lcom/tkay/expressad/d/c;->w:I

    return-void
.end method

.method public static y()Lcom/tkay/expressad/d/c;
    .locals 2

    .line 31270
    new-instance v0, Lcom/tkay/expressad/d/c;

    invoke-direct {v0}, Lcom/tkay/expressad/d/c;-><init>()V

    const/4 v1, 0x0

    .line 32223
    iput v1, v0, Lcom/tkay/expressad/d/c;->x:I

    return-object v0
.end method

.method private z()I
    .locals 1

    .line 74
    iget v0, p0, Lcom/tkay/expressad/d/c;->G:I

    return v0
.end method


# virtual methods
.method public final a()D
    .locals 2

    .line 66
    iget-wide v0, p0, Lcom/tkay/expressad/d/c;->L:D

    return-wide v0
.end method

.method public final a(I)V
    .locals 0

    .line 78
    iput p1, p0, Lcom/tkay/expressad/d/c;->G:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 338
    iput-object p1, p0, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 346
    iput-object p1, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    return-void
.end method

.method public final b()I
    .locals 1

    .line 100
    iget v0, p0, Lcom/tkay/expressad/d/c;->E:I

    return v0
.end method

.method public final b(I)V
    .locals 0

    .line 86
    iput p1, p0, Lcom/tkay/expressad/d/c;->H:I

    return-void
.end method

.method public final b(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;)V"
        }
    .end annotation

    .line 354
    iput-object p1, p0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    return-void
.end method

.method public final c()V
    .locals 1

    const/16 v0, 0x3c

    .line 104
    iput v0, p0, Lcom/tkay/expressad/d/c;->E:I

    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 152
    :try_start_0
    iput p1, p0, Lcom/tkay/expressad/d/c;->N:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    const/16 p1, 0x64

    .line 154
    iput p1, p0, Lcom/tkay/expressad/d/c;->N:I

    return-void
.end method

.method public final d()I
    .locals 1

    .line 108
    iget v0, p0, Lcom/tkay/expressad/d/c;->F:I

    return v0
.end method

.method public final d(I)V
    .locals 0

    .line 164
    :try_start_0
    iput p1, p0, Lcom/tkay/expressad/d/c;->O:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    const/4 p1, 0x0

    .line 166
    iput p1, p0, Lcom/tkay/expressad/d/c;->O:I

    return-void
.end method

.method public final e()V
    .locals 1

    const/4 v0, 0x0

    .line 127
    iput v0, p0, Lcom/tkay/expressad/d/c;->Q:I

    return-void
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    .line 603
    iput-object p1, p0, Lcom/tkay/expressad/d/c;->I:Ljava/lang/String;

    return-void
.end method

.method public final f()I
    .locals 1

    .line 147
    iget v0, p0, Lcom/tkay/expressad/d/c;->N:I

    return v0
.end method

.method public final g()I
    .locals 1

    .line 159
    iget v0, p0, Lcom/tkay/expressad/d/c;->O:I

    return v0
.end method

.method public final h()V
    .locals 1

    const/4 v0, 0x1

    .line 175
    iput v0, p0, Lcom/tkay/expressad/d/c;->P:I

    return-void
.end method

.method public final i()J
    .locals 2

    .line 211
    iget-wide v0, p0, Lcom/tkay/expressad/d/c;->z:J

    return-wide v0
.end method

.method public final j()V
    .locals 1

    const/4 v0, 0x2

    .line 215
    iput v0, p0, Lcom/tkay/expressad/d/c;->y:I

    return-void
.end method

.method public final k()I
    .locals 1

    .line 219
    iget v0, p0, Lcom/tkay/expressad/d/c;->x:I

    return v0
.end method

.method public final l()V
    .locals 1

    const/4 v0, 0x1

    .line 223
    iput v0, p0, Lcom/tkay/expressad/d/c;->x:I

    return-void
.end method

.method public final m()I
    .locals 1

    .line 227
    iget v0, p0, Lcom/tkay/expressad/d/c;->y:I

    return v0
.end method

.method public final n()V
    .locals 2

    const-wide/16 v0, 0xe10

    .line 231
    iput-wide v0, p0, Lcom/tkay/expressad/d/c;->z:J

    return-void
.end method

.method public final o()V
    .locals 1

    const/4 v0, 0x5

    .line 279
    iput v0, p0, Lcom/tkay/expressad/d/c;->s:I

    return-void
.end method

.method public final p()V
    .locals 1

    const/4 v0, 0x1

    .line 303
    iput v0, p0, Lcom/tkay/expressad/d/c;->p:I

    return-void
.end method

.method public final q()V
    .locals 1

    const/4 v0, -0x2

    .line 311
    iput v0, p0, Lcom/tkay/expressad/d/c;->q:I

    return-void
.end method

.method public final r()V
    .locals 1

    const/4 v0, -0x2

    .line 319
    iput v0, p0, Lcom/tkay/expressad/d/c;->r:I

    return-void
.end method

.method public final s()Lorg/json/JSONObject;
    .locals 6

    .line 428
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 430
    :try_start_0
    iget-object v1, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    .line 431
    iget-object v1, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    .line 432
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    move v4, v2

    :goto_0
    if-ge v4, v1, :cond_0

    .line 434
    iget-object v5, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v3, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_0
    const-string v1, "adSourceList"

    .line 436
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 439
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 440
    iget-object v1, p0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    .line 441
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    :goto_1
    if-ge v2, v1, :cond_2

    .line 443
    iget-object v4, p0, Lcom/tkay/expressad/d/c;->o:Ljava/util/List;

    invoke-interface {v4, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v3, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_2
    const-string v1, "ad_source_timeout"

    .line 445
    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_3
    const-string v1, "tpqn"

    .line 448
    iget v2, p0, Lcom/tkay/expressad/d/c;->p:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "aqn"

    .line 449
    iget v2, p0, Lcom/tkay/expressad/d/c;->q:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "acn"

    .line 450
    iget v2, p0, Lcom/tkay/expressad/d/c;->r:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "wt"

    .line 451
    iget v2, p0, Lcom/tkay/expressad/d/c;->s:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "current_time"

    .line 452
    iget-wide v2, p0, Lcom/tkay/expressad/d/c;->l:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "offset"

    .line 453
    iget v2, p0, Lcom/tkay/expressad/d/c;->m:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "dlct"

    .line 454
    iget-wide v2, p0, Lcom/tkay/expressad/d/c;->z:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "autoplay"

    .line 455
    iget v2, p0, Lcom/tkay/expressad/d/c;->x:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "dlnet"

    .line 456
    iget v2, p0, Lcom/tkay/expressad/d/c;->y:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "no_offer"

    .line 457
    iget-object v2, p0, Lcom/tkay/expressad/d/c;->A:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "cb_type"

    .line 458
    iget v2, p0, Lcom/tkay/expressad/d/c;->B:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "clct"

    .line 459
    iget-wide v2, p0, Lcom/tkay/expressad/d/c;->C:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "clcq"

    .line 460
    iget-wide v2, p0, Lcom/tkay/expressad/d/c;->D:J

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v1, "ready_rate"

    .line 461
    iget v2, p0, Lcom/tkay/expressad/d/c;->N:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "content"

    .line 462
    iget v2, p0, Lcom/tkay/expressad/d/c;->P:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "impt"

    .line 463
    iget v2, p0, Lcom/tkay/expressad/d/c;->Q:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "icon_type"

    .line 464
    iget v2, p0, Lcom/tkay/expressad/d/c;->u:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "no_ads_url"

    .line 465
    iget-object v2, p0, Lcom/tkay/expressad/d/c;->t:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "playclosebtn_tm"

    .line 467
    iget v2, p0, Lcom/tkay/expressad/d/c;->e:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "play_ctdown"

    .line 468
    iget v2, p0, Lcom/tkay/expressad/d/c;->f:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "close_alert"

    .line 469
    iget v2, p0, Lcom/tkay/expressad/d/c;->g:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "closeBtn"

    .line 470
    iget v2, p0, Lcom/tkay/expressad/d/c;->F:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "refreshFq"

    .line 471
    iget v2, p0, Lcom/tkay/expressad/d/c;->E:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "countdown"

    .line 473
    iget v2, p0, Lcom/tkay/expressad/d/c;->H:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "allowSkip"

    .line 474
    iget v2, p0, Lcom/tkay/expressad/d/c;->G:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tmorl"

    .line 475
    iget v2, p0, Lcom/tkay/expressad/d/c;->M:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "unitId"

    .line 476
    iget-object v2, p0, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "placementid"

    .line 477
    iget-object v2, p0, Lcom/tkay/expressad/d/c;->I:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ltafemty"

    .line 479
    iget v2, p0, Lcom/tkay/expressad/d/c;->J:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "ltorwc"

    .line 480
    iget v2, p0, Lcom/tkay/expressad/d/c;->K:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v1

    .line 482
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-object v0
.end method

.method public final t()I
    .locals 1

    .line 496
    iget v0, p0, Lcom/tkay/expressad/d/c;->m:I

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 4

    .line 326
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    const-string v1, ""

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 327
    iget-object v0, p0, Lcom/tkay/expressad/d/c;->k:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Integer;

    .line 328
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ","

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    .line 331
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "offset = "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 1496
    iget v2, p0, Lcom/tkay/expressad/d/c;->m:I

    .line 331
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " unitId = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/d/c;->i:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " fbPlacementId = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/d/c;->j:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final u()V
    .locals 1

    const/4 v0, 0x1

    .line 500
    iput v0, p0, Lcom/tkay/expressad/d/c;->m:I

    return-void
.end method

.method public final v()V
    .locals 1

    const/4 v0, 0x2

    .line 508
    iput v0, p0, Lcom/tkay/expressad/d/c;->n:I

    return-void
.end method

.method public final w()V
    .locals 1

    const/16 v0, 0xa

    .line 611
    iput v0, p0, Lcom/tkay/expressad/d/c;->J:I

    return-void
.end method

.method public final x()V
    .locals 1

    const/16 v0, 0x3c

    .line 619
    iput v0, p0, Lcom/tkay/expressad/d/c;->K:I

    return-void
.end method

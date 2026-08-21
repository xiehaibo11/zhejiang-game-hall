.class public final Lcom/tkay/core/common/b/i;
.super Lcom/tkay/core/api/TYAdInfo;


# instance fields
.field private A:Ljava/lang/String;

.field private B:I

.field private C:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private a:Lcom/tkay/core/api/TYBaseAdAdapter;

.field private b:I

.field private c:Ljava/lang/String;

.field private d:I

.field private e:D

.field private f:I

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/Double;

.field private i:Ljava/lang/String;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Ljava/lang/String;

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:I

.field private q:I

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;

.field private t:I

.field private u:Ljava/lang/String;

.field private v:Ljava/lang/String;

.field private w:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private x:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private y:Ljava/lang/String;

.field private z:I


# direct methods
.method public constructor <init>()V
    .locals 4

    .line 69
    invoke-direct {p0}, Lcom/tkay/core/api/TYAdInfo;-><init>()V

    const/4 v0, -0x1

    .line 70
    iput v0, p0, Lcom/tkay/core/common/b/i;->b:I

    const-string v1, ""

    .line 71
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->c:Ljava/lang/String;

    .line 72
    iput v0, p0, Lcom/tkay/core/common/b/i;->d:I

    const-wide/16 v2, 0x0

    .line 73
    iput-wide v2, p0, Lcom/tkay/core/common/b/i;->e:D

    const/4 v0, 0x0

    .line 74
    iput v0, p0, Lcom/tkay/core/common/b/i;->f:I

    .line 76
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->g:Ljava/lang/String;

    .line 77
    invoke-static {v2, v3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/core/common/b/i;->h:Ljava/lang/Double;

    .line 78
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->i:Ljava/lang/String;

    .line 79
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->j:Ljava/lang/String;

    .line 80
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->k:Ljava/lang/String;

    .line 82
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->l:Ljava/lang/String;

    const-string v2, "unknow"

    .line 83
    iput-object v2, p0, Lcom/tkay/core/common/b/i;->m:Ljava/lang/String;

    const-string v2, "Network"

    .line 84
    iput-object v2, p0, Lcom/tkay/core/common/b/i;->n:Ljava/lang/String;

    .line 85
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->o:Ljava/lang/String;

    const/4 v2, 0x1

    .line 86
    iput v2, p0, Lcom/tkay/core/common/b/i;->p:I

    .line 88
    iput v0, p0, Lcom/tkay/core/common/b/i;->q:I

    .line 89
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    .line 90
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    .line 91
    iput v0, p0, Lcom/tkay/core/common/b/i;->t:I

    .line 93
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->u:Ljava/lang/String;

    .line 94
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->v:Ljava/lang/String;

    const/4 v2, 0x0

    .line 95
    iput-object v2, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    .line 97
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->y:Ljava/lang/String;

    .line 98
    iput v0, p0, Lcom/tkay/core/common/b/i;->z:I

    .line 99
    iput-object v1, p0, Lcom/tkay/core/common/b/i;->A:Ljava/lang/String;

    .line 101
    iput v0, p0, Lcom/tkay/core/common/b/i;->B:I

    return-void
.end method

.method public static a(Lcom/tkay/core/api/BaseAd;)Lcom/tkay/core/common/b/i;
    .locals 1

    if-eqz p0, :cond_0

    .line 251
    invoke-virtual {p0}, Lcom/tkay/core/api/BaseAd;->getDetail()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    .line 252
    invoke-virtual {p0}, Lcom/tkay/core/api/BaseAd;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object p0

    iput-object p0, v0, Lcom/tkay/core/common/b/i;->x:Ljava/util/Map;

    return-object v0

    .line 255
    :cond_0
    new-instance p0, Lcom/tkay/core/common/b/i;

    invoke-direct {p0}, Lcom/tkay/core/common/b/i;-><init>()V

    return-object p0
.end method

.method private static a(Lcom/tkay/core/common/b/i;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;
    .locals 1

    if-eqz p1, :cond_0

    .line 276
    instance-of v0, p1, Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    .line 277
    check-cast p1, Lcom/tkay/core/api/TYBaseAdAdapter;

    iput-object p1, p0, Lcom/tkay/core/common/b/i;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 278
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/b/i;->x:Ljava/util/Map;

    :cond_0
    return-object p0
.end method

.method private static a(Lcom/tkay/core/common/b/i;Lcom/tkay/core/common/f/d;)Lcom/tkay/core/common/b/i;
    .locals 4

    .line 284
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->b:I

    .line 285
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->c:Ljava/lang/String;

    .line 286
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->A()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->d:I

    .line 288
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->v()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->f:I

    .line 290
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->f()D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/b/i;->e:D

    .line 292
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->h()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->i:Ljava/lang/String;

    .line 294
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->g:Ljava/lang/String;

    .line 296
    iget-wide v0, p0, Lcom/tkay/core/common/b/i;->e:D

    const-wide v2, 0x408f400000000000L    # 1000.0

    div-double/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->h:Ljava/lang/Double;

    .line 298
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->o()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->j:Ljava/lang/String;

    .line 300
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/l/g;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->l:Ljava/lang/String;

    .line 301
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->k:Ljava/lang/String;

    .line 309
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->n()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->m:Ljava/lang/String;

    .line 312
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    const/16 v1, 0x23

    if-ne v0, v1, :cond_0

    const-string v0, "Cross_Promotion"

    .line 313
    iput-object v0, p0, Lcom/tkay/core/common/b/i;->n:Ljava/lang/String;

    goto :goto_0

    .line 314
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    const/16 v1, 0x42

    if-ne v0, v1, :cond_1

    const-string v0, "Adx"

    .line 315
    iput-object v0, p0, Lcom/tkay/core/common/b/i;->n:Ljava/lang/String;

    goto :goto_0

    :cond_1
    const-string v0, "Network"

    .line 317
    iput-object v0, p0, Lcom/tkay/core/common/b/i;->n:Ljava/lang/String;

    .line 320
    :goto_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->k()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->o:Ljava/lang/String;

    .line 321
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->m()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->p:I

    .line 322
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->I()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->q:I

    .line 1402
    iget-object v0, p1, Lcom/tkay/core/common/f/d;->C:Ljava/lang/String;

    .line 323
    iput-object v0, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    .line 326
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->l:Ljava/lang/String;

    const-string v1, "RewardedVideo"

    invoke-static {v1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 327
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->q()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 328
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 329
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/api/TYRewardInfo;

    if-eqz v0, :cond_2

    .line 331
    iget-object v1, v0, Lcom/tkay/core/api/TYRewardInfo;->rewardName:Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    .line 332
    iget v0, v0, Lcom/tkay/core/api/TYRewardInfo;->rewardNumber:I

    iput v0, p0, Lcom/tkay/core/common/b/i;->t:I

    .line 336
    :cond_2
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    iget v0, p0, Lcom/tkay/core/common/b/i;->t:I

    if-nez v0, :cond_4

    .line 337
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->r()Lcom/tkay/core/api/TYRewardInfo;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 339
    iget-object v1, v0, Lcom/tkay/core/api/TYRewardInfo;->rewardName:Ljava/lang/String;

    iput-object v1, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    .line 340
    iget v0, v0, Lcom/tkay/core/api/TYRewardInfo;->rewardNumber:I

    iput v0, p0, Lcom/tkay/core/common/b/i;->t:I

    .line 346
    :cond_4
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->m()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->v:Ljava/lang/String;

    .line 347
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->n()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->u:Ljava/lang/String;

    .line 348
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->s()Ljava/util/Map;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    .line 351
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->e()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->y:Ljava/lang/String;

    .line 354
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->M()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->z:I

    .line 356
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->P()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->A:Ljava/lang/String;

    .line 358
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->U()I

    move-result v0

    iput v0, p0, Lcom/tkay/core/common/b/i;->B:I

    .line 361
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->a()Ljava/util/Map;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 363
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0, p1}, Ljava/util/HashMap;-><init>(Ljava/util/Map;)V

    iput-object v0, p0, Lcom/tkay/core/common/b/i;->C:Ljava/util/Map;

    :cond_5
    return-object p0
.end method

.method public static a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;
    .locals 1

    if-eqz p0, :cond_0

    .line 242
    invoke-virtual {p0}, Lcom/tkay/core/common/b/n;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    .line 244
    invoke-static {v0, p0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/i;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p0

    return-object p0

    .line 246
    :cond_0
    new-instance p0, Lcom/tkay/core/common/b/i;

    invoke-direct {p0}, Lcom/tkay/core/common/b/i;-><init>()V

    return-object p0
.end method

.method private static a(Lcom/tkay/core/common/f/d;)Lcom/tkay/core/common/b/i;
    .locals 1

    .line 268
    new-instance v0, Lcom/tkay/core/common/b/i;

    invoke-direct {v0}, Lcom/tkay/core/common/b/i;-><init>()V

    if-eqz p0, :cond_0

    .line 270
    invoke-static {v0, p0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/i;Lcom/tkay/core/common/f/d;)Lcom/tkay/core/common/b/i;

    move-result-object p0

    return-object p0

    :cond_0
    return-object v0
.end method

.method public static a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;
    .locals 0

    .line 262
    invoke-static {p0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;)Lcom/tkay/core/common/b/i;

    move-result-object p0

    .line 264
    invoke-static {p0, p1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/i;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final getABTestId()I
    .locals 1

    .line 232
    iget v0, p0, Lcom/tkay/core/common/b/i;->B:I

    return v0
.end method

.method public final getAdNetworkType()Ljava/lang/String;
    .locals 1

    .line 158
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->n:Ljava/lang/String;

    return-object v0
.end method

.method public final getAdsourceId()Ljava/lang/String;
    .locals 1

    .line 109
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final getAdsourceIndex()I
    .locals 1

    .line 113
    iget v0, p0, Lcom/tkay/core/common/b/i;->d:I

    return v0
.end method

.method public final getChannel()Ljava/lang/String;
    .locals 1

    .line 198
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->v:Ljava/lang/String;

    return-object v0
.end method

.method public final getCountry()Ljava/lang/String;
    .locals 1

    .line 142
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->j:Ljava/lang/String;

    return-object v0
.end method

.method public final getCurrency()Ljava/lang/String;
    .locals 1

    .line 138
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->i:Ljava/lang/String;

    return-object v0
.end method

.method public final getCustomRule()Ljava/lang/String;
    .locals 2

    .line 202
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 203
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final getDismissType()I
    .locals 1

    .line 237
    iget v0, p0, Lcom/tkay/core/common/b/i;->z:I

    return v0
.end method

.method public final getEcpm()D
    .locals 2

    .line 117
    iget-wide v0, p0, Lcom/tkay/core/common/b/i;->e:D

    return-wide v0
.end method

.method public final getEcpmLevel()I
    .locals 1

    .line 166
    iget v0, p0, Lcom/tkay/core/common/b/i;->p:I

    return v0
.end method

.method public final getEcpmPrecision()Ljava/lang/String;
    .locals 1

    .line 154
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->m:Ljava/lang/String;

    return-object v0
.end method

.method public final getExtInfoMap()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 210
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->x:Ljava/util/Map;

    return-object v0
.end method

.method public final getLocalExtra()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 222
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->C:Ljava/util/Map;

    return-object v0
.end method

.method public final getNetworkFirmId()I
    .locals 1

    .line 105
    iget v0, p0, Lcom/tkay/core/common/b/i;->b:I

    return v0
.end method

.method public final getNetworkPlacementId()Ljava/lang/String;
    .locals 1

    .line 162
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->o:Ljava/lang/String;

    return-object v0
.end method

.method public final getPublisherRevenue()Ljava/lang/Double;
    .locals 1

    .line 134
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->h:Ljava/lang/Double;

    return-object v0
.end method

.method public final getRewardUserCustomData()Ljava/lang/String;
    .locals 1

    .line 214
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v0, :cond_0

    .line 215
    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUserCustomData()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final getScenarioId()Ljava/lang/String;
    .locals 1

    .line 174
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final getScenarioRewardName()Ljava/lang/String;
    .locals 1

    .line 182
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    return-object v0
.end method

.method public final getScenarioRewardNumber()I
    .locals 1

    .line 190
    iget v0, p0, Lcom/tkay/core/common/b/i;->t:I

    return v0
.end method

.method public final getSegmentId()I
    .locals 1

    .line 170
    iget v0, p0, Lcom/tkay/core/common/b/i;->q:I

    return v0
.end method

.method public final getShowId()Ljava/lang/String;
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final getSubChannel()Ljava/lang/String;
    .locals 1

    .line 194
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->u:Ljava/lang/String;

    return-object v0
.end method

.method public final getTYAdFormat()Ljava/lang/String;
    .locals 1

    .line 150
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->l:Ljava/lang/String;

    return-object v0
.end method

.method public final getTYPlacementId()Ljava/lang/String;
    .locals 1

    .line 146
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final getTpBidId()Ljava/lang/String;
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/tkay/core/common/b/i;->y:Ljava/lang/String;

    return-object v0
.end method

.method public final isHeaderBiddingAdsource()I
    .locals 1

    .line 126
    iget v0, p0, Lcom/tkay/core/common/b/i;->f:I

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 4

    .line 372
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "id"

    .line 374
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->g:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "publisher_revenue"

    .line 375
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->h:Ljava/lang/Double;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "currency"

    .line 376
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->i:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "country"

    .line 377
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->j:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "adunit_id"

    .line 378
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->k:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "adunit_format"

    .line 380
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->l:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "precision"

    .line 381
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->m:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_type"

    .line 382
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->n:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "network_placement_id"

    .line 383
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->o:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ecpm_level"

    .line 384
    iget v2, p0, Lcom/tkay/core/common/b/i;->p:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "segment_id"

    .line 386
    iget v2, p0, Lcom/tkay/core/common/b/i;->q:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 387
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "scenario_id"

    .line 388
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->r:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 391
    :cond_0
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget v1, p0, Lcom/tkay/core/common/b/i;->t:I

    if-eqz v1, :cond_1

    const-string v1, "scenario_reward_name"

    .line 392
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->s:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "scenario_reward_number"

    .line 393
    iget v2, p0, Lcom/tkay/core/common/b/i;->t:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 396
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->v:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "channel"

    .line 397
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->v:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 399
    :cond_2
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->u:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "sub_channel"

    .line 400
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->u:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 402
    :cond_3
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_4

    const-string v1, "custom_rule"

    .line 403
    new-instance v2, Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/tkay/core/common/b/i;->w:Ljava/util/Map;

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_4
    const-string v1, "network_firm_id"

    .line 405
    iget v2, p0, Lcom/tkay/core/common/b/i;->b:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "adsource_id"

    .line 407
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->c:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "adsource_index"

    .line 408
    iget v2, p0, Lcom/tkay/core/common/b/i;->d:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "adsource_price"

    .line 409
    iget-wide v2, p0, Lcom/tkay/core/common/b/i;->e:D

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v1, "adsource_isheaderbidding"

    .line 410
    iget v2, p0, Lcom/tkay/core/common/b/i;->f:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 412
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->x:Ljava/util/Map;

    if-eqz v1, :cond_5

    iget-object v1, p0, Lcom/tkay/core/common/b/i;->x:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_5

    const-string v1, "ext_info"

    .line 413
    new-instance v2, Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/tkay/core/common/b/i;->x:Ljava/util/Map;

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 416
    :cond_5
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    if-eqz v1, :cond_6

    const-string v1, "reward_custom_data"

    .line 417
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->a:Lcom/tkay/core/api/TYBaseAdAdapter;

    invoke-virtual {v2}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUserCustomData()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 420
    :cond_6
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->y:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    const-string v1, "tp_bid_id"

    .line 421
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->y:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 424
    :cond_7
    iget v1, p0, Lcom/tkay/core/common/b/i;->z:I

    if-eqz v1, :cond_8

    const-string v1, "dismiss_type"

    .line 425
    iget v2, p0, Lcom/tkay/core/common/b/i;->z:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 428
    :cond_8
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->A:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    const-string v1, "wf_id"

    .line 429
    iget-object v2, p0, Lcom/tkay/core/common/b/i;->A:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_9
    const-string v1, "abtest_id"

    .line 433
    iget v2, p0, Lcom/tkay/core/common/b/i;->B:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 435
    iget-object v1, p0, Lcom/tkay/core/common/b/i;->C:Ljava/util/Map;

    if-eqz v1, :cond_a

    iget-object v1, p0, Lcom/tkay/core/common/b/i;->C:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_a

    const-string v1, "user_load_extra_data"

    .line 436
    new-instance v2, Lorg/json/JSONObject;

    iget-object v3, p0, Lcom/tkay/core/common/b/i;->C:Ljava/util/Map;

    invoke-direct {v2, v3}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 439
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 442
    :cond_a
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

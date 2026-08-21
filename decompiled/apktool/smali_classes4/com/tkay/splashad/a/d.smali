.class public final Lcom/tkay/splashad/a/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/splashad/a/d$a;
    }
.end annotation


# instance fields
.field a:Z

.field b:Lcom/tkay/splashad/a/b;

.field c:J

.field d:Lcom/tkay/core/common/f/a;

.field e:Ljava/lang/String;

.field f:Ljava/lang/String;

.field g:Ljava/lang/String;

.field h:I

.field i:Ljava/lang/String;

.field j:Ljava/lang/String;

.field k:I

.field l:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private m:Landroid/content/Context;

.field private n:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 160
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    .line 189
    iput v0, p0, Lcom/tkay/splashad/a/d;->k:I

    .line 161
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/a/d;->m:Landroid/content/Context;

    return-void
.end method

.method private a(Lcom/tkay/core/api/TYMediationRequestInfo;)V
    .locals 2

    .line 287
    invoke-virtual {p1}, Lcom/tkay/core/api/TYMediationRequestInfo;->getAdSourceId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    .line 288
    invoke-virtual {p1}, Lcom/tkay/core/api/TYMediationRequestInfo;->getNetworkFirmId()I

    move-result v0

    iput v0, p0, Lcom/tkay/splashad/a/d;->h:I

    .line 289
    invoke-virtual {p1}, Lcom/tkay/core/api/TYMediationRequestInfo;->getClassName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/splashad/a/d;->i:Ljava/lang/String;

    .line 290
    invoke-virtual {p1}, Lcom/tkay/core/api/TYMediationRequestInfo;->getRequestParamMap()Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    const/4 v0, 0x4

    .line 291
    iput v0, p0, Lcom/tkay/splashad/a/d;->k:I

    .line 292
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    const-string v1, "ad_type"

    invoke-interface {p1, v1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 3

    const-string v0, "ad_type"

    const-string v1, "0"

    .line 267
    iput-object v1, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    .line 268
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x1

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    iput-object v1, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    .line 272
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 274
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    const-string p1, "nw_firm_id"

    .line 275
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/tkay/splashad/a/d;->h:I

    const-string p1, "adapter_class"

    .line 276
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/a/d;->i:Ljava/lang/String;

    const-string p1, "content"

    .line 277
    invoke-virtual {v1, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/a/d;->j:Ljava/lang/String;

    const/4 p1, -0x1

    .line 278
    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/tkay/splashad/a/d;->k:I

    .line 279
    iget-object p1, p0, Lcom/tkay/splashad/a/d;->j:Ljava/lang/String;

    invoke-static {p1}, Lcom/tkay/core/common/l/h;->c(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    .line 280
    iget v1, p0, Lcom/tkay/splashad/a/d;->k:I

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 282
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method private b()V
    .locals 2

    .line 165
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/a/d$1;

    invoke-direct {v1, p0}, Lcom/tkay/splashad/a/d$1;-><init>(Lcom/tkay/splashad/a/d;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private b(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V
    .locals 2

    .line 297
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/a/d$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/splashad/a/d$2;-><init>(Lcom/tkay/splashad/a/d;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private c()V
    .locals 1

    const/4 v0, 0x0

    .line 333
    iput-object v0, p0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    return-void
.end method

.method private d()V
    .locals 1

    const/4 v0, 0x0

    .line 337
    iput-object v0, p0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    return-void
.end method

.method private e()V
    .locals 4

    .line 381
    new-instance v0, Lcom/tkay/core/common/f/d;

    invoke-direct {v0}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 382
    iget-object v1, p0, Lcom/tkay/splashad/a/d;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->x(Ljava/lang/String;)V

    .line 383
    iget-object v1, p0, Lcom/tkay/splashad/a/d;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->y(Ljava/lang/String;)V

    const-string v1, "4"

    .line 384
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    const-string v1, "0"

    .line 385
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->w(Ljava/lang/String;)V

    const/4 v1, 0x1

    .line 386
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->a(Z)V

    const-string v1, "2001"

    const-string v2, ""

    const-string v3, "Splash FetchAd Timeout."

    .line 387
    invoke-static {v1, v2, v3}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method private f()Lcom/tkay/core/common/f/a;
    .locals 1

    .line 392
    iget-object v0, p0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/a;->d()I

    move-result v0

    if-gtz v0, :cond_0

    .line 393
    iget-object v0, p0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private g()Lcom/tkay/core/common/f/a;
    .locals 1

    .line 399
    iget-object v0, p0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Ljava/lang/String;Lcom/tkay/splashad/a/b;I)V
    .locals 4

    const-string v0, ""

    .line 193
    iput-object p6, p0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    .line 195
    iput-object p3, p0, Lcom/tkay/splashad/a/d;->e:Ljava/lang/String;

    .line 196
    iput-object p2, p0, Lcom/tkay/splashad/a/d;->f:Ljava/lang/String;

    .line 198
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p6

    const-string v1, "ad_type"

    const-string v2, "0"

    const/4 v3, 0x1

    if-nez p6, :cond_0

    .line 2267
    iput-object v2, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    .line 2268
    new-instance p4, Ljava/util/HashMap;

    invoke-direct {p4, v3}, Ljava/util/HashMap;-><init>(I)V

    iput-object p4, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    .line 2272
    :try_start_0
    new-instance p4, Lorg/json/JSONObject;

    invoke-direct {p4, p5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p6, "unit_id"

    .line 2274
    invoke-virtual {p4, p6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p6

    iput-object p6, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    const-string p6, "nw_firm_id"

    .line 2275
    invoke-virtual {p4, p6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p6

    iput p6, p0, Lcom/tkay/splashad/a/d;->h:I

    const-string p6, "adapter_class"

    .line 2276
    invoke-virtual {p4, p6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p6

    iput-object p6, p0, Lcom/tkay/splashad/a/d;->i:Ljava/lang/String;

    const-string p6, "content"

    .line 2277
    invoke-virtual {p4, p6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p6

    iput-object p6, p0, Lcom/tkay/splashad/a/d;->j:Ljava/lang/String;

    const/4 p6, -0x1

    .line 2278
    invoke-virtual {p4, v1, p6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p4

    iput p4, p0, Lcom/tkay/splashad/a/d;->k:I

    .line 2279
    iget-object p4, p0, Lcom/tkay/splashad/a/d;->j:Ljava/lang/String;

    invoke-static {p4}, Lcom/tkay/core/common/l/h;->c(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p4

    iput-object p4, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    .line 2280
    iget p6, p0, Lcom/tkay/splashad/a/d;->k:I

    invoke-static {p6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p6

    invoke-interface {p4, v1, p6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p4

    .line 2282
    invoke-virtual {p4}, Ljava/lang/Throwable;->printStackTrace()V

    goto :goto_0

    :cond_0
    if-eqz p4, :cond_1

    .line 2287
    invoke-virtual {p4}, Lcom/tkay/core/api/TYMediationRequestInfo;->getAdSourceId()Ljava/lang/String;

    move-result-object p6

    iput-object p6, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    .line 2288
    invoke-virtual {p4}, Lcom/tkay/core/api/TYMediationRequestInfo;->getNetworkFirmId()I

    move-result p6

    iput p6, p0, Lcom/tkay/splashad/a/d;->h:I

    .line 2289
    invoke-virtual {p4}, Lcom/tkay/core/api/TYMediationRequestInfo;->getClassName()Ljava/lang/String;

    move-result-object p6

    iput-object p6, p0, Lcom/tkay/splashad/a/d;->i:Ljava/lang/String;

    .line 2290
    invoke-virtual {p4}, Lcom/tkay/core/api/TYMediationRequestInfo;->getRequestParamMap()Ljava/util/Map;

    move-result-object p4

    iput-object p4, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    const/4 p6, 0x4

    .line 2291
    iput p6, p0, Lcom/tkay/splashad/a/d;->k:I

    .line 2292
    invoke-static {p6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p6

    invoke-interface {p4, v1, p6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 205
    :cond_1
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    iget-object p4, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    invoke-static {p4}, Lcom/tkay/core/common/b/m;->n(Ljava/lang/String;)V

    .line 206
    new-instance p4, Lcom/tkay/core/common/f/d;

    invoke-direct {p4}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 207
    invoke-virtual {p4, p2}, Lcom/tkay/core/common/f/d;->x(Ljava/lang/String;)V

    .line 208
    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->y(Ljava/lang/String;)V

    .line 209
    iget p3, p0, Lcom/tkay/splashad/a/d;->h:I

    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->u(I)V

    const-string p3, "4"

    .line 210
    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 211
    iget-object p3, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_2

    move-object p3, v2

    goto :goto_1

    :cond_2
    iget-object p3, p0, Lcom/tkay/splashad/a/d;->g:Ljava/lang/String;

    :goto_1
    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->l(Ljava/lang/String;)V

    .line 212
    invoke-virtual {p4, v2}, Lcom/tkay/core/common/f/d;->w(Ljava/lang/String;)V

    .line 213
    invoke-virtual {p4, v3}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 215
    iget-object p3, p0, Lcom/tkay/splashad/a/d;->j:Ljava/lang/String;

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_3

    .line 216
    iget-object p3, p0, Lcom/tkay/splashad/a/d;->j:Ljava/lang/String;

    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->n(Ljava/lang/String;)V

    .line 219
    :cond_3
    invoke-static {p5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    const/16 p3, 0x8

    .line 220
    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->c(I)V

    .line 223
    :cond_4
    iget p3, p0, Lcom/tkay/splashad/a/d;->k:I

    invoke-virtual {p4, p3}, Lcom/tkay/core/common/f/d;->w(I)V

    .line 226
    :try_start_1
    iget-object p3, p0, Lcom/tkay/splashad/a/d;->i:Ljava/lang/String;

    invoke-static {p3}, Lcom/tkay/core/common/l/i;->a(Ljava/lang/String;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object p3

    .line 227
    instance-of p5, p3, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz p5, :cond_5

    .line 228
    move-object p5, p3

    check-cast p5, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    .line 229
    invoke-virtual {p5, p7}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->setFetchAdTimeout(I)V

    .line 230
    iput-boolean v3, p0, Lcom/tkay/splashad/a/d;->n:Z

    const/4 p5, 0x0

    .line 231
    iput-boolean p5, p0, Lcom/tkay/splashad/a/d;->a:Z

    .line 233
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide p5

    iput-wide p5, p0, Lcom/tkay/splashad/a/d;->c:J
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 236
    :try_start_2
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkName()Ljava/lang/String;

    move-result-object p5

    invoke-virtual {p4, p5}, Lcom/tkay/core/common/f/d;->v(Ljava/lang/String;)V

    .line 237
    invoke-virtual {p3}, Lcom/tkay/core/api/TYBaseAdAdapter;->getNetworkSDKVersion()Ljava/lang/String;

    move-result-object p5

    .line 2455
    iput-object p5, p4, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    const/4 p5, 0x2

    .line 2594
    iput p5, p4, Lcom/tkay/core/common/f/d;->q:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 243
    :catchall_1
    :try_start_3
    invoke-virtual {p3, p4}, Lcom/tkay/core/api/TYBaseAdAdapter;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 244
    sget-object p5, Lcom/tkay/core/common/b/f$i;->a:Ljava/lang/String;

    sget-object p6, Lcom/tkay/core/common/b/f$i;->n:Ljava/lang/String;

    invoke-static {p4, p5, p6, v0}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    iget-object p5, p0, Lcom/tkay/splashad/a/d;->m:Landroid/content/Context;

    invoke-static {p5}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object p5

    const/16 p6, 0xa

    invoke-virtual {p5, p6, p4}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 247
    iget-object p5, p0, Lcom/tkay/splashad/a/d;->m:Landroid/content/Context;

    invoke-static {p5}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object p5

    invoke-virtual {p5, v3, p4}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 252
    iget-object p4, p0, Lcom/tkay/splashad/a/d;->l:Ljava/util/Map;

    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p5

    invoke-virtual {p5, p2}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;)Ljava/util/Map;

    move-result-object p2

    new-instance p5, Lcom/tkay/splashad/a/d$a;

    move-object p6, p3

    check-cast p6, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    invoke-direct {p5, p0, p6}, Lcom/tkay/splashad/a/d$a;-><init>(Lcom/tkay/splashad/a/d;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;)V

    invoke-virtual {p3, p1, p4, p2, p5}, Lcom/tkay/core/api/TYBaseAdAdapter;->internalLoad(Landroid/content/Context;Ljava/util/Map;Ljava/util/Map;Lcom/tkay/core/api/TYCustomLoadListener;)V

    return-void

    .line 254
    :cond_5
    new-instance p1, Ljava/lang/Exception;

    const-string p2, "The class isn\'t instanceof CustomSplashAdapter"

    invoke-direct {p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :catchall_2
    move-exception p1

    .line 257
    iget-object p2, p0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    if-eqz p2, :cond_6

    .line 258
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "2002"

    invoke-static {p2, v0, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 259
    iget-object p2, p0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    invoke-virtual {p2, p1}, Lcom/tkay/splashad/a/b;->onAdLoadFail(Lcom/tkay/core/api/AdError;)V

    :cond_6
    const/4 p1, 0x0

    .line 261
    iput-object p1, p0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    return-void
.end method

.method public final a(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V
    .locals 4

    .line 93
    iget-boolean v0, p0, Lcom/tkay/splashad/a/d;->a:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 100
    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    sget-object v1, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-virtual {p2}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const/4 v0, 0x1

    .line 102
    iput-boolean v0, p0, Lcom/tkay/splashad/a/d;->a:Z

    const/4 v0, 0x0

    .line 103
    iput-boolean v0, p0, Lcom/tkay/splashad/a/d;->n:Z

    .line 1297
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/splashad/a/d$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/splashad/a/d$2;-><init>(Lcom/tkay/splashad/a/d;Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;Lcom/tkay/core/api/AdError;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final varargs a(Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;[Lcom/tkay/core/api/BaseAd;)V
    .locals 6

    .line 54
    iget-boolean v0, p0, Lcom/tkay/splashad/a/d;->a:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    if-eqz p1, :cond_2

    .line 62
    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/tkay/splashad/a/d;->c:J

    sub-long/2addr v2, v4

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/d;->d(J)V

    .line 63
    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getNetworkPlacementId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/f/d;->g(Ljava/lang/String;)V

    .line 65
    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    sget-object v2, Lcom/tkay/core/common/b/f$i;->b:Ljava/lang/String;

    sget-object v3, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v4, ""

    invoke-static {v1, v2, v3, v4}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 66
    iget-object v1, p0, Lcom/tkay/splashad/a/d;->m:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0xc

    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 68
    iget-object v1, p0, Lcom/tkay/splashad/a/d;->m:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/4 v2, 0x2

    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 70
    new-instance v1, Lcom/tkay/core/common/f/a;

    invoke-direct {v1}, Lcom/tkay/core/common/f/a;-><init>()V

    .line 71
    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f/a;->b(I)V

    .line 72
    invoke-virtual {v1, p1}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/api/TYBaseAdAdapter;)V

    .line 73
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/a;->c(J)V

    const-wide/32 v2, 0x927c0

    .line 74
    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/a;->b(J)V

    .line 75
    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Lcom/tkay/core/common/f/a;->a(Ljava/lang/String;)V

    .line 76
    invoke-virtual {v1, v2, v3}, Lcom/tkay/core/common/f/a;->a(J)V

    if-eqz p2, :cond_1

    .line 77
    array-length v2, p2

    if-lez v2, :cond_1

    .line 78
    aget-object v2, p2, v0

    invoke-virtual {p1}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/tkay/core/api/BaseAd;->setTrackingInfo(Lcom/tkay/core/common/f/d;)V

    .line 79
    aget-object p1, p2, v0

    invoke-virtual {v1, p1}, Lcom/tkay/core/common/f/a;->a(Lcom/tkay/core/api/BaseAd;)V

    .line 81
    :cond_1
    iput-object v1, p0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    :cond_2
    const/4 p1, 0x1

    .line 85
    iput-boolean p1, p0, Lcom/tkay/splashad/a/d;->a:Z

    .line 86
    iput-boolean v0, p0, Lcom/tkay/splashad/a/d;->n:Z

    .line 1165
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    new-instance p2, Lcom/tkay/splashad/a/d$1;

    invoke-direct {p2, p0}, Lcom/tkay/splashad/a/d$1;-><init>(Lcom/tkay/splashad/a/d;)V

    invoke-virtual {p1, p2}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected final a()Z
    .locals 1

    .line 178
    iget-boolean v0, p0, Lcom/tkay/splashad/a/d;->n:Z

    return v0
.end method

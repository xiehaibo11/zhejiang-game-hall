.class public Lcom/tkay/splashad/a/c;
.super Lcom/tkay/core/common/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f<",
        "Lcom/tkay/splashad/a/g;",
        ">;"
    }
.end annotation


# instance fields
.field a:Lcom/tkay/splashad/a/d;


# direct methods
.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 65
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/f;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Lcom/tkay/splashad/a/g;)Lcom/tkay/core/common/h;
    .locals 2

    .line 108
    new-instance v0, Lcom/tkay/splashad/a/e;

    invoke-virtual {p0}, Lcom/tkay/splashad/a/g;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/splashad/a/e;-><init>(Landroid/content/Context;)V

    .line 109
    iget v1, p0, Lcom/tkay/splashad/a/g;->h:I

    .line 1106
    iput v1, v0, Lcom/tkay/splashad/a/e;->T:I

    .line 110
    iget p0, p0, Lcom/tkay/splashad/a/g;->d:I

    invoke-virtual {v0, p0}, Lcom/tkay/splashad/a/e;->a(I)V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/splashad/a/c;
    .locals 3

    .line 71
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    const-string v1, "4"

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 72
    instance-of v2, v0, Lcom/tkay/splashad/a/c;

    if-nez v2, :cond_1

    .line 73
    :cond_0
    new-instance v0, Lcom/tkay/splashad/a/c;

    invoke-direct {v0, p0, p1}, Lcom/tkay/splashad/a/c;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 74
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p0

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f;)V

    .line 76
    :cond_1
    check-cast v0, Lcom/tkay/splashad/a/c;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/splashad/a/c;)Ljava/lang/String;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/splashad/a/c;->g:Ljava/lang/String;

    return-object p0
.end method

.method private a(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/f;ZLcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;)V
    .locals 8

    if-eqz p5, :cond_1

    .line 331
    instance-of v0, p5, Lcom/tkay/core/common/f/a/e;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    new-array v0, v0, [Z

    const/4 v1, 0x0

    aput-boolean v1, v0, v1

    .line 333
    new-instance v5, Lcom/tkay/core/common/f/a/b;

    move-object v1, p5

    check-cast v1, Lcom/tkay/core/common/f/a/e;

    invoke-direct {v5, v1}, Lcom/tkay/core/common/f/a/b;-><init>(Lcom/tkay/core/common/f/a/e;)V

    .line 334
    new-instance v4, Lcom/tkay/core/common/f/a/c;

    move-object v1, p5

    check-cast v1, Lcom/tkay/core/common/f/a/a;

    const-string v2, "4"

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-direct {v4, v1, p6, v2}, Lcom/tkay/core/common/f/a/c;-><init>(Lcom/tkay/core/common/f/a/a;Lcom/tkay/core/common/f/d;I)V

    .line 336
    invoke-static {v4}, Lcom/tkay/splashad/a/c;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object v7

    .line 338
    new-instance p6, Lcom/tkay/splashad/a/c$2;

    invoke-direct {p6, p0, v0, p3}, Lcom/tkay/splashad/a/c$2;-><init>(Lcom/tkay/splashad/a/c;[ZLcom/tkay/splashad/a/f;)V

    invoke-virtual {p5, p6}, Lcom/tkay/core/api/BaseAd;->setNativeEventListener(Lcom/tkay/core/common/b/k;)V

    .line 384
    invoke-static {}, Lcom/tkay/basead/d/i;->a()Lcom/tkay/basead/d/i;

    move-result-object p6

    invoke-virtual {p6, v7, p5}, Lcom/tkay/basead/d/i;->a(Ljava/lang/String;Lcom/tkay/core/api/BaseAd;)V

    .line 386
    new-instance p6, Lcom/tkay/basead/ui/ThirdPartySplashATView;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    new-instance v6, Lcom/tkay/splashad/a/c$3;

    invoke-direct {v6, p0, p3}, Lcom/tkay/splashad/a/c$3;-><init>(Lcom/tkay/splashad/a/c;Lcom/tkay/splashad/a/f;)V

    move-object v2, p6

    invoke-direct/range {v2 .. v7}, Lcom/tkay/basead/ui/ThirdPartySplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;Ljava/lang/String;)V

    .line 414
    invoke-virtual {p6, p4}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->setDontCountDown(Z)V

    .line 419
    invoke-virtual {p5}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 420
    invoke-virtual {p5}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object p1

    .line 421
    invoke-virtual {p1, p6}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    move-object p1, p6

    .line 425
    :goto_0
    invoke-virtual {p6, p2}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->registerNativeClickListener(Landroid/view/View;)V

    .line 427
    invoke-virtual {p2, p1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    return-void

    :cond_1
    const-string p1, "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"

    const-string p2, "tkay"

    .line 429
    invoke-static {p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p3, :cond_2

    const/16 p2, 0x63

    .line 431
    invoke-virtual {p3, p2}, Lcom/tkay/splashad/a/f;->a(I)V

    const-string p2, "4006"

    const-string p4, ""

    .line 432
    invoke-static {p2, p4, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-virtual {p3, p1}, Lcom/tkay/splashad/a/f;->onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V

    .line 433
    invoke-virtual {p3}, Lcom/tkay/splashad/a/f;->onSplashAdDismiss()V

    :cond_2
    return-void
.end method

.method static synthetic a(Lcom/tkay/splashad/a/c;Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/f;ZLcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;)V
    .locals 8

    if-eqz p5, :cond_1

    .line 6331
    instance-of v0, p5, Lcom/tkay/core/common/f/a/e;

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    new-array v0, v0, [Z

    const/4 v1, 0x0

    aput-boolean v1, v0, v1

    .line 6333
    new-instance v5, Lcom/tkay/core/common/f/a/b;

    move-object v1, p5

    check-cast v1, Lcom/tkay/core/common/f/a/e;

    invoke-direct {v5, v1}, Lcom/tkay/core/common/f/a/b;-><init>(Lcom/tkay/core/common/f/a/e;)V

    .line 6334
    new-instance v4, Lcom/tkay/core/common/f/a/c;

    move-object v1, p5

    check-cast v1, Lcom/tkay/core/common/f/a/a;

    const-string v2, "4"

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-direct {v4, v1, p6, v2}, Lcom/tkay/core/common/f/a/c;-><init>(Lcom/tkay/core/common/f/a/a;Lcom/tkay/core/common/f/d;I)V

    .line 6336
    invoke-static {v4}, Lcom/tkay/splashad/a/c;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object v7

    .line 6338
    new-instance p6, Lcom/tkay/splashad/a/c$2;

    invoke-direct {p6, p0, v0, p3}, Lcom/tkay/splashad/a/c$2;-><init>(Lcom/tkay/splashad/a/c;[ZLcom/tkay/splashad/a/f;)V

    invoke-virtual {p5, p6}, Lcom/tkay/core/api/BaseAd;->setNativeEventListener(Lcom/tkay/core/common/b/k;)V

    .line 6384
    invoke-static {}, Lcom/tkay/basead/d/i;->a()Lcom/tkay/basead/d/i;

    move-result-object p6

    invoke-virtual {p6, v7, p5}, Lcom/tkay/basead/d/i;->a(Ljava/lang/String;Lcom/tkay/core/api/BaseAd;)V

    .line 6386
    new-instance p6, Lcom/tkay/basead/ui/ThirdPartySplashATView;

    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    new-instance v6, Lcom/tkay/splashad/a/c$3;

    invoke-direct {v6, p0, p3}, Lcom/tkay/splashad/a/c$3;-><init>(Lcom/tkay/splashad/a/c;Lcom/tkay/splashad/a/f;)V

    move-object v2, p6

    invoke-direct/range {v2 .. v7}, Lcom/tkay/basead/ui/ThirdPartySplashATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;Ljava/lang/String;)V

    .line 6414
    invoke-virtual {p6, p4}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->setDontCountDown(Z)V

    .line 6419
    invoke-virtual {p5}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 6420
    invoke-virtual {p5}, Lcom/tkay/core/api/BaseAd;->getCustomAdContainer()Landroid/view/ViewGroup;

    move-result-object p0

    .line 6421
    invoke-virtual {p0, p6}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    goto :goto_0

    :cond_0
    move-object p0, p6

    .line 6425
    :goto_0
    invoke-virtual {p6, p2}, Lcom/tkay/basead/ui/ThirdPartySplashATView;->registerNativeClickListener(Landroid/view/View;)V

    .line 6427
    invoke-virtual {p2, p0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    return-void

    :cond_1
    const-string p0, "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"

    const-string p1, "tkay"

    .line 6429
    invoke-static {p1, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/16 p1, 0x63

    .line 6431
    invoke-virtual {p3, p1}, Lcom/tkay/splashad/a/f;->a(I)V

    const-string p1, "4006"

    const-string p2, ""

    .line 6432
    invoke-static {p1, p2, p0}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p0

    invoke-virtual {p3, p0}, Lcom/tkay/splashad/a/f;->onSplashAdShowFail(Lcom/tkay/core/api/AdError;)V

    .line 6433
    invoke-virtual {p3}, Lcom/tkay/splashad/a/f;->onSplashAdDismiss()V

    return-void
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/splashad/a/g;Lcom/tkay/core/common/b/a;)Z
    .locals 9

    if-eqz p4, :cond_0

    .line 261
    instance-of v0, p4, Lcom/tkay/splashad/a/b;

    if-eqz v0, :cond_0

    .line 262
    new-instance v1, Lcom/tkay/splashad/a/d;

    iget-object v0, p0, Lcom/tkay/splashad/a/c;->b:Landroid/content/Context;

    invoke-direct {v1, v0}, Lcom/tkay/splashad/a/d;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    .line 263
    invoke-virtual {p3}, Lcom/tkay/splashad/a/g;->a()Landroid/content/Context;

    move-result-object v2

    iget-object v5, p3, Lcom/tkay/splashad/a/g;->b:Lcom/tkay/core/api/TYMediationRequestInfo;

    iget-object v6, p3, Lcom/tkay/splashad/a/g;->c:Ljava/lang/String;

    move-object v7, p4

    check-cast v7, Lcom/tkay/splashad/a/b;

    iget v8, p3, Lcom/tkay/splashad/a/g;->h:I

    move-object v3, p1

    move-object v4, p2

    invoke-virtual/range {v1 .. v8}, Lcom/tkay/splashad/a/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Ljava/lang/String;Lcom/tkay/splashad/a/b;I)V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic b(Lcom/tkay/splashad/a/c;)Landroid/content/Context;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/splashad/a/c;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/splashad/a/c;)Landroid/content/Context;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/splashad/a/c;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/splashad/a/c;)Landroid/content/Context;
    .locals 0

    .line 60
    iget-object p0, p0, Lcom/tkay/splashad/a/c;->b:Landroid/content/Context;

    return-object p0
.end method

.method private e(Ljava/lang/String;)V
    .locals 9

    .line 294
    iget-object v0, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    const-string v1, "Splash FetchAd Timeout."

    const-string v2, ""

    const-string v3, "2001"

    const/4 v4, 0x1

    const-string v5, "0"

    const-string v6, "4"

    if-eqz v0, :cond_0

    .line 3381
    new-instance v7, Lcom/tkay/core/common/f/d;

    invoke-direct {v7}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 3382
    iget-object v8, v0, Lcom/tkay/splashad/a/d;->f:Ljava/lang/String;

    invoke-virtual {v7, v8}, Lcom/tkay/core/common/f/d;->x(Ljava/lang/String;)V

    .line 3383
    iget-object v0, v0, Lcom/tkay/splashad/a/d;->e:Ljava/lang/String;

    invoke-virtual {v7, v0}, Lcom/tkay/core/common/f/d;->y(Ljava/lang/String;)V

    .line 3384
    invoke-virtual {v7, v6}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 3385
    invoke-virtual {v7, v5}, Lcom/tkay/core/common/f/d;->w(Ljava/lang/String;)V

    .line 3386
    invoke-virtual {v7, v4}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 3387
    invoke-static {v3, v2, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    .line 296
    iget-object v0, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    const/4 v7, 0x0

    .line 4333
    iput-object v7, v0, Lcom/tkay/splashad/a/d;->b:Lcom/tkay/splashad/a/b;

    .line 297
    iput-object v7, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    .line 300
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 301
    iget-object v0, p0, Lcom/tkay/splashad/a/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/h;

    .line 302
    iget-object v7, p0, Lcom/tkay/splashad/a/c;->d:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v7, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    if-eqz v0, :cond_1

    .line 304
    instance-of p1, v0, Lcom/tkay/splashad/a/e;

    if-eqz p1, :cond_2

    .line 305
    check-cast v0, Lcom/tkay/splashad/a/e;

    invoke-virtual {v0}, Lcom/tkay/splashad/a/e;->j()V

    return-void

    .line 308
    :cond_1
    new-instance v0, Lcom/tkay/core/common/f/d;

    invoke-direct {v0}, Lcom/tkay/core/common/f/d;-><init>()V

    .line 309
    iget-object v7, p0, Lcom/tkay/splashad/a/c;->c:Ljava/lang/String;

    invoke-virtual {v0, v7}, Lcom/tkay/core/common/f/d;->x(Ljava/lang/String;)V

    .line 310
    invoke-virtual {v0, p1}, Lcom/tkay/core/common/f/d;->y(Ljava/lang/String;)V

    .line 311
    invoke-virtual {v0, v6}, Lcom/tkay/core/common/f/d;->z(Ljava/lang/String;)V

    .line 312
    invoke-virtual {v0, v5}, Lcom/tkay/core/common/f/d;->w(Ljava/lang/String;)V

    .line 313
    invoke-virtual {v0, v4}, Lcom/tkay/core/common/f/d;->a(Z)V

    .line 314
    invoke-static {v3, v2, v1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    :cond_2
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;
    .locals 14
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

    move-object v0, p0

    .line 116
    iget-object v1, v0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 1392
    iget-object v3, v1, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    if-eqz v3, :cond_0

    iget-object v3, v1, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->d()I

    move-result v3

    if-gtz v3, :cond_0

    .line 1393
    iget-object v2, v1, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    :cond_0
    if-eqz v2, :cond_3

    .line 118
    invoke-virtual {v2}, Lcom/tkay/core/common/f/a;->h()Lcom/tkay/core/common/f/d;

    move-result-object v3

    if-eqz p2, :cond_2

    const/4 v4, 0x1

    const/4 v5, -0x1

    const/4 v6, 0x0

    .line 120
    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->H()I

    move-result v8

    .line 1451
    iget-object v9, v3, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    .line 121
    invoke-virtual {v3}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v11

    .line 1598
    iget v1, v3, Lcom/tkay/core/common/f/d;->q:I

    const/4 v10, 0x3

    if-ne v1, v10, :cond_1

    const/4 v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    :goto_0
    move v12, v1

    const-string v10, ""

    const-string v13, ""

    .line 120
    invoke-static/range {v3 .. v13}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZIILjava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;)V

    :cond_2
    return-object v2

    .line 127
    :cond_3
    invoke-super/range {p0 .. p4}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v1

    return-object v1
.end method

.method public final synthetic a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;
    .locals 2

    .line 60
    check-cast p1, Lcom/tkay/splashad/a/g;

    .line 5108
    new-instance v0, Lcom/tkay/splashad/a/e;

    invoke-virtual {p1}, Lcom/tkay/splashad/a/g;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/splashad/a/e;-><init>(Landroid/content/Context;)V

    .line 5109
    iget v1, p1, Lcom/tkay/splashad/a/g;->h:I

    .line 6106
    iput v1, v0, Lcom/tkay/splashad/a/e;->T:I

    .line 5110
    iget p1, p1, Lcom/tkay/splashad/a/g;->d:I

    invoke-virtual {v0, p1}, Lcom/tkay/splashad/a/e;->a(I)V

    return-object v0
.end method

.method protected final a()Ljava/lang/String;
    .locals 1

    const-string v0, "4"

    return-object v0
.end method

.method public final declared-synchronized a(Landroid/app/Activity;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/a;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/splashad/api/TYSplashSkipInfo;Ljava/lang/String;Ljava/util/Map;)V
    .locals 13
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Landroid/view/ViewGroup;",
            "Lcom/tkay/splashad/a/a;",
            "Lcom/tkay/core/api/TYEventInterface;",
            "Lcom/tkay/splashad/api/TYSplashSkipInfo;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    move-object v11, p0

    monitor-enter p0

    const/4 v0, 0x0

    const/4 v1, 0x1

    move-object v4, p1

    move-object/from16 v6, p7

    .line 131
    :try_start_0
    invoke-virtual {p0, p1, v0, v1, v6}, Lcom/tkay/splashad/a/c;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v3

    if-nez v3, :cond_0

    const-string v0, "tkay"

    const-string v1, "Splash No Cache."

    .line 133
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 134
    monitor-exit p0

    return-void

    :cond_0
    if-eqz v3, :cond_2

    .line 137
    :try_start_1
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_2

    .line 139
    invoke-virtual {p0, v3}, Lcom/tkay/splashad/a/c;->a(Lcom/tkay/core/common/f/a;)V

    .line 143
    invoke-virtual {p0}, Lcom/tkay/splashad/a/c;->f()V

    .line 146
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->d()I

    move-result v0

    add-int/2addr v0, v1

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/a;->a(I)V

    .line 149
    iget-object v0, v11, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    if-eqz v0, :cond_1

    iget-object v0, v11, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    .line 2399
    iget-object v0, v0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    if-ne v0, v3, :cond_1

    .line 150
    iget-object v0, v11, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    const/4 v1, 0x0

    .line 3337
    iput-object v1, v0, Lcom/tkay/splashad/a/d;->d:Lcom/tkay/core/common/f/a;

    .line 153
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v12, Lcom/tkay/splashad/a/c$1;

    move-object v1, v12

    move-object v2, p0

    move-object v4, p1

    move-object/from16 v5, p6

    move-object/from16 v6, p7

    move-object/from16 v7, p4

    move-object/from16 v8, p5

    move-object v9, p2

    move-object/from16 v10, p3

    invoke-direct/range {v1 .. v10}, Lcom/tkay/splashad/a/c$1;-><init>(Lcom/tkay/splashad/a/c;Lcom/tkay/core/common/f/a;Landroid/app/Activity;Ljava/lang/String;Ljava/util/Map;Lcom/tkay/core/api/TYEventInterface;Lcom/tkay/splashad/api/TYSplashSkipInfo;Landroid/view/ViewGroup;Lcom/tkay/splashad/a/a;)V

    invoke-virtual {v0, v12}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 252
    :cond_2
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(Landroid/content/Context;Lcom/tkay/core/api/TYMediationRequestInfo;Ljava/lang/String;Lcom/tkay/splashad/a/b;IILcom/tkay/core/common/b/b;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/tkay/core/api/TYMediationRequestInfo;",
            "Ljava/lang/String;",
            "Lcom/tkay/splashad/a/b;",
            "II",
            "Lcom/tkay/core/common/b/b;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 85
    new-instance v4, Lcom/tkay/splashad/a/g;

    invoke-direct {v4}, Lcom/tkay/splashad/a/g;-><init>()V

    .line 86
    invoke-virtual {v4, p1}, Lcom/tkay/splashad/a/g;->a(Landroid/content/Context;)V

    .line 87
    iput-object p2, v4, Lcom/tkay/splashad/a/g;->b:Lcom/tkay/core/api/TYMediationRequestInfo;

    .line 88
    iput-object p3, v4, Lcom/tkay/splashad/a/g;->c:Ljava/lang/String;

    .line 89
    iput p5, v4, Lcom/tkay/splashad/a/g;->h:I

    .line 91
    iput p6, v4, Lcom/tkay/splashad/a/g;->d:I

    .line 92
    iput-object p7, v4, Lcom/tkay/splashad/a/g;->e:Lcom/tkay/core/common/b/b;

    .line 93
    iput-object p8, v4, Lcom/tkay/splashad/a/g;->g:Ljava/util/Map;

    .line 95
    iget-object v1, p0, Lcom/tkay/splashad/a/c;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/splashad/a/c;->c:Ljava/lang/String;

    const-string v2, "4"

    move-object v0, p0

    move-object v5, p4

    invoke-super/range {v0 .. v5}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/common/b/a;)V
    .locals 1

    if-eqz p2, :cond_0

    .line 101
    instance-of v0, p2, Lcom/tkay/splashad/a/b;

    if-eqz v0, :cond_0

    .line 102
    check-cast p2, Lcom/tkay/splashad/a/b;

    invoke-virtual {p2, p1}, Lcom/tkay/splashad/a/b;->setRequestId(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final synthetic a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)Z
    .locals 9

    .line 60
    check-cast p3, Lcom/tkay/splashad/a/g;

    if-eqz p4, :cond_0

    .line 6261
    instance-of v0, p4, Lcom/tkay/splashad/a/b;

    if-eqz v0, :cond_0

    .line 6262
    new-instance v1, Lcom/tkay/splashad/a/d;

    iget-object v0, p0, Lcom/tkay/splashad/a/c;->b:Landroid/content/Context;

    invoke-direct {v1, v0}, Lcom/tkay/splashad/a/d;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    .line 6263
    invoke-virtual {p3}, Lcom/tkay/splashad/a/g;->a()Landroid/content/Context;

    move-result-object v2

    iget-object v5, p3, Lcom/tkay/splashad/a/g;->b:Lcom/tkay/core/api/TYMediationRequestInfo;

    iget-object v6, p3, Lcom/tkay/splashad/a/g;->c:Ljava/lang/String;

    move-object v7, p4

    check-cast v7, Lcom/tkay/splashad/a/b;

    iget v8, p3, Lcom/tkay/splashad/a/g;->h:I

    move-object v3, p1

    move-object v4, p2

    invoke-virtual/range {v1 .. v8}, Lcom/tkay/splashad/a/d;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYMediationRequestInfo;Ljava/lang/String;Lcom/tkay/splashad/a/b;I)V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final g()Z
    .locals 1

    .line 256
    iget-object v0, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/splashad/a/d;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final i()Z
    .locals 1

    .line 322
    iget-object v0, p0, Lcom/tkay/splashad/a/c;->a:Lcom/tkay/splashad/a/d;

    if-eqz v0, :cond_1

    .line 323
    iget-object v0, v0, Lcom/tkay/splashad/a/d;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0

    .line 325
    :cond_1
    invoke-super {p0}, Lcom/tkay/core/common/f;->i()Z

    move-result v0

    return v0
.end method

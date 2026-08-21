.class public final Lcom/tkay/rewardvideo/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;


# instance fields
.field a:J

.field b:J

.field c:Z

.field d:Lcom/tkay/core/common/f/d;

.field e:Z

.field f:J

.field g:J

.field h:I

.field i:Z

.field private j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

.field private k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

.field private l:Lcom/tkay/core/common/g/c;

.field private m:J

.field private n:J


# direct methods
.method public constructor <init>(Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;Lcom/tkay/core/common/g/c;Lcom/tkay/rewardvideo/api/TYRewardVideoListener;)V
    .locals 2

    .line 59
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 55
    iput v0, p0, Lcom/tkay/rewardvideo/a/e;->h:I

    const-wide/16 v0, 0x0

    .line 60
    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->a:J

    .line 61
    iput-object p3, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    .line 62
    iput-object p1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    .line 63
    iput-object p2, p0, Lcom/tkay/rewardvideo/a/e;->l:Lcom/tkay/core/common/g/c;

    const/4 p1, 0x1

    .line 65
    iput-boolean p1, p0, Lcom/tkay/rewardvideo/a/e;->i:Z

    return-void
.end method

.method private a()Lcom/tkay/core/common/f/d;
    .locals 4

    .line 377
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->d:Lcom/tkay/core/common/f/d;

    if-nez v0, :cond_0

    .line 378
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_0

    .line 379
    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->N()Lcom/tkay/core/common/f/d;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/rewardvideo/a/e;->d:Lcom/tkay/core/common/f/d;

    const/4 v1, 0x6

    .line 1594
    iput v1, v0, Lcom/tkay/core/common/f/d;->q:I

    .line 384
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->d:Lcom/tkay/core/common/f/d;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->X()Ljava/lang/String;

    move-result-object v0

    .line 385
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->d:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object v1

    .line 386
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->b(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object v0

    .line 388
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->d:Lcom/tkay/core/common/f/d;

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/f/d;->h(Ljava/lang/String;)V

    .line 392
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->d:Lcom/tkay/core/common/f/d;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/rewardvideo/a/e;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;
    .locals 0

    .line 37
    iget-object p0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    return-object p0
.end method

.method private a(Lcom/tkay/core/api/AdError;Lcom/tkay/core/common/f/d;)V
    .locals 3

    .line 415
    sget-object v0, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v2

    invoke-static {p2, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 417
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getNetworkInfoMap()Ljava/util/Map;

    move-result-object v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    invoke-static {p2, p1, v0}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;Ljava/util/Map;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/d;)V
    .locals 3

    .line 400
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getILRD()Ljava/lang/String;

    move-result-object v0

    .line 401
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 402
    invoke-virtual {p1, v0}, Lcom/tkay/core/common/f/d;->a(Ljava/lang/String;)V

    .line 405
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/rewardvideo/a/e;->i:Z

    if-eqz v0, :cond_1

    .line 406
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1, p1}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 409
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/4 v1, 0x4

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v2}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v2

    invoke-virtual {v0, v1, p1, v2}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    .line 411
    sget-object v0, Lcom/tkay/core/common/b/f$i;->c:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v2, ""

    invoke-static {p1, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Ljava/lang/String;)V
    .locals 3

    .line 440
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 443
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/v;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 445
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v1

    invoke-virtual {v1, p0}, Lcom/tkay/core/common/v;->d(Ljava/lang/String;)V

    .line 446
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p0}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v1

    .line 447
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    invoke-virtual {v0}, Lcom/tkay/core/common/f/c;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, p0, v0}, Lcom/tkay/core/common/v;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/tkay/rewardvideo/a/a;->d(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private static b(Lcom/tkay/core/common/f/d;)V
    .locals 3

    .line 421
    sget-object v0, Lcom/tkay/core/common/b/f$i;->f:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v2, ""

    invoke-static {p0, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 422
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/16 v1, 0x9

    invoke-virtual {v0, v1, p0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    return-void
.end method

.method private static c(Lcom/tkay/core/common/f/d;)V
    .locals 3

    .line 426
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    const/4 v1, 0x6

    invoke-virtual {v0, v1, p0}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;)V

    .line 428
    sget-object v0, Lcom/tkay/core/common/b/f$i;->d:Ljava/lang/String;

    sget-object v1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v2, ""

    invoke-static {p0, v0, v1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private d(Lcom/tkay/core/common/f/d;)V
    .locals 3

    .line 433
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v1

    const/16 v2, 0xd

    invoke-virtual {v0, v2, p1, v1}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    .line 435
    invoke-direct {p0, p1}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/core/common/f/d;)V

    return-void
.end method


# virtual methods
.method public final onAgainReward()V
    .locals 8

    .line 362
    invoke-direct {p0}, Lcom/tkay/rewardvideo/a/e;->a()Lcom/tkay/core/common/f/d;

    move-result-object v7

    .line 364
    iget-boolean v0, p0, Lcom/tkay/rewardvideo/a/e;->e:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->l:Lcom/tkay/core/common/g/c;

    if-eqz v0, :cond_0

    .line 366
    iget-wide v1, p0, Lcom/tkay/rewardvideo/a/e;->f:J

    iget-wide v3, p0, Lcom/tkay/rewardvideo/a/e;->g:J

    iget-object v5, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    move-object v6, v7

    invoke-interface/range {v0 .. v6}, Lcom/tkay/core/common/g/c;->a(JJLcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;)V

    :cond_0
    const/4 v0, 0x1

    .line 368
    iput-boolean v0, p0, Lcom/tkay/rewardvideo/a/e;->e:Z

    .line 370
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_1

    instance-of v1, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v1, :cond_1

    .line 371
    check-cast v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v7, v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method

.method public final onDeeplinkCallback(Z)V
    .locals 3

    .line 273
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v1, :cond_0

    .line 274
    check-cast v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V

    .line 276
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_2

    .line 277
    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    if-eqz p1, :cond_1

    .line 278
    sget-object p1, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    goto :goto_0

    :cond_1
    sget-object p1, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    .line 279
    :goto_0
    sget-object v1, Lcom/tkay/core/common/b/f$i;->i:Ljava/lang/String;

    const-string v2, ""

    invoke-static {v0, v1, p1, v2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 2

    .line 285
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_0

    instance-of v1, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v1, :cond_0

    .line 286
    check-cast v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, p1, v1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V

    .line 288
    :cond_0
    iget-object p1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz p1, :cond_1

    .line 289
    invoke-virtual {p1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p1

    .line 290
    sget-object p2, Lcom/tkay/core/common/b/f$i;->j:Ljava/lang/String;

    sget-object v0, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v1, ""

    invoke-static {p1, p2, v0, v1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final onReward()V
    .locals 8

    .line 256
    iget-boolean v0, p0, Lcom/tkay/rewardvideo/a/e;->c:Z

    if-nez v0, :cond_0

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->l:Lcom/tkay/core/common/g/c;

    if-eqz v1, :cond_0

    .line 257
    iget-wide v2, p0, Lcom/tkay/rewardvideo/a/e;->m:J

    iget-wide v4, p0, Lcom/tkay/rewardvideo/a/e;->n:J

    iget-object v6, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v6}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v7

    invoke-interface/range {v1 .. v7}, Lcom/tkay/core/common/g/c;->a(JJLcom/tkay/core/api/TYBaseAdAdapter;Lcom/tkay/core/common/f/d;)V

    :cond_0
    const/4 v0, 0x1

    .line 259
    iput-boolean v0, p0, Lcom/tkay/rewardvideo/a/e;->c:Z

    .line 261
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_1

    .line 262
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onReward(Lcom/tkay/core/api/TYAdInfo;)V

    .line 265
    :cond_1
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_2

    .line 266
    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 267
    sget-object v1, Lcom/tkay/core/common/b/f$i;->h:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public final onRewardedVideoAdAgainPlayClicked()V
    .locals 3

    .line 350
    invoke-direct {p0}, Lcom/tkay/rewardvideo/a/e;->a()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 351
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v1, :cond_0

    if-eqz v0, :cond_0

    .line 352
    invoke-static {v0}, Lcom/tkay/rewardvideo/a/e;->c(Lcom/tkay/core/common/f/d;)V

    .line 355
    :cond_0
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v1, :cond_1

    instance-of v2, v1, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v2, :cond_1

    .line 356
    check-cast v1, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v0, v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onRewardedVideoAdAgainPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method

.method public final onRewardedVideoAdAgainPlayEnd()V
    .locals 4

    .line 318
    iget-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->g:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 319
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->g:J

    .line 322
    :cond_0
    invoke-direct {p0}, Lcom/tkay/rewardvideo/a/e;->a()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 323
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v1, :cond_1

    if-eqz v0, :cond_1

    .line 324
    invoke-static {v0}, Lcom/tkay/rewardvideo/a/e;->b(Lcom/tkay/core/common/f/d;)V

    .line 327
    :cond_1
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v1, :cond_2

    instance-of v2, v1, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v2, :cond_2

    .line 328
    check-cast v1, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v0, v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onRewardedVideoAdAgainPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_2
    return-void
.end method

.method public final onRewardedVideoAdAgainPlayFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    const/16 v0, 0x63

    .line 334
    iput v0, p0, Lcom/tkay/rewardvideo/a/e;->h:I

    const-string v0, "4006"

    .line 336
    invoke-static {v0, p1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 338
    invoke-direct {p0}, Lcom/tkay/rewardvideo/a/e;->a()Lcom/tkay/core/common/f/d;

    move-result-object p2

    .line 339
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_0

    if-eqz p2, :cond_0

    .line 340
    invoke-direct {p0, p1, p2}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/core/api/AdError;Lcom/tkay/core/common/f/d;)V

    .line 343
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_1

    instance-of v1, v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v1, :cond_1

    .line 344
    check-cast v0, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {p2, v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object p2

    invoke-interface {v0, p1, p2}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method

.method public final onRewardedVideoAdAgainPlayStart()V
    .locals 4

    const/4 v0, 0x0

    .line 298
    iput v0, p0, Lcom/tkay/rewardvideo/a/e;->h:I

    .line 300
    iget-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->f:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 301
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->f:J

    .line 303
    :cond_0
    iput-wide v2, p0, Lcom/tkay/rewardvideo/a/e;->g:J

    .line 305
    invoke-direct {p0}, Lcom/tkay/rewardvideo/a/e;->a()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 306
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v1, :cond_1

    if-eqz v0, :cond_1

    .line 1433
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/k/a;->a(Landroid/content/Context;)Lcom/tkay/core/common/k/a;

    move-result-object v1

    const/16 v2, 0xd

    iget-object v3, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v3}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v3

    invoke-virtual {v1, v2, v0, v3}, Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;)V

    .line 1435
    invoke-direct {p0, v0}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/core/common/f/d;)V

    .line 311
    :cond_1
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v1, :cond_2

    instance-of v2, v1, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    if-eqz v2, :cond_2

    .line 312
    check-cast v1, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;

    iget-object v2, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v0, v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;->onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_2
    return-void
.end method

.method public final onRewardedVideoAdClosed()V
    .locals 11

    .line 186
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_5

    .line 187
    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 189
    iget v1, p0, Lcom/tkay/rewardvideo/a/e;->h:I

    if-nez v1, :cond_0

    .line 191
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getDismissType()I

    move-result v1

    :cond_0
    if-nez v1, :cond_1

    const/4 v1, 0x1

    .line 197
    :cond_1
    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->y(I)V

    .line 199
    sget-object v1, Lcom/tkay/core/common/b/f$i;->e:Ljava/lang/String;

    sget-object v2, Lcom/tkay/core/common/b/f$i;->l:Ljava/lang/String;

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 201
    iget-wide v3, p0, Lcom/tkay/rewardvideo/a/e;->a:J

    const-wide/16 v1, 0x0

    cmp-long v1, v3, v1

    if-eqz v1, :cond_2

    .line 202
    iget-boolean v2, p0, Lcom/tkay/rewardvideo/a/e;->c:Z

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v7

    iget-wide v9, p0, Lcom/tkay/rewardvideo/a/e;->b:J

    sub-long/2addr v7, v9

    move-object v1, v0

    invoke-static/range {v1 .. v8}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;ZJJJ)V

    .line 205
    :cond_2
    iget-boolean v1, p0, Lcom/tkay/rewardvideo/a/e;->c:Z

    invoke-static {v0, v1}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/d;Z)V

    .line 207
    iget-boolean v1, p0, Lcom/tkay/rewardvideo/a/e;->c:Z

    if-eqz v1, :cond_3

    .line 209
    :try_start_0
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->clearImpressionListener()V

    .line 210
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->destory()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 216
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    new-instance v2, Lcom/tkay/rewardvideo/a/e$1;

    invoke-direct {v2, p0}, Lcom/tkay/rewardvideo/a/e$1;-><init>(Lcom/tkay/rewardvideo/a/e;)V

    const-wide/16 v3, 0x1388

    invoke-virtual {v1, v2, v3, v4}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    :catchall_0
    :goto_0
    if-eqz v0, :cond_4

    .line 230
    invoke-virtual {v0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/rewardvideo/a/e;->a(Ljava/lang/String;)V

    .line 233
    :cond_4
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v1, :cond_5

    .line 234
    iget-object v2, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v0, v2}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/f/d;Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    invoke-interface {v1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdClosed(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_5
    return-void
.end method

.method public final onRewardedVideoAdPlayClicked()V
    .locals 2

    .line 243
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_0

    .line 244
    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 246
    invoke-static {v0}, Lcom/tkay/rewardvideo/a/e;->c(Lcom/tkay/core/common/f/d;)V

    .line 248
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_1

    .line 249
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_1
    return-void
.end method

.method public final onRewardedVideoAdPlayEnd()V
    .locals 4

    .line 112
    iget-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->n:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    .line 113
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->n:J

    .line 116
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v0, :cond_2

    .line 118
    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getDismissType()I

    move-result v0

    if-nez v0, :cond_1

    const/4 v0, 0x3

    .line 119
    iput v0, p0, Lcom/tkay/rewardvideo/a/e;->h:I

    .line 122
    :cond_1
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v0

    .line 124
    invoke-static {v0}, Lcom/tkay/rewardvideo/a/e;->b(Lcom/tkay/core/common/f/d;)V

    .line 127
    :cond_2
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v0, :cond_3

    .line 128
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v1}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_3
    return-void
.end method

.method public final onRewardedVideoAdPlayFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 7

    const/16 v0, 0x63

    .line 136
    iput v0, p0, Lcom/tkay/rewardvideo/a/e;->h:I

    const-string v0, "4006"

    .line 138
    invoke-static {v0, p1, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 140
    iget-object p2, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz p2, :cond_2

    .line 142
    invoke-virtual {p2}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object p2

    .line 144
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    const/16 v1, 0x42

    if-ne v0, v1, :cond_0

    const/4 v0, 0x0

    .line 147
    iput-boolean v0, p0, Lcom/tkay/rewardvideo/a/e;->i:Z

    .line 150
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v0

    .line 151
    invoke-direct {p0, p1, p2}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/core/api/AdError;Lcom/tkay/core/common/f/d;)V

    if-eqz p2, :cond_1

    .line 155
    invoke-virtual {p2}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/tkay/rewardvideo/a/e;->a(Ljava/lang/String;)V

    .line 161
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    .line 162
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, v0}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v1

    const/4 p2, 0x0

    .line 163
    invoke-virtual {v1, p2}, Lcom/tkay/rewardvideo/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result p2

    if-eqz p2, :cond_2

    .line 164
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v2

    const/4 v3, 0x7

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    .line 170
    :cond_2
    iget-object p2, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz p2, :cond_3

    .line 171
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V

    :cond_3
    return-void
.end method

.method public final onRewardedVideoAdPlayStart()V
    .locals 9

    .line 72
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->a:J

    .line 73
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->b:J

    .line 74
    iget-wide v2, p0, Lcom/tkay/rewardvideo/a/e;->m:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-nez v2, :cond_0

    .line 75
    iput-wide v0, p0, Lcom/tkay/rewardvideo/a/e;->m:J

    .line 77
    :cond_0
    iget-object v0, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    invoke-static {v0}, Lcom/tkay/core/common/b/i;->a(Lcom/tkay/core/common/b/n;)Lcom/tkay/core/common/b/i;

    move-result-object v0

    .line 79
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->k:Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;

    if-eqz v1, :cond_2

    .line 81
    invoke-virtual {v1}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    .line 83
    invoke-direct {p0, v1}, Lcom/tkay/rewardvideo/a/e;->a(Lcom/tkay/core/common/f/d;)V

    if-eqz v1, :cond_1

    .line 86
    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    .line 87
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v2

    invoke-virtual {v2, v1, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Lcom/tkay/core/api/TYAdInfo;)V

    goto :goto_0

    :cond_1
    const-string v1, ""

    .line 93
    :goto_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 94
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/rewardvideo/a/a;

    move-result-object v3

    const/4 v1, 0x0

    .line 95
    invoke-virtual {v3, v1}, Lcom/tkay/rewardvideo/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 96
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v4

    const/4 v5, 0x6

    const/4 v6, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    invoke-virtual/range {v3 .. v8}, Lcom/tkay/rewardvideo/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    .line 101
    :cond_2
    iget-boolean v1, p0, Lcom/tkay/rewardvideo/a/e;->i:Z

    if-eqz v1, :cond_3

    .line 102
    iget-object v1, p0, Lcom/tkay/rewardvideo/a/e;->j:Lcom/tkay/rewardvideo/api/TYRewardVideoListener;

    if-eqz v1, :cond_3

    .line 103
    invoke-interface {v1, v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoListener;->onRewardedVideoAdPlayStart(Lcom/tkay/core/api/TYAdInfo;)V

    :cond_3
    return-void
.end method

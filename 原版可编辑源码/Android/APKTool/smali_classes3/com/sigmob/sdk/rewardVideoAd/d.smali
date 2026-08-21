.class public Lcom/sigmob/sdk/rewardVideoAd/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/common/f$b;
.implements Lcom/sigmob/sdk/base/network/d$a;
.implements Lcom/sigmob/sdk/rewardVideoAd/e$a;


# instance fields
.field private final a:Landroid/os/Handler;

.field private b:Lcom/sigmob/sdk/rewardVideoAd/f;

.field private c:Z

.field private d:Lcom/czhj/sdk/common/models/AdStatus;

.field private e:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation
.end field

.field private f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private g:J

.field private h:J

.field private i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private j:I

.field private final k:I

.field private l:Ljava/lang/String;

.field private m:Lcom/sigmob/sdk/rewardVideoAd/e;

.field private n:Lcom/sigmob/sdk/rewardVideoAd/g;

.field private o:Z


# direct methods
.method protected constructor <init>(Z)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0x2001

    iput v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->k:I

    iput-boolean p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->o:Z

    new-instance p1, Lcom/sigmob/sdk/rewardVideoAd/d$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    invoke-direct {p1, p0, v0}, Lcom/sigmob/sdk/rewardVideoAd/d$1;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;Landroid/os/Looper;)V

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/rewardVideoAd/d;J)J
    .locals 0

    iput-wide p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    return-wide p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/czhj/sdk/common/models/AdStatus;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/rewardVideoAd/d;Ljava/util/List;)Ljava/util/List;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    return-object p1
.end method

.method private a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/d$7;

    invoke-direct {v0, p0, p5, p4, p3}, Lcom/sigmob/sdk/rewardVideoAd/d$7;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;Ljava/lang/String;Ljava/lang/String;I)V

    invoke-static {p2, p6, p1, v0}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/z$a;)V

    return-void
.end method

.method private a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/a;Lcom/sigmob/sdk/base/network/d$a;)V
    .locals 8

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    invoke-virtual {p2}, Lcom/sigmob/sdk/rewardVideoAd/a;->a()Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setRequest_scene_type(I)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    sget-object v1, Lcom/sigmob/sdk/rewardVideoAd/a;->c:Lcom/sigmob/sdk/rewardVideoAd/a;

    if-eq p2, v1, :cond_0

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v7, 0x0

    const-string v2, "request"

    const-string v3, "play"

    move-object v6, p1

    invoke-static/range {v2 .. v7}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_0
    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->e()Z

    move-result p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setExpired(Z)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-static {p1, p3}, Lcom/sigmob/sdk/base/network/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/network/d$a;)V

    const/4 p2, 0x0

    iput p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->j:I

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "adsRequest loadAdRequest = ["

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "], placementId = ["

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V
    .locals 0

    invoke-direct/range {p0 .. p6}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    return-void
.end method

.method private a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/rewardVideoAd/d$8;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d$8;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/rewardVideoAd/d;J)J
    .locals 0

    iput-wide p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    return-wide p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/rewardVideoAd/d;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    return-object p0
.end method

.method private b(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 2

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->b:Lcom/sigmob/sdk/rewardVideoAd/a;

    new-instance v1, Lcom/sigmob/sdk/rewardVideoAd/d$6;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/rewardVideoAd/d$6;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;)V

    invoke-direct {p0, p1, v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/a;Lcom/sigmob/sdk/base/network/d$a;)V

    return-void
.end method

.method private b(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/rewardVideoAd/d$10;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d$10;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic c(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    return-object p0
.end method

.method private c(Lcom/sigmob/windad/WindAdError;)V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    return-void

    :cond_0
    if-nez p1, :cond_1

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const/4 v2, 0x0

    const-string v3, "ready"

    invoke-static {v3, v2, v0, v1, v2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    goto :goto_0

    :cond_1
    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_3

    return-void

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/rewardVideoAd/d$2;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d$2;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;Lcom/sigmob/windad/WindAdError;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic d(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    return-object p0
.end method

.method static synthetic e(Lcom/sigmob/sdk/rewardVideoAd/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->f()V

    return-void
.end method

.method private e()Z
    .locals 6

    iget-wide v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-wide v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    cmp-long v0, v4, v2

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    sub-long/2addr v2, v4

    iget-wide v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    cmp-long v0, v2, v4

    if-lez v0, :cond_1

    const/4 v1, 0x1

    :cond_1
    :goto_0
    return v1
.end method

.method private f()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/rewardVideoAd/d$9;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/rewardVideoAd/d$9;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic f(Lcom/sigmob/sdk/rewardVideoAd/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    return-void
.end method

.method static synthetic g(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/g;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    return-object p0
.end method

.method private g()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_channel()Ljava/lang/String;

    move-result-object v1

    const-string v2, "1000"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/sigmob/sdk/base/common/f;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    return-void
.end method

.method static synthetic h(Lcom/sigmob/sdk/rewardVideoAd/d;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->l:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/rewardVideoAd/d;)Lcom/sigmob/sdk/rewardVideoAd/f;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->b:Lcom/sigmob/sdk/rewardVideoAd/f;

    return-object p0
.end method

.method private j(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z
    .locals 1

    :try_start_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->isEndCardIndexExist()Z

    move-result p1

    if-nez p1, :cond_1

    const-string v0, "endIndex file not ready"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return p1

    :catchall_0
    const/4 p1, 0x0

    return p1
.end method

.method private k(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/rewardVideoAd/e;
    .locals 3

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY_CHECK_FAIL:Lcom/sigmob/windad/WindAdError;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v1, :cond_0

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY_HAS_PLAYING:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v1

    :goto_0
    invoke-virtual {v0, v1}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    goto :goto_1

    :cond_0
    if-nez p1, :cond_1

    const-string v1, "not ready adUnit"

    goto :goto_0

    :cond_1
    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    if-nez v1, :cond_2

    const-string v1, "interstitial object is null"

    goto :goto_0

    :cond_2
    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v2, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v1, v2, :cond_3

    const-string v1, "ad status is not ready"

    goto :goto_0

    :cond_3
    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->e()Z

    move-result v1

    if-eqz v1, :cond_4

    const-string v1, "ad unit is expired"

    goto :goto_0

    :cond_4
    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->j(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v1

    if-nez v1, :cond_5

    const-string v1, "check ad unit endcard is invalid"

    goto :goto_0

    :goto_1
    const/4 v1, 0x0

    goto :goto_2

    :cond_5
    const/4 v1, 0x1

    :goto_2
    if-nez v1, :cond_6

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/windad/WindAdError;)V

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const-string v2, "play"

    invoke-static {v2, v0, p1, v1}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Lcom/sigmob/windad/WindAdError;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    const/4 p1, 0x0

    return-object p1

    :cond_6
    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    return-object p1
.end method


# virtual methods
.method public a(ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 1

    const-string p3, "0"

    const-string v0, "respond"

    invoke-static {v0, p3, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-static {v0, p3, p1, p2, p4}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-static {p1}, Lcom/sigmob/windad/WindAdError;->getWindAdError(I)Lcom/sigmob/windad/WindAdError;

    move-result-object p3

    if-nez p3, :cond_0

    sget-object p3, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p3, p1, p2}, Lcom/sigmob/windad/WindAdError;->setErrorMessage(ILjava/lang/String;)V

    :cond_0
    invoke-direct {p0, p3}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/windad/WindAdError;)V

    invoke-direct {p0, p3}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 6

    iget-object v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const-string v0, "loadstart"

    const/4 v1, 0x0

    const/4 v3, 0x0

    const/4 v5, 0x0

    move-object v2, p1

    invoke-static/range {v0 .. v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->y:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 8

    const-string v0, "onInterstitialLoaded() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->z:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/sigmob/sdk/base/common/a;->A:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    const/16 v1, 0x2001

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "1"

    goto :goto_1

    :cond_1
    const-string v0, "0"

    :goto_1
    move-object v2, v0

    const/4 v4, 0x0

    iget-object v5, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const/4 v6, 0x0

    const-string v1, "loadend"

    move-object v3, p1

    invoke-static/range {v1 .. v6}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    int-to-long p1, p1

    iput-wide p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    const/4 p1, 0x0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    goto :goto_2

    :cond_2
    sget-object v7, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v7, p2}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v3

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object v5

    const-string v2, "load"

    move-object v0, p0

    move-object v1, p1

    move-object v6, v7

    invoke-direct/range {v0 .. v6}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V

    invoke-direct {p0, v7}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    :cond_3
    :goto_2
    return-void
.end method

.method a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 4

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    if-eqz p1, :cond_5

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_0

    :cond_0
    :try_start_0
    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-static {}, Lcom/sigmob/sdk/Sigmob;->getInstance()Lcom/sigmob/sdk/Sigmob;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/Sigmob;->getSigMobError()Lcom/sigmob/windad/WindAdError;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "check loadAd error "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    const-string v1, "load"

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v2, v3}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object v1

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->l:Ljava/lang/String;

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    if-nez v0, :cond_2

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/e;

    iget-boolean v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->o:Z

    invoke-direct {v0, p0, v1}, Lcom/sigmob/sdk/rewardVideoAd/e;-><init>(Lcom/sigmob/sdk/base/common/m$b;Z)V

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    :cond_3
    invoke-virtual {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->a()Z

    move-result v0

    if-eqz v0, :cond_4

    iget p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->j:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->j:I

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v1, 0x0

    invoke-virtual {p1, v1, v0}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "adsRequest isReady  placementId = ["

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->l:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "]"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->f()V

    invoke-direct {p0, v1}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    return-void

    :cond_4
    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/f;->l()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCampid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/f;->k()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCrid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    const/16 v1, 0x2001

    invoke-static {}, Lcom/sigmob/sdk/base/i;->a()Lcom/sigmob/sdk/base/i;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/i;->p()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    sget-object v0, Lcom/sigmob/sdk/rewardVideoAd/a;->c:Lcom/sigmob/sdk/rewardVideoAd/a;

    invoke-direct {p0, p1, v0, p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/a;Lcom/sigmob/sdk/base/network/d$a;)V

    return-void

    :cond_5
    :goto_0
    const-string p1, "loadAd error loadAdRequest or placementId is null"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    return-void
.end method

.method public a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/g;)V
    .locals 3

    iput-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    if-eqz p1, :cond_7

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-gtz p1, :cond_0

    goto/16 :goto_2

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const/4 p2, 0x0

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->k(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/rewardVideoAd/e;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    invoke-interface {v0, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setLoad_id(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setBid_token(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneId()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setAd_scene_id(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneDesc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->setAd_scene_desc(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMacroCommon()Lcom/sigmob/sdk/base/models/SigMacroCommon;

    move-result-object p2

    instance-of v0, p2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneDesc()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    move-object v0, p2

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneDesc()Ljava/lang/String;

    move-result-object v1

    const-string v2, "_ADSCENE_"

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    move-object v0, p2

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getAdSceneId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "_ADSCENEID_"

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    move-object v0, p2

    check-cast v0, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideoPath()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/sigmob/sdk/base/common/f;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "_VMD5_"

    invoke-virtual {v0, v2, v1}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getVideo_url()Ljava/lang/String;

    move-result-object v0

    const-string v1, "UTF-8"

    invoke-static {v0, v1}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    check-cast p2, Lcom/sigmob/sdk/base/models/SigMacroCommon;

    const-string v1, "_VURL_"

    invoke-virtual {p2, v1, v0}, Lcom/sigmob/sdk/base/models/SigMacroCommon;->addMarcoKey(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p2

    invoke-virtual {p2}, Ljava/io/UnsupportedEncodingException;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    :cond_4
    :goto_0
    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result p2

    sget-object v0, Lcom/sigmob/sdk/base/common/l;->i:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v0

    if-ne p2, v0, :cond_5

    new-instance p2, Lcom/sigmob/sdk/base/common/c;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-direct {p2, v0, p0, v1}, Lcom/sigmob/sdk/base/common/c;-><init>(Ljava/util/List;Lcom/sigmob/sdk/base/common/f$b;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    const/4 v0, 0x1

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/common/c;->a(Z)Z

    move-result p2

    if-nez p2, :cond_6

    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2, v0}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_1

    :cond_5
    iget-object p2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result p2

    const/4 v0, 0x2

    if-ne p2, v0, :cond_6

    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, p2, v0}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p2, v0, p0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    :cond_6
    :goto_1
    new-instance p2, Landroid/os/Bundle;

    invoke-direct {p2}, Landroid/os/Bundle;-><init>()V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isEnable_keep_on()Z

    move-result v0

    const-string v1, "enablekeepon"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isEnable_screen_lock_displayad()Z

    move-result v0

    const-string v1, "enablescreenlockdisplayad"

    invoke-virtual {p2, v1, v0}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {p1, v0, p2}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Landroid/os/Bundle;)V

    const-wide/16 p1, 0x0

    iput-wide p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    iput-wide p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    :cond_7
    :goto_2
    return-void
.end method

.method public a(Lcom/sigmob/sdk/rewardVideoAd/f;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->b:Lcom/sigmob/sdk/rewardVideoAd/f;

    return-void
.end method

.method public a(Ljava/util/List;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Lcom/sigmob/sdk/base/models/LoadAdRequest;",
            ")V"
        }
    .end annotation

    const-string v0, "0"

    const-string v1, "respond"

    if-eqz p1, :cond_7

    :try_start_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_7

    const/4 v2, 0x0

    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const-string v4, "1"

    new-instance v5, Lcom/sigmob/sdk/rewardVideoAd/d$3;

    invoke-direct {v5, p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d$3;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;Ljava/util/List;)V

    const/4 v6, 0x0

    invoke-static {v1, v4, v6, p2, v5}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    iget-object v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    if-nez v4, :cond_0

    new-instance v4, Lcom/sigmob/sdk/rewardVideoAd/e;

    iget-boolean v5, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->o:Z

    invoke-direct {v4, p0, v5}, Lcom/sigmob/sdk/rewardVideoAd/e;-><init>(Lcom/sigmob/sdk/base/common/m$b;Z)V

    iput-object v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    :cond_0
    iget-object v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    invoke-virtual {v4, v3}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v4

    if-nez v4, :cond_1

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->f()V

    invoke-static {p1}, Lcom/sigmob/sdk/base/common/f;->a(Ljava/util/List;)V

    iget-object v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v4

    :cond_2
    :goto_0
    invoke-interface {v4}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_3

    invoke-interface {v4}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_channel()Ljava/lang/String;

    move-result-object v7

    const-string v8, "1000"

    invoke-virtual {v7, v8}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_2

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v7

    invoke-virtual {v7, v5}, Lcom/sigmob/sdk/base/common/f;->e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto :goto_0

    :cond_3
    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCreativeType()I

    move-result v4

    sget-object v5, Lcom/sigmob/sdk/base/common/l;->i:Lcom/sigmob/sdk/base/common/l;

    invoke-virtual {v5}, Lcom/sigmob/sdk/base/common/l;->a()I

    move-result v5

    if-ne v4, v5, :cond_5

    new-instance v4, Lcom/sigmob/sdk/base/common/c;

    iget-object v5, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-direct {v4, p1, p0, v5}, Lcom/sigmob/sdk/base/common/c;-><init>(Ljava/util/List;Lcom/sigmob/sdk/base/common/f$b;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-virtual {v4, v2}, Lcom/sigmob/sdk/base/common/c;->a(Z)Z

    move-result p1

    if-eqz p1, :cond_4

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    invoke-virtual {v2, p1, v3}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    goto/16 :goto_1

    :cond_4
    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    int-to-long v2, p1

    iput-wide v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    invoke-direct {p0, v6}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    goto :goto_1

    :cond_5
    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result p1

    if-eqz p1, :cond_6

    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdExpiredTime()Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    int-to-long v4, p1

    iput-wide v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->g:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iput-wide v4, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->h:J

    invoke-direct {p0, v6}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    :cond_6
    invoke-virtual {v3}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result p1

    const/4 v2, 0x2

    if-eq p1, v2, :cond_8

    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iget-object v2, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    invoke-virtual {v2, p1, v3}, Lcom/sigmob/sdk/rewardVideoAd/e;->a(Ljava/util/Map;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object p1

    invoke-virtual {p1, v3, p0}, Lcom/sigmob/sdk/base/common/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/f$b;)V

    goto :goto_1

    :cond_7
    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    invoke-direct {p0, v2}, Lcom/sigmob/sdk/rewardVideoAd/d;->b(Lcom/sigmob/windad/WindAdError;)V

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v2

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, v0, v2, p1, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_INFORMATION_LOSE:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result p1

    invoke-virtual {v2}, Lcom/sigmob/windad/WindAdError;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v0, p1, v3, p2}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-direct {p0, v2}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    :cond_8
    :goto_1
    return-void
.end method

.method a()Z
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->e()Z

    move-result v2

    if-nez v2, :cond_1

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->j(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Z

    move-result v2

    if-nez v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    if-eqz v0, :cond_2

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/sigmob/sdk/base/common/f;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_2
    return v1
.end method

.method public b()V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    const-string v0, "onInterstitialShown() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->c:Z

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdPlayStart(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getDisableAutoLoad()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-nez v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " adsRequest onInterstitialShown: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCamp_id()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCampid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCrid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/d$4;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/rewardVideoAd/d$4;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 8

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    const/16 v1, 0x2001

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onInterstitialFailed() called with: errorCode = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    const-string v1, "loadend"

    const-string v2, "0"

    const/4 v4, 0x0

    const/4 v6, 0x0

    move-object v3, p1

    invoke-static/range {v1 .. v6}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->A:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_FILE_DOWNLOAD:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0, p2}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v4

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object v6

    const-string v3, "load"

    move-object v1, p0

    move-object v2, p1

    move-object v7, v0

    invoke-direct/range {v1 .. v7}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/rewardVideoAd/d;->c(Lcom/sigmob/windad/WindAdError;)V

    :cond_0
    return-void
.end method

.method public c()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    iget-object v0, v0, Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;->ecpm:Ljava/lang/Integer;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public c(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string v0, "onInterstitialClicked() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdClicked(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public c(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;)V
    .locals 8

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_source_channel()Ljava/lang/String;

    move-result-object v0

    const-string v1, "1000"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/f;->d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_0
    if-eqz p1, :cond_1

    sget-object v7, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_AD_PLAY:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v7, p2}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    invoke-direct {p0, v7}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/windad/WindAdError;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd_type()I

    move-result v4

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getadslot_id()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLoad_id()Ljava/lang/String;

    move-result-object v6

    const-string v3, "play"

    move-object v1, p0

    move-object v2, p1

    invoke-direct/range {v1 .. v7}, Lcom/sigmob/sdk/rewardVideoAd/d;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdError;)V

    :cond_1
    const-string p1, "onVideoPlayFail() called"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public d()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->e:Ljava/util/List;

    return-object v0
.end method

.method public d(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    const-string v0, "onInterstitialDismissed() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->m:Lcom/sigmob/sdk/rewardVideoAd/e;

    if-eqz v0, :cond_1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/rewardVideoAd/e;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    if-eqz v0, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdClosed(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public e(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    if-eqz p1, :cond_0

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCamp_id()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/common/f;->d(Ljava/lang/String;)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/f;->c(Ljava/lang/String;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/rewardVideoAd/d;->g()V

    :cond_0
    return-void
.end method

.method public f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 3

    const-string v0, "onVideoComplete() called"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->c:Z

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    if-eqz v1, :cond_0

    if-eqz p1, :cond_0

    new-instance v2, Lcom/sigmob/windad/rewardVideo/WindRewardInfo;

    invoke-direct {v2, v0}, Lcom/sigmob/windad/rewardVideo/WindRewardInfo;-><init>(Z)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v1, v2, p1}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdPlayComplete(Lcom/sigmob/windad/rewardVideo/WindRewardInfo;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public g(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p1, "onVideoPlay() called"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public h(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p1, "onVideoSkip() called"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public i(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->f:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->n:Lcom/sigmob/sdk/rewardVideoAd/g;

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAdslot_id()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdPlayEnd(Ljava/lang/String;)V

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getDisableAutoLoad()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->bidding_response:Lcom/sigmob/sdk/base/models/rtb/BiddingResponse;

    if-nez v0, :cond_1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " adsRequest onVideoClose: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getPlayMode()I

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->getBidToken()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCamp_id()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCampid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v0, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->i:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getCrid()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setLastCrid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    sget-object p1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->d:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object p1, p0, Lcom/sigmob/sdk/rewardVideoAd/d;->a:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/rewardVideoAd/d$5;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/rewardVideoAd/d$5;-><init>(Lcom/sigmob/sdk/rewardVideoAd/d;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    return-void
.end method

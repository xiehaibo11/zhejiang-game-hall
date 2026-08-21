.class public Lcom/sigmob/sdk/base/j;
.super Lcom/sigmob/sdk/base/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/j$a;
    }
.end annotation


# instance fields
.field private b:Lcom/sigmob/sdk/rewardVideoAd/c;

.field private c:Lcom/sigmob/sdk/rewardVideoAd/c;

.field private d:Landroid/os/Handler;

.field private e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

.field private f:Lcom/sigmob/sdk/rewardVideoAd/f;

.field private g:Z


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/WindAdRequest;Z)V
    .locals 2

    invoke-direct {p0, p1, p2}, Lcom/sigmob/sdk/base/g;-><init>(Lcom/sigmob/windad/WindAdRequest;Z)V

    invoke-static {}, Lcom/sigmob/sdk/base/common/f;->e()Lcom/sigmob/sdk/base/common/f;

    move-result-object v0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getAdType()I

    move-result p1

    invoke-virtual {v0, v1, p1}, Lcom/sigmob/sdk/base/common/f;->a(Ljava/lang/String;I)V

    iput-boolean p2, p0, Lcom/sigmob/sdk/base/j;->g:Z

    new-instance p1, Lcom/sigmob/sdk/rewardVideoAd/c;

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/rewardVideoAd/c;-><init>(Z)V

    iput-object p1, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/base/j;->d:Landroid/os/Handler;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/j;)Landroid/os/Handler;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/j;->d:Landroid/os/Handler;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/c;)Lcom/sigmob/sdk/rewardVideoAd/c;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    return-object p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/c;)Lcom/sigmob/sdk/rewardVideoAd/c;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    return-object p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/base/j;)Lcom/sigmob/sdk/rewardVideoAd/c;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    return-object p0
.end method

.method private d()Z
    .locals 5

    const/4 v0, 0x0

    const/4 v1, 0x1

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->loadAdFilter()Z

    move-result v2

    if-nez v2, :cond_0

    return v0

    :cond_0
    new-instance v2, Lcom/sigmob/sdk/base/j$a;

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    invoke-direct {v2, p0, v3}, Lcom/sigmob/sdk/base/j$a;-><init>(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/f;)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v3, :cond_1

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    invoke-virtual {v3}, Lcom/sigmob/sdk/rewardVideoAd/c;->a()Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v4, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne v3, v4, :cond_2

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/j$a;->onVideoAdPreLoadSuccess(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/base/j$a;->onVideoAdLoadSuccess(Ljava/lang/String;)V

    return v1

    :cond_1
    new-instance v3, Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-boolean v4, p0, Lcom/sigmob/sdk/base/j;->g:Z

    invoke-direct {v3, v4}, Lcom/sigmob/sdk/rewardVideoAd/c;-><init>(Z)V

    iput-object v3, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    :cond_2
    new-instance v3, Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v4, p0, Lcom/sigmob/sdk/base/j;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-direct {v3, v4}, Lcom/sigmob/sdk/base/models/LoadAdRequest;-><init>(Lcom/sigmob/windad/WindAdRequest;)V

    iput-object v3, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->getBid_token()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setBidToken(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->getBidFloor()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setBidFloor(I)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->getCurrency()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setCurrency(Ljava/lang/String;)V

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    invoke-virtual {v3, v2}, Lcom/sigmob/sdk/rewardVideoAd/c;->a(Lcom/sigmob/sdk/rewardVideoAd/f;)V

    :cond_3
    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v4, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusPlaying:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne v3, v4, :cond_5

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v3, :cond_4

    iget-object v2, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    if-eqz v2, :cond_6

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onVideoAdLoadSuccess |"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v2, v3}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdLoadSuccess(Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    new-instance v3, Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-boolean v4, p0, Lcom/sigmob/sdk/base/j;->g:Z

    invoke-direct {v3, v4}, Lcom/sigmob/sdk/rewardVideoAd/c;-><init>(Z)V

    iput-object v3, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    invoke-virtual {v3, v2}, Lcom/sigmob/sdk/rewardVideoAd/c;->a(Lcom/sigmob/sdk/rewardVideoAd/f;)V

    iget-object v2, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/rewardVideoAd/c;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->b()V

    goto :goto_0

    :cond_5
    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->b()V

    iget-object v2, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-object v3, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {v2, v3}, Lcom/sigmob/sdk/rewardVideoAd/c;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;)V

    sget-object v2, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v2, p0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_6
    :goto_0
    return v1

    :catchall_0
    move-exception v2

    sget-object v3, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v3}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v3

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    const-string v4, "error"

    invoke-static {v4, v3, v2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object v2

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    iget-object v1, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    if-eqz v1, :cond_7

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onVideoAdLoadError |"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    sget-object v2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_7
    return v0
.end method


# virtual methods
.method protected a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    if-eq v0, v1, :cond_0

    sget-object v0, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusNone:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v0, p0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdPreLoadFail(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, p1, v1}, Lcom/sigmob/sdk/rewardVideoAd/f;->onVideoAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method protected c()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->d()Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public destroy()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->b()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->b()V

    iput-object v1, p0, Lcom/sigmob/sdk/base/j;->c:Lcom/sigmob/sdk/rewardVideoAd/c;

    :cond_1
    return-void
.end method

.method public getEcpm()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->c()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public isReady()Z
    .locals 3

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->isInit()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    sget-object v2, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusReady:Lcom/czhj/sdk/common/models/AdStatus;

    if-ne v0, v2, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    invoke-virtual {v0}, Lcom/sigmob/sdk/rewardVideoAd/c;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    :cond_0
    return v1
.end method

.method public loadAd()Z
    .locals 1

    invoke-super {p0}, Lcom/sigmob/sdk/base/g;->loadAd()Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/j;->d()Z

    move-result v0

    return v0
.end method

.method public loadAd(Ljava/lang/String;)Z
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/g;->loadAd(Ljava/lang/String;)Z

    invoke-direct {p0}, Lcom/sigmob/sdk/base/j;->d()Z

    move-result p1

    return p1
.end method

.method public setAdLoadListener(Lcom/sigmob/sdk/rewardVideoAd/f;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/j;->f:Lcom/sigmob/sdk/rewardVideoAd/f;

    return-void
.end method

.method public show(Ljava/util/HashMap;Lcom/sigmob/sdk/rewardVideoAd/g;)Z
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/sigmob/sdk/rewardVideoAd/g;",
            ")Z"
        }
    .end annotation

    const-string v0, "scene_desc"

    const-string v1, "scene_id"

    const-string v2, "error"

    const/4 v3, 0x1

    :try_start_0
    const-string v4, "show"

    const-string v5, "init"

    iget-object v6, p0, Lcom/sigmob/sdk/base/j;->a:Lcom/sigmob/windad/WindAdRequest;

    const/4 v7, 0x0

    invoke-static {v4, v5, v6, v7}, Lcom/sigmob/sdk/base/common/z;->a(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/windad/WindAdRequest;Lcom/sigmob/sdk/base/common/z$a;)V

    iget-object v4, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    if-nez v4, :cond_1

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result p1

    const-string v0, "loadAdRequest is null"

    invoke-static {v2, p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p1

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    if-eqz p2, :cond_0

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_PLACEMENTID_EMPTY:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/sigmob/sdk/rewardVideoAd/g;->onVideoAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_0
    const/4 p1, 0x0

    return p1

    :cond_1
    if-eqz p1, :cond_3

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    iget-object v4, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1, v1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v4, v1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setAd_scene_id(Ljava/lang/String;)V

    :cond_2
    invoke-virtual {p1, v0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    invoke-virtual {p1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-virtual {v1, p1}, Lcom/sigmob/sdk/base/models/LoadAdRequest;->setAd_scene_desc(Ljava/lang/String;)V

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/base/j;->b:Lcom/sigmob/sdk/rewardVideoAd/c;

    iget-object v0, p0, Lcom/sigmob/sdk/base/j;->e:Lcom/sigmob/sdk/base/models/LoadAdRequest;

    new-instance v1, Lcom/sigmob/sdk/base/j$1;

    invoke-direct {v1, p0, p2}, Lcom/sigmob/sdk/base/j$1;-><init>(Lcom/sigmob/sdk/base/j;Lcom/sigmob/sdk/rewardVideoAd/g;)V

    invoke-virtual {p1, v0, v1}, Lcom/sigmob/sdk/rewardVideoAd/c;->a(Lcom/sigmob/sdk/base/models/LoadAdRequest;Lcom/sigmob/sdk/rewardVideoAd/g;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    sget-object p2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p2}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result p2

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p2

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/j;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    const-string p2, "show Ad "

    invoke-static {p2, p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return v3
.end method

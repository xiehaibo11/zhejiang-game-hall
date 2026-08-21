.class public Lcom/sigmob/windad/natives/WindNativeUnifiedAd;
.super Lcom/sigmob/sdk/base/g;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;
    }
.end annotation


# instance fields
.field private b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

.field private c:Landroid/os/Handler;

.field private d:Lcom/sigmob/sdk/nativead/t;


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;)V
    .locals 2

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/base/g;-><init>(Lcom/sigmob/windad/WindAdRequest;Z)V

    invoke-static {}, Lcom/sigmob/windad/WindAds;->sharedAds()Lcom/sigmob/windad/WindAds;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAds;->getHandler()Landroid/os/Handler;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->c:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/nativead/t;

    new-instance v1, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$1;-><init>(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;Lcom/sigmob/windad/natives/WindNativeAdRequest;)V

    invoke-direct {v0, p1, v1}, Lcom/sigmob/sdk/nativead/t;-><init>(Lcom/sigmob/windad/natives/WindNativeAdRequest;Lcom/sigmob/sdk/nativead/v;)V

    iput-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->d:Lcom/sigmob/sdk/nativead/t;

    return-void
.end method

.method static synthetic a(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    return-object p0
.end method

.method private a(I)Z
    .locals 5

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->loadAdFilter()Z

    move-result v1

    if-nez v1, :cond_0

    return v0

    :cond_0
    sget-object v1, Lcom/czhj/sdk/common/models/AdStatus;->AdStatusLoading:Lcom/czhj/sdk/common/models/AdStatus;

    iput-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->mADStatus:Lcom/czhj/sdk/common/models/AdStatus;

    iget-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->d:Lcom/sigmob/sdk/nativead/t;

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->getBid_token()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->getBidFloor()I

    move-result v3

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->getCurrency()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, p1, v2, v3, v4}, Lcom/sigmob/sdk/nativead/t;->a(ILjava/lang/String;ILjava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " catch throwable "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    if-eqz v1, :cond_1

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/sigmob/windad/WindAdError;->setMessage(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object v2

    invoke-interface {p1, v1, v2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;->onAdError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V

    :cond_1
    return v0
.end method

.method static synthetic b(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Ljava/lang/String;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic c(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Ljava/lang/String;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;)Ljava/lang/String;
    .locals 0

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method protected a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->c:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd$2;-><init>(Lcom/sigmob/windad/natives/WindNativeUnifiedAd;Lcom/sigmob/windad/WindAdError;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

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

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->d:Lcom/sigmob/sdk/nativead/t;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/t;->b()Ljava/util/List;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public destroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    return-void
.end method

.method public getEcpm()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->d:Lcom/sigmob/sdk/nativead/t;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/t;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public loadAd()Z
    .locals 3
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    :try_start_0
    invoke-super {p0}, Lcom/sigmob/sdk/base/g;->loadAd()Z

    iget-object v0, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdRequest;->getAdCount()I

    move-result v0

    invoke-direct {p0, v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(I)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v0

    sget-object v1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v2, "error"

    invoke-static {v2, v1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object v0

    const/4 v1, 0x5

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0, v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/WindAdError;)V

    const/4 v0, 0x0

    return v0
.end method

.method public loadAd(I)Z
    .locals 2

    :try_start_0
    invoke-super {p0}, Lcom/sigmob/sdk/base/g;->loadAd()Z

    invoke-direct {p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "error"

    invoke-static {v1, v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p1

    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/WindAdError;)V

    const/4 p1, 0x0

    return p1
.end method

.method public loadAd(Ljava/lang/String;)Z
    .locals 2

    :try_start_0
    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/g;->loadAd(Ljava/lang/String;)Z

    iget-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getAdCount()I

    move-result p1

    if-lez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a:Lcom/sigmob/windad/WindAdRequest;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getAdCount()I

    move-result p1

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    :goto_0
    invoke-direct {p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    sget-object v0, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {v0}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v1, "error"

    invoke-static {v1, v0, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p1

    const/4 v0, 0x5

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/WindAdError;)V

    const/4 p1, 0x0

    return p1
.end method

.method public loadAd(Ljava/lang/String;I)Z
    .locals 1

    :try_start_0
    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/g;->loadAd(Ljava/lang/String;)Z

    invoke-direct {p0, p2}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(I)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    sget-object p2, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p2}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result p2

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "error"

    invoke-static {v0, p2, p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->SigmobError(Ljava/lang/String;ILjava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;

    move-result-object p1

    const/4 p2, 0x5

    invoke-static {p2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setAdtype(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->setPlacement_id(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/mta/PointEntitySigmobError;->commit()V

    sget-object p1, Lcom/sigmob/windad/WindAdError;->ERROR_SIGMOB_REQUEST:Lcom/sigmob/windad/WindAdError;

    invoke-virtual {p0, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->a(Lcom/sigmob/windad/WindAdError;)V

    const/4 p1, 0x0

    return p1
.end method

.method public setNativeAdLoadListener(Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->b:Lcom/sigmob/windad/natives/WindNativeUnifiedAd$WindNativeAdLoadListener;

    return-void
.end method

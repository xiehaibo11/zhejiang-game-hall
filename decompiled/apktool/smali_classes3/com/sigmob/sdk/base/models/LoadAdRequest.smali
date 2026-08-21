.class public Lcom/sigmob/sdk/base/models/LoadAdRequest;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field private ad_count:I

.field private ad_scene:Ljava/lang/String;

.field private ad_scene_desc:Ljava/lang/String;

.field private ad_scene_id:Ljava/lang/String;

.field private bidFloor:I

.field private bidToken:Ljava/lang/String;

.field private currency:Ljava/lang/String;

.field private disableAutoHideAd:Z

.field private enable_keep_on:Z

.field private enable_screen_lock_displayad:Z

.field private isExpired:Z

.field private isHalfInterstitial:Z

.field private last_campid:Ljava/lang/String;

.field private last_crid:Ljava/lang/String;

.field private final mAdtype:I

.field private mLoadId:Ljava/lang/String;

.field private mOptions:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mPlacementId:Ljava/lang/String;

.field private final mUserId:Ljava/lang/String;

.field private requestId:Ljava/lang/String;

.field private request_scene_type:I


# direct methods
.method public constructor <init>(Lcom/sigmob/windad/WindAdRequest;)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_count:I

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getUserId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mUserId:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getLoadId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mLoadId:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getAdType()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mAdtype:I

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->isHalfInterstitial()Z

    move-result v0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isHalfInterstitial:Z

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mPlacementId:Ljava/lang/String;

    instance-of v0, p1, Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    if-eqz v0, :cond_0

    move-object v0, p1

    check-cast v0, Lcom/sigmob/windad/Splash/WindSplashAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/windad/Splash/WindSplashAdRequest;->isDisableAutoHideAd()Z

    move-result v0

    iput-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->disableAutoHideAd:Z

    goto :goto_1

    :cond_0
    instance-of v0, p1, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    if-eqz v0, :cond_1

    move-object v0, p1

    check-cast v0, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->isEnableKeepOn()Z

    move-result v1

    iput-boolean v1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->enable_keep_on:Z

    invoke-virtual {v0}, Lcom/sigmob/windad/interstitial/WindInterstitialAdRequest;->isEnableScreenLockDisPlayAd()Z

    move-result v0

    :goto_0
    iput-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->enable_screen_lock_displayad:Z

    goto :goto_1

    :cond_1
    instance-of v0, p1, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    if-eqz v0, :cond_2

    move-object v0, p1

    check-cast v0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->isEnableKeepOn()Z

    move-result v1

    iput-boolean v1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->enable_keep_on:Z

    invoke-virtual {v0}, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->isEnableScreenLockDisPlayAd()Z

    move-result v0

    goto :goto_0

    :cond_2
    :goto_1
    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->hasOptions()Z

    move-result v0

    if-eqz v0, :cond_5

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mOptions:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_2
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdRequest;->getOptions()Ljava/util/Map;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    instance-of v3, v2, Ljava/lang/String;

    if-eqz v3, :cond_3

    check-cast v2, Ljava/lang/String;

    goto :goto_3

    :cond_3
    if-eqz v2, :cond_4

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    goto :goto_3

    :cond_4
    const-string v2, ""

    :goto_3
    iget-object v3, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mOptions:Ljava/util/Map;

    invoke-interface {v3, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_2

    :cond_5
    return-void
.end method


# virtual methods
.method public getAdCount()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_count:I

    return v0
.end method

.method public getAdSceneDesc()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_scene_desc:Ljava/lang/String;

    return-object v0
.end method

.method public getAdSceneId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_scene_id:Ljava/lang/String;

    return-object v0
.end method

.method public getAdType()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mAdtype:I

    return v0
.end method

.method public getBidFloor()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->bidFloor:I

    return v0
.end method

.method public getBidToken()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->bidToken:Ljava/lang/String;

    return-object v0
.end method

.method public getCurrency()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->currency:Ljava/lang/String;

    return-object v0
.end method

.method public getLastCampid()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->last_campid:Ljava/lang/String;

    return-object v0
.end method

.method public getLastCrid()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->last_crid:Ljava/lang/String;

    return-object v0
.end method

.method public getLoadId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mLoadId:Ljava/lang/String;

    return-object v0
.end method

.method public getOptions()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mOptions:Ljava/util/Map;

    return-object v0
.end method

.method public getPlacementId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mPlacementId:Ljava/lang/String;

    return-object v0
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->requestId:Ljava/lang/String;

    return-object v0
.end method

.method public getRequest_scene_type()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->request_scene_type:I

    return v0
.end method

.method public getUserId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mUserId:Ljava/lang/String;

    return-object v0
.end method

.method public isDisableAutoHideAd()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->disableAutoHideAd:Z

    return v0
.end method

.method public isEnable_keep_on()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->enable_keep_on:Z

    return v0
.end method

.method public isEnable_screen_lock_displayad()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->enable_screen_lock_displayad:Z

    return v0
.end method

.method public isExpired()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isExpired:Z

    return v0
.end method

.method public isHalfInterstitial()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isHalfInterstitial:Z

    return v0
.end method

.method public setAd_count(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_count:I

    return-void
.end method

.method public setAd_scene_desc(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_scene_desc:Ljava/lang/String;

    return-void
.end method

.method public setAd_scene_id(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->ad_scene_id:Ljava/lang/String;

    return-void
.end method

.method public setBidFloor(I)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->bidFloor:I

    return-void
.end method

.method public setBidToken(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->bidToken:Ljava/lang/String;

    return-object p0
.end method

.method public setCurrency(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->currency:Ljava/lang/String;

    return-void
.end method

.method public setDisableAutoHideAd(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->disableAutoHideAd:Z

    return-void
.end method

.method public setExpired(Z)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isExpired:Z

    return-object p0
.end method

.method public setHalfInterstitial(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->isHalfInterstitial:Z

    return-void
.end method

.method public setLastCampid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->last_campid:Ljava/lang/String;

    return-object p0
.end method

.method public setLastCrid(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->last_crid:Ljava/lang/String;

    return-object p0
.end method

.method public setLoadId(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mLoadId:Ljava/lang/String;

    return-object p0
.end method

.method public setOptions(Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mOptions:Ljava/util/Map;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mOptions:Ljava/util/Map;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->mOptions:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    return-void
.end method

.method public setRequestId(Ljava/lang/String;)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->requestId:Ljava/lang/String;

    return-object p0
.end method

.method public setRequest_scene_type(I)Lcom/sigmob/sdk/base/models/LoadAdRequest;
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/base/models/LoadAdRequest;->request_scene_type:I

    return-object p0
.end method

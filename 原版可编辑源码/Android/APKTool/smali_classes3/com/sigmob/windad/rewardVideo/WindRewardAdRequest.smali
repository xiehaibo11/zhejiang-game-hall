.class public Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;
.super Lcom/sigmob/windad/WindAdRequest;


# instance fields
.field private c:Z

.field private d:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/windad/WindAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    const/4 p1, 0x1

    iput p1, p0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->a:I

    return-void
.end method

.method public static getWindVideoAdRequest(Lcom/sigmob/windad/WindAdRequest;)Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;
    .locals 3

    if-eqz p0, :cond_0

    new-instance v0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getPlacementId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getUserId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0}, Lcom/sigmob/windad/WindAdRequest;->getOptions()Ljava/util/Map;

    move-result-object p0

    invoke-direct {v0, v1, v2, p0}, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    return-object v0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public isEnableKeepOn()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->d:Z

    return v0
.end method

.method public isEnableScreenLockDisPlayAd()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->c:Z

    return v0
.end method

.method public setEnableKeepOn(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->d:Z

    return-void
.end method

.method public setEnableScreenLockDisPlayAd(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/windad/rewardVideo/WindRewardAdRequest;->c:Z

    return-void
.end method

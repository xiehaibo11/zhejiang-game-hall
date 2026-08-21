.class public Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;
.super Ljava/lang/Object;
.source "TopOnAdRewardVideoAdView.java"

# interfaces
.implements Lcom/tkay/rewardvideo/api/TYRewardVideoListener;
.implements Lcom/tkay/rewardvideo/api/TYRewardVideoExListener;


# static fields
.field private static adView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

.field private static toponadVideo_loadFlag:Z


# instance fields
.field private activity:Landroid/app/Activity;

.field private positionid:Ljava/lang/String;

.field private rewardVideoAd:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    iput-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->activity:Landroid/app/Activity;

    .line 38
    iput-object p2, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->positionid:Ljava/lang/String;

    .line 39
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->loadAd()V

    return-void
.end method

.method public static getInstance(Landroid/app/Activity;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;
    .locals 1

    .line 22
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->adView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    if-nez v0, :cond_0

    .line 23
    new-instance v0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->adView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    goto :goto_0

    .line 25
    :cond_0
    sget-boolean p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->toponadVideo_loadFlag:Z

    const-string p1, "VIDEO"

    if-eqz p0, :cond_1

    .line 27
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoaded(Ljava/lang/String;)V

    goto :goto_0

    .line 30
    :cond_1
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoading(Ljava/lang/String;)V

    .line 33
    :goto_0
    sget-object p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->adView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    return-object p0
.end method

.method private loadAd()V
    .locals 3

    .line 43
    new-instance v0, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->positionid:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->rewardVideoAd:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    .line 44
    invoke-virtual {v0, p0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->setAdListener(Lcom/tkay/rewardvideo/api/TYRewardVideoListener;)V

    .line 45
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "VIDEO"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoadApi(Ljava/lang/String;)V

    .line 46
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->rewardVideoAd:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->load()V

    return-void
.end method


# virtual methods
.method public closeAd()V
    .locals 1

    const/4 v0, 0x0

    .line 62
    sput-boolean v0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->toponadVideo_loadFlag:Z

    const/4 v0, 0x0

    .line 63
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->adView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    return-void
.end method

.method public onAgainReward(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 3

    const-string v0, "onReward"

    .line 155
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 156
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "VIDEO"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onRewardVerifyAd(Ljava/lang/String;)V

    .line 157
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "VIDEO|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onRewardVerifyAd(Ljava/lang/String;)V

    return-void
.end method

.method public onDeeplinkCallback(Lcom/tkay/core/api/TYAdInfo;Z)V
    .locals 0

    return-void
.end method

.method public onDownloadConfirm(Landroid/content/Context;Lcom/tkay/core/api/TYAdInfo;Lcom/tkay/core/api/TYNetworkConfirmInfo;)V
    .locals 0

    return-void
.end method

.method public onReward(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 3

    const-string v0, "onReward"

    .line 113
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 114
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "VIDEO"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onRewardVerifyAd(Ljava/lang/String;)V

    .line 115
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "VIDEO|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onRewardVerifyAd(Ljava/lang/String;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdPlayClicked"

    .line 149
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 150
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADClicked(Ljava/lang/String;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdPlayEnd"

    .line 136
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 137
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onCompletedAd(Ljava/lang/String;)V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 2

    .line 142
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onRewardedVideoAdPlayFailed-->"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 143
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "VIDEO|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowFail(Ljava/lang/String;)V

    .line 144
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->closeAd()V

    return-void
.end method

.method public onRewardedVideoAdAgainPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdPlayStart"

    .line 130
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 131
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADPresent(Ljava/lang/String;)V

    return-void
.end method

.method public onRewardedVideoAdClosed(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdClosed"

    .line 100
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 101
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADDismissed(Ljava/lang/String;)V

    .line 102
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->closeAd()V

    return-void
.end method

.method public onRewardedVideoAdFailed(Lcom/tkay/core/api/AdError;)V
    .locals 3

    .line 74
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onRewardedVideoAdFailed-->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 75
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getCode()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "VIDEO"

    invoke-interface {v0, v1, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onNoAD(Ljava/lang/String;Ljava/lang/String;)V

    .line 76
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->closeAd()V

    return-void
.end method

.method public onRewardedVideoAdLoaded()V
    .locals 2

    const-string v0, "onRewardedVideoAdLoaded"

    .line 67
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 68
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "VIDEO"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdReady(Ljava/lang/String;)V

    const/4 v0, 0x1

    .line 69
    sput-boolean v0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->toponadVideo_loadFlag:Z

    return-void
.end method

.method public onRewardedVideoAdPlayClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdPlayClicked"

    .line 107
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 108
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADClicked(Ljava/lang/String;)V

    return-void
.end method

.method public onRewardedVideoAdPlayEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdPlayEnd"

    .line 87
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 88
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onCompletedAd(Ljava/lang/String;)V

    return-void
.end method

.method public onRewardedVideoAdPlayFailed(Lcom/tkay/core/api/AdError;Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    .line 93
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onRewardedVideoAdPlayFailed-->"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 94
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string p2, "VIDEO"

    invoke-interface {p1, p2}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowFail(Ljava/lang/String;)V

    .line 95
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->closeAd()V

    return-void
.end method

.method public onRewardedVideoAdPlayStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onRewardedVideoAdPlayStart"

    .line 81
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 82
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "VIDEO"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADPresent(Ljava/lang/String;)V

    return-void
.end method

.method public showAd()V
    .locals 3

    .line 51
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->rewardVideoAd:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    const-string v1, "VIDEO"

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->isAdReady()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 52
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->rewardVideoAd:Lcom/tkay/rewardvideo/api/TYRewardVideoAd;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v2}, Lcom/tkay/rewardvideo/api/TYRewardVideoAd;->show(Landroid/app/Activity;)V

    .line 53
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowApi(Ljava/lang/String;)V

    goto :goto_0

    .line 55
    :cond_0
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowCheckFail(Ljava/lang/String;)V

    .line 56
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->closeAd()V

    :goto_0
    return-void
.end method

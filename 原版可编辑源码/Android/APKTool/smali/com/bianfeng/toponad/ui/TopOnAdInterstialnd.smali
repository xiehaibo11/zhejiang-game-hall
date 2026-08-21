.class public Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;
.super Ljava/lang/Object;
.source "TopOnAdInterstialnd.java"

# interfaces
.implements Lcom/tkay/interstitial/api/TYInterstitialListener;


# static fields
.field private static adView:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

.field private static toponadInterstialnd_loadFlag:Z


# instance fields
.field private activity:Landroid/app/Activity;

.field private interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

.field private positionid:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 40
    iput-object p1, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->activity:Landroid/app/Activity;

    .line 41
    iput-object p2, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->positionid:Ljava/lang/String;

    .line 42
    invoke-direct {p0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->loadAd()V

    return-void
.end method

.method public static getInstance(Landroid/app/Activity;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;
    .locals 1

    .line 24
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->adView:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    if-nez v0, :cond_0

    .line 25
    new-instance v0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    invoke-direct {v0, p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->adView:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    goto :goto_0

    .line 27
    :cond_0
    sget-boolean p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->toponadInterstialnd_loadFlag:Z

    const-string p1, "INTERSTIALAD"

    if-eqz p0, :cond_1

    .line 29
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoaded(Ljava/lang/String;)V

    goto :goto_0

    .line 32
    :cond_1
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p0

    invoke-interface {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoading(Ljava/lang/String;)V

    .line 36
    :goto_0
    sget-object p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->adView:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    return-object p0
.end method

.method private loadAd()V
    .locals 3

    .line 46
    new-instance v0, Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->activity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->positionid:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/interstitial/api/TYInterstitial;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    .line 48
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const/4 v1, 0x1

    .line 49
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    const-string v2, "is_use_rewarded_video_as_interstitial"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 50
    iget-object v1, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    invoke-virtual {v1, v0}, Lcom/tkay/interstitial/api/TYInterstitial;->setLocalExtra(Ljava/util/Map;)V

    .line 51
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    invoke-virtual {v0, p0}, Lcom/tkay/interstitial/api/TYInterstitial;->setAdListener(Lcom/tkay/interstitial/api/TYInterstitialListener;)V

    .line 52
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    invoke-virtual {v0}, Lcom/tkay/interstitial/api/TYInterstitial;->load()V

    .line 53
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "INTERSTIALAD"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdLoadApi(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public closeAd()V
    .locals 2

    const/4 v0, 0x0

    .line 67
    iput-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    const/4 v1, 0x0

    .line 68
    sput-boolean v1, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->toponadInterstialnd_loadFlag:Z

    .line 69
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->adView:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    return-void
.end method

.method public onInterstitialAdClicked(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onInterstitialAdClicked"

    .line 87
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 88
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "INTERSTIALAD"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADClicked(Ljava/lang/String;)V

    return-void
.end method

.method public onInterstitialAdClose(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 3

    const-string v0, "onInterstitialAdClose"

    .line 99
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 100
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "INTERSTIALAD"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADDismissed(Ljava/lang/String;)V

    .line 101
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "INTERSTIALAD|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onRewardVerifyAd(Ljava/lang/String;)V

    .line 102
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->closeAd()V

    return-void
.end method

.method public onInterstitialAdLoadFail(Lcom/tkay/core/api/AdError;)V
    .locals 3

    .line 80
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onInterstitialAdLoadFail"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getFullErrorInfo()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 81
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

    const-string v1, "INTERSTIALAD"

    invoke-interface {v0, v1, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onNoAD(Ljava/lang/String;Ljava/lang/String;)V

    .line 82
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->closeAd()V

    return-void
.end method

.method public onInterstitialAdLoaded()V
    .locals 2

    const-string v0, "onInterstitialAdLoaded"

    .line 74
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 75
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "INTERSTIALAD"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdReady(Ljava/lang/String;)V

    return-void
.end method

.method public onInterstitialAdShow(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 1

    const-string p1, "onInterstitialAdShow"

    .line 93
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 94
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object p1

    const-string v0, "INTERSTIALAD"

    invoke-interface {p1, v0}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADPresent(Ljava/lang/String;)V

    return-void
.end method

.method public onInterstitialAdVideoEnd(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 3

    const-string v0, "onInterstitialAdVideoEnd--->"

    .line 112
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    .line 113
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    const-string v1, "INTERSTIALAD"

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onADDismissed(Ljava/lang/String;)V

    .line 114
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "INTERSTIALAD|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onRewardVerifyAd(Ljava/lang/String;)V

    .line 115
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->closeAd()V

    return-void
.end method

.method public onInterstitialAdVideoError(Lcom/tkay/core/api/AdError;)V
    .locals 0

    const-string p1, "onInterstitialAdVideoError"

    .line 120
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public onInterstitialAdVideoStart(Lcom/tkay/core/api/TYAdInfo;)V
    .locals 0

    const-string p1, "onInterstitialAdVideoStart"

    .line 107
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public showAd()V
    .locals 3

    .line 57
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    const-string v1, "INTERSTIALAD"

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/interstitial/api/TYInterstitial;->isAdReady()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 58
    iget-object v0, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->interstitial:Lcom/tkay/interstitial/api/TYInterstitial;

    iget-object v2, p0, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v2}, Lcom/tkay/interstitial/api/TYInterstitial;->show(Landroid/app/Activity;)V

    .line 59
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowApi(Ljava/lang/String;)V

    goto :goto_0

    .line 61
    :cond_0
    invoke-static {}, Lcom/bianfeng/toponad/ui/TopOnAdApi;->getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    move-result-object v0

    invoke-interface {v0, v1}, Lcom/bianfeng/toponad/ui/TopOnAdCallBack;->onAdShowCheckFail(Ljava/lang/String;)V

    .line 62
    invoke-virtual {p0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->closeAd()V

    :goto_0
    return-void
.end method

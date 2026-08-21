.class public Lcom/bianfeng/toponad/ui/TopOnAdApi;
.super Ljava/lang/Object;
.source "TopOnAdApi.java"


# static fields
.field private static bannerView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

.field private static interstialnd:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

.field private static nativeAdView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

.field private static rewardVideoAdView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

.field private static topOnAdCallBack:Lcom/bianfeng/toponad/ui/TopOnAdCallBack;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static closeBanner()V
    .locals 1

    .line 62
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->bannerView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    if-eqz v0, :cond_0

    .line 63
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->closeAd()V

    const/4 v0, 0x0

    .line 64
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->bannerView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    :cond_0
    return-void
.end method

.method public static closeInterstial()V
    .locals 1

    .line 46
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->interstialnd:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    if-eqz v0, :cond_0

    .line 47
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->closeAd()V

    const/4 v0, 0x0

    .line 48
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->interstialnd:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    :cond_0
    return-void
.end method

.method public static closeNative()V
    .locals 1

    .line 78
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->nativeAdView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    if-eqz v0, :cond_0

    .line 79
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->closeAd()V

    const/4 v0, 0x0

    .line 80
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->nativeAdView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    :cond_0
    return-void
.end method

.method public static closeRewardVideoAd()V
    .locals 1

    .line 30
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->rewardVideoAdView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    if-eqz v0, :cond_0

    .line 31
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->closeAd()V

    const/4 v0, 0x0

    .line 32
    sput-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->rewardVideoAdView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    :cond_0
    return-void
.end method

.method public static getYSDKAdCallBack()Lcom/bianfeng/toponad/ui/TopOnAdCallBack;
    .locals 1

    .line 13
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->topOnAdCallBack:Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    return-object v0
.end method

.method public static loadBanner(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 53
    invoke-static/range {p0 .. p6}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->getInstance(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnBannerView;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->bannerView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    return-void
.end method

.method public static loadInterstial(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 37
    invoke-static {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->getInstance(Landroid/app/Activity;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->interstialnd:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    return-void
.end method

.method public static loadNative(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 69
    invoke-static/range {p0 .. p6}, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->getInstance(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->nativeAdView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    return-void
.end method

.method public static loadRewardVideoAd(Landroid/app/Activity;Ljava/lang/String;)V
    .locals 0

    .line 21
    invoke-static {p0, p1}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->getInstance(Landroid/app/Activity;Ljava/lang/String;)Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    move-result-object p0

    sput-object p0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->rewardVideoAdView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    return-void
.end method

.method public static setYSDKAdCallBack(Lcom/bianfeng/toponad/ui/TopOnAdCallBack;)V
    .locals 0

    .line 9
    sput-object p0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->topOnAdCallBack:Lcom/bianfeng/toponad/ui/TopOnAdCallBack;

    return-void
.end method

.method public static showBanner()V
    .locals 1

    .line 57
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->bannerView:Lcom/bianfeng/toponad/ui/TopOnBannerView;

    if-eqz v0, :cond_0

    .line 58
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnBannerView;->showAd()V

    :cond_0
    return-void
.end method

.method public static showInterstial()V
    .locals 1

    .line 41
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->interstialnd:Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;

    if-eqz v0, :cond_0

    .line 42
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnAdInterstialnd;->showAd()V

    :cond_0
    return-void
.end method

.method public static showNative()V
    .locals 1

    .line 73
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->nativeAdView:Lcom/bianfeng/toponad/ui/TopOnNativeAdView;

    if-eqz v0, :cond_0

    .line 74
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnNativeAdView;->showAd()V

    :cond_0
    return-void
.end method

.method public static showRewardVideoAd()V
    .locals 1

    .line 25
    sget-object v0, Lcom/bianfeng/toponad/ui/TopOnAdApi;->rewardVideoAdView:Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;

    if-eqz v0, :cond_0

    .line 26
    invoke-virtual {v0}, Lcom/bianfeng/toponad/ui/TopOnAdRewardVideoAdView;->showAd()V

    :cond_0
    return-void
.end method

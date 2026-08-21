.class public final Lcom/kwad/sdk/api/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsLoadManager;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final getBidRequestToken(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 0

    const-string p1, ""

    return-object p1
.end method

.method public final getBidRequestTokenV2(Lcom/kwad/sdk/api/KsScene;)Ljava/lang/String;
    .locals 0

    const-string p1, ""

    return-object p1
.end method

.method public final loadConfigFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadFeedAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadNativeAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadNativeAd(Ljava/lang/String;Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$NativeAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadRewardVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final loadSplashScreenAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;)V
    .locals 1

    const/4 p1, 0x0

    const-string v0, "SDK not init success"

    invoke-interface {p2, p1, v0}, Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final showInstallDialog(Landroid/app/Activity;Lcom/kwad/sdk/api/KsExitInstallListener;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

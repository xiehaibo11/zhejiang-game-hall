.class final Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/windad/rewardVideo/WindRewardVideoAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->startLoadAdForReward()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)V
    .locals 0

    .line 220
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardAdClicked(Ljava/lang/String;)V
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 273
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->z(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 274
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->A(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onRewardAdClosed(Ljava/lang/String;)V
    .locals 1

    .line 281
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 282
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->B(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 283
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->C(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    :cond_0
    return-void
.end method

.method public final onRewardAdLoadError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 1

    .line 295
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    if-eqz p1, :cond_0

    .line 297
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, v0, p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->a(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onRewardAdLoadSuccess(Ljava/lang/String;)V
    .locals 4

    .line 223
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 224
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->c(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->r(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 225
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    .line 226
    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->r(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->getEcpm()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    iget-object v1, v1, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    iget-object v2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    .line 227
    invoke-static {v2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->r(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    move-result-object v2

    const/4 v3, 0x0

    .line 225
    invoke-static {p1, v0, v1, v2, v3}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->onC2SBiddingResultWithCache(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/api/TYBiddingListener;Ljava/lang/Object;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 230
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->s(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 231
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->t(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method

.method public final onRewardAdPlayEnd(Ljava/lang/String;)V
    .locals 1

    .line 263
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 264
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->x(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 265
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->y(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoEnd()V

    :cond_0
    return-void
.end method

.method public final onRewardAdPlayError(Lcom/sigmob/windad/WindAdError;Ljava/lang/String;)V
    .locals 2

    .line 303
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 304
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->D(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 305
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p2}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->E(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->getErrorCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final onRewardAdPlayStart(Ljava/lang/String;)V
    .locals 1

    .line 248
    iget-object v0, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->b(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 254
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->u(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 255
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->v(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

    .line 256
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter$3;->a:Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;

    invoke-static {p1}, Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;->w(Lcom/tkay/network/sigmob/SigmobTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdVideoStart()V

    :cond_0
    return-void
.end method

.method public final onRewardAdPreLoadFail(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRewardAdPreLoadSuccess(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final onRewardAdRewarded(Lcom/sigmob/windad/rewardVideo/WindRewardInfo;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

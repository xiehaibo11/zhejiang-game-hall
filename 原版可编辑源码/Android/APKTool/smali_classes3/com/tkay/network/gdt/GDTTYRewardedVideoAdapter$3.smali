.class final Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->c(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)V
    .locals 0

    .line 247
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADClicked()V
    .locals 1

    .line 325
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->D(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 326
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->E(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayClicked()V

    :cond_0
    return-void
.end method

.method public final onADClosed()V
    .locals 1

    .line 337
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->b()V

    .line 338
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->F(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 339
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->G(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdClosed()V

    :cond_0
    return-void
.end method

.method public final onADExposure()V
    .locals 4

    .line 314
    :try_start_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 318
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->B(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 319
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->C(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/rewardvideo/unitgroup/api/CustomRewardedVideoEventListener;->onRewardedVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final onADLeftApplication()V
    .locals 0

    return-void
.end method

.method public final onADOpened()V
    .locals 0

    return-void
.end method

.method public final onADReceive()V
    .locals 3

    .line 252
    :try_start_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->getExtraInfo()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 254
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_0

    .line 255
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    invoke-static {v1, v2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;Ljava/util/Map;)Ljava/util/Map;

    .line 257
    :cond_0
    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->a(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/Map;->putAll(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 260
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 263
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 264
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$1;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;)V

    invoke-virtual {v0, v1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    .line 278
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3$2;-><init>(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;)V

    invoke-virtual {v0, v1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setRewardListener(Lcom/qq/e/comm/listeners/ADRewardListener;)V

    .line 291
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->z(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 292
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->A(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_3
    return-void
.end method

.method public final onNoAD(Lcom/qq/e/comm/util/AdError;)V
    .locals 2

    .line 303
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRenderFail()V
    .locals 3

    .line 365
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    const-string v1, ""

    const-string v2, "GDT: onRenderFail()"

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRenderSuccess()V
    .locals 7

    .line 345
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->g(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 346
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_2

    .line 347
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_0

    .line 348
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->getECPM()I

    move-result v0

    int-to-double v0, v0

    .line 350
    new-instance v2, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->b:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-direct {v2, v3}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 351
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, v4, v2, v5}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {v3, v0, v1}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 353
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    const-string v1, ""

    const-string v2, "GDT : UnifiedInterstitialAD had been destroyed."

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 357
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->H(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 358
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter$3;->a:Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;->I(Lcom/tkay/network/gdt/GDTTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_2
    return-void
.end method

.method public final onVideoCached()V
    .locals 0

    return-void
.end method

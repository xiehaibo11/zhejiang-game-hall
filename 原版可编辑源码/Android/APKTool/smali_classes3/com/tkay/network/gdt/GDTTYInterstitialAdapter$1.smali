.class final Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/interstitial2/UnifiedInterstitialADListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a(Landroid/content/Context;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)V
    .locals 0

    .line 65
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADClicked()V
    .locals 1

    .line 126
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->g(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 127
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->h(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClicked()V

    :cond_0
    return-void
.end method

.method public final onADClosed()V
    .locals 1

    .line 138
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/network/gdt/GDTTYInitManager;->b()V

    .line 139
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->i(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 140
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->j(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdClose()V

    .line 142
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_1

    .line 143
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->destroy()V

    :cond_1
    return-void
.end method

.method public final onADExposure()V
    .locals 4

    .line 115
    :try_start_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 119
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->e(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 120
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->f(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialEventListener;->onInterstitialAdShow()V

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
    .locals 7

    .line 69
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->g:Z

    if-eqz v0, :cond_0

    .line 70
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    new-instance v1, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1$1;

    invoke-direct {v1, p0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1$1;-><init>(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;)V

    invoke-virtual {v0, v1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    .line 84
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->h:Z

    if-eqz v0, :cond_1

    .line 85
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_2

    .line 86
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-virtual {v0}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->getECPM()I

    move-result v0

    int-to-double v0, v0

    .line 88
    new-instance v2, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->a:Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    invoke-direct {v2, v3}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 89
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

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

    .line 92
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->c(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 93
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->d(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_2
    return-void
.end method

.method public final onNoAD(Lcom/qq/e/comm/util/AdError;)V
    .locals 2

    .line 105
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRenderFail()V
    .locals 3

    .line 156
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    const-string v1, ""

    const-string v2, "GDT: onRenderFail()"

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRenderSuccess()V
    .locals 2

    .line 149
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->k(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 150
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter$1;->a:Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;->l(Lcom/tkay/network/gdt/GDTTYInterstitialAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_0
    return-void
.end method

.method public final onVideoCached()V
    .locals 0

    return-void
.end method

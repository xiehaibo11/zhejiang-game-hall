.class final Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/qq/e/ads/banner2/UnifiedBannerADListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/gdt/GDTTYBannerAdapter;->a(Landroid/app/Activity;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)V
    .locals 0

    .line 69
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onADClicked()V
    .locals 1

    .line 122
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->i(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 123
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->j(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClicked()V

    :cond_0
    return-void
.end method

.method public final onADClosed()V
    .locals 1

    .line 115
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->g(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 116
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->h(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdClose()V

    :cond_0
    return-void
.end method

.method public final onADExposure()V
    .locals 4

    .line 104
    :try_start_0
    invoke-static {}, Lcom/tkay/network/gdt/GDTTYInitManager;->getInstance()Lcom/tkay/network/gdt/GDTTYInitManager;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-virtual {v1}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->getTrackingInfo()Lcom/tkay/core/common/f/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/ref/WeakReference;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    invoke-direct {v2, v3}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYInitManager;->a(Ljava/lang/String;Ljava/lang/ref/WeakReference;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 108
    :catchall_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->e(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 109
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->f(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/banner/unitgroup/api/CustomBannerEventListener;->onBannerAdShow()V

    :cond_0
    return-void
.end method

.method public final onADLeftApplication()V
    .locals 0

    return-void
.end method

.method public final onADReceive()V
    .locals 7

    .line 78
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->g:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    if-eqz v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v1, v1, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->i:Lcom/qq/e/comm/compliance/DownloadConfirmListener;

    invoke-virtual {v0, v1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->setDownloadConfirmListener(Lcom/qq/e/comm/compliance/DownloadConfirmListener;)V

    .line 82
    :cond_0
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->h:Z

    if-eqz v0, :cond_2

    .line 83
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_3

    .line 84
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    if-eqz v0, :cond_1

    .line 85
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v0, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    invoke-virtual {v0}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->getECPM()I

    move-result v0

    int-to-double v0, v0

    .line 87
    new-instance v2, Lcom/tkay/network/gdt/GDTTYBiddingNotice;

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    invoke-direct {v2, v3}, Lcom/tkay/network/gdt/GDTTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 88
    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    iget-object v3, v3, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

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

    .line 91
    :cond_1
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    const-string v1, ""

    const-string v2, "GDT: Offer had been destroy."

    invoke-virtual {v0, v1, v2}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 95
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->c(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 96
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-static {v0}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d(Lcom/tkay/network/gdt/GDTTYBannerAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {v0, v1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void
.end method

.method public final onNoAD(Lcom/qq/e/comm/util/AdError;)V
    .locals 2

    .line 72
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->d:Lcom/qq/e/ads/banner2/UnifiedBannerView;

    .line 73
    iget-object v0, p0, Lcom/tkay/network/gdt/GDTTYBannerAdapter$2;->a:Lcom/tkay/network/gdt/GDTTYBannerAdapter;

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorCode()I

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/qq/e/comm/util/AdError;->getErrorMsg()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/network/gdt/GDTTYBannerAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

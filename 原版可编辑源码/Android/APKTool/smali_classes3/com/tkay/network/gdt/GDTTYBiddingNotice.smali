.class public Lcom/tkay/network/gdt/GDTTYBiddingNotice;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYBiddingNotice;


# instance fields
.field a:Ljava/lang/Object;


# direct methods
.method protected constructor <init>(Ljava/lang/Object;)V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public getNoticePriceCurrency()Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 269
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object v0
.end method

.method public notifyBidDisplay(ZD)V
    .locals 0

    return-void
.end method

.method public notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "D",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "adn_id"

    .line 152
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x4

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    .line 155
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const/16 v3, 0x32

    const/4 v4, 0x2

    const/4 v5, 0x1

    const/4 v6, -0x1

    if-eq v2, v3, :cond_0

    packed-switch v2, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v2, "103"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    move v2, v4

    goto :goto_1

    :pswitch_1
    const-string v2, "102"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    move v2, v5

    goto :goto_1

    :cond_0
    const-string v2, "2"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 v2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    move v2, v6

    :goto_1
    if-eqz v2, :cond_3

    if-eq v2, v5, :cond_2

    if-eq v2, v4, :cond_2

    const/16 v4, 0x2711

    goto :goto_2

    :cond_2
    move v4, v5

    :cond_3
    :goto_2
    double-to-int p2, p2

    .line 171
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string p3, "winPrice"

    invoke-interface {v1, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string p3, "lossReason"

    invoke-interface {v1, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 176
    :try_start_0
    invoke-interface {p4, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_4

    .line 177
    invoke-interface {p4, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    .line 178
    instance-of p3, p2, Ljava/lang/Integer;

    if-eqz p3, :cond_4

    .line 179
    check-cast p2, Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    goto :goto_3

    :cond_4
    move p2, v6

    :goto_3
    if-eq p2, v6, :cond_5

    const-string p3, "adnId"

    .line 184
    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v1, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 190
    :catchall_0
    :cond_5
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_7

    .line 191
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p3, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz p3, :cond_6

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    goto :goto_4

    :cond_6
    const-string p3, ""

    :goto_4
    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ": notifyBidLoss lossCode:"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ",lossReaseon:"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\n"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 192
    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "GDTTYBiddingNotice"

    .line 191
    invoke-static {p2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 196
    :cond_7
    :try_start_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    if-eqz p1, :cond_8

    .line 197
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    .line 198
    invoke-virtual {p1, v1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->sendLossNotification(Ljava/util/Map;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    .line 206
    :catchall_1
    :cond_8
    :try_start_2
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz p1, :cond_9

    .line 207
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 208
    invoke-virtual {p1, v1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->sendLossNotification(Ljava/util/Map;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    return-void

    .line 216
    :catchall_2
    :cond_9
    :try_start_3
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/splash/SplashAD;

    if-eqz p1, :cond_a

    .line 217
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/splash/SplashAD;

    .line 218
    invoke-virtual {p1, v1}, Lcom/qq/e/ads/splash/SplashAD;->sendLossNotification(Ljava/util/Map;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    return-void

    .line 227
    :catchall_3
    :cond_a
    :try_start_4
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    if-eqz p1, :cond_b

    .line 228
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    .line 229
    invoke-virtual {p1, v1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->sendLossNotification(Ljava/util/Map;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    return-void

    .line 238
    :catchall_4
    :cond_b
    :try_start_5
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    if-eqz p1, :cond_c

    .line 239
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    .line 240
    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-virtual {p1, v1}, Lcom/qq/e/ads/nativ/NativeExpressADView;->sendLossNotification(Ljava/util/Map;)V

    return-void

    .line 244
    :cond_c
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;

    if-eqz p1, :cond_d

    .line 245
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;

    .line 246
    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p1, v1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->sendLossNotification(Ljava/util/Map;)V

    return-void

    .line 250
    :cond_d
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/tkay/network/gdt/GDTTYNativeAd;

    if-eqz p1, :cond_e

    .line 251
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativeAd;

    .line 252
    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p1, v1}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->sendLossNotification(Ljava/util/Map;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_5

    return-void

    :catchall_5
    :cond_e
    const/4 p1, 0x0

    .line 259
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    return-void

    :pswitch_data_0
    .packed-switch 0xbdf3
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public notifyBidWin(D)V
    .locals 6

    const-string v0, ": notifyBidWin: "

    const-string v1, ""

    const-string v2, "GDTTYBiddingNotice"

    const-string v3, "expectCostPrice"

    .line 28
    new-instance v4, Ljava/util/HashMap;

    const/4 v5, 0x4

    invoke-direct {v4, v5}, Ljava/util/HashMap;-><init>(I)V

    double-to-int p1, p1

    .line 30
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const-string p2, "highestLossPrice"

    invoke-interface {v4, p2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 33
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    if-eqz p1, :cond_2

    .line 34
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;

    .line 36
    invoke-virtual {p1}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 38
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_1

    .line 39
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v5, :cond_0

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    :cond_0
    move-object v5, v1

    :goto_0
    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 42
    :cond_1
    invoke-virtual {p1, v4}, Lcom/qq/e/ads/rewardvideo/RewardVideoAD;->sendWinNotification(Ljava/util/Map;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 50
    :catchall_0
    :cond_2
    :try_start_1
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    if-eqz p1, :cond_5

    .line 51
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;

    .line 53
    invoke-virtual {p1}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 55
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_4

    .line 56
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v5, :cond_3

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_1

    :cond_3
    move-object v5, v1

    :goto_1
    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 59
    :cond_4
    invoke-virtual {p1, v4}, Lcom/qq/e/ads/interstitial2/UnifiedInterstitialAD;->sendWinNotification(Ljava/util/Map;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return-void

    .line 68
    :catchall_1
    :cond_5
    :try_start_2
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/splash/SplashAD;

    if-eqz p1, :cond_8

    .line 69
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/splash/SplashAD;

    .line 71
    invoke-virtual {p1}, Lcom/qq/e/ads/splash/SplashAD;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_7

    .line 74
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v5, :cond_6

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_2

    :cond_6
    move-object v5, v1

    :goto_2
    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 77
    :cond_7
    invoke-virtual {p1, v4}, Lcom/qq/e/ads/splash/SplashAD;->sendWinNotification(Ljava/util/Map;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    return-void

    .line 86
    :catchall_2
    :cond_8
    :try_start_3
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    if-eqz p1, :cond_b

    .line 87
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/qq/e/ads/banner2/UnifiedBannerView;

    .line 89
    invoke-virtual {p1}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_a

    .line 92
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v5, :cond_9

    iget-object v5, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_3

    :cond_9
    move-object v5, v1

    :goto_3
    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    :cond_a
    invoke-virtual {p1, v4}, Lcom/qq/e/ads/banner2/UnifiedBannerView;->sendWinNotification(Ljava/util/Map;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    return-void

    .line 104
    :catchall_3
    :cond_b
    :try_start_4
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    if-eqz p1, :cond_e

    .line 105
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;

    .line 107
    iget-object p2, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-virtual {p2}, Lcom/qq/e/ads/nativ/NativeExpressADView;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 109
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_d

    .line 110
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v3, :cond_c

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_c
    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 113
    :cond_d
    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeExpressAd;->b:Lcom/qq/e/ads/nativ/NativeExpressADView;

    invoke-virtual {p1, v4}, Lcom/qq/e/ads/nativ/NativeExpressADView;->sendWinNotification(Ljava/util/Map;)V

    return-void

    .line 117
    :cond_e
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;

    if-eqz p1, :cond_11

    .line 118
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;

    .line 120
    iget-object p2, p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_10

    .line 123
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v3, :cond_f

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_f
    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 126
    :cond_10
    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativePatchAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p1, v4}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->sendWinNotification(Ljava/util/Map;)V

    return-void

    .line 130
    :cond_11
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/tkay/network/gdt/GDTTYNativeAd;

    if-eqz p1, :cond_14

    .line 131
    iget-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/tkay/network/gdt/GDTTYNativeAd;

    .line 133
    iget-object p2, p1, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p2}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->getECPM()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    invoke-interface {v4, v3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 135
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p2

    if-eqz p2, :cond_13

    .line 136
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v3, :cond_12

    iget-object v1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_12
    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 139
    :cond_13
    iget-object p1, p1, Lcom/tkay/network/gdt/GDTTYNativeAd;->c:Lcom/qq/e/ads/nativ/NativeUnifiedADData;

    invoke-interface {p1, v4}, Lcom/qq/e/ads/nativ/NativeUnifiedADData;->sendWinNotification(Ljava/util/Map;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_4

    return-void

    :catchall_4
    :cond_14
    const/4 p1, 0x0

    .line 145
    iput-object p1, p0, Lcom/tkay/network/gdt/GDTTYBiddingNotice;->a:Ljava/lang/Object;

    return-void
.end method

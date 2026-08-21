.class public Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYBiddingNotice;


# instance fields
.field private a:Ljava/lang/Object;


# direct methods
.method public constructor <init>(Ljava/lang/Object;)V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public getNoticePriceCurrency()Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 97
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->USD:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object v0
.end method

.method public notifyBidDisplay(ZD)V
    .locals 0

    return-void
.end method

.method public notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V
    .locals 2
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

    .line 61
    sget-object p4, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_LOW_PRICE:Lcom/sigmob/windad/WindAdBiddingLossReason;

    const-string v0, "2"

    .line 62
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 63
    sget-object p4, Lcom/sigmob/windad/WindAdBiddingLossReason;->LOSS_REASON_RETURN_TIMEOUT:Lcom/sigmob/windad/WindAdBiddingLossReason;

    .line 65
    :cond_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 66
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "notifyBidLoss() >>> lossCode = "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ",lossReaseon = "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 67
    invoke-virtual {p4}, Lcom/sigmob/windad/WindAdBiddingLossReason;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " winPrice = $"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "SigmobTYBiddingNotice"

    .line 66
    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 69
    :cond_1
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    const-wide/high16 v0, 0x4059000000000000L    # 100.0

    mul-double/2addr p2, v0

    .line 70
    invoke-static {p2, p3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p2

    const-string p3, "AUCTION_PRICE"

    invoke-interface {p1, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p2, "CURRENCY"

    const-string p3, "USD"

    .line 71
    invoke-interface {p1, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    invoke-virtual {p4}, Lcom/sigmob/windad/WindAdBiddingLossReason;->getCode()I

    move-result p2

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p2

    const-string p3, "LOSS_REASON"

    invoke-interface {p1, p3, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p2, "ADN_ID"

    const-string p3, "10001"

    .line 73
    invoke-interface {p1, p2, p3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    :try_start_0
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p2, p2, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-eqz p2, :cond_2

    .line 77
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p2, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-virtual {p2, p1}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->sendLossNotificationWithInfo(Ljava/util/Map;)V

    goto :goto_0

    .line 78
    :cond_2
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p2, p2, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz p2, :cond_3

    .line 79
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p2, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {p2, p1}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->sendLossNotificationWithInfo(Ljava/util/Map;)V

    goto :goto_0

    .line 80
    :cond_3
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p2, p2, Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    if-eqz p2, :cond_4

    .line 81
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p2, Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-virtual {p2, p1}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->sendLossNotificationWithInfo(Ljava/util/Map;)V

    goto :goto_0

    .line 82
    :cond_4
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p2, p2, Lcom/sigmob/windad/Splash/WindSplashAD;

    if-eqz p2, :cond_5

    .line 83
    iget-object p2, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p2, Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-virtual {p2, p1}, Lcom/sigmob/windad/Splash/WindSplashAD;->sendLossNotificationWithInfo(Ljava/util/Map;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_5
    :goto_0
    const/4 p1, 0x0

    .line 87
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    return-void
.end method

.method public notifyBidWin(D)V
    .locals 3

    .line 33
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 34
    invoke-static {p1, p2}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    const-string v1, "notifyBidWin() >>> secondPrice = $"

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "SigmobTYBiddingNotice"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 36
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 39
    iget-object v1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-static {v1}, Lcom/tkay/network/sigmob/SigmobTYInitManager;->getEcpmInt(Ljava/lang/Object;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "AUCTION_PRICE"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-wide/high16 v1, 0x4059000000000000L    # 100.0

    mul-double/2addr p1, v1

    .line 41
    invoke-static {p1, p2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p1

    const-string p2, "HIGHEST_LOSS_PRICE"

    invoke-interface {v0, p2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p1, "CURRENCY"

    const-string p2, "USD"

    .line 42
    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 45
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    if-eqz p1, :cond_1

    .line 46
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/natives/WindNativeUnifiedAd;->sendWinNotificationWithInfo(Ljava/util/Map;)V

    goto :goto_0

    .line 47
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    if-eqz p1, :cond_2

    .line 48
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/rewardVideo/WindRewardVideoAd;->sendWinNotificationWithInfo(Ljava/util/Map;)V

    goto :goto_0

    .line 49
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    if-eqz p1, :cond_3

    .line 50
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/sigmob/windad/interstitial/WindInterstitialAd;

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/interstitial/WindInterstitialAd;->sendWinNotificationWithInfo(Ljava/util/Map;)V

    goto :goto_0

    .line 51
    :cond_3
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/sigmob/windad/Splash/WindSplashAD;

    if-eqz p1, :cond_4

    .line 52
    iget-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/sigmob/windad/Splash/WindSplashAD;

    invoke-virtual {p1, v0}, Lcom/sigmob/windad/Splash/WindSplashAD;->sendWinNotificationWithInfo(Ljava/util/Map;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_4
    :goto_0
    const/4 p1, 0x0

    .line 56
    iput-object p1, p0, Lcom/tkay/network/sigmob/SigmobTYBiddingNotice;->a:Ljava/lang/Object;

    return-void
.end method

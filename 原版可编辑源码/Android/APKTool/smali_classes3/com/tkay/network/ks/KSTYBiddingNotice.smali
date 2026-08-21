.class public Lcom/tkay/network/ks/KSTYBiddingNotice;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/api/TYBiddingNotice;


# instance fields
.field a:Ljava/lang/Object;


# direct methods
.method protected constructor <init>(Ljava/lang/Object;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    return-void
.end method


# virtual methods
.method public getNoticePriceCurrency()Lcom/tkay/core/api/TYAdConst$CURRENCY;
    .locals 1

    .line 210
    sget-object v0, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    return-object v0
.end method

.method public notifyBidDisplay(ZD)V
    .locals 0

    return-void
.end method

.method public declared-synchronized notifyBidLoss(Ljava/lang/String;DLjava/util/Map;)V
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

    monitor-enter p0

    .line 137
    :try_start_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result p4

    if-eqz p4, :cond_1

    const-string p4, "KSTYBiddingNotice"

    .line 138
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, ""

    :goto_0
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ": notifyBidLoss lossCode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",winPrice:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 140
    :cond_1
    new-instance p4, Lcom/kwad/sdk/api/model/AdExposureFailedReason;

    invoke-direct {p4}, Lcom/kwad/sdk/api/model/AdExposureFailedReason;-><init>()V

    double-to-int p2, p2

    .line 141
    iput p2, p4, Lcom/kwad/sdk/api/model/AdExposureFailedReason;->winEcpm:I

    const/4 p2, 0x4

    const-string p3, "5"

    .line 143
    invoke-static {p1, p3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_6

    if-eqz p1, :cond_2

    const/4 p2, 0x3

    .line 147
    :cond_2
    :try_start_1
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/kwad/sdk/api/KsRewardVideoAd;

    if-eqz p1, :cond_3

    .line 148
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-interface {p1, p2, p4}, Lcom/kwad/sdk/api/KsRewardVideoAd;->reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 149
    monitor-exit p0

    return-void

    .line 156
    :catchall_0
    :cond_3
    :try_start_2
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/kwad/sdk/api/KsInterstitialAd;

    if-eqz p1, :cond_4

    .line 157
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/kwad/sdk/api/KsInterstitialAd;

    invoke-interface {p1, p2, p4}, Lcom/kwad/sdk/api/KsInterstitialAd;->reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 158
    monitor-exit p0

    return-void

    .line 165
    :catchall_1
    :cond_4
    :try_start_3
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    if-eqz p1, :cond_5

    .line 166
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    invoke-interface {p1, p2, p4}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 167
    monitor-exit p0

    return-void

    .line 174
    :catchall_2
    :cond_5
    :try_start_4
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/kwad/sdk/api/KsDrawAd;

    if-eqz p1, :cond_6

    .line 175
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/kwad/sdk/api/KsDrawAd;

    invoke-interface {p1, p2, p4}, Lcom/kwad/sdk/api/KsDrawAd;->reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 176
    monitor-exit p0

    return-void

    .line 183
    :catchall_3
    :cond_6
    :try_start_5
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/kwad/sdk/api/KsFeedAd;

    if-eqz p1, :cond_7

    .line 184
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {p1, p2, p4}, Lcom/kwad/sdk/api/KsFeedAd;->reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 185
    monitor-exit p0

    return-void

    .line 192
    :catchall_4
    :cond_7
    :try_start_6
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of p1, p1, Lcom/kwad/sdk/api/KsNativeAd;

    if-eqz p1, :cond_8

    .line 193
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast p1, Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {p1, p2, p4}, Lcom/kwad/sdk/api/KsNativeAd;->reportAdExposureFailed(ILcom/kwad/sdk/api/model/AdExposureFailedReason;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    .line 194
    monitor-exit p0

    return-void

    :catchall_5
    :cond_8
    const/4 p1, 0x0

    .line 200
    :try_start_7
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_6

    .line 201
    monitor-exit p0

    return-void

    :catchall_6
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public declared-synchronized notifyBidWin(D)V
    .locals 3

    monitor-enter p0

    const-wide/high16 v0, 0x4059000000000000L    # 100.0

    mul-double/2addr p1, v0

    .line 39
    :try_start_0
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "KSTYBiddingNotice"

    .line 40
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v2

    goto :goto_0

    :cond_0
    const-string v2, ""

    :goto_0
    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ": notifyBidWin : second price:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1, p2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_7

    .line 43
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsRewardVideoAd;

    if-eqz v0, :cond_3

    .line 44
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "KSTYBiddingNotice"

    .line 45
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsRewardVideoAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 47
    :cond_2
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsRewardVideoAd;

    double-to-int v1, p1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsRewardVideoAd;->setBidEcpm(I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 48
    monitor-exit p0

    return-void

    .line 55
    :catchall_0
    :cond_3
    :try_start_2
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsInterstitialAd;

    if-eqz v0, :cond_5

    .line 56
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "KSTYBiddingNotice"

    .line 57
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsInterstitialAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsInterstitialAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 59
    :cond_4
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsInterstitialAd;

    double-to-int v1, p1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsInterstitialAd;->setBidEcpm(I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 60
    monitor-exit p0

    return-void

    .line 67
    :catchall_1
    :cond_5
    :try_start_3
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    if-eqz v0, :cond_7

    .line 68
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_6

    const-string v0, "KSTYBiddingNotice"

    .line 69
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 71
    :cond_6
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsFullScreenVideoAd;

    double-to-int v1, p1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsFullScreenVideoAd;->setBidEcpm(I)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 72
    monitor-exit p0

    return-void

    .line 79
    :catchall_2
    :cond_7
    :try_start_4
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsDrawAd;

    if-eqz v0, :cond_9

    .line 80
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_8

    const-string v0, "KSTYBiddingNotice"

    .line 81
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsDrawAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsDrawAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 83
    :cond_8
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsDrawAd;

    double-to-int v1, p1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsDrawAd;->setBidEcpm(I)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    .line 84
    monitor-exit p0

    return-void

    .line 91
    :catchall_3
    :cond_9
    :try_start_5
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsFeedAd;

    if-eqz v0, :cond_b

    .line 92
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_a

    const-string v0, "KSTYBiddingNotice"

    .line 93
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsFeedAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsFeedAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    :cond_a
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsFeedAd;

    double-to-int v1, p1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsFeedAd;->setBidEcpm(I)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_4

    .line 96
    monitor-exit p0

    return-void

    .line 103
    :catchall_4
    :cond_b
    :try_start_6
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsNativeAd;

    if-eqz v0, :cond_d

    .line 104
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_c

    const-string v0, "KSTYBiddingNotice"

    .line 105
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsNativeAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsNativeAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 107
    :cond_c
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsNativeAd;

    double-to-int v1, p1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/api/KsNativeAd;->setBidEcpm(I)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_5

    .line 108
    monitor-exit p0

    return-void

    .line 115
    :catchall_5
    :cond_d
    :try_start_7
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    instance-of v0, v0, Lcom/kwad/sdk/api/KsSplashScreenAd;

    if-eqz v0, :cond_f

    .line 116
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_e

    const-string v0, "KSTYBiddingNotice"

    .line 117
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Origin price:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v2, Lcom/kwad/sdk/api/KsSplashScreenAd;

    invoke-interface {v2}, Lcom/kwad/sdk/api/KsSplashScreenAd;->getECPM()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 119
    :cond_e
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;

    check-cast v0, Lcom/kwad/sdk/api/KsSplashScreenAd;

    double-to-int p1, p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/api/KsSplashScreenAd;->setBidEcpm(I)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_6

    .line 120
    monitor-exit p0

    return-void

    :catchall_6
    :cond_f
    const/4 p1, 0x0

    .line 126
    :try_start_8
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYBiddingNotice;->a:Ljava/lang/Object;
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_7

    .line 127
    monitor-exit p0

    return-void

    :catchall_7
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.class final Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsLoadManager$RewardVideoAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)V
    .locals 0

    .line 269
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 272
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRewardVideoAdLoad(Ljava/util/List;)V
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/api/KsRewardVideoAd;",
            ">;)V"
        }
    .end annotation

    .line 284
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    const/4 v1, 0x0

    const/4 v2, 0x0

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/api/KsRewardVideoAd;

    goto :goto_0

    :cond_0
    move-object p1, v2

    :goto_0
    iput-object p1, v0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    .line 285
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    if-nez p1, :cond_1

    .line 286
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    const-string v0, ""

    const-string v1, "KuaiShou: List<KsRewardVideoAd> is empty"

    invoke-virtual {p1, v0, v1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 289
    :cond_1
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-boolean p1, p1, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->h:Z

    if-eqz p1, :cond_2

    .line 290
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz p1, :cond_3

    const-wide/16 v0, 0x0

    .line 293
    :try_start_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-object p1, p1, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsRewardVideoAd;->getECPM()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-double v0, p1

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 295
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 297
    :goto_1
    new-instance p1, Lcom/tkay/network/ks/KSTYBiddingNotice;

    iget-object v3, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->g:Lcom/kwad/sdk/api/KsRewardVideoAd;

    invoke-direct {p1, v3}, Lcom/tkay/network/ks/KSTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 298
    iget-object v3, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    iget-object v3, v3, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    invoke-virtual {v4, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, v4, p1, v5}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object p1

    invoke-interface {v3, p1, v2}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 302
    :cond_2
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->D(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 303
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->E(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    new-array v0, v1, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_3
    return-void
.end method

.method public final onRewardVideoResult(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/api/KsRewardVideoAd;",
            ">;)V"
        }
    .end annotation

    .line 277
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->B(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 278
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter$4;->a:Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;->C(Lcom/tkay/network/ks/KSTYRewardedVideoAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdDataLoaded()V

    :cond_0
    return-void
.end method

.class final Lcom/tkay/network/ks/KSTYSplashAdapter$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/api/KsLoadManager$SplashScreenAdListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/network/ks/KSTYSplashAdapter;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/network/ks/KSTYSplashAdapter;


# direct methods
.method constructor <init>(Lcom/tkay/network/ks/KSTYSplashAdapter;)V
    .locals 0

    .line 86
    iput-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onError(ILjava/lang/String;)V
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/tkay/network/ks/KSTYSplashAdapter;->notifyATLoadFail(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onRequestResult(I)V
    .locals 0

    return-void
.end method

.method public final onSplashScreenAdLoad(Lcom/kwad/sdk/api/KsSplashScreenAd;)V
    .locals 6

    .line 99
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iput-object p1, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->b:Lcom/kwad/sdk/api/KsSplashScreenAd;

    .line 105
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-boolean v0, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->h:Z

    if-eqz v0, :cond_0

    .line 106
    iget-object v0, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-object v0, v0, Lcom/tkay/network/ks/KSTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    if-eqz v0, :cond_1

    const-wide/16 v0, 0x0

    .line 109
    :try_start_0
    invoke-interface {p1}, Lcom/kwad/sdk/api/KsSplashScreenAd;->getECPM()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    int-to-double v0, v0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 111
    invoke-virtual {v2}, Ljava/lang/Throwable;->printStackTrace()V

    .line 113
    :goto_0
    new-instance v2, Lcom/tkay/network/ks/KSTYBiddingNotice;

    invoke-direct {v2, p1}, Lcom/tkay/network/ks/KSTYBiddingNotice;-><init>(Ljava/lang/Object;)V

    .line 114
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    iget-object p1, p1, Lcom/tkay/network/ks/KSTYSplashAdapter;->mBiddingListener:Lcom/tkay/core/api/TYBiddingListener;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    invoke-virtual {v3, v4, v5}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    sget-object v4, Lcom/tkay/core/api/TYAdConst$CURRENCY;->RMB_CENT:Lcom/tkay/core/api/TYAdConst$CURRENCY;

    invoke-static {v0, v1, v3, v2, v4}, Lcom/tkay/core/api/TYBiddingResult;->success(DLjava/lang/String;Lcom/tkay/core/api/TYBiddingNotice;Lcom/tkay/core/api/TYAdConst$CURRENCY;)Lcom/tkay/core/api/TYBiddingResult;

    move-result-object v0

    const/4 v1, 0x0

    invoke-interface {p1, v0, v1}, Lcom/tkay/core/api/TYBiddingListener;->onC2SBiddingResultWithCache(Lcom/tkay/core/api/TYBiddingResult;Lcom/tkay/core/api/BaseAd;)V

    return-void

    .line 117
    :cond_0
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYSplashAdapter;->b(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 118
    iget-object p1, p0, Lcom/tkay/network/ks/KSTYSplashAdapter$2;->a:Lcom/tkay/network/ks/KSTYSplashAdapter;

    invoke-static {p1}, Lcom/tkay/network/ks/KSTYSplashAdapter;->c(Lcom/tkay/network/ks/KSTYSplashAdapter;)Lcom/tkay/core/api/TYCustomLoadListener;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Lcom/tkay/core/api/BaseAd;

    invoke-interface {p1, v0}, Lcom/tkay/core/api/TYCustomLoadListener;->onAdCacheLoaded([Lcom/tkay/core/api/BaseAd;)V

    :cond_1
    return-void
.end method

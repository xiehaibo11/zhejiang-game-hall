.class public final Lcom/kwad/components/ad/interstitial/e;
.super Ljava/lang/Object;


# direct methods
.method public static loadInterstitialAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V
    .locals 5

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, "KsAdInterstitialLoadManager"

    const-string v0, "loadInterstitialAd please init sdk first"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/components/ad/interstitial/e$1;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/e$1;-><init>(Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;)V

    invoke-static {p0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object p0

    invoke-static {}, Lcom/kwad/components/core/t/k;->qo()Lcom/kwad/components/core/t/k;

    move-result-object v0

    const-string v1, "loadInterstitialAd"

    invoke-virtual {v0, p0, v1}, Lcom/kwad/components/core/t/k;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/lang/String;)Z

    move-result v0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    const/16 v3, 0xd

    invoke-virtual {p0, v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->cL()Lcom/kwad/components/ad/interstitial/monitor/b;

    invoke-virtual {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v3

    invoke-static {v3, v4}, Lcom/kwad/components/ad/interstitial/monitor/b;->g(J)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    new-instance v3, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v3}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    new-instance v4, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v4, p0}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v3, v4}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/kwad/components/core/p/a/a$a;->aF(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v0

    new-instance v3, Lcom/kwad/components/ad/interstitial/e$2;

    invoke-direct {v3, p0, p1, v1, v2}, Lcom/kwad/components/ad/interstitial/e$2;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/sdk/api/KsLoadManager$InterstitialAdListener;J)V

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/KsAdLoadManager;->a(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method

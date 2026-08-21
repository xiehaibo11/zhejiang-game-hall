.class public final Lcom/kwad/components/ad/feed/e;
.super Ljava/lang/Object;


# direct methods
.method public static a(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;Z)V
    .locals 7

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->hasInitFinish()Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, "KsAdFeedLoadManager"

    const-string p2, "loadConfigFeedAd please init sdk first"

    invoke-static {p0, p2}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/components/ad/feed/e$1;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/e$1;-><init>(Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;)V

    invoke-static {p0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object v2

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    invoke-virtual {v2}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdNum()I

    move-result p0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/monitor/b;->s(I)V

    invoke-static {}, Lcom/kwad/components/core/t/k;->qo()Lcom/kwad/components/core/t/k;

    move-result-object p0

    const-string v0, "loadConfigFeedAd"

    invoke-virtual {p0, v2, v0}, Lcom/kwad/components/core/t/k;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/lang/String;)Z

    move-result p0

    const/4 v0, 0x1

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    new-instance v0, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v0}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    new-instance v1, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/p/a/a$a;->aF(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    new-instance v6, Lcom/kwad/components/ad/feed/e$2;

    move-object v0, v6

    move-object v1, p1

    move v3, p2

    invoke-direct/range {v0 .. v5}, Lcom/kwad/components/ad/feed/e$2;-><init>(Lcom/kwad/sdk/api/KsLoadManager$FeedAdListener;Lcom/kwad/sdk/internal/api/SceneImpl;ZJ)V

    invoke-virtual {p0, v6}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/KsAdLoadManager;->a(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method

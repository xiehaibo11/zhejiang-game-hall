.class public final Lcom/kwad/components/ad/fullscreen/d;
.super Ljava/lang/Object;


# direct methods
.method private static a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/util/List;)Ljava/util/List;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/internal/api/SceneImpl;",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_1
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v1, :cond_1

    iget-object v2, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-nez v2, :cond_2

    iput-object p0, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    :cond_2
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v3

    const/4 v4, 0x1

    if-ne v4, v3, :cond_3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    goto :goto_1

    :cond_3
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_4

    :goto_1
    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_4
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_1

    :cond_5
    return-object v0
.end method

.method static synthetic b(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/util/List;)Ljava/util/List;
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/components/ad/fullscreen/d;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/util/List;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method public static loadFullScreenVideoAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;)V
    .locals 5

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getPosId()J

    move-result-wide v2

    const/4 v4, 0x0

    invoke-static {v4, v2, v3}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZJ)V

    invoke-static {}, Lcom/kwad/components/core/t/k;->qo()Lcom/kwad/components/core/t/k;

    move-result-object v2

    const-string v3, "loadFullScreenVideoAd"

    invoke-virtual {v2, p0, v3}, Lcom/kwad/components/core/t/k;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/lang/String;)Z

    move-result v2

    const/4 v3, 0x3

    invoke-virtual {p0, v3}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    new-instance v3, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v3}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    new-instance v4, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v4, p0}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v3, v4}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/kwad/components/core/p/a/a$a;->aF(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object v2

    new-instance v3, Lcom/kwad/components/ad/fullscreen/d$1;

    invoke-direct {v3, p0, p1, v0, v1}, Lcom/kwad/components/ad/fullscreen/d$1;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/sdk/api/KsLoadManager$FullScreenVideoAdListener;J)V

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/KsAdLoadManager;->a(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method

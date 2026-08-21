.class public final Lcom/kwad/components/ad/draw/d;
.super Ljava/lang/Object;


# direct methods
.method public static loadDrawAd(Lcom/kwad/sdk/api/KsScene;Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->covert(Lcom/kwad/sdk/api/KsScene;)Lcom/kwad/sdk/internal/api/SceneImpl;

    move-result-object p0

    invoke-static {}, Lcom/kwad/components/core/t/k;->qo()Lcom/kwad/components/core/t/k;

    move-result-object v0

    const-string v1, "loadDrawAd"

    invoke-virtual {v0, p0, v1}, Lcom/kwad/components/core/t/k;->a(Lcom/kwad/sdk/internal/api/SceneImpl;Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x6

    invoke-virtual {p0, v1}, Lcom/kwad/sdk/internal/api/SceneImpl;->setAdStyle(I)V

    invoke-static {}, Lcom/kwad/components/ad/KsAdLoadManager;->M()Lcom/kwad/components/ad/KsAdLoadManager;

    new-instance v1, Lcom/kwad/components/core/p/a/a$a;

    invoke-direct {v1}, Lcom/kwad/components/core/p/a/a$a;-><init>()V

    new-instance v2, Lcom/kwad/components/core/p/a/b;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/p/a/b;-><init>(Lcom/kwad/sdk/internal/api/SceneImpl;)V

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/p/a/a$a;->e(Lcom/kwad/components/core/p/a/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/p/a/a$a;->aF(Z)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    new-instance v0, Lcom/kwad/components/ad/draw/d$1;

    invoke-direct {v0, p1}, Lcom/kwad/components/ad/draw/d$1;-><init>(Lcom/kwad/sdk/api/KsLoadManager$DrawAdListener;)V

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/p/a/a$a;->a(Lcom/kwad/components/core/p/b;)Lcom/kwad/components/core/p/a/a$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/core/p/a/a$a;->pI()Lcom/kwad/components/core/p/a/a;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/KsAdLoadManager;->a(Lcom/kwad/components/core/p/a/a;)V

    return-void
.end method

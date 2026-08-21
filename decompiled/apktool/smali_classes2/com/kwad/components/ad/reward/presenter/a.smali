.class public Lcom/kwad/components/ad/reward/presenter/a;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field public qx:Lcom/kwad/components/ad/reward/j;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    return-void
.end method


# virtual methods
.method public ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/a;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/j;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-void
.end method

.method protected final hw()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void
.end method

.method protected final hx()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    return v0
.end method

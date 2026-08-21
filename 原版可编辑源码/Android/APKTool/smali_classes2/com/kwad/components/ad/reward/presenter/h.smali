.class public final Lcom/kwad/components/ad/reward/presenter/h;
.super Ljava/lang/Object;


# direct methods
.method public static A(Lcom/kwad/components/ad/reward/j;)Z
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v2, :cond_0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {p0}, Lcom/kwad/components/core/playable/a;->px()Z

    move-result p0

    if-eqz p0, :cond_0

    return v3

    :cond_0
    invoke-static {v1}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_1

    return v3

    :cond_1
    iget-boolean p0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mXiaomiAppStoreDetailViewOpen:Z

    if-eqz p0, :cond_2

    return v3

    :cond_2
    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gO()Z

    move-result p0

    const/4 v0, 0x1

    if-eqz p0, :cond_3

    return v0

    :cond_3
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_4

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->al(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_4

    return v0

    :cond_4
    return v3
.end method

.class public final Lcom/kwad/components/ad/reward/m;
.super Ljava/lang/Object;


# direct methods
.method public static m(Lcom/kwad/components/ad/reward/j;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v3, :cond_0

    iget-object v3, p0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v3}, Lcom/kwad/components/core/playable/a;->px()Z

    move-result v3

    if-eqz v3, :cond_0

    return-void

    :cond_0
    invoke-static {v2}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_1

    return-void

    :cond_1
    iget-boolean v3, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mXiaomiAppStoreDetailViewOpen:Z

    if-eqz v3, :cond_2

    return-void

    :cond_2
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->al(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-boolean v2, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->hasEnterAdWebViewLandPageActivity:Z

    if-nez v2, :cond_3

    iget-object p0, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x1

    iput-boolean v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->hasEnterAdWebViewLandPageActivity:Z

    invoke-static {v1, v0, v2}, Lcom/kwad/components/core/page/DownloadLandPageActivity;->launch(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Z)V

    :cond_3
    return-void
.end method

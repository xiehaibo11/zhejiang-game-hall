.class public final Lcom/kwad/components/ad/interstitial/e/a;
.super Ljava/lang/Object;


# direct methods
.method public static c(Lcom/kwad/components/ad/interstitial/d/c;)Z
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d;->getOwnerActivity()Landroid/app/Activity;

    move-result-object v0

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {}, Lcom/kwad/components/ad/interstitial/b/b;->cI()I

    move-result v3

    invoke-static {}, Lcom/kwad/components/ad/interstitial/b/b;->cJ()I

    move-result v4

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v5

    if-le v3, v5, :cond_3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bX(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v3

    if-ge v4, v3, :cond_3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bY(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v3

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-ne v3, v4, :cond_2

    invoke-static {p0}, Lcom/kwad/components/ad/interstitial/f/b;->d(Lcom/kwad/components/ad/interstitial/d/c;)V

    return v5

    :cond_2
    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bY(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v3

    if-ne v3, v5, :cond_3

    new-instance v1, Lcom/kwad/components/core/page/widget/a;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->cb(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Lcom/kwad/components/ad/interstitial/e/a$1;

    invoke-direct {v3, p0}, Lcom/kwad/components/ad/interstitial/e/a$1;-><init>(Lcom/kwad/components/ad/interstitial/d/c;)V

    invoke-direct {v1, v0, v2, v3}, Lcom/kwad/components/core/page/widget/a;-><init>(Landroid/content/Context;Ljava/lang/String;Lcom/kwad/components/core/page/widget/a$a;)V

    invoke-virtual {v1}, Lcom/kwad/components/core/page/widget/a;->show()V

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/16 v2, 0x95

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ci(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->ck(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/core/report/a;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    return v5

    :cond_3
    :goto_0
    return v1
.end method

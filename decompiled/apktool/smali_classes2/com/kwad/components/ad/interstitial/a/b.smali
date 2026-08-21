.class public final Lcom/kwad/components/ad/interstitial/a/b;
.super Ljava/lang/Object;


# direct methods
.method public static b(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 3

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iP:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/16 v2, 0x3c

    if-eqz v1, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p0

    if-nez v0, :cond_0

    move v0, p0

    goto :goto_0

    :cond_0
    invoke-static {v0, p0}, Ljava/lang/Math;->min(II)I

    move-result v0

    goto :goto_0

    :cond_1
    if-gt v0, v2, :cond_2

    if-gtz v0, :cond_3

    :cond_2
    move v0, v2

    :cond_3
    :goto_0
    return v0
.end method

.method public static cA()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iR:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static cB()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iL:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static cC()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iM:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static cD()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iN:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static cE()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iO:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static cF()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iT:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static cG()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iQ:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static cH()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/interstitial/a/a;->iS:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

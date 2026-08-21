.class public final Lcom/kwad/components/ad/reward/a/b;
.super Ljava/lang/Object;


# direct methods
.method public static gC()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qC:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static gD()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qG:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static gE()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qD:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static gF()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qF:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static gG()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qE:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method private static gH()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qI:Lcom/kwad/sdk/core/config/item/k;

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

.method public static gI()F
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qN:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    return v0
.end method

.method public static gJ()Z
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qN:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-lez v0, :cond_0

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qN:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    const/high16 v1, 0x3f800000    # 1.0f

    cmpg-float v0, v0, v1

    if-gez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static gK()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qO:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static gL()J
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qL:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    int-to-long v0, v0

    return-wide v0
.end method

.method public static gM()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qM:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static gN()I
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qP:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static gO()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qQ:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static gP()Z
    .locals 3

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qR:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    sget-object v0, Lcom/kwad/components/ad/reward/a/a;->qR:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public static i(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/components/ad/reward/a/b;->j(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cu(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_1

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gH()Z

    move-result p0

    if-eqz p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v1
.end method

.method public static j(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cu(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    sget-object p0, Lcom/kwad/components/ad/reward/a/a;->qK:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/reward/a/b;->i(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    return p0
.end method

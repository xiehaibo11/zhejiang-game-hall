.class public final Lcom/kwad/sdk/collector/f;
.super Ljava/lang/Object;


# direct methods
.method private static aI(Landroid/content/Context;)Lcom/kwad/sdk/collector/g;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/utils/al;->cq(Landroid/content/Context;)Z

    move-result p0

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "queryAccessibilityServicePermission result: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "InfoCollector"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p0, :cond_0

    sget p0, Lcom/kwad/sdk/collector/g;->PERMISSION_GRANTED:I

    goto :goto_0

    :cond_0
    sget p0, Lcom/kwad/sdk/collector/g;->PERMISSION_DENIED:I

    :goto_0
    new-instance v0, Lcom/kwad/sdk/collector/g;

    const-string v1, "android.permission.BIND_ACCESSIBILITY_SERVICE"

    invoke-direct {v0, v1, p0}, Lcom/kwad/sdk/collector/g;-><init>(Ljava/lang/String;I)V

    return-object v0
.end method

.method private static aJ(Landroid/content/Context;)Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            ")",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/collector/g;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/aj;->cp(Landroid/content/Context;)[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_3

    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_3

    aget-object v4, v1, v3

    invoke-static {p0, v4}, Lcom/kwad/sdk/utils/al;->ao(Landroid/content/Context;Ljava/lang/String;)I

    move-result v5

    if-nez v5, :cond_1

    sget v5, Lcom/kwad/sdk/collector/g;->PERMISSION_GRANTED:I

    goto :goto_1

    :cond_1
    const/4 v6, -0x1

    if-ne v5, v6, :cond_2

    sget v5, Lcom/kwad/sdk/collector/g;->PERMISSION_DENIED:I

    goto :goto_1

    :cond_2
    sget v5, Lcom/kwad/sdk/collector/g;->ajL:I

    :goto_1
    new-instance v6, Lcom/kwad/sdk/collector/g;

    invoke-direct {v6, v4, v5}, Lcom/kwad/sdk/collector/g;-><init>(Ljava/lang/String;I)V

    invoke-interface {v0, v6}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_3
    return-object v0
.end method

.method public static yH()Lorg/json/JSONArray;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/collector/f;->aJ(Landroid/content/Context;)Ljava/util/List;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/collector/f;->aI(Landroid/content/Context;)Lcom/kwad/sdk/collector/g;

    move-result-object v0

    invoke-interface {v1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {v1}, Lcom/kwad/sdk/collector/g;->p(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v0

    return-object v0
.end method

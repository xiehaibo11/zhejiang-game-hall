.class public final Lcom/kwad/sdk/core/response/b/a;
.super Ljava/lang/Object;


# direct methods
.method public static Cz()Ljava/lang/String;
    .locals 1

    const-string v0, "\u7ee7\u7eed\u4e0b\u8f7d"

    return-object v0
.end method

.method public static E(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    return-wide v0
.end method

.method public static F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    return-object p0
.end method

.method public static G(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    :goto_0
    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->videoDuration:I

    return p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    goto :goto_0
.end method

.method public static H(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const-wide/16 v1, 0x3e8

    const/4 v3, 0x2

    if-ne v0, v3, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    :goto_0
    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->videoDuration:I

    int-to-long v3, p0

    mul-long/2addr v3, v1

    return-wide v3

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    goto :goto_0
.end method

.method public static I(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 6

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x1

    if-eq v0, v2, :cond_2

    const/4 v3, 0x2

    if-eq v0, v3, :cond_0

    if-eq v0, v1, :cond_0

    const/16 v2, 0x8

    if-eq v0, v2, :cond_4

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v5, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v5, v3, :cond_1

    iget-object v5, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->firstFrame:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    iget-object p0, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->firstFrame:Ljava/lang/String;

    return-object p0

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_3
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v4, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v4, v2, :cond_3

    iget-object v4, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->firstFrame:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_3

    iget-object p0, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->firstFrame:Ljava/lang/String;

    return-object p0

    :cond_4
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_5
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_6

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v2, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v2, v1, :cond_5

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->firstFrame:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->firstFrame:Ljava/lang/String;

    return-object p0

    :cond_6
    :goto_0
    const-string p0, ""

    return-object p0
.end method

.method public static J(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->supportThirdDownload:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static K(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->videoWidth:I

    return p0
.end method

.method public static L(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->videoHeight:I

    return p0
.end method

.method public static M(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    if-eqz v0, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;->mediaSmallAppId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static N(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->webUriSourceType:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static O(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->videoWidth:I

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->videoHeight:I

    if-gt v0, p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 6
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x3

    const/4 v2, 0x1

    if-eq v0, v2, :cond_3

    const/4 v3, 0x2

    if-eq v0, v3, :cond_0

    if-eq v0, v1, :cond_0

    const/16 v2, 0x8

    if-eq v0, v2, :cond_5

    goto/16 :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v5, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v5, v3, :cond_1

    iget-object v5, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    iget-object p0, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    return-object p0

    :cond_2
    iget-object v5, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    iget-object p0, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    return-object p0

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_4
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v4, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v4, v2, :cond_4

    iget-object v4, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    iget-object p0, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    return-object p0

    :cond_5
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_6
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_7

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v2, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v2, v1, :cond_6

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_6

    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    return-object p0

    :cond_7
    :goto_0
    const-string p0, ""

    return-object p0
.end method

.method public static Q(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_0

    const/4 v2, 0x3

    if-eq v0, v2, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v3, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v3, v1, :cond_1

    iget-object v3, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->blurBackgroundUrl:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    iget-object p0, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->blurBackgroundUrl:Ljava/lang/String;

    return-object p0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->blurBackgroundUrl:Ljava/lang/String;

    return-object p0
.end method

.method private static R(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    return p0
.end method

.method private static S(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    return p0
.end method

.method public static T(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->photoId:J

    return-wide v0
.end method

.method public static U(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    const-string p0, "\u7acb\u5373\u6253\u5f00"

    return-object p0
.end method

.method public static V(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardTime:I

    int-to-long v0, p0

    return-wide v0
.end method

.method public static W(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->skipShowTime:I

    return p0
.end method

.method public static X(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 4

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->skipShowTime:I

    int-to-long v0, p0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public static Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 4

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardTime:I

    int-to-long v0, p0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method private static Z(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardSkipConfirmSwitch:I

    return p0

    :cond_0
    const-string p0, "AdInfoHelper"

    const-string v0, "adInfo.adStyleConfInfo is null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x1

    return p0
.end method

.method public static aA(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoInteractInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->dayMaxLimit:I

    return p0
.end method

.method public static aB(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoInteractInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->showTime:I

    return p0
.end method

.method public static aC(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoInteractInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->rewardTime:I

    return p0
.end method

.method public static aD(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoTaskInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;->showTime:I

    return p0
.end method

.method public static aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoTaskInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;->thresholdTime:I

    return p0
.end method

.method public static aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoTaskInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;->taskType:I

    return p0
.end method

.method public static aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoTaskInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoTaskInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->titleBarTextSwitch:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    return v1
.end method

.method public static aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adOperationType:I

    const/4 v0, 0x1

    if-eq p0, v0, :cond_0

    const/4 v0, 0x2

    if-eq p0, v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    return v0
.end method

.method public static aJ(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->ecpm:I

    return p0
.end method

.method public static aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string p0, ""

    return-object p0

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->at(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/utils/ac;->c(Landroid/content/Context;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static aL(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Type:I

    return p0
.end method

.method public static aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;
    .locals 3

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    if-eqz v0, :cond_0

    iget v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_1
    const-string p0, "AdInfoHelper"

    const-string v0, "getImageMaterialFeature in null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;-><init>()V

    return-object p0
.end method

.method public static aM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 2

    if-eqz p0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string p0, "\u5b89\u88c5\u83b7\u53d6\u5956\u52b1"

    return-object p0

    :cond_0
    const-string v0, "\u7acb\u5373\u5b89\u88c5"

    if-nez p0, :cond_1

    return-object v0

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    return-object v0

    :cond_2
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    return-object p0
.end method

.method public static aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;
    .locals 3

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    if-eqz v0, :cond_0

    iget v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_1
    const-string p0, "AdInfoHelper"

    const-string v0, "getVideoMaterialFeature in null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;-><init>()V

    return-object p0
.end method

.method public static aN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bL(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;

    move-result-object p0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->isEmpty()Z

    move-result p0

    if-nez p0, :cond_0

    move p0, v1

    goto :goto_0

    :cond_0
    move p0, v2

    :goto_0
    if-eqz p0, :cond_1

    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_1

    return v1

    :cond_1
    return v2
.end method

.method public static aO(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    :goto_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    if-le v0, p0, :cond_1

    const/4 p0, 0x1

    goto :goto_1

    :cond_1
    const/4 p0, 0x0

    :goto_1
    return p0
.end method

.method public static aP(Lcom/kwad/sdk/core/response/model/AdInfo;)F
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    :goto_0
    if-eqz p0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    if-nez v0, :cond_1

    goto :goto_1

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "getMaterialRatio: height: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", width: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AdInfoHelper"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    int-to-float v0, v0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    int-to-float p0, p0

    div-float/2addr v0, p0

    return v0

    :cond_2
    :goto_1
    const/high16 p0, -0x40800000    # -1.0f

    return p0
.end method

.method private static aQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    if-nez p0, :cond_1

    new-instance p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;-><init>()V

    :cond_1
    return-object p0
.end method

.method public static aR(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    if-le v0, p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    return-object p0
.end method

.method public static aT(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/response/model/AdInfo;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    const/4 v3, 0x3

    if-eq v1, v3, :cond_0

    return-object v0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialFeatureList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    iget v3, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    if-ne v3, v2, :cond_1

    iget-object v3, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method public static aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p0

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->featureType:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialType:I

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_2

    const/4 v0, 0x5

    if-eq p0, v0, :cond_1

    const/16 v0, 0x8

    if-eq p0, v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    return v0

    :cond_1
    const/4 p0, 0x3

    return p0

    :cond_2
    return v0
.end method

.method public static aX(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->actionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;->cardType:I

    return p0
.end method

.method public static aY(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    return-object p0
.end method

.method public static aZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->materialType:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static aa(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;->enableShake:Z

    return p0

    :cond_0
    const-string p0, "AdInfoHelper"

    const-string v0, "adInfo.adStyleConfInfo.nativeAdInfo is null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0
.end method

.method public static ab(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;->acceleration:I

    return p0

    :cond_0
    const-string p0, "AdInfoHelper"

    const-string v0, "adInfo.adStyleConfInfo.nativeAdInfo is null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x2

    return p0
.end method

.method public static ac(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->Z(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static ad(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->fullScreenSkipShowTime:I

    int-to-long v0, p0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0

    :cond_0
    const-string p0, "AdInfoHelper"

    const-string v0, "adInfo.adStyleConfInfo is null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v0, 0x1388

    return-wide v0
.end method

.method public static ae(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->closeDelaySeconds:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0

    :cond_0
    const-string p0, "AdInfoHelper"

    const-string v0, "adInfo.adStyleConfInfo is null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static af(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;->showPageType:I

    return p0
.end method

.method public static ag(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;->videoAutoLoopAtH5:Z

    return p0
.end method

.method public static ah(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;->videoMutedAtH5:Z

    return p0
.end method

.method public static ai(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;->videoClickAtH5:Z

    return p0
.end method

.method public static aj(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->playableCloseSeconds:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0

    :cond_0
    const-string p0, "AdInfoHelper"

    const-string v0, "adInfo.adStyleConfInfo is null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static ak(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->al(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static al(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->showLandingPage:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-eq v0, v1, :cond_1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-nez p0, :cond_1

    return v1

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method public static am(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;->showLandingPage:I

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne v0, v2, :cond_0

    move v0, v2

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cx(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v4

    xor-int/2addr v4, v2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v5

    xor-int/2addr v5, v2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz v0, :cond_1

    if-eqz v5, :cond_1

    if-nez v3, :cond_1

    if-nez v4, :cond_1

    if-nez p0, :cond_1

    return v2

    :cond_1
    return v1
.end method

.method public static an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    return-object p0
.end method

.method public static ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    return-object p0
.end method

.method public static ap(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    return-object p0
.end method

.method public static aq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static ar(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    return-object p0
.end method

.method public static as(Lcom/kwad/sdk/core/response/model/AdInfo;)F
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appScore:I

    if-gtz v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appScore:I

    int-to-float p0, p0

    const/high16 v0, 0x41200000    # 10.0f

    div-float/2addr p0, v0

    return p0
.end method

.method public static at(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableClientProofreadTime:Z

    return p0
.end method

.method public static au(Lcom/kwad/sdk/core/response/model/AdInfo;)F
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appScore:I

    int-to-float p0, p0

    const/high16 v0, 0x41f00000    # 30.0f

    cmpg-float v0, p0, v0

    if-gez v0, :cond_0

    const/high16 p0, 0x40400000    # 3.0f

    goto :goto_0

    :cond_0
    const/high16 v0, 0x420c0000    # 35.0f

    cmpg-float v0, p0, v0

    if-gez v0, :cond_1

    const/high16 p0, 0x40600000    # 3.5f

    goto :goto_0

    :cond_1
    const/high16 v0, 0x42200000    # 40.0f

    cmpg-float v0, p0, v0

    if-gez v0, :cond_2

    const/high16 p0, 0x40800000    # 4.0f

    goto :goto_0

    :cond_2
    const/high16 v0, 0x42340000    # 45.0f

    cmpg-float p0, p0, v0

    if-gez p0, :cond_3

    const/high16 p0, 0x40900000    # 4.5f

    goto :goto_0

    :cond_3
    const/high16 p0, 0x40a00000    # 5.0f

    :goto_0
    return p0
.end method

.method public static av(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    invoke-static {v0}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "\u5e7f\u544a"

    return-object p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    return-object p0
.end method

.method public static aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 3

    const-string v0, "\u7acb\u5373\u4e0b\u8f7d"

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    const-string v0, "\u67e5\u770b\u8be6\u60c5"

    :goto_0
    move-object v1, v0

    :cond_2
    return-object v1
.end method

.method public static ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aI(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p0

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static ay(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardVideoInteractSwitch:Z

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoInteractInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static az(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->rewardVideoInteractInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RewardVideoInteractInfo;->intervalShow:I

    return p0
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdInfo;Z)Z
    .locals 2

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-eqz p1, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    move p1, v0

    goto :goto_0

    :cond_0
    move p1, v1

    :goto_0
    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->mABParams:Lcom/kwad/sdk/core/response/model/ABParams;

    iget p1, p1, Lcom/kwad/sdk/core/response/model/ABParams;->showVideoAtH5:I

    if-eqz p1, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_1

    return v0

    :cond_1
    return v1
.end method

.method private static bA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_3

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;->playableOrientation:I

    const/4 v1, 0x1

    if-eqz p0, :cond_2

    if-ne p0, v1, :cond_1

    goto :goto_0

    :cond_1
    return v0

    :cond_2
    :goto_0
    return v1

    :cond_3
    :goto_1
    return v0
.end method

.method public static bB(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bC(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bD(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bE(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;->fullScreenEndCardSwitch:Z

    return p0
.end method

.method public static bG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->rewardVideoEndCardSwitch:Z

    return p0
.end method

.method public static bH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;->videoSoundType:I

    const/4 v1, 0x2

    if-ne p0, v1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    :goto_0
    return v0
.end method

.method public static bI(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_3

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;->videoAutoPlayType:I

    const/4 v2, 0x1

    if-eq v1, v2, :cond_2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;->videoAutoPlayType:I

    if-nez p0, :cond_1

    goto :goto_0

    :cond_1
    return v0

    :cond_2
    :goto_0
    return v2

    :cond_3
    :goto_1
    return v0
.end method

.method public static bJ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;->videoAutoPlayType:I

    const/4 v1, 0x2

    if-ne p0, v1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    :goto_0
    return v0
.end method

.method public static bK(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->adBrowseInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$AdBrowseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$AdBrowseInfo;->enableAdBrowse:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static bL(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->actionBarType:I

    return p0
.end method

.method public static bM(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->endCardType:I

    return p0
.end method

.method public static bN(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->confirmCardType:I

    return p0
.end method

.method public static bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ap(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->rawUserName:Ljava/lang/String;

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_2

    const-string v0, "\u53ef\u7231\u7684\u5e7f\u544a\u541b"

    :cond_2
    return-object v0
.end method

.method public static bP(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->rawUserName:Ljava/lang/String;

    return-object p0
.end method

.method public static bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_1

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->portraitUrl:Ljava/lang/String;

    :cond_1
    return-object v0
.end method

.method public static bR(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->userId:J

    return-wide v0
.end method

.method public static bS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 2

    const-string v0, "\u8df3\u8fc7"

    if-eqz p0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipTips:Ljava/lang/String;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipTips:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipTips:Ljava/lang/String;

    :cond_1
    :goto_0
    return-object v0
.end method

.method public static bT(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$CutRuleInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->cutRuleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CutRuleInfo;

    return-object p0
.end method

.method public static bU(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashEndCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;->endCardShowSecond:I

    return p0
.end method

.method public static bV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashEndCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;->endCardShowCountDown:Z

    return p0
.end method

.method public static bW(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->retainWindowBasedAdShowCount:I

    return p0
.end method

.method public static bX(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->retainWindowDailyShowCount:I

    return p0
.end method

.method public static bY(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->retainWindowStyle:I

    return p0
.end method

.method public static bZ(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->guideShowStyle:I

    return p0
.end method

.method public static ba(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->needDeeplinkReplaceAdapta:Z

    return p0
.end method

.method public static bb(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->isSupportKeepPlaying:Z

    return p0
.end method

.method public static bc(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->keepPlayingBackOffTime:J

    return-wide v0
.end method

.method public static bd(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/response/model/AdInfo;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    :try_start_0
    const-string v1, ","

    invoke-virtual {p0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    array-length v1, p0

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    aget-object v3, p0, v2

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    if-lez v3, :cond_0

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_1
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p0, 0x3

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_2
    return-object v0
.end method

.method private static be(Lcom/kwad/sdk/core/response/model/AdInfo;)[I
    .locals 3

    const/4 v0, 0x3

    new-array v1, v0, [I

    fill-array-data v1, :array_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->mABParams:Lcom/kwad/sdk/core/response/model/ABParams;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->drawActionBarTimes:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v2, ","

    invoke-virtual {p0, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    array-length v2, p0

    if-ge v2, v0, :cond_1

    return-object v1

    :cond_1
    const/4 v0, 0x0

    aget-object v2, p0, v0

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    aput v2, v1, v0

    const/4 v0, 0x1

    aget-object v2, p0, v0

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    aput v2, v1, v0

    const/4 v0, 0x2

    aget-object p0, p0, v0

    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    aput p0, v1, v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_0
    return-object v1

    :array_0
    .array-data 4
        0x3
        0x3
        0x3
    .end array-data
.end method

.method public static bf(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->be(Lcom/kwad/sdk/core/response/model/AdInfo;)[I

    move-result-object p0

    const/4 v0, 0x0

    aget v1, p0, v0

    if-lez v1, :cond_0

    aget p0, p0, v0

    return p0

    :cond_0
    const/4 p0, 0x3

    return p0
.end method

.method public static bg(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->be(Lcom/kwad/sdk/core/response/model/AdInfo;)[I

    move-result-object v0

    const/4 v1, 0x1

    aget v2, v0, v1

    if-lez v2, :cond_0

    aget v0, v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x3

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bf(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p0

    add-int/2addr v0, p0

    return v0
.end method

.method public static bh(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->be(Lcom/kwad/sdk/core/response/model/AdInfo;)[I

    move-result-object v0

    const/4 v1, 0x2

    aget v2, v0, v1

    if-lez v2, :cond_0

    aget v0, v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x3

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bg(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p0

    add-int/2addr v0, p0

    return v0
.end method

.method public static bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;
    .locals 9

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->I(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->K(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->L(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-static {v0}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/utils/bc;->fJ(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_0

    if-eqz v1, :cond_0

    if-eqz v2, :cond_0

    const/4 p0, 0x0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->R(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->S(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    const/4 p0, 0x1

    :goto_0
    move v8, p0

    move-object v4, v0

    move v5, v1

    move v6, v2

    new-instance p0, Ljava/lang/StringBuilder;

    const-string v0, "frameUrl="

    invoke-direct {p0, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, " useCover="

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v8}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v0, " isAd=true"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "AdInfoHelper"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/response/model/b;

    const/4 v7, 0x1

    move-object v3, p0

    invoke-direct/range {v3 .. v8}, Lcom/kwad/sdk/core/response/model/b;-><init>(Ljava/lang/String;IIZZ)V

    return-object p0
.end method

.method public static bj(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarText:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p0

    :cond_0
    const-string p0, "\u60a8\u8bbf\u95ee\u7684\u7f51\u7ad9\u7531\u7b2c\u4e09\u65b9\u63d0\u4f9b"

    return-object p0
.end method

.method public static bk(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopSwitch:Z

    return p0
.end method

.method public static bl(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->secWindowPopNoWifiSwitch:Z

    return p0
.end method

.method public static bm(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    if-nez v0, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->complianceInfo:Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;->materialJumpType:I

    return p0
.end method

.method public static bn(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->webPageTipbarSwitch:Z

    return p0
.end method

.method public static bo(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_4

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const/4 v1, 0x1

    if-nez p0, :cond_0

    return v1

    :cond_0
    const/4 v2, 0x2

    if-eq v1, p0, :cond_3

    if-eq v2, p0, :cond_3

    const/4 v1, 0x3

    if-eq v1, p0, :cond_3

    const/4 v3, 0x4

    if-ne v3, p0, :cond_1

    goto :goto_0

    :cond_1
    const/16 v2, 0x8

    if-ne v2, p0, :cond_2

    return v1

    :cond_2
    return v0

    :cond_3
    :goto_0
    return v2

    :cond_4
    return v0
.end method

.method public static bp(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bq(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->permissionInfo:Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static br(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPermissionInfoUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bs(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->appPrivacyUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bt(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static bu(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->packageSize:J

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    const/4 v2, 0x1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    move v1, v2

    goto :goto_0

    :cond_1
    move v1, v0

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->by(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_2

    if-eqz v1, :cond_2

    return v2

    :cond_2
    :goto_1
    return v0
.end method

.method public static bw(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5DeeplinkLimitedTimeMs:I

    int-to-long v0, p0

    return-wide v0

    :cond_1
    :goto_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static bx(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableDeeplinkLimitedTimeMs:I

    int-to-long v0, p0

    return-wide v0

    :cond_1
    :goto_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static by(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bz(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    :goto_0
    return p0
.end method

.method private static bz(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_3

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;->playableOrientation:I

    if-eqz p0, :cond_2

    const/4 v1, 0x2

    if-ne p0, v1, :cond_1

    goto :goto_0

    :cond_1
    return v0

    :cond_2
    :goto_0
    const/4 p0, 0x1

    return p0

    :cond_3
    :goto_1
    return v0
.end method

.method public static cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->extraClickReward:Z

    return p0
.end method

.method public static cB(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->H(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    cmp-long p0, v0, v2

    if-gez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cC(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->pushTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PushTKInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PushTKInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "AdInfoHelper"

    const-string v0, "isPushAdEnable pushTK TemplateId is empty"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method public static cD(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushSwitch:Z

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/y;->IA()J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    const/4 v6, 0x1

    if-gtz v0, :cond_1

    :goto_0
    move v1, v6

    goto :goto_1

    :cond_1
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushIntervalTime:I

    int-to-long v7, p0

    cmp-long p0, v7, v4

    if-gtz p0, :cond_2

    const-wide/16 v7, 0x384

    :cond_2
    const-wide/16 v4, 0x3e8

    mul-long/2addr v7, v4

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v2

    cmp-long p0, v4, v7

    if-lez p0, :cond_3

    goto :goto_0

    :cond_3
    :goto_1
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v0, "isPushAdEnable intervalEnable: "

    invoke-direct {p0, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "AdInfoHelper"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v1
.end method

.method public static cE(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushShowAfterTime:I

    mul-int/lit16 p0, p0, 0x3e8

    return p0
.end method

.method public static cF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->dE(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static cG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->useNativeForOuterLiveAd:Z

    return p0
.end method

.method public static cH(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->callBackAdvanceMs:I

    int-to-long v0, p0

    return-wide v0
.end method

.method public static cI(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->serverCheckSwitch:Z

    return p0
.end method

.method public static cJ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->callBackStrategyInfo:Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;->rewardAdvanceSwitch:Z

    return p0
.end method

.method public static ca(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->guideShowTime:I

    return p0
.end method

.method public static cb(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->retainWindowText:Ljava/lang/String;

    return-object p0
.end method

.method public static cc(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->cycleAggregateSwitch:Z

    return p0
.end method

.method public static cd(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->cycleAggregateStyle:I

    return p0
.end method

.method public static ce(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->cycleAggregateInterval:I

    return p0
.end method

.method public static cf(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->cycleAggregateDailyShowCount:I

    return p0
.end method

.method public static cg(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipType:I

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipType:I

    const/4 v0, 0x3

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static ch(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->ci(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipType:I

    if-eqz v0, :cond_2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipType:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_1

    goto :goto_0

    :cond_1
    return v1

    :cond_2
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static ci(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipSecond:I

    if-ltz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->countdownShow:I

    const/4 v1, 0x1

    if-ne p0, v1, :cond_1

    return v1

    :cond_1
    :goto_0
    return v0
.end method

.method public static ck(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->impressionStatisticalChangeSwitch:Z

    return p0
.end method

.method public static cl(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 4

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->impressionLimitSize:D

    const-wide/16 v2, 0x0

    cmpg-double p0, v0, v2

    if-lez p0, :cond_0

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    cmpl-double p0, v0, v2

    if-lez p0, :cond_1

    :cond_0
    const-wide v0, 0x3fe6666660000000L    # 0.699999988079071

    :cond_1
    double-to-int p0, v0

    mul-int/lit8 p0, p0, 0x64

    return p0
.end method

.method public static cm(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    if-eqz p0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->downloadPauseEnable:Z

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cn(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    return-object p0
.end method

.method public static co(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const/4 v0, 0x3

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cp(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->followed:Z

    return p0
.end method

.method public static cq(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cr(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 4

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->fansCount:I

    const/16 v0, 0x2710

    const/16 v1, 0xc8

    if-lt p0, v1, :cond_0

    if-ge p0, v0, :cond_0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_0
    if-lt p0, v0, :cond_1

    int-to-double v0, p0

    const-wide v2, 0x40c3880000000000L    # 10000.0

    div-double/2addr v0, v2

    new-instance p0, Ljava/text/DecimalFormat;

    const-string v2, "0.0"

    invoke-direct {p0, v2}, Ljava/text/DecimalFormat;-><init>(Ljava/lang/String;)V

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0, v1}, Ljava/text/DecimalFormat;->format(D)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "w"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method public static cs(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->brief:Ljava/lang/String;

    return-object p0
.end method

.method public static ct(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->portraitUrl:Ljava/lang/String;

    return-object p0
.end method

.method public static cu(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const/4 v1, 0x4

    if-eq v0, v1, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const/4 v0, 0x5

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static cv(I)Ljava/lang/String;
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    const-string v0, "\u4e0b\u8f7d\u4e2d  %s%%"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/a;->l(ILjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const/4 v0, 0x7

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cw(I)Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u7ee7\u7eed\u4e0b\u8f7d "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, "%"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->universeLiveType:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bR(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long p0, v2, v4

    if-eqz p0, :cond_0

    return v1

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cx(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 2

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    goto :goto_0

    :cond_0
    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    :goto_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->at(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/utils/ac;->c(Landroid/content/Context;Ljava/lang/String;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdProductInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adProductInfo:Lcom/kwad/sdk/core/response/model/AdProductInfo;

    return-object p0
.end method

.method public static cz(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    return-object p0
.end method

.method public static e(Lcom/kwad/sdk/core/response/model/AdInfo;I)Landroid/text/SpannableString;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cr(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p0, v0, v1

    const-string v1, "\u5df2\u6709%s\u7c89\u4e1d\u5173\u6ce8\u4e86TA"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    if-ltz v1, :cond_0

    new-instance v2, Landroid/text/SpannableString;

    invoke-direct {v2, v0}, Landroid/text/SpannableString;-><init>(Ljava/lang/CharSequence;)V

    new-instance v0, Landroid/text/style/ForegroundColorSpan;

    invoke-direct {v0, p1}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result p0

    add-int/2addr p0, v1

    const/16 p1, 0x12

    invoke-virtual {v2, v0, v1, p0, p1}, Landroid/text/SpannableString;->setSpan(Ljava/lang/Object;III)V

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    return-object v2
.end method

.method public static l(ILjava/lang/String;)Ljava/lang/String;
    .locals 2

    if-nez p1, :cond_0

    const-string p1, "\u4e0b\u8f7d\u4e2d  %s%%"

    :cond_0
    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v0, v1

    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

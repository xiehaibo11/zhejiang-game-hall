.class public final Lcom/kwad/sdk/core/response/b/d;
.super Ljava/lang/Object;


# direct methods
.method private static CA()Lcom/kwad/sdk/core/response/b/e;
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->sF()Lcom/kwad/sdk/core/response/b/e;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static a(Ljava/util/List;JI)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;JI)",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;"
        }
    .end annotation

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    const/4 v1, 0x0

    if-ltz v0, :cond_2

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, p1, p2, p3}, Lcom/kwad/sdk/core/response/b/d;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)Z

    move-result v2

    if-eqz v2, :cond_1

    return-object v0

    :cond_2
    :goto_0
    return-object v1
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)Z
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lez p3, :cond_1

    cmp-long p1, v0, p1

    if-nez p1, :cond_0

    if-ne p0, p3, :cond_0

    goto :goto_0

    :cond_0
    move v2, v3

    goto :goto_0

    :cond_1
    cmp-long p0, v0, p1

    if-nez p0, :cond_0

    :goto_0
    return v2
.end method

.method public static bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    const/4 v1, 0x0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    return v1
.end method

.method public static bZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    return-wide v0
.end method

.method public static ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adStyle:I

    return p0
.end method

.method public static cb(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 1
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    if-eqz p0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {p0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result p0

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cc(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->contentType:I

    return p0
.end method

.method public static cd(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    return-wide v0
.end method

.method public static ce(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    return-object p0
.end method

.method public static cf(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    return-object p0
.end method

.method public static cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/core/response/model/AdInfo;

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    if-nez p0, :cond_1

    const-string p0, "AdTemplateHelper"

    const-string v0, "adInfo in null"

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/AdInfo;-><init>()V

    :cond_1
    return-object p0
.end method

.method public static ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->photoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo;

    return-object p0
.end method

.method public static ci(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/f;->a(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cj(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    return-object p0
.end method

.method public static ck(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/response/b/d;->CA()Lcom/kwad/sdk/core/response/b/e;

    move-result-object v0

    if-nez v0, :cond_0

    const-string v0, ""

    goto :goto_0

    :cond_0
    invoke-interface {v0}, Lcom/kwad/sdk/core/response/b/e;->CB()Ljava/lang/String;

    move-result-object v0

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->Q(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cl(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/response/b/d;->CA()Lcom/kwad/sdk/core/response/b/e;

    move-result-object p0

    if-nez p0, :cond_1

    const-string p0, ""

    return-object p0

    :cond_1
    invoke-interface {p0}, Lcom/kwad/sdk/core/response/b/e;->CC()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cm(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->T(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    return-wide v0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/response/b/d;->CA()Lcom/kwad/sdk/core/response/b/e;

    move-result-object v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->hashCode()I

    move-result p0

    int-to-long v0, p0

    return-wide v0

    :cond_1
    invoke-interface {v0}, Lcom/kwad/sdk/core/response/b/e;->CD()J

    move-result-wide v0

    return-wide v0
.end method

.method public static cn(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/core/response/b/d;->CA()Lcom/kwad/sdk/core/response/b/e;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    :cond_0
    invoke-interface {p0}, Lcom/kwad/sdk/core/response/b/e;->CE()I

    move-result p0

    return p0
.end method

.method public static co(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    if-nez p0, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->taskType:I

    return p0
.end method

.method public static cp(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cn(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ch(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/f;->c(Lcom/kwad/sdk/core/response/model/PhotoInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    if-nez p0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    return-wide v0
.end method

.method public static cr(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->blockCallbackIfSpam:Z

    if-eqz v0, :cond_0

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCheatingFlow:Z

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cs(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cu(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

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

.method public static ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 2

    const/4 v0, 0x1

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/d;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)I

    move-result p0

    if-eq p0, v0, :cond_1

    const/4 v1, 0x2

    if-ne p0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    return v0
.end method

.method public static cu(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 3

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/d;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)I

    move-result p0

    const/4 v1, 0x1

    if-eq p0, v1, :cond_1

    const/4 v2, 0x2

    if-ne p0, v2, :cond_0

    goto :goto_0

    :cond_0
    return v0

    :cond_1
    :goto_0
    return v1
.end method

.method public static cv(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->ecpm:I

    return p0
.end method

.method public static cw(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushDownloadJumpType:I

    if-nez v1, :cond_0

    const/16 v1, 0x11

    if-ne p0, v1, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static f(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-nez v2, :cond_1

    return v0

    :cond_1
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    return v0

    :cond_2
    if-eqz p1, :cond_3

    return v0

    :cond_3
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->co(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    const/4 p1, 0x2

    if-ne p0, p1, :cond_4

    const/4 p0, 0x1

    return p0

    :cond_4
    return v0
.end method

.method public static g(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)I
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    const/4 v1, 0x3

    if-ne p0, v1, :cond_3

    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    if-eqz p1, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->actionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;->cardType:I

    goto :goto_0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->endCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;->cardType:I

    :goto_0
    const/4 p1, 0x5

    if-ne p0, p1, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p1, 0x6

    if-ne p0, p1, :cond_2

    const/4 p0, 0x2

    return p0

    :cond_2
    const/4 p0, -0x1

    return p0

    :cond_3
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->mABParams:Lcom/kwad/sdk/core/response/model/ABParams;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/ABParams;->playableStyle:I

    return p0
.end method

.method public static s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 3

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_1

    return v0

    :cond_1
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    return v0

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->co(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    const/4 v1, 0x3

    if-ne p0, v1, :cond_3

    const/4 p0, 0x1

    return p0

    :cond_3
    return v0
.end method

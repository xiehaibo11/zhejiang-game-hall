.class public Lcom/kwad/components/ad/splashscreen/monitor/a;
.super Ljava/lang/Object;


# static fields
.field private static volatile CA:Lcom/kwad/components/ad/splashscreen/monitor/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static E(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x1

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    if-eqz v0, :cond_0

    const/4 p0, 0x2

    :cond_0
    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static F(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x4

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz v1, :cond_0

    const/4 v0, 0x2

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    :goto_0
    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdInfo;ILjava/lang/String;J)V
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    :goto_0
    new-instance v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v1, p3, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p3, 0x2

    invoke-virtual {v1, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p4, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    invoke-virtual {p4, v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p4

    invoke-virtual {p4, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p4

    invoke-virtual {p4, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    const/4 p2, 0x1

    if-eqz p0, :cond_1

    move p3, p2

    :cond_1
    invoke-virtual {p1, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setMaterialType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->n(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdInfo;JIJ)V
    .locals 7

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {}, Lcom/kwad/sdk/core/diskcache/b/a;->Au()Lcom/kwad/sdk/core/diskcache/b/a;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/core/diskcache/b/a;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-virtual {v1}, Ljava/io/File;->length()J

    move-result-wide v1

    goto :goto_1

    :cond_1
    const-wide/16 v1, 0x0

    :goto_1
    new-instance v3, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v3, p4, p5}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p4, 0x1

    invoke-virtual {v3, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p5, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p5

    invoke-virtual {p5, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCostTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->validityPeriod:I

    int-to-long v3, p2

    const-wide/16 v5, 0x3e8

    mul-long/2addr v3, v5

    invoke-virtual {p1, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCacheValidTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setSize(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_2

    goto :goto_2

    :cond_2
    const/4 p4, 0x2

    :goto_2
    invoke-virtual {p1, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setMaterialType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->n(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJJ)V
    .locals 4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sub-long/2addr v0, p2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    new-instance p3, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {p3, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    iget-boolean v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    if-eqz v2, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {p3, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p3

    const/4 v2, 0x3

    invoke-virtual {p3, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p3

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    invoke-virtual {p3, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p3

    invoke-virtual {p3, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCheckStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCheckDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p4, p5}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setBeforeLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    iget-wide p3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    add-long/2addr p3, v0

    invoke-virtual {p1, p3, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadAndCheckDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->l(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Z)V
    .locals 8

    const/4 v0, 0x7

    const/4 v1, 0x1

    const/4 v2, 0x2

    if-nez p0, :cond_1

    new-instance p0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    const-wide/16 v3, 0x0

    invoke-direct {p0, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setViewSource(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    :goto_1
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    new-instance v5, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v6, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v5, v6, v7}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    invoke-virtual {v5, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v5

    invoke-virtual {p0, v5, v6}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz p2, :cond_2

    move p1, v1

    goto :goto_2

    :cond_2
    move p1, v2

    :goto_2
    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setViewSource(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz v4, :cond_3

    move v1, v2

    :cond_3
    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    goto :goto_1
.end method

.method public static a(Ljava/lang/String;ZILjava/lang/String;J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v0, p4, p5}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p4, 0x4

    invoke-virtual {v0, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p4

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    :goto_0
    invoke-virtual {p4, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->l(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Ljava/util/List;JJ)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;JJ)V"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v1, p3, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p3, 0x2

    invoke-virtual {v1, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p3

    invoke-virtual {p3, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setIds(Ljava/util/List;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p3

    invoke-virtual {p3, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCount(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->m(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static b(ILjava/lang/String;J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v0, p2, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p2, 0x3

    invoke-virtual {v0, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p2

    invoke-virtual {p2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->m(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;IJJ)V
    .locals 5

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sub-long/2addr v0, p2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p3

    if-eqz p3, :cond_0

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p3

    goto :goto_0

    :cond_0
    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object p3

    iget-object p3, p3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    :goto_0
    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    iget-boolean v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    if-eqz v3, :cond_1

    const/4 v3, 0x2

    goto :goto_1

    :cond_1
    const/4 v3, 0x1

    :goto_1
    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v2

    const/4 v3, 0x5

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v2

    invoke-virtual {v2, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCheckStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    invoke-virtual {p1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCheckDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p4, p5}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setBeforeLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    iget-wide p4, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    add-long/2addr p4, v0

    invoke-virtual {p1, p4, p5}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadAndCheckDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->l(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x3

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz v1, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {p0, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz v1, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    goto :goto_1

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    :goto_1
    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static c(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    iget-boolean v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    const/4 v3, 0x2

    if-eqz v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    invoke-virtual {v1, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v1

    invoke-virtual {v1, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setBeforeLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p1

    iget-wide v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    invoke-virtual {p1, v1, v2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->l(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static c(Lcom/kwad/sdk/core/response/model/AdTemplate;JZ)V
    .locals 5

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sub-long/2addr v0, p1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x6

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {p0, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    const/4 p1, 0x1

    const/4 v2, 0x2

    if-eqz p3, :cond_0

    move p3, p1

    goto :goto_0

    :cond_0
    move p3, v2

    :goto_0
    invoke-virtual {p0, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setViewSource(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz p2, :cond_1

    move p1, v2

    :cond_1
    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static d(JJ)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/16 p0, 0xb

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p2, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setBeforeLoadDataTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->l(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static d(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x5

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    if-eqz v1, :cond_0

    const/4 v1, 0x2

    goto :goto_0

    :cond_0
    const/4 v1, 0x1

    :goto_0
    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCostTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p1

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static e(Lcom/kwad/components/core/response/model/AdResultData;)V
    .locals 6

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v4

    invoke-static {v4}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v4

    invoke-static {v4, v5}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v3

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v1, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getPosId()J

    move-result-wide v3

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    invoke-virtual {p0}, Lcom/kwad/components/core/response/model/AdResultData;->getAdTemplateList()Ljava/util/List;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setTotalCount(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeIds(Ljava/util/List;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadIds(Ljava/util/List;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->o(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static e(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    new-instance v2, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    iget-wide v3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x2

    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object v2

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x1

    :goto_0
    invoke-virtual {v2, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCostTime(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p1

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setPreloadId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->p(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static kN()Lcom/kwad/components/ad/splashscreen/monitor/a;
    .locals 2

    sget-object v0, Lcom/kwad/components/ad/splashscreen/monitor/a;->CA:Lcom/kwad/components/ad/splashscreen/monitor/a;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/ad/splashscreen/monitor/a;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/ad/splashscreen/monitor/a;->CA:Lcom/kwad/components/ad/splashscreen/monitor/a;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/monitor/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/monitor/a;-><init>()V

    sput-object v1, Lcom/kwad/components/ad/splashscreen/monitor/a;->CA:Lcom/kwad/components/ad/splashscreen/monitor/a;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/ad/splashscreen/monitor/a;->CA:Lcom/kwad/components/ad/splashscreen/monitor/a;

    return-object v0
.end method

.method public static m(J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x1

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->l(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static n(J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;-><init>(J)V

    const/4 p0, 0x1

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->m(Lorg/json/JSONObject;)V

    return-void
.end method

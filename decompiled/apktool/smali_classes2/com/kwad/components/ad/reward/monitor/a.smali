.class public final Lcom/kwad/components/ad/reward/monitor/a;
.super Ljava/lang/Object;


# direct methods
.method public static I(Z)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;-><init>()V

    const-string v1, "ad_show"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object v0

    if-eqz p0, :cond_0

    const-string p0, "ad_reward"

    goto :goto_0

    :cond_0
    const-string p0, "ad_fullscreen"

    :goto_0
    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;IIZ)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p0

    xor-int/lit8 p3, p3, 0x1

    invoke-virtual {p0, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setRewardType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setTaskType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setTaskStep(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long p1, p1

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->k(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZILjava/lang/String;J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    invoke-direct {v0, p3, p4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    const/4 p3, 0x4

    invoke-virtual {v0, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p3, p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNc:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(ZLorg/json/JSONObject;Lcom/kwai/adclient/kscommerciallogger/model/d;)V

    return-void
.end method

.method public static a(ZJ)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    invoke-direct {v0, p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    const/4 p1, 0x1

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(ZLorg/json/JSONObject;Lcom/kwai/adclient/kscommerciallogger/model/d;)V

    return-void
.end method

.method public static a(ZLcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 4

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v2, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setPageStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(ZLorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLcom/kwad/sdk/core/response/model/AdTemplate;IJ)V
    .locals 7

    const-wide/16 v0, 0x0

    cmp-long v2, p3, v0

    const-wide/16 v3, -0x1

    if-lez v2, :cond_1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v5

    cmp-long v0, v5, v0

    if-gtz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v0

    sub-long/2addr v0, p3

    goto :goto_1

    :cond_1
    :goto_0
    move-wide v0, v3

    :goto_1
    const/4 p3, 0x1

    new-array p4, p3, [J

    const/4 v2, 0x0

    aput-wide v0, p4, v2

    invoke-static {p4}, Lcom/kwad/components/ad/reward/monitor/a;->a([J)Z

    move-result p4

    if-eqz p4, :cond_2

    goto :goto_2

    :cond_2
    move-wide v3, v0

    :goto_2
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p4

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result p1

    if-eqz p1, :cond_3

    move p3, v1

    :cond_3
    invoke-virtual {v0, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setAdCount(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, v3, v4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadDataDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {p4}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {p4}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {p4}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long p2, p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(ZLorg/json/JSONObject;Lcom/kwai/adclient/kscommerciallogger/model/d;)V

    return-void
.end method

.method public static a(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 6

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadFinishTime()J

    move-result-wide v0

    cmp-long v0, v0, v2

    if-gtz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v0

    sub-long v0, p2, v0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadFinishTime()J

    move-result-wide v2

    sub-long/2addr p2, v2

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    new-instance v3, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v4, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v3, v4, v5}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    const/4 v4, 0x1

    invoke-virtual {v3, v4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setPageStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result v5

    if-eqz v5, :cond_1

    const/4 v4, 0x2

    :cond_1
    invoke-virtual {v3, v4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v3

    invoke-virtual {v3, v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDataLoadInterval(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v0

    invoke-virtual {v0, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDataDownloadInterval(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p3

    invoke-virtual {p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide v0

    invoke-virtual {p2, v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long p2, p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(ZLorg/json/JSONObject;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public static a(ZLcom/kwad/sdk/core/response/model/AdTemplate;JIJ)V
    .locals 4

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v2, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v1

    invoke-virtual {v1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCurrentDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p2, p4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-static {p5, p6}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p3

    invoke-virtual {p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide p3

    invoke-virtual {p2, p3, p4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long p2, p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->c(ZLorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V
    .locals 4

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v2, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result v2

    if-eqz v2, :cond_0

    const/4 v2, 0x2

    goto :goto_0

    :cond_0
    const/4 v2, 0x1

    :goto_0
    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(ZLorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLjava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setPageType(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    const-string v0, "webview_init"

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    if-eqz p0, :cond_0

    const-string p0, "ad_reward"

    goto :goto_0

    :cond_0
    const-string p0, "ad_fullscreen"

    :goto_0
    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLjava/lang/String;Ljava/lang/String;)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setPageType(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    const-string v0, "webview_load_url"

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    if-eqz p0, :cond_0

    const-string p0, "ad_reward"

    goto :goto_0

    :cond_0
    const-string p0, "ad_fullscreen"

    :goto_0
    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLjava/lang/String;Ljava/lang/String;J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setPageType(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    const-string v0, "webview_load_finish"

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    if-eqz p0, :cond_0

    const-string p0, "ad_reward"

    goto :goto_0

    :cond_0
    const-string p0, "ad_fullscreen"

    :goto_0
    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0, p3, p4}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setDurationMs(J)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(ZLjava/lang/String;Ljava/lang/String;JI)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;-><init>()V

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setPageType(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    const-string v0, "webview_timeout"

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p1

    if-eqz p0, :cond_0

    const-string p0, "ad_reward"

    goto :goto_0

    :cond_0
    const-string p0, "ad_fullscreen"

    :goto_0
    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0, p3, p4}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setDurationMs(J)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0, p5}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setTimeType(I)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/monitor/RewardWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static varargs a([J)Z
    .locals 7

    array-length v0, p0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    aget-wide v3, p0, v2

    const-wide/32 v5, 0xea60

    cmp-long v3, v3, v5

    if-ltz v3, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return v1
.end method

.method public static b(ZLcom/kwad/sdk/core/response/model/AdTemplate;IJ)V
    .locals 11

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setDownloadFinishTime(J)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v1

    sub-long/2addr v1, p3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadFinishTime()J

    move-result-wide v3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v5

    sub-long/2addr v3, v5

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadFinishTime()J

    move-result-wide v5

    sub-long/2addr v5, p3

    const/4 p3, 0x3

    new-array p4, p3, [J

    const/4 v7, 0x0

    aput-wide v1, p4, v7

    const/4 v7, 0x1

    aput-wide v3, p4, v7

    const/4 v8, 0x2

    aput-wide v5, p4, v8

    invoke-static {p4}, Lcom/kwad/components/ad/reward/monitor/a;->a([J)Z

    move-result p4

    const-wide/16 v9, -0x1

    if-eqz p4, :cond_0

    move-wide v1, v9

    move-wide v3, v1

    move-wide v5, v3

    :cond_0
    new-instance p4, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v9, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {p4, v9, v10}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    invoke-virtual {p4, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result p4

    if-eqz p4, :cond_1

    move v7, v8

    :cond_1
    invoke-virtual {p3, v7}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p3, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setAdCount(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p2, v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadDataDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p2, v3, v4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p2, v5, v6}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setTotalDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p3

    invoke-virtual {p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide p3

    invoke-virtual {p2, p3, p4}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long p2, p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    sget-object p2, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(ZLorg/json/JSONObject;Lcom/kwai/adclient/kscommerciallogger/model/d;)V

    return-void
.end method

.method public static b(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V
    .locals 6

    const-wide/16 v0, 0x0

    cmp-long v2, p2, v0

    if-eqz v2, :cond_4

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getLoadDataTime()J

    move-result-wide v2

    cmp-long v2, v2, v0

    if-lez v2, :cond_4

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadFinishTime()J

    move-result-wide v2

    cmp-long v0, v2, v0

    if-gtz v0, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {p2, p3}, Lcom/kwad/components/ad/reward/monitor/a;->j(J)Z

    move-result v0

    const-wide/16 v1, -0x1

    const/4 v3, 0x1

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v4

    sub-long/2addr v4, p2

    new-array p2, v3, [J

    const/4 p3, 0x0

    aput-wide v4, p2, p3

    invoke-static {p2}, Lcom/kwad/components/ad/reward/monitor/a;->a([J)Z

    move-result p2

    if-eqz p2, :cond_2

    goto :goto_0

    :cond_2
    move-wide v1, v4

    :goto_0
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    new-instance p3, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    iget-wide v4, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {p3, v4, v5}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;-><init>(J)V

    const/4 v0, 0x2

    invoke-virtual {p3, v0}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setPageStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->isLoadFromCache()Z

    move-result v4

    if-eqz v4, :cond_3

    move v3, v0

    :cond_3
    invoke-virtual {p3, v3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p3, v1, v2}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setRenderDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result v0

    invoke-virtual {p3, v0}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p3

    invoke-virtual {p1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide v0

    invoke-virtual {p3, v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    int-to-long p2, p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->b(ZLorg/json/JSONObject;)V

    :cond_4
    :goto_1
    return-void
.end method

.method private static j(J)Z
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long p0, p0, v0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

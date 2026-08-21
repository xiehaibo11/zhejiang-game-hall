.class public final Lcom/kwad/components/ad/interstitial/monitor/b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/interstitial/monitor/b$a;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b;->init()V

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/monitor/b;-><init>()V

    return-void
.end method

.method public static a(ILjava/lang/String;J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    invoke-direct {v0, p2, p3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    const/4 p2, 0x5

    invoke-virtual {v0, p2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p2

    invoke-virtual {p2, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->s(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILjava/lang/String;)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setErrorCode(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->w(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;JZ)V
    .locals 4

    const-wide/16 v0, 0x0

    cmp-long v2, p1, v0

    if-gtz v2, :cond_0

    return-void

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sub-long/2addr v2, p1

    iput-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    iget-wide p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    cmp-long p1, p1, v0

    if-lez p1, :cond_3

    iget-wide p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    const-wide/32 v0, 0xea60

    cmp-long p1, p1, v0

    if-ltz p1, :cond_1

    goto :goto_1

    :cond_1
    new-instance p1, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {p1, v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    const/4 p2, 0x2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    if-eqz p3, :cond_2

    goto :goto_0

    :cond_2
    const/4 p2, 0x1

    :goto_0
    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    iget-wide p2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setLoadDataTime(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bB(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setExpectedRenderType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->s(Lorg/json/JSONObject;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)V
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->E(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setCreativeId(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->F(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p0

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    invoke-virtual {p0, v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setVideoDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    const/4 v0, 0x2

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->u(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 8

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adShowStartTimeStamp:J

    sub-long/2addr v0, v2

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adShowStartTimeStamp:J

    const-wide/16 v4, 0x0

    cmp-long v2, v2, v4

    if-lez v2, :cond_2

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    cmp-long v2, v2, v4

    if-lez v2, :cond_2

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    const-wide/32 v6, 0xea60

    cmp-long v2, v2, v6

    if-gez v2, :cond_2

    cmp-long v2, v0, v4

    if-lez v2, :cond_2

    const-wide/16 v2, 0x1388

    cmp-long v2, v0, v2

    if-ltz v2, :cond_0

    goto :goto_1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    new-instance v3, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v3, v4, v5}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    const/4 v4, 0x4

    invoke-virtual {v3, v4}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v3

    iget-boolean v4, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    if-eqz v4, :cond_1

    const/4 v4, 0x2

    goto :goto_0

    :cond_1
    const/4 v4, 0x1

    :goto_0
    invoke-virtual {v3, v4}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v3

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setMaterialType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v2

    invoke-virtual {v2, v0, v1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setRenderDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setRenderType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bB(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setExpectedRenderType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->s(Lorg/json/JSONObject;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public static b(Lcom/kwad/sdk/core/response/model/AdTemplate;JZ)V
    .locals 4

    const-wide/16 v0, 0x0

    cmp-long v2, p1, v0

    if-gtz v2, :cond_0

    return-void

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-nez v2, :cond_1

    return-void

    :cond_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    sub-long/2addr v2, p1

    iput-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    iget-wide p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    cmp-long p1, p1, v0

    if-lez p1, :cond_4

    iget-wide p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    const-wide/32 v0, 0xea60

    cmp-long p1, p1, v0

    if-ltz p1, :cond_2

    goto :goto_1

    :cond_2
    iput-boolean p3, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    new-instance p1, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide p2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {p1, p2, p3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    const/4 p2, 0x3

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    iget-boolean p2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    if-eqz p2, :cond_3

    const/4 p2, 0x2

    goto :goto_0

    :cond_3
    const/4 p2, 0x1

    :goto_0
    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    iget-wide p2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadDuration(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadSize()J

    move-result-wide p2

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadSize(J)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p0

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->s(Lorg/json/JSONObject;)V

    :cond_4
    :goto_1
    return-void
.end method

.method public static cL()Lcom/kwad/components/ad/interstitial/monitor/b;
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/interstitial/monitor/b$a;->cM()Lcom/kwad/components/ad/interstitial/monitor/b;

    move-result-object v0

    return-object v0
.end method

.method public static g(J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    const/4 p0, 0x1

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->s(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static h(J)V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    const/4 p0, 0x6

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->s(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static i(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->t(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static init()V
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    return-void
.end method

.method public static j(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    iget-wide v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;-><init>(J)V

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getDownloadType()I

    move-result p0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setDownloadType(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->setStatus(I)Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/monitor/InterstitialMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->v(Lorg/json/JSONObject;)V

    return-void
.end method

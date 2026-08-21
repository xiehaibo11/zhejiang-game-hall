.class public final Lcom/kwad/components/ad/feed/monitor/b;
.super Ljava/lang/Object;


# direct methods
.method public static a(IJ)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/4 v1, 0x6

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setAdNum(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setLoadDataDuration(J)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/monitor/b;->c(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/4 v2, 0x7

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v1

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setMaterialType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setRenderType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    const/4 p1, 0x2

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setExpectedRenderType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/monitor/b;->c(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;IILjava/lang/String;Ljava/lang/String;J)V
    .locals 3

    const/4 v0, 0x1

    if-ne p2, v0, :cond_0

    iget-boolean v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mHasReportVideoLoad:Z

    if-eqz v1, :cond_0

    return-void

    :cond_0
    if-ne p2, v0, :cond_1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mHasReportVideoLoad:Z

    :cond_1
    new-instance v1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v1

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setLoadStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p5, p6}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setResourceLoadDuration(J)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setMaterialType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setMaterialUrl(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p4}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    const/4 p2, 0x2

    if-ne p1, p2, :cond_2

    goto :goto_0

    :cond_2
    const/4 v0, 0x0

    :goto_0
    invoke-static {p0, v0}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lorg/json/JSONObject;Z)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJ)V
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v1

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setMaterialType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setRenderType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p2, p3}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setConvertDuration(J)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/monitor/b;->c(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Lcom/kwad/sdk/core/response/model/AdTemplate;IJLjava/lang/String;)V
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/4 v2, 0x5

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v1

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aW(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setMaterialType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setRenderType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    const/4 v1, 0x2

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setExpectedRenderType(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p4}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p2, p3}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setRenderDuration(J)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    iget-object p2, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->feedAdInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$FeedAdInfo;

    invoke-virtual {p2}, Lcom/kwad/sdk/core/response/model/AdStyleInfo$FeedAdInfo;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p0, p2}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setExtMsg(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    if-eq p1, v1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    invoke-static {p0, p1}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lorg/json/JSONObject;Z)V

    return-void
.end method

.method public static a(Ljava/lang/String;JI)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;-><init>()V

    const-string v1, "webview_timeout"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    const-string v1, "ad_feed"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    invoke-virtual {v0, p3}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setTimeType(I)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object p3

    invoke-virtual {p3, p1, p2}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setDurationMs(J)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static a(Lorg/json/JSONObject;Z)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/report/p$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/p$a;-><init>()V

    if-eqz p1, :cond_0

    const-string p1, "ad_client_error_log"

    goto :goto_0

    :cond_0
    const-string p1, "ad_client_apm_log"

    :goto_0
    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/p$a;->dz(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_FEED:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/p$a;->b(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;->OTHER:Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/SubBusinessType;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNg:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/p$a;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    const-string v0, "ad_sdk_feed_load"

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/report/p$a;->dA(Ljava/lang/String;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/sdk/core/report/p$a;->A(Lorg/json/JSONObject;)Lcom/kwad/sdk/core/report/p$a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/p$a;->Cd()Lcom/kwad/sdk/core/report/p;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Lcom/kwad/sdk/core/report/p;)V

    return-void
.end method

.method public static aW()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;-><init>()V

    const-string v1, "ad_show"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    const-string v1, "ad_feed"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static aX()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;-><init>()V

    const-string v1, "webview_init"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    const-string v1, "ad_feed"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static c(Ljava/lang/String;J)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;-><init>()V

    const-string v1, "webview_load_finish"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    const-string v1, "ad_feed"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setDurationMs(J)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static c(Lorg/json/JSONObject;)V
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lorg/json/JSONObject;Z)V

    return-void
.end method

.method public static d(ILjava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/16 v1, 0x9

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setErrorCode(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lorg/json/JSONObject;Z)V

    return-void
.end method

.method public static e(ILjava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/16 v1, 0xa

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setLoadStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    invoke-static {p1, p0}, Lcom/kwad/components/ad/feed/monitor/b;->a(Lorg/json/JSONObject;Z)V

    return-void
.end method

.method public static o(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;-><init>()V

    const-string v1, "webview_load_url"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    const-string v1, "ad_feed"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedWebViewInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static s(I)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setAdNum(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/monitor/b;->c(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static t(I)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;-><init>()V

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setStatus(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->setAdNum(I)Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/monitor/FeedPageInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/monitor/b;->c(Lorg/json/JSONObject;)V

    return-void
.end method

.class public final Lcom/kwad/sdk/core/response/b/b;
.super Ljava/lang/Object;


# static fields
.field private static auz:Ljava/util/Random;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    sput-object v0, Lcom/kwad/sdk/core/response/b/b;->auz:Ljava/util/Random;

    return-void
.end method

.method public static aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->bY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    return-object p0

    :cond_0
    new-instance p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;-><init>()V

    return-object p0
.end method

.method private static aP(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    return-object p0
.end method

.method public static aQ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/FeedSlideConf;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bn(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;->data:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p0, ""

    :goto_0
    const/4 v0, 0x0

    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "slideInfo"

    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p0, :cond_2

    const-string v1, "angle"

    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    const/4 v2, 0x1

    if-gt v1, v2, :cond_1

    goto :goto_1

    :cond_1
    new-instance v1, Lcom/kwad/sdk/core/response/model/FeedSlideConf;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/FeedSlideConf;-><init>()V

    const/4 v3, 0x0

    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Integer;

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    iput v3, v1, Lcom/kwad/sdk/core/response/model/FeedSlideConf;->minRange:I

    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    iput p0, v1, Lcom/kwad/sdk/core/response/model/FeedSlideConf;->maxRange:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    :cond_2
    :goto_1
    return-object v0
.end method

.method public static aR(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aS(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->f(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static aS(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    return-object p0
.end method

.method public static aT(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashActionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method private static aU(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->actionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    return-object p0
.end method

.method public static aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ca(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v1

    const/4 v2, 0x3

    if-eq v1, v2, :cond_1

    const/4 v2, 0x2

    if-ne v1, v2, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v1, 0x1

    :goto_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const-string v2, ""

    if-eqz v0, :cond_2

    return-object v2

    :cond_2
    if-eqz v1, :cond_4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bL(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_3

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_3
    return-object v2

    :cond_4
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aU(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_5

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_5
    return-object v2
.end method

.method public static aW(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aU(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    move-result-object p0

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;->maxTimeOut:J

    return-wide v0
.end method

.method public static aX(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static aY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->aggregationCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    return-object p0
.end method

.method public static aZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->styles:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$Styles;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$Styles;->templateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    iget-object v2, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateId:Ljava/lang/String;

    invoke-static {p1, v2}, Lcom/kwad/sdk/utils/bc;->isEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_1
    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    const-string v1, "response_biz_error_tk"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->TACHIKOMA:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->a(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    const-string v0, "TkTemplateDataLost"

    invoke-virtual {p0, v0, p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static bA(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    const/4 v0, 0x0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->renderType:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x1

    if-ne p0, v1, :cond_0

    return v1

    :cond_0
    return v0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return v0
.end method

.method public static bB(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->renderType:I

    return p0
.end method

.method public static bC(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->by(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static bD(Lcom/kwad/sdk/core/response/model/AdTemplate;)F
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->acceleration:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x7

    :goto_0
    int-to-float p0, p0

    return p0
.end method

.method public static bE(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    :goto_0
    return-object p0
.end method

.method private static bF(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->complianceCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    return-object p0
.end method

.method public static bG(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bF(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static bH(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bG(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static bI(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->downloadConfirmCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    return-object p0
.end method

.method public static bJ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bI(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static bK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bJ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static bL(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->merchantLiveReservationInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;

    return-object p0
.end method

.method public static bM(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    return-object p0
.end method

.method public static bN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_1

    return v2

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aU(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    move-result-object v1

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;->cardType:I

    const/4 v3, 0x4

    const/4 v4, 0x1

    if-ne v1, v3, :cond_2

    move v1, v4

    goto :goto_0

    :cond_2
    move v1, v2

    :goto_0
    if-eqz v1, :cond_3

    return v2

    :cond_3
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->playDetailInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo;->detailCommonInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailCommonInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailCommonInfo;->rewardInteractionType:I

    if-lez p0, :cond_4

    return v2

    :cond_4
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_5

    return v4

    :cond_5
    return v2
.end method

.method public static bO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return v2

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->ct(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_1

    return v2

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aU(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;

    move-result-object v1

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActionBarInfoNew;->cardType:I

    const/4 v3, 0x1

    const/4 v4, 0x4

    if-ne v1, v4, :cond_2

    move v1, v3

    goto :goto_0

    :cond_2
    move v1, v2

    :goto_0
    if-eqz v1, :cond_3

    return v2

    :cond_3
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->playDetailInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo;->detailWebCardInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$PlayDetailInfo$DetailWebCardInfo;->cardType:I

    if-ne p0, v4, :cond_4

    return v2

    :cond_4
    iget-object p0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoVideoInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_5

    return v3

    :cond_5
    return v2
.end method

.method public static bP(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->preLandingPageTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    return-object p0
.end method

.method public static bQ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aP(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->installedActivateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;->cardSwitch:Z

    return p0
.end method

.method public static bR(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aP(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->installedActivateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InstalledActivateInfo;->showTime:J

    const-wide/16 v2, 0x0

    cmp-long p0, v0, v2

    if-lez p0, :cond_0

    return-wide v0

    :cond_0
    return-wide v2
.end method

.method public static ba(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)J

    move-result-wide v0

    return-wide v0
.end method

.method public static bb(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;->changeTime:I

    int-to-long v0, p0

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public static bc(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    move-result-object p0

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;->maxTimesPerDay:I

    return p0
.end method

.method public static bd(Lcom/kwad/sdk/core/response/model/AdTemplate;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aY(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;

    move-result-object p0

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AggregationCardInfo;->intervalTime:J

    return-wide v0
.end method

.method public static be(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

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

.method public static bf(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 6

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aZ(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->ba(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    const-wide/16 v4, 0x0

    cmp-long p0, v2, v4

    if-gtz p0, :cond_1

    return v1

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IO()Z

    move-result p0

    return p0
.end method

.method private static bg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->halfCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    return-object p0
.end method

.method public static bh(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method private static bi(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->endCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;

    return-object p0
.end method

.method public static bj(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bi(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$EndCardInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static bk(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bj(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static bl(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->activityMiddlePageInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->cP(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bl(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aK(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static bn(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bo(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->adUnionFeedLiveTemplateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    return-object p0

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->feedInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    return-object p0
.end method

.method private static bo(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static bp(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->adUnionFeedLiveMediaInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    return-object p0
.end method

.method public static bq(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bn(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static br(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bp(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;->templateId:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;->templateUrl:Ljava/lang/String;

    return-object p0

    :cond_0
    const-string p0, ""

    return-object p0
.end method

.method public static bs(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bn(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static bt(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bn(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->clickDisabled:Z

    return p0
.end method

.method public static bu(Lcom/kwad/sdk/core/response/model/AdTemplate;)I
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bn(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FeedInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    if-eqz p0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->acceleration:I

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static bv(Lcom/kwad/sdk/core/response/model/AdTemplate;)D
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->feedAdInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo$FeedAdInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdStyleInfo$FeedAdInfo;->heightRatio:D

    return-wide v0
.end method

.method public static bw(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->bq(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static bx(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->br(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static by(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    return-object p0
.end method

.method public static bz(Lcom/kwad/sdk/core/response/model/AdTemplate;)F
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->acceleration:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x7

    :goto_0
    if-lez p0, :cond_0

    int-to-float p0, p0

    return p0

    :cond_0
    const/high16 p0, 0x40e00000    # 7.0f

    return p0
.end method

.method public static c(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/response/b/b;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTemplate;

    move-result-object p0

    return-object p0
.end method

.method public static cK(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashEndCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cL(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashEndCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashEndCardTKInfo;->endCardFullScreenClick:Z

    return p0
.end method

.method public static cM(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->topFloorTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TopFloorTKInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TopFloorTKInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cN(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashPlayCardTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashPlayCardTKInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashPlayCardTKInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cO(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->cP(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->activityMiddlePageInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;->showHeaderBar:Z

    return p0

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method public static cP(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->activityMiddlePageInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ActivityMiddlePageInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    return-object p0
.end method

.method public static cR(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->slideInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    return-object p0
.end method

.method public static cS(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->title:Ljava/lang/String;

    return-object p0
.end method

.method public static cT(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 2

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->tkDefaultTimeout:J

    return-wide v0
.end method

.method public static cU(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->subTitle:Ljava/lang/String;

    return-object p0
.end method

.method public static cV(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->splashActionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;->downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    return-object p0
.end method

.method public static cW(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->splashActionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;->title:Ljava/lang/String;

    return-object p0
.end method

.method public static cX(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static cY(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->cycleAggregateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;->cutIconUrl:Ljava/lang/String;

    return-object p0
.end method

.method public static cZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->cycleAggregateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;->refreshIconUrl:Ljava/lang/String;

    return-object p0
.end method

.method private static d(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/b;->aO(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    move-result-object p0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->templateDataList:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;->templateId:Ljava/lang/String;

    invoke-static {p1, v1}, Lcom/kwad/sdk/utils/bc;->isEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method public static dA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 3

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->tag:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->type:Ljava/lang/String;

    const-string v2, "playEndClose"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-boolean p0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MatrixTag;->isHide:Z

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method public static dB(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->renderType:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dC(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->preLandingPageTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    return v1
.end method

.method public static dD(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->preLandingPageTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$PreLandingPageTKInfo;->preLandingPageShowType:I

    return p0
.end method

.method public static dD(Ljava/lang/String;)Z
    .locals 1

    :try_start_0
    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/service/a/f;->bS(Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static dE(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->videoLiveTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    return-object p0
.end method

.method public static dF(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->videoImageTKInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$BaseMatrixTemplate;->templateId:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static da(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->interstitialCardInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$InterstitialCardInfo;->cycleAggregateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$CycleAggregateInfo;->convertIconUrl:Ljava/lang/String;

    return-object p0
.end method

.method public static db(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 2

    const/4 v0, 0x1

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->componentIndex:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x2

    if-eq p0, v1, :cond_0

    goto :goto_0

    :cond_0
    move v0, p0

    :goto_0
    return v0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    return v0
.end method

.method public static dc(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->isMediaDisable:Z

    if-eqz v0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x4

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dd(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static de(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    return p0
.end method

.method public static df(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactivityDefaultStyle:I

    return p0
.end method

.method public static dg(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactivityDefaultStyle:I

    const/4 v0, 0x2

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dh(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static di(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactivityDefaultStyle:I

    const/4 v0, 0x1

    if-ne p0, v0, :cond_0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v0, 0x3

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dk(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/16 v0, 0xa

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dl(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactivityDefaultStyle:I

    const/4 v0, 0x3

    if-ne p0, v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static dm(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I

    const/4 v2, 0x4

    if-eq v1, v2, :cond_1

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v1, 0x9

    if-ne p0, v1, :cond_0

    goto :goto_0

    :cond_0
    return v0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0

    :catch_0
    return v0
.end method

.method public static dn(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    const/4 v0, 0x0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method

.method public static do(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    const/4 v0, 0x0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->interactiveStyle:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 v1, 0x4

    if-ne p0, v1, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method

.method public static dp(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    const/4 v0, 0x0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->clickDisabled:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method

.method public static dq(Lcom/kwad/sdk/core/response/model/AdInfo;)J
    .locals 6

    const-wide/16 v0, 0x5dc

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->switchDefaultTime:J
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-wide/16 v4, 0x0

    cmp-long p0, v2, v4

    if-gtz p0, :cond_0

    goto :goto_0

    :cond_0
    move-wide v0, v2

    :catch_0
    :goto_0
    return-wide v0
.end method

.method public static dr(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    const/4 v0, 0x0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoVideoInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->clickDisabled:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :cond_0
    return v0
.end method

.method public static ds(Lcom/kwad/sdk/core/response/model/AdInfo;)F
    .locals 0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->acceleration:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x7

    :goto_0
    int-to-float p0, p0

    return p0
.end method

.method public static dt(Lcom/kwad/sdk/core/response/model/AdInfo;)F
    .locals 0

    :try_start_0
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoVideoInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->acceleration:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x7

    :goto_0
    int-to-float p0, p0

    return p0
.end method

.method public static du(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->title:Ljava/lang/String;

    return-object p0
.end method

.method public static dv(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoVideoInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->title:Ljava/lang/String;

    return-object p0
.end method

.method public static dw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->subtitle:Ljava/lang/String;

    return-object p0
.end method

.method public static dx(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoVideoInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->shakeInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$ShakeInfo;->subtitle:Ljava/lang/String;

    return-object p0
.end method

.method public static dy(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->fullScreenInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$FullScreenInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->splashActionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;->downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    return-object p0
.end method

.method public static dz(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->neoVideoInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$NeoVideoInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->splashActionBarInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashActionBarInfo;->downloadTexts:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    return-object p0
.end method

.method private static e(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)J
    .locals 0

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/response/b/b;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-wide p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;->templateDelayTime:J

    return-wide p0

    :cond_0
    const-wide/16 p0, 0x0

    return-wide p0
.end method

.method private static f(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Z
    .locals 1

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/response/b/b;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;

    move-result-object p0

    if-eqz p0, :cond_0

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$TemplateData;->data:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p0, ""

    :goto_0
    const/4 p1, 0x0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "autoCallAppInfo"

    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p0

    if-eqz p0, :cond_1

    const-string v0, "adTitle"

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p0, :cond_1

    const/4 p0, 0x1

    move p1, p0

    :catchall_0
    :cond_1
    return p1
.end method

.method public static g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->recommendAggregateSwitch:Z

    if-eqz v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cA(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

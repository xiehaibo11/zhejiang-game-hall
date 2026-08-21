.class public abstract Lcom/kwad/sdk/core/report/y;
.super Lcom/kwad/sdk/core/network/a;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/a<",
        "Lcom/kwad/sdk/core/report/z;",
        ">;"
    }
.end annotation


# instance fields
.field private asF:Lcom/kwad/sdk/core/response/model/ReportResultData;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/a;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/sdk/core/network/c;)Lcom/kwad/sdk/core/response/model/ReportResultData;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/y;->asF:Lcom/kwad/sdk/core/response/model/ReportResultData;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/report/ReportNetwork$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/report/ReportNetwork$1;-><init>(Lcom/kwad/sdk/core/report/y;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/y;->asF:Lcom/kwad/sdk/core/response/model/ReportResultData;

    :cond_0
    if-eqz p1, :cond_1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/report/y;->asF:Lcom/kwad/sdk/core/response/model/ReportResultData;

    new-instance v1, Lorg/json/JSONObject;

    iget-object p1, p1, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/ReportResultData;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/core/report/y;->asF:Lcom/kwad/sdk/core/response/model/ReportResultData;

    return-object p1
.end method

.method private a(Lcom/kwad/sdk/core/report/z;)V
    .locals 5

    :try_start_0
    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/z;->Cp()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v3

    const/4 v4, 0x0

    invoke-interface {v3, v2, v4}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doGetWithoutResponse(Ljava/lang/String;Ljava/util/Map;)Lcom/kwad/sdk/core/network/c;

    move-result-object v3

    invoke-static {v2}, Lcom/kwad/sdk/core/report/y;->isValidUrl(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    iget v3, v3, Lcom/kwad/sdk/core/network/c;->code:I

    const/16 v4, 0xc8

    if-eq v3, v4, :cond_0

    :cond_1
    sget-object v3, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v3

    const-string v4, "response_biz_error_track"

    invoke-virtual {v3, v4}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v3

    const-string v4, "trackUrlError"

    invoke-virtual {v3, v4, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/z;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    goto :goto_0

    :cond_2
    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/z;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/y;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/util/List;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mTrackUrlReported:Z

    if-nez v0, :cond_1

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mTrackUrlReported:Z

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    const-wide/16 v1, 0x27e9

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/core/report/r;-><init>(JLcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/t;->toJsonArray(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/report/r;->ash:Lorg/json/JSONArray;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private static a(Ljava/lang/String;ILcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/network/c;)V
    .locals 2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    const-string v0, " "

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "http"

    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget p3, p3, Lcom/kwad/sdk/core/network/c;->code:I

    const/16 v0, 0xc8

    if-eq p3, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p3, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    move p3, v1

    :goto_1
    if-eqz p3, :cond_4

    if-ne p1, v1, :cond_2

    const-string p1, "showUrlError"

    goto :goto_2

    :cond_2
    const/4 p3, 0x2

    if-ne p1, p3, :cond_3

    const-string p1, "clickUrlError"

    goto :goto_2

    :cond_3
    const-string p1, "convertUrlError"

    :goto_2
    sget-object p3, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {p3}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p3

    const-string v0, "response_biz_error_track"

    invoke-virtual {p3, v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p3

    invoke-virtual {p3, p1, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0, p2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    :cond_4
    return-void
.end method

.method private static isValidUrl(Ljava/lang/String;)Z
    .locals 3

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    new-instance v0, Ljava/net/URI;

    invoke-direct {v0, p0}, Ljava/net/URI;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/net/URISyntaxException; {:try_start_0 .. :try_end_0} :catch_0

    invoke-virtual {v0}, Ljava/net/URI;->getHost()Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_1

    return v1

    :cond_1
    invoke-virtual {v0}, Ljava/net/URI;->getScheme()Ljava/lang/String;

    move-result-object p0

    const-string v2, "http"

    invoke-virtual {p0, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_3

    invoke-virtual {v0}, Ljava/net/URI;->getScheme()Ljava/lang/String;

    move-result-object p0

    const-string v0, "https"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_2

    goto :goto_0

    :cond_2
    return v1

    :cond_3
    :goto_0
    const/4 p0, 0x1

    return p0

    :catch_0
    return v1
.end method


# virtual methods
.method public fetch()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/sdk/core/network/a;->fetch()V

    return-void
.end method

.method public fetchImpl()V
    .locals 6

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    const-string v1, "ReportNetwork"

    if-nez v0, :cond_0

    const-string v0, "no network while report log"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/report/y;->createRequest()Lcom/kwad/sdk/core/network/g;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/report/z;

    const/4 v2, 0x0

    :try_start_0
    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/z;->getUrl()Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    :try_start_1
    invoke-static {}, Lcom/kwad/sdk/g;->wX()Lcom/kwad/sdk/export/proxy/AdHttpProxy;

    move-result-object v4

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/z;->getBody()Lorg/json/JSONObject;

    move-result-object v5

    invoke-interface {v4, v3, v2, v5}, Lcom/kwad/sdk/export/proxy/AdHttpProxy;->doPost(Ljava/lang/String;Ljava/util/Map;Lorg/json/JSONObject;)Lcom/kwad/sdk/core/network/c;

    move-result-object v2

    if-eqz v2, :cond_1

    iget v4, v2, Lcom/kwad/sdk/core/network/c;->code:I

    const/16 v5, 0xc8

    if-ne v4, v5, :cond_1

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v5, "report success actionType:"

    invoke-direct {v4, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v5, v0, Lcom/kwad/sdk/core/report/z;->asG:I

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :goto_0
    invoke-static {v1, v4}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_2

    :cond_1
    const-string v4, "report fail result is null"
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    goto :goto_1

    :catch_1
    move-exception v1

    move-object v3, v2

    :goto_1
    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :goto_2
    invoke-direct {p0, v2}, Lcom/kwad/sdk/core/report/y;->a(Lcom/kwad/sdk/core/network/c;)Lcom/kwad/sdk/core/response/model/ReportResultData;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/response/model/ReportResultData;->isCheatingFlow()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/z;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v4

    invoke-virtual {v1}, Lcom/kwad/sdk/core/response/model/ReportResultData;->isCheatingFlow()Z

    move-result v5

    invoke-virtual {v4, v5}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setCheatingFlow(Z)V

    :cond_2
    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/z;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v4

    iget-boolean v4, v4, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCheatingFlow:Z

    if-nez v4, :cond_3

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/report/y;->a(Lcom/kwad/sdk/core/report/z;)V

    :cond_3
    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/z;->getActionType()I

    move-result v4

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/z;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v3, v4, v0, v2}, Lcom/kwad/sdk/core/report/y;->a(Ljava/lang/String;ILcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/network/c;)V

    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-virtual {v1}, Lcom/kwad/sdk/core/response/model/ReportResultData;->isResultOk()Z

    move-result v0

    if-eqz v0, :cond_4

    goto :goto_3

    :cond_4
    new-instance v0, Ljava/lang/RuntimeException;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "\u8bf7\u6c42\u8fd4\u56de\u5931\u8d25 code:"

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v4, v1, Lcom/kwad/sdk/core/response/model/ReportResultData;->result:I

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ", errorMsg:"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/ReportResultData;->errorMsg:Ljava/lang/String;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n url="

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_5
    :goto_3
    return-void
.end method

.method public bridge synthetic onResponse(Lcom/kwad/sdk/core/network/g;Lcom/kwad/sdk/core/network/c;)V
    .locals 0

    return-void
.end method

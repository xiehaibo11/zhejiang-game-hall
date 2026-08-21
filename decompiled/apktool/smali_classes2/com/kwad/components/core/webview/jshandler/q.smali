.class public final Lcom/kwad/components/core/webview/jshandler/q;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "handleH5Log actionType actionType"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WebCardLogHandler"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->category:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->a(Ljava/lang/String;Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 2

    :try_start_0
    new-instance v0, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;

    invoke-direct {v0}, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;-><init>()V

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;->parseJson(Lorg/json/JSONObject;)V

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/q;->a(Lcom/kwad/sdk/commercial/model/WebViewCommercialMsg;)V

    const/4 p1, 0x0

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    const/4 v0, -0x1

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Lcom/kwad/sdk/core/webview/c/c;->onError(ILjava/lang/String;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "commercialLog"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method

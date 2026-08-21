.class public final Lcom/kwad/components/ad/splashscreen/monitor/b;
.super Ljava/lang/Object;


# direct methods
.method public static Y(Ljava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;-><init>()V

    const-string v1, "webview_load_url"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    const-string v1, "ad_splash"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static a(Ljava/lang/String;JILjava/lang/String;)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;-><init>()V

    const-string v1, "webview_timeout"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    const-string v1, "ad_splash"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setDurationMs(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setTimeType(I)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p0

    invoke-virtual {p0, p4}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static d(Ljava/lang/String;J)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;-><init>()V

    const-string v1, "webview_load_finish"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    const-string v1, "ad_splash"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setDurationMs(J)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setUrl(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object p0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static kO()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;-><init>()V

    const-string v1, "ad_show"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    const-string v1, "ad_splash"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

.method public static kP()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;-><init>()V

    const-string v1, "webview_init"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setEvent(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    const-string v1, "ad_splash"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->setSceneId(Ljava/lang/String;)Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/monitor/SplashWebMonitorInfo;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->j(Lorg/json/JSONObject;)V

    return-void
.end method

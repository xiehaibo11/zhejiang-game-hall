.class public final Lcom/kwad/components/offline/api/tk/TkLoggerReporter;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/api/tk/TkLoggerReporter$Holder;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/kwad/components/offline/api/tk/TkLoggerReporter$1;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;-><init>()V

    return-void
.end method

.method public static get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;
    .locals 1

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter$Holder;->access$100()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v0

    return-object v0
.end method

.method private reportEvent(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/offline/api/OfflineHostProvider;->getApi()Lcom/kwad/components/offline/api/core/IOfflineHostApi;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/IOfflineHostApi;->loggerReporter()Lcom/kwad/components/offline/api/core/api/ILoggerReporter;

    move-result-object v0

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->TACHIKOMA:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    invoke-interface {v0, p1, v1, p2, p3}, Lcom/kwad/components/offline/api/core/api/ILoggerReporter;->reportEvent(Ljava/lang/String;Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method


# virtual methods
.method public final reportTKDownload(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 1

    const-string v0, "ad_tk_download_performance"

    invoke-direct {p0, p1, v0, p2}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportEvent(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final reportTKPerform(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 1

    const-string v0, "ad_tk_render_performance"

    invoke-direct {p0, p1, v0, p2}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportEvent(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final reportTKSODownload(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 1

    const-string v0, "ad_tk_so_download_event"

    invoke-direct {p0, p1, v0, p2}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportEvent(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final reportTKSOLoad(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 1

    const-string v0, "ad_tk_so_load_performence"

    invoke-direct {p0, p1, v0, p2}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportEvent(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

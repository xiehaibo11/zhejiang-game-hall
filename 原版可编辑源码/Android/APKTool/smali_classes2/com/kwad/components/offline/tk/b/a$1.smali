.class final Lcom/kwad/components/offline/tk/b/a$1;
.super Lcom/kwad/library/solder/lib/ext/b$c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/offline/tk/b/a;->a(Landroid/content/Context;Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

.field final synthetic aac:Lcom/kwad/library/solder/lib/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/library/solder/lib/a/a;Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/tk/b/a$1;->aac:Lcom/kwad/library/solder/lib/a/a;

    iput-object p2, p0, Lcom/kwad/components/offline/tk/b/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/ext/b$c;-><init>()V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->a(Lcom/kwad/library/solder/lib/a/f;)V

    return-void
.end method

.method private a(Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/offline/tk/b/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/ext/PluginError;->getCode()I

    move-result v1

    invoke-interface {v0, v1, p1}, Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;->onFailed(ILjava/lang/Throwable;)V

    return-void
.end method

.method private b(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->c(Lcom/kwad/library/solder/lib/a/f;)V

    iget-object v0, p0, Lcom/kwad/components/offline/tk/b/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;->onPreUpdate()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/kwad/components/offline/tk/b/a;->F(J)J

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    invoke-direct {v1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;-><init>()V

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setDownloadState(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object v1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wu()I

    move-result p1

    invoke-virtual {v1, p1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setRetryCount(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "ad_client_apm_log"

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKSODownload(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private c(Lcom/kwad/library/solder/lib/b/c;)V
    .locals 6

    invoke-super {p0, p1}, Lcom/kwad/library/solder/lib/ext/b$c;->b(Lcom/kwad/library/solder/lib/a/f;)V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->getState()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v0

    new-instance v2, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    invoke-direct {v2}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wu()I

    move-result p1

    invoke-virtual {v2, p1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setRetryCount(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    invoke-static {}, Lcom/kwad/components/offline/tk/b/a;->sN()J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-virtual {p1, v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setDownloadTime(J)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setDownloadState(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "ad_client_apm_log"

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKSODownload(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wr()Ljava/lang/Throwable;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wr()Ljava/lang/Throwable;

    move-result-object v0

    instance-of v1, v0, Lcom/kwad/library/solder/lib/ext/PluginError;

    if-eqz v1, :cond_1

    check-cast v0, Lcom/kwad/library/solder/lib/ext/PluginError;

    invoke-virtual {v0}, Lcom/kwad/library/solder/lib/ext/PluginError;->getCode()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    const-string v0, "other"

    :goto_0
    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    invoke-direct {v2}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/library/solder/lib/b/c;->wu()I

    move-result p1

    invoke-virtual {v2, p1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setRetryCount(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setErrorReason(Ljava/lang/String;)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setDownloadState(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object p1

    const-string v0, "ad_client_error_log"

    invoke-virtual {v1, v0, p1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKSODownload(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private sI()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/offline/tk/b/a$1;->Zt:Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;->onLoaded()V

    return-void
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/tk/b/a$1;->a(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method

.method public final synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/tk/b/a$1;->sI()V

    return-void
.end method

.method public final bridge synthetic a(Lcom/kwad/library/solder/lib/a/f;Lcom/kwad/library/solder/lib/ext/PluginError;)V
    .locals 0

    invoke-direct {p0, p2}, Lcom/kwad/components/offline/tk/b/a$1;->a(Lcom/kwad/library/solder/lib/ext/PluginError;)V

    return-void
.end method

.method public final synthetic b(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/tk/b/a$1;->c(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method

.method public final synthetic c(Lcom/kwad/library/solder/lib/a/f;)V
    .locals 0

    check-cast p1, Lcom/kwad/library/solder/lib/b/c;

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/tk/b/a$1;->b(Lcom/kwad/library/solder/lib/b/c;)V

    return-void
.end method

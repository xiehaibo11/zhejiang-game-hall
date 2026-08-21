.class final Lcom/kwad/components/offline/tk/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/InitCallBack;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/offline/tk/b;->b(Landroid/content/Context;Ljava/lang/ClassLoader;)Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Lq:Z

.field final synthetic ZB:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

.field final synthetic ZC:J

.field final synthetic ZD:J

.field final synthetic ZE:Lcom/kwad/components/offline/tk/b;

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/kwad/components/offline/tk/b;Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;ZJJLandroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/offline/tk/b$1;->ZE:Lcom/kwad/components/offline/tk/b;

    iput-object p2, p0, Lcom/kwad/components/offline/tk/b$1;->ZB:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    iput-boolean p3, p0, Lcom/kwad/components/offline/tk/b$1;->Lq:Z

    iput-wide p4, p0, Lcom/kwad/components/offline/tk/b$1;->ZC:J

    iput-wide p6, p0, Lcom/kwad/components/offline/tk/b$1;->ZD:J

    iput-object p8, p0, Lcom/kwad/components/offline/tk/b$1;->jz:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onSuccess(Z)V
    .locals 10

    new-instance v0, Lcom/kwad/components/offline/tk/TkCompoImpl;

    iget-object v1, p0, Lcom/kwad/components/offline/tk/b$1;->ZB:Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    invoke-direct {v0, v1}, Lcom/kwad/components/offline/tk/TkCompoImpl;-><init>(Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;)V

    const-class v1, Lcom/kwad/components/core/offline/api/b/c;

    invoke-static {v1, v0}, Lcom/kwad/sdk/components/c;->a(Ljava/lang/Class;Lcom/kwad/sdk/components/a;)V

    iget-object v1, p0, Lcom/kwad/components/offline/tk/b$1;->ZE:Lcom/kwad/components/offline/tk/b;

    invoke-static {v1}, Lcom/kwad/components/offline/tk/b;->a(Lcom/kwad/components/offline/tk/b;)Ljava/util/concurrent/atomic/AtomicBoolean;

    move-result-object v1

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    const/4 v1, 0x2

    if-eqz p1, :cond_0

    move v4, v1

    goto :goto_0

    :cond_0
    move v4, v2

    :goto_0
    iget-boolean p1, p0, Lcom/kwad/components/offline/tk/b$1;->Lq:Z

    if-eqz p1, :cond_1

    move v5, v2

    goto :goto_1

    :cond_1
    move v5, v1

    :goto_1
    invoke-static {}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->get()Lcom/kwad/components/offline/api/tk/TkLoggerReporter;

    move-result-object p1

    new-instance v1, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    invoke-direct {v1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;-><init>()V

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setDownloadState(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object v1

    iget-wide v2, p0, Lcom/kwad/components/offline/tk/b$1;->ZC:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setOfflineLoadTime(J)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object v1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iget-wide v6, p0, Lcom/kwad/components/offline/tk/b$1;->ZD:J

    sub-long/2addr v2, v6

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setSoLoadTime(J)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object v1

    invoke-virtual {v1, v5}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setOfflineSource(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object v1

    invoke-virtual {v1, v4}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->setSoSource(I)Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/offline/api/tk/model/report/TKDownloadMsg;->toJson()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "ad_client_apm_log"

    invoke-virtual {p1, v2, v1}, Lcom/kwad/components/offline/api/tk/TkLoggerReporter;->reportTKSOLoad(Ljava/lang/String;Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/offline/tk/b$1;->ZE:Lcom/kwad/components/offline/tk/b;

    invoke-virtual {p1}, Lcom/kwad/components/offline/tk/b;->getTag()Ljava/lang/String;

    move-result-object p1

    const-string v1, "offlineComponent load success"

    invoke-static {p1, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/offline/tk/b$1;->ZE:Lcom/kwad/components/offline/tk/b;

    invoke-static {p1}, Lcom/kwad/components/offline/tk/b;->b(Lcom/kwad/components/offline/tk/b;)V

    iget-object v3, p0, Lcom/kwad/components/offline/tk/b$1;->ZE:Lcom/kwad/components/offline/tk/b;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v6, p0, Lcom/kwad/components/offline/tk/b$1;->ZD:J

    sub-long v6, v1, v6

    iget-wide v8, p0, Lcom/kwad/components/offline/tk/b$1;->ZC:J

    invoke-static/range {v3 .. v9}, Lcom/kwad/components/offline/tk/b;->a(Lcom/kwad/components/offline/tk/b;IIJJ)V

    new-instance p1, Lcom/kwad/components/offline/tk/b$1$1;

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/offline/tk/b$1$1;-><init>(Lcom/kwad/components/offline/tk/b$1;Lcom/kwad/components/offline/tk/TkCompoImpl;)V

    invoke-static {p1}, Lcom/kwad/components/core/p/f;->a(Lcom/kwad/components/core/p/f$a;)V

    return-void
.end method

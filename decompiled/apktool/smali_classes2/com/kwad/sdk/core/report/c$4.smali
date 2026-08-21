.class final Lcom/kwad/sdk/core/report/c$4;
.super Lcom/kwad/sdk/core/network/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/c;->c(Lcom/kwad/sdk/core/report/n;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/core/network/m<",
        "TR;",
        "Lcom/kwad/sdk/core/response/model/BatchReportResult;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic aqJ:Lcom/kwad/sdk/core/report/n;

.field final synthetic aqK:Lcom/kwad/sdk/core/report/c;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/c;Lcom/kwad/sdk/core/report/n;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c$4;->aqK:Lcom/kwad/sdk/core/report/c;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/c$4;->aqJ:Lcom/kwad/sdk/core/report/n;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/m;-><init>()V

    return-void
.end method

.method private static ds(Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/BatchReportResult;
    .locals 1

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    new-instance p0, Lcom/kwad/sdk/core/response/model/BatchReportResult;

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/model/BatchReportResult;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/response/model/BatchReportResult;->parseJson(Lorg/json/JSONObject;)V

    return-object p0
.end method


# virtual methods
.method public final createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TR;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$4;->aqJ:Lcom/kwad/sdk/core/report/n;

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/n;->BU()Lcom/kwad/sdk/core/report/g;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/report/c$4;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/c;Lcom/kwad/sdk/core/report/g;)Lcom/kwad/sdk/core/report/g;

    iget-object v1, p0, Lcom/kwad/sdk/core/report/c$4;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/g;)Lcom/kwad/sdk/core/network/g;

    move-result-object v0

    return-object v0
.end method

.method public final enableMonitorReport()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final getExecutor()Ljava/util/concurrent/ExecutorService;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/core/report/c;->BT()Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/report/c$4;->ds(Ljava/lang/String;)Lcom/kwad/sdk/core/response/model/BatchReportResult;

    move-result-object p1

    return-object p1
.end method

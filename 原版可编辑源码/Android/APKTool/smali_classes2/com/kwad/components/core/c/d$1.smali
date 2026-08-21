.class final Lcom/kwad/components/core/c/d$1;
.super Lcom/kwad/components/core/m/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/c/d;->a(Lcom/kwad/components/core/p/a/a;Lcom/kwad/sdk/core/network/p;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic bv:Lcom/kwad/components/core/p/a/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/p/a/b;Lcom/kwad/components/core/p/a/a;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/core/c/d$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/m/a;-><init>(Lcom/kwad/components/core/p/a/b;)V

    return-void
.end method


# virtual methods
.method public final ag(Ljava/lang/String;)Lcom/kwad/components/core/response/model/AdResultData;
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/c/d$1;->bv:Lcom/kwad/components/core/p/a/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/p/a/a;->getAdStyle()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v0

    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v2, "requestFinish"

    invoke-virtual {v1, v0, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    iget-object v0, p0, Lcom/kwad/components/core/c/d$1;->bv:Lcom/kwad/components/core/p/a/a;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/a;->Lj:Lcom/kwad/components/core/p/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/p/a/b;->PN:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-static {p1, v0}, Lcom/kwad/components/core/response/model/AdResultData;->createFromResponseJson(Ljava/lang/String;Lcom/kwad/sdk/internal/api/SceneImpl;)Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic createRequest()Lcom/kwad/sdk/core/network/g;
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/components/core/c/d$1;->mm()Lcom/kwad/components/core/p/a;

    move-result-object v0

    return-object v0
.end method

.method public final mm()Lcom/kwad/components/core/p/a;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/c/d$1$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/c/d$1$1;-><init>(Lcom/kwad/components/core/c/d$1;)V

    invoke-static {v0}, Lcom/kwad/components/core/c/d;->b(Lcom/kwad/sdk/g/c;)Lcom/kwad/components/core/p/a;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic parseData(Ljava/lang/String;)Lcom/kwad/sdk/core/network/BaseResultData;
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/c/d$1;->ag(Ljava/lang/String;)Lcom/kwad/components/core/response/model/AdResultData;

    move-result-object p1

    return-object p1
.end method

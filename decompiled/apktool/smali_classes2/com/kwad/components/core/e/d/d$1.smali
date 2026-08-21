.class final Lcom/kwad/components/core/e/d/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/e/d/d;->e(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic Kf:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field final synthetic Kg:I


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/d/d$1;->Kf:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput p2, p0, Lcom/kwad/components/core/e/d/d$1;->Kg:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/d;->aw(Z)V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->isAppOnForeground()Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/e/d/d$1;->Kf:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget v1, p0, Lcom/kwad/components/core/e/d/d$1;->Kg:I

    const-string v2, ""

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;I)V

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/kwad/components/core/e/d/d$1;->Kf:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v1, :cond_0

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/e/d/d$1;->Kf:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v0

    :cond_0
    sget-object v1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CONVERT_DPLINK:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v2, "trueDplinkSuccess"

    invoke-virtual {v1, v0, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    :cond_1
    return-void
.end method

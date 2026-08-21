.class final Lcom/kwad/components/ad/f/d$6;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/widget/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/f/d;->a(Landroid/view/ViewGroup;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic km:Landroid/view/ViewGroup;

.field final synthetic mF:Lcom/kwad/components/ad/f/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/f/d;Landroid/view/ViewGroup;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    iput-object p2, p0, Lcom/kwad/components/ad/f/d$6;->km:Landroid/view/ViewGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final eI()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->b(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPvReported:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->a(Lcom/kwad/components/ad/f/d;)Lcom/kwad/components/ad/f/d$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/ad/f/d$a;->eJ()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v0}, Lcom/kwad/components/ad/f/d;->f(Lcom/kwad/components/ad/f/d;)V

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$6;->km:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getHeight()I

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/f/d$6;->km:Landroid/view/ViewGroup;

    invoke-virtual {v2}, Landroid/view/ViewGroup;->getWidth()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/j;->t(II)Lcom/kwad/sdk/core/report/j;

    iget-object v1, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v1}, Lcom/kwad/components/ad/f/d;->g(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v2}, Lcom/kwad/components/ad/f/d;->h(Lcom/kwad/components/ad/f/d;)I

    move-result v2

    iput v2, v1, Lcom/kwad/sdk/core/report/z$a;->showLiveStyle:I

    iget-object v2, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v2}, Lcom/kwad/components/ad/f/d;->i(Lcom/kwad/components/ad/f/d;)I

    move-result v2

    iput v2, v1, Lcom/kwad/sdk/core/report/z$a;->showLiveStatus:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    :cond_1
    invoke-static {}, Lcom/kwad/components/core/t/b;->qj()Lcom/kwad/components/core/t/b;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/f/d$6;->mF:Lcom/kwad/components/ad/f/d;

    invoke-static {v2}, Lcom/kwad/components/ad/f/d;->b(Lcom/kwad/components/ad/f/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, v0}, Lcom/kwad/components/core/t/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/core/report/j;)V

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v1, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_NATIVE:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v2, "adShowSuccess"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.class final Lcom/kwad/components/core/webview/jshandler/r$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/r;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic TQ:Lcom/kwad/sdk/core/webview/d/b/a;

.field final synthetic TY:Lcom/kwad/components/core/webview/jshandler/r;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/r;Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->a(Lcom/kwad/components/core/webview/jshandler/r;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/sdk/core/webview/b;->ayh:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/webview/d/b/a;->UX:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->a(Lcom/kwad/components/core/webview/jshandler/r;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    const/4 v1, 0x0

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v2, :cond_1

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v1

    :cond_1
    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    const-string v2, "adClick"

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    sget-object v1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    const-string v2, "isWebCard"

    invoke-virtual {v0, v2, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->c(Ljava/lang/String;Ljava/lang/Object;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->a(Lcom/kwad/components/core/webview/jshandler/r;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->a(Lcom/kwad/components/core/webview/jshandler/r;)Lcom/kwad/sdk/core/webview/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    new-instance v3, Lcom/kwad/components/core/webview/jshandler/r$1$1;

    invoke-direct {v3, p0}, Lcom/kwad/components/core/webview/jshandler/r$1$1;-><init>(Lcom/kwad/components/core/webview/jshandler/r$1;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->c(Lcom/kwad/components/core/webview/jshandler/r;)Lcom/kwad/components/core/e/d/c;

    move-result-object v4

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-boolean v5, v0, Lcom/kwad/sdk/core/webview/d/b/a;->UX:Z

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->d(Lcom/kwad/components/core/webview/jshandler/r;)Z

    move-result v6

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/r$1;->TY:Lcom/kwad/components/core/webview/jshandler/r;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/r;->e(Lcom/kwad/components/core/webview/jshandler/r;)Z

    move-result v7

    invoke-static/range {v1 .. v7}, Lcom/kwad/components/core/e/d/a;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/a$b;Lcom/kwad/components/core/e/d/c;ZZZ)I

    return-void
.end method

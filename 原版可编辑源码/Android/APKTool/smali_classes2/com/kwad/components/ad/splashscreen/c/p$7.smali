.class final Lcom/kwad/components/ad/splashscreen/c/p$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/core/webview/a;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;

.field final synthetic hp:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->hp:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "updatePageStatus: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SplashWebViewPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/p;->d(Lcom/kwad/components/ad/splashscreen/c/p;)Ljava/lang/Runnable;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->b(Ljava/lang/Runnable;)V

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v3}, Lcom/kwad/components/ad/splashscreen/c/p;->e(Lcom/kwad/components/ad/splashscreen/c/p;)J

    move-result-wide v3

    sub-long/2addr v1, v3

    iput-wide v1, p1, Lcom/kwad/components/ad/splashscreen/h;->Cs:J

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->f(Lcom/kwad/components/ad/splashscreen/c/p;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->g(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->g(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->g(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/components/core/webview/jshandler/am;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iput-boolean v0, p1, Lcom/kwad/components/ad/splashscreen/h;->isWebTimeout:Z

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->h(Lcom/kwad/components/ad/splashscreen/c/p;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->do(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->lr()V

    return-void

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->hp:Ljava/lang/String;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/c/p;->b(Lcom/kwad/components/ad/splashscreen/c/p;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    const/4 v2, 0x3

    const-string v3, ""

    invoke-static {p1, v0, v1, v2, v3}, Lcom/kwad/components/ad/splashscreen/monitor/b;->a(Ljava/lang/String;JILjava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$7;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->c(Lcom/kwad/components/ad/splashscreen/c/p;)V

    :cond_3
    return-void
.end method

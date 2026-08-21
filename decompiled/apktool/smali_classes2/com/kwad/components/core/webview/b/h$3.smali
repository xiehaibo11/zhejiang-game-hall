.class final Lcom/kwad/components/core/webview/b/h$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 10

    iget v0, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->f(Lcom/kwad/components/core/webview/b/h;)V

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    if-eqz p1, :cond_2

    new-instance p1, Lcom/kwad/components/core/webview/b/h$3$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/core/webview/b/h$3$1;-><init>(Lcom/kwad/components/core/webview/b/h$3;)V

    invoke-static {p1}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {p1}, Lcom/kwad/components/core/webview/b/i;->getTkTemplateId()Ljava/lang/String;

    move-result-object v1

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->g(Lcom/kwad/components/core/webview/b/h;)J

    move-result-wide v2

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->h(Lcom/kwad/components/core/webview/b/h;)J

    move-result-wide v4

    sub-long/2addr v2, v4

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->i(Lcom/kwad/components/core/webview/b/h;)J

    move-result-wide v4

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->j(Lcom/kwad/components/core/webview/b/h;)J

    move-result-wide v6

    const-wide/16 v8, 0x0

    cmp-long p1, v6, v8

    if-lez p1, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {p1}, Lcom/kwad/components/core/webview/b/h;->j(Lcom/kwad/components/core/webview/b/h;)J

    move-result-wide v8

    sub-long/2addr v6, v8

    goto :goto_0

    :cond_0
    move-wide v6, v8

    :goto_0
    invoke-virtual/range {v0 .. v7}, Lcom/kwad/components/core/webview/b/d/b;->c(Ljava/lang/String;JJJ)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-static {v0}, Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/core/webview/b/h;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$3;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->errorMsg:Ljava/lang/String;

    invoke-static {v0, p1}, Lcom/kwad/components/core/webview/b/h;->b(Lcom/kwad/components/core/webview/b/h;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

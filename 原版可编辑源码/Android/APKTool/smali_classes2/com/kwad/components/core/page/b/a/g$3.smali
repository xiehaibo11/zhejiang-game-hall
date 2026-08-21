.class final Lcom/kwad/components/core/page/b/a/g$3;
.super Lcom/kwad/components/core/webview/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/b/a/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic NB:Lcom/kwad/components/core/page/b/a/g;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/b/a/g;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/as;

    new-instance v1, Lcom/kwad/components/core/page/b/a/g$3$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/page/b/a/g$3$1;-><init>(Lcom/kwad/components/core/page/b/a/g$3;)V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/as;-><init>(Lcom/kwad/components/core/webview/jshandler/as$b;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/ak;

    new-instance v2, Lcom/kwad/components/core/page/b/a/g$3$2;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/page/b/a/g$3$2;-><init>(Lcom/kwad/components/core/page/b/a/g$3;)V

    invoke-direct {v1, v2}, Lcom/kwad/components/core/webview/jshandler/ak;-><init>(Lcom/kwad/components/core/webview/jshandler/ak$c;)V

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/b/a/g;->a(Lcom/kwad/components/core/page/b/a/g;Lcom/kwad/components/core/webview/jshandler/ak;)Lcom/kwad/components/core/webview/jshandler/ak;

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-static {v0}, Lcom/kwad/components/core/page/b/a/g;->b(Lcom/kwad/components/core/page/b/a/g;)Lcom/kwad/components/core/webview/jshandler/ak;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance v0, Lcom/kwad/components/core/webview/b/a/b;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v1, v1, Lcom/kwad/components/core/page/b/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, p2, v1}, Lcom/kwad/components/core/webview/b/a/b;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/b/b/k;

    invoke-direct {p2}, Lcom/kwad/components/core/webview/b/b/k;-><init>()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-boolean v0, v0, Lcom/kwad/components/core/page/b/a/b;->mAutoShow:Z

    iput v0, p2, Lcom/kwad/components/core/webview/b/b/k;->WY:I

    new-instance v0, Lcom/kwad/components/core/webview/b/a/g;

    invoke-direct {v0, p2}, Lcom/kwad/components/core/webview/b/a/g;-><init>(Lcom/kwad/components/core/webview/b/b/k;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/webview/a;->a(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/ah$a;->isSuccess()Z

    move-result p1

    iput-boolean p1, v0, Lcom/kwad/components/core/page/b/a/b;->Nb:Z

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/b;->mWebCardCloseListener:Lcom/kwad/sdk/core/webview/d/a/b;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/webview/d/a/b;->a(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-static {v0, p1}, Lcom/kwad/components/core/page/b/a/g;->a(Lcom/kwad/components/core/page/b/a/g;Lcom/kwad/components/core/webview/jshandler/am;)Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final oX()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final oY()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final oZ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/b/a/g;->a(Lcom/kwad/components/core/page/b/a/g;Z)Z

    return-void
.end method

.method public final onPageFinished()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/b/a/g;->a(Lcom/kwad/components/core/page/b/a/g;Z)Z

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/a/g;->MW:Lcom/kwad/components/core/page/b/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/b/a/b;->oK()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/b/a/g$3;->NB:Lcom/kwad/components/core/page/b/a/g;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/b/a/g;->show()V

    :cond_0
    return-void
.end method

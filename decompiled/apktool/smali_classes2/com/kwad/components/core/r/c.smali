.class public final Lcom/kwad/components/core/r/c;
.super Lcom/kwad/components/core/webview/b/c/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/c;-><init>()V

    return-void
.end method

.method private qa()Lcom/kwad/components/core/webview/b/d;
    .locals 1

    new-instance v0, Lcom/kwad/components/core/r/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/r/c$1;-><init>(Lcom/kwad/components/core/r/c;)V

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/r/c;->qa()Lcom/kwad/components/core/webview/b/d;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/c/c;->b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    iget-boolean p1, p1, Lcom/kwad/sdk/commercial/model/WebCloseStatus;->interactSuccess:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/r/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->VP:Lcom/kwad/components/core/webview/b/c/d;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/r/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->mActivity:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    return-void
.end method

.method public final cc()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/c;->cc()V

    return-void
.end method

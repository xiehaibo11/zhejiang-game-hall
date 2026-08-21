.class public final Lcom/kwad/components/ad/reward/j/a/c;
.super Lcom/kwad/components/core/webview/b/c/c;

# interfaces
.implements Lcom/kwad/components/ad/reward/j/a/e;


# instance fields
.field private xK:Lcom/kwad/components/ad/reward/j/a/a;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/c;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/c/b;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/c;->xK:Lcom/kwad/components/ad/reward/j/a/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/reward/j/a/a;->b(Lcom/kwad/components/ad/reward/c/b;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/c/c;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    new-instance p2, Lcom/kwad/components/ad/reward/c/f;

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/j/a/c$1;-><init>(Lcom/kwad/components/ad/reward/j/a/c;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/ad/reward/c/f;-><init>(Lcom/kwad/components/ad/reward/c/d;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/e;

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/j/a/c$2;-><init>(Lcom/kwad/components/ad/reward/j/a/c;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/e;-><init>(Lcom/kwad/components/core/webview/jshandler/i;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/b/c/c;->a(Lcom/kwad/sdk/core/webview/d/b/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j/a/c;->xK:Lcom/kwad/components/ad/reward/j/a/a;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j/a/a;->jo()Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/j/a/c;->xK:Lcom/kwad/components/ad/reward/j/a/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j/a/a;->jo()Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    :cond_0
    return-void
.end method

.method public final hU()Lcom/kwad/components/core/webview/b/h;
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/c;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    check-cast v0, Lcom/kwad/components/ad/reward/j/a/a;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j/a/c;->xK:Lcom/kwad/components/ad/reward/j/a/a;

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j/a/c;->xK:Lcom/kwad/components/ad/reward/j/a/a;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/j/a/a;->jo()Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/j/a/c;->xK:Lcom/kwad/components/ad/reward/j/a/a;

    iget-wide v2, v2, Lcom/kwad/components/ad/reward/j/a/a;->xI:J

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/j/a/c;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/reward/j/a/d;-><init>(Lcom/kwad/components/ad/reward/j;JLandroid/content/Context;)V

    return-object v0
.end method

.class public abstract Lcom/kwad/components/ad/splashscreen/c/c/a;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;


# instance fields
.field private lp:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    return-void
.end method

.method public ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v1, p0}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c/a;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object v0
.end method

.method public onCreate()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    new-instance v0, Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->getContext()Landroid/content/Context;

    move-result-object v1

    const/16 v2, 0x3e8

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/webview/b/h;-><init>(Landroid/content/Context;I)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    return-void
.end method

.method public onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    return-void
.end method

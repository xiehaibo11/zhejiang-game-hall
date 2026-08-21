.class public abstract Lcom/kwad/components/core/webview/b/c/a;
.super Lcom/kwad/sdk/mvp/Presenter;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;


# instance fields
.field protected Xl:Lcom/kwad/components/core/webview/b/c/b;

.field protected lp:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    return-void
.end method

.method protected a(Lcom/kwad/components/core/webview/b/c/b;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    return-void
.end method

.method public a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    return-void
.end method

.method public ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/a;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/webview/b/c/b;

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/webview/b/c/a;->a(Lcom/kwad/components/core/webview/b/c/b;)V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    if-nez v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/a;->hU()Lcom/kwad/components/core/webview/b/h;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, v1, Lcom/kwad/components/core/webview/b/c/b;->QO:Lcom/kwad/components/offline/api/tk/model/StyleTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/components/offline/api/tk/model/StyleTemplate;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v1, v1, Lcom/kwad/components/core/webview/b/c/b;->mActivity:Landroid/app/Activity;

    iget-object v2, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v2, v2, Lcom/kwad/components/core/webview/b/c/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v2, p0}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->VP:Lcom/kwad/components/core/webview/b/c/d;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object p1, p1, Lcom/kwad/components/core/webview/b/c/b;->VP:Lcom/kwad/components/core/webview/b/c/d;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d;->dismiss()V

    :cond_0
    return-void
.end method

.method public em()V
    .locals 0

    return-void
.end method

.method public getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/c/b;->Xm:Lcom/kwad/sdk/widget/e;

    return-object v0
.end method

.method protected hU()Lcom/kwad/components/core/webview/b/h;
    .locals 4

    new-instance v0, Lcom/kwad/components/core/webview/b/h;

    iget-object v1, p0, Lcom/kwad/components/core/webview/b/c/a;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-wide v1, v1, Lcom/kwad/components/core/webview/b/c/b;->xI:J

    invoke-virtual {p0}, Lcom/kwad/components/core/webview/b/c/a;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/webview/b/h;-><init>(JLandroid/content/Context;)V

    return-object v0
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/b/c/a;->lp:Lcom/kwad/components/core/webview/b/h;

    return-void
.end method

.class public final Lcom/kwad/components/ad/splashscreen/c/k;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/k;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/k;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/h;->S(Landroid/content/Context;)V

    return-void
.end method

.method public final aL()V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/k;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/monitor/a;->kN()Lcom/kwad/components/ad/splashscreen/monitor/a;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/k;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/monitor/a;->E(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/k;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ck(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/k;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/k;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/h;->S(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/k;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->b(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

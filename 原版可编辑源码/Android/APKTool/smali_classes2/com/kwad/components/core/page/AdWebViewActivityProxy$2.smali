.class final Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/page/a/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/page/AdWebViewActivityProxy;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final dE()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->onBackPressed()V

    return-void
.end method

.method public final dF()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$500(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$500(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c;->getCanInterceptBackClick()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$500(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/components/core/page/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/page/c;->oC()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$600(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->finish()V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$600(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pT()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_2

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pY()Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pV()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pU()Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$800(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/components/core/r/b;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$702(Lcom/kwad/components/core/page/AdWebViewActivityProxy;Lcom/kwad/components/core/r/b;)Lcom/kwad/components/core/r/b;

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$700(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/components/core/r/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-virtual {v1}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->getActivity()Landroid/app/Activity;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v2}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$900(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Lcom/kwad/components/core/webview/b/e/c;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/r/b;->a(Lcom/kwad/components/core/r/b;Landroid/app/Activity;Lcom/kwad/components/core/webview/b/e/c;)Lcom/kwad/components/core/r/b;

    return-void

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$1000(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)Z

    move-result v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-static {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->access$1100(Lcom/kwad/components/core/page/AdWebViewActivityProxy;)V

    return-void

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/core/page/AdWebViewActivityProxy$2;->MA:Lcom/kwad/components/core/page/AdWebViewActivityProxy;

    invoke-virtual {v0}, Lcom/kwad/components/core/page/AdWebViewActivityProxy;->finish()V

    return-void
.end method

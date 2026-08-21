.class final Lcom/kwad/components/ad/reward/presenter/f/i$3;
.super Lcom/kwad/components/core/webview/b/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/i;->jf()Lcom/kwad/components/core/webview/b/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wS:Lcom/kwad/components/ad/reward/presenter/f/i;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/i;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/i$3;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/e;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 3

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/e;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/b/i;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/i;-><init>()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i$3;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/i;->f(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/components/core/r/a;->pT()I

    move-result v1

    if-nez v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    if-eqz v1, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    goto :goto_1

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aC(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i$3;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/i;->g(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->pm:Z

    if-eqz v1, :cond_2

    move v2, v0

    :cond_2
    iput v2, p1, Lcom/kwad/components/core/webview/b/b/i;->rewardTime:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

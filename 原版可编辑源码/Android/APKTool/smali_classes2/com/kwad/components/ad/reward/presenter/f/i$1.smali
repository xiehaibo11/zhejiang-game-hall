.class final Lcom/kwad/components/ad/reward/presenter/f/i$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/l/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/f/i;
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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/i$1;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final jh()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i$1;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/i;->a(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/core/webview/b/e;

    move-result-object v0

    if-eqz v0, :cond_3

    new-instance v0, Lcom/kwad/components/core/webview/b/b/i;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/b/i;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i$1;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/i;->b(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    const/4 v3, 0x0

    if-eqz v2, :cond_0

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/components/core/r/a;->pT()I

    move-result v2

    if-nez v2, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    move v2, v3

    :goto_0
    if-eqz v2, :cond_1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    goto :goto_1

    :cond_1
    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aC(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    :goto_1
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/f/i$1;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/f/i;->c(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;

    move-result-object v2

    iget-boolean v2, v2, Lcom/kwad/components/ad/reward/j;->pm:Z

    if-eqz v2, :cond_2

    move v3, v1

    :cond_2
    iput v3, v0, Lcom/kwad/components/core/webview/b/b/i;->rewardTime:I

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/i$1;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/i;->a(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/core/webview/b/e;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/webview/b/e;->b(Lcom/kwad/sdk/core/response/a/a;)V

    :cond_3
    return-void
.end method

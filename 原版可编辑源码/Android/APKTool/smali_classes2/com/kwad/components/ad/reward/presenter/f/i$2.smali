.class final Lcom/kwad/components/ad/reward/presenter/f/i$2;
.super Lcom/kwad/components/ad/reward/e/a;


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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/i$2;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i$2;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/i;->d(Lcom/kwad/components/ad/reward/presenter/f/i;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ak(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/i$2;->wS:Lcom/kwad/components/ad/reward/presenter/f/i;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/i;->e(Lcom/kwad/components/ad/reward/presenter/f/i;)Landroid/widget/FrameLayout;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    :cond_0
    return-void
.end method

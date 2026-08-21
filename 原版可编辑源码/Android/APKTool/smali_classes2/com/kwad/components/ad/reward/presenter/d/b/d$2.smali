.class final Lcom/kwad/components/ad/reward/presenter/d/b/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/reward/e/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/d/b/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vW:Lcom/kwad/components/ad/reward/presenter/d/b/d;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d$2;->vW:Lcom/kwad/components/ad/reward/presenter/d/b/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onRewardVerify()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d$2;->vW:Lcom/kwad/components/ad/reward/presenter/d/b/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->c(Lcom/kwad/components/ad/reward/presenter/d/b/d;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/b/d$2;->vW:Lcom/kwad/components/ad/reward/presenter/d/b/d;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/b/d;->d(Lcom/kwad/components/ad/reward/presenter/d/b/d;)V

    :cond_0
    return-void
.end method

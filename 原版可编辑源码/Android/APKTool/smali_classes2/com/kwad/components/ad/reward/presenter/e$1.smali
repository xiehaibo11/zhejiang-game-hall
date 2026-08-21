.class final Lcom/kwad/components/ad/reward/presenter/e$1;
.super Lcom/kwad/components/ad/reward/k$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/e;->a(Lcom/kwad/components/ad/reward/j;Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic oB:Lcom/kwad/components/ad/reward/j;

.field final synthetic se:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/ad/reward/j;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k$b;-><init>()V

    return-void
.end method


# virtual methods
.method public final H(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/reward/k$b;->H(Z)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/a/b;->k(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->se:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->h(Lcom/kwad/components/ad/reward/j;)V

    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->s(Lcom/kwad/components/ad/reward/j;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$1;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/m;->m(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

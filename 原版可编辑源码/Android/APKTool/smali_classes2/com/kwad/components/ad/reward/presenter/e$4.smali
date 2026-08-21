.class final Lcom/kwad/components/ad/reward/presenter/e$4;
.super Lcom/kwad/components/ad/reward/k$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/e;->x(Lcom/kwad/components/ad/reward/j;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic es:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field final synthetic oB:Lcom/kwad/components/ad/reward/j;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/j;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/k$b;-><init>()V

    return-void
.end method


# virtual methods
.method public final H(Z)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->F(Z)V

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0x97

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->j(Lcom/kwad/components/ad/reward/j;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->hw()V

    return-void
.end method

.method public final gg()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->F(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const/16 v2, 0x95

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    return-void
.end method

.method public final gp()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->oB:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->F(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/e$4;->es:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0x96

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/report/a;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void
.end method

.class final Lcom/kwad/components/ad/reward/presenter/d/a/b$2;
.super Lcom/kwad/components/ad/reward/e/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/d/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final bD()V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->c(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cu(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->d(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->e(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fX()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->f(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pu:Z

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->g(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pz:Z

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->a(Lcom/kwad/components/ad/reward/presenter/d/a/b;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->h(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/k/b;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->h(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/k/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/k/b;->ap()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    const/4 v2, 0x0

    invoke-static {v0, v2}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->a(Lcom/kwad/components/ad/reward/presenter/d/a/b;Z)Z

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->i(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->j(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Z

    move-result v2

    xor-int/2addr v1, v2

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pL:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->j(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Z

    move-result v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->k(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->l(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->c(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bj(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v3

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->m(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l;->getLoadTime()J

    move-result-wide v6

    sub-long/2addr v4, v6

    const/4 v6, 0x1

    const-string v2, "end_card"

    invoke-static/range {v1 .. v6}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;JI)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;->vI:Lcom/kwad/components/ad/reward/presenter/d/a/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->n(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public final getPriority()I
    .locals 1

    const/4 v0, -0x1

    return v0
.end method

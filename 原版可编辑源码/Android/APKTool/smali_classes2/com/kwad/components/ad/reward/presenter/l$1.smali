.class final Lcom/kwad/components/ad/reward/presenter/l$1;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/l;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic st:Lcom/kwad/components/ad/reward/presenter/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayCompleted()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->po:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/l;->a(Lcom/kwad/components/ad/reward/presenter/l;)Lcom/kwad/components/ad/reward/e/b;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/l;->b(Lcom/kwad/components/ad/reward/presenter/l;)J

    move-result-wide v2

    invoke-interface {v0, v2, v3}, Lcom/kwad/components/ad/reward/e/b;->onVideoSkipToEnd(J)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pG:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/l;->a(Lcom/kwad/components/ad/reward/presenter/l;)Lcom/kwad/components/ad/reward/e/b;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayEnd()V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aF(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-eq v0, v1, :cond_2

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->v(Lcom/kwad/components/ad/reward/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pG:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m;->m(Lcom/kwad/components/ad/reward/j;)V

    :cond_2
    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 0

    invoke-super {p0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/l;->onMediaPlayProgress(JJ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iput-wide p3, p1, Lcom/kwad/components/ad/reward/j;->pF:J

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->po:Z

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    invoke-static {p1, p3, p4}, Lcom/kwad/components/ad/reward/presenter/l;->a(Lcom/kwad/components/ad/reward/presenter/l;J)J

    :cond_0
    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/l;->a(Lcom/kwad/components/ad/reward/presenter/l;)Lcom/kwad/components/ad/reward/e/b;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/l$1;->st:Lcom/kwad/components/ad/reward/presenter/l;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/l;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pG:Z

    return-void
.end method

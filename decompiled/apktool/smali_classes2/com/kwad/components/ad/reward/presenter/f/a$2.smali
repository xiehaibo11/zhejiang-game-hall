.class final Lcom/kwad/components/ad/reward/presenter/f/a$2;
.super Lcom/kwad/components/core/webview/jshandler/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/a;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic we:Lcom/kwad/components/ad/reward/presenter/f/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/m;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->a(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->c(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayStart()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->d(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->e(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/a;->f(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-wide v1, v1, Lcom/kwad/components/ad/reward/j;->mPageEnterTime:J

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/components/ad/reward/monitor/a;->b(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->b(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->m(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget p1, p1, Lcom/kwad/components/core/webview/b/b/x;->nM:I

    int-to-long v1, p1

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    return-void
.end method

.method public final c(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->c(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->g(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayEnd()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->h(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-wide/16 v0, -0x1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->i(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->v(Lcom/kwad/components/ad/reward/j;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->l(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/a;->j(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pd:Ljava/util/List;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/a$2$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/a$2$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/a$2;)V

    invoke-static {p1, v0}, Lcom/kwad/components/ad/reward/j;->a(Ljava/util/List;Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final d(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 8

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->d(Lcom/kwad/components/core/webview/b/b/x;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/b/x;->rX()I

    move-result v0

    int-to-long v6, v0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->n(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iget v1, p1, Lcom/kwad/components/core/webview/b/b/x;->errorCode:I

    long-to-int v2, v6

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayError(II)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->o(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->p(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v2, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/a$2;->we:Lcom/kwad/components/ad/reward/presenter/f/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/a;->q(Lcom/kwad/components/ad/reward/presenter/f/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-wide v3, v0, Lcom/kwad/components/ad/reward/j;->pF:J

    iget v5, p1, Lcom/kwad/components/core/webview/b/b/x;->errorCode:I

    invoke-static/range {v1 .. v7}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;JIJ)V

    return-void
.end method

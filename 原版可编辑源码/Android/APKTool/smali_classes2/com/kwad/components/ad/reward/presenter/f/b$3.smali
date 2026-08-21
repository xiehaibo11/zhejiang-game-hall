.class final Lcom/kwad/components/ad/reward/presenter/f/b$3;
.super Lcom/kwad/components/core/webview/jshandler/m;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/b;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wi:Lcom/kwad/components/ad/reward/presenter/f/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/jshandler/m;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->a(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/b;->b(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayStart()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/b;->c(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-boolean p1, p1, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->d(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/f/b;->e(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v1

    iget-wide v1, v1, Lcom/kwad/components/ad/reward/j;->mPageEnterTime:J

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/components/ad/reward/monitor/a;->b(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->b(Lcom/kwad/components/core/webview/b/b/x;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->i(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

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

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/b;->f(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayEnd()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/b;->g(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-wide/16 v0, -0x1

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setmCurPlayTime(J)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/f/b;->h(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/e;->v(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method public final d(Lcom/kwad/components/core/webview/b/b/x;)V
    .locals 8

    invoke-super {p0, p1}, Lcom/kwad/components/core/webview/jshandler/m;->d(Lcom/kwad/components/core/webview/b/b/x;)V

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/b/x;->rX()I

    move-result v0

    int-to-long v6, v0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->j(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    iget v1, p1, Lcom/kwad/components/core/webview/b/b/x;->errorCode:I

    long-to-int v2, v6

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/ad/reward/e/b;->onVideoPlayError(II)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->k(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->l(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v2, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/b$3;->wi:Lcom/kwad/components/ad/reward/presenter/f/b;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/f/b;->m(Lcom/kwad/components/ad/reward/presenter/f/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-wide v3, v0, Lcom/kwad/components/ad/reward/j;->pF:J

    iget v5, p1, Lcom/kwad/components/core/webview/b/b/x;->errorCode:I

    invoke-static/range {v1 .. v7}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;JIJ)V

    return-void
.end method

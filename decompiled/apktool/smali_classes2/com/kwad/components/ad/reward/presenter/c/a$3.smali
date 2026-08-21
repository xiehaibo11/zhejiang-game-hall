.class final Lcom/kwad/components/ad/reward/presenter/c/a$3;
.super Lcom/kwad/components/core/video/l;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic tV:Lcom/kwad/components/ad/reward/presenter/c/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/c/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-direct {p0}, Lcom/kwad/components/core/video/l;-><init>()V

    return-void
.end method


# virtual methods
.method public final onMediaPlayCompleted()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->hE()V

    return-void
.end method

.method public final onMediaPlayError(II)V
    .locals 8

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/video/l;->onMediaPlayError(II)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->k(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v1, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->l(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-object v2, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->m(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-wide v3, v0, Lcom/kwad/components/ad/reward/j;->pF:J

    int-to-long v6, p2

    move v5, p1

    invoke-static/range {v1 .. v7}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLcom/kwad/sdk/core/response/model/AdTemplate;JIJ)V

    return-void
.end method

.method public final onMediaPlayPaused()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayPaused()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->a(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/core/video/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i;->rc()V

    return-void
.end method

.method public final onMediaPlayProgress(JJ)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {p1, p3, p4}, Lcom/kwad/components/ad/reward/presenter/c/a;->a(Lcom/kwad/components/ad/reward/presenter/c/a;J)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {p1, p3, p4}, Lcom/kwad/components/ad/reward/presenter/c/a;->b(Lcom/kwad/components/ad/reward/presenter/c/a;J)J

    return-void
.end method

.method public final onMediaPlayStart()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlayStart()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->hX()V

    return-void
.end method

.method public final onMediaPlaying()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onMediaPlaying()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->a(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/core/video/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i;->rc()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->a(Lcom/kwad/components/ad/reward/presenter/c/a;Z)Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->f(Lcom/kwad/components/ad/reward/presenter/c/a;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->b(Lcom/kwad/components/ad/reward/presenter/c/a;Z)Z

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/c/a;->e(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {v0, v2, v3, v4, v1}, Lcom/kwad/components/core/o/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;JI)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->i(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    iget-boolean v0, v0, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->e(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/c/a;->j(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/ad/reward/j;

    move-result-object v2

    iget-wide v2, v2, Lcom/kwad/components/ad/reward/j;->mPageEnterTime:J

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/monitor/a;->b(ZLcom/kwad/sdk/core/response/model/AdTemplate;J)V

    :cond_0
    return-void
.end method

.method public final onVideoPlayBufferingPaused()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onVideoPlayBufferingPaused()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->a(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/core/video/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i;->rb()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->o(Lcom/kwad/components/ad/reward/presenter/c/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->n(Lcom/kwad/components/ad/reward/presenter/c/a;)Ljava/lang/Runnable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->o(Lcom/kwad/components/ad/reward/presenter/c/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->n(Lcom/kwad/components/ad/reward/presenter/c/a;)Ljava/lang/Runnable;

    move-result-object v1

    const-wide/16 v2, 0x1388

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.method public final onVideoPlayBufferingPlaying()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/core/video/l;->onVideoPlayBufferingPlaying()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->a(Lcom/kwad/components/ad/reward/presenter/c/a;)Lcom/kwad/components/core/video/i;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/video/i;->rb()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->o(Lcom/kwad/components/ad/reward/presenter/c/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->n(Lcom/kwad/components/ad/reward/presenter/c/a;)Ljava/lang/Runnable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/c/a;->o(Lcom/kwad/components/ad/reward/presenter/c/a;)Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/c/a$3;->tV:Lcom/kwad/components/ad/reward/presenter/c/a;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/c/a;->n(Lcom/kwad/components/ad/reward/presenter/c/a;)Ljava/lang/Runnable;

    move-result-object v1

    const-wide/16 v2, 0x1388

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void
.end method

.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/ah$a;->status:I

    invoke-static {v0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;I)I

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->l(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)J

    move-result-wide v2

    sub-long/2addr v0, v2

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v2, "load time:"

    invoke-direct {p1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ", pageStatus: "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->m(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)I

    move-result v2

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v2, "RewardActionBarWeb"

    invoke-static {v2, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->m(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)I

    move-result p1

    const/4 v2, 0x1

    if-ne p1, v2, :cond_0

    invoke-static {}, Lcom/kwad/components/core/o/a;->pA()Lcom/kwad/components/core/o/a;

    move-result-object p1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->n(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;

    move-result-object v2

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1, v2, v0, v1}, Lcom/kwad/components/core/o/a;->g(Lcom/kwad/sdk/core/response/model/AdTemplate;J)V

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->o(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-boolean v0, p1, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->p(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->aV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->getLoadTime()J

    move-result-wide v5

    sub-long/2addr v3, v5

    const/4 v5, 0x3

    const-string v1, "play_card"

    invoke-static/range {v0 .. v5}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;JI)V

    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->q(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/j;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->fT()Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$9;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->r(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->im()V

    :cond_1
    return-void
.end method

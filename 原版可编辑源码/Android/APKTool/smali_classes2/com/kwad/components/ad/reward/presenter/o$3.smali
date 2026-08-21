.class final Lcom/kwad/components/ad/reward/presenter/o$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/KsAdWebView$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/o;->ah()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic sH:Lcom/kwad/components/ad/reward/presenter/o;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/o;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onPageFinished()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v1}, Lcom/kwad/components/core/playable/a;->getLoadTime()J

    move-result-wide v1

    const-wide/16 v3, -0x1

    cmp-long v3, v1, v3

    if-nez v3, :cond_0

    return-void

    :cond_0
    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v3, v3, Lcom/kwad/components/ad/reward/j;->pj:Z

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bB(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    sub-long/2addr v4, v1

    const-string v1, "playable"

    invoke-static {v3, v1, v0, v4, v5}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;J)V

    return-void
.end method

.method public final onPageStart()V
    .locals 0

    return-void
.end method

.method public final onReceivedHttpError(ILjava/lang/String;Ljava/lang/String;)V
    .locals 6

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v0, p1, Lcom/kwad/components/ad/reward/j;->pj:Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bB(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-object p3, p0, Lcom/kwad/components/ad/reward/presenter/o$3;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object p3, p3, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p3, p3, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {p3}, Lcom/kwad/components/core/playable/a;->getLoadTime()J

    move-result-wide v3

    sub-long v3, p1, v3

    const-string v1, "playable"

    const/4 v5, 0x2

    invoke-static/range {v0 .. v5}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;JI)V

    return-void
.end method

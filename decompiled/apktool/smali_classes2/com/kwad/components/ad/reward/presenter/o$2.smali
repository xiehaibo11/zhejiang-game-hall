.class final Lcom/kwad/components/ad/reward/presenter/o$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


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

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o$2;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 9

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/ah$a;->isSuccess()Z

    move-result p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/o$2;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/o$2;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0}, Lcom/kwad/components/core/playable/a;->getLoadTime()J

    move-result-wide v0

    const-wide/16 v2, -0x1

    cmp-long v2, v0, v2

    if-nez v2, :cond_0

    return-void

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/o$2;->sH:Lcom/kwad/components/ad/reward/presenter/o;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/presenter/o;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v3, v2, Lcom/kwad/components/ad/reward/j;->pj:Z

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bB(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    sub-long/2addr v6, v0

    const/4 v8, 0x3

    const-string v4, "playable"

    invoke-static/range {v3 .. v8}, Lcom/kwad/components/ad/reward/monitor/a;->a(ZLjava/lang/String;Ljava/lang/String;JI)V

    :cond_1
    return-void
.end method

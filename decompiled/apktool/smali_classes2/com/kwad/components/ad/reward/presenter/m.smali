.class public final Lcom/kwad/components/ad/reward/presenter/m;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private final gd:Lcom/kwad/components/ad/reward/e/k;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/m$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/m$2;-><init>(Lcom/kwad/components/ad/reward/presenter/m;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/m$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/m$3;-><init>(Lcom/kwad/components/ad/reward/presenter/m;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->gd:Lcom/kwad/components/ad/reward/e/k;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/m;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/m;->hE()V

    return-void
.end method

.method private hE()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->po:Z

    invoke-static {v0, v1}, Lcom/kwad/components/core/t/h;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1}, Lcom/kwad/components/core/t/h;->f(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/h;->A(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v1, v1, Lcom/kwad/components/ad/reward/j;->po:Z

    invoke-static {v0, v1}, Lcom/kwad/components/core/t/h;->d(Lcom/kwad/sdk/core/response/model/AdTemplate;Z)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->fR()V

    return-void

    :cond_2
    :goto_0
    new-instance v0, Lcom/kwad/components/ad/reward/presenter/m$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/m$1;-><init>(Lcom/kwad/components/ad/reward/presenter/m;)V

    const-wide/16 v1, 0xc8

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/d;->fw()Lcom/kwad/components/ad/reward/d;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->gd:Lcom/kwad/components/ad/reward/e/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/d;->a(Lcom/kwad/components/ad/reward/e/k;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/m;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/d;->fw()Lcom/kwad/components/ad/reward/d;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/m;->gd:Lcom/kwad/components/ad/reward/e/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/d;->b(Lcom/kwad/components/ad/reward/e/k;)V

    return-void
.end method

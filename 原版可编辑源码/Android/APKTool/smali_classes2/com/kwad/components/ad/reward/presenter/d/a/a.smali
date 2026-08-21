.class public final Lcom/kwad/components/ad/reward/presenter/d/a/a;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/k/a$b;


# instance fields
.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cQ:Landroid/widget/FrameLayout;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private sr:Lcom/kwad/components/core/video/l;

.field private ss:Lcom/kwad/components/core/video/l;

.field private volatile vy:J

.field private volatile vz:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->vy:J

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->vz:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->ss:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/a$2;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/a$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/a$4;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/a$5;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/a$5;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->vy:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a/a;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->vz:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/d/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/d/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/d/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->vy:J

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->vz:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->pa:Lcom/kwad/components/ad/k/a;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v2}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->ss:Lcom/kwad/components/core/video/l;

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    :goto_0
    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->sr:Lcom/kwad/components/core/video/l;

    if-eqz v1, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v3, 0x1

    iput-boolean v3, v2, Lcom/kwad/components/ad/reward/j;->pu:Z

    invoke-virtual {v1, p0}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/components/ad/k/a$b;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/sdk/core/webview/d/a/a;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->cQ:Landroid/widget/FrameLayout;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1, v2, v3, v0}, Lcom/kwad/components/ad/k/a;->a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/a$3;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/a;)V

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/k/a;->a(Lcom/kwad/components/ad/k/a$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/j;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/k/a;->setActivity(Landroid/app/Activity;)V

    invoke-virtual {v1}, Lcom/kwad/components/ad/k/a;->aw()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->sr:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    :cond_1
    return-void
.end method

.method public final iA()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/e;->u(Lcom/kwad/components/ad/reward/j;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_landing_page_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->cQ:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/a;->sr:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    return-void
.end method

.class public final Lcom/kwad/components/ad/reward/presenter/d/a/c;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/k/b$a;


# instance fields
.field private bY:Lcom/kwad/components/ad/k/b;

.field private cH:Lcom/kwad/sdk/core/webview/d/a/a;

.field private cQ:Landroid/widget/FrameLayout;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private td:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/high16 v0, -0x80000000

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->td:I

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/c$1;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/c$2;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a/c;)Lcom/kwad/components/ad/k/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/a/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/d/a/c;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 7

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v4, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->cH:Lcom/kwad/sdk/core/webview/d/a/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/sdk/core/webview/d/a/a;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->cQ:Landroid/widget/FrameLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v0, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v5, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget v6, v0, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    invoke-virtual/range {v1 .. v6}, Lcom/kwad/components/ad/k/b;->a(Landroid/widget/FrameLayout;Lcom/kwad/sdk/core/view/AdBaseFrameLayout;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/ad/k/b$b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    if-eqz v0, :cond_1

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/k/b;->a(Lcom/kwad/components/ad/k/b$a;)V

    :cond_1
    return-void
.end method

.method public final iG()V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/c;->hw()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_web_card_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->cQ:Landroid/widget/FrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    return-void
.end method

.method public final onUnbind()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/k/b;->lV()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->bY:Lcom/kwad/components/ad/k/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/k/b;->lI()V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    if-eqz v0, :cond_1

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/c;->td:I

    const/high16 v2, -0x80000000

    if-eq v1, v2, :cond_1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->n(Landroid/view/View;I)V

    :cond_1
    return-void
.end method

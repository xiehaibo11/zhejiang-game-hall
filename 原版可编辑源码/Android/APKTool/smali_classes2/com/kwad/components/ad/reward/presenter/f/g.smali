.class public final Lcom/kwad/components/ad/reward/presenter/f/g;
.super Lcom/kwad/components/ad/reward/presenter/f/d;

# interfaces
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$d;


# instance fields
.field private lr:Landroid/widget/FrameLayout;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private wK:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->wK:I

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/g$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/g$1;-><init>(Lcom/kwad/components/ad/reward/presenter/f/g;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/f/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->hide()V

    return-void
.end method

.method private hide()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/f/d;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    new-instance p2, Lcom/kwad/components/ad/reward/c/f;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/g$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/g$2;-><init>(Lcom/kwad/components/ad/reward/presenter/f/g;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/ad/reward/c/f;-><init>(Lcom/kwad/components/ad/reward/c/d;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    new-instance p2, Lcom/kwad/components/core/webview/jshandler/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/f/g$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/f/g$3;-><init>(Lcom/kwad/components/ad/reward/presenter/f/g;)V

    invoke-direct {p2, v0}, Lcom/kwad/components/core/webview/jshandler/e;-><init>(Lcom/kwad/components/core/webview/jshandler/i;)V

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->cd()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getVisibility()I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->wK:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->getRootView()Landroid/view/View;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_play_bar_h5:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$d;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenWidth(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    const/high16 v2, 0x3f000000    # 0.5f

    add-float/2addr v1, v2

    float-to-int v1, v1

    iput v1, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    div-float/2addr v1, v0

    add-float/2addr v1, v2

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final cc()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->cc()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method protected final cd()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->d(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final f(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    sget-object v1, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;->TK:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;Landroid/view/View;Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;)V

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-video-bottom-card-v2"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_js_bottom:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/f/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/f/d;->onUnbind()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/f/g;->cd()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->lr:Landroid/widget/FrameLayout;

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->wK:I

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/f/g;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$d;)V

    return-void
.end method

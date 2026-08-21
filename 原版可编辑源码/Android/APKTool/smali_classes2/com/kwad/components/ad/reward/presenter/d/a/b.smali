.class public final Lcom/kwad/components/ad/reward/presenter/d/a/b;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/ah$b;


# instance fields
.field private bY:Lcom/kwad/components/ad/k/b;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private sO:Z

.field private vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

.field private volatile vC:Z

.field private vD:Z

.field private vE:Lcom/kwad/components/ad/reward/m/k;

.field private vF:I

.field private vG:I

.field private vH:Landroid/graphics/drawable/Drawable;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->sO:Z

    const/high16 v0, -0x80000000

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vF:I

    iput v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vG:I

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b$1;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b$2;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    return-void
.end method

.method private M(Z)V
    .locals 4

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/16 p1, 0x99

    :goto_0
    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const-string v3, "native_id"

    invoke-static {v0, v3, v1, p1, v2}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {p1}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method private O(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/DetailVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-eqz v0, :cond_0

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/video/DetailVideoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->iB()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/d/a/b;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vD:Z

    return p1
.end method

.method private aG()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->iB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/d/a/b$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b$3;-><init>(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->a(Lcom/kwad/components/ad/reward/widget/tailframe/b;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->setVisibility(I)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/d/a/b;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->M(Z)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->sO:Z

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/k/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->bY:Lcom/kwad/components/ad/k/b;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private iB()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vC:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->iC()V

    return-void
.end method

.method private iC()V
    .locals 5

    const-string v0, "RewardPlayEndNativeCardPresenter"

    const-string v1, "initTailView"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget v2, v2, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    const/4 v3, 0x1

    if-nez v2, :cond_0

    move v2, v3

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->iF()Z

    move-result v4

    invoke-virtual {v0, v1, v2, v4}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->a(Landroid/content/Context;ZZ)V

    iput-boolean v3, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vC:Z

    return-void
.end method

.method private iE()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vD:Z

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->iB()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->destroy()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vE:Lcom/kwad/components/ad/reward/m/k;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/k;->hide()V

    :cond_0
    return-void
.end method

.method private iF()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v0

    iget v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    if-le v1, v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method static synthetic j(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vD:Z

    return p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/reward/presenter/d/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/reward/presenter/d/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->aG()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/ah$a;)V
    .locals 0

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/jshandler/ah$a;->isSuccess()Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->sO:Z

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/playable/a;->a(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oZ:Lcom/kwad/components/ad/reward/l;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->bY:Lcom/kwad/components/ad/k/b;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/e/f;)V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;->setCallerContext(Lcom/kwad/components/ad/reward/j;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_playend_native_jinniu:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    if-eqz v0, :cond_1

    new-instance v1, Lcom/kwad/components/ad/reward/m/k;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/reward/m/k;-><init>(Lcom/kwad/components/ad/reward/j;Landroid/view/ViewStub;)V

    :goto_0
    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vE:Lcom/kwad/components/ad/reward/m/k;

    return-void

    :cond_1
    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_jinniu_end_card_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    new-instance v1, Lcom/kwad/components/ad/reward/m/k;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/reward/m/k;-><init>(Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;)V

    goto :goto_0
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_tail_frame:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vB:Lcom/kwad/components/ad/reward/widget/tailframe/TailFrameView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/DetailVideoView;->getLayoutTransition()Landroid/animation/LayoutTransition;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/DetailVideoView;->getLayoutTransition()Landroid/animation/LayoutTransition;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Landroid/animation/LayoutTransition;->enableTransitionType(I)V

    :cond_0
    return-void
.end method

.method public final onUnbind()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oX:Lcom/kwad/components/core/playable/a;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/playable/a;->b(Lcom/kwad/components/core/webview/jshandler/ah$b;)V

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->iE()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mPlayEndPageListener:Lcom/kwad/components/ad/reward/e/f;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->c(Lcom/kwad/components/ad/reward/e/f;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    if-eqz v0, :cond_3

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vG:I

    const/high16 v2, -0x80000000

    if-eq v1, v2, :cond_1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->updateTextureViewGravity(I)V

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onUnbind:  videoOriginalWidth :"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vF:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RewardPlayEndNativeCardPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vF:I

    if-eq v0, v2, :cond_2

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/d/a/b;->O(I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->vH:Landroid/graphics/drawable/Drawable;

    if-eqz v0, :cond_3

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/d/a/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/video/DetailVideoView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_3
    return-void
.end method

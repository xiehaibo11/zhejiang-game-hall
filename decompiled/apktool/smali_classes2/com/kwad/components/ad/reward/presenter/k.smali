.class public final Lcom/kwad/components/ad/reward/presenter/k;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;


# instance fields
.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

.field private sm:Lcom/kwad/components/ad/reward/m/g;

.field private sn:Z

.field private so:Lcom/kwad/components/core/widget/KsLogoView;

.field private sp:Lcom/kwad/components/ad/reward/m/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->sn:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/k$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/k$1;-><init>(Lcom/kwad/components/ad/reward/presenter/k;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/k;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/k;->hC()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/k;)Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/k;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    return-object p0
.end method

.method private hC()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->sn:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->sm:Lcom/kwad/components/ad/reward/m/g;

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->Q(Z)V

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/reward/presenter/k$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/k$2;-><init>(Lcom/kwad/components/ad/reward/presenter/k;)V

    const-wide/16 v2, 0x1f4

    invoke-virtual {v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/m/g;->a(Lcom/kwad/components/ad/reward/m/g$a;J)V

    :goto_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->sn:Z

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;Landroid/view/View;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/k;->sp:Lcom/kwad/components/ad/reward/m/l;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/m/l;->ke()V

    :cond_0
    return-void
.end method

.method public final ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/k;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bL(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;

    move-result-object v1

    iget-boolean v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$MerchantLiveReservationInfo;->displayWeakCard:Z

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {v2, v1}, Lcom/kwad/components/ad/reward/j;->B(Z)V

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/k;->sm:Lcom/kwad/components/ad/reward/m/g;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/reward/m/g;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v1, v2}, Lcom/kwad/components/ad/reward/m/g;-><init>(Lcom/kwad/components/ad/reward/j;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/k;->sm:Lcom/kwad/components/ad/reward/m/g;

    :cond_0
    sget v1, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v1}, Lcom/kwad/components/ad/reward/presenter/k;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->sm:Lcom/kwad/components/ad/reward/m/g;

    invoke-virtual {v2, v1}, Lcom/kwad/components/ad/reward/m/g;->f(Landroid/view/ViewGroup;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/k;->sm:Lcom/kwad/components/ad/reward/m/g;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/reward/m/g;->b(Lcom/kwad/components/ad/reward/m/r;)V

    :cond_1
    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->sp:Lcom/kwad/components/ad/reward/m/l;

    if-nez v2, :cond_2

    new-instance v2, Lcom/kwad/components/ad/reward/m/l;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v2, v3}, Lcom/kwad/components/ad/reward/m/l;-><init>(Lcom/kwad/components/ad/reward/j;)V

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->sp:Lcom/kwad/components/ad/reward/m/l;

    :cond_2
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->sp:Lcom/kwad/components/ad/reward/m/l;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v2, v3}, Lcom/kwad/components/ad/reward/m/l;->h(Landroid/view/ViewGroup;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->sp:Lcom/kwad/components/ad/reward/m/l;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object v0

    invoke-virtual {v2, v0}, Lcom/kwad/components/ad/reward/m/l;->b(Lcom/kwad/components/ad/reward/m/r;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/k;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/k;->so:Lcom/kwad/components/core/widget/KsLogoView;

    sget v3, Lcom/kwad/sdk/R$dimen;->ksad_live_subscribe_card_logo_margin_bottom:I

    const/4 v4, 0x0

    invoke-static {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/widget/KsLogoView;IZ)Landroid/widget/FrameLayout$LayoutParams;

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_label_play_bar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/k;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->so:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/k;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/k;->sp:Lcom/kwad/components/ad/reward/m/l;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/l;->onUnbind()V

    :cond_0
    return-void
.end method

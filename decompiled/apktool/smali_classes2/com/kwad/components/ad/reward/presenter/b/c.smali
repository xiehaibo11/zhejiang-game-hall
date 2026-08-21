.class public final Lcom/kwad/components/ad/reward/presenter/b/c;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;


# instance fields
.field private oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

.field private ss:Lcom/kwad/components/core/video/l;

.field private tQ:Lcom/kwad/components/ad/reward/m/o;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/b/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/b/c$1;-><init>(Lcom/kwad/components/ad/reward/presenter/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->ss:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/b/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/b/c;->hC()V

    return-void
.end method

.method private hC()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->Q(Z)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->ss:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->cw(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->tQ:Lcom/kwad/components/ad/reward/m/o;

    if-nez v2, :cond_0

    new-instance v2, Lcom/kwad/components/ad/reward/m/o;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v2, v3}, Lcom/kwad/components/ad/reward/m/o;-><init>(Lcom/kwad/components/ad/reward/j;)V

    iput-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->tQ:Lcom/kwad/components/ad/reward/m/o;

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->tQ:Lcom/kwad/components/ad/reward/m/o;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v3, v3, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aX(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    invoke-virtual {v2, v3, v1}, Lcom/kwad/components/ad/reward/m/o;->a(Landroid/view/ViewGroup;I)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->tQ:Lcom/kwad/components/ad/reward/m/o;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/reward/m/o;->b(Lcom/kwad/components/ad/reward/m/r;)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_origin_live_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->ss:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/b/c;->tQ:Lcom/kwad/components/ad/reward/m/o;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/m/o;->onUnbind()V

    :cond_0
    return-void
.end method

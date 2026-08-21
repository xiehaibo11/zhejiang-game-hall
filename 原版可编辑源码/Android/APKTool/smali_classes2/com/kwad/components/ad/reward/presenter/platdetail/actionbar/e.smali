.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$c;


# instance fields
.field private gg:Landroid/view/ViewGroup;

.field private so:Lcom/kwad/components/core/widget/KsLogoView;

.field private uU:Lcom/kwad/components/ad/reward/m/n;

.field private uV:I

.field private uW:Landroid/widget/FrameLayout$LayoutParams;

.field private uX:Lcom/kwad/components/ad/reward/m/n$a;


# direct methods
.method public constructor <init>(Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/m/n$a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->gg:Landroid/view/ViewGroup;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uX:Lcom/kwad/components/ad/reward/m/n$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oY:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->so:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {v1}, Lcom/kwad/components/core/widget/KsLogoView;->getVisibility()I

    move-result v1

    iput v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uV:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->so:Lcom/kwad/components/core/widget/KsLogoView;

    sget v3, Lcom/kwad/sdk/R$dimen;->ksad_reward_order_logo_margin_bottom:I

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v4, v4, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v4}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v4

    xor-int/lit8 v4, v4, 0x1

    invoke-static {v1, v0, v2, v3, v4}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/widget/KsLogoView;IZ)Landroid/widget/FrameLayout$LayoutParams;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uW:Landroid/widget/FrameLayout$LayoutParams;

    new-instance v0, Lcom/kwad/components/ad/reward/m/n;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->gg:Landroid/view/ViewGroup;

    new-instance v2, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e$1;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->getContext()Landroid/content/Context;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v2, p0, v3, v4}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;Landroid/content/Context;Lcom/kwad/components/ad/reward/j;)V

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/ad/reward/m/n;-><init>(Landroid/view/ViewGroup;Lcom/kwad/components/ad/reward/m/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uU:Lcom/kwad/components/ad/reward/m/n;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uX:Lcom/kwad/components/ad/reward/m/n$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/m/n;->a(Lcom/kwad/components/ad/reward/m/n$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uU:Lcom/kwad/components/ad/reward/m/n;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/m/n;->b(Lcom/kwad/components/ad/reward/m/r;)V

    new-instance v0, Lcom/kwad/components/core/widget/e;

    invoke-direct {v0}, Lcom/kwad/components/core/widget/e;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uU:Lcom/kwad/components/ad/reward/m/n;

    invoke-virtual {v1}, Lcom/kwad/components/ad/reward/m/n;->gQ()Landroid/view/ViewGroup;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/components/core/t/g;->a(Lcom/kwad/components/core/widget/e;Landroid/view/ViewGroup;)V

    return-void
.end method

.method public final e(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->gg:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->gg:Landroid/view/ViewGroup;

    sget-object v1, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;->SHOW_NATIVE_ORDER:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;

    invoke-static {p1, v0, v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/a;Landroid/view/View;Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/RewardActionBarControl$ShowActionBarResult;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_label_play_bar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->so:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->so:Lcom/kwad/components/core/widget/KsLogoView;

    iget v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uV:I

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsLogoView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->uW:Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/e;->so:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/widget/KsLogoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    return-void
.end method

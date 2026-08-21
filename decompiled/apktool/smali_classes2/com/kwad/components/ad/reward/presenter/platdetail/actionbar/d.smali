.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Lcom/kwad/components/ad/reward/m/b;


# instance fields
.field private gg:Landroid/view/ViewGroup;

.field private so:Lcom/kwad/components/core/widget/KsLogoView;

.field private uT:Lcom/kwad/components/ad/reward/m/i;


# direct methods
.method public constructor <init>(Landroid/view/ViewGroup;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->gg:Landroid/view/ViewGroup;

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/widget/KsLogoView;IZ)Landroid/widget/FrameLayout$LayoutParams;
    .locals 5

    const/4 v0, 0x0

    if-eqz p2, :cond_9

    if-nez p0, :cond_0

    goto :goto_2

    :cond_0
    invoke-virtual {p2}, Lcom/kwad/components/core/widget/KsLogoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    instance-of v2, v1, Landroid/widget/FrameLayout$LayoutParams;

    if-nez v2, :cond_1

    return-object v0

    :cond_1
    check-cast v1, Landroid/widget/FrameLayout$LayoutParams;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->a(Landroid/widget/FrameLayout$LayoutParams;)Landroid/widget/FrameLayout$LayoutParams;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz p4, :cond_2

    invoke-virtual {p2, v2}, Lcom/kwad/components/core/widget/KsLogoView;->setVisibility(I)V

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p4

    const/4 v3, 0x1

    if-nez p4, :cond_4

    invoke-static {p1}, Lcom/kwad/components/ad/reward/a/b;->i(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p4

    if-nez p4, :cond_3

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cq(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p4

    if-eqz p4, :cond_4

    :cond_3
    move p4, v3

    goto :goto_0

    :cond_4
    move p4, v2

    :goto_0
    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v4

    if-eqz v4, :cond_5

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cp(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_5

    move p1, v3

    goto :goto_1

    :cond_5
    move p1, v2

    :goto_1
    if-nez p4, :cond_6

    if-eqz p1, :cond_7

    :cond_6
    move v2, v3

    :cond_7
    const/16 p1, 0x55

    iput p1, v1, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    if-eqz v2, :cond_8

    sget p3, Lcom/kwad/sdk/R$dimen;->ksad_reward_follow_card_margin:I

    :cond_8
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1, p3}, Landroid/content/res/Resources;->getDimensionPixelOffset(I)I

    move-result p1

    iput p1, v1, Landroid/widget/FrameLayout$LayoutParams;->bottomMargin:I

    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    sget p1, Lcom/kwad/sdk/R$dimen;->ksad_reward_follow_card_margin:I

    invoke-virtual {p0, p1}, Landroid/content/res/Resources;->getDimensionPixelOffset(I)I

    move-result p0

    iput p0, v1, Landroid/widget/FrameLayout$LayoutParams;->rightMargin:I

    invoke-virtual {p2, v1}, Lcom/kwad/components/core/widget/KsLogoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_9
    :goto_2
    return-object v0
.end method

.method private static a(Landroid/widget/FrameLayout$LayoutParams;)Landroid/widget/FrameLayout$LayoutParams;
    .locals 1

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    invoke-direct {v0, p0}, Landroid/widget/FrameLayout$LayoutParams;-><init>(Landroid/view/ViewGroup$MarginLayoutParams;)V

    iget p0, p0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iput p0, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    return-object v0
.end method


# virtual methods
.method public final ah()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    new-instance v0, Lcom/kwad/components/ad/reward/m/i;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->gg:Landroid/view/ViewGroup;

    iget-object v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->so:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/ad/reward/m/i;-><init>(Lcom/kwad/components/ad/reward/j;Landroid/view/ViewGroup;Lcom/kwad/components/core/widget/KsLogoView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->uT:Lcom/kwad/components/ad/reward/m/i;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/reward/m/r;->C(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/ad/reward/m/r;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/m/i;->b(Lcom/kwad/components/ad/reward/m/r;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->so:Lcom/kwad/components/core/widget/KsLogoView;

    sget v3, Lcom/kwad/sdk/R$dimen;->ksad_reward_jinniu_logo_margin_bottom:I

    const/4 v4, 0x0

    invoke-static {v1, v0, v2, v3, v4}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/widget/KsLogoView;IZ)Landroid/widget/FrameLayout$LayoutParams;

    return-void
.end method

.method public final gU()V
    .locals 0

    return-void
.end method

.method public final ip()V
    .locals 0

    return-void
.end method

.method public final iq()V
    .locals 0

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_label_play_bar:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/d;->so:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

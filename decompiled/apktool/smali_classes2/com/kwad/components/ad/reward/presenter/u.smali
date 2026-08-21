.class public final Lcom/kwad/components/ad/reward/presenter/u;
.super Lcom/kwad/components/ad/reward/presenter/a;


# instance fields
.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private tA:Landroid/widget/ImageView;

.field private tB:Landroid/view/ViewGroup$LayoutParams;

.field private tx:Lcom/kwad/components/core/video/DetailVideoView;

.field private ty:Landroid/view/ViewGroup;

.field private tz:Landroid/widget/FrameLayout;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tB:Landroid/view/ViewGroup$LayoutParams;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/u$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/u$1;-><init>(Lcom/kwad/components/ad/reward/presenter/u;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method private N(I)V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/u;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->tz:Landroid/widget/FrameLayout;

    const/4 v2, 0x0

    invoke-static {v0, p1, v1, v2}, Lcom/kwad/sdk/m/l;->a(Landroid/content/Context;ILandroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tz:Landroid/widget/FrameLayout;

    const/4 v1, -0x1

    invoke-virtual {v0, p1, v1, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;II)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/u;)Lcom/kwad/components/core/video/DetailVideoView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    return-object p0
.end method

.method private hS()V
    .locals 1

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    return-void
.end method

.method private hT()V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/presenter/u;->getContext()Landroid/content/Context;

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    const/4 v2, 0x1

    xor-int/2addr v1, v2

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->co(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v4

    const/4 v5, 0x0

    if-eqz v4, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/reward/a/b;->gP()Z

    move-result v4

    if-eqz v4, :cond_0

    move v4, v2

    goto :goto_0

    :cond_0
    move v4, v5

    :goto_0
    iget-object v6, p0, Lcom/kwad/components/ad/reward/presenter/u;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v6, v6, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v6}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v6

    if-nez v6, :cond_2

    iget-object v6, p0, Lcom/kwad/components/ad/reward/presenter/u;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v6, v6, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v6}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v6

    if-nez v6, :cond_2

    if-nez v3, :cond_2

    if-eqz v4, :cond_1

    goto :goto_1

    :cond_1
    move v6, v5

    goto :goto_2

    :cond_2
    :goto_1
    move v6, v2

    :goto_2
    const/16 v7, 0x8

    if-eqz v1, :cond_6

    if-eqz v6, :cond_6

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->ty:Landroid/view/ViewGroup;

    if-eqz v4, :cond_3

    const/4 v5, 0x4

    :cond_3
    invoke-virtual {v1, v5}, Landroid/view/ViewGroup;->setVisibility(I)V

    if-eqz v3, :cond_4

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->tA:Landroid/widget/ImageView;

    invoke-virtual {v1, v7}, Landroid/widget/ImageView;->setVisibility(I)V

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_playable_end_info:I

    goto :goto_3

    :cond_4
    sget v1, Lcom/kwad/sdk/R$layout;->ksad_activity_apk_info_landscape:I

    :goto_3
    invoke-direct {p0, v1}, Lcom/kwad/components/ad/reward/presenter/u;->N(I)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aR(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    xor-int/2addr v0, v2

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    const/16 v1, 0x11

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->updateTextureViewGravity(I)V

    goto :goto_4

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    const/16 v1, 0x15

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->updateTextureViewGravity(I)V

    return-void

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->ty:Landroid/view/ViewGroup;

    invoke-virtual {v0, v7}, Landroid/view/ViewGroup;->setVisibility(I)V

    :goto_4
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/u;->hS()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/DetailVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Landroid/view/ViewGroup$LayoutParams;

    invoke-direct {v1, v0}, Landroid/view/ViewGroup$LayoutParams;-><init>(Landroid/view/ViewGroup$LayoutParams;)V

    iput-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->tB:Landroid/view/ViewGroup$LayoutParams;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/u;->hT()V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/u;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_right_area:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/u;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->ty:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_right_area_bg_img:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/u;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tA:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_play_right_area_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/u;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tz:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tB:Landroid/view/ViewGroup$LayoutParams;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/core/video/DetailVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->tB:Landroid/view/ViewGroup$LayoutParams;

    iget v1, v1, Landroid/view/ViewGroup$LayoutParams;->width:I

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->tB:Landroid/view/ViewGroup$LayoutParams;

    iget v1, v1, Landroid/view/ViewGroup$LayoutParams;->height:I

    iput v1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/video/DetailVideoView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tx:Lcom/kwad/components/core/video/DetailVideoView;

    if-eqz v0, :cond_1

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setVisibility(I)V

    :cond_1
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/u;->tB:Landroid/view/ViewGroup$LayoutParams;

    :cond_2
    return-void
.end method

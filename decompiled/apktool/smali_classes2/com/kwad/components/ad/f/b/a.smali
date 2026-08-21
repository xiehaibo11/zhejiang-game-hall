.class public final Lcom/kwad/components/ad/f/b/a;
.super Lcom/kwad/components/ad/f/a/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private mZ:Landroid/view/ViewGroup;

.field private na:Landroid/widget/ImageView;

.field private nb:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/ad/f/b/a;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/a;->eN()V

    return-void
.end method

.method private e(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 5

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/b/a;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    instance-of v2, v0, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    const/4 v3, 0x1

    if-eqz v2, :cond_6

    check-cast v0, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;

    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v2

    if-ne v2, v3, :cond_1

    return v3

    :cond_1
    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v2

    const/4 v4, 0x2

    if-ne v2, v4, :cond_2

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/b/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result p1

    return p1

    :cond_2
    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getVideoAutoPlayType()I

    move-result v2

    const/4 v4, 0x3

    if-ne v2, v4, :cond_3

    return v1

    :cond_3
    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->getDataFlowAutoStartValue()I

    move-result v2

    if-eqz v2, :cond_6

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/b/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result p1

    if-nez p1, :cond_5

    invoke-virtual {v0}, Lcom/kwad/components/core/internal/api/KSAdVideoPlayConfigImpl;->isDataFlowAutoStart()Z

    move-result p1

    if-eqz p1, :cond_4

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/b/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->isMobileConnected(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_4

    goto :goto_0

    :cond_4
    return v1

    :cond_5
    :goto_0
    return v3

    :cond_6
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bI(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_7

    return v3

    :cond_7
    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bJ(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_8

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/b/a;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/utils/ag;->isWifiConnected(Landroid/content/Context;)Z

    move-result p1

    if-eqz p1, :cond_8

    return v3

    :cond_8
    return v1
.end method

.method private eN()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mZ:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mZ:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/f/b/a;->e(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/a;->nb:Landroid/widget/TextView;

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    invoke-static {v2, v3}, Lcom/kwad/sdk/utils/bh;->V(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->na:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    const/4 v1, 0x2

    iput v1, v0, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerBehavior:I

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mZ:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mZ:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    new-instance v0, Lcom/kwad/components/ad/f/b/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/a$1;-><init>(Lcom/kwad/components/ad/f/b/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/a;->na:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/f/b/a;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object p1, p1, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/f/c/a;->eV()V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_data_flow_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/a;->mZ:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_data_flow_play_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/a;->na:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_data_flow_play_tip:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/a;->nb:Landroid/widget/TextView;

    return-void
.end method

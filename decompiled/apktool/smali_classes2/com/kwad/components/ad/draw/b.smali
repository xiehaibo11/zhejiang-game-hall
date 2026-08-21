.class public final Lcom/kwad/components/ad/draw/b;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# instance fields
.field private bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

.field private bE:Lcom/kwad/components/ad/draw/a/b;

.field private bF:Lcom/kwad/components/ad/draw/c/a;

.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private bH:Z

.field private bI:Landroid/widget/ImageView;

.field private bJ:Lcom/kwad/sdk/core/h/b;

.field private bK:Landroid/view/View$OnClickListener;

.field private bL:Lcom/kwad/components/core/video/k;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mContext:Landroid/content/Context;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mPresenter:Lcom/kwad/sdk/mvp/Presenter;

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;)V

    new-instance v0, Lcom/kwad/components/ad/draw/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b$1;-><init>(Lcom/kwad/components/ad/draw/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->bK:Landroid/view/View$OnClickListener;

    new-instance v0, Lcom/kwad/components/ad/draw/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b$2;-><init>(Lcom/kwad/components/ad/draw/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->bL:Lcom/kwad/components/core/video/k;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b;->mContext:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b;->initView()V

    return-void
.end method

.method private Z()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-boolean v1, p0, Lcom/kwad/components/ad/draw/b;->bH:Z

    xor-int/lit8 v1, v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->f(Z)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/draw/b;->bH:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/c/a;->pause()V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/c/a;->resume()V

    :goto_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/draw/b;->bH:Z

    xor-int/lit8 v0, v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/draw/b;->bH:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method private ac()Lcom/kwad/components/ad/draw/a/b;
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/draw/a/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/draw/a/b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/e/d/c;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    new-instance v1, Lcom/kwad/components/ad/draw/b/b/a;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1, v2}, Lcom/kwad/components/ad/draw/b/b/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->bX:Lcom/kwad/components/ad/draw/b/b/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->bk(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/components/ad/k/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/k/b;-><init>()V

    iput-object v1, v0, Lcom/kwad/components/ad/draw/a/b;->bY:Lcom/kwad/components/ad/k/b;

    :cond_1
    return-object v0
.end method

.method private ad()Lcom/kwad/sdk/mvp/Presenter;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/draw/b/a/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/a/a;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/draw/b/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/b;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/draw/b/d;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/d;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/draw/b/c;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/c;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/draw/b/b/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/b/b;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->aX(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/draw/b/b/c;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/b/c;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/draw/b/c/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/c/a;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->bk(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/components/ad/draw/b/c/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/c/b;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-instance v1, Lcom/kwad/components/ad/draw/b/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/draw/b/a;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_2
    return-object v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b;->Z()V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/b;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b;->bI:Landroid/widget/ImageView;

    return-object p0
.end method

.method private initView()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->mContext:Landroid/content/Context;

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_draw_layout:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_control_button:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->bI:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zX()I

    move-result v1

    const/4 v2, 0x1

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/core/video/DetailVideoView;->f(ZI)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bK:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bI:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bK:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    new-instance p1, Lcom/kwad/components/core/widget/a/b;

    const/16 v0, 0x46

    invoke-direct {p1, p0, v0}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b;->bG:Lcom/kwad/components/core/widget/a/b;

    new-instance v0, Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-direct {v0, v1, p1, v2}, Lcom/kwad/components/ad/draw/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    return-void
.end method

.method public final aa()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b;->ac()Lcom/kwad/components/ad/draw/a/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b;->ad()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bJ:Lcom/kwad/sdk/core/h/b;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/c/a;->aH()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bL:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final ab()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bG:Lcom/kwad/components/core/widget/a/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/c/a;->aI()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b;->bL:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->b(Lcom/kwad/components/core/video/k;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->bE:Lcom/kwad/components/ad/draw/a/b;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/a/b;->release()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    :cond_3
    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    return-void
.end method

.method public final setPageExitListener(Lcom/kwad/sdk/core/h/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/b;->bJ:Lcom/kwad/sdk/core/h/b;

    return-void
.end method

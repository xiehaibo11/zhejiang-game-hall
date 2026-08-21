.class public final Lcom/kwad/components/ad/f/f;
.super Lcom/kwad/sdk/widget/KSFrameLayout;


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private ct:Lcom/kwad/sdk/widget/j;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private mE:Lcom/kwad/components/ad/f/d$a;

.field private mPresenter:Lcom/kwad/sdk/mvp/Presenter;

.field private mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

.field private mV:Lcom/kwad/components/ad/f/a/b;

.field private mW:Lcom/kwad/components/ad/f/c/a;

.field private mX:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/f/f;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 p2, 0x0

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/f/f;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    const/4 p3, 0x0

    invoke-direct {p0, p1, p2, p3}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p2, Lcom/kwad/components/ad/f/f$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/f/f$1;-><init>(Lcom/kwad/components/ad/f/f;)V

    iput-object p2, p0, Lcom/kwad/components/ad/f/f;->ct:Lcom/kwad/sdk/widget/j;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/f;->D(Landroid/content/Context;)V

    return-void
.end method

.method private D(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_native_video_layout:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_root_container:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/f/f;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    iput-object p1, p0, Lcom/kwad/components/ad/f/f;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {p1, v0}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object p1, p0, Lcom/kwad/components/ad/f/f;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/video/DetailVideoView;->setAd(Z)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private ad()Lcom/kwad/sdk/mvp/Presenter;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/mvp/Presenter;

    invoke-direct {v0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    new-instance v1, Lcom/kwad/components/ad/f/b/e;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/e;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/c;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/c;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/i;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/i;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/j;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/j;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/d;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/d;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/b;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/k;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/k;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/a;

    iget-object v2, p0, Lcom/kwad/components/ad/f/f;->mX:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-direct {v1, v2}, Lcom/kwad/components/ad/f/b/a;-><init>(Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/f/b/g;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/g;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/f/b/f;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/f;-><init>()V

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/f/b/h;

    invoke-direct {v1}, Lcom/kwad/components/ad/f/b/h;-><init>()V

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method

.method private eM()Lcom/kwad/components/ad/f/a/b;
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/f/a/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/f/a/b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    iput-object v1, v0, Lcom/kwad/components/ad/f/a/b;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mE:Lcom/kwad/components/ad/f/d$a;

    iput-object v1, v0, Lcom/kwad/components/ad/f/a/b;->mE:Lcom/kwad/components/ad/f/d$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    iput-object v1, v0, Lcom/kwad/components/ad/f/a/b;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/e/d/c;

    iget-object v2, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    :goto_0
    iput-object v1, v0, Lcom/kwad/components/ad/f/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mW:Lcom/kwad/components/ad/f/c/a;

    iput-object v1, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p2, p0, Lcom/kwad/components/ad/f/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object p3, p0, Lcom/kwad/components/ad/f/f;->mX:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iget-object p1, p0, Lcom/kwad/components/ad/f/f;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    iget-object p2, p0, Lcom/kwad/components/ad/f/f;->ct:Lcom/kwad/sdk/widget/j;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;->setVisibleListener(Lcom/kwad/sdk/widget/j;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/f;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-nez p1, :cond_0

    move-object p1, p0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/f/f;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/View;

    :goto_0
    new-instance p2, Lcom/kwad/components/core/widget/a/b;

    const/16 p3, 0x1e

    invoke-direct {p2, p1, p3}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object p2, p0, Lcom/kwad/components/ad/f/f;->bG:Lcom/kwad/components/core/widget/a/b;

    return-void
.end method

.method public final aa()V
    .locals 5

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->mW:Lcom/kwad/components/ad/f/c/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/f/f;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v3, p0, Lcom/kwad/components/ad/f/f;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    iget-object v4, p0, Lcom/kwad/components/ad/f/f;->mX:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/f/c/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/widget/a/b;Lcom/kwad/components/core/video/DetailVideoView;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/f;->mW:Lcom/kwad/components/ad/f/c/a;

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/f/f;->eM()Lcom/kwad/components/ad/f/a/b;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/f;->mV:Lcom/kwad/components/ad/f/a/b;

    invoke-direct {p0}, Lcom/kwad/components/ad/f/f;->ad()Lcom/kwad/sdk/mvp/Presenter;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/f;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mQ:Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->F(Landroid/view/View;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    iget-object v1, p0, Lcom/kwad/components/ad/f/f;->mV:Lcom/kwad/components/ad/f/a/b;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/mvp/Presenter;->k(Ljava/lang/Object;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->mW:Lcom/kwad/components/ad/f/c/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/f/c/a;->aH()V

    return-void
.end method

.method public final ab()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->bG:Lcom/kwad/components/core/widget/a/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->mW:Lcom/kwad/components/ad/f/c/a;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/f/c/a;->aI()V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->mV:Lcom/kwad/components/ad/f/a/b;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/f/a/b;->release()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/f/f;->mPresenter:Lcom/kwad/sdk/mvp/Presenter;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/sdk/mvp/Presenter;->destroy()V

    :cond_3
    return-void
.end method

.method public final setInnerAdInteractionListener(Lcom/kwad/components/ad/f/d$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/f;->mE:Lcom/kwad/components/ad/f/d$a;

    return-void
.end method

.method public final setVideoPlayListener(Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/f/f;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    return-void
.end method

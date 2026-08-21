.class public final Lcom/kwad/components/ad/interstitial/f/d;
.super Lcom/kwad/components/ad/interstitial/f/a;


# instance fields
.field private dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private hG:Lcom/kwad/components/ad/interstitial/d;

.field protected hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

.field protected jf:Lcom/kwad/components/ad/interstitial/d/c;

.field private jk:Z

.field private jl:Lcom/kwad/components/ad/interstitial/d/c$a;

.field private ju:I

.field protected lH:Lcom/kwad/components/ad/interstitial/d/b;

.field private lI:Z

.field protected lJ:Landroid/view/ViewGroup;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field protected mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/interstitial/f/d;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    const/4 p2, 0x0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/f/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, -0x1

    iput p2, p0, Lcom/kwad/components/ad/interstitial/f/d;->ju:I

    new-instance p2, Lcom/kwad/components/ad/interstitial/f/d$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/f/d$1;-><init>(Lcom/kwad/components/ad/interstitial/f/d;)V

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/f/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/d;->getLayoutId()I

    move-result p2

    invoke-static {p1, p2, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lJ:Landroid/view/ViewGroup;

    return-void
.end method

.method private a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/ad/interstitial/d/c;)Lcom/kwad/components/ad/interstitial/f/f;
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->mContext:Landroid/content/Context;

    invoke-static {v0, p2}, Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    new-instance v1, Lcom/kwad/components/ad/interstitial/f/f$a;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/f/f$a;-><init>()V

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/interstitial/f/f$a;->v(Z)V

    invoke-virtual {p3, p1}, Lcom/kwad/components/ad/interstitial/d/c;->M(Landroid/content/Context;)Z

    move-result p3

    const/4 v0, 0x1

    const/4 v2, 0x0

    if-nez p3, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cB()Z

    move-result p3

    if-eqz p3, :cond_0

    move p3, v0

    goto :goto_0

    :cond_0
    move p3, v2

    :goto_0
    invoke-virtual {v1, p3}, Lcom/kwad/components/ad/interstitial/f/f$a;->w(Z)V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cC()I

    move-result p3

    invoke-virtual {v1, p3}, Lcom/kwad/components/ad/interstitial/f/f$a;->E(I)V

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aO(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p2

    if-nez p2, :cond_1

    goto :goto_1

    :cond_1
    move v0, v2

    :cond_2
    :goto_1
    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/interstitial/f/f$a;->x(Z)V

    new-instance p2, Lcom/kwad/components/ad/interstitial/f/f;

    invoke-direct {p2, p1, v1}, Lcom/kwad/components/ad/interstitial/f/f;-><init>(Landroid/content/Context;Lcom/kwad/components/ad/interstitial/f/f$a;)V

    return-object p2
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/f/d;Z)Z
    .locals 0

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lI:Z

    return p1
.end method

.method private eq()Lcom/kwad/components/ad/interstitial/d/c;
    .locals 4

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/interstitial/d/c;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->hG:Lcom/kwad/components/ad/interstitial/d;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    new-instance v1, Lcom/kwad/components/core/e/d/c;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v1, v2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    new-instance v1, Lcom/kwad/sdk/core/video/videoview/a;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/f/d;->mContext:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/kwad/sdk/core/video/videoview/a;-><init>(Landroid/content/Context;)V

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lJ:Landroid/view/ViewGroup;

    sget v2, Lcom/kwad/sdk/R$id;->ksad_container:I

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/widget/KSFrameLayout;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/interstitial/e/b;

    iget-object v2, v0, Lcom/kwad/components/ad/interstitial/d/c;->jo:Lcom/kwad/sdk/widget/KSFrameLayout;

    const/16 v3, 0x64

    invoke-direct {v1, v2, v3}, Lcom/kwad/components/ad/interstitial/e/b;-><init>(Landroid/view/View;I)V

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    iget-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    invoke-virtual {v1}, Lcom/kwad/components/ad/interstitial/e/b;->sy()V

    iget v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->ju:I

    iput v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->ju:I

    iget-boolean v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->jk:Z

    iput-boolean v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->gt:Lcom/kwad/components/core/webview/b/e/e;

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->gt:Lcom/kwad/components/core/webview/b/e/e;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/f/d;->mContext:Landroid/content/Context;

    invoke-direct {p0, v2, v1, v0}, Lcom/kwad/components/ad/interstitial/f/d;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/ad/interstitial/d/c;)Lcom/kwad/components/ad/interstitial/f/f;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    const/4 v0, 0x2

    iput v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    iput-object p3, p0, Lcom/kwad/components/ad/interstitial/f/d;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/f/d;->hG:Lcom/kwad/components/ad/interstitial/d;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->bA(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lI:Z

    iput-object p4, p0, Lcom/kwad/components/ad/interstitial/f/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/f/d;->eq()Lcom/kwad/components/ad/interstitial/d/c;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    if-nez p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/d;->er()Lcom/kwad/components/ad/interstitial/d/b;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/d;->lJ:Landroid/view/ViewGroup;

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/b;->F(Landroid/view/View;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/b;->k(Ljava/lang/Object;)V

    return-void
.end method

.method public final cn()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/b;->cN()V

    :cond_0
    return-void
.end method

.method public final co()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/b;->cO()V

    :cond_0
    return-void
.end method

.method public final er()Lcom/kwad/components/ad/interstitial/d/b;
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    iget-boolean v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->lI:Z

    if-eqz v1, :cond_0

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a/b;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/a/b;-><init>()V

    :goto_0
    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    goto :goto_1

    :cond_0
    new-instance v1, Lcom/kwad/components/ad/interstitial/d/d;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/d;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_1

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/j;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/j;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_1
    new-instance v1, Lcom/kwad/components/ad/interstitial/d/k;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/k;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/f;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/f;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aH(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/a;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/a;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/f/d;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->M(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_3

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/g;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/g;-><init>()V

    goto :goto_0

    :cond_3
    :goto_1
    new-instance v1, Lcom/kwad/components/ad/interstitial/d/e;

    invoke-direct {v1}, Lcom/kwad/components/ad/interstitial/d/e;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/b;->a(Lcom/kwad/sdk/mvp/Presenter;)V

    return-object v0
.end method

.method protected final getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_interstitial_horizontal:I

    return v0
.end method

.method protected final onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/f/a;->onDetachedFromWindow()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/c;->release()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->lH:Lcom/kwad/components/ad/interstitial/d/b;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/d/b;->destroy()V

    :cond_1
    return-void
.end method

.method public final setAdConvertListener(Lcom/kwad/components/ad/interstitial/d/c$a;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-eqz v0, :cond_0

    iput-object p1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jl:Lcom/kwad/components/ad/interstitial/d/c$a;

    :cond_0
    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-eqz v0, :cond_0

    iput-object p1, v0, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    :cond_0
    return-void
.end method

.method public final setAggregateAdView(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->jk:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-eqz v0, :cond_0

    iput-boolean p1, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    :cond_0
    return-void
.end method

.method public final setAggregateShowTriggerType(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/components/ad/interstitial/f/d;->ju:I

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/f/d;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    if-eqz v0, :cond_0

    iput p1, v0, Lcom/kwad/components/ad/interstitial/d/c;->ju:I

    :cond_0
    return-void
.end method

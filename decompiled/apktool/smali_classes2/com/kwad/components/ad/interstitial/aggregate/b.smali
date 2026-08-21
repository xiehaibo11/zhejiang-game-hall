.class public final Lcom/kwad/components/ad/interstitial/aggregate/b;
.super Lcom/kwad/components/ad/interstitial/f/a;


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private final cV:Lcom/kwad/sdk/core/h/c;

.field private hH:Z

.field private hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

.field private hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

.field private hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

.field private hO:Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

.field private hP:Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

.field private hQ:Landroid/animation/ValueAnimator;

.field private hR:Z

.field private hS:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

.field private hT:Z

.field private hU:Z

.field private final hV:Landroid/support/v4/view/ViewPager$OnPageChangeListener;

.field protected hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

.field protected mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field protected mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mAdTemplateList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdTemplate;",
            ">;"
        }
    .end annotation
.end field

.field private final mRootView:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/b;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    const/4 p2, 0x0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/f/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplateList:Ljava/util/List;

    new-instance p2, Lcom/kwad/components/ad/interstitial/aggregate/b$2;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$2;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->cV:Lcom/kwad/sdk/core/h/c;

    new-instance p2, Lcom/kwad/components/ad/interstitial/aggregate/b$3;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$3;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hV:Landroid/support/v4/view/ViewPager$OnPageChangeListener;

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mContext:Landroid/content/Context;

    sget p2, Lcom/kwad/sdk/R$layout;->ksad_interstitial_multi_ad:I

    invoke-static {p1, p2, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->initView()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/b;FF)Landroid/view/animation/AnimationSet;
    .locals 0

    invoke-static {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/b;->b(FF)Landroid/view/animation/AnimationSet;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/b;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hU:Z

    return p1
.end method

.method private static b(FF)Landroid/view/animation/AnimationSet;
    .locals 10

    new-instance v9, Landroid/view/animation/TranslateAnimation;

    const/4 v1, 0x1

    const/4 v3, 0x1

    const/4 v5, 0x1

    const/4 v6, 0x0

    const/4 v7, 0x1

    const/4 v8, 0x0

    move-object v0, v9

    move v2, p0

    move v4, p1

    invoke-direct/range {v0 .. v8}, Landroid/view/animation/TranslateAnimation;-><init>(IFIFIFIF)V

    new-instance p0, Landroid/view/animation/AlphaAnimation;

    const/4 p1, 0x0

    const v0, 0x3f4ccccd    # 0.8f

    invoke-direct {p0, p1, v0}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    new-instance p1, Landroid/view/animation/AnimationSet;

    const/4 v0, 0x1

    invoke-direct {p1, v0}, Landroid/view/animation/AnimationSet;-><init>(Z)V

    invoke-virtual {p1, v9}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    invoke-virtual {p1, p0}, Landroid/view/animation/AnimationSet;->addAnimation(Landroid/view/animation/Animation;)V

    const-wide/16 v1, 0x320

    invoke-virtual {p1, v1, v2}, Landroid/view/animation/AnimationSet;->setDuration(J)V

    invoke-virtual {p1, v0}, Landroid/view/animation/AnimationSet;->setFillAfter(Z)V

    return-object p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hU:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/aggregate/b;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hR:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/animation/ValueAnimator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    return-object p0
.end method

.method private cm()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/interstitial/aggregate/c;->ct()Lcom/kwad/components/ad/interstitial/aggregate/c;

    move-result-object v0

    const/16 v1, 0x10

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cF()I

    move-result v2

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    new-instance v4, Lcom/kwad/components/ad/interstitial/aggregate/b$6;

    invoke-direct {v4, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$6;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/kwad/components/ad/interstitial/aggregate/c;->a(IILcom/kwad/sdk/internal/api/SceneImpl;Lcom/kwad/components/ad/interstitial/aggregate/c$b;)V

    :cond_0
    return-void
.end method

.method private cp()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/b$7;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$7;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setPlayProgressListener(Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator$a;)V

    return-void
.end method

.method private cq()V
    .locals 3

    iget-boolean v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hT:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hS:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    invoke-virtual {v0, v1, v2}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;)V

    :cond_0
    const/4 v0, 0x3

    new-array v0, v0, [I

    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x4b0

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/b$8;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$8;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/b$9;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$9;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void

    :array_0
    .array-data 4
        0x0
        0x78
        0x0
    .end array-data
.end method

.method private cr()V
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [I

    const/4 v1, 0x0

    aput v1, v0, v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->getWidth()I

    move-result v1

    const/4 v2, 0x1

    aput v1, v0, v2

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofInt([I)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x320

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/b$10;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$10;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    new-instance v1, Lcom/kwad/components/ad/interstitial/aggregate/b$11;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$11;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hQ:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->cm()V

    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/interstitial/aggregate/b;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplateList:Ljava/util/List;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/support/v4/view/ViewPager$OnPageChangeListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hV:Landroid/support/v4/view/ViewPager$OnPageChangeListener;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->cp()V

    return-void
.end method

.method private initView()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_multi_ad_container:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_multi_ad_indicator:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_left_slide:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hO:Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_right_slide:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hP:Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_manual_tips_view:I

    invoke-virtual {v0, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hS:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    new-instance v0, Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mRootView:Landroid/view/View;

    const/16 v2, 0x64

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->bG:Lcom/kwad/components/core/widget/a/b;

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/sdk/core/h/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->cV:Lcom/kwad/sdk/core/h/c;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/core/widget/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->bG:Lcom/kwad/components/core/widget/a/b;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hH:Z

    return p0
.end method

.method static synthetic n(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->cr()V

    return-void
.end method

.method static synthetic o(Lcom/kwad/components/ad/interstitial/aggregate/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/b;->cq()V

    return-void
.end method

.method static synthetic p(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic q(Lcom/kwad/components/ad/interstitial/aggregate/b;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic r(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hT:Z

    return p0
.end method

.method static synthetic s(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hS:Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;

    return-object p0
.end method

.method static synthetic t(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hO:Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    return-object p0
.end method

.method static synthetic u(Lcom/kwad/components/ad/interstitial/aggregate/b;)Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hP:Lcom/kwad/components/ad/interstitial/aggregate/SlideTipsView;

    return-object p0
.end method

.method static synthetic v(Lcom/kwad/components/ad/interstitial/aggregate/b;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hR:Z

    return p0
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 2

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cd(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    iput-boolean v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hH:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplateList:Ljava/util/List;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    iput-object p4, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    new-instance v0, Lcom/kwad/components/ad/interstitial/aggregate/a;

    invoke-direct {v0, p1, p2, p3, p4}, Lcom/kwad/components/ad/interstitial/aggregate/a;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

    new-instance p1, Lcom/kwad/components/ad/interstitial/aggregate/b$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$1;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/aggregate/a;->a(Lcom/kwad/components/ad/interstitial/aggregate/a$b;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

    new-instance p2, Lcom/kwad/components/ad/interstitial/aggregate/b$4;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$4;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/a;->a(Lcom/kwad/components/ad/interstitial/aggregate/a$a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->setAdapter(Landroid/support/v4/view/PagerAdapter;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplateList:Ljava/util/List;

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/a;->setAdTemplateList(Ljava/util/List;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hM:Lcom/kwad/components/ad/interstitial/aggregate/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/a;->notifyDataSetChanged()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/widget/a/b;->sy()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    if-nez p1, :cond_1

    return-void

    :cond_1
    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz p1, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result p2

    iput-boolean p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hT:Z

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mContext:Landroid/content/Context;

    iget-boolean p3, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hT:Z

    if-eqz p3, :cond_3

    iget-boolean p3, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hH:Z

    if-eqz p3, :cond_2

    const/16 p3, 0xc

    goto :goto_1

    :cond_2
    const/4 p3, 0x4

    :goto_1
    int-to-float p3, p3

    goto :goto_2

    :cond_3
    const/high16 p3, 0x40c00000    # 6.0f

    :goto_2
    invoke-static {p2, p3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p2

    iput p2, p1, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_4
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hN:Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->ce(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/aggregate/ViewPagerIndicator;->setFirstAdShowTime(I)V

    new-instance p1, Lcom/kwad/components/ad/interstitial/aggregate/b$5;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/aggregate/b$5;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/b;)V

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/interstitial/aggregate/b;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final cn()V
    .locals 0

    return-void
.end method

.method public final co()V
    .locals 0

    return-void
.end method

.method protected final onDetachedFromWindow()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/f/a;->onDetachedFromWindow()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->cV:Lcom/kwad/sdk/core/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sz()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->mAdTemplateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->clearOnPageChangeListeners()V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/aggregate/c;->ct()Lcom/kwad/components/ad/interstitial/aggregate/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/aggregate/c;->release()V

    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/b;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    return-void
.end method

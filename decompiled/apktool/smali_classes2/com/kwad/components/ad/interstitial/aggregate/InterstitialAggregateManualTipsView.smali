.class public Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;
.super Landroid/widget/LinearLayout;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

.field private ij:Landroid/widget/ImageView;

.field private ik:Landroid/widget/ImageView;

.field private il:Landroid/widget/ImageView;

.field private im:I

.field private io:I

.field private final iq:Landroid/support/v4/view/ViewPager$OnPageChangeListener;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private final mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    new-instance p2, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView$1;-><init>(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)V

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->iq:Landroid/support/v4/view/ViewPager$OnPageChangeListener;

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->mContext:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->initView()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->im:I

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->im:I

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->io:I

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ij:Landroid/widget/ImageView;

    return-object p0
.end method

.method private cv()V
    .locals 3

    iget v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->im:I

    iget v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->io:I

    const/4 v2, 0x1

    sub-int/2addr v1, v2

    if-ge v0, v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    add-int/2addr v0, v2

    invoke-virtual {v1, v0, v2}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->setCurrentItem(IZ)V

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ik:Landroid/widget/ImageView;

    return-object p0
.end method

.method private initView()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->mContext:Landroid/content/Context;

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_interstitial_aggregate_manual_tips:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_aggregate_cut:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ij:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_aggregate_refresh:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ik:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_aggregate_convert:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->il:Landroid/widget/ImageView;

    const/4 v1, 0x3

    new-array v1, v1, [Landroid/view/View;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ij:Landroid/widget/ImageView;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ik:Landroid/widget/ImageView;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    const/4 v2, 0x2

    aput-object v0, v1, v2

    invoke-static {p0, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/View$OnClickListener;[Landroid/view/View;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;)V
    .locals 3

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    invoke-virtual {p2}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->getCurrentItem()I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->im:I

    invoke-virtual {p2}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->getAdapter()Landroid/support/v4/view/PagerAdapter;

    move-result-object p2

    check-cast p2, Lcom/kwad/components/ad/interstitial/aggregate/a;

    if-nez p2, :cond_0

    return-void

    :cond_0
    invoke-virtual {p2}, Lcom/kwad/components/ad/interstitial/aggregate/a;->getCount()I

    move-result p2

    iput p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->io:I

    new-instance p2, Lcom/kwad/components/ad/interstitial/aggregate/d;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p2, v0}, Lcom/kwad/components/ad/interstitial/aggregate/d;-><init>(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    invoke-virtual {p2, v0}, Lcom/kwad/components/ad/interstitial/aggregate/d;->a(Landroid/support/v4/view/ViewPager;)V

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->iq:Landroid/support/v4/view/ViewPager$OnPageChangeListener;

    invoke-virtual {p2, v0}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->addOnPageChangeListener(Landroid/support/v4/view/ViewPager$OnPageChangeListener;)V

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/b;->cY(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/b;->cZ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/b;->da(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    goto :goto_0

    :cond_1
    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ij:Landroid/widget/ImageView;

    invoke-static {v2, v0}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ik:Landroid/widget/ImageView;

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->il:Landroid/widget/ImageView;

    invoke-static {v0, p2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;)V

    const/16 p2, 0xa2

    const/4 v0, 0x0

    invoke-static {p1, p2, v0}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    return-void

    :cond_2
    :goto_0
    const/16 p1, 0x8

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->setVisibility(I)V

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ij:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->cv()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0xa2

    :goto_0
    invoke-static {p1, v0}, Lcom/kwad/sdk/core/report/a;->q(Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->ik:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->cv()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v0, 0x24

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->il:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->hL:Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;

    iget v0, p0, Lcom/kwad/components/ad/interstitial/aggregate/InterstitialAggregateManualTipsView;->im:I

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/interstitial/aggregate/TransViewPager;->x(I)Lcom/kwad/components/ad/interstitial/f/c;

    move-result-object p1

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/f/c;->eu()V

    :cond_2
    return-void
.end method

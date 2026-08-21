.class public final Lcom/kwad/components/ad/interstitial/d;
.super Lcom/kwad/components/core/n/d;


# instance fields
.field private final hA:Lcom/kwad/components/core/widget/g;

.field private hv:Lcom/kwad/components/ad/interstitial/f/a;

.field private hw:Z

.field private hx:Lcom/kwad/components/ad/interstitial/e/b;

.field private final hy:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

.field private hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

.field private final mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mTimerHelper:Lcom/kwad/sdk/utils/bi;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/api/KsVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/n/d;-><init>(Landroid/app/Activity;)V

    new-instance p1, Lcom/kwad/components/ad/interstitial/d$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/interstitial/d$1;-><init>(Lcom/kwad/components/ad/interstitial/d;)V

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d;->hA:Lcom/kwad/components/core/widget/g;

    iput-object p4, p0, Lcom/kwad/components/ad/interstitial/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    new-instance p1, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    invoke-direct {p1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;-><init>()V

    if-eqz p3, :cond_0

    invoke-interface {p3}, Lcom/kwad/sdk/api/KsVideoPlayConfig;->isVideoSoundEnable()Z

    move-result p3

    if-eqz p3, :cond_0

    const/4 p3, 0x1

    goto :goto_0

    :cond_0
    const/4 p3, 0x0

    :goto_0
    invoke-virtual {p1, p3}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->videoSoundEnable(Z)Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    move-result-object p1

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cA()Z

    move-result p3

    invoke-virtual {p1, p3}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->dataFlowAutoStart(Z)Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig$Builder;->build()Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d;->hy:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iput-object p2, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/interstitial/d;->hw:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d;)Landroid/app/Activity;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d;->mActivity:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private cg()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cc(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d;->ch()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-static {}, Lcom/kwad/components/ad/interstitial/b/a;->cI()I

    move-result v1

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cf(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    if-ge v1, v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private ch()Z
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->aR(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/interstitial/c/a;->cK()I

    move-result v0

    sget-object v2, Lcom/kwad/sdk/core/config/c;->ali:Lcom/kwad/sdk/core/config/item/k;

    invoke-static {v2}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/k;)I

    move-result v2

    if-ge v0, v2, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method private ci()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bZ(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->bm(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d;->cg()Z

    move-result v2

    if-eqz v2, :cond_0

    new-instance v0, Lcom/kwad/components/ad/interstitial/aggregate/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/aggregate/b;-><init>(Landroid/content/Context;)V

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hv:Lcom/kwad/components/ad/interstitial/f/a;

    goto :goto_2

    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/ai;->IN()Z

    move-result v1

    if-nez v1, :cond_1

    goto :goto_1

    :cond_1
    const/4 v1, 0x2

    if-ne v0, v1, :cond_2

    new-instance v0, Lcom/kwad/components/ad/interstitial/f/e;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/f/e;-><init>(Landroid/content/Context;)V

    goto :goto_0

    :cond_2
    const/4 v1, 0x1

    if-ne v0, v1, :cond_3

    new-instance v0, Lcom/kwad/components/ad/interstitial/f/d;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/f/d;-><init>(Landroid/content/Context;)V

    goto :goto_0

    :cond_3
    new-instance v0, Lcom/kwad/components/ad/interstitial/f/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/f/c;-><init>(Landroid/content/Context;)V

    goto :goto_0

    :cond_4
    :goto_1
    new-instance v0, Lcom/kwad/components/ad/interstitial/f/c;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/f/c;-><init>(Landroid/content/Context;)V

    goto :goto_0

    :goto_2
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hv:Lcom/kwad/components/ad/interstitial/f/a;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d;->hy:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    iget-object v3, p0, Lcom/kwad/components/ad/interstitial/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-virtual {v0, v1, p0, v2, v3}, Lcom/kwad/components/ad/interstitial/f/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/ad/interstitial/d;Lcom/kwad/sdk/api/KsAdVideoPlayConfig;Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->zv:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->removeAllViews()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->zv:Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->hv:Lcom/kwad/components/ad/interstitial/f/a;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->addView(Landroid/view/View;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d;->cj()V

    return-void
.end method

.method private cj()V
    .locals 3

    new-instance v0, Lcom/kwad/components/ad/interstitial/e/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->hv:Lcom/kwad/components/ad/interstitial/f/a;

    const/16 v2, 0x64

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/ad/interstitial/e/b;-><init>(Landroid/view/View;I)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d$2;-><init>(Lcom/kwad/components/ad/interstitial/d;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/e/b;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/e/b;->sy()V

    return-void
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d;->ci()V

    return-void
.end method


# virtual methods
.method public final cf()Landroid/view/ViewGroup;
    .locals 2

    new-instance v0, Lcom/kwad/components/core/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/widget/f;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d;->hA:Lcom/kwad/components/core/widget/g;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/f;->setOrientationChangeListener(Lcom/kwad/components/core/widget/g;)V

    return-object v0
.end method

.method public final dismiss()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->dismiss()V

    invoke-static {}, Lcom/kwad/sdk/a/a/c;->yb()Lcom/kwad/sdk/a/a/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/c;->ye()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onPageDismiss()V

    :cond_0
    invoke-static {}, Lcom/kwad/components/core/e/a/h;->mU()V

    return-void
.end method

.method public final g(Landroid/view/View;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/a/h;->a(Landroid/view/Window;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d;->ci()V

    const-string p1, "interstitial"

    const-string v0, "show"

    invoke-static {p1, v0}, Lcom/kwad/sdk/i/a;->ai(Ljava/lang/String;Ljava/lang/String;)V

    sget-object p1, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->CORE_CONVERT:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;->AD_INTERSTITIAL:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    const-string v1, "adShowSuccess"

    invoke-virtual {p1, v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildMethodCheck(Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void
.end method

.method public final getLayoutId()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final getTimerHelper()Lcom/kwad/sdk/utils/bi;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/utils/bi;

    invoke-direct {v0}, Lcom/kwad/sdk/utils/bi;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    return-object v0
.end method

.method public final onBackPressed()V
    .locals 1

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cE()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->onBackPressed()V

    :cond_0
    return-void
.end method

.method public final onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/n/d;->onDetachedFromWindow()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hx:Lcom/kwad/components/ad/interstitial/e/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/e/b;->release()V

    :cond_0
    return-void
.end method

.method public final onWindowFocusChanged(Z)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/core/n/d;->onWindowFocusChanged(Z)V

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d;->hw:Z

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hv:Lcom/kwad/components/ad/interstitial/f/a;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/a;->cn()V

    return-void

    :cond_0
    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/a;->co()V

    :cond_1
    return-void
.end method

.method public final setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d;->hv:Lcom/kwad/components/ad/interstitial/f/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/f/a;->setAdInteractionListener(Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;)V

    :cond_0
    return-void
.end method

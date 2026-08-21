.class public final Lcom/kwad/components/ad/draw/b/c;
.super Lcom/kwad/components/ad/draw/a/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private ce:Landroid/view/ViewGroup;

.field private cf:Landroid/widget/TextView;

.field private cg:Landroid/widget/TextView;

.field private ch:Landroid/widget/TextView;

.field private ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

.field private cj:Landroid/animation/ValueAnimator;

.field private ck:I

.field private cl:I

.field private cm:I

.field private cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/draw/b/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/c$1;-><init>(Lcom/kwad/components/ad/draw/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    new-instance v0, Lcom/kwad/components/ad/draw/b/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/c$2;-><init>(Lcom/kwad/components/ad/draw/b/c;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/c;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/draw/b/c;->cm:I

    return p0
.end method

.method private a(ZI)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->ce:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance p2, Lcom/kwad/components/ad/draw/b/c$3;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/draw/b/c$3;-><init>(Lcom/kwad/components/ad/draw/b/c;)V

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method private ai()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bf(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/draw/b/c;->ck:I

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bg(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/draw/b/c;->cl:I

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bh(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/draw/b/c;->cm:I

    return-void
.end method

.method private aj()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42300000    # 44.0f

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    invoke-static {v0, v1, v2}, Lcom/kwad/components/core/t/m;->b(Landroid/view/View;II)Landroid/animation/ValueAnimator;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cj:Landroid/animation/ValueAnimator;

    new-instance v1, Landroid/view/animation/DecelerateInterpolator;

    const/high16 v2, 0x40000000    # 2.0f

    invoke-direct {v1, v2}, Landroid/view/animation/DecelerateInterpolator;-><init>(F)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->setInterpolator(Landroid/animation/TimeInterpolator;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cj:Landroid/animation/ValueAnimator;

    const-wide/16 v1, 0x12c

    invoke-virtual {v0, v1, v2}, Landroid/animation/ValueAnimator;->setDuration(J)Landroid/animation/ValueAnimator;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cj:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    :cond_1
    :goto_0
    return-void
.end method

.method private ak()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cj:Landroid/animation/ValueAnimator;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->removeAllListeners()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cj:Landroid/animation/ValueAnimator;

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->cancel()V

    :cond_0
    return-void
.end method

.method private al()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/b/c;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/draw/b/c;->cl:I

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/draw/b/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c;->al()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/draw/b/c;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/draw/b/c;->ck:I

    return p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/draw/b/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c;->aj()V

    return-void
.end method

.method static synthetic g(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/draw/b/c;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    return-object p0
.end method

.method static synthetic j(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method static synthetic l(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method

.method static synthetic m(Lcom/kwad/components/ad/draw/b/c;)Lcom/kwad/components/ad/draw/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c;->ai()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    invoke-virtual {v3}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->getMax()I

    move-result v3

    invoke-virtual {v0, v2, v3}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->e(Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ce:Landroid/view/ViewGroup;

    const/4 v2, 0x0

    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ce:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cf:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cf:Landroid/widget/TextView;

    invoke-virtual {v0, v2}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cf:Landroid/widget/TextView;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cg:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ce:Landroid/view/ViewGroup;

    if-ne p1, v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c;->al()V

    const/4 p1, 0x0

    const/4 v0, 0x2

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/draw/b/c;->a(ZI)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c;->al()V

    invoke-direct {p0, v1, v1}, Lcom/kwad/components/ad/draw/b/c;->a(ZI)V

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    if-ne p1, v0, :cond_2

    invoke-direct {p0, v1, v1}, Lcom/kwad/components/ad/draw/b/c;->a(ZI)V

    :cond_2
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ce:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cf:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_des:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->cg:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_normal_convert_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ch:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_light_convert_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->ci:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    const/16 v1, 0x10

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->setTextSize(I)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onUnbind()V

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c;->ak()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-eqz v1, :cond_0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->b(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

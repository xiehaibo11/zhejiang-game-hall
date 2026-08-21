.class public final Lcom/kwad/components/ad/splashscreen/c/n;
.super Lcom/kwad/components/ad/splashscreen/c/e;


# instance fields
.field private CY:Lcom/kwad/components/ad/splashscreen/f/a;

.field private DA:D

.field private Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

.field private Dv:Landroid/widget/TextView;

.field private Dw:Landroid/widget/ImageView;

.field private Dx:Lcom/kwad/components/ad/splashscreen/widget/c;

.field private Dy:Lcom/kwad/components/ad/splashscreen/widget/KsSplashSlidePathView;

.field private Dz:Lcom/kwad/components/core/e/d/c;

.field private gQ:Landroid/widget/TextView;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private mStartTime:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/n;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/n;)D
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->DA:D

    return-wide v0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/n;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/c/n;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/c/n;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/splashscreen/c/n;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/splashscreen/c/n;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mStartTime:J

    return-wide v0
.end method

.method static synthetic h(Lcom/kwad/components/ad/splashscreen/c/n;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->lo()V

    return-void
.end method

.method static synthetic i(Lcom/kwad/components/ad/splashscreen/c/n;)Lcom/kwad/components/ad/splashscreen/widget/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dx:Lcom/kwad/components/ad/splashscreen/widget/c;

    return-object p0
.end method

.method private initView()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->adDataV2:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdDataV2;->splashInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashInfo;->interactionInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$AdInteractionInfo;->slideInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->convertDistance:I

    int-to-double v0, v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->DA:D

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->style:I

    new-instance v1, Lcom/kwad/components/ad/splashscreen/widget/c;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2, v0}, Lcom/kwad/components/ad/splashscreen/widget/c;-><init>(Landroid/content/Context;I)V

    iput-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dx:Lcom/kwad/components/ad/splashscreen/widget/c;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dw:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dw:Landroid/widget/ImageView;

    new-instance v2, Lcom/kwad/components/ad/splashscreen/c/n$3;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/splashscreen/c/n$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/n;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->post(Ljava/lang/Runnable;)Z

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->title:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->gQ:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->title:Ljava/lang/String;

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_0
    if-eqz v0, :cond_3

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->gQ:Landroid/widget/TextView;

    const-string v1, "\u5411\u53f3\u6ed1\u52a8"

    goto :goto_0

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->gQ:Landroid/widget/TextView;

    const-string v1, "\u5411\u5de6\u6ed1\u52a8"

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->gQ:Landroid/widget/TextView;

    const-string v1, "\u5411\u4e0a\u6ed1\u52a8"

    goto :goto_0

    :goto_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->subtitle:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dv:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->subtitle:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dz:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v2}, Lcom/kwad/components/core/e/d/c;->nw()I

    move-result v2

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/d;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;I)Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dv:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dv:Landroid/widget/TextView;

    const-string v1, "\u8df3\u8f6c\u8be6\u60c5\u9875\u6216\u8005\u7b2c\u4e09\u65b9\u5e94\u7528"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic j(Lcom/kwad/components/ad/splashscreen/c/n;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dv:Landroid/widget/TextView;

    return-object p0
.end method

.method private ln()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/n$4;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, p0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/n$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/n;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dz:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    return-void

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/f/a;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method private lo()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/report/z$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Du:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$SplashSlideInfo;->style:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/z$b;->cu(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    const/16 v3, 0xbe

    invoke-static {v1, v3, v0, v2}, Lcom/kwad/sdk/core/report/a;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;ILcom/kwad/sdk/core/report/z$b;Lorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a;->sb()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/webview/b/d/a;->aR(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/n$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/n$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/n;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dz:Lcom/kwad/components/core/e/d/c;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->initView()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/n;->ln()V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mStartTime:J

    sget v0, Lcom/kwad/sdk/R$id;->ksad_slide_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_slide_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->gQ:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_slide_actiontext:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_slideView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dw:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_root_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_slideTouchView:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/n;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/KsSplashSlidePathView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/n;->Dy:Lcom/kwad/components/ad/splashscreen/widget/KsSplashSlidePathView;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/n$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/n$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/n;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/KsSplashSlidePathView;->setOnSlideTouchListener(Lcom/kwad/components/ad/splashscreen/widget/KsSplashSlidePathView$a;)V

    return-void
.end method

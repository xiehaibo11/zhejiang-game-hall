.class public final Lcom/kwad/components/ad/splashscreen/c/c;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private CE:Landroid/widget/TextView;

.field private CF:Lcom/kwad/components/ad/splashscreen/widget/a;

.field private CG:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

.field private CH:Z

.field private CI:Landroid/view/View;

.field private rZ:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CH:Z

    return-void
.end method

.method private a(Landroid/view/ViewGroup;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_preload_tips:I

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CE:Landroid/widget/TextView;

    iget-object p1, p2, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CG:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CE:Landroid/widget/TextView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CG:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    if-eqz p1, :cond_0

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadTips:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CE:Landroid/widget/TextView;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CE:Landroid/widget/TextView;

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CG:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object p2, p2, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadTips:Ljava/lang/String;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CE:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/c;->kR()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/c;)Lcom/kwad/components/ad/splashscreen/widget/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/c;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CI:Landroid/view/View;

    return-object p0
.end method

.method private kQ()Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;
    .locals 4

    new-instance v0, Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->imageDisplaySecond:I

    if-gtz v1, :cond_0

    const/4 v1, 0x5

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->imageDisplaySecond:I

    :goto_0
    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->videoDisplaySecond:I

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v3

    invoke-static {v2, v3}, Ljava/lang/Math;->min(II)I

    move-result v2

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v3}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v3

    if-eqz v3, :cond_1

    move v1, v2

    :cond_1
    iput v1, v0, Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;->skipSecond:I

    return-object v0
.end method

.method private kR()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/h;->kI()V

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v1, :cond_0

    :try_start_0
    const-string v1, "duration"

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    invoke-virtual {v2}, Lcom/kwad/components/ad/splashscreen/e/a;->getCurrentPosition()J

    move-result-wide v2

    invoke-virtual {v0, v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    new-instance v1, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v2}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v2

    iput-wide v2, v1, Lcom/kwad/sdk/core/report/z$a;->duration:J

    :cond_1
    new-instance v2, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v2}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/4 v3, 0x1

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/j;->ch(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    const/16 v3, 0x16

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2, v1, v0}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    return-void
.end method

.method private declared-synchronized kT()V
    .locals 3

    monitor-enter p0

    :try_start_0
    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CH:Z

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    if-nez v0, :cond_0

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ci(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->cj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0x7c

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CH:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :cond_2
    :goto_0
    monitor-exit p0

    return-void

    :cond_3
    :goto_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method private static r(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->cg(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private s(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_skip_view_area:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CI:Landroid/view/View;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ch(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->skipButtonPosition:I

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CI:Landroid/view/View;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CI:Landroid/view/View;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/c$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/c;)V

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CI:Landroid/view/View;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/c$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/c$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/c;)V

    invoke-virtual {p1, v0}, Landroid/view/View;->post(Ljava/lang/Runnable;)Z

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CI:Landroid/view/View;

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 2

    const-string v0, "SkipAdPresenter"

    const-string v1, "onPageVisible"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/a;->x(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/c;->kT()V

    return-void
.end method

.method public final aL()V
    .locals 2

    const-string v0, "SkipAdPresenter"

    const-string v1, "onPageInvisible"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/a;->w(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    const-string v0, "SkipAdPresenter"

    const-string v1, "onBind"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/h;->p(Lcom/kwad/sdk/core/response/model/AdInfo;)Landroid/view/ViewGroup;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/c;->a(Landroid/view/ViewGroup;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/components/ad/splashscreen/c/c;->r(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_skip_view:I

    goto :goto_0

    :cond_0
    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_circle_skip_view:I

    :goto_0
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/a;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/c;->kQ()Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-interface {v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/widget/a;->a(Lcom/kwad/components/ad/splashscreen/local/SplashSkipViewModel;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/c$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/c$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/c;)V

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/a;->setOnViewListener(Lcom/kwad/components/ad/splashscreen/widget/SkipView$a;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->rZ:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/c;->s(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final kS()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/c$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/c$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/c;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/c;->CF:Lcom/kwad/components/ad/splashscreen/widget/a;

    invoke-interface {v0}, Lcom/kwad/components/ad/splashscreen/widget/a;->bd()V

    return-void
.end method

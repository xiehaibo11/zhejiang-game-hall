.class public final Lcom/kwad/components/ad/splashscreen/c/g;
.super Lcom/kwad/components/ad/splashscreen/c/e;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->kZ()V

    return-void
.end method

.method private static j(Landroid/view/View;I)V
    .locals 1

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v0, v0, Landroid/widget/FrameLayout$LayoutParams;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    iput p1, v0, Landroid/widget/FrameLayout$LayoutParams;->topMargin:I

    invoke-virtual {p0, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v0, v0, Landroid/widget/LinearLayout$LayoutParams;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Landroid/view/View;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/LinearLayout$LayoutParams;

    iput p1, v0, Landroid/widget/LinearLayout$LayoutParams;->topMargin:I

    invoke-virtual {p0, v0}, Landroid/view/View;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_1
    return-void
.end method

.method private kY()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/g$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/g$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/g;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method private kZ()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/splashscreen/h;->p(Lcom/kwad/sdk/core/response/model/AdInfo;)Landroid/view/ViewGroup;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$id;->ksad_preload_container:I

    invoke-virtual {v1, v2}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v1

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/g;->t(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v2

    invoke-static {v1, v2}, Lcom/kwad/components/ad/splashscreen/c/g;->j(Landroid/view/View;I)V

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/f/c;->v(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_logo_container:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41400000    # 12.0f

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    add-int/2addr v1, v2

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/c/g;->j(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_sound:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42000000    # 32.0f

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    add-int/2addr v1, v2

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/c/g;->j(Landroid/view/View;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_skip_view_area:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v1

    invoke-static {v0, v1}, Lcom/kwad/components/ad/splashscreen/c/g;->j(Landroid/view/View;I)V

    :cond_0
    return-void
.end method

.method private t(Lcom/kwad/sdk/core/response/model/AdInfo;)I
    .locals 1

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/f/c;->v(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getActivity()Landroid/app/Activity;

    move-result-object p1

    const/high16 v0, 0x42000000    # 32.0f

    :goto_0
    invoke-static {p1, v0}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result p1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->getStatusBarHeight(Landroid/content/Context;)I

    move-result v0

    add-int/2addr p1, v0

    return p1

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->getActivity()Landroid/app/Activity;

    move-result-object p1

    const/high16 v0, 0x41800000    # 16.0f

    goto :goto_0
.end method


# virtual methods
.method public final ah()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/g;->kY()V

    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    return-void
.end method

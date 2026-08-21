.class public final Lcom/kwad/components/ad/splashscreen/c/q;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private CQ:Z

.field private volatile DP:Z

.field private DQ:Z

.field private DR:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

.field private DS:Lcom/kwad/components/core/video/k;

.field private gG:Landroid/widget/ImageView;

.field private gH:Lcom/kwad/sdk/utils/h$a;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DQ:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CQ:Z

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/q$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/q$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/q;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gH:Lcom/kwad/sdk/utils/h$a;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/q$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/q$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/q;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DS:Lcom/kwad/components/core/video/k;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    return-object p0
.end method

.method private static a(Lcom/kwad/components/ad/splashscreen/widget/SkipView;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->cj(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->setTimerBtnVisible(Z)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/q;Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/q;->r(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/q;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/q;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/q;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DQ:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/q;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/c/q;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/c/q;)Lcom/kwad/components/ad/splashscreen/widget/SkipView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DR:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/splashscreen/c/q;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DQ:Z

    return p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/splashscreen/c/q;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CQ:Z

    return p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/splashscreen/c/q;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/q;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
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


# virtual methods
.method public final aK()V
    .locals 0

    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/e/a;->pause()V

    :cond_0
    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_video_player:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DS:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v2}, Lcom/kwad/components/ad/splashscreen/e/a;->a(Lcom/kwad/components/core/video/k;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-virtual {v0, v2}, Lcom/kwad/components/ad/splashscreen/h;->p(Lcom/kwad/sdk/core/response/model/AdInfo;)Landroid/view/ViewGroup;

    move-result-object v0

    sget v2, Lcom/kwad/sdk/R$id;->ksad_splash_skip_view:I

    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DR:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/c/q;->r(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DR:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0, v2}, Lcom/kwad/components/ad/splashscreen/c/q;->a(Lcom/kwad/components/ad/splashscreen/widget/SkipView;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->mute:I

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-eq v0, v2, :cond_4

    const/4 v2, 0x3

    if-eq v0, v2, :cond_2

    iput-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/k;->bR(Landroid/content/Context;)I

    move-result v0

    if-lez v0, :cond_3

    goto :goto_0

    :cond_3
    move v3, v1

    :cond_4
    :goto_0
    iput-boolean v3, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    :goto_1
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/q;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v0

    if-eqz v0, :cond_5

    iput-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-boolean v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    invoke-virtual {v0, v2, v1}, Lcom/kwad/components/ad/splashscreen/e/a;->setAudioEnabled(ZZ)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v2}, Lcom/kwad/components/ad/splashscreen/e/a;->a(Lcom/kwad/sdk/utils/h$a;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v2, Lcom/kwad/sdk/R$id;->ksad_splash_sound:I

    invoke-virtual {v0, v2}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/components/ad/splashscreen/f/c;->v(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    const/16 v2, 0x33

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {v2, v0}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    instance-of v2, v0, Landroid/view/ViewGroup$MarginLayoutParams;

    if-eqz v2, :cond_7

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x42000000    # 32.0f

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/view/ViewGroup$MarginLayoutParams;->topMargin:I

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {v2}, Landroid/widget/ImageView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v2, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v2

    iput v2, v0, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    :cond_7
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->speakerIconUrl:Ljava/lang/String;

    goto :goto_2

    :cond_8
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->speakerMuteIconUrl:Ljava/lang/String;

    :goto_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    goto :goto_3

    :cond_9
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/q;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    sget v2, Lcom/kwad/sdk/R$drawable;->ksad_splash_sound_selector:I

    invoke-virtual {v1, v2}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageDrawable(Landroid/graphics/drawable/Drawable;)V

    :goto_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    iget-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DP:Z

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setSelected(Z)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gG:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/q$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/q$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/q;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onDestroy()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CQ:Z

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DS:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/e/a;->b(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Cd:Lcom/kwad/components/ad/splashscreen/e/a;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/q;->gH:Lcom/kwad/sdk/utils/h$a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/e/a;->b(Lcom/kwad/sdk/utils/h$a;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DR:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->DR:Lcom/kwad/components/ad/splashscreen/widget/SkipView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/SkipView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/q;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->b(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

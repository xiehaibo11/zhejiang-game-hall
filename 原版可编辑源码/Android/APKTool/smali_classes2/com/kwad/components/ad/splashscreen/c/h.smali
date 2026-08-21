.class public final Lcom/kwad/components/ad/splashscreen/c/h;
.super Lcom/kwad/components/ad/splashscreen/c/e;


# instance fields
.field private CO:Landroid/widget/ImageView;

.field private CP:Landroid/widget/ImageView;

.field private CQ:Z

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CQ:Z

    return-void
.end method

.method private a(Landroid/widget/ImageView;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->splash_play_card_view:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setClipChildren(Z)V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/h$4;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/ad/splashscreen/c/h$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/h;Landroid/widget/ImageView;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private a(Landroid/widget/ImageView;Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->splash_play_card_view:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setClipChildren(Z)V

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bT(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$CutRuleInfo;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/h$3;

    invoke-direct {v1, p0, p1, p2, v0}, Lcom/kwad/components/ad/splashscreen/c/h$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/h;Landroid/widget/ImageView;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/sdk/core/response/model/AdInfo$CutRuleInfo;)V

    invoke-virtual {p1, v1}, Landroid/widget/ImageView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/h;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CQ:Z

    return p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/h;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/h;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/h;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private k(Ljava/lang/String;I)V
    .locals 2

    const/4 v0, 0x0

    if-nez p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CO:Landroid/widget/ImageView;

    sget-object v1, Landroid/widget/ImageView$ScaleType;->CENTER_CROP:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, v1}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CO:Landroid/widget/ImageView;

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CO:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/h$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/h$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/h;)V

    :goto_0
    invoke-static {p2, p1, v0, v1}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    return-void

    :cond_0
    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    invoke-virtual {p2, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    sget-object p2, Lcom/kwad/components/ad/splashscreen/b/a;->Cy:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {p2}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {p0, p2, v0}, Lcom/kwad/components/ad/splashscreen/c/h;->a(Landroid/widget/ImageView;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    goto :goto_1

    :cond_1
    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/splashscreen/c/h;->a(Landroid/widget/ImageView;)V

    :goto_1
    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/h$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/h$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/h;)V

    goto :goto_0
.end method


# virtual methods
.method public final ah()V
    .locals 7

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_background:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_splash_foreground:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CO:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v0

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CP:Landroid/widget/ImageView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/h;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v1

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->source:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/h;->getContext()Landroid/content/Context;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->kB()Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/h;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->preloadId:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/components/ad/splashscreen/SplashPreloadManager;->X(Ljava/lang/String;)Ljava/io/File;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->length()J

    move-result-wide v3

    const-wide/16 v5, 0x0

    cmp-long v3, v3, v5

    if-lez v3, :cond_0

    invoke-static {v2}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object v0

    :cond_0
    invoke-direct {p0, v0, v1}, Lcom/kwad/components/ad/splashscreen/c/h;->k(Ljava/lang/String;I)V

    :cond_1
    return-void
.end method

.method public final onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onDestroy()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/h;->CQ:Z

    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    return-void
.end method

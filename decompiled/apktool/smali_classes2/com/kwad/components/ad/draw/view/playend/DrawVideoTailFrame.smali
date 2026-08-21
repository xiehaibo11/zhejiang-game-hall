.class public Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;
.super Landroid/widget/FrameLayout;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

.field private cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private dA:Landroid/view/ViewGroup;

.field private dB:Landroid/widget/TextView;

.field private dC:Landroid/widget/TextView;

.field private dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

.field private ds:Landroid/widget/ImageView;

.field private dt:Landroid/view/ViewGroup;

.field private du:Landroid/widget/ImageView;

.field private dv:Landroid/widget/TextView;

.field private dw:Lcom/kwad/components/ad/widget/AppScoreView;

.field private dx:Landroid/widget/TextView;

.field private dy:Landroid/widget/TextView;

.field private dz:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->D(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->D(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->D(Landroid/content/Context;)V

    return-void
.end method

.method private D(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_draw_video_tailframe:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_video_cover:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->ds:Landroid/widget/ImageView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_container:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dt:Landroid/view/ViewGroup;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_icon:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->du:Landroid/widget/ImageView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_name:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dv:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_score:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/widget/AppScoreView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dw:Lcom/kwad/components/ad/widget/AppScoreView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_download_count:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dx:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_ad_desc:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dy:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_app_download_btn:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dz:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    const/16 v0, 0xf

    invoke-virtual {p1, v0}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->setTextSize(I)V

    sget p1, Lcom/kwad/sdk/R$id;->ksad_h5_container:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dA:Landroid/view/ViewGroup;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_h5_ad_desc:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dB:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_h5_open_btn:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dC:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_draw_tailframe_logo:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dz:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)Lcom/kwad/sdk/core/view/AdBaseFrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-object p0
.end method

.method private getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame$1;-><init>(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)V

    return-object v0
.end method


# virtual methods
.method public final aP()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-eqz v1, :cond_0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->d(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_1
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 5

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v0

    iget-object v1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->coverUrl:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {v2, p1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    iget p1, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    if-lez p1, :cond_1

    if-le p1, v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->getWidth()I

    move-result v3

    if-nez v3, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->getWidth()I

    move-result v2

    :goto_0
    int-to-float v3, v2

    int-to-float v0, v0

    int-to-float p1, p1

    div-float/2addr v0, p1

    mul-float/2addr v3, v0

    float-to-int p1, v3

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->ds:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iput v2, v0, Landroid/view/ViewGroup$LayoutParams;->width:I

    iput p1, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->ds:Landroid/widget/ImageView;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    const/16 v0, 0x8

    const/4 v1, 0x0

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->du:Landroid/widget/ImageView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v4, 0xb

    invoke-static {p1, v2, v3, v4}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dv:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->as(Lcom/kwad/sdk/core/response/model/AdInfo;)F

    move-result p1

    const/high16 v2, 0x40400000    # 3.0f

    cmpl-float v2, p1, v2

    if-ltz v2, :cond_3

    const/4 v2, 0x1

    goto :goto_1

    :cond_3
    move v2, v1

    :goto_1
    if-eqz v2, :cond_4

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dw:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v2, p1}, Lcom/kwad/components/ad/widget/AppScoreView;->setScore(F)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dw:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {p1, v1}, Lcom/kwad/components/ad/widget/AppScoreView;->setVisibility(I)V

    :cond_4
    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dx:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->ar(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dy:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dt:Landroid/view/ViewGroup;

    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dA:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    goto :goto_2

    :cond_5
    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dB:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dC:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dt:Landroid/view/ViewGroup;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dA:Landroid/view/ViewGroup;

    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :goto_2
    iget-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dz:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    invoke-virtual {p1, p0}, Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    invoke-virtual {p0, p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dz:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    :goto_0
    new-instance v2, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v3, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dz:Lcom/kwad/components/ad/draw/view/DrawDownloadProgressBar;

    if-ne p1, v2, :cond_1

    goto :goto_1

    :cond_1
    const/4 v1, 0x0

    :goto_1
    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame$2;-><init>(Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method public final release()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-eqz v1, :cond_0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    return-void
.end method

.method public setAdBaseFrameLayout(Lcom/kwad/sdk/core/view/AdBaseFrameLayout;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->dr:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    return-void
.end method

.method public setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    return-void
.end method

.method public setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    return-void
.end method

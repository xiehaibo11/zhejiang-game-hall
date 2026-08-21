.class public final Lcom/kwad/components/ad/interstitial/d/f;
.super Lcom/kwad/components/ad/interstitial/d/b;


# instance fields
.field private bG:Lcom/kwad/components/core/widget/a/b;

.field private ex:Lcom/kwad/sdk/core/video/videoview/a;

.field private jc:Lcom/kwad/components/core/widget/KsAutoCloseView;

.field private jf:Lcom/kwad/components/ad/interstitial/d/c;

.field private kJ:Z

.field private kK:Lcom/kwad/sdk/widget/KSFrameLayout;

.field private kL:Lcom/kwad/sdk/core/h/d;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/b;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/f$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/interstitial/d/f$4;-><init>(Lcom/kwad/components/ad/interstitial/d/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->kL:Lcom/kwad/sdk/core/h/d;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/f;Lcom/kwad/sdk/widget/KSFrameLayout;)Lcom/kwad/sdk/widget/KSFrameLayout;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->kK:Lcom/kwad/sdk/widget/KSFrameLayout;

    return-object p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/f;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/f;->dG()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/f;II)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/interstitial/d/f;->e(II)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/interstitial/d/f;Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/interstitial/d/f;->n(Z)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/ad/interstitial/d/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/interstitial/d/f;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->kJ:Z

    return p1
.end method

.method static synthetic c(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/sdk/core/video/videoview/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    return-object p0
.end method

.method private static c(Lcom/kwad/sdk/core/response/model/AdInfo;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->autoCloseTime:I

    const/4 v1, 0x0

    if-gtz v0, :cond_0

    return v1

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/core/response/b/a;->bv(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p0

    if-eqz p0, :cond_1

    return v1

    :cond_1
    const/4 p0, 0x1

    return p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private dG()V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v1

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v4}, Lcom/kwad/components/ad/interstitial/f/f;->a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {v0, v3, v3}, Lcom/kwad/components/ad/interstitial/f/f;->b(ZZ)V

    invoke-virtual {v0, v2}, Lcom/kwad/components/ad/interstitial/f/f;->t(Z)V

    goto/16 :goto_1

    :cond_0
    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/interstitial/f/f;->t(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bi(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/kwad/sdk/core/response/model/b;->getUrl()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1, v4}, Lcom/kwad/components/ad/interstitial/f/f;->a(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {v0, v3, v2}, Lcom/kwad/components/ad/interstitial/f/f;->b(ZZ)V

    goto :goto_0

    :cond_1
    invoke-virtual {v0, v2, v2}, Lcom/kwad/components/ad/interstitial/f/f;->b(ZZ)V

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    iput-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/video/videoview/a;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/video/videoview/a;->getParent()Landroid/view/ViewParent;

    move-result-object v1

    check-cast v1, Landroid/view/ViewGroup;

    check-cast v1, Landroid/view/ViewGroup;

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v1, v4}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_3

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v1

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->height:I

    int-to-float v1, v1

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v4}, Lcom/kwad/sdk/core/response/b/a;->aN(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v4

    iget v4, v4, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->width:I

    int-to-float v4, v4

    div-float/2addr v1, v4

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0, v1, v4}, Lcom/kwad/components/ad/interstitial/f/f;->a(FLcom/kwad/sdk/core/video/videoview/a;)V

    :cond_3
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->dJ:Lcom/kwad/sdk/api/KsAdVideoPlayConfig;

    invoke-interface {v1}, Lcom/kwad/sdk/api/KsAdVideoPlayConfig;->isVideoSoundEnable()Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->u(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    new-instance v5, Lcom/kwad/components/ad/interstitial/d/f$5;

    invoke-direct {v5, p0, v1, v0}, Lcom/kwad/components/ad/interstitial/d/f$5;-><init>(Lcom/kwad/components/ad/interstitial/d/f;ILcom/kwad/components/ad/interstitial/f/f;)V

    invoke-virtual {v4, v5}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/core/video/a$c;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-virtual {v0, v1, v4}, Lcom/kwad/components/ad/interstitial/f/f;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;)V

    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/interstitial/f/f;->t(Z)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jq:Ljava/util/List;

    new-instance v4, Lcom/kwad/components/ad/interstitial/d/f$6;

    invoke-direct {v4, p0, v0}, Lcom/kwad/components/ad/interstitial/d/f$6;-><init>(Lcom/kwad/components/ad/interstitial/d/f;Lcom/kwad/components/ad/interstitial/f/f;)V

    invoke-interface {v1, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/f;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v6, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/f;->getBlurBgView()Landroid/view/View;

    move-result-object v7

    invoke-virtual {v1, v4, v5, v6, v7}, Lcom/kwad/components/ad/interstitial/d/c;->a(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/sdk/core/response/model/AdTemplate;Landroid/view/View;)V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->I(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_4

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    :cond_4
    invoke-virtual {v0}, Lcom/kwad/components/ad/interstitial/f/f;->getTailFrameView()Landroid/widget/ImageView;

    move-result-object v0

    iget-object v4, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v4}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/d/f;->c(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jc:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-virtual {v0, v3}, Lcom/kwad/components/core/widget/KsAutoCloseView;->aR(Z)V

    invoke-direct {p0}, Lcom/kwad/components/ad/interstitial/d/f;->dH()V

    return-void

    :cond_5
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jc:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/widget/KsAutoCloseView;->aR(Z)V

    return-void
.end method

.method private dH()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->autoCloseTime:I

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aU(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->G(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v1

    invoke-static {v0, v1}, Ljava/lang/Math;->min(II)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v1}, Lcom/kwad/components/ad/interstitial/f/f;->ew()V

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    invoke-virtual {v1}, Lcom/kwad/components/ad/interstitial/f/f;->ex()V

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jc:Lcom/kwad/components/core/widget/KsAutoCloseView;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/widget/KsAutoCloseView;->V(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0xa5

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic e(Lcom/kwad/components/ad/interstitial/d/f;)Lcom/kwad/components/core/widget/KsAutoCloseView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jc:Lcom/kwad/components/core/widget/KsAutoCloseView;

    return-object p0
.end method

.method private e(II)V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/interstitial/d/c$b;

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/f;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c$b;-><init>(Landroid/content/Context;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->kJ:Z

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c$b;->k(Z)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->kK:Lcom/kwad/sdk/widget/KSFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/widget/KSFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c$b;->a(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/ad/interstitial/d/c$b;->y(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/interstitial/d/c$b;->z(I)Lcom/kwad/components/ad/interstitial/d/c$b;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$b;)V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/b;->cG()Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 p2, 0x0

    const/4 v0, -0x1

    iget-object v1, p1, Lcom/kwad/components/ad/interstitial/d/c;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {p1, p2, v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    :cond_0
    return-void
.end method

.method static synthetic f(Lcom/kwad/components/ad/interstitial/d/f;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/f;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private n(Z)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez v0, :cond_0

    if-nez p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->ji:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jj:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    invoke-static {v0}, Lcom/kwad/components/ad/interstitial/e/a;->c(Lcom/kwad/components/ad/interstitial/d/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v0, 0x1

    iput-boolean v0, p1, Lcom/kwad/components/ad/interstitial/d/c;->jj:Z

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/f;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/ad/interstitial/b/b;->K(Landroid/content/Context;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    const/4 v1, -0x1

    iget-object v2, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    invoke-virtual {v0, p1, v1, v2}, Lcom/kwad/components/ad/interstitial/d/c;->a(ZILcom/kwad/sdk/core/video/videoview/a;)V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hG:Lcom/kwad/components/ad/interstitial/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/interstitial/d;->dismiss()V

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->ex:Lcom/kwad/sdk/core/video/videoview/a;

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/videoview/a;->release()V

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-boolean p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->jk:Z

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object p1, p1, Lcom/kwad/components/ad/interstitial/d/c;->hz:Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;

    invoke-interface {p1}, Lcom/kwad/sdk/api/KsInterstitialAd$AdInteractionListener;->onAdClosed()V

    :cond_2
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/interstitial/d/f;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/interstitial/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->l(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/f$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/f$2;-><init>(Lcom/kwad/components/ad/interstitial/d/f;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/d/c;->a(Lcom/kwad/components/ad/interstitial/d/c$e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v0, v0, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/f$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/f$3;-><init>(Lcom/kwad/components/ad/interstitial/d/f;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/interstitial/f/f;->setViewListener(Lcom/kwad/components/ad/interstitial/f/g;)V

    new-instance v0, Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->jf:Lcom/kwad/components/ad/interstitial/d/c;

    iget-object v1, v1, Lcom/kwad/components/ad/interstitial/d/c;->jg:Lcom/kwad/components/ad/interstitial/f/f;

    const/16 v2, 0x64

    invoke-direct {v0, v1, v2}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->kL:Lcom/kwad/sdk/core/h/d;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_interstitial_auto_close:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/interstitial/d/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsAutoCloseView;

    iput-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->jc:Lcom/kwad/components/core/widget/KsAutoCloseView;

    new-instance v1, Lcom/kwad/components/ad/interstitial/d/f$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/interstitial/d/f$1;-><init>(Lcom/kwad/components/ad/interstitial/d/f;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsAutoCloseView;->setViewListener(Lcom/kwad/components/core/widget/KsAutoCloseView$a;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/interstitial/d/b;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->bG:Lcom/kwad/components/core/widget/a/b;

    iget-object v1, p0, Lcom/kwad/components/ad/interstitial/d/f;->kL:Lcom/kwad/sdk/core/h/d;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/a/b;->b(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/interstitial/d/f;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sz()V

    return-void
.end method

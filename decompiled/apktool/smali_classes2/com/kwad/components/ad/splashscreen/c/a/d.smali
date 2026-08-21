.class public final Lcom/kwad/components/ad/splashscreen/c/a/d;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

.field private Em:Landroid/widget/ImageView;

.field private En:Landroid/widget/TextView;

.field private Eo:Landroid/widget/TextView;

.field private Er:Landroid/view/ViewGroup;

.field private Es:Landroid/widget/ImageView;

.field private Et:Lcom/kwad/components/core/widget/KsLogoView;

.field private Eu:Landroid/widget/TextView;

.field private Ev:Landroid/widget/TextView;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method

.method private static a(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    invoke-direct {v0}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;-><init>()V

    const/16 v1, 0x14

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->setBlurRadius(I)Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat$Builder;->build()Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/a/d$2;

    invoke-direct {v1}, Lcom/kwad/components/ad/splashscreen/c/a/d$2;-><init>()V

    invoke-static {p0, p1, p2, v0, v1}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/DisplayImageOptionsCompat;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/a/d;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/a/d;->ac(Ljava/lang/String;)V

    return-void
.end method

.method private ac(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eu:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private initView()V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_endcard_view_stub:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object v0

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_end_card_native_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    :goto_0
    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Er:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_splash_end_card_native_bg:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Es:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Em:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_appname:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->En:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_appdesc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eo:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Et:Lcom/kwad/components/core/widget/KsLogoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_btn_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eu:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_btn_sub_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ev:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_close_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    return-void
.end method

.method private lw()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/a/d$1;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, p0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/a/d$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/a/d;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_1
    return-void
.end method

.method private lx()V
    .locals 6

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Er:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Es:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aM(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;

    move-result-object v3

    iget-object v3, v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo$MaterialFeature;->materialUrl:Ljava/lang/String;

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2, v3, v4}, Lcom/kwad/components/ad/splashscreen/c/a/d;->a(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Em:Landroid/widget/ImageView;

    sget v3, Lcom/kwad/sdk/R$drawable;->ksad_default_app_icon:I

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setImageResource(I)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Em:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v4, v4, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v5, 0x18

    invoke-static {v2, v3, v4, v5}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->En:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eo:Landroid/widget/TextView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Et:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v3, v3, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v2

    if-nez v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eu:Landroid/widget/TextView;

    const-string v3, "\u70b9\u51fb\u67e5\u770b"

    invoke-virtual {v2, v3}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ev:Landroid/widget/TextView;

    invoke-virtual {v2, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ev:Landroid/widget/TextView;

    const-string v2, "\u8df3\u8f6c\u8be6\u60c5\u9875/\u7b2c\u4e09\u65b9\u5e94\u7528"

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_0

    :cond_0
    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->u(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->a(Lcom/kwad/sdk/core/response/model/AdInfo;)V

    return-void
.end method

.method private u(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0}, Lcom/kwad/components/core/e/d/c;->nw()I

    move-result v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->cV(Lcom/kwad/sdk/core/response/model/AdInfo;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;

    move-result-object v1

    const/16 v2, 0x8

    if-eq v0, v2, :cond_2

    const/16 v2, 0xc

    if-eq v0, v2, :cond_1

    iget-object v0, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;->adActionDescription:Ljava/lang/String;

    goto :goto_0

    :cond_1
    iget-object v0, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;->openAppLabel:Ljava/lang/String;

    goto :goto_0

    :cond_2
    iget-object v0, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$DownloadTexts;->installAppLabel:Ljava/lang/String;

    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eu:Landroid/widget/TextView;

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Eu:Landroid/widget/TextView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method


# virtual methods
.method public final aK()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->aK()V

    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->aL()V

    return-void
.end method

.method public final ah()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v1, 0x57

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->lw()V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->lx()V

    return-void
.end method

.method public final onCreate()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/d;->initView()V

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->Ej:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->bd()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/d;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->b(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

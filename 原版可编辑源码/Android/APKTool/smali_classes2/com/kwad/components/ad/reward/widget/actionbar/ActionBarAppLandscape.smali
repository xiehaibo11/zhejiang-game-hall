.class public Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;
.super Landroid/widget/LinearLayout;

# interfaces
.implements Lcom/kwad/sdk/widget/c;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$a;
    }
.end annotation


# instance fields
.field private Bd:Lcom/kwad/components/ad/widget/AppScoreView;

.field private Be:Lcom/kwad/components/core/page/widget/TextProgressBar;

.field private Bf:Landroid/view/View;

.field private Bg:Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$a;

.field private cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

.field private du:Landroid/widget/ImageView;

.field private dv:Landroid/widget/TextView;

.field private dx:Landroid/widget/TextView;

.field private eo:Landroid/widget/TextView;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->initView()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;)Lcom/kwad/components/core/page/widget/TextProgressBar;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Be:Lcom/kwad/components/core/page/widget/TextProgressBar;

    return-object p0
.end method

.method private b(Landroid/view/View;Z)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bf:Landroid/view/View;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_0

    move v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    :goto_0
    new-instance v2, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Be:Lcom/kwad/components/core/page/widget/TextProgressBar;

    if-ne p1, v3, :cond_1

    goto :goto_1

    :cond_1
    const/4 v1, 0x0

    :goto_1
    invoke-virtual {v2, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$2;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$2;-><init>(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;Z)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;)Landroid/view/View;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bf:Landroid/view/View;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;)Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bg:Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$a;

    return-object p0
.end method

.method private getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$1;-><init>(Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->cn:Lcom/kwad/sdk/api/KsAppDownloadListener;

    return-object v0
.end method

.method private initView()V
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->getContext()Landroid/content/Context;

    move-result-object v0

    sget v1, Lcom/kwad/sdk/R$layout;->ksad_video_actionbar_app_landscape:I

    invoke-static {v0, v1, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->du:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->dv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->eo:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_score:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/AppScoreView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download_count:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->dx:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/page/widget/TextProgressBar;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Be:Lcom/kwad/components/core/page/widget/TextProgressBar;

    invoke-virtual {p0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41800000    # 16.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextDimen(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Be:Lcom/kwad/components/core/page/widget/TextProgressBar;

    const/4 v1, -0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/widget/TextProgressBar;->setTextColor(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_download_bar_cover:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bf:Landroid/view/View;

    return-void
.end method

.method private kl()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->as(Lcom/kwad/sdk/core/response/model/AdInfo;)F

    move-result v0

    const/high16 v1, 0x40400000    # 3.0f

    cmpl-float v1, v0, v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-ltz v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    if-eqz v1, :cond_1

    iget-object v4, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v4, v0}, Lcom/kwad/components/ad/widget/AppScoreView;->setScore(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v0, v3}, Lcom/kwad/components/ad/widget/AppScoreView;->setVisibility(I)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ar(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    xor-int/2addr v2, v4

    if-eqz v2, :cond_2

    iget-object v4, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->dx:Landroid/widget/TextView;

    invoke-virtual {v4, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->dx:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    :cond_2
    const/16 v0, 0x8

    if-nez v2, :cond_4

    if-eqz v1, :cond_3

    goto :goto_1

    :cond_3
    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->eo:Landroid/widget/TextView;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v2}, Lcom/kwad/sdk/core/response/b/a;->an(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bd:Lcom/kwad/components/ad/widget/AppScoreView;

    invoke-virtual {v1, v0}, Lcom/kwad/components/ad/widget/AppScoreView;->setVisibility(I)V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->dx:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->eo:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    return-void

    :cond_4
    :goto_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->eo:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 1

    const/4 v0, 0x1

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->b(Landroid/view/View;Z)V

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/e/d/c;Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$a;)V
    .locals 1

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iput-object p3, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bg:Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape$a;

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->du:Landroid/widget/ImageView;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p3

    const/16 v0, 0xc

    invoke-static {p2, p3, p1, v0}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->dv:Landroid/widget/TextView;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->bO(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->kl()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Be:Lcom/kwad/components/core/page/widget/TextProgressBar;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object p2

    const/4 p3, 0x0

    invoke-virtual {p1, p2, p3}, Lcom/kwad/components/core/page/widget/TextProgressBar;->e(Ljava/lang/String;I)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    const/4 p1, 0x1

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->setClickable(Z)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-direct {p1, p0, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    iget-object p2, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->Bf:Landroid/view/View;

    invoke-direct {p1, p2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/reward/widget/actionbar/ActionBarAppLandscape;->b(Landroid/view/View;Z)V

    :cond_0
    return-void
.end method

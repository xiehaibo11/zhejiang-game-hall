.class public final Lcom/kwad/components/ad/feed/b/l;
.super Lcom/kwad/components/ad/feed/b/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field private eh:J

.field private ek:Landroid/widget/TextView;

.field private em:Landroid/widget/ImageView;

.field private er:Lcom/kwad/components/ad/widget/DownloadProgressView;

.field private ff:Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mLogoView:Lcom/kwad/components/core/widget/KsLogoView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/b/a;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/l;I)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/l;->aK(I)V

    return-void
.end method

.method private bc()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->H(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v3}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v3

    invoke-direct {v0, v1, v2, v3}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->d(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->aZ()V

    :cond_0
    return-void
.end method

.method private c(Landroid/view/View;I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->em:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->sm()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_1

    move v0, v1

    goto :goto_0

    :cond_1
    const/4 v0, 0x2

    :goto_0
    new-instance v2, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    const/4 v3, 0x5

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    invoke-virtual {v2, p2}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/l;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    if-ne p1, v2, :cond_2

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/feed/b/l$1;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/feed/b/l$1;-><init>(Lcom/kwad/components/ad/feed/b/l;I)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/l;->onClick(Landroid/view/View;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x99

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/l;->c(Landroid/view/View;I)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 4

    invoke-super {p0, p1}, Lcom/kwad/components/ad/feed/b/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/l;->ek:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/feed/f;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/l;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->aT(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, 0x0

    if-lez v0, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/kwad/components/ad/feed/b/l;->eh:J

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->ff:Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/l;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/l;->ei:Lcom/kwad/sdk/core/imageloader/core/listener/SimpleImageLoadingListener;

    invoke-static {v0, p1, v2, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadFeeImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    goto :goto_0

    :cond_0
    const-string p1, "FeedTextRightImageView"

    const-string v0, "getImageUrlList size less than one"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/l;->bc()V

    const/4 p1, 0x4

    new-array p1, p1, [Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->ek:Landroid/widget/TextView;

    aput-object v0, p1, v1

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->ff:Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    aput-object v1, p1, v0

    const/4 v0, 0x2

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    aput-object v1, p1, v0

    const/4 v0, 0x3

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->em:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    invoke-static {p0, p1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/View$OnClickListener;[Landroid/view/View;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->ek:Landroid/widget/TextView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->ff:Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->em:Landroid/widget/ImageView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    invoke-virtual {p0, p0}, Lcom/kwad/components/ad/feed/b/l;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final ba()V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->ek:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_image_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/RatioFrameLayout;

    const-wide v1, 0x3fe51eb860000000L    # 0.6600000262260437

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/widget/RatioFrameLayout;->setRatio(D)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_image:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->ff:Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/l;->getContext()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x40400000    # 3.0f

    invoke-static {v1, v2}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;->setRadius(F)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_dislike:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->em:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/DownloadProgressView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_feed_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    return-void
.end method

.method public final bd()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/feed/b/a;->bd()V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    return-void
.end method

.method public final getLayoutId()I
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_feed_text_right_image:I

    return v0
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->ek:Landroid/widget/TextView;

    if-ne p1, v0, :cond_0

    const/16 v0, 0x19

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->ff:Lcom/kwad/sdk/core/page/widget/RoundAngleImageView;

    if-ne p1, v0, :cond_1

    const/16 v0, 0x64

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/l;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    if-ne p1, v0, :cond_2

    const/4 v0, 0x1

    goto :goto_0

    :cond_2
    const/16 v0, 0x23

    :goto_0
    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/l;->c(Landroid/view/View;I)V

    return-void
.end method

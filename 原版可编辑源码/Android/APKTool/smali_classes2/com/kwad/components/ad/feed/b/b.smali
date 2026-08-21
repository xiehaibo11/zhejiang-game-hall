.class public abstract Lcom/kwad/components/ad/feed/b/b;
.super Lcom/kwad/components/ad/feed/b/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/sdk/widget/c;


# instance fields
.field private dC:Landroid/widget/TextView;

.field protected du:Landroid/widget/ImageView;

.field protected dv:Landroid/widget/TextView;

.field protected ek:Landroid/widget/TextView;

.field protected el:Landroid/widget/ImageView;

.field protected em:Landroid/widget/ImageView;

.field protected en:Lcom/kwad/sdk/widget/RatioFrameLayout;

.field protected eo:Landroid/widget/TextView;

.field private ep:Landroid/widget/TextView;

.field private eq:Landroid/view/View;

.field protected er:Lcom/kwad/components/ad/widget/DownloadProgressView;

.field protected mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field protected mLogoView:Lcom/kwad/components/core/widget/KsLogoView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/feed/b/a;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/b;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method private a(Landroid/view/View;I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->em:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->sm()V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->aY()V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    const/4 v1, 0x1

    if-ne p1, v0, :cond_1

    move v0, v1

    goto :goto_0

    :cond_1
    const/4 v0, 0x2

    :goto_0
    new-instance v2, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    const/4 v3, 0x5

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    invoke-virtual {v2, p2}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v2, v3}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v2

    invoke-virtual {v2, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    if-ne p1, v2, :cond_2

    goto :goto_1

    :cond_2
    const/4 v1, 0x0

    :goto_1
    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/feed/b/b$2;

    invoke-direct {v0, p0, p2}, Lcom/kwad/components/ad/feed/b/b$2;-><init>(Lcom/kwad/components/ad/feed/b/b;I)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/feed/b/b;I)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/b;->aK(I)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/feed/b/b;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method private bb()V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_h5_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_download_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_h5_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ep:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_h5_open_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dC:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_h5_open_cover:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->eq:Landroid/view/View;

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ep:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/f;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dC:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->eq:Landroid/view/View;

    invoke-virtual {v0, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ep:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dC:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/b;->eq:Landroid/view/View;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/b;->ep:Landroid/widget/TextView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/b;->dC:Landroid/widget/TextView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method

.method private bc()V
    .locals 5

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_download_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_h5_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/view/View;->setVisibility(I)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->du:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_title:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->eo:Landroid/widget/TextView;

    const/4 v3, 0x3

    new-array v3, v3, [Landroid/view/View;

    iget-object v4, p0, Lcom/kwad/components/ad/feed/b/b;->du:Landroid/widget/ImageView;

    aput-object v4, v3, v1

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->dv:Landroid/widget/TextView;

    const/4 v4, 0x1

    aput-object v1, v3, v4

    const/4 v1, 0x2

    aput-object v0, v3, v1

    invoke-static {p0, v3}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/View$OnClickListener;[Landroid/view/View;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/b;->du:Landroid/widget/ImageView;

    invoke-direct {v0, v1, v3, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/b;->dv:Landroid/widget/TextView;

    invoke-direct {v0, v1, v3, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/b;->eo:Landroid/widget/TextView;

    invoke-direct {v0, v1, v3, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dv:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->du:Landroid/widget/ImageView;

    sget v1, Lcom/kwad/sdk/R$drawable;->ksad_default_app_icon:I

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setImageResource(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->du:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v3, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->eo:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/f;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->aZ()V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->H(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/widget/DownloadProgressView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    new-instance v0, Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v2}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v2

    const/4 v3, 0x0

    invoke-direct {v0, v1, v3, v2}, Lcom/kwad/components/core/e/d/c;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->d(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->setOnShowListener(Landroid/content/DialogInterface$OnShowListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/e/d/c;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    new-instance v0, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/view/View;)V
    .locals 0

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/feed/b/b;->onClick(Landroid/view/View;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0x99

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/b;->a(Landroid/view/View;I)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/components/ad/feed/b/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ek:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/f;->c(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/widget/KsLogoView;->aa(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->el:Landroid/widget/ImageView;

    new-instance v1, Lcom/kwad/components/ad/feed/b/b$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/ad/feed/b/b$1;-><init>(Lcom/kwad/components/ad/feed/b/b;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->post(Ljava/lang/Runnable;)Z

    iget-object p1, p0, Lcom/kwad/components/ad/feed/b/b;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/b;->bc()V

    goto :goto_0

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/feed/b/b;->bb()V

    :goto_0
    const/4 p1, 0x3

    new-array p1, p1, [Landroid/view/View;

    const/4 v0, 0x0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->ek:Landroid/widget/TextView;

    aput-object v1, p1, v0

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->el:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    const/4 v0, 0x2

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->em:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    invoke-static {p0, p1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/view/View$OnClickListener;[Landroid/view/View;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->ek:Landroid/widget/TextView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->el:Landroid/widget/ImageView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    new-instance p1, Lcom/kwad/sdk/widget/f;

    invoke-virtual {p0}, Lcom/kwad/components/ad/feed/b/b;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->em:Landroid/widget/ImageView;

    invoke-direct {p1, v0, v1, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    invoke-virtual {p0, p0}, Lcom/kwad/components/ad/feed/b/b;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final ba()V
    .locals 3

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_desc:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ek:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_image_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/widget/RatioFrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->en:Lcom/kwad/sdk/widget/RatioFrameLayout;

    const-wide v1, 0x3fe1eb8520000000L    # 0.5600000023841858

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/widget/RatioFrameLayout;->setRatio(D)V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_image:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->el:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_dislike:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->em:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_ad_dislike_logo:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/widget/KsLogoView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mLogoView:Lcom/kwad/components/core/widget/KsLogoView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/feed/b/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/widget/DownloadProgressView;

    iput-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    return-void
.end method

.method public final bd()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/feed/b/a;->bd()V

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    invoke-virtual {v1}, Lcom/kwad/components/ad/widget/DownloadProgressView;->getAppDownloadListener()Lcom/kwad/sdk/api/KsAppDownloadListener;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ek:Landroid/widget/TextView;

    if-ne p1, v0, :cond_0

    const/16 v0, 0x19

    goto :goto_2

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->el:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_1

    const/16 v0, 0x64

    goto :goto_2

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->er:Lcom/kwad/components/ad/widget/DownloadProgressView;

    if-eq p1, v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dC:Landroid/widget/TextView;

    if-eq p1, v0, :cond_7

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->eq:Landroid/view/View;

    if-ne p1, v0, :cond_2

    goto :goto_1

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->du:Landroid/widget/ImageView;

    if-ne p1, v0, :cond_3

    const/16 v0, 0xd

    goto :goto_2

    :cond_3
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->dv:Landroid/widget/TextView;

    if-ne p1, v0, :cond_4

    const/16 v0, 0xe

    goto :goto_2

    :cond_4
    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->eo:Landroid/widget/TextView;

    if-eq p1, v0, :cond_6

    iget-object v0, p0, Lcom/kwad/components/ad/feed/b/b;->ep:Landroid/widget/TextView;

    if-ne p1, v0, :cond_5

    goto :goto_0

    :cond_5
    const/16 v0, 0x23

    goto :goto_2

    :cond_6
    :goto_0
    const/16 v0, 0x65

    goto :goto_2

    :cond_7
    :goto_1
    const/4 v0, 0x1

    :goto_2
    invoke-direct {p0, p1, v0}, Lcom/kwad/components/ad/feed/b/b;->a(Landroid/view/View;I)V

    return-void
.end method

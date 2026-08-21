.class public final Lcom/kwad/components/ad/f/b/f;
.super Lcom/kwad/components/ad/f/a/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private du:Landroid/widget/ImageView;

.field private dv:Landroid/widget/TextView;

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private ni:Landroid/view/ViewGroup;

.field private nj:Landroid/widget/TextView;

.field private nk:Lcom/kwad/sdk/api/KsAppDownloadListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/f/b/f$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/f$2;-><init>(Lcom/kwad/components/ad/f/b/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->nk:Lcom/kwad/sdk/api/KsAppDownloadListener;

    return-void
.end method

.method private F(I)V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    invoke-virtual {v1}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/f/b/f$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/f$3;-><init>(Lcom/kwad/components/ad/f/b/f;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/f;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/f;->eP()V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/f/b/f;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/f;->nj:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/f/b/f;)Lcom/kwad/components/ad/f/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/f;->mV:Lcom/kwad/components/ad/f/a/b;

    return-object p0
.end method

.method private eP()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->du:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->bQ(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/f/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/16 v3, 0xc

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadAppIcon(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;I)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->dv:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->ao(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->nj:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->aw(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->nk:Lcom/kwad/sdk/api/KsAppDownloadListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method private notifyAdClick()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mE:Lcom/kwad/components/ad/f/d$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/f/d$a;->l(Landroid/view/View;)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v0, Lcom/kwad/components/ad/f/b/f$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/f$1;-><init>(Lcom/kwad/components/ad/f/b/f;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    if-ne p1, v0, :cond_0

    const/4 p1, 0x2

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/b/f;->F(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/f;->notifyAdClick()V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->nj:Landroid/widget/TextView;

    if-ne p1, v0, :cond_1

    const/4 p1, 0x1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/f/b/f;->F(I)V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/f;->notifyAdClick()V

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_complete_app_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->ni:Landroid/view/ViewGroup;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->du:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_name:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->dv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_app_download:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/f;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/f;->nj:Landroid/widget/TextView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/f;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/f;->nk:Lcom/kwad/sdk/api/KsAppDownloadListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->c(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_0
    return-void
.end method

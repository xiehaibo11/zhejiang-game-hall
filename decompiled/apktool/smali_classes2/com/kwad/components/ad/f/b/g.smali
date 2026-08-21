.class public final Lcom/kwad/components/ad/f/b/g;
.super Lcom/kwad/components/ad/f/a/a;


# instance fields
.field private nm:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/g;->eQ()V

    return-void
.end method

.method private eQ()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/g;->nm:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/g;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/a;->P(Lcom/kwad/sdk/core/response/model/AdInfo;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/f/b/g;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v2, v2, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/imageloader/KSImageLoader;->loadImage(Landroid/widget/ImageView;Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/g;->nm:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    new-instance v0, Lcom/kwad/components/ad/f/b/g$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/g$1;-><init>(Lcom/kwad/components/ad/f/b/g;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/g;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/g;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/g;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/g;->nm:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_cover_image:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/g;->nm:Landroid/widget/ImageView;

    return-void
.end method

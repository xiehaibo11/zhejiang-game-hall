.class public final Lcom/kwad/components/ad/f/b/d;
.super Lcom/kwad/components/ad/f/a/a;


# instance fields
.field private nf:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/d;->eO()V

    return-void
.end method

.method private eO()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/d;->nf:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/d;->nf:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/d;->nf:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/d;->nf:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/d;->nf:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    new-instance v0, Lcom/kwad/components/ad/f/b/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/d$1;-><init>(Lcom/kwad/components/ad/f/b/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/d;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_network_unavailable:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/d;->nf:Landroid/view/View;

    return-void
.end method

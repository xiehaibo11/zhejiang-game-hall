.class public final Lcom/kwad/components/ad/f/b/j;
.super Lcom/kwad/components/ad/f/a/a;


# instance fields
.field private ns:Landroid/view/View;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/j;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/j;->eS()V

    return-void
.end method

.method private eS()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/j;->ns:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/f/b/j;->ns:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/j;->ns:Landroid/view/View;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    new-instance v0, Lcom/kwad/components/ad/f/b/j$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/j$1;-><init>(Lcom/kwad/components/ad/f/b/j;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/j;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/j;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/j;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_error_container:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/j;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/j;->ns:Landroid/view/View;

    return-void
.end method

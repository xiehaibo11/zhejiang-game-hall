.class public final Lcom/kwad/components/ad/draw/b/d;
.super Lcom/kwad/components/ad/draw/a/a;


# instance fields
.field private cp:Landroid/widget/TextView;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/draw/b/d$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/d$1;-><init>(Lcom/kwad/components/ad/draw/b/d;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/d;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/d;->cp:Landroid/widget/TextView;

    return-object p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/draw/b/d;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/utils/ag;->isNetworkConnected(Landroid/content/Context;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/d;->cp:Landroid/widget/TextView;

    const/4 v1, 0x0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/d;->cp:Landroid/widget/TextView;

    const/16 v1, 0x8

    :goto_0
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/d;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_fail_tip:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/d;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/d;->cp:Landroid/widget/TextView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/d;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/d;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->b(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

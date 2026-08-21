.class public final Lcom/kwad/components/ad/draw/b/c/a;
.super Lcom/kwad/components/ad/draw/a/a;


# instance fields
.field private bY:Lcom/kwad/components/ad/k/b;

.field private cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/a/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/draw/b/c/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/draw/b/c/a$1;-><init>(Lcom/kwad/components/ad/draw/b/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/draw/b/c/a;)Lcom/kwad/components/ad/k/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c/a;->bY:Lcom/kwad/components/ad/k/b;

    return-object p0
.end method

.method private aG()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->aP()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->setVisibility(I)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/draw/b/c/a;)Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/draw/b/c/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/draw/b/c/a;->aG()V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bY:Lcom/kwad/components/ad/k/b;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->bY:Lcom/kwad/components/ad/k/b;

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->setAdBaseFrameLayout(Lcom/kwad/sdk/core/view/AdBaseFrameLayout;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->setApkDownloadHelper(Lcom/kwad/components/core/e/d/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/draw/a/b;->bD:Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->setAdInteractionListener(Lcom/kwad/sdk/api/KsDrawAd$AdInteractionListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_tail_frame:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/draw/b/c/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    iput-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/draw/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->bE:Lcom/kwad/components/ad/draw/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/draw/a/b;->bF:Lcom/kwad/components/ad/draw/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/draw/b/c/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/draw/c/a;->b(Lcom/kwad/components/core/video/k;)V

    iget-object v0, p0, Lcom/kwad/components/ad/draw/b/c/a;->cO:Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;

    invoke-virtual {v0}, Lcom/kwad/components/ad/draw/view/playend/DrawVideoTailFrame;->release()V

    return-void
.end method

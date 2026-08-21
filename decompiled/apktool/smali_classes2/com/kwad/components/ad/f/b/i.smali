.class public final Lcom/kwad/components/ad/f/b/i;
.super Lcom/kwad/components/ad/f/a/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/i;)Lcom/kwad/components/core/video/DetailVideoView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/i;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/b/i;)Lcom/kwad/components/ad/f/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/i;->mV:Lcom/kwad/components/ad/f/a/b;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/f/b/i;)Lcom/kwad/components/ad/f/a/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/i;->mV:Lcom/kwad/components/ad/f/a/b;

    return-object p0
.end method

.method private eR()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v1}, Lcom/kwad/components/core/video/DetailVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/f/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v1, v1, Lcom/kwad/components/ad/f/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/f/b/i$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/f/b/i$2;-><init>(Lcom/kwad/components/ad/f/b/i;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    return-void
.end method

.method private notifyAdClick()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/i;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mE:Lcom/kwad/components/ad/f/d$a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-interface {v0, v1}, Lcom/kwad/components/ad/f/d$a;->l(Landroid/view/View;)V

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    new-instance v0, Lcom/kwad/components/ad/f/b/i$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/i$1;-><init>(Lcom/kwad/components/ad/f/b/i;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/i;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/i;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/i;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/i;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    if-ne p1, v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/i;->eR()V

    invoke-direct {p0}, Lcom/kwad/components/ad/f/b/i;->notifyAdClick()V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_player:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/f/b/i;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/video/DetailVideoView;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/i;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/i;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

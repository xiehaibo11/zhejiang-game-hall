.class public final Lcom/kwad/components/ad/f/b/e;
.super Lcom/kwad/components/ad/f/a/a;


# instance fields
.field private bH:Z

.field private mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/f/a/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/f/b/e;->bH:Z

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/e;)Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/f/b/e;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/f/b/e;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/components/ad/f/b/e;->bH:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/f/b/e;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/f/b/e;->bH:Z

    return p0
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/e;->mz:Lcom/kwad/sdk/api/KsNativeAd$VideoPlayListener;

    new-instance v0, Lcom/kwad/components/ad/f/b/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/f/b/e$1;-><init>(Lcom/kwad/components/ad/f/b/e;)V

    iput-object v0, p0, Lcom/kwad/components/ad/f/b/e;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    iget-object v0, p0, Lcom/kwad/components/ad/f/b/e;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/b/e;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 0

    invoke-super {p0}, Lcom/kwad/components/ad/f/a/a;->onUnbind()V

    return-void
.end method

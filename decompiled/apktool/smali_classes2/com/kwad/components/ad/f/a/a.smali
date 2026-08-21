.class public Lcom/kwad/components/ad/f/a/a;
.super Lcom/kwad/sdk/mvp/Presenter;


# instance fields
.field public mV:Lcom/kwad/components/ad/f/a/b;

.field public mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/mvp/Presenter;-><init>()V

    return-void
.end method


# virtual methods
.method public ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->ah()V

    invoke-virtual {p0}, Lcom/kwad/components/ad/f/a/a;->Gk()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/f/a/b;

    iput-object v0, p0, Lcom/kwad/components/ad/f/a/a;->mV:Lcom/kwad/components/ad/f/a/b;

    return-void
.end method

.method public onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/sdk/mvp/Presenter;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/f/a/a;->mV:Lcom/kwad/components/ad/f/a/b;

    iget-object v0, v0, Lcom/kwad/components/ad/f/a/b;->mW:Lcom/kwad/components/ad/f/c/a;

    iget-object v1, p0, Lcom/kwad/components/ad/f/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/f/c/a;->b(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

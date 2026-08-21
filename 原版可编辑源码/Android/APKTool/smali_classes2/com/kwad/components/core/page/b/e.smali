.class public final Lcom/kwad/components/core/page/b/e;
.super Lcom/kwad/components/core/page/b/c;


# instance fields
.field private mPlayModule:Lcom/kwad/components/core/page/c/a;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/k;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/core/page/b/c;-><init>()V

    new-instance v0, Lcom/kwad/components/core/page/b/e$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/page/b/e$1;-><init>(Lcom/kwad/components/core/page/b/e;)V

    iput-object v0, p0, Lcom/kwad/components/core/page/b/e;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/b/c;->ah()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/e;->MQ:Lcom/kwad/components/core/page/b/d;

    iget-object v0, v0, Lcom/kwad/components/core/page/b/d;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    iput-object v0, p0, Lcom/kwad/components/core/page/b/e;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/e;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/c/a;->a(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/core/page/b/c;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/core/page/b/e;->mPlayModule:Lcom/kwad/components/core/page/c/a;

    iget-object v1, p0, Lcom/kwad/components/core/page/b/e;->mVideoPlayStateListener:Lcom/kwad/components/core/video/k;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/page/c/a;->b(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

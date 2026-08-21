.class final Lcom/kwad/components/core/offline/init/c/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/video/DetailVideoView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/offline/init/c/b;->setClickListener(Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ma:Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;

.field final synthetic Mb:Lcom/kwad/components/core/offline/init/c/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/offline/init/c/b;Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/b$1;->Mb:Lcom/kwad/components/core/offline/init/c/b;

    iput-object p2, p0, Lcom/kwad/components/core/offline/init/c/b$1;->Ma:Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClickRootView()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b$1;->Ma:Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;->onClickRootView()V

    return-void
.end method

.method public final onClickVideoView()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b$1;->Ma:Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;

    invoke-interface {v0}, Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;->onClickVideoView()V

    return-void
.end method

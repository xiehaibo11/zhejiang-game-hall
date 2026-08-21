.class final Lcom/kwad/components/core/offline/init/c/b;
.super Lcom/kwad/components/offline/api/core/video/BaseKsMediaPlayerView;


# instance fields
.field private LZ:Lcom/kwad/components/core/video/DetailVideoView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/offline/api/core/video/BaseKsMediaPlayerView;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/video/DetailVideoView;)Lcom/kwad/components/core/offline/init/c/b;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/ao;->checkNotNull(Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/offline/init/c/b;->addView(Landroid/view/View;)V

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    return-object p0
.end method

.method public final adaptVideoSize(II)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/video/DetailVideoView;->adaptVideoSize(II)V

    return-void
.end method

.method public final fixWidth(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->fixWidth(Z)V

    return-void
.end method

.method public final getTextureViewGravity()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/DetailVideoView;->getTextureViewGravity()I

    move-result v0

    return v0
.end method

.method public final oq()Lcom/kwad/components/core/video/DetailVideoView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    return-object v0
.end method

.method public final setAd(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->setAd(Z)V

    return-void
.end method

.method public final setClickListener(Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/kwad/components/core/offline/init/c/b$1;

    invoke-direct {v1, p0, p1}, Lcom/kwad/components/core/offline/init/c/b$1;-><init>(Lcom/kwad/components/core/offline/init/c/b;Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView$VideoViewClickListener;)V

    move-object p1, v1

    :goto_0
    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->setClickListener(Lcom/kwad/components/core/video/DetailVideoView$a;)V

    return-void
.end method

.method public final setForce(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->setForce(Z)V

    return-void
.end method

.method public final setHorizontalVideo(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->setHorizontalVideo(Z)V

    return-void
.end method

.method public final setMediaPlayer(Lcom/kwad/components/offline/api/core/video/IKsMediaPlayer;)V
    .locals 1

    instance-of v0, p1, Lcom/kwad/components/core/offline/init/c/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    check-cast p1, Lcom/kwad/components/core/offline/init/c/a;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/c/a;->oo()Lcom/kwad/components/core/video/b;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->setMediaPlayer(Lcom/kwad/components/core/video/b;)V

    return-void

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "mediaPlayer not instanceof KsMediaPlayer"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final setRadius(F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->setRadius(F)V

    return-void
.end method

.method public final updateTextureViewGravity(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/b;->LZ:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;->updateTextureViewGravity(I)V

    return-void
.end method

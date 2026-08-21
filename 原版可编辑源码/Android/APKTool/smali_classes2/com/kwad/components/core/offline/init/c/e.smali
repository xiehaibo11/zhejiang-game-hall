.class public final Lcom/kwad/components/core/offline/init/c/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/video/IVideo;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final createMediaPlayer(Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView;)Lcom/kwad/components/offline/api/core/video/IKsMediaPlayer;
    .locals 2

    instance-of v0, p1, Lcom/kwad/components/core/offline/init/c/b;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/c/a;

    invoke-direct {v0}, Lcom/kwad/components/core/offline/init/c/a;-><init>()V

    new-instance v1, Lcom/kwad/components/core/video/b;

    check-cast p1, Lcom/kwad/components/core/offline/init/c/b;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/c/b;->oq()Lcom/kwad/components/core/video/DetailVideoView;

    move-result-object p1

    invoke-direct {v1, p1}, Lcom/kwad/components/core/video/b;-><init>(Lcom/kwad/components/core/video/DetailVideoView;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/offline/init/c/a;->a(Lcom/kwad/components/core/video/b;)Lcom/kwad/components/core/offline/init/c/a;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "playerView not instanceof KsMediaPlayerView"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public final createMediaPlayerView(Landroid/content/Context;)Lcom/kwad/components/offline/api/core/video/BaseKsMediaPlayerView;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/video/DetailVideoView;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/video/DetailVideoView;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setAd(Z)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/video/DetailVideoView;->setFillXY(Z)V

    const/16 v2, 0x11

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/video/DetailVideoView;->updateTextureViewGravity(I)V

    invoke-virtual {v0, v1, v1}, Lcom/kwad/components/core/video/DetailVideoView;->f(ZI)V

    new-instance v1, Lcom/kwad/components/core/offline/init/c/b;

    invoke-direct {v1, p1}, Lcom/kwad/components/core/offline/init/c/b;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/offline/init/c/b;->a(Lcom/kwad/components/core/video/DetailVideoView;)Lcom/kwad/components/core/offline/init/c/b;

    move-result-object p1

    return-object p1
.end method

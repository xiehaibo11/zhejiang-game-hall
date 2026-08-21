.class final Lcom/kwad/components/core/offline/init/c/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/video/IMediaPlayer;


# instance fields
.field private Mc:Lcom/kwad/sdk/core/video/a/c;


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final b(Lcom/kwad/sdk/core/video/a/c;)Lcom/kwad/components/core/offline/init/c/c;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/ao;->checkNotNull(Ljava/lang/Object;)Ljava/lang/Object;

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    return-object p0
.end method

.method public final getAudioSessionId()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getAudioSessionId()I

    move-result v0

    return v0
.end method

.method public final getCurrentPlayingUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getCurrentPlayingUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getCurrentPosition()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getCurrentPosition()J

    move-result-wide v0

    return-wide v0
.end method

.method public final getDataSource()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getDataSource()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getDuration()J

    move-result-wide v0

    return-wide v0
.end method

.method public final getMediaPlayerType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getMediaPlayerType()I

    move-result v0

    return v0
.end method

.method public final getVideoHeight()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getVideoHeight()I

    move-result v0

    return v0
.end method

.method public final getVideoWidth()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getVideoWidth()I

    move-result v0

    return v0
.end method

.method public final isLooping()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->isLooping()Z

    move-result v0

    return v0
.end method

.method public final isPlaying()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->isPlaying()Z

    move-result v0

    return v0
.end method

.method public final or()Lcom/kwad/sdk/core/video/a/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    return-object v0
.end method

.method public final pause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->pause()V

    return-void
.end method

.method public final prepareAsync()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->prepareAsync()Z

    move-result v0

    return v0
.end method

.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->release()V

    return-void
.end method

.method public final reset()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->reset()V

    return-void
.end method

.method public final seekTo(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/c;->seekTo(J)V

    return-void
.end method

.method public final setAudioStreamType(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setAudioStreamType(I)V

    return-void
.end method

.method public final setDataSource(Landroid/content/Context;Landroid/net/Uri;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/c;->setDataSource(Landroid/content/Context;Landroid/net/Uri;)V

    return-void
.end method

.method public final setDataSource(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Landroid/net/Uri;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1, p2, p3}, Lcom/kwad/sdk/core/video/a/c;->setDataSource(Landroid/content/Context;Landroid/net/Uri;Ljava/util/Map;)V

    return-void
.end method

.method public final setDataSource(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/contentalliance/a/a/b;)V

    return-void
.end method

.method public final setDataSource(Ljava/io/FileDescriptor;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setDataSource(Ljava/io/FileDescriptor;)V

    return-void
.end method

.method public final setDataSource(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setDataSource(Ljava/lang/String;)V

    return-void
.end method

.method public final setDisplay(Landroid/view/SurfaceHolder;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setDisplay(Landroid/view/SurfaceHolder;)V

    return-void
.end method

.method public final setLooping(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setLooping(Z)V

    return-void
.end method

.method public final setOnBufferingUpdateListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnBufferingUpdateListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnBufferingUpdateListener;)Lcom/kwad/sdk/core/video/a/c$a;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$a;)V

    return-void
.end method

.method public final setOnCompletionListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnCompletionListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnCompletionListener;)Lcom/kwad/sdk/core/video/a/c$b;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$b;)V

    return-void
.end method

.method public final setOnErrorListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnErrorListener;)Lcom/kwad/sdk/core/video/a/c$c;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$c;)V

    return-void
.end method

.method public final setOnInfoListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnInfoListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnInfoListener;)Lcom/kwad/sdk/core/video/a/c$d;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->c(Lcom/kwad/sdk/core/video/a/c$d;)V

    return-void
.end method

.method public final setOnPreparedListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnPreparedListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnPreparedListener;)Lcom/kwad/sdk/core/video/a/c$e;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->b(Lcom/kwad/sdk/core/video/a/c$e;)V

    return-void
.end method

.method public final setOnSeekCompleteListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnSeekCompleteListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnSeekCompleteListener;)Lcom/kwad/sdk/core/video/a/c$f;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$f;)V

    return-void
.end method

.method public final setOnTimedTextListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnTimedTextListener;)Lcom/kwad/sdk/core/video/a/c$g;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$g;)V

    return-void
.end method

.method public final setOnVideoSizeChangedListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnVideoSizeChangedListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-static {p0, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnVideoSizeChangedListener;)Lcom/kwad/sdk/core/video/a/c$h;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$h;)V

    return-void
.end method

.method public final setScreenOnWhilePlaying(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setScreenOnWhilePlaying(Z)V

    return-void
.end method

.method public final setSpeed(F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setSpeed(F)V

    return-void
.end method

.method public final setSurface(Landroid/view/Surface;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setSurface(Landroid/view/Surface;)V

    return-void
.end method

.method public final setVolume(FF)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0, p1, p2}, Lcom/kwad/sdk/core/video/a/c;->setVolume(FF)V

    return-void
.end method

.method public final start()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->start()V

    return-void
.end method

.method public final stop()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/c;->Mc:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->stop()V

    return-void
.end method

.class final Lcom/kwad/components/core/offline/init/c/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/offline/api/core/video/IKsMediaPlayer;


# instance fields
.field private LS:Lcom/kwad/components/core/video/b;

.field private LT:Lcom/kwad/components/core/offline/init/c/c;

.field private LU:Lcom/kwad/components/offline/api/core/video/listener/VideoMuteStateChangeListener;

.field private LV:Z

.field private LW:I

.field private mContext:Landroid/content/Context;

.field private mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

.field private nw:Z

.field private yd:Z

.field private yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;


# direct methods
.method constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->nw:Z

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LW:I

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/offline/init/c/a;)Lcom/kwad/components/core/video/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/core/offline/init/c/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/core/offline/init/c/a;->yd:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/core/offline/init/c/a;)Lcom/kwad/components/offline/api/core/video/listener/VideoMuteStateChangeListener;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/core/offline/init/c/a;->LU:Lcom/kwad/components/offline/api/core/video/listener/VideoMuteStateChangeListener;

    return-object p0
.end method

.method private op()Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/offline/init/c/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/offline/init/c/a$2;-><init>(Lcom/kwad/components/core/offline/init/c/a;)V

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->yg:Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/video/b;)Lcom/kwad/components/core/offline/init/c/a;
    .locals 0

    invoke-static {p1}, Lcom/kwad/sdk/utils/ao;->checkNotNull(Ljava/lang/Object;)Ljava/lang/Object;

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    return-object p0
.end method

.method public final addOnInfoListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnInfoListener;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/c/a;->getMediaPlayer()Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    move-result-object v1

    invoke-static {v1, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnInfoListener;)Lcom/kwad/sdk/core/video/a/c$d;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c$d;)V

    return-void
.end method

.method public final addOnPreparedListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnPreparedListener;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/c/a;->getMediaPlayer()Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    move-result-object v1

    invoke-static {v1, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnPreparedListener;)Lcom/kwad/sdk/core/video/a/c$e;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c$e;)V

    return-void
.end method

.method public final clear()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->clear()V

    return-void
.end method

.method public final getBufferPercentage()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getBufferPercentage()I

    move-result v0

    return v0
.end method

.method public final getCurrentPlayingUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getCurrentPlayingUrl()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getCurrentPosition()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getCurrentPosition()J

    move-result-wide v0

    return-wide v0
.end method

.method public final getDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getDuration()J

    move-result-wide v0

    return-wide v0
.end method

.method public final getMaxVolume()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final getMediaPlayer()Lcom/kwad/components/offline/api/core/video/IMediaPlayer;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->qD()Lcom/kwad/sdk/core/video/a/c;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/offline/init/c/a;->LT:Lcom/kwad/components/core/offline/init/c/c;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/kwad/components/core/offline/init/c/c;->or()Lcom/kwad/sdk/core/video/a/c;

    move-result-object v1

    if-eq v1, v0, :cond_2

    :cond_1
    new-instance v1, Lcom/kwad/components/core/offline/init/c/c;

    invoke-direct {v1}, Lcom/kwad/components/core/offline/init/c/c;-><init>()V

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/offline/init/c/c;->b(Lcom/kwad/sdk/core/video/a/c;)Lcom/kwad/components/core/offline/init/c/c;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LT:Lcom/kwad/components/core/offline/init/c/c;

    :cond_2
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LT:Lcom/kwad/components/core/offline/init/c/c;

    return-object v0
.end method

.method public final getMediaPlayerType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getMediaPlayerType()I

    move-result v0

    return v0
.end method

.method public final getPlayDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getPlayDuration()J

    move-result-wide v0

    return-wide v0
.end method

.method public final getStateString(I)Ljava/lang/String;
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/video/b;->getStateString(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public final getVideoHeight()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getVideoHeight()I

    move-result v0

    return v0
.end method

.method public final getVideoWidth()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->getVideoWidth()I

    move-result v0

    return v0
.end method

.method public final getVolume()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final initMediaPlayer(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;Lcom/kwad/components/offline/api/core/video/IKsMediaPlayerView;)V
    .locals 1

    instance-of v0, p2, Lcom/kwad/components/core/offline/init/c/b;

    if-nez v0, :cond_0

    const-string p1, "KsMediaPlayer"

    const-string p2, "videoView not instanceof KsMediaPlayerView"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    check-cast p2, Lcom/kwad/components/core/offline/init/c/b;

    invoke-virtual {p2}, Lcom/kwad/components/core/offline/init/c/b;->oq()Lcom/kwad/components/core/video/DetailVideoView;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/core/offline/init/c/a;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {p2}, Lcom/kwad/components/core/video/DetailVideoView;->getContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    iput-object p2, p0, Lcom/kwad/components/core/offline/init/c/a;->mContext:Landroid/content/Context;

    iget-object p2, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    invoke-virtual {p2, p1, v0}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;Lcom/kwad/components/core/video/DetailVideoView;)V

    iget p1, p0, Lcom/kwad/components/core/offline/init/c/a;->LW:I

    const/4 p2, -0x1

    if-eq p1, p2, :cond_1

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/offline/init/c/a;->setVideoAdaptStrategy(I)V

    :cond_1
    return-void
.end method

.method public final initMediaPlayer(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;ZZLcom/kwad/components/offline/api/core/video/IKsMediaPlayerView;)V
    .locals 1

    instance-of v0, p4, Lcom/kwad/components/core/offline/init/c/b;

    if-nez v0, :cond_0

    const-string p1, "KsMediaPlayer"

    const-string p2, "videoView not instanceof KsMediaPlayerView"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object p1

    check-cast p4, Lcom/kwad/components/core/offline/init/c/b;

    invoke-virtual {p4}, Lcom/kwad/components/core/offline/init/c/b;->oq()Lcom/kwad/components/core/video/DetailVideoView;

    move-result-object p4

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;ZZLcom/kwad/components/core/video/DetailVideoView;)V

    return-void
.end method

.method public final isPlaying()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->isPlaying()Z

    move-result v0

    return v0
.end method

.method public final isPrepared()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->isPrepared()Z

    move-result v0

    return v0
.end method

.method public final isPreparing()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->isPreparing()Z

    move-result v0

    return v0
.end method

.method public final notifyOnInfoListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;II)V
    .locals 1

    instance-of v0, p1, Lcom/kwad/components/core/offline/init/c/c;

    if-nez v0, :cond_0

    const-string p1, "KsMediaPlayer"

    const-string p2, "videoView not instanceof KsMediaPlayerView"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    check-cast p1, Lcom/kwad/components/core/offline/init/c/c;

    invoke-virtual {p1}, Lcom/kwad/components/core/offline/init/c/c;->or()Lcom/kwad/sdk/core/video/a/c;

    move-result-object p1

    invoke-virtual {v0, p1, p2, p3}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/core/video/a/c;II)V

    return-void
.end method

.method public final onPlayStateChanged(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->onPlayStateChanged(I)V

    return-void
.end method

.method public final oo()Lcom/kwad/components/core/video/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    return-object v0
.end method

.method public final pause()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->pause()Z

    move-result v0

    return v0
.end method

.method public final prepareAsync()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->prepareAsync()V

    return-void
.end method

.method public final registerVideoMuteStateListener(Lcom/kwad/components/offline/api/core/video/listener/VideoMuteStateChangeListener;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/offline/init/c/a;->LU:Lcom/kwad/components/offline/api/core/video/listener/VideoMuteStateChangeListener;

    return-void
.end method

.method public final registerVideoPlayStateListener(Lcom/kwad/components/offline/api/core/video/listener/OfflineVideoPlayStateListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/listener/OfflineVideoPlayStateListener;)Lcom/kwad/components/core/video/k;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->c(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final release()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->release()V

    return-void
.end method

.method public final release(Lcom/kwad/components/offline/api/core/video/listener/ReleaseCallback;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/listener/ReleaseCallback;)Lcom/kwad/components/core/video/b$a;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/components/core/video/b$a;)V

    return-void
.end method

.method public final release(Lcom/kwad/components/offline/api/core/video/listener/ReleaseCallback;Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/listener/ReleaseCallback;)Lcom/kwad/components/core/video/b$a;

    move-result-object p1

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/components/core/video/b$a;Z)V

    return-void
.end method

.method public final releaseSync()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->releaseSync()V

    return-void
.end method

.method public final removeInfoListener(Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnInfoListener;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {p0}, Lcom/kwad/components/core/offline/init/c/a;->getMediaPlayer()Lcom/kwad/components/offline/api/core/video/IMediaPlayer;

    move-result-object v1

    invoke-static {v1, p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/IMediaPlayer;Lcom/kwad/components/offline/api/core/video/IMediaPlayer$OnInfoListener;)Lcom/kwad/sdk/core/video/a/c$d;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->b(Lcom/kwad/sdk/core/video/a/c$d;)V

    return-void
.end method

.method public final resetAndPlay(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)Lcom/kwad/sdk/contentalliance/a/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->qG()V

    return-void
.end method

.method public final restart()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->restart()V

    return-void
.end method

.method public final resume()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->resume()V

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->nw:Z

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LV:Z

    if-eqz v0, :cond_2

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->yd:Z

    if-eqz v0, :cond_2

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    iget-boolean v1, p0, Lcom/kwad/components/core/offline/init/c/a;->LV:Z

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LV:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->yd:Z

    if-eqz v0, :cond_1

    iput-boolean v1, p0, Lcom/kwad/components/core/offline/init/c/a;->yd:Z

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/kwad/components/core/offline/init/c/a;->setAudioEnabled(Z)V

    iput-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->nw:Z

    return-void

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/t/a;->qh()Z

    move-result v0

    if-eqz v0, :cond_2

    iput-boolean v1, p0, Lcom/kwad/components/core/offline/init/c/a;->nw:Z

    invoke-virtual {p0, v1}, Lcom/kwad/components/core/offline/init/c/a;->setAudioEnabled(Z)V

    :cond_2
    return-void
.end method

.method public final seekTo(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/video/b;->seekTo(J)V

    return-void
.end method

.method public final setAudioEnabled(Z)V
    .locals 2

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/t/a;->aJ(Z)Z

    :cond_0
    iget-boolean v0, p0, Lcom/kwad/components/core/offline/init/c/a;->nw:Z

    if-ne p1, v0, :cond_1

    const-string p1, "autoVoice"

    invoke-static {p1}, Lcom/kwad/sdk/core/video/a/a/a;->dI(Ljava/lang/String;)V

    return-void

    :cond_1
    iput-boolean p1, p0, Lcom/kwad/components/core/offline/init/c/a;->nw:Z

    new-instance v0, Lcom/kwad/components/core/offline/init/c/a$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/components/core/offline/init/c/a$1;-><init>(Lcom/kwad/components/core/offline/init/c/a;Z)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final setDataSource(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/mdoel/PlayVideoInfo;)Lcom/kwad/sdk/contentalliance/a/a/b;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/b;)V

    return-void
.end method

.method public final setForceGetAudioFocus(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/kwad/components/core/offline/init/c/a;->LV:Z

    iget-object p1, p0, Lcom/kwad/components/core/offline/init/c/a;->mContext:Landroid/content/Context;

    if-eqz p1, :cond_0

    invoke-static {p1}, Lcom/kwad/components/core/t/a;->al(Landroid/content/Context;)Lcom/kwad/components/core/t/a;

    move-result-object p1

    invoke-direct {p0}, Lcom/kwad/components/core/offline/init/c/a;->op()Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/t/a;->a(Lcom/kwad/components/offline/api/core/api/OfflineOnAudioConflictListener;)V

    :cond_0
    return-void
.end method

.method public final setRadius(FFFF)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/components/core/video/b;->setRadius(FFFF)V

    return-void
.end method

.method public final setSpeed(F)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->setSpeed(F)V

    return-void
.end method

.method public final setSurface(Landroid/view/Surface;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->setSurface(Landroid/view/Surface;)V

    return-void
.end method

.method public final setVideoAdaptStrategy(I)V
    .locals 2

    iput p1, p0, Lcom/kwad/components/core/offline/init/c/a;->LW:I

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->mDetailVideoView:Lcom/kwad/components/core/video/DetailVideoView;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Lcom/kwad/components/core/video/DetailVideoView;->f(ZI)V

    :cond_0
    return-void
.end method

.method public final setVolume(FF)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/video/b;->setVolume(FF)V

    return-void
.end method

.method public final start()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->start()V

    return-void
.end method

.method public final start(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/components/core/video/b;->start(J)V

    return-void
.end method

.method public final stopAndPrepareAsync()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/video/b;->stopAndPrepareAsync()V

    return-void
.end method

.method public final unRegisterVideoPlayStateListener(Lcom/kwad/components/offline/api/core/video/listener/OfflineVideoPlayStateListener;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/listener/OfflineVideoPlayStateListener;)Lcom/kwad/components/core/video/k;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->d(Lcom/kwad/components/core/video/k;)V

    return-void
.end method

.method public final updateKsPlayLogParam(Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/offline/init/c/a;->LS:Lcom/kwad/components/core/video/b;

    invoke-static {p1}, Lcom/kwad/components/core/offline/init/c/d;->a(Lcom/kwad/components/offline/api/core/video/mdoel/KsPlayerLogParams;)Lcom/kwad/sdk/contentalliance/a/a/a;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/video/b;->a(Lcom/kwad/sdk/contentalliance/a/a/a;)V

    return-void
.end method

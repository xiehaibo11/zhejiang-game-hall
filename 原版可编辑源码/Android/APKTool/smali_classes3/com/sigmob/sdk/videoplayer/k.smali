.class public Lcom/sigmob/sdk/videoplayer/k;
.super Lcom/sigmob/sdk/videoplayer/j;

# interfaces
.implements Landroid/media/MediaPlayer$OnBufferingUpdateListener;
.implements Landroid/media/MediaPlayer$OnCompletionListener;
.implements Landroid/media/MediaPlayer$OnErrorListener;
.implements Landroid/media/MediaPlayer$OnInfoListener;
.implements Landroid/media/MediaPlayer$OnPreparedListener;
.implements Landroid/media/MediaPlayer$OnSeekCompleteListener;
.implements Landroid/media/MediaPlayer$OnVideoSizeChangedListener;


# static fields
.field private static final g:Ljava/lang/String; = "VideoPlayerMediaSystem"


# instance fields
.field public f:Landroid/media/MediaPlayer;

.field private h:Z


# direct methods
.method public constructor <init>(Lcom/sigmob/sdk/videoplayer/i;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/videoplayer/j;-><init>(Lcom/sigmob/sdk/videoplayer/i;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/videoplayer/k;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/videoplayer/k;->h:Z

    return p1
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/k$6;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoplayer/k$6;-><init>(Lcom/sigmob/sdk/videoplayer/k;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public a(F)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/k$10;

    invoke-direct {v1, p0, p1}, Lcom/sigmob/sdk/videoplayer/k$10;-><init>(Lcom/sigmob/sdk/videoplayer/k;F)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public a(J)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/k$8;

    invoke-direct {v1, p0, p1, p2}, Lcom/sigmob/sdk/videoplayer/k$8;-><init>(Lcom/sigmob/sdk/videoplayer/k;J)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public a(Landroid/view/Surface;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "setSurface() called with: surface = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-virtual {v0, p1}, Landroid/media/MediaPlayer;->setSurface(Landroid/view/Surface;)V

    return-void
.end method

.method public b()V
    .locals 1

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/k;->c()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/k;->h:Z

    return-void
.end method

.method public b(F)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-nez v0, :cond_0

    return-void

    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x17

    if-lt v0, v1, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getPlaybackParams()Landroid/media/PlaybackParams;

    move-result-object v0

    invoke-virtual {v0, p1}, Landroid/media/PlaybackParams;->setSpeed(F)Landroid/media/PlaybackParams;

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->setPlaybackParams(Landroid/media/PlaybackParams;)V

    :cond_1
    return-void
.end method

.method public c()V
    .locals 3

    iget-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/k;->h:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/videoplayer/k;->h:Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    new-instance v1, Landroid/view/Surface;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    invoke-direct {v1, v2}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->setSurface(Landroid/view/Surface;)V

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/k;->f()V

    new-instance v0, Landroid/os/HandlerThread;

    const-string v1, "VideoPlayerMediaSystem"

    invoke-direct {v0, v1}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->b:Landroid/os/HandlerThread;

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->b:Landroid/os/HandlerThread;

    invoke-virtual {v0}, Landroid/os/HandlerThread;->start()V

    new-instance v0, Landroid/os/Handler;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k;->b:Landroid/os/HandlerThread;

    invoke-virtual {v1}, Landroid/os/HandlerThread;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/k$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoplayer/k$1;-><init>(Lcom/sigmob/sdk/videoplayer/k;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public d()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/k$7;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/videoplayer/k$7;-><init>(Lcom/sigmob/sdk/videoplayer/k;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    :goto_0
    return-void
.end method

.method public e()Z
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    invoke-virtual {v0}, Landroid/media/MediaPlayer;->isPlaying()Z

    move-result v0

    return v0
.end method

.method public f()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->b:Landroid/os/HandlerThread;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->b:Landroid/os/HandlerThread;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/k;->c:Landroid/os/Handler;

    new-instance v3, Lcom/sigmob/sdk/videoplayer/k$9;

    invoke-direct {v3, p0, v1, v0}, Lcom/sigmob/sdk/videoplayer/k$9;-><init>(Lcom/sigmob/sdk/videoplayer/k;Landroid/media/MediaPlayer;Landroid/os/HandlerThread;)V

    invoke-virtual {v2, v3}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    :cond_0
    return-void
.end method

.method public g()J
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getCurrentPosition()I

    move-result v0

    int-to-long v0, v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public h()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getVideoWidth()I

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public i()I
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getVideoHeight()I

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public j()J
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->getDuration()I

    move-result v0

    int-to-long v0, v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public onBufferingUpdate(Landroid/media/MediaPlayer;I)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k$13;

    invoke-direct {v0, p0, p2}, Lcom/sigmob/sdk/videoplayer/k$13;-><init>(Lcom/sigmob/sdk/videoplayer/k;I)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onCompletion(Landroid/media/MediaPlayer;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k$12;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoplayer/k$12;-><init>(Lcom/sigmob/sdk/videoplayer/k;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onError(Landroid/media/MediaPlayer;II)Z
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    if-nez p1, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k$3;

    invoke-direct {v0, p0, p2, p3}, Lcom/sigmob/sdk/videoplayer/k$3;-><init>(Lcom/sigmob/sdk/videoplayer/k;II)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    const/4 p1, 0x1

    return p1
.end method

.method public onInfo(Landroid/media/MediaPlayer;II)Z
    .locals 2

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    if-nez p1, :cond_0

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v1, Lcom/sigmob/sdk/videoplayer/k$4;

    invoke-direct {v1, p0, p2, p3}, Lcom/sigmob/sdk/videoplayer/k$4;-><init>(Lcom/sigmob/sdk/videoplayer/k;II)V

    invoke-virtual {p1, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_1
    :goto_0
    return v0
.end method

.method public onPrepared(Landroid/media/MediaPlayer;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k$11;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoplayer/k$11;-><init>(Lcom/sigmob/sdk/videoplayer/k;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onSeekComplete(Landroid/media/MediaPlayer;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k$2;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/videoplayer/k$2;-><init>(Lcom/sigmob/sdk/videoplayer/k;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public onSurfaceTextureAvailable(Landroid/graphics/SurfaceTexture;II)V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onSurfaceTextureAvailable() called with: surface = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "], width = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "], height = ["

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "]"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    if-nez p2, :cond_1

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    invoke-virtual {p0}, Lcom/sigmob/sdk/videoplayer/k;->c()V

    goto :goto_0

    :cond_1
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    iget-object p2, p0, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    invoke-interface {p1, p2}, Lcom/sigmob/sdk/videoplayer/i;->setSurfaceTexture(Landroid/graphics/SurfaceTexture;)V

    :goto_0
    return-void
.end method

.method public onSurfaceTextureDestroyed(Landroid/graphics/SurfaceTexture;)Z
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onSurfaceTextureDestroyed() called with: surface = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onSurfaceTextureSizeChanged() called with: surface = ["

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "], width = ["

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "], height = ["

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "]"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public onSurfaceTextureUpdated(Landroid/graphics/SurfaceTexture;)V
    .locals 0

    return-void
.end method

.method public onVideoSizeChanged(Landroid/media/MediaPlayer;II)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/videoplayer/k;->d:Landroid/os/Handler;

    new-instance v0, Lcom/sigmob/sdk/videoplayer/k$5;

    invoke-direct {v0, p0, p2, p3}, Lcom/sigmob/sdk/videoplayer/k$5;-><init>(Lcom/sigmob/sdk/videoplayer/k;II)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

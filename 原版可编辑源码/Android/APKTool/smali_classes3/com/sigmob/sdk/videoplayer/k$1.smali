.class Lcom/sigmob/sdk/videoplayer/k$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/videoplayer/k;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/videoplayer/k;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/videoplayer/k;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 8

    :try_start_0
    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->e:Lcom/sigmob/sdk/videoplayer/i;

    invoke-interface {v0}, Lcom/sigmob/sdk/videoplayer/i;->getVideoPlayerDataSource()Lcom/sigmob/sdk/videoplayer/h;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    new-instance v2, Landroid/media/MediaPlayer;

    invoke-direct {v2}, Landroid/media/MediaPlayer;-><init>()V

    iput-object v2, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    const/4 v2, 0x3

    invoke-virtual {v1, v2}, Landroid/media/MediaPlayer;->setAudioStreamType(I)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-boolean v2, v0, Lcom/sigmob/sdk/videoplayer/h;->e:Z

    invoke-virtual {v1, v2}, Landroid/media/MediaPlayer;->setLooping(Z)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v2}, Landroid/media/MediaPlayer;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v2}, Landroid/media/MediaPlayer;->setOnCompletionListener(Landroid/media/MediaPlayer$OnCompletionListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v2}, Landroid/media/MediaPlayer;->setOnBufferingUpdateListener(Landroid/media/MediaPlayer$OnBufferingUpdateListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/media/MediaPlayer;->setScreenOnWhilePlaying(Z)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v3, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v3}, Landroid/media/MediaPlayer;->setOnSeekCompleteListener(Landroid/media/MediaPlayer$OnSeekCompleteListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v3, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v3}, Landroid/media/MediaPlayer;->setOnErrorListener(Landroid/media/MediaPlayer$OnErrorListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v3, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v3}, Landroid/media/MediaPlayer;->setOnInfoListener(Landroid/media/MediaPlayer$OnInfoListener;)V

    iget-object v1, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v1, v1, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    iget-object v3, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-virtual {v1, v3}, Landroid/media/MediaPlayer;->setOnVideoSizeChangedListener(Landroid/media/MediaPlayer$OnVideoSizeChangedListener;)V

    const-class v1, Landroid/media/MediaPlayer;

    const-string v3, "setDataSource"

    const/4 v4, 0x2

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    const-class v6, Ljava/util/Map;

    aput-object v6, v5, v2

    invoke-virtual {v1, v3, v5}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iget-object v3, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v3, v3, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    new-array v4, v4, [Ljava/lang/Object;

    invoke-virtual {v0}, Lcom/sigmob/sdk/videoplayer/h;->a()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v7

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/h;->d:Ljava/util/HashMap;

    aput-object v0, v4, v2

    invoke-virtual {v1, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->prepareAsync()V

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    invoke-static {v0, v7}, Lcom/sigmob/sdk/videoplayer/k;->a(Lcom/sigmob/sdk/videoplayer/k;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v0, v0, Lcom/sigmob/sdk/videoplayer/k;->f:Landroid/media/MediaPlayer;

    new-instance v1, Landroid/view/Surface;

    iget-object v2, p0, Lcom/sigmob/sdk/videoplayer/k$1;->a:Lcom/sigmob/sdk/videoplayer/k;

    iget-object v2, v2, Lcom/sigmob/sdk/videoplayer/k;->a:Landroid/graphics/SurfaceTexture;

    invoke-direct {v1, v2}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->setSurface(Landroid/view/Surface;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

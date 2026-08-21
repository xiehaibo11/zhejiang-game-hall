.class public Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;
.super Ljava/lang/Object;
.source "ArmPlayer.java"

# interfaces
.implements Landroid/media/MediaPlayer$OnPreparedListener;
.implements Landroid/media/MediaPlayer$OnCompletionListener;
.implements Landroid/media/MediaPlayer$OnErrorListener;
.implements Lcom/bianfeng/fastvo/ErrorCode;
.implements Lcom/bianfeng/fastvo/audio/Player;


# instance fields
.field callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

.field dataSource:Ljava/lang/String;

.field player:Landroid/media/MediaPlayer;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->dataSource:Ljava/lang/String;

    .line 22
    new-instance p1, Landroid/media/MediaPlayer;

    invoke-direct {p1}, Landroid/media/MediaPlayer;-><init>()V

    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    const/4 v0, 0x3

    .line 23
    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->setAudioStreamType(I)V

    .line 24
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {p1, p0}, Landroid/media/MediaPlayer;->setOnPreparedListener(Landroid/media/MediaPlayer$OnPreparedListener;)V

    .line 25
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {p1, p0}, Landroid/media/MediaPlayer;->setOnCompletionListener(Landroid/media/MediaPlayer$OnCompletionListener;)V

    .line 26
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {p1, p0}, Landroid/media/MediaPlayer;->setOnErrorListener(Landroid/media/MediaPlayer$OnErrorListener;)V

    .line 27
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    const/high16 v0, 0x3f800000    # 1.0f

    invoke-virtual {p1, v0, v0}, Landroid/media/MediaPlayer;->setVolume(FF)V

    return-void
.end method


# virtual methods
.method public isPlaying()Z
    .locals 1

    .line 32
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->isPlaying()Z

    move-result v0

    return v0
.end method

.method public onCompletion(Landroid/media/MediaPlayer;)V
    .locals 1

    .line 54
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/media/MediaPlayer;->seekTo(I)V

    .line 55
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    invoke-interface {p1}, Lcom/bianfeng/fastvo/audio/AudioPlayCallback;->onPlayComplete()V

    return-void
.end method

.method public onError(Landroid/media/MediaPlayer;II)Z
    .locals 0

    .line 60
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {p1}, Landroid/media/MediaPlayer;->release()V

    .line 61
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    const/4 p2, 0x2

    const-string p3, "error"

    invoke-interface {p1, p2, p3}, Lcom/bianfeng/fastvo/audio/AudioPlayCallback;->onPlayFail(ILjava/lang/String;)V

    const/4 p1, 0x1

    return p1
.end method

.method public onPrepared(Landroid/media/MediaPlayer;)V
    .locals 0

    .line 49
    invoke-virtual {p1}, Landroid/media/MediaPlayer;->start()V

    return-void
.end method

.method public play(Lcom/bianfeng/fastvo/audio/AudioPlayCallback;)V
    .locals 2

    .line 38
    :try_start_0
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    .line 39
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->dataSource:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/media/MediaPlayer;->setDataSource(Ljava/lang/String;)V

    .line 40
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->prepareAsync()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 42
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 v1, 0x1

    .line 43
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v1, v0}, Lcom/bianfeng/fastvo/audio/AudioPlayCallback;->onPlayFail(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public release()V
    .locals 1

    .line 67
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 68
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->stop()V

    .line 69
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;->player:Landroid/media/MediaPlayer;

    invoke-virtual {v0}, Landroid/media/MediaPlayer;->release()V

    :cond_0
    return-void
.end method

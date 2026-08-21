.class public Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;
.super Ljava/lang/Object;
.source "SpeexPlayer.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/Player;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;
    }
.end annotation


# instance fields
.field callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

.field isPlay:Z

.field speexdec:Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;

.field th:Ljava/lang/Thread;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 18
    :try_start_0
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;

    new-instance v1, Ljava/io/File;

    invoke-direct {v1, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-direct {v0, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;-><init>(Ljava/io/File;)V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->speexdec:Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 20
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public isPlaying()Z
    .locals 1

    .line 48
    iget-boolean v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->isPlay:Z

    return v0
.end method

.method public play(Lcom/bianfeng/fastvo/audio/AudioPlayCallback;)V
    .locals 1

    .line 53
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    const/4 p1, 0x1

    .line 54
    iput-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->isPlay:Z

    .line 55
    new-instance p1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;

    invoke-direct {p1, p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;-><init>(Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;)V

    .line 56
    new-instance v0, Ljava/lang/Thread;

    invoke-direct {v0, p1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->th:Ljava/lang/Thread;

    .line 57
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public release()V
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->th:Ljava/lang/Thread;

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V

    const/4 v0, 0x0

    .line 63
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->isPlay:Z

    return-void
.end method

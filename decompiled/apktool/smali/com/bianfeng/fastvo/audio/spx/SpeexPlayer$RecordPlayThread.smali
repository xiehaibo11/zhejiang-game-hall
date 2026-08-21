.class Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;
.super Ljava/lang/Thread;
.source "SpeexPlayer.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "RecordPlayThread"
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;


# direct methods
.method constructor <init>(Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;)V
    .locals 0

    .line 24
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 4

    const/4 v0, 0x0

    .line 28
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iget-object v1, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->speexdec:Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;

    if-eqz v1, :cond_0

    const-string v1, "start decode"

    .line 29
    invoke-static {v1}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    .line 30
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iget-object v1, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->speexdec:Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;

    invoke-virtual {v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->decode()V

    const-string v1, "finish decode"

    .line 31
    invoke-static {v1}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    .line 32
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iget-object v1, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    invoke-interface {v1}, Lcom/bianfeng/fastvo/audio/AudioPlayCallback;->onPlayComplete()V

    .line 33
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iput-boolean v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->isPlay:Z

    goto :goto_0

    .line 35
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iget-object v1, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    const/4 v2, -0x6

    const-string v3, "speex decoder is null"

    invoke-interface {v1, v2, v3}, Lcom/bianfeng/fastvo/audio/AudioPlayCallback;->onPlayFail(ILjava/lang/String;)V

    .line 36
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iput-boolean v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->isPlay:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 39
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 40
    iget-object v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iget-object v2, v2, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->callback:Lcom/bianfeng/fastvo/audio/AudioPlayCallback;

    const/4 v3, 0x2

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v2, v3, v1}, Lcom/bianfeng/fastvo/audio/AudioPlayCallback;->onPlayFail(ILjava/lang/String;)V

    .line 41
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer$RecordPlayThread;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iput-boolean v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;->isPlay:Z

    :goto_0
    return-void
.end method

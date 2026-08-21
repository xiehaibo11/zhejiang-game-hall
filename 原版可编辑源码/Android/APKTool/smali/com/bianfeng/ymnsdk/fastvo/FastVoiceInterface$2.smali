.class Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;
.super Ljava/lang/Object;
.source "FastVoiceInterface.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/PlayCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startPlay(Ljava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)V
    .locals 0

    .line 195
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onDownloadComplete(Ljava/lang/String;)V
    .locals 2

    .line 210
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v1, 0x57e

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onPlayComplete()V
    .locals 3

    .line 203
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->stopPlay()V

    .line 204
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->access$000(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->closeSpeakerphoneOn()V

    .line 205
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v1, 0x57c

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onPlayFail(ILjava/lang/String;)V
    .locals 2

    .line 198
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->access$000(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->closeSpeakerphoneOn()V

    .line 199
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$2;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "|"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x57d

    invoke-virtual {v0, p2, p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

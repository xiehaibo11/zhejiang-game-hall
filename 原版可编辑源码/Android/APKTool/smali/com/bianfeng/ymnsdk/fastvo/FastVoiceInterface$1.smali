.class Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;
.super Ljava/lang/Object;
.source "FastVoiceInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->startRecord()V
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

    .line 105
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onAllow(ILjava/lang/String;)V
    .locals 0

    return-void
.end method

.method public onAllowAll(I)V
    .locals 2

    const-string p1, "\u5f00\u59cb\u5f55\u97f3"

    .line 108
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 109
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->access$000(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->closeVolume()V

    .line 110
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->isPlaying()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 111
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v0, 0x57d

    const-string v1, "\u64ad\u653e\u5931\u8d25\uff0c\u6b63\u5728\u5f00\u59cb\u5f55\u97f3"

    invoke-virtual {p1, v0, v1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    .line 113
    :cond_0
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->stopPlay()V

    .line 114
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    new-instance v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;-><init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;)V

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->tryRunOnUiThreadOrJustRun(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onDeny(ILjava/lang/String;)V
    .locals 3

    .line 152
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6388\u6743\u5931\u8d25"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v2, 0x6591

    invoke-virtual {p1, v2, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    .line 153
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x8a1

    invoke-virtual {p1, v0, p2}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onDenyIn48Hours(ILjava/lang/String;)V
    .locals 3

    .line 158
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u8fd9\u4e2a\u662f48\u5c0f\u65f6"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v2, 0x6591

    invoke-virtual {p1, v2, v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    .line 159
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const/16 v0, 0x8a3

    invoke-virtual {p1, v0, p2}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.class Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;
.super Ljava/lang/Object;
.source "FastVoiceInterface.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/RecordCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onRecordCancel()V
    .locals 3

    .line 138
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v1, 0x580

    const-string v2, "\u5f55\u97f3\u53d6\u6d88"

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onRecordFail(ILjava/lang/String;)V
    .locals 4

    .line 126
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->access$000(Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;)Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->openVolume()V

    const-string v0, "|"

    const/4 v1, 0x3

    if-ne p1, v1, :cond_0

    .line 128
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v2, 0x57f

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    goto :goto_0

    .line 130
    :cond_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    iget-object v1, v1, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v2, 0x57a

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v2, p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onRecordSuccess(Ljava/lang/String;)V
    .locals 2

    .line 122
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v1, 0x579

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public onUploadSuccess(Ljava/lang/String;)V
    .locals 2

    .line 134
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1$1;->this$2:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1$1;->this$1:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;

    iget-object v0, v0, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface$1;->this$0:Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;

    const/16 v1, 0x57b

    invoke-virtual {v0, v1, p1}, Lcom/bianfeng/ymnsdk/fastvo/FastVoiceInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

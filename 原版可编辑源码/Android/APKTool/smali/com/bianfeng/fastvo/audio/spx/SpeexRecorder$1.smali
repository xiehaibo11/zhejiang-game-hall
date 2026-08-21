.class Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;
.super Ljava/lang/Object;
.source "SpeexRecorder.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/spx/SpeexListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;


# direct methods
.method constructor <init>(Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onError()V
    .locals 3

    .line 61
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    iget-object v0, v0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    const/16 v1, -0x15

    const-string v2, "\u5f55\u97f3\u6587\u4ef6\u5199\u5165\u51fa\u9519\uff0c\u8bf7\u68c0\u67e5\u5b58\u50a8\u7a7a\u95f4"

    invoke-interface {v0, v1, v2}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void
.end method

.method public onStop()V
    .locals 2

    .line 53
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    iget-boolean v0, v0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isCanceled:Z

    if-eqz v0, :cond_0

    .line 54
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    iget-object v0, v0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordCancel()V

    goto :goto_0

    .line 56
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    iget-object v0, v0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;->this$0:Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;

    iget-object v1, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->fileName:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordSuccess(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

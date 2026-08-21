.class Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;
.super Ljava/lang/Object;
.source "FastVoice.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/AudioRecordCallback;
.implements Lcom/bianfeng/fastvo/action/UploadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/fastvo/FastVoice;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "AudioRecordTask"
.end annotation


# instance fields
.field callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

.field private fileName:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/bianfeng/fastvo/audio/RecordCallback;)V
    .locals 0

    .line 91
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 92
    iput-object p1, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    return-void
.end method


# virtual methods
.method public onComplete(Ljava/lang/String;)V
    .locals 2

    .line 121
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->access$200()Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->fileName:Ljava/lang/String;

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    invoke-interface {v0, p1}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onUploadSuccess(Ljava/lang/String;)V

    return-void
.end method

.method public onError(ILjava/lang/String;)V
    .locals 1

    .line 127
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void
.end method

.method public onRecordCancel()V
    .locals 1

    const/4 v0, 0x0

    .line 115
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$002(Z)Z

    .line 116
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordCancel()V

    return-void
.end method

.method public onRecordFail(ILjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 109
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$002(Z)Z

    .line 110
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void
.end method

.method public onRecordSuccess(Ljava/lang/String;)V
    .locals 5

    const/4 v0, 0x0

    .line 97
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$002(Z)Z

    .line 98
    invoke-static {}, Lcom/bianfeng/fastvo/FastVoice;->access$100()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    .line 99
    iput-object p1, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->fileName:Ljava/lang/String;

    .line 100
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    invoke-interface {v0, p1}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordSuccess(Ljava/lang/String;)V

    .line 101
    invoke-static {p1, p0}, Lcom/bianfeng/fastvo/action/OSSHelper;->upLoadFile(Ljava/lang/String;Lcom/bianfeng/fastvo/action/UploadListener;)V

    goto :goto_0

    .line 103
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/fastvo/FastVoice$AudioRecordTask;->callback:Lcom/bianfeng/fastvo/audio/RecordCallback;

    const/4 v0, 0x1

    const-string v1, "\u5f55\u97f3\u65f6\u95f4\u8fc7\u77ed"

    invoke-interface {p1, v0, v1}, Lcom/bianfeng/fastvo/audio/RecordCallback;->onRecordFail(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

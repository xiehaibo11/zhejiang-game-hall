.class Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;
.super Ljava/lang/Object;
.source "FastVoice.java"

# interfaces
.implements Lcom/bianfeng/fastvo/audio/AudioPlayCallback;
.implements Lcom/bianfeng/fastvo/action/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/fastvo/FastVoice;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "AudioPlayTask"
.end annotation


# instance fields
.field callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

.field retryCount:I


# direct methods
.method public constructor <init>(Lcom/bianfeng/fastvo/audio/PlayCallback;)V
    .locals 0

    .line 234
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 235
    iput-object p1, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    return-void
.end method


# virtual methods
.method public onBegin(Lcom/bianfeng/fastvo/action/DownloadFile;)V
    .locals 0

    const-string p1, "begin download spx file"

    .line 248
    invoke-static {p1}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    return-void
.end method

.method public onComplete(Lcom/bianfeng/fastvo/action/DownloadFile;)V
    .locals 2

    const-string v0, "complete download spx file"

    .line 256
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    .line 257
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    iget-object v1, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onDownloadComplete(Ljava/lang/String;)V

    .line 258
    iget-object v0, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/fastvo/util/FileUtil;->getSuffix(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, ".spx"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 259
    new-instance v1, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;

    iget-object p1, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-direct {v1, p1}, Lcom/bianfeng/fastvo/audio/amr/ArmPlayer;-><init>(Ljava/lang/String;)V

    sput-object v1, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    goto :goto_0

    .line 260
    :cond_0
    new-instance v1, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;

    iget-object p1, p1, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    invoke-direct {v1, p1}, Lcom/bianfeng/fastvo/audio/spx/SpeexPlayer;-><init>(Ljava/lang/String;)V

    sput-object v1, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    .line 261
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "use SpeexPlayer : "

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    .line 262
    sget-object p1, Lcom/bianfeng/fastvo/FastVoice;->player:Lcom/bianfeng/fastvo/audio/Player;

    invoke-interface {p1, p0}, Lcom/bianfeng/fastvo/audio/Player;->play(Lcom/bianfeng/fastvo/audio/AudioPlayCallback;)V

    return-void
.end method

.method public onError(ILcom/bianfeng/fastvo/action/DownloadFile;)V
    .locals 2

    const/4 v0, 0x0

    .line 267
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$302(Z)Z

    .line 268
    iget v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->retryCount:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->retryCount:I

    const/4 v1, 0x3

    if-ge v0, v1, :cond_0

    .line 269
    iget-object p1, p2, Lcom/bianfeng/fastvo/action/DownloadFile;->url:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->start(Ljava/lang/String;)V

    goto :goto_0

    .line 271
    :cond_0
    iget-object p2, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    const-string v0, "try download more than 3 times"

    invoke-interface {p2, p1, v0}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayFail(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public onPlayComplete()V
    .locals 1

    const/4 v0, 0x0

    .line 277
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$302(Z)Z

    const-string v0, "onPlayComplete"

    .line 278
    invoke-static {v0}, Lcom/bianfeng/fastvo/util/LogUtil;->d(Ljava/lang/String;)V

    .line 279
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayComplete()V

    return-void
.end method

.method public onPlayFail(ILjava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 284
    invoke-static {v0}, Lcom/bianfeng/fastvo/FastVoice;->access$302(Z)Z

    .line 285
    iget-object v0, p0, Lcom/bianfeng/fastvo/FastVoice$AudioPlayTask;->callback:Lcom/bianfeng/fastvo/audio/PlayCallback;

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/fastvo/audio/PlayCallback;->onPlayFail(ILjava/lang/String;)V

    return-void
.end method

.method public onUpdate(Lcom/bianfeng/fastvo/action/DownloadFile;)V
    .locals 0

    return-void
.end method

.method public start(Ljava/lang/String;)V
    .locals 3

    .line 239
    new-instance v0, Lcom/bianfeng/fastvo/action/DownloadFile;

    invoke-direct {v0}, Lcom/bianfeng/fastvo/action/DownloadFile;-><init>()V

    .line 240
    iput-object p1, v0, Lcom/bianfeng/fastvo/action/DownloadFile;->url:Ljava/lang/String;

    .line 241
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "P"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getQuality()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/bianfeng/fastvo/util/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p1}, Lcom/bianfeng/fastvo/util/FileUtil;->getSuffix(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/fastvo/FastResource;->mkDataFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/bianfeng/fastvo/action/DownloadFile;->filePath:Ljava/lang/String;

    .line 242
    new-instance p1, Lcom/bianfeng/fastvo/action/DownloadTask;

    invoke-static {}, Lcom/bianfeng/fastvo/FastResource;->getApplication()Landroid/content/Context;

    move-result-object v1

    invoke-direct {p1, v1, p0}, Lcom/bianfeng/fastvo/action/DownloadTask;-><init>(Landroid/content/Context;Lcom/bianfeng/fastvo/action/DownloadListener;)V

    .line 243
    invoke-virtual {p1, v0}, Lcom/bianfeng/fastvo/action/DownloadTask;->start(Lcom/bianfeng/fastvo/action/DownloadFile;)V

    return-void
.end method

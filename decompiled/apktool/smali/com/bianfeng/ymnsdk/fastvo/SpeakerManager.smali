.class public Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;
.super Ljava/lang/Object;
.source "SpeakerManager.java"


# instance fields
.field private audioManager:Landroid/media/AudioManager;

.field private curVoice:I

.field private maxVoice:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "audio"

    .line 19
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/media/AudioManager;

    iput-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    const/4 v0, 0x3

    .line 20
    invoke-virtual {p1, v0}, Landroid/media/AudioManager;->getStreamMaxVolume(I)I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->maxVoice:I

    return-void
.end method

.method private setCurVoice()V
    .locals 4

    .line 69
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 70
    iget v2, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->curVoice:I

    const/4 v3, 0x4

    invoke-virtual {v0, v1, v2, v3}, Landroid/media/AudioManager;->setStreamVolume(III)V

    :cond_0
    return-void
.end method

.method private setMaxVoice()V
    .locals 4

    .line 63
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 64
    iget v2, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->maxVoice:I

    const/4 v3, 0x4

    invoke-virtual {v0, v1, v2, v3}, Landroid/media/AudioManager;->setStreamVolume(III)V

    :cond_0
    return-void
.end method


# virtual methods
.method public closeSpeakerphoneOn()V
    .locals 4

    .line 50
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x0

    .line 51
    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    .line 52
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    const/4 v1, 0x3

    iget v2, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->curVoice:I

    const/4 v3, 0x4

    invoke-virtual {v0, v1, v2, v3}, Landroid/media/AudioManager;->setStreamVolume(III)V

    :cond_0
    return-void
.end method

.method public closeVolume()V
    .locals 3

    .line 75
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 76
    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result v0

    if-lez v0, :cond_0

    .line 78
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/media/AudioManager;->setStreamMute(IZ)V

    :cond_0
    return-void
.end method

.method public openSpeakerphoneOn(Ljava/lang/String;)V
    .locals 8

    .line 24
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->curVoice:I

    if-nez v0, :cond_0

    const-string p1, "\u5f53\u524d\u97f3\u91cf\u9759\u97f3"

    .line 26
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    return-void

    .line 29
    :cond_0
    iget v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->maxVoice:I

    int-to-double v2, v0

    const-wide/high16 v4, 0x3fe0000000000000L    # 0.5

    invoke-static {v2, v3}, Ljava/lang/Double;->isNaN(D)Z

    mul-double v2, v2, v4

    double-to-int v0, v2

    .line 31
    :try_start_0
    invoke-static {p1}, Ljava/lang/Double;->parseDouble(Ljava/lang/String;)D

    move-result-wide v2

    const-wide/high16 v6, 0x3ff0000000000000L    # 1.0

    cmpl-double p1, v2, v6

    if-lez p1, :cond_1

    move-wide v2, v6

    :cond_1
    const-wide/16 v6, 0x0

    cmpg-double p1, v2, v6

    if-gtz p1, :cond_2

    goto :goto_0

    :cond_2
    move-wide v4, v2

    .line 38
    :goto_0
    iget p1, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->maxVoice:I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    int-to-double v2, p1

    invoke-static {v2, v3}, Ljava/lang/Double;->isNaN(D)Z

    mul-double v2, v2, v4

    double-to-int v0, v2

    goto :goto_1

    :catch_0
    move-exception p1

    .line 40
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "openSpeakerphoneOn "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 42
    :goto_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "openSpeakerphoneOn \u97f3\u91cf "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 43
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    if-eqz p1, :cond_3

    const/4 v2, 0x1

    .line 44
    invoke-virtual {p1, v2}, Landroid/media/AudioManager;->setSpeakerphoneOn(Z)V

    .line 45
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    const/4 v2, 0x4

    invoke-virtual {p1, v1, v0, v2}, Landroid/media/AudioManager;->setStreamVolume(III)V

    :cond_3
    return-void
.end method

.method public openVolume()V
    .locals 3

    .line 57
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/fastvo/SpeakerManager;->audioManager:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    const/4 v2, 0x0

    .line 58
    invoke-virtual {v0, v1, v2}, Landroid/media/AudioManager;->setStreamMute(IZ)V

    :cond_0
    return-void
.end method

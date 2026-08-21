.class public Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;
.super Ljava/lang/Object;
.source "ArmRecorder.java"

# interfaces
.implements Landroid/media/MediaRecorder$OnErrorListener;
.implements Lcom/bianfeng/fastvo/ErrorCode;
.implements Lcom/bianfeng/fastvo/audio/Recorder;


# static fields
.field public static final QUALITY_44KHZ:I = 0x3

.field public static final QUALITY_96KHZ:I = 0x4

.field public static final SAMPLERATE_11KHZ:I = 0x1

.field public static final SAMPLERATE_22KHZ:I = 0x2

.field public static final SAMPLERATE_8KHZ:I


# instance fields
.field callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

.field isCanceled:Z

.field outputFile:Ljava/lang/String;

.field recorder:Landroid/media/MediaRecorder;

.field recording:Z

.field private sampleRates:[I


# direct methods
.method public constructor <init>()V
    .locals 3

    .line 35
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "VO"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ".m4a"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/fastvo/FastResource;->mkDataFile(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 3

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x5

    new-array v0, v0, [I

    .line 26
    fill-array-data v0, :array_0

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->sampleRates:[I

    .line 39
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->outputFile:Ljava/lang/String;

    .line 41
    new-instance v0, Landroid/media/MediaRecorder;

    invoke-direct {v0}, Landroid/media/MediaRecorder;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    const/4 v1, 0x1

    .line 42
    invoke-virtual {v0, v1}, Landroid/media/MediaRecorder;->setAudioSource(I)V

    .line 43
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/media/MediaRecorder;->setOutputFormat(I)V

    .line 44
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/media/MediaRecorder;->setAudioEncoder(I)V

    .line 45
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->sampleRates:[I

    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getSampleRate()I

    move-result v2

    aget v1, v1, v2

    invoke-virtual {v0, v1}, Landroid/media/MediaRecorder;->setAudioSamplingRate(I)V

    .line 46
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {v0, p1}, Landroid/media/MediaRecorder;->setOutputFile(Ljava/lang/String;)V

    .line 47
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getMaxRecordTime()I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/media/MediaRecorder;->setMaxDuration(I)V

    .line 48
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {p1, p0}, Landroid/media/MediaRecorder;->setOnErrorListener(Landroid/media/MediaRecorder$OnErrorListener;)V

    return-void

    nop

    :array_0
    .array-data 4
        0x1f40
        0x2b11
        0x5622
        0xac44
        0x17700
    .end array-data
.end method


# virtual methods
.method public cancel()V
    .locals 1

    const/4 v0, 0x1

    .line 95
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->isCanceled:Z

    .line 96
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->release()V

    return-void
.end method

.method public isRecording()Z
    .locals 1

    .line 59
    iget-boolean v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recording:Z

    return v0
.end method

.method public onError(Landroid/media/MediaRecorder;II)V
    .locals 0

    .line 53
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {p1}, Landroid/media/MediaRecorder;->reset()V

    const/4 p1, 0x0

    .line 54
    iput-boolean p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recording:Z

    return-void
.end method

.method public release()V
    .locals 3

    const/4 v0, 0x0

    .line 79
    :try_start_0
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recording:Z

    .line 80
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {v0}, Landroid/media/MediaRecorder;->stop()V

    .line 81
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {v0}, Landroid/media/MediaRecorder;->release()V

    const/4 v0, 0x0

    .line 82
    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    .line 83
    iget-boolean v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->isCanceled:Z

    if-eqz v0, :cond_0

    .line 84
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordCancel()V

    goto :goto_0

    .line 86
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->outputFile:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordSuccess(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 88
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 89
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    const/4 v2, 0x2

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v1, v2, v0}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordFail(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public start(Lcom/bianfeng/fastvo/audio/AudioRecordCallback;)V
    .locals 3

    const/4 v0, 0x1

    .line 65
    :try_start_0
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    .line 66
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {v1}, Landroid/media/MediaRecorder;->prepare()V

    .line 67
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {v1}, Landroid/media/MediaRecorder;->start()V

    .line 68
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recording:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 70
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 71
    iget-object v2, p0, Lcom/bianfeng/fastvo/audio/amr/ArmRecorder;->recorder:Landroid/media/MediaRecorder;

    invoke-virtual {v2}, Landroid/media/MediaRecorder;->release()V

    .line 72
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordFail(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

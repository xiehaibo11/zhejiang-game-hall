.class public Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;
.super Ljava/lang/Object;
.source "SpeexRecorder.java"

# interfaces
.implements Landroid/os/Handler$Callback;
.implements Ljava/lang/Runnable;
.implements Lcom/bianfeng/fastvo/audio/Recorder;


# static fields
.field static final frequency:I = 0x1f40

.field static packagesize:I = 0xa0


# instance fields
.field callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

.field fileName:Ljava/lang/String;

.field handler:Landroid/os/Handler;

.field isCanceled:Z

.field volatile isRecording:Z

.field final mutex:Ljava/lang/Object;

.field quality:I

.field recorder:Landroid/media/AudioRecord;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 7

    .line 30
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 19
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->mutex:Ljava/lang/Object;

    .line 31
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->fileName:Ljava/lang/String;

    .line 32
    iput p2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->quality:I

    .line 33
    new-instance p1, Landroid/os/Handler;

    invoke-direct {p1, p0}, Landroid/os/Handler;-><init>(Landroid/os/Handler$Callback;)V

    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->handler:Landroid/os/Handler;

    const/4 p1, 0x2

    const/16 p2, 0x1f40

    const/16 v0, 0x10

    .line 36
    invoke-static {p2, v0, p1}, Landroid/media/AudioRecord;->getMinBufferSize(III)I

    move-result v6

    .line 40
    new-instance p1, Landroid/media/AudioRecord;

    const/4 v2, 0x1

    const/16 v3, 0x1f40

    const/16 v4, 0x10

    const/4 v5, 0x2

    move-object v1, p1

    invoke-direct/range {v1 .. v6}, Landroid/media/AudioRecord;-><init>(IIIII)V

    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->recorder:Landroid/media/AudioRecord;

    return-void
.end method

.method private setRecording(Z)V
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->mutex:Ljava/lang/Object;

    monitor-enter v0

    .line 109
    :try_start_0
    iput-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isRecording:Z

    .line 110
    iget-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isRecording:Z

    if-eqz p1, :cond_0

    .line 111
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->mutex:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notify()V

    .line 113
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method


# virtual methods
.method public cancel()V
    .locals 1

    const/4 v0, 0x1

    .line 141
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isCanceled:Z

    .line 142
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->release()V

    return-void
.end method

.method public handleMessage(Landroid/os/Message;)Z
    .locals 0

    .line 147
    iget-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isRecording:Z

    if-eqz p1, :cond_0

    .line 148
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->release()V

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public isRecording()Z
    .locals 2

    .line 118
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->mutex:Ljava/lang/Object;

    monitor-enter v0

    .line 119
    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isRecording:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 120
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public release()V
    .locals 2

    .line 134
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->handler:Landroid/os/Handler;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    const/4 v0, 0x0

    .line 135
    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->handler:Landroid/os/Handler;

    .line 136
    invoke-direct {p0, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->setRecording(Z)V

    return-void
.end method

.method public run()V
    .locals 5

    .line 49
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;

    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->fileName:Ljava/lang/String;

    iget v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->quality:I

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;-><init>(Ljava/lang/String;I)V

    .line 50
    new-instance v1, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder$1;-><init>(Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->setListener(Lcom/bianfeng/fastvo/audio/spx/SpeexListener;)V

    .line 65
    new-instance v1, Ljava/lang/Thread;

    invoke-direct {v1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    const/4 v2, 0x1

    .line 66
    invoke-virtual {v0, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->setRecording(Z)V

    .line 67
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    .line 70
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->mutex:Ljava/lang/Object;

    monitor-enter v1

    .line 71
    :goto_0
    :try_start_0
    iget-boolean v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isRecording:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_0

    .line 73
    :try_start_1
    iget-object v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->mutex:Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Object;->wait()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 75
    :try_start_2
    new-instance v2, Ljava/lang/IllegalStateException;

    const-string v3, "Wait() interrupted!"

    invoke-direct {v2, v3, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v2

    .line 78
    :cond_0
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    const/16 v1, -0x13

    .line 80
    invoke-static {v1}, Landroid/os/Process;->setThreadPriority(I)V

    .line 83
    sget v1, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->packagesize:I

    new-array v1, v1, [S

    .line 85
    :try_start_3
    iget-object v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v2}, Landroid/media/AudioRecord;->startRecording()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    .line 91
    :goto_1
    iget-boolean v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->isRecording:Z

    const/4 v3, 0x0

    if-eqz v2, :cond_3

    .line 92
    iget-object v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->recorder:Landroid/media/AudioRecord;

    sget v4, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->packagesize:I

    invoke-virtual {v2, v1, v3, v4}, Landroid/media/AudioRecord;->read([SII)I

    move-result v2

    const/4 v4, -0x3

    if-eq v2, v4, :cond_2

    const/4 v4, -0x2

    if-ne v2, v4, :cond_1

    goto :goto_2

    .line 100
    :cond_1
    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->putData([SI)V

    goto :goto_1

    .line 95
    :cond_2
    :goto_2
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v1}, Landroid/media/AudioRecord;->stop()V

    .line 96
    invoke-virtual {v0, v3}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->setRecording(Z)V

    .line 97
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    const-string v1, "AudioRecord returned ERROR_INVALID_OPERATION or ERROR_BAD_VALUE"

    invoke-interface {v0, v2, v1}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void

    .line 102
    :cond_3
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->recorder:Landroid/media/AudioRecord;

    invoke-virtual {v1}, Landroid/media/AudioRecord;->stop()V

    .line 104
    invoke-virtual {v0, v3}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->setRecording(Z)V

    return-void

    :catch_1
    move-exception v0

    .line 87
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 88
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    const/16 v1, -0x14

    const-string v2, "\u8bed\u97f3\u6743\u9650\u672a\u5f00\u542f"

    invoke-interface {v0, v1, v2}, Lcom/bianfeng/fastvo/audio/AudioRecordCallback;->onRecordFail(ILjava/lang/String;)V

    return-void

    :catchall_0
    move-exception v0

    .line 78
    :try_start_4
    monitor-exit v1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_4

    :goto_3
    throw v0

    :goto_4
    goto :goto_3
.end method

.method public start(Lcom/bianfeng/fastvo/audio/AudioRecordCallback;)V
    .locals 3

    .line 125
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->callback:Lcom/bianfeng/fastvo/audio/AudioRecordCallback;

    const/4 p1, 0x1

    .line 126
    invoke-direct {p0, p1}, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->setRecording(Z)V

    .line 127
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexRecorder;->handler:Landroid/os/Handler;

    invoke-static {}, Lcom/bianfeng/fastvo/FastConfig;->getMaxRecordTime()I

    move-result v0

    int-to-long v0, v0

    const/4 v2, 0x0

    invoke-virtual {p1, v2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 128
    new-instance p1, Ljava/lang/Thread;

    invoke-direct {p1, p0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 129
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    return-void
.end method

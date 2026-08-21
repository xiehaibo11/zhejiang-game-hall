.class public Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;
.super Ljava/lang/Object;
.source "SpeexEncoder.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;
    }
.end annotation


# static fields
.field public static encoder_packagesize:I = 0x400


# instance fields
.field private fileName:Ljava/lang/String;

.field private volatile isRecording:Z

.field list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;",
            ">;"
        }
    .end annotation
.end field

.field private listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

.field private final mutex:Ljava/lang/Object;

.field private processedData:[B

.field private speex:Lcom/bianfeng/fastvo/audio/spx/Speex;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;I)V
    .locals 2

    .line 26
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->mutex:Ljava/lang/Object;

    .line 10
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/Speex;

    invoke-direct {v0}, Lcom/bianfeng/fastvo/audio/spx/Speex;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->speex:Lcom/bianfeng/fastvo/audio/spx/Speex;

    .line 13
    sget v1, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->encoder_packagesize:I

    new-array v1, v1, [B

    iput-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->processedData:[B

    const/4 v1, 0x0

    .line 15
    iput-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->list:Ljava/util/List;

    .line 27
    invoke-virtual {v0, p2}, Lcom/bianfeng/fastvo/audio/spx/Speex;->init(I)V

    .line 28
    new-instance p2, Ljava/util/LinkedList;

    invoke-direct {p2}, Ljava/util/LinkedList;-><init>()V

    invoke-static {p2}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object p2

    iput-object p2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->list:Ljava/util/List;

    .line 29
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->fileName:Ljava/lang/String;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)Lcom/bianfeng/fastvo/audio/spx/SpeexListener;
    .locals 0

    .line 7
    iget-object p0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    return-object p0
.end method


# virtual methods
.method public isRecording()Z
    .locals 2

    .line 95
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->mutex:Ljava/lang/Object;

    monitor-enter v0

    .line 96
    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->isRecording:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 97
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public putData([SI)V
    .locals 4

    .line 80
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;

    invoke-direct {v0, p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;-><init>(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)V

    .line 81
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->mutex:Ljava/lang/Object;

    monitor-enter v1

    .line 82
    :try_start_0
    invoke-static {v0, p2}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->access$202(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;I)I

    .line 83
    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->access$100(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;)[S

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {p1, v3, v2, v3, p2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 84
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->list:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 85
    monitor-exit v1

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public run()V
    .locals 7

    .line 33
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;

    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->fileName:Ljava/lang/String;

    invoke-direct {v0, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;-><init>(Ljava/lang/String;)V

    .line 34
    new-instance v1, Ljava/lang/Thread;

    invoke-direct {v1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    const/4 v2, 0x1

    .line 35
    invoke-virtual {v0, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->setRecording(Z)V

    .line 36
    invoke-virtual {v1}, Ljava/lang/Thread;->start()V

    .line 37
    new-instance v1, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$1;-><init>(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->setListener(Lcom/bianfeng/fastvo/audio/spx/SpeexListener;)V

    const/16 v1, -0x13

    .line 53
    invoke-static {v1}, Landroid/os/Process;->setThreadPriority(I)V

    .line 56
    :cond_0
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->isRecording()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_2

    .line 57
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->list:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    const-wide/16 v1, 0x14

    .line 59
    :try_start_0
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 61
    invoke-virtual {v1}, Ljava/lang/InterruptedException;->printStackTrace()V

    goto :goto_0

    .line 65
    :cond_1
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->list:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 66
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->mutex:Ljava/lang/Object;

    monitor-enter v1

    .line 67
    :try_start_1
    iget-object v3, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->list:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;

    .line 68
    iget-object v4, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->speex:Lcom/bianfeng/fastvo/audio/spx/Speex;

    invoke-static {v3}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->access$100(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;)[S

    move-result-object v5

    iget-object v6, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->processedData:[B

    invoke-static {v3}, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;->access$200(Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder$ReadData;)I

    move-result v3

    invoke-virtual {v4, v5, v2, v6, v3}, Lcom/bianfeng/fastvo/audio/spx/Speex;->encode([SI[BI)I

    move-result v2

    .line 69
    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-lez v2, :cond_0

    .line 71
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->processedData:[B

    invoke-virtual {v0, v1, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->putData([BI)V

    .line 72
    sget v1, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->encoder_packagesize:I

    new-array v1, v1, [B

    iput-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->processedData:[B

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 69
    :try_start_2
    monitor-exit v1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v0

    .line 76
    :cond_2
    invoke-virtual {v0, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->setRecording(Z)V

    return-void
.end method

.method public setListener(Lcom/bianfeng/fastvo/audio/spx/SpeexListener;)V
    .locals 0

    .line 22
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    return-void
.end method

.method public setRecording(Z)V
    .locals 1

    .line 89
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->mutex:Ljava/lang/Object;

    monitor-enter v0

    .line 90
    :try_start_0
    iput-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexEncoder;->isRecording:Z

    .line 91
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

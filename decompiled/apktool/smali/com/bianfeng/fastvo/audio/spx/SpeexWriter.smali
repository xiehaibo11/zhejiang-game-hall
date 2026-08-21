.class public Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;
.super Ljava/lang/Object;
.source "SpeexWriter.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;
    }
.end annotation


# static fields
.field public static write_packageSize:I = 0x400


# instance fields
.field private client:Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

.field private volatile isRecording:Z

.field private list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;",
            ">;"
        }
    .end annotation
.end field

.field private listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

.field private final mutex:Ljava/lang/Object;

.field private pData:Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 9
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->mutex:Ljava/lang/Object;

    .line 11
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

    invoke-direct {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->client:Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

    .line 26
    new-instance v0, Ljava/util/LinkedList;

    invoke-direct {v0}, Ljava/util/LinkedList;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedList(Ljava/util/List;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->list:Ljava/util/List;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->client:Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

    const/16 v1, 0x1f40

    invoke-virtual {v0, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->setSampleRate(I)V

    .line 30
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->client:Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

    invoke-virtual {v0, p1}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->start(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public isRecording()Z
    .locals 2

    .line 86
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->mutex:Ljava/lang/Object;

    monitor-enter v0

    .line 87
    :try_start_0
    iget-boolean v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->isRecording:Z

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    .line 88
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public putData([BI)V
    .locals 3

    .line 59
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;

    invoke-direct {v0, p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;-><init>(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;)V

    .line 60
    invoke-static {v0, p2}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->access$102(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;I)I

    .line 61
    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;)[B

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p1, v2, v1, v2, p2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 62
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->list:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public run()V
    .locals 3

    .line 34
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->isRecording()Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->list:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    goto :goto_1

    .line 51
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->stop()V

    .line 53
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    if-eqz v0, :cond_1

    .line 54
    invoke-interface {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexListener;->onStop()V

    :cond_1
    return-void

    .line 36
    :cond_2
    :goto_1
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->list:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 37
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->list:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->pData:Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;

    .line 39
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->client:Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

    invoke-static {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->access$000(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;)[B

    move-result-object v0

    iget-object v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->pData:Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;

    invoke-static {v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;->access$100(Lcom/bianfeng/fastvo/audio/spx/SpeexWriter$processedData;)I

    move-result v2

    invoke-virtual {v1, v0, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->writeTag([BI)V

    goto :goto_0

    :cond_3
    const-wide/16 v0, 0x14

    .line 43
    :try_start_0
    invoke-static {v0, v1}, Ljava/lang/Thread;->sleep(J)V
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 45
    invoke-virtual {v0}, Ljava/lang/InterruptedException;->printStackTrace()V

    goto :goto_0
.end method

.method public setListener(Lcom/bianfeng/fastvo/audio/spx/SpeexListener;)V
    .locals 0

    .line 21
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    return-void
.end method

.method public setRecording(Z)V
    .locals 1

    .line 77
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->mutex:Ljava/lang/Object;

    monitor-enter v0

    .line 78
    :try_start_0
    iput-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->isRecording:Z

    .line 79
    iget-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->isRecording:Z

    if-eqz p1, :cond_0

    .line 80
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->mutex:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notify()V

    .line 82
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

.method public stop()V
    .locals 2

    .line 67
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->client:Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;

    invoke-virtual {v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->stop()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 69
    iget-object v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriter;->listener:Lcom/bianfeng/fastvo/audio/spx/SpeexListener;

    if-eqz v1, :cond_0

    .line 70
    invoke-interface {v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexListener;->onError()V

    .line 72
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

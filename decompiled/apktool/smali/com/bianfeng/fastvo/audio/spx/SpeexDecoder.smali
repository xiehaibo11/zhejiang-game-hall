.class public Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;
.super Ljava/lang/Object;
.source "SpeexDecoder.java"


# instance fields
.field protected enhanced:Z

.field private listenerList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/os/RecoverySystem$ProgressListener;",
            ">;"
        }
    .end annotation
.end field

.field private paused:Z

.field protected speexDecoder:Lcom/bianfeng/fastvo/audio/spx/Speex;

.field protected srcFile:Ljava/lang/String;

.field private srcPath:Ljava/io/File;

.field private track:Landroid/media/AudioTrack;


# direct methods
.method public constructor <init>(Ljava/io/File;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 29
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->listenerList:Ljava/util/List;

    .line 30
    iput-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->srcPath:Ljava/io/File;

    return-void
.end method

.method private initializeAndroidAudio(I)V
    .locals 9
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v0, 0x4

    const/4 v1, 0x2

    .line 34
    invoke-static {p1, v0, v1}, Landroid/media/AudioTrack;->getMinBufferSize(III)I

    move-result v7

    if-ltz v7, :cond_0

    .line 40
    new-instance v0, Landroid/media/AudioTrack;

    const/4 v3, 0x3

    const/4 v5, 0x4

    const/4 v6, 0x2

    const/4 v8, 0x1

    move-object v2, v0

    move v4, p1

    invoke-direct/range {v2 .. v8}, Landroid/media/AudioTrack;-><init>(IIIIII)V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    return-void

    .line 37
    :cond_0
    new-instance p1, Ljava/lang/Exception;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Failed to get minimum buffer size: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v7}, Ljava/lang/Integer;->toString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method protected static readInt([BI)I
    .locals 2

    .line 228
    aget-byte v0, p0, p1

    and-int/lit16 v0, v0, 0xff

    add-int/lit8 v1, p1, 0x1

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x8

    or-int/2addr v0, v1

    add-int/lit8 v1, p1, 0x2

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x10

    or-int/2addr v0, v1

    add-int/lit8 p1, p1, 0x3

    aget-byte p0, p0, p1

    shl-int/lit8 p0, p0, 0x18

    or-int/2addr p0, v0

    return p0
.end method

.method protected static readLong([BI)J
    .locals 2

    .line 235
    aget-byte v0, p0, p1

    and-int/lit16 v0, v0, 0xff

    add-int/lit8 v1, p1, 0x1

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x8

    or-int/2addr v0, v1

    add-int/lit8 v1, p1, 0x2

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x10

    or-int/2addr v0, v1

    add-int/lit8 v1, p1, 0x3

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x18

    or-int/2addr v0, v1

    add-int/lit8 v1, p1, 0x4

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x20

    or-int/2addr v0, v1

    add-int/lit8 v1, p1, 0x5

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x28

    or-int/2addr v0, v1

    add-int/lit8 v1, p1, 0x6

    aget-byte v1, p0, v1

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x30

    or-int/2addr v0, v1

    add-int/lit8 p1, p1, 0x7

    aget-byte p0, p0, p1

    shl-int/lit8 p0, p0, 0x38

    or-int/2addr p0, v0

    int-to-long p0, p0

    return-wide p0
.end method

.method protected static readShort([BI)I
    .locals 1

    .line 243
    aget-byte v0, p0, p1

    and-int/lit16 v0, v0, 0xff

    add-int/lit8 p1, p1, 0x1

    aget-byte p0, p0, p1

    shl-int/lit8 p0, p0, 0x8

    or-int/2addr p0, v0

    return p0
.end method

.method private readSpeexHeader([BIIZ)Z
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v0, 0x0

    const/16 v1, 0x50

    if-eq p3, v1, :cond_0

    .line 202
    sget-object p1, Ljava/lang/System;->out:Ljava/io/PrintStream;

    const-string p2, "Oooops"

    invoke-virtual {p1, p2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    return v0

    .line 205
    :cond_0
    new-instance p3, Ljava/lang/String;

    const/16 v1, 0x8

    invoke-direct {p3, p1, p2, v1}, Ljava/lang/String;-><init>([BII)V

    const-string v1, "Speex   "

    invoke-virtual {v1, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p3

    if-nez p3, :cond_1

    return v0

    :cond_1
    add-int/lit8 p3, p2, 0x28

    .line 208
    aget-byte p3, p1, p3

    and-int/lit16 p3, p3, 0xff

    add-int/lit8 v0, p2, 0x24

    .line 209
    invoke-static {p1, v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readInt([BI)I

    move-result v0

    add-int/lit8 v1, p2, 0x30

    .line 210
    invoke-static {p1, v1}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readInt([BI)I

    move-result v1

    add-int/lit8 v2, p2, 0x40

    .line 211
    invoke-static {p1, v2}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readInt([BI)I

    move-result v2

    add-int/lit8 p2, p2, 0x38

    .line 212
    invoke-static {p1, p2}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readInt([BI)I

    move-result p1

    .line 213
    sget-object p2, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "mode="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, " sampleRate=="

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, " channels="

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, "nframes="

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p3, "framesize="

    invoke-virtual {v3, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 214
    invoke-direct {p0, v0}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->initializeAndroidAudio(I)V

    const/4 p1, 0x1

    if-eqz p4, :cond_2

    :cond_2
    return p1
.end method


# virtual methods
.method public addOnMetadataListener(Landroid/os/RecoverySystem$ProgressListener;)V
    .locals 1

    .line 45
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->listenerList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public decode()V
    .locals 16
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    move-object/from16 v1, p0

    const-string v2, "release............"

    const/16 v0, 0x800

    new-array v0, v0, [B

    const/high16 v3, 0x10000

    new-array v3, v3, [B

    .line 68
    new-instance v4, Lcom/bianfeng/fastvo/audio/spx/Speex;

    invoke-direct {v4}, Lcom/bianfeng/fastvo/audio/spx/Speex;-><init>()V

    iput-object v4, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->speexDecoder:Lcom/bianfeng/fastvo/audio/spx/Speex;

    .line 69
    invoke-virtual {v4}, Lcom/bianfeng/fastvo/audio/spx/Speex;->getQuality()I

    move-result v5

    invoke-virtual {v4, v5}, Lcom/bianfeng/fastvo/audio/spx/Speex;->init(I)V

    .line 71
    new-instance v4, Ljava/io/RandomAccessFile;

    iget-object v5, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->srcPath:Ljava/io/File;

    const-string v6, "r"

    invoke-direct {v4, v5, v6}, Ljava/io/RandomAccessFile;-><init>(Ljava/io/File;Ljava/lang/String;)V

    const/4 v5, 0x0

    const/4 v6, 0x0

    .line 78
    :goto_0
    :try_start_0
    invoke-static {}, Ljava/lang/Thread;->interrupted()Z

    move-result v7

    if-eqz v7, :cond_0

    .line 79
    invoke-virtual {v4}, Ljava/io/RandomAccessFile;->close()V

    .line 80
    iget-object v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->stop()V
    :try_end_0
    .catch Ljava/io/EOFException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 165
    :goto_1
    iget-object v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->stop()V

    .line 166
    iget-object v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->release()V

    .line 167
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    invoke-virtual {v0, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    return-void

    .line 84
    :cond_0
    :goto_2
    :try_start_1
    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->isPaused()Z

    move-result v7

    const-wide/16 v8, 0x64

    if-eqz v7, :cond_1

    .line 85
    iget-object v7, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v7}, Landroid/media/AudioTrack;->stop()V

    .line 86
    invoke-static {v8, v9}, Ljava/lang/Thread;->sleep(J)V

    goto :goto_2

    :cond_1
    const/16 v7, 0x1b

    .line 90
    invoke-virtual {v4, v0, v5, v7}, Ljava/io/RandomAccessFile;->readFully([BII)V

    const/16 v10, 0x16

    .line 91
    invoke-static {v0, v10}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readInt([BI)I

    move-result v11

    const/4 v12, 0x6

    .line 92
    invoke-static {v0, v12}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readLong([BI)J

    aput-byte v5, v0, v10

    const/16 v10, 0x17

    aput-byte v5, v0, v10

    const/16 v10, 0x18

    aput-byte v5, v0, v10

    const/16 v10, 0x19

    aput-byte v5, v0, v10

    .line 97
    invoke-static {v5, v0, v5, v7}, Lcom/bianfeng/fastvo/audio/spx/OggCrc;->checksum(I[BII)I

    move-result v10

    const-string v12, "OggS"

    .line 100
    new-instance v13, Ljava/lang/String;

    const/4 v14, 0x4

    invoke-direct {v13, v0, v5, v14}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v12, v13}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v12

    if-nez v12, :cond_2

    .line 101
    sget-object v0, Ljava/lang/System;->err:Ljava/io/PrintStream;

    const-string v3, "missing ogg id!"

    invoke-virtual {v0, v3}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 102
    invoke-virtual {v4}, Ljava/io/RandomAccessFile;->close()V

    goto :goto_1

    :cond_2
    const/16 v12, 0x1a

    .line 107
    aget-byte v12, v0, v12

    const/16 v13, 0xff

    and-int/2addr v12, v13

    .line 108
    invoke-virtual {v4, v0, v7, v12}, Ljava/io/RandomAccessFile;->readFully([BII)V

    .line 109
    invoke-static {v10, v0, v7, v12}, Lcom/bianfeng/fastvo/audio/spx/OggCrc;->checksum(I[BII)I

    move-result v7

    const/4 v10, 0x0

    :goto_3
    if-ge v10, v12, :cond_a

    .line 114
    invoke-static {}, Ljava/lang/Thread;->interrupted()Z

    move-result v14

    if-eqz v14, :cond_3

    .line 115
    invoke-virtual {v4}, Ljava/io/RandomAccessFile;->close()V

    .line 116
    iget-object v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->stop()V

    goto :goto_1

    .line 120
    :cond_3
    :goto_4
    invoke-virtual/range {p0 .. p0}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->isPaused()Z

    move-result v14

    if-eqz v14, :cond_4

    .line 121
    iget-object v14, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v14}, Landroid/media/AudioTrack;->stop()V

    .line 122
    invoke-static {v8, v9}, Ljava/lang/Thread;->sleep(J)V

    goto :goto_4

    :cond_4
    add-int/lit8 v14, v10, 0x1b

    .line 126
    aget-byte v14, v0, v14

    and-int/2addr v14, v13

    if-ne v14, v13, :cond_5

    .line 128
    sget-object v0, Ljava/lang/System;->err:Ljava/io/PrintStream;

    const-string v3, "sorry, don\'t handle 255 sizes!"

    invoke-virtual {v0, v3}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 129
    invoke-virtual {v4}, Ljava/io/RandomAccessFile;->close()V

    goto/16 :goto_1

    .line 132
    :cond_5
    invoke-virtual {v4, v3, v5, v14}, Ljava/io/RandomAccessFile;->readFully([BII)V

    .line 133
    invoke-static {v7, v3, v5, v14}, Lcom/bianfeng/fastvo/audio/spx/OggCrc;->checksum(I[BII)I

    move-result v7

    const/4 v15, 0x1

    if-nez v6, :cond_7

    .line 138
    invoke-direct {v1, v3, v5, v14, v15}, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->readSpeexHeader([BIIZ)Z

    move-result v14

    if-eqz v14, :cond_6

    goto :goto_5

    :cond_6
    const/4 v6, 0x0

    goto :goto_6

    :cond_7
    if-ne v6, v15, :cond_9

    :cond_8
    :goto_5
    add-int/lit8 v6, v6, 0x1

    goto :goto_6

    :cond_9
    const/16 v14, 0xa0

    new-array v15, v14, [S

    .line 150
    iget-object v8, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->speexDecoder:Lcom/bianfeng/fastvo/audio/spx/Speex;

    invoke-virtual {v8, v3, v15, v14}, Lcom/bianfeng/fastvo/audio/spx/Speex;->decode([B[SI)I

    move-result v8

    if-lez v8, :cond_8

    .line 151
    iget-object v9, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v9, v15, v5, v8}, Landroid/media/AudioTrack;->write([SII)I

    .line 152
    iget-object v8, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    const v9, 0x3f333333    # 0.7f

    invoke-virtual {v8, v9, v9}, Landroid/media/AudioTrack;->setStereoVolume(FF)I

    .line 153
    iget-object v8, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v8}, Landroid/media/AudioTrack;->play()V

    goto :goto_5

    :goto_6
    add-int/lit8 v10, v10, 0x1

    const-wide/16 v8, 0x64

    goto :goto_3

    :cond_a
    if-ne v7, v11, :cond_b

    goto/16 :goto_0

    .line 159
    :cond_b
    invoke-virtual {v4}, Ljava/io/RandomAccessFile;->close()V

    .line 160
    new-instance v0, Ljava/io/IOException;

    const-string v3, "Ogg CheckSums do not match"

    invoke-direct {v0, v3}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
    :try_end_1
    .catch Ljava/io/EOFException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    move-exception v0

    .line 165
    iget-object v3, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v3}, Landroid/media/AudioTrack;->stop()V

    .line 166
    iget-object v3, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v3}, Landroid/media/AudioTrack;->release()V

    .line 167
    sget-object v3, Ljava/lang/System;->out:Ljava/io/PrintStream;

    invoke-virtual {v3, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 168
    throw v0

    .line 165
    :catch_0
    iget-object v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->stop()V

    .line 166
    iget-object v0, v1, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->track:Landroid/media/AudioTrack;

    invoke-virtual {v0}, Landroid/media/AudioTrack;->release()V

    .line 167
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;

    invoke-virtual {v0, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 170
    invoke-virtual {v4}, Ljava/io/RandomAccessFile;->close()V

    return-void
.end method

.method public declared-synchronized isPaused()Z
    .locals 1

    monitor-enter p0

    .line 53
    :try_start_0
    iget-boolean v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->paused:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return v0

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public declared-synchronized setPaused(Z)V
    .locals 0

    monitor-enter p0

    .line 49
    :try_start_0
    iput-boolean p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexDecoder;->paused:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 50
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

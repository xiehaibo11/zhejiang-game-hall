.class public Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;
.super Ljava/lang/Object;
.source "SpeexWriteClient.java"


# instance fields
.field protected channels:I

.field private mode:I

.field protected nframes:I

.field protected sampleRate:I

.field speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

.field protected vbr:Z


# direct methods
.method public constructor <init>()V
    .locals 2

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 8
    iput v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->mode:I

    const/16 v1, 0x1f40

    .line 11
    iput v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->sampleRate:I

    const/4 v1, 0x1

    .line 14
    iput v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->channels:I

    .line 17
    iput v1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->nframes:I

    .line 20
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->vbr:Z

    const/4 v0, 0x0

    .line 22
    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    return-void
.end method

.method private init(Ljava/lang/String;)V
    .locals 7

    const/4 v0, 0x0

    .line 41
    iput v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->mode:I

    const/16 v0, 0x1f40

    .line 42
    iput v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->sampleRate:I

    const/4 v0, 0x1

    .line 46
    iput-boolean v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->vbr:Z

    .line 48
    new-instance v0, Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    iget v2, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->mode:I

    iget v3, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->sampleRate:I

    iget v4, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->channels:I

    iget v5, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->nframes:I

    iget-boolean v6, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->vbr:Z

    move-object v1, v0

    invoke-direct/range {v1 .. v6}, Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;-><init>(IIIIZ)V

    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    .line 51
    :try_start_0
    invoke-virtual {v0, p1}, Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;->open(Ljava/lang/String;)V

    .line 53
    iget-object p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    const-string v0, "Encoded with:test by gauss "

    invoke-virtual {p1, v0}, Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;->writeHeader(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 55
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method public setSampleRate(I)V
    .locals 0

    .line 76
    iput p1, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->sampleRate:I

    return-void
.end method

.method public start(Ljava/lang/String;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1}, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->init(Ljava/lang/String;)V

    return-void
.end method

.method public stop()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 60
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    if-eqz v0, :cond_0

    .line 61
    invoke-virtual {v0}, Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;->close()V

    const/4 v0, 0x0

    .line 62
    iput-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    :cond_0
    return-void
.end method

.method public writeTag([BI)V
    .locals 2

    .line 68
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/fastvo/audio/spx/SpeexWriteClient;->speexWriter:Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1, p2}, Lcom/bianfeng/fastvo/audio/spx/OggSpeexWriter;->writePacket([BII)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 70
    invoke-virtual {p1}, Ljava/io/IOException;->printStackTrace()V

    :goto_0
    return-void
.end method

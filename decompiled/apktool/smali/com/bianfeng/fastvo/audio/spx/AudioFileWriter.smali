.class public abstract Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;
.super Ljava/lang/Object;
.source "AudioFileWriter.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static buildOggPageHeader(IJIII[B)[B
    .locals 10

    add-int/lit8 v0, p5, 0x1b

    .line 132
    new-array v9, v0, [B

    const/4 v1, 0x0

    move-object v0, v9

    move v2, p0

    move-wide v3, p1

    move v5, p3

    move v6, p4

    move v7, p5

    move-object/from16 v8, p6

    .line 133
    invoke-static/range {v0 .. v8}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeOggPageHeader([BIIJIII[B)I

    return-object v9
.end method

.method public static buildSpeexComment(Ljava/lang/String;)[B
    .locals 2

    .line 209
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    add-int/lit8 v0, v0, 0x8

    new-array v0, v0, [B

    const/4 v1, 0x0

    .line 210
    invoke-static {v0, v1, p0}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeSpeexComment([BILjava/lang/String;)I

    return-object v0
.end method

.method public static buildSpeexHeader(IIIZI)[B
    .locals 8

    const/16 v0, 0x50

    new-array v0, v0, [B

    const/4 v2, 0x0

    move-object v1, v0

    move v3, p0

    move v4, p1

    move v5, p2

    move v6, p3

    move v7, p4

    .line 184
    invoke-static/range {v1 .. v7}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeSpeexHeader([BIIIIZI)I

    return-object v0
.end method

.method public static writeInt(Ljava/io/DataOutput;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    and-int/lit16 v0, p1, 0xff

    .line 232
    invoke-interface {p0, v0}, Ljava/io/DataOutput;->writeByte(I)V

    ushr-int/lit8 v0, p1, 0x8

    and-int/lit16 v0, v0, 0xff

    .line 233
    invoke-interface {p0, v0}, Ljava/io/DataOutput;->writeByte(I)V

    ushr-int/lit8 v0, p1, 0x10

    and-int/lit16 v0, v0, 0xff

    .line 234
    invoke-interface {p0, v0}, Ljava/io/DataOutput;->writeByte(I)V

    ushr-int/lit8 p1, p1, 0x18

    and-int/lit16 p1, p1, 0xff

    .line 235
    invoke-interface {p0, p1}, Ljava/io/DataOutput;->writeByte(I)V

    return-void
.end method

.method public static writeInt(Ljava/io/OutputStream;I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    and-int/lit16 v0, p1, 0xff

    .line 256
    invoke-virtual {p0, v0}, Ljava/io/OutputStream;->write(I)V

    ushr-int/lit8 v0, p1, 0x8

    and-int/lit16 v0, v0, 0xff

    .line 257
    invoke-virtual {p0, v0}, Ljava/io/OutputStream;->write(I)V

    ushr-int/lit8 v0, p1, 0x10

    and-int/lit16 v0, v0, 0xff

    .line 258
    invoke-virtual {p0, v0}, Ljava/io/OutputStream;->write(I)V

    ushr-int/lit8 p1, p1, 0x18

    and-int/lit16 p1, p1, 0xff

    .line 259
    invoke-virtual {p0, p1}, Ljava/io/OutputStream;->write(I)V

    return-void
.end method

.method public static writeInt([BII)V
    .locals 2

    and-int/lit16 v0, p2, 0xff

    int-to-byte v0, v0

    .line 297
    aput-byte v0, p0, p1

    add-int/lit8 v0, p1, 0x1

    ushr-int/lit8 v1, p2, 0x8

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    .line 298
    aput-byte v1, p0, v0

    add-int/lit8 v0, p1, 0x2

    ushr-int/lit8 v1, p2, 0x10

    and-int/lit16 v1, v1, 0xff

    int-to-byte v1, v1

    .line 299
    aput-byte v1, p0, v0

    add-int/lit8 p1, p1, 0x3

    ushr-int/lit8 p2, p2, 0x18

    and-int/lit16 p2, p2, 0xff

    int-to-byte p2, p2

    .line 300
    aput-byte p2, p0, p1

    return-void
.end method

.method public static writeLong(Ljava/io/OutputStream;J)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-wide/16 v0, 0xff

    and-long v2, p1, v0

    long-to-int v3, v2

    .line 269
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x8

    ushr-long v2, p1, v2

    and-long/2addr v2, v0

    long-to-int v3, v2

    .line 270
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x10

    ushr-long v2, p1, v2

    and-long/2addr v2, v0

    long-to-int v3, v2

    .line 271
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x18

    ushr-long v2, p1, v2

    and-long/2addr v2, v0

    long-to-int v3, v2

    .line 272
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x20

    ushr-long v2, p1, v2

    and-long/2addr v2, v0

    long-to-int v3, v2

    .line 273
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x28

    ushr-long v2, p1, v2

    and-long/2addr v2, v0

    long-to-int v3, v2

    .line 274
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x30

    ushr-long v2, p1, v2

    and-long/2addr v2, v0

    long-to-int v3, v2

    .line 275
    invoke-virtual {p0, v3}, Ljava/io/OutputStream;->write(I)V

    const/16 v2, 0x38

    ushr-long/2addr p1, v2

    and-long/2addr p1, v0

    long-to-int p2, p1

    .line 276
    invoke-virtual {p0, p2}, Ljava/io/OutputStream;->write(I)V

    return-void
.end method

.method public static writeLong([BIJ)V
    .locals 5

    const-wide/16 v0, 0xff

    and-long v2, p2, v0

    long-to-int v3, v2

    int-to-byte v2, v3

    .line 310
    aput-byte v2, p0, p1

    add-int/lit8 v2, p1, 0x1

    const/16 v3, 0x8

    ushr-long v3, p2, v3

    and-long/2addr v3, v0

    long-to-int v4, v3

    int-to-byte v3, v4

    .line 311
    aput-byte v3, p0, v2

    add-int/lit8 v2, p1, 0x2

    const/16 v3, 0x10

    ushr-long v3, p2, v3

    and-long/2addr v3, v0

    long-to-int v4, v3

    int-to-byte v3, v4

    .line 312
    aput-byte v3, p0, v2

    add-int/lit8 v2, p1, 0x3

    const/16 v3, 0x18

    ushr-long v3, p2, v3

    and-long/2addr v3, v0

    long-to-int v4, v3

    int-to-byte v3, v4

    .line 313
    aput-byte v3, p0, v2

    add-int/lit8 v2, p1, 0x4

    const/16 v3, 0x20

    ushr-long v3, p2, v3

    and-long/2addr v3, v0

    long-to-int v4, v3

    int-to-byte v3, v4

    .line 314
    aput-byte v3, p0, v2

    add-int/lit8 v2, p1, 0x5

    const/16 v3, 0x28

    ushr-long v3, p2, v3

    and-long/2addr v3, v0

    long-to-int v4, v3

    int-to-byte v3, v4

    .line 315
    aput-byte v3, p0, v2

    add-int/lit8 v2, p1, 0x6

    const/16 v3, 0x30

    ushr-long v3, p2, v3

    and-long/2addr v3, v0

    long-to-int v4, v3

    int-to-byte v3, v4

    .line 316
    aput-byte v3, p0, v2

    add-int/lit8 p1, p1, 0x7

    const/16 v2, 0x38

    ushr-long/2addr p2, v2

    and-long/2addr p2, v0

    long-to-int p3, p2

    int-to-byte p2, p3

    .line 317
    aput-byte p2, p0, p1

    return-void
.end method

.method public static writeOggPageHeader([BIIJIII[B)I
    .locals 2

    const-string v0, "OggS"

    .line 105
    invoke-static {p0, p1, v0}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeString([BILjava/lang/String;)V

    add-int/lit8 v0, p1, 0x4

    const/4 v1, 0x0

    .line 106
    aput-byte v1, p0, v0

    add-int/lit8 v0, p1, 0x5

    int-to-byte p2, p2

    .line 107
    aput-byte p2, p0, v0

    add-int/lit8 p2, p1, 0x6

    .line 108
    invoke-static {p0, p2, p3, p4}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeLong([BIJ)V

    add-int/lit8 p2, p1, 0xe

    .line 110
    invoke-static {p0, p2, p5}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x12

    .line 112
    invoke-static {p0, p2, p6}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x16

    .line 113
    invoke-static {p0, p2, v1}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x1a

    int-to-byte p3, p7

    .line 114
    aput-byte p3, p0, p2

    add-int/lit8 p1, p1, 0x1b

    .line 115
    invoke-static {p8, v1, p0, p1, p7}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/lit8 p7, p7, 0x1b

    return p7
.end method

.method public static writeShort(Ljava/io/DataOutput;S)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    and-int/lit16 v0, p1, 0xff

    .line 221
    invoke-interface {p0, v0}, Ljava/io/DataOutput;->writeByte(I)V

    ushr-int/lit8 p1, p1, 0x8

    and-int/lit16 p1, p1, 0xff

    .line 222
    invoke-interface {p0, p1}, Ljava/io/DataOutput;->writeByte(I)V

    return-void
.end method

.method public static writeShort(Ljava/io/OutputStream;S)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    and-int/lit16 v0, p1, 0xff

    .line 245
    invoke-virtual {p0, v0}, Ljava/io/OutputStream;->write(I)V

    ushr-int/lit8 p1, p1, 0x8

    and-int/lit16 p1, p1, 0xff

    .line 246
    invoke-virtual {p0, p1}, Ljava/io/OutputStream;->write(I)V

    return-void
.end method

.method public static writeShort([BII)V
    .locals 1

    and-int/lit16 v0, p2, 0xff

    int-to-byte v0, v0

    .line 286
    aput-byte v0, p0, p1

    add-int/lit8 p1, p1, 0x1

    ushr-int/lit8 p2, p2, 0x8

    and-int/lit16 p2, p2, 0xff

    int-to-byte p2, p2

    .line 287
    aput-byte p2, p0, p1

    return-void
.end method

.method public static writeSpeexComment([BILjava/lang/String;)I
    .locals 2

    .line 196
    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result v0

    .line 197
    invoke-static {p0, p1, v0}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 v1, p1, 0x4

    .line 198
    invoke-static {p0, v1, p2}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeString([BILjava/lang/String;)V

    add-int/2addr p1, v0

    add-int/lit8 p1, p1, 0x4

    const/4 p2, 0x0

    .line 199
    invoke-static {p0, p1, p2}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 v0, v0, 0x8

    return v0
.end method

.method public static writeSpeexHeader([BIIIIZI)I
    .locals 4

    const-string v0, "Speex   "

    .line 149
    invoke-static {p0, p1, v0}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeString([BILjava/lang/String;)V

    add-int/lit8 v0, p1, 0x8

    const-string v1, "speex-1.2rc"

    .line 150
    invoke-static {p0, v0, v1}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeString([BILjava/lang/String;)V

    const/16 v0, 0xb

    new-array v1, v0, [B

    add-int/lit8 v2, p1, 0x11

    const/4 v3, 0x0

    .line 151
    invoke-static {v1, v3, p0, v2, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/lit8 v0, p1, 0x1c

    const/4 v1, 0x1

    .line 156
    invoke-static {p0, v0, v1}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 v0, p1, 0x20

    const/16 v1, 0x50

    .line 157
    invoke-static {p0, v0, v1}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 v0, p1, 0x24

    .line 158
    invoke-static {p0, v0, p2}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x28

    .line 159
    invoke-static {p0, p2, p3}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x2c

    const/4 v0, 0x4

    .line 160
    invoke-static {p0, p2, v0}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x30

    .line 161
    invoke-static {p0, p2, p4}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x34

    const/4 p4, -0x1

    .line 162
    invoke-static {p0, p2, p4}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x38

    const/16 p4, 0xa0

    shl-int p3, p4, p3

    .line 163
    invoke-static {p0, p2, p3}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x3c

    .line 165
    invoke-static {p0, p2, p5}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x40

    .line 166
    invoke-static {p0, p2, p6}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x44

    .line 167
    invoke-static {p0, p2, v3}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p2, p1, 0x48

    .line 168
    invoke-static {p0, p2, v3}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    add-int/lit8 p1, p1, 0x4c

    .line 169
    invoke-static {p0, p1, v3}, Lcom/bianfeng/fastvo/audio/spx/AudioFileWriter;->writeInt([BII)V

    return v1
.end method

.method public static writeString([BILjava/lang/String;)V
    .locals 2

    .line 327
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    .line 328
    array-length v0, p2

    const/4 v1, 0x0

    invoke-static {p2, v1, p0, p1, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-void
.end method


# virtual methods
.method public abstract close()V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public abstract open(Ljava/io/File;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public abstract open(Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public abstract writeHeader(Ljava/lang/String;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method public abstract writePacket([BII)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.class Lcom/bianfeng/afext/write/ApkSigningBlock;
.super Ljava/lang/Object;
.source "ApkSigningBlock.java"


# instance fields
.field private final payloads:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/afext/write/ApkSigningPayload;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    return-void
.end method


# virtual methods
.method public addPayload(Lcom/bianfeng/afext/write/ApkSigningPayload;)V
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final getPayloads()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/bianfeng/afext/write/ApkSigningPayload;",
            ">;"
        }
    .end annotation

    .line 43
    iget-object v0, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    return-object v0
.end method

.method public writeApkSigningBlock(Ljava/io/DataOutput;)J
    .locals 11
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const/4 v0, 0x0

    const-wide/16 v1, 0x18

    move-wide v2, v1

    const/4 v1, 0x0

    .line 52
    :goto_0
    iget-object v4, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v1, v4, :cond_0

    .line 53
    iget-object v4, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/afext/write/ApkSigningPayload;

    .line 54
    invoke-virtual {v4}, Lcom/bianfeng/afext/write/ApkSigningPayload;->getByteBuffer()[B

    move-result-object v4

    .line 55
    array-length v4, v4

    add-int/lit8 v4, v4, 0xc

    int-to-long v4, v4

    add-long/2addr v2, v4

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    const/16 v1, 0x8

    .line 58
    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v4

    .line 59
    sget-object v5, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v4, v5}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 60
    invoke-virtual {v4, v2, v3}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 61
    invoke-virtual {v4}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 62
    invoke-virtual {v4}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/io/DataOutput;->write([B)V

    .line 64
    :goto_1
    iget-object v4, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v0, v4, :cond_1

    .line 65
    iget-object v4, p0, Lcom/bianfeng/afext/write/ApkSigningBlock;->payloads:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/bianfeng/afext/write/ApkSigningPayload;

    .line 66
    invoke-virtual {v4}, Lcom/bianfeng/afext/write/ApkSigningPayload;->getByteBuffer()[B

    move-result-object v5

    .line 68
    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v6

    .line 69
    sget-object v7, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v6, v7}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 70
    array-length v7, v5

    const/4 v8, 0x4

    add-int/2addr v7, v8

    int-to-long v9, v7

    invoke-virtual {v6, v9, v10}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 71
    invoke-virtual {v6}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 72
    invoke-virtual {v6}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v6

    invoke-interface {p1, v6}, Ljava/io/DataOutput;->write([B)V

    .line 74
    invoke-static {v8}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v6

    .line 75
    sget-object v7, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v6, v7}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 76
    invoke-virtual {v4}, Lcom/bianfeng/afext/write/ApkSigningPayload;->getId()I

    move-result v4

    invoke-virtual {v6, v4}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 77
    invoke-virtual {v6}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 78
    invoke-virtual {v6}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/io/DataOutput;->write([B)V

    .line 80
    invoke-interface {p1, v5}, Ljava/io/DataOutput;->write([B)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_1

    .line 83
    :cond_1
    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 84
    sget-object v4, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 85
    invoke-virtual {v0, v2, v3}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 86
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 87
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/io/DataOutput;->write([B)V

    .line 89
    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 90
    sget-object v4, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    const-wide v4, 0x20676953204b5041L

    .line 91
    invoke-virtual {v0, v4, v5}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 92
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 93
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/io/DataOutput;->write([B)V

    .line 95
    invoke-static {v1}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v0

    .line 96
    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v0, v1}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    const-wide v4, 0x3234206b636f6c42L    # 7.465385175170059E-67

    .line 97
    invoke-virtual {v0, v4, v5}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 98
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 99
    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/io/DataOutput;->write([B)V

    return-wide v2
.end method

.class Lcom/bianfeng/ymnsdk/gongxiang/g;
.super Ljava/lang/Object;
.source "ApkSigningBlock.java"


# instance fields
.field private final a:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/ymnsdk/gongxiang/h;",
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

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/g;->a:Ljava/util/List;

    .line 40
    return-void
.end method


# virtual methods
.method public a(Ljava/io/DataOutput;)J
    .locals 11
    .param p1, "dataOutput"    # Ljava/io/DataOutput;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    .line 51
    const-wide/16 v0, 0x18

    .line 52
    .local v0, "length":J
    const/4 v2, 0x0

    .local v2, "index":I
    :goto_0
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/g;->a:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_0

    .line 53
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/g;->a:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/bianfeng/ymnsdk/gongxiang/h;

    .line 54
    .local v3, "payload":Lcom/bianfeng/ymnsdk/gongxiang/h;
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/gongxiang/h;->a()[B

    move-result-object v4

    .line 55
    .local v4, "bytes":[B
    array-length v5, v4

    add-int/lit8 v5, v5, 0xc

    int-to-long v5, v5

    add-long/2addr v0, v5

    .line 52
    .end local v3    # "payload":Lcom/bianfeng/ymnsdk/gongxiang/h;
    .end local v4    # "bytes":[B
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 58
    .end local v2    # "index":I
    :cond_0
    const/16 v2, 0x8

    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 59
    .local v3, "byteBuffer":Ljava/nio/ByteBuffer;
    sget-object v4, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v3, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 60
    invoke-virtual {v3, v0, v1}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 61
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 62
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/io/DataOutput;->write([B)V

    .line 64
    const/4 v4, 0x0

    .local v4, "index":I
    :goto_1
    iget-object v5, p0, Lcom/bianfeng/ymnsdk/gongxiang/g;->a:Ljava/util/List;

    invoke-interface {v5}, Ljava/util/List;->size()I

    move-result v5

    if-ge v4, v5, :cond_1

    .line 65
    iget-object v5, p0, Lcom/bianfeng/ymnsdk/gongxiang/g;->a:Ljava/util/List;

    invoke-interface {v5, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/bianfeng/ymnsdk/gongxiang/h;

    .line 66
    .local v5, "payload":Lcom/bianfeng/ymnsdk/gongxiang/h;
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/gongxiang/h;->a()[B

    move-result-object v6

    .line 68
    .local v6, "bytes":[B
    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 69
    sget-object v7, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v3, v7}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 70
    array-length v7, v6

    const/4 v8, 0x4

    add-int/2addr v7, v8

    int-to-long v9, v7

    invoke-virtual {v3, v9, v10}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 71
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 72
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v7

    invoke-interface {p1, v7}, Ljava/io/DataOutput;->write([B)V

    .line 74
    invoke-static {v8}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 75
    sget-object v7, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v3, v7}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 76
    invoke-virtual {v5}, Lcom/bianfeng/ymnsdk/gongxiang/h;->b()I

    move-result v7

    invoke-virtual {v3, v7}, Ljava/nio/ByteBuffer;->putInt(I)Ljava/nio/ByteBuffer;

    .line 77
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 78
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v7

    invoke-interface {p1, v7}, Ljava/io/DataOutput;->write([B)V

    .line 80
    invoke-interface {p1, v6}, Ljava/io/DataOutput;->write([B)V

    .line 64
    .end local v5    # "payload":Lcom/bianfeng/ymnsdk/gongxiang/h;
    .end local v6    # "bytes":[B
    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 83
    .end local v4    # "index":I
    :cond_1
    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 84
    sget-object v4, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v3, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 85
    invoke-virtual {v3, v0, v1}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 86
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 87
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/io/DataOutput;->write([B)V

    .line 89
    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v3

    .line 90
    sget-object v4, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v3, v4}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 91
    const-wide v4, 0x20676953204b5041L

    invoke-virtual {v3, v4, v5}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 92
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 93
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/io/DataOutput;->write([B)V

    .line 95
    invoke-static {v2}, Ljava/nio/ByteBuffer;->allocate(I)Ljava/nio/ByteBuffer;

    move-result-object v2

    .line 96
    .end local v3    # "byteBuffer":Ljava/nio/ByteBuffer;
    .local v2, "byteBuffer":Ljava/nio/ByteBuffer;
    sget-object v3, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    invoke-virtual {v2, v3}, Ljava/nio/ByteBuffer;->order(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;

    .line 97
    const-wide v3, 0x3234206b636f6c42L    # 7.465385175170059E-67

    invoke-virtual {v2, v3, v4}, Ljava/nio/ByteBuffer;->putLong(J)Ljava/nio/ByteBuffer;

    .line 98
    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->flip()Ljava/nio/Buffer;

    .line 99
    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v3

    invoke-interface {p1, v3}, Ljava/io/DataOutput;->write([B)V

    .line 101
    return-wide v0
.end method

.method public a(Lcom/bianfeng/ymnsdk/gongxiang/h;)V
    .locals 1
    .param p1, "payload"    # Lcom/bianfeng/ymnsdk/gongxiang/h;

    .line 47
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/g;->a:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 48
    return-void
.end method

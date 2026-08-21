.class Lcom/bianfeng/afext/write/ApkSigningPayload;
.super Ljava/lang/Object;
.source "ApkSigningPayload.java"


# instance fields
.field private final buffer:Ljava/nio/ByteBuffer;

.field private final id:I


# direct methods
.method constructor <init>(ILjava/nio/ByteBuffer;)V
    .locals 1

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput p1, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->id:I

    .line 16
    invoke-virtual {p2}, Ljava/nio/ByteBuffer;->order()Ljava/nio/ByteOrder;

    move-result-object p1

    sget-object v0, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    if-ne p1, v0, :cond_0

    .line 19
    iput-object p2, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->buffer:Ljava/nio/ByteBuffer;

    return-void

    .line 17
    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string p2, "ByteBuffer byte order must be little endian"

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method


# virtual methods
.method public getByteBuffer()[B
    .locals 4

    .line 27
    iget-object v0, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    .line 28
    iget-object v1, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->arrayOffset()I

    move-result v1

    .line 29
    iget-object v2, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->buffer:Ljava/nio/ByteBuffer;

    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    add-int/2addr v2, v1

    iget-object v3, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->buffer:Ljava/nio/ByteBuffer;

    .line 30
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->limit()I

    move-result v3

    add-int/2addr v1, v3

    .line 29
    invoke-static {v0, v2, v1}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v0

    return-object v0
.end method

.method public getId()I
    .locals 1

    .line 23
    iget v0, p0, Lcom/bianfeng/afext/write/ApkSigningPayload;->id:I

    return v0
.end method

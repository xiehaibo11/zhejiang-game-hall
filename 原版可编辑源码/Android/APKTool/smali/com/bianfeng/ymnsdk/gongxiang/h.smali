.class Lcom/bianfeng/ymnsdk/gongxiang/h;
.super Ljava/lang/Object;
.source "ApkSigningPayload.java"


# instance fields
.field private final a:I

.field private final b:Ljava/nio/ByteBuffer;


# direct methods
.method constructor <init>(ILjava/nio/ByteBuffer;)V
    .locals 2
    .param p1, "id"    # I
    .param p2, "buffer"    # Ljava/nio/ByteBuffer;

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput p1, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->a:I

    .line 16
    invoke-virtual {p2}, Ljava/nio/ByteBuffer;->order()Ljava/nio/ByteOrder;

    move-result-object v0

    sget-object v1, Ljava/nio/ByteOrder;->LITTLE_ENDIAN:Ljava/nio/ByteOrder;

    if-ne v0, v1, :cond_0

    .line 19
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->b:Ljava/nio/ByteBuffer;

    .line 20
    return-void

    .line 17
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "ByteBuffer byte order must be little endian"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method public a()[B
    .locals 4

    .line 27
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->b:Ljava/nio/ByteBuffer;

    invoke-virtual {v0}, Ljava/nio/ByteBuffer;->array()[B

    move-result-object v0

    .line 28
    .local v0, "array":[B
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->b:Ljava/nio/ByteBuffer;

    invoke-virtual {v1}, Ljava/nio/ByteBuffer;->arrayOffset()I

    move-result v1

    .line 29
    .local v1, "arrayOffset":I
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->b:Ljava/nio/ByteBuffer;

    invoke-virtual {v2}, Ljava/nio/ByteBuffer;->position()I

    move-result v2

    add-int/2addr v2, v1

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->b:Ljava/nio/ByteBuffer;

    .line 30
    invoke-virtual {v3}, Ljava/nio/ByteBuffer;->limit()I

    move-result v3

    add-int/2addr v3, v1

    .line 29
    invoke-static {v0, v2, v3}, Ljava/util/Arrays;->copyOfRange([BII)[B

    move-result-object v2

    return-object v2
.end method

.method public b()I
    .locals 1

    .line 23
    iget v0, p0, Lcom/bianfeng/ymnsdk/gongxiang/h;->a:I

    return v0
.end method

.class public final Lcom/czhj/wire/ProtoWriter;
.super Ljava/lang/Object;


# instance fields
.field private final a:Lcom/czhj/wire/okio/BufferedSink;


# direct methods
.method public constructor <init>(Lcom/czhj/wire/okio/BufferedSink;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method static a(I)I
    .locals 1

    sget-object v0, Lcom/czhj/wire/FieldEncoding;->VARINT:Lcom/czhj/wire/FieldEncoding;

    invoke-static {p0, v0}, Lcom/czhj/wire/ProtoWriter;->a(ILcom/czhj/wire/FieldEncoding;)I

    move-result p0

    invoke-static {p0}, Lcom/czhj/wire/ProtoWriter;->c(I)I

    move-result p0

    return p0
.end method

.method private static a(ILcom/czhj/wire/FieldEncoding;)I
    .locals 0

    shl-int/lit8 p0, p0, 0x3

    iget p1, p1, Lcom/czhj/wire/FieldEncoding;->value:I

    or-int/2addr p0, p1

    return p0
.end method

.method static a(J)I
    .locals 4

    const-wide/16 v0, -0x80

    and-long/2addr v0, p0

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const-wide/16 v0, -0x4000

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_1

    const/4 p0, 0x2

    return p0

    :cond_1
    const-wide/32 v0, -0x200000

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_2

    const/4 p0, 0x3

    return p0

    :cond_2
    const-wide/32 v0, -0x10000000

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_3

    const/4 p0, 0x4

    return p0

    :cond_3
    const-wide v0, -0x800000000L

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_4

    const/4 p0, 0x5

    return p0

    :cond_4
    const-wide v0, -0x40000000000L

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_5

    const/4 p0, 0x6

    return p0

    :cond_5
    const-wide/high16 v0, -0x2000000000000L

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_6

    const/4 p0, 0x7

    return p0

    :cond_6
    const-wide/high16 v0, -0x100000000000000L

    and-long/2addr v0, p0

    cmp-long v0, v0, v2

    if-nez v0, :cond_7

    const/16 p0, 0x8

    return p0

    :cond_7
    const-wide/high16 v0, -0x8000000000000000L

    and-long/2addr p0, v0

    cmp-long p0, p0, v2

    if-nez p0, :cond_8

    const/16 p0, 0x9

    return p0

    :cond_8
    const/16 p0, 0xa

    return p0
.end method

.method static b(I)I
    .locals 0

    if-ltz p0, :cond_0

    invoke-static {p0}, Lcom/czhj/wire/ProtoWriter;->c(I)I

    move-result p0

    return p0

    :cond_0
    const/16 p0, 0xa

    return p0
.end method

.method static b(J)J
    .locals 3

    const/4 v0, 0x1

    shl-long v0, p0, v0

    const/16 v2, 0x3f

    shr-long/2addr p0, v2

    xor-long/2addr p0, v0

    return-wide p0
.end method

.method static c(I)I
    .locals 1

    and-int/lit8 v0, p0, -0x80

    if-nez v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    and-int/lit16 v0, p0, -0x4000

    if-nez v0, :cond_1

    const/4 p0, 0x2

    return p0

    :cond_1
    const/high16 v0, -0x200000

    and-int/2addr v0, p0

    if-nez v0, :cond_2

    const/4 p0, 0x3

    return p0

    :cond_2
    const/high16 v0, -0x10000000

    and-int/2addr p0, v0

    if-nez p0, :cond_3

    const/4 p0, 0x4

    return p0

    :cond_3
    const/4 p0, 0x5

    return p0
.end method

.method static c(J)J
    .locals 4

    const/4 v0, 0x1

    ushr-long v0, p0, v0

    const-wide/16 v2, 0x1

    and-long/2addr p0, v2

    neg-long p0, p0

    xor-long/2addr p0, v0

    return-wide p0
.end method

.method static d(I)I
    .locals 1

    shl-int/lit8 v0, p0, 0x1

    shr-int/lit8 p0, p0, 0x1f

    xor-int/2addr p0, v0

    return p0
.end method

.method static e(I)I
    .locals 1

    ushr-int/lit8 v0, p0, 0x1

    and-int/lit8 p0, p0, 0x1

    neg-int p0, p0

    xor-int/2addr p0, v0

    return p0
.end method


# virtual methods
.method f(I)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    if-ltz p1, :cond_0

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoWriter;->writeVarint32(I)V

    goto :goto_0

    :cond_0
    int-to-long v0, p1

    invoke-virtual {p0, v0, v1}, Lcom/czhj/wire/ProtoWriter;->writeVarint64(J)V

    :goto_0
    return-void
.end method

.method public writeBytes(Lcom/czhj/wire/okio/ByteString;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0, p1}, Lcom/czhj/wire/okio/BufferedSink;->write(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method public writeFixed32(I)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0, p1}, Lcom/czhj/wire/okio/BufferedSink;->writeIntLe(I)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method public writeFixed64(J)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0, p1, p2}, Lcom/czhj/wire/okio/BufferedSink;->writeLongLe(J)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method public writeString(Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0, p1}, Lcom/czhj/wire/okio/BufferedSink;->writeUtf8(Ljava/lang/String;)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method public writeTag(ILcom/czhj/wire/FieldEncoding;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    invoke-static {p1, p2}, Lcom/czhj/wire/ProtoWriter;->a(ILcom/czhj/wire/FieldEncoding;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/czhj/wire/ProtoWriter;->writeVarint32(I)V

    return-void
.end method

.method public writeVarint32(I)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    :goto_0
    and-int/lit8 v0, p1, -0x80

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    and-int/lit8 v1, p1, 0x7f

    or-int/lit16 v1, v1, 0x80

    invoke-interface {v0, v1}, Lcom/czhj/wire/okio/BufferedSink;->writeByte(I)Lcom/czhj/wire/okio/BufferedSink;

    ushr-int/lit8 p1, p1, 0x7

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0, p1}, Lcom/czhj/wire/okio/BufferedSink;->writeByte(I)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

.method public writeVarint64(J)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    :goto_0
    const-wide/16 v0, -0x80

    and-long/2addr v0, p1

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    long-to-int v1, p1

    and-int/lit8 v1, v1, 0x7f

    or-int/lit16 v1, v1, 0x80

    invoke-interface {v0, v1}, Lcom/czhj/wire/okio/BufferedSink;->writeByte(I)Lcom/czhj/wire/okio/BufferedSink;

    const/4 v0, 0x7

    ushr-long/2addr p1, v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/ProtoWriter;->a:Lcom/czhj/wire/okio/BufferedSink;

    long-to-int p1, p1

    invoke-interface {v0, p1}, Lcom/czhj/wire/okio/BufferedSink;->writeByte(I)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method

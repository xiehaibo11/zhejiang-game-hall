.class public final Lcom/czhj/wire/okio/GzipSink;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/wire/okio/Sink;


# instance fields
.field private final a:Lcom/czhj/wire/okio/BufferedSink;

.field private final b:Ljava/util/zip/Deflater;

.field private final c:Lcom/czhj/wire/okio/DeflaterSink;

.field private d:Z

.field private final e:Ljava/util/zip/CRC32;


# direct methods
.method public constructor <init>(Lcom/czhj/wire/okio/Sink;)V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/zip/CRC32;

    invoke-direct {v0}, Ljava/util/zip/CRC32;-><init>()V

    iput-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->e:Ljava/util/zip/CRC32;

    if-eqz p1, :cond_0

    new-instance v0, Ljava/util/zip/Deflater;

    const/4 v1, -0x1

    const/4 v2, 0x1

    invoke-direct {v0, v1, v2}, Ljava/util/zip/Deflater;-><init>(IZ)V

    iput-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->b:Ljava/util/zip/Deflater;

    invoke-static {p1}, Lcom/czhj/wire/okio/Okio;->buffer(Lcom/czhj/wire/okio/Sink;)Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    iput-object p1, p0, Lcom/czhj/wire/okio/GzipSink;->a:Lcom/czhj/wire/okio/BufferedSink;

    new-instance v0, Lcom/czhj/wire/okio/DeflaterSink;

    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->b:Ljava/util/zip/Deflater;

    invoke-direct {v0, p1, v1}, Lcom/czhj/wire/okio/DeflaterSink;-><init>(Lcom/czhj/wire/okio/BufferedSink;Ljava/util/zip/Deflater;)V

    iput-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->c:Lcom/czhj/wire/okio/DeflaterSink;

    invoke-direct {p0}, Lcom/czhj/wire/okio/GzipSink;->a()V

    return-void

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "sink == null"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private a()V
    .locals 2

    iget-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0}, Lcom/czhj/wire/okio/BufferedSink;->buffer()Lcom/czhj/wire/okio/Buffer;

    move-result-object v0

    const/16 v1, 0x1f8b

    invoke-virtual {v0, v1}, Lcom/czhj/wire/okio/Buffer;->writeShort(I)Lcom/czhj/wire/okio/Buffer;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/czhj/wire/okio/Buffer;->writeByte(I)Lcom/czhj/wire/okio/Buffer;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/czhj/wire/okio/Buffer;->writeByte(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/okio/Buffer;->writeInt(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/okio/Buffer;->writeByte(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, v1}, Lcom/czhj/wire/okio/Buffer;->writeByte(I)Lcom/czhj/wire/okio/Buffer;

    return-void
.end method

.method private a(Lcom/czhj/wire/okio/Buffer;J)V
    .locals 4

    iget-object p1, p1, Lcom/czhj/wire/okio/Buffer;->b:Lcom/czhj/wire/okio/Segment;

    :goto_0
    const-wide/16 v0, 0x0

    cmp-long v0, p2, v0

    if-lez v0, :cond_0

    iget v0, p1, Lcom/czhj/wire/okio/Segment;->e:I

    iget v1, p1, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v0, v1

    int-to-long v0, v0

    invoke-static {p2, p3, v0, v1}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v0

    long-to-int v0, v0

    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->e:Ljava/util/zip/CRC32;

    iget-object v2, p1, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v3, p1, Lcom/czhj/wire/okio/Segment;->d:I

    invoke-virtual {v1, v2, v3, v0}, Ljava/util/zip/CRC32;->update([BII)V

    int-to-long v0, v0

    sub-long/2addr p2, v0

    iget-object p1, p1, Lcom/czhj/wire/okio/Segment;->h:Lcom/czhj/wire/okio/Segment;

    goto :goto_0

    :cond_0
    return-void
.end method

.method private b()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->a:Lcom/czhj/wire/okio/BufferedSink;

    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->e:Ljava/util/zip/CRC32;

    invoke-virtual {v1}, Ljava/util/zip/CRC32;->getValue()J

    move-result-wide v1

    long-to-int v1, v1

    invoke-interface {v0, v1}, Lcom/czhj/wire/okio/BufferedSink;->writeIntLe(I)Lcom/czhj/wire/okio/BufferedSink;

    iget-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->a:Lcom/czhj/wire/okio/BufferedSink;

    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->b:Ljava/util/zip/Deflater;

    invoke-virtual {v1}, Ljava/util/zip/Deflater;->getTotalIn()I

    move-result v1

    invoke-interface {v0, v1}, Lcom/czhj/wire/okio/BufferedSink;->writeIntLe(I)Lcom/czhj/wire/okio/BufferedSink;

    return-void
.end method


# virtual methods
.method public close()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/GzipSink;->d:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->c:Lcom/czhj/wire/okio/DeflaterSink;

    invoke-virtual {v1}, Lcom/czhj/wire/okio/DeflaterSink;->a()V

    invoke-direct {p0}, Lcom/czhj/wire/okio/GzipSink;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    :goto_0
    :try_start_1
    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->b:Ljava/util/zip/Deflater;

    invoke-virtual {v1}, Ljava/util/zip/Deflater;->end()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    if-nez v0, :cond_1

    move-object v0, v1

    :cond_1
    :goto_1
    :try_start_2
    iget-object v1, p0, Lcom/czhj/wire/okio/GzipSink;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v1}, Lcom/czhj/wire/okio/BufferedSink;->close()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v1

    if-nez v0, :cond_2

    move-object v0, v1

    :cond_2
    :goto_2
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/czhj/wire/okio/GzipSink;->d:Z

    if-eqz v0, :cond_3

    invoke-static {v0}, Lcom/czhj/wire/okio/Util;->sneakyRethrow(Ljava/lang/Throwable;)V

    :cond_3
    return-void
.end method

.method public flush()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->c:Lcom/czhj/wire/okio/DeflaterSink;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/DeflaterSink;->flush()V

    return-void
.end method

.method public timeout()Lcom/czhj/wire/okio/Timeout;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->a:Lcom/czhj/wire/okio/BufferedSink;

    invoke-interface {v0}, Lcom/czhj/wire/okio/BufferedSink;->timeout()Lcom/czhj/wire/okio/Timeout;

    move-result-object v0

    return-object v0
.end method

.method public write(Lcom/czhj/wire/okio/Buffer;J)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    const-wide/16 v0, 0x0

    cmp-long v0, p2, v0

    if-ltz v0, :cond_1

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-direct {p0, p1, p2, p3}, Lcom/czhj/wire/okio/GzipSink;->a(Lcom/czhj/wire/okio/Buffer;J)V

    iget-object v0, p0, Lcom/czhj/wire/okio/GzipSink;->c:Lcom/czhj/wire/okio/DeflaterSink;

    invoke-virtual {v0, p1, p2, p3}, Lcom/czhj/wire/okio/DeflaterSink;->write(Lcom/czhj/wire/okio/Buffer;J)V

    return-void

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "byteCount < 0: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.class final Lcom/czhj/wire/okio/RealBufferedSink;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/wire/okio/BufferedSink;


# instance fields
.field a:Z

.field public final buffer:Lcom/czhj/wire/okio/Buffer;

.field public final sink:Lcom/czhj/wire/okio/Sink;


# direct methods
.method constructor <init>(Lcom/czhj/wire/okio/Sink;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/czhj/wire/okio/Buffer;

    invoke-direct {v0}, Lcom/czhj/wire/okio/Buffer;-><init>()V

    iput-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    if-eqz p1, :cond_0

    iput-object p1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    return-void

    :cond_0
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "sink == null"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method


# virtual methods
.method public buffer()Lcom/czhj/wire/okio/Buffer;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    return-object v0
.end method

.method public close()V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    iget-wide v1, v1, Lcom/czhj/wire/okio/Buffer;->c:J

    const-wide/16 v3, 0x0

    cmp-long v1, v1, v3

    if-lez v1, :cond_1

    iget-object v1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    iget-object v2, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    iget-object v3, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    iget-wide v3, v3, Lcom/czhj/wire/okio/Buffer;->c:J

    invoke-interface {v1, v2, v3, v4}, Lcom/czhj/wire/okio/Sink;->write(Lcom/czhj/wire/okio/Buffer;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    :cond_1
    :goto_0
    :try_start_1
    iget-object v1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    invoke-interface {v1}, Lcom/czhj/wire/okio/Sink;->close()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v1

    if-nez v0, :cond_2

    move-object v0, v1

    :cond_2
    :goto_1
    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-eqz v0, :cond_3

    invoke-static {v0}, Lcom/czhj/wire/okio/Util;->sneakyRethrow(Ljava/lang/Throwable;)V

    :cond_3
    return-void
.end method

.method public emit()Lcom/czhj/wire/okio/BufferedSink;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Buffer;->size()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    iget-object v3, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-interface {v2, v3, v0, v1}, Lcom/czhj/wire/okio/Sink;->write(Lcom/czhj/wire/okio/Buffer;J)V

    :cond_0
    return-object p0

    :cond_1
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "closed"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Buffer;->completeSegmentByteCount()J

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmp-long v2, v0, v2

    if-lez v2, :cond_0

    iget-object v2, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    iget-object v3, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-interface {v2, v3, v0, v1}, Lcom/czhj/wire/okio/Sink;->write(Lcom/czhj/wire/okio/Buffer;J)V

    :cond_0
    return-object p0

    :cond_1
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "closed"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public flush()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    iget-wide v0, v0, Lcom/czhj/wire/okio/Buffer;->c:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    iget-object v1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    iget-wide v2, v1, Lcom/czhj/wire/okio/Buffer;->c:J

    invoke-interface {v0, v1, v2, v3}, Lcom/czhj/wire/okio/Sink;->write(Lcom/czhj/wire/okio/Buffer;J)V

    :cond_0
    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    invoke-interface {v0}, Lcom/czhj/wire/okio/Sink;->flush()V

    return-void

    :cond_1
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "closed"

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public outputStream()Ljava/io/OutputStream;
    .locals 1

    new-instance v0, Lcom/czhj/wire/okio/RealBufferedSink$1;

    invoke-direct {v0, p0}, Lcom/czhj/wire/okio/RealBufferedSink$1;-><init>(Lcom/czhj/wire/okio/RealBufferedSink;)V

    return-object v0
.end method

.method public timeout()Lcom/czhj/wire/okio/Timeout;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    invoke-interface {v0}, Lcom/czhj/wire/okio/Sink;->timeout()Lcom/czhj/wire/okio/Timeout;

    move-result-object v0

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "buffer("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/okio/RealBufferedSink;->sink:Lcom/czhj/wire/okio/Sink;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public write(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->write(Lcom/czhj/wire/okio/ByteString;)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public write(Lcom/czhj/wire/okio/Source;J)Lcom/czhj/wire/okio/BufferedSink;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    :goto_0
    const-wide/16 v0, 0x0

    cmp-long v0, p2, v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-interface {p1, v0, p2, p3}, Lcom/czhj/wire/okio/Source;->read(Lcom/czhj/wire/okio/Buffer;J)J

    move-result-wide v0

    const-wide/16 v2, -0x1

    cmp-long v2, v0, v2

    if-eqz v2, :cond_0

    sub-long/2addr p2, v0

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/io/EOFException;

    invoke-direct {p1}, Ljava/io/EOFException;-><init>()V

    throw p1

    :cond_1
    return-object p0
.end method

.method public write([B)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->write([B)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public write([BII)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2, p3}, Lcom/czhj/wire/okio/Buffer;->write([BII)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public write(Lcom/czhj/wire/okio/Buffer;J)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2, p3}, Lcom/czhj/wire/okio/Buffer;->write(Lcom/czhj/wire/okio/Buffer;J)V

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    return-void

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeAll(Lcom/czhj/wire/okio/Source;)J
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    if-eqz p1, :cond_1

    const-wide/16 v0, 0x0

    :goto_0
    iget-object v2, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    const-wide/16 v3, 0x2000

    invoke-interface {p1, v2, v3, v4}, Lcom/czhj/wire/okio/Source;->read(Lcom/czhj/wire/okio/Buffer;J)J

    move-result-wide v2

    const-wide/16 v4, -0x1

    cmp-long v4, v2, v4

    if-eqz v4, :cond_0

    add-long/2addr v0, v2

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    goto :goto_0

    :cond_0
    return-wide v0

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "source == null"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeByte(I)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeByte(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeDecimalLong(J)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2}, Lcom/czhj/wire/okio/Buffer;->writeDecimalLong(J)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeHexadecimalUnsignedLong(J)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2}, Lcom/czhj/wire/okio/Buffer;->writeHexadecimalUnsignedLong(J)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeInt(I)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeInt(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeIntLe(I)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeIntLe(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeLong(J)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2}, Lcom/czhj/wire/okio/Buffer;->writeLong(J)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeLongLe(J)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2}, Lcom/czhj/wire/okio/Buffer;->writeLongLe(J)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeShort(I)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeShort(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeShortLe(I)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeShortLe(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeString(Ljava/lang/String;IILjava/nio/charset/Charset;)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/czhj/wire/okio/Buffer;->writeString(Ljava/lang/String;IILjava/nio/charset/Charset;)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeString(Ljava/lang/String;Ljava/nio/charset/Charset;)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2}, Lcom/czhj/wire/okio/Buffer;->writeString(Ljava/lang/String;Ljava/nio/charset/Charset;)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeUtf8(Ljava/lang/String;)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeUtf8(Ljava/lang/String;)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeUtf8(Ljava/lang/String;II)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1, p2, p3}, Lcom/czhj/wire/okio/Buffer;->writeUtf8(Ljava/lang/String;II)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string p2, "closed"

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public writeUtf8CodePoint(I)Lcom/czhj/wire/okio/BufferedSink;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-boolean v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->a:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/czhj/wire/okio/RealBufferedSink;->buffer:Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {v0, p1}, Lcom/czhj/wire/okio/Buffer;->writeUtf8CodePoint(I)Lcom/czhj/wire/okio/Buffer;

    invoke-virtual {p0}, Lcom/czhj/wire/okio/RealBufferedSink;->emitCompleteSegments()Lcom/czhj/wire/okio/BufferedSink;

    move-result-object p1

    return-object p1

    :cond_0
    new-instance p1, Ljava/lang/IllegalStateException;

    const-string v0, "closed"

    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

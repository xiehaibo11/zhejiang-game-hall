.class Lcom/czhj/wire/okio/Okio$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/wire/okio/Sink;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/czhj/wire/okio/Okio;->a(Ljava/io/OutputStream;Lcom/czhj/wire/okio/Timeout;)Lcom/czhj/wire/okio/Sink;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/czhj/wire/okio/Timeout;

.field final synthetic b:Ljava/io/OutputStream;


# direct methods
.method constructor <init>(Lcom/czhj/wire/okio/Timeout;Ljava/io/OutputStream;)V
    .locals 0

    iput-object p1, p0, Lcom/czhj/wire/okio/Okio$1;->a:Lcom/czhj/wire/okio/Timeout;

    iput-object p2, p0, Lcom/czhj/wire/okio/Okio$1;->b:Ljava/io/OutputStream;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public close()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/okio/Okio$1;->b:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->close()V

    return-void
.end method

.method public flush()V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/czhj/wire/okio/Okio$1;->b:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->flush()V

    return-void
.end method

.method public timeout()Lcom/czhj/wire/okio/Timeout;
    .locals 1

    iget-object v0, p0, Lcom/czhj/wire/okio/Okio$1;->a:Lcom/czhj/wire/okio/Timeout;

    return-object v0
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sink("

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/czhj/wire/okio/Okio$1;->b:Ljava/io/OutputStream;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public write(Lcom/czhj/wire/okio/Buffer;J)V
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-wide v0, p1, Lcom/czhj/wire/okio/Buffer;->c:J

    const-wide/16 v2, 0x0

    move-wide v4, p2

    invoke-static/range {v0 .. v5}, Lcom/czhj/wire/okio/Util;->checkOffsetAndCount(JJJ)V

    :cond_0
    :goto_0
    const-wide/16 v0, 0x0

    cmp-long v0, p2, v0

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/czhj/wire/okio/Okio$1;->a:Lcom/czhj/wire/okio/Timeout;

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Timeout;->throwIfReached()V

    iget-object v0, p1, Lcom/czhj/wire/okio/Buffer;->b:Lcom/czhj/wire/okio/Segment;

    iget v1, v0, Lcom/czhj/wire/okio/Segment;->e:I

    iget v2, v0, Lcom/czhj/wire/okio/Segment;->d:I

    sub-int/2addr v1, v2

    int-to-long v1, v1

    invoke-static {p2, p3, v1, v2}, Ljava/lang/Math;->min(JJ)J

    move-result-wide v1

    long-to-int v1, v1

    iget-object v2, p0, Lcom/czhj/wire/okio/Okio$1;->b:Ljava/io/OutputStream;

    iget-object v3, v0, Lcom/czhj/wire/okio/Segment;->c:[B

    iget v4, v0, Lcom/czhj/wire/okio/Segment;->d:I

    invoke-virtual {v2, v3, v4, v1}, Ljava/io/OutputStream;->write([BII)V

    iget v2, v0, Lcom/czhj/wire/okio/Segment;->d:I

    add-int/2addr v2, v1

    iput v2, v0, Lcom/czhj/wire/okio/Segment;->d:I

    int-to-long v1, v1

    sub-long/2addr p2, v1

    iget-wide v3, p1, Lcom/czhj/wire/okio/Buffer;->c:J

    sub-long/2addr v3, v1

    iput-wide v3, p1, Lcom/czhj/wire/okio/Buffer;->c:J

    iget v1, v0, Lcom/czhj/wire/okio/Segment;->d:I

    iget v2, v0, Lcom/czhj/wire/okio/Segment;->e:I

    if-ne v1, v2, :cond_0

    invoke-virtual {v0}, Lcom/czhj/wire/okio/Segment;->pop()Lcom/czhj/wire/okio/Segment;

    move-result-object v1

    iput-object v1, p1, Lcom/czhj/wire/okio/Buffer;->b:Lcom/czhj/wire/okio/Segment;

    invoke-static {v0}, Lcom/czhj/wire/okio/SegmentPool;->a(Lcom/czhj/wire/okio/Segment;)V

    goto :goto_0

    :cond_1
    return-void
.end method

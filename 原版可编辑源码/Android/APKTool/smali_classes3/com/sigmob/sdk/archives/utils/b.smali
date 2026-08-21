.class public Lcom/sigmob/sdk/archives/utils/b;
.super Ljava/io/FilterInputStream;


# instance fields
.field private a:J


# direct methods
.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 0

    invoke-direct {p0, p1}, Ljava/io/FilterInputStream;-><init>(Ljava/io/InputStream;)V

    return-void
.end method


# virtual methods
.method public a()J
    .locals 2

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/utils/b;->a:J

    return-wide v0
.end method

.method protected final a(J)V
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    if-eqz v0, :cond_0

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/utils/b;->a:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/utils/b;->a:J

    :cond_0
    return-void
.end method

.method public read()I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/utils/b;->in:Ljava/io/InputStream;

    invoke-virtual {v0}, Ljava/io/InputStream;->read()I

    move-result v0

    if-ltz v0, :cond_0

    const-wide/16 v1, 0x1

    invoke-virtual {p0, v1, v2}, Lcom/sigmob/sdk/archives/utils/b;->a(J)V

    :cond_0
    return v0
.end method

.method public read([B)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    array-length v0, p1

    const/4 v1, 0x0

    invoke-virtual {p0, p1, v1, v0}, Lcom/sigmob/sdk/archives/utils/b;->read([BII)I

    move-result p1

    return p1
.end method

.method public read([BII)I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/utils/b;->in:Ljava/io/InputStream;

    invoke-virtual {v0, p1, p2, p3}, Ljava/io/InputStream;->read([BII)I

    move-result p1

    if-ltz p1, :cond_0

    int-to-long p2, p1

    invoke-virtual {p0, p2, p3}, Lcom/sigmob/sdk/archives/utils/b;->a(J)V

    :cond_0
    return p1
.end method

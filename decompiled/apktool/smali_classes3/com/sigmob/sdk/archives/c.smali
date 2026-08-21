.class public abstract Lcom/sigmob/sdk/archives/c;
.super Ljava/io/InputStream;


# static fields
.field private static final b:I = 0xff


# instance fields
.field private a:[B

.field private c:J


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/io/InputStream;-><init>()V

    const/4 v0, 0x1

    new-array v0, v0, [B

    iput-object v0, p0, Lcom/sigmob/sdk/archives/c;->a:[B

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    return-void
.end method

.method private b(J)V
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long v0, p1, v0

    if-eqz v0, :cond_0

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    add-long/2addr v0, p1

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    :cond_0
    return-void
.end method


# virtual methods
.method public abstract a()Lcom/sigmob/sdk/archives/a;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation
.end method

.method protected a(I)V
    .locals 2

    int-to-long v0, p1

    invoke-direct {p0, v0, v1}, Lcom/sigmob/sdk/archives/c;->b(J)V

    return-void
.end method

.method protected a(J)V
    .locals 2

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    sub-long/2addr v0, p1

    iput-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    return-void
.end method

.method public a(Lcom/sigmob/sdk/archives/a;)Z
    .locals 0

    const/4 p1, 0x1

    return p1
.end method

.method public b()I
    .locals 2
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    long-to-int v0, v0

    return v0
.end method

.method protected c()J
    .locals 2

    iget-wide v0, p0, Lcom/sigmob/sdk/archives/c;->c:J

    return-wide v0
.end method

.method public read()I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/c;->a:[B

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {p0, v0, v1, v2}, Lcom/sigmob/sdk/archives/c;->read([BII)I

    move-result v0

    const/4 v2, -0x1

    if-ne v0, v2, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/archives/c;->a:[B

    aget-byte v0, v0, v1

    and-int/lit16 v2, v0, 0xff

    :goto_0
    return v2
.end method

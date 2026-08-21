.class public Lcom/sigmob/sdk/videocache/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/videocache/c;


# instance fields
.field private volatile a:[B

.field private volatile b:Z


# direct methods
.method public constructor <init>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    invoke-direct {p0, v0}, Lcom/sigmob/sdk/videocache/a;-><init>([B)V

    return-void
.end method

.method public constructor <init>([B)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-static {p1}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [B

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    return-void
.end method


# virtual methods
.method public a([BJI)I
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    array-length v0, v0

    int-to-long v0, v0

    cmp-long v0, p2, v0

    if-ltz v0, :cond_0

    const/4 p1, -0x1

    return p1

    :cond_0
    const-wide/32 v0, 0x7fffffff

    cmp-long v0, p2, v0

    if-gtz v0, :cond_1

    new-instance v0, Ljava/io/ByteArrayInputStream;

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    invoke-direct {v0, v1}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    long-to-int p2, p2

    invoke-virtual {v0, p1, p2, p4}, Ljava/io/ByteArrayInputStream;->read([BII)I

    move-result p1

    return p1

    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Too long offset for memory cache "

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public a()J
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    array-length v0, v0

    int-to-long v0, v0

    return-wide v0
.end method

.method public a([BI)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    invoke-static {v0}, Lcom/sigmob/sdk/videocache/n;->a(Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v0, 0x0

    if-ltz p2, :cond_0

    array-length v1, p1

    if-gt p2, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    invoke-static {v1}, Lcom/sigmob/sdk/videocache/n;->a(Z)V

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    iget-object v2, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    array-length v2, v2

    add-int/2addr v2, p2

    invoke-static {v1, v2}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object v1

    iget-object v2, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    array-length v2, v2

    invoke-static {p1, v0, v1, v2, p2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iput-object v1, p0, Lcom/sigmob/sdk/videocache/a;->a:[B

    return-void
.end method

.method public b()V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    return-void
.end method

.method public c()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/videocache/a;->b:Z

    return-void
.end method

.method public d()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/videocache/a;->b:Z

    return v0
.end method

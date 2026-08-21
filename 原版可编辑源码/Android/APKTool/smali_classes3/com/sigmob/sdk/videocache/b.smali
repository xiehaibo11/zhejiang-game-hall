.class public Lcom/sigmob/sdk/videocache/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/videocache/s;


# instance fields
.field private final a:[B

.field private b:Ljava/io/ByteArrayInputStream;


# direct methods
.method public constructor <init>([B)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/videocache/b;->a:[B

    return-void
.end method


# virtual methods
.method public a([B)I
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/b;->b:Ljava/io/ByteArrayInputStream;

    array-length v1, p1

    const/4 v2, 0x0

    invoke-virtual {v0, p1, v2, v1}, Ljava/io/ByteArrayInputStream;->read([BII)I

    move-result p1

    return p1
.end method

.method public a()J
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/videocache/b;->a:[B

    array-length v0, v0

    int-to-long v0, v0

    return-wide v0
.end method

.method public a(J)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/sigmob/sdk/videocache/p;
        }
    .end annotation

    new-instance v0, Ljava/io/ByteArrayInputStream;

    iget-object v1, p0, Lcom/sigmob/sdk/videocache/b;->a:[B

    invoke-direct {v0, v1}, Ljava/io/ByteArrayInputStream;-><init>([B)V

    iput-object v0, p0, Lcom/sigmob/sdk/videocache/b;->b:Ljava/io/ByteArrayInputStream;

    invoke-virtual {v0, p1, p2}, Ljava/io/ByteArrayInputStream;->skip(J)J

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

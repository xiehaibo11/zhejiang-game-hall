.class public Lcom/igexin/b/a/b/a/a/o;
.super Ljava/lang/Object;


# instance fields
.field a:Ljava/io/BufferedInputStream;


# direct methods
.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/io/BufferedInputStream;

    invoke-direct {v0, p1}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    iput-object v0, p0, Lcom/igexin/b/a/b/a/a/o;->a:Ljava/io/BufferedInputStream;

    return-void
.end method


# virtual methods
.method public a([B)I
    .locals 4

    array-length v0, p1

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v1, v0, :cond_1

    iget-object v2, p0, Lcom/igexin/b/a/b/a/a/o;->a:Ljava/io/BufferedInputStream;

    sub-int v3, v0, v1

    invoke-virtual {v2, p1, v1, v3}, Ljava/io/BufferedInputStream;->read([BII)I

    move-result v2

    if-lez v2, :cond_0

    add-int/2addr v1, v2

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/io/IOException;

    const-string v0, "read = -1, end of stream !"

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    return v2
.end method

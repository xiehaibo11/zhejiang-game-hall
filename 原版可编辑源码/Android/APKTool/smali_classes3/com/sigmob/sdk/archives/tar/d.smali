.class Lcom/sigmob/sdk/archives/tar/d;
.super Ljava/lang/Object;


# static fields
.field public static final a:I = 0x200

.field public static final b:I = 0x2800


# instance fields
.field private c:Ljava/io/InputStream;

.field private d:Ljava/io/OutputStream;

.field private e:[B

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:I


# direct methods
.method public constructor <init>(Ljava/io/InputStream;)V
    .locals 1

    const/16 v0, 0x2800

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/archives/tar/d;-><init>(Ljava/io/InputStream;I)V

    return-void
.end method

.method public constructor <init>(Ljava/io/InputStream;I)V
    .locals 1

    const/16 v0, 0x200

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/archives/tar/d;-><init>(Ljava/io/InputStream;II)V

    return-void
.end method

.method public constructor <init>(Ljava/io/InputStream;II)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    invoke-direct {p0, p2, p3}, Lcom/sigmob/sdk/archives/tar/d;->a(II)V

    return-void
.end method

.method public constructor <init>(Ljava/io/OutputStream;)V
    .locals 1

    const/16 v0, 0x2800

    invoke-direct {p0, p1, v0}, Lcom/sigmob/sdk/archives/tar/d;-><init>(Ljava/io/OutputStream;I)V

    return-void
.end method

.method public constructor <init>(Ljava/io/OutputStream;I)V
    .locals 1

    const/16 v0, 0x200

    invoke-direct {p0, p1, p2, v0}, Lcom/sigmob/sdk/archives/tar/d;-><init>(Ljava/io/OutputStream;II)V

    return-void
.end method

.method public constructor <init>(Ljava/io/OutputStream;II)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    invoke-direct {p0, p2, p3}, Lcom/sigmob/sdk/archives/tar/d;->a(II)V

    return-void
.end method

.method private a(II)V
    .locals 0

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/d;->h:I

    iput p2, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    div-int p2, p1, p2

    iput p2, p0, Lcom/sigmob/sdk/archives/tar/d;->j:I

    new-array p1, p1, [B

    iput-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    iget-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-eqz p1, :cond_0

    const/4 p1, -0x1

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    iput p2, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    :goto_0
    return-void
.end method

.method private i()Z
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-eqz v0, :cond_3

    const/4 v0, 0x0

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->h:I

    move v2, v0

    :goto_0
    if-lez v1, :cond_2

    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    iget-object v4, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    invoke-virtual {v3, v4, v2, v1}, Ljava/io/InputStream;->read([BII)I

    move-result v3

    int-to-long v3, v3

    const-wide/16 v5, -0x1

    cmp-long v5, v3, v5

    if-nez v5, :cond_1

    if-nez v2, :cond_0

    return v0

    :cond_0
    iget-object v3, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    add-int/2addr v1, v2

    invoke-static {v3, v2, v1, v0}, Ljava/util/Arrays;->fill([BIIB)V

    goto :goto_1

    :cond_1
    int-to-long v5, v2

    add-long/2addr v5, v3

    long-to-int v2, v5

    int-to-long v5, v1

    sub-long/2addr v5, v3

    long-to-int v1, v5

    goto :goto_0

    :cond_2
    :goto_1
    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    return v1

    :cond_3
    new-instance v0, Ljava/io/IOException;

    const-string v1, "reading from an output buffer"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private j()V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    iget v2, p0, Lcom/sigmob/sdk/archives/tar/d;->h:I

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3, v2}, Ljava/io/OutputStream;->write([BII)V

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->flush()V

    iput v3, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    invoke-static {v0, v3}, Ljava/util/Arrays;->fill([BB)V

    return-void

    :cond_0
    new-instance v0, Ljava/io/IOException;

    const-string v1, "writing to an input buffer"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->h:I

    return v0
.end method

.method public a([BI)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    if-nez v0, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-nez p1, :cond_0

    new-instance p1, Ljava/io/IOException;

    const-string p2, "Output buffer is closed"

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_0
    new-instance p1, Ljava/io/IOException;

    const-string p2, "writing to an input buffer"

    invoke-direct {p1, p2}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    add-int/2addr v0, p2

    array-length v1, p1

    if-gt v0, v1, :cond_3

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->j:I

    if-lt v0, v1, :cond_2

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/d;->j()V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v2, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    mul-int/2addr v1, v2

    invoke-static {p1, p2, v0, v1, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget p1, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    return-void

    :cond_3
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "record has length \'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length p1, p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\' with offset \'"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\' which is less than the record size of \'"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public a([B)Z
    .locals 4

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/d;->b()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v2, v0, :cond_1

    aget-byte v3, p1, v2

    if-eqz v3, :cond_0

    return v1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    return p1
.end method

.method public b()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    return v0
.end method

.method public b([B)V
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    if-nez v0, :cond_1

    iget-object p1, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-nez p1, :cond_0

    new-instance p1, Ljava/io/IOException;

    const-string v0, "Output buffer is closed"

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_0
    new-instance p1, Ljava/io/IOException;

    const-string v0, "writing to an input buffer"

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    array-length v0, p1

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    if-ne v0, v1, :cond_3

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->j:I

    if-lt v0, v1, :cond_2

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/d;->j()V

    :cond_2
    const/4 v0, 0x0

    iget-object v1, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    iget v2, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    mul-int/2addr v2, v3

    invoke-static {p1, v0, v1, v2, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget p1, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    return-void

    :cond_3
    new-instance v0, Ljava/io/IOException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "record to write has length \'"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    array-length p1, p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\' which is not the record size of \'"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\'"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public c()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->j:I

    if-lt v0, v1, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/d;->i()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    return-void

    :cond_1
    new-instance v0, Ljava/io/IOException;

    const-string v1, "reading (via skip) from an output buffer"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public d()[B
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    if-nez v0, :cond_0

    new-instance v0, Ljava/io/IOException;

    const-string v1, "input buffer is closed"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_0
    new-instance v0, Ljava/io/IOException;

    const-string v1, "reading from an output buffer"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_1
    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    iget v1, p0, Lcom/sigmob/sdk/archives/tar/d;->j:I

    if-lt v0, v1, :cond_2

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/d;->i()Z

    move-result v0

    if-nez v0, :cond_2

    const/4 v0, 0x0

    return-object v0

    :cond_2
    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->i:I

    new-array v1, v0, [B

    iget-object v2, p0, Lcom/sigmob/sdk/archives/tar/d;->e:[B

    iget v3, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    mul-int/2addr v3, v0

    const/4 v4, 0x0

    invoke-static {v2, v3, v1, v4, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    add-int/lit8 v0, v0, 0x1

    iput v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    return-object v1
.end method

.method public e()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->f:I

    return v0
.end method

.method public f()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    add-int/lit8 v0, v0, -0x1

    return v0
.end method

.method g()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/sigmob/sdk/archives/tar/d;->g:I

    if-lez v0, :cond_0

    invoke-direct {p0}, Lcom/sigmob/sdk/archives/tar/d;->j()V

    :cond_0
    return-void

    :cond_1
    new-instance v0, Ljava/io/IOException;

    const-string v1, "writing to an input buffer"

    invoke-direct {v0, v1}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public h()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/sigmob/sdk/archives/tar/d;->g()V

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    sget-object v2, Ljava/lang/System;->out:Ljava/io/PrintStream;

    if-eq v0, v2, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    sget-object v2, Ljava/lang/System;->err:Ljava/io/PrintStream;

    if-eq v0, v2, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    invoke-virtual {v0}, Ljava/io/OutputStream;->close()V

    iput-object v1, p0, Lcom/sigmob/sdk/archives/tar/d;->d:Ljava/io/OutputStream;

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    if-eqz v0, :cond_2

    sget-object v2, Ljava/lang/System;->in:Ljava/io/InputStream;

    if-eq v0, v2, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    :cond_1
    iput-object v1, p0, Lcom/sigmob/sdk/archives/tar/d;->c:Ljava/io/InputStream;

    :cond_2
    :goto_0
    return-void
.end method

.class public final Lcom/kwad/sdk/pngencrypt/chunk/j;
.super Lcom/kwad/sdk/pngencrypt/chunk/t;


# instance fields
.field private aFN:Z

.field private aFO:Ljava/lang/String;

.field private aFP:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    const-string v0, "iTXt"

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/pngencrypt/chunk/t;-><init>(Ljava/lang/String;Lcom/kwad/sdk/pngencrypt/k;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFN:Z

    const-string p1, ""

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFO:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFP:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
    .locals 8

    const/4 v0, 0x3

    new-array v1, v0, [I

    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    :goto_0
    iget-object v5, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    array-length v5, v5

    const/4 v6, 0x1

    if-ge v3, v5, :cond_2

    iget-object v5, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget-byte v5, v5, v3

    if-nez v5, :cond_1

    aput v3, v1, v4

    add-int/lit8 v4, v4, 0x1

    if-ne v4, v6, :cond_0

    add-int/lit8 v3, v3, 0x2

    :cond_0
    if-eq v4, v0, :cond_2

    :cond_1
    add-int/2addr v3, v6

    goto :goto_0

    :cond_2
    if-eq v4, v0, :cond_3

    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v3, "Bad formed PngChunkITXT chunk"

    invoke-direct {v0, v3}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_3
    iget-object v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget v3, v1, v2

    invoke-static {v0, v2, v3}, Lcom/kwad/sdk/pngencrypt/chunk/b;->d([BII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->key:Ljava/lang/String;

    aget v0, v1, v2

    add-int/2addr v0, v6

    iget-object v3, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget-byte v3, v3, v0

    if-nez v3, :cond_4

    move v3, v2

    goto :goto_1

    :cond_4
    move v3, v6

    :goto_1
    iput-boolean v3, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFN:Z

    add-int/2addr v0, v6

    if-eqz v3, :cond_5

    iget-object v3, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget-byte v3, v3, v0

    if-eqz v3, :cond_5

    new-instance v3, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v4, "Bad formed PngChunkITXT chunk - bad compression method "

    invoke-direct {v3, v4}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    invoke-static {v3}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_5
    iget-object v3, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget v4, v1, v6

    sub-int/2addr v4, v0

    invoke-static {v3, v0, v4}, Lcom/kwad/sdk/pngencrypt/chunk/b;->d([BII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFO:Ljava/lang/String;

    iget-object v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget v3, v1, v6

    add-int/2addr v3, v6

    const/4 v4, 0x2

    aget v5, v1, v4

    aget v7, v1, v6

    sub-int/2addr v5, v7

    sub-int/2addr v5, v6

    invoke-static {v0, v3, v5}, Lcom/kwad/sdk/pngencrypt/chunk/b;->e([BII)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFP:Ljava/lang/String;

    aget v0, v1, v4

    add-int/2addr v0, v6

    iget-boolean v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aFN:Z

    iget-object p1, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    if-eqz v1, :cond_6

    array-length v1, p1

    sub-int/2addr v1, v0

    invoke-static {p1, v0, v1, v2}, Lcom/kwad/sdk/pngencrypt/chunk/b;->b([BIIZ)[B

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/chunk/b;->j([B)Ljava/lang/String;

    move-result-object p1

    :goto_2
    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/j;->aGh:Ljava/lang/String;

    return-void

    :cond_6
    array-length v1, p1

    sub-int/2addr v1, v0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/pngencrypt/chunk/b;->e([BII)Ljava/lang/String;

    move-result-object p1

    goto :goto_2
.end method

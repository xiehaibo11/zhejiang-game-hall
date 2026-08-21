.class public final Lcom/kwad/sdk/pngencrypt/chunk/n;
.super Lcom/kwad/sdk/pngencrypt/chunk/k;


# instance fields
.field private aFV:Ljava/lang/String;

.field private aFW:I

.field private aFX:[I


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    const-string v0, "sPLT"

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/pngencrypt/chunk/k;-><init>(Ljava/lang/String;Lcom/kwad/sdk/pngencrypt/k;)V

    return-void
.end method


# virtual methods
.method public final Hj()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFV:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
    .locals 12

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    array-length v2, v2

    if-ge v1, v2, :cond_1

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    aget-byte v2, v2, v1

    if-nez v2, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const/4 v1, -0x1

    :goto_1
    if-lez v1, :cond_5

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    array-length v2, v2

    add-int/lit8 v2, v2, -0x2

    if-gt v1, v2, :cond_5

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/pngencrypt/chunk/b;->d([BII)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFV:Ljava/lang/String;

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v3, v1, 0x1

    invoke-static {v2, v3}, Lcom/kwad/sdk/pngencrypt/n;->e([BI)I

    move-result v2

    iput v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFW:I

    add-int/lit8 v1, v1, 0x2

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    array-length v2, v2

    sub-int/2addr v2, v1

    iget v3, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFW:I

    const/16 v4, 0x8

    if-ne v3, v4, :cond_2

    const/4 v3, 0x6

    goto :goto_2

    :cond_2
    const/16 v3, 0xa

    :goto_2
    div-int/2addr v2, v3

    mul-int/lit8 v3, v2, 0x5

    new-array v3, v3, [I

    iput-object v3, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFX:[I

    move v3, v1

    move v1, v0

    :goto_3
    if-ge v0, v2, :cond_4

    iget v5, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFW:I

    if-ne v5, v4, :cond_3

    iget-object v5, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v6, v3, 0x1

    invoke-static {v5, v3}, Lcom/kwad/sdk/pngencrypt/n;->e([BI)I

    move-result v3

    iget-object v5, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v7, v6, 0x1

    invoke-static {v5, v6}, Lcom/kwad/sdk/pngencrypt/n;->e([BI)I

    move-result v5

    iget-object v6, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v8, v7, 0x1

    invoke-static {v6, v7}, Lcom/kwad/sdk/pngencrypt/n;->e([BI)I

    move-result v6

    iget-object v7, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v9, v8, 0x1

    invoke-static {v7, v8}, Lcom/kwad/sdk/pngencrypt/n;->e([BI)I

    move-result v7

    goto :goto_4

    :cond_3
    iget-object v5, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v5, v3}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v5

    add-int/lit8 v3, v3, 0x2

    iget-object v6, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v6, v3}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v6

    add-int/lit8 v3, v3, 0x2

    iget-object v7, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v7, v3}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v7

    add-int/lit8 v3, v3, 0x2

    iget-object v8, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v8, v3}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v8

    add-int/lit8 v9, v3, 0x2

    move v3, v5

    move v5, v6

    move v6, v7

    move v7, v8

    :goto_4
    iget-object v8, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    invoke-static {v8, v9}, Lcom/kwad/sdk/pngencrypt/n;->f([BI)I

    move-result v8

    add-int/lit8 v9, v9, 0x2

    iget-object v10, p0, Lcom/kwad/sdk/pngencrypt/chunk/n;->aFX:[I

    add-int/lit8 v11, v1, 0x1

    aput v3, v10, v1

    add-int/lit8 v1, v11, 0x1

    aput v5, v10, v11

    add-int/lit8 v3, v1, 0x1

    aput v6, v10, v1

    add-int/lit8 v1, v3, 0x1

    aput v7, v10, v3

    add-int/lit8 v3, v1, 0x1

    aput v8, v10, v1

    add-int/lit8 v0, v0, 0x1

    move v1, v3

    move v3, v9

    goto :goto_3

    :cond_4
    return-void

    :cond_5
    new-instance p1, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v0, "bad sPLT chunk: no separator found"

    invoke-direct {p1, v0}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

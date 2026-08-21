.class public final Lcom/kwad/sdk/pngencrypt/chunk/m;
.super Lcom/kwad/sdk/pngencrypt/chunk/p;


# instance fields
.field private aFT:I

.field private aFU:[I


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    const-string v0, "PLTE"

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/pngencrypt/chunk/p;-><init>(Ljava/lang/String;Lcom/kwad/sdk/pngencrypt/k;)V

    const/4 p1, 0x0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFT:I

    return-void
.end method

.method private a(IIII)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFU:[I

    shl-int/lit8 p2, p2, 0x10

    shl-int/lit8 p3, p3, 0x8

    or-int/2addr p2, p3

    or-int/2addr p2, p4

    aput p2, v0, p1

    return-void
.end method

.method private cZ(I)V
    .locals 2

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFT:I

    if-lez p1, :cond_2

    const/16 v0, 0x100

    if-gt p1, v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFU:[I

    if-eqz v0, :cond_0

    array-length v0, v0

    if-eq v0, p1, :cond_1

    :cond_0
    iget p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFT:I

    new-array p1, p1, [I

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFU:[I

    :cond_1
    return-void

    :cond_2
    new-instance p1, Lcom/kwad/sdk/pngencrypt/PngjException;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "invalid pallette - nentries="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFT:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p1, v0}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw p1
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
    .locals 6

    iget v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->len:I

    div-int/lit8 v0, v0, 0x3

    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/chunk/m;->cZ(I)V

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    iget v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/m;->aFT:I

    if-ge v0, v2, :cond_0

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v3, v1, 0x1

    aget-byte v1, v2, v1

    and-int/lit16 v1, v1, 0xff

    iget-object v2, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v4, v3, 0x1

    aget-byte v2, v2, v3

    and-int/lit16 v2, v2, 0xff

    iget-object v3, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->data:[B

    add-int/lit8 v5, v4, 0x1

    aget-byte v3, v3, v4

    and-int/lit16 v3, v3, 0xff

    invoke-direct {p0, v0, v1, v2, v3}, Lcom/kwad/sdk/pngencrypt/chunk/m;->a(IIII)V

    add-int/lit8 v0, v0, 0x1

    move v1, v5

    goto :goto_0

    :cond_0
    return-void
.end method

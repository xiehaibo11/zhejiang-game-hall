.class public final Lcom/kwad/sdk/pngencrypt/chunk/i;
.super Lcom/kwad/sdk/pngencrypt/chunk/p;


# instance fields
.field private aEn:I

.field private aEo:I

.field private aFI:I

.field private aFJ:I

.field private aFK:I

.field private aFL:I

.field private aFM:I


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    const-string v0, "IHDR"

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/pngencrypt/chunk/p;-><init>(Ljava/lang/String;Lcom/kwad/sdk/pngencrypt/k;)V

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hg()V

    :cond_0
    return-void
.end method

.method private GI()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEn:I

    return v0
.end method

.method private GJ()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEo:I

    return v0
.end method

.method private Hc()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFI:I

    return v0
.end method

.method private Hd()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFJ:I

    return v0
.end method

.method private He()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFM:I

    return v0
.end method

.method private Hg()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEo:I

    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cS(I)V

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEn:I

    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cT(I)V

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEG:I

    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cU(I)V

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget-boolean v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEI:Z

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    const/4 v0, 0x4

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    iget-object v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget-boolean v2, v2, Lcom/kwad/sdk/pngencrypt/k;->aEK:Z

    if-eqz v2, :cond_1

    add-int/lit8 v0, v0, 0x1

    :cond_1
    iget-object v2, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEC:Lcom/kwad/sdk/pngencrypt/k;

    iget-boolean v2, v2, Lcom/kwad/sdk/pngencrypt/k;->aEJ:Z

    if-nez v2, :cond_2

    add-int/lit8 v0, v0, 0x2

    :cond_2
    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cV(I)V

    invoke-direct {p0, v1}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cW(I)V

    invoke-direct {p0, v1}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cX(I)V

    invoke-direct {p0, v1}, Lcom/kwad/sdk/pngencrypt/chunk/i;->cY(I)V

    return-void
.end method

.method private Hi()V
    .locals 7

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEo:I

    if-lez v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEn:I

    if-lez v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFK:I

    if-nez v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFL:I

    if-nez v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFI:I

    const/16 v1, 0x8

    const/4 v2, 0x4

    const/4 v3, 0x2

    const/4 v4, 0x1

    const-string v5, "bad IHDR: bitdepth invalid"

    const/16 v6, 0x10

    if-eq v0, v4, :cond_1

    if-eq v0, v3, :cond_1

    if-eq v0, v2, :cond_1

    if-eq v0, v1, :cond_1

    if-ne v0, v6, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    invoke-direct {v0, v5}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_1
    :goto_0
    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFM:I

    if-ltz v0, :cond_8

    if-gt v0, v4, :cond_8

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFJ:I

    if-eqz v0, :cond_7

    const/4 v4, 0x6

    if-eq v0, v4, :cond_5

    if-eq v0, v3, :cond_5

    const/4 v3, 0x3

    if-eq v0, v3, :cond_3

    if-ne v0, v2, :cond_2

    goto :goto_1

    :cond_2
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v1, "bad IHDR: invalid colormodel"

    invoke-direct {v0, v1}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFI:I

    if-eq v0, v6, :cond_4

    goto :goto_2

    :cond_4
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    invoke-direct {v0, v5}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_5
    :goto_1
    iget v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFI:I

    if-eq v0, v1, :cond_7

    if-ne v0, v6, :cond_6

    goto :goto_2

    :cond_6
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    invoke-direct {v0, v5}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_7
    :goto_2
    return-void

    :cond_8
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v1, "bad IHDR: interlace invalid"

    invoke-direct {v0, v1}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_9
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v1, "bad IHDR: col/row/compmethod/filmethod invalid"

    invoke-direct {v0, v1}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method private cS(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEo:I

    return-void
.end method

.method private cT(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEn:I

    return-void
.end method

.method private cU(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFI:I

    return-void
.end method

.method private cV(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFJ:I

    return-void
.end method

.method private cW(I)V
    .locals 0

    const/4 p1, 0x0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFK:I

    return-void
.end method

.method private cX(I)V
    .locals 0

    const/4 p1, 0x0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFL:I

    return-void
.end method

.method private cY(I)V
    .locals 0

    const/4 p1, 0x0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFM:I

    return-void
.end method


# virtual methods
.method public final Hf()Z
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->He()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final Hh()Lcom/kwad/sdk/pngencrypt/k;
    .locals 11

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hi()V

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hd()I

    move-result v0

    const/4 v1, 0x4

    and-int/2addr v0, v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-eqz v0, :cond_0

    move v8, v3

    goto :goto_0

    :cond_0
    move v8, v2

    :goto_0
    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hd()I

    move-result v0

    and-int/2addr v0, v3

    if-eqz v0, :cond_1

    move v10, v3

    goto :goto_1

    :cond_1
    move v10, v2

    :goto_1
    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hd()I

    move-result v0

    if-eqz v0, :cond_3

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hd()I

    move-result v0

    if-ne v0, v1, :cond_2

    goto :goto_2

    :cond_2
    move v9, v2

    goto :goto_3

    :cond_3
    :goto_2
    move v9, v3

    :goto_3
    new-instance v0, Lcom/kwad/sdk/pngencrypt/k;

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->GJ()I

    move-result v5

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->GI()I

    move-result v6

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/chunk/i;->Hc()I

    move-result v7

    move-object v4, v0

    invoke-direct/range {v4 .. v10}, Lcom/kwad/sdk/pngencrypt/k;-><init>(IIIZZZ)V

    return-object v0
.end method

.method public final a(Lcom/kwad/sdk/pngencrypt/chunk/d;)V
    .locals 3

    iget v0, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->len:I

    const/16 v1, 0xd

    if-ne v0, v1, :cond_0

    invoke-virtual {p1}, Lcom/kwad/sdk/pngencrypt/chunk/d;->GY()Ljava/io/ByteArrayInputStream;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->f(Ljava/io/InputStream;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEo:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->f(Ljava/io/InputStream;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aEn:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->e(Ljava/io/InputStream;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFI:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->e(Ljava/io/InputStream;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFJ:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->e(Ljava/io/InputStream;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFK:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->e(Ljava/io/InputStream;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFL:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/n;->e(Ljava/io/InputStream;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/chunk/i;->aFM:I

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Bad IDHR len "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/chunk/d;->len:I

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

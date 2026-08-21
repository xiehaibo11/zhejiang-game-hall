.class public final Lcom/kwad/sdk/pngencrypt/e;
.super Ljava/lang/Object;


# instance fields
.field final aEl:Lcom/kwad/sdk/pngencrypt/k;

.field private aEm:I

.field private aEn:I

.field private aEo:I

.field aEp:I

.field aEq:I

.field aEr:I

.field aEs:I

.field aEt:I

.field aEu:I

.field private aEv:I

.field private aEw:I

.field private aEx:I

.field aEy:I

.field private aEz:Z


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/pngencrypt/k;)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEz:Z

    iput-object p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEm:I

    const/4 p1, -0x1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEv:I

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEw:I

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEx:I

    iput-boolean v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEz:Z

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEy:I

    const/4 p1, 0x1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/pngencrypt/e;->cJ(I)V

    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/e;->cI(I)V

    return-void
.end method

.method private GK()I
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/pngencrypt/e;->GJ()I

    move-result v0

    return v0
.end method

.method private cI(I)V
    .locals 1

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEv:I

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEp:I

    mul-int/2addr p1, v0

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEr:I

    add-int/2addr p1, v0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEw:I

    if-ltz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEn:I

    if-ge p1, v0, :cond_0

    return-void

    :cond_0
    new-instance p1, Lcom/kwad/sdk/pngencrypt/PngjException;

    const-string v0, "bad row - this should not happen"

    invoke-direct {p1, v0}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private cJ(I)V
    .locals 4

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEm:I

    if-ne v0, p1, :cond_0

    return-void

    :cond_0
    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEm:I

    invoke-static {p1}, Lcom/kwad/sdk/pngencrypt/e;->cK(I)[B

    move-result-object p1

    const/4 v0, 0x0

    aget-byte v1, p1, v0

    iput v1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEq:I

    const/4 v1, 0x1

    aget-byte v2, p1, v1

    iput v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEp:I

    const/4 v2, 0x2

    aget-byte v2, p1, v2

    iput v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEs:I

    const/4 v2, 0x3

    aget-byte p1, p1, v2

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEr:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEn:I

    iget v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEr:I

    if-le p1, v2, :cond_1

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEn:I

    iget v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEp:I

    add-int/2addr p1, v2

    sub-int/2addr p1, v1

    iget v3, p0, Lcom/kwad/sdk/pngencrypt/e;->aEr:I

    sub-int/2addr p1, v3

    div-int/2addr p1, v2

    goto :goto_0

    :cond_1
    move p1, v0

    :goto_0
    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEn:I

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEo:I

    iget v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEs:I

    if-le p1, v2, :cond_2

    iget-object p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget p1, p1, Lcom/kwad/sdk/pngencrypt/k;->aEo:I

    iget v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEq:I

    add-int/2addr p1, v2

    sub-int/2addr p1, v1

    iget v1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEs:I

    sub-int/2addr p1, v1

    div-int/2addr p1, v2

    goto :goto_1

    :cond_2
    move p1, v0

    :goto_1
    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEo:I

    if-nez p1, :cond_3

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEn:I

    :cond_3
    iget p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEq:I

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEH:I

    mul-int/2addr p1, v0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEu:I

    iget p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEs:I

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEH:I

    mul-int/2addr p1, v0

    iput p1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEt:I

    return-void
.end method

.method private static cK(I)[B
    .locals 3

    const/4 v0, 0x4

    packed-switch p0, :pswitch_data_0

    new-instance v0, Lcom/kwad/sdk/pngencrypt/PngjException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "bad interlace pass"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Lcom/kwad/sdk/pngencrypt/PngjException;-><init>(Ljava/lang/String;)V

    throw v0

    :pswitch_0
    new-array p0, v0, [B

    fill-array-data p0, :array_0

    return-object p0

    :pswitch_1
    new-array p0, v0, [B

    fill-array-data p0, :array_1

    return-object p0

    :pswitch_2
    new-array p0, v0, [B

    fill-array-data p0, :array_2

    return-object p0

    :pswitch_3
    new-array p0, v0, [B

    fill-array-data p0, :array_3

    return-object p0

    :pswitch_4
    new-array p0, v0, [B

    fill-array-data p0, :array_4

    return-object p0

    :pswitch_5
    new-array p0, v0, [B

    fill-array-data p0, :array_5

    return-object p0

    :pswitch_6
    new-array p0, v0, [B

    fill-array-data p0, :array_6

    return-object p0

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch

    :array_0
    .array-data 1
        0x1t
        0x2t
        0x0t
        0x1t
    .end array-data

    :array_1
    .array-data 1
        0x2t
        0x2t
        0x1t
        0x0t
    .end array-data

    :array_2
    .array-data 1
        0x2t
        0x4t
        0x0t
        0x2t
    .end array-data

    :array_3
    .array-data 1
        0x4t
        0x4t
        0x2t
        0x0t
    .end array-data

    :array_4
    .array-data 1
        0x4t
        0x8t
        0x0t
        0x4t
    .end array-data

    :array_5
    .array-data 1
        0x8t
        0x8t
        0x4t
        0x0t
    .end array-data

    :array_6
    .array-data 1
        0x8t
        0x8t
        0x0t
        0x0t
    .end array-data
.end method


# virtual methods
.method final GE()Z
    .locals 4

    :goto_0
    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEx:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEx:I

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEn:I

    if-eqz v0, :cond_1

    iget v2, p0, Lcom/kwad/sdk/pngencrypt/e;->aEv:I

    add-int/lit8 v0, v0, -0x1

    if-lt v2, v0, :cond_0

    goto :goto_1

    :cond_0
    add-int/2addr v2, v1

    invoke-direct {p0, v2}, Lcom/kwad/sdk/pngencrypt/e;->cI(I)V

    goto :goto_2

    :cond_1
    :goto_1
    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEm:I

    const/4 v2, 0x7

    const/4 v3, 0x0

    if-ne v0, v2, :cond_2

    iput-boolean v1, p0, Lcom/kwad/sdk/pngencrypt/e;->aEz:Z

    return v3

    :cond_2
    add-int/lit8 v0, v0, 0x1

    invoke-direct {p0, v0}, Lcom/kwad/sdk/pngencrypt/e;->cJ(I)V

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEn:I

    if-nez v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEx:I

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEx:I

    goto :goto_0

    :cond_3
    invoke-direct {p0, v3}, Lcom/kwad/sdk/pngencrypt/e;->cI(I)V

    :goto_2
    return v1
.end method

.method final GF()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEv:I

    return v0
.end method

.method final GG()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEw:I

    return v0
.end method

.method final GH()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEm:I

    return v0
.end method

.method final GI()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEn:I

    return v0
.end method

.method final GJ()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEo:I

    return v0
.end method

.method public final GL()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/pngencrypt/e;->aEl:Lcom/kwad/sdk/pngencrypt/k;

    iget v0, v0, Lcom/kwad/sdk/pngencrypt/k;->aEM:I

    invoke-direct {p0}, Lcom/kwad/sdk/pngencrypt/e;->GK()I

    move-result v1

    mul-int/2addr v0, v1

    add-int/lit8 v0, v0, 0x7

    div-int/lit8 v0, v0, 0x8

    return v0
.end method

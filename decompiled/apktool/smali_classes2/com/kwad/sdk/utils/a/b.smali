.class public final Lcom/kwad/sdk/utils/a/b;
.super Ljava/lang/Object;


# static fields
.field public static final UTF_8:Ljava/nio/charset/Charset;


# instance fields
.field private aKF:[C

.field public aKG:[B

.field public position:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "UTF-8"

    invoke-static {v0}, Ljava/nio/charset/Charset;->forName(Ljava/lang/String;)Ljava/nio/charset/Charset;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/utils/a/b;->UTF_8:Ljava/nio/charset/Charset;

    return-void
.end method

.method public constructor <init>(I)V
    .locals 1

    new-array p1, p1, [B

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/utils/a/b;-><init>([BI)V

    return-void
.end method

.method public constructor <init>([B)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/utils/a/b;-><init>([BI)V

    return-void
.end method

.method public constructor <init>([BI)V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKF:[C

    iput-object p1, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iput p2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-void
.end method

.method public static dh(I)I
    .locals 1

    shr-int/lit8 v0, p0, 0x7

    if-nez v0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    shr-int/lit8 v0, p0, 0xe

    if-nez v0, :cond_1

    const/4 p0, 0x2

    return p0

    :cond_1
    shr-int/lit8 v0, p0, 0x15

    if-nez v0, :cond_2

    const/4 p0, 0x3

    return p0

    :cond_2
    shr-int/lit8 p0, p0, 0x1c

    if-nez p0, :cond_3

    const/4 p0, 0x4

    return p0

    :cond_3
    const/4 p0, 0x5

    return p0
.end method

.method private dj(I)[C
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKF:[C

    const/16 v1, 0x800

    if-nez v0, :cond_1

    const/16 v0, 0x100

    if-gt p1, v0, :cond_0

    new-array p1, v0, [C

    iput-object p1, p0, Lcom/kwad/sdk/utils/a/b;->aKF:[C

    goto :goto_0

    :cond_0
    new-array p1, v1, [C

    iput-object p1, p0, Lcom/kwad/sdk/utils/a/b;->aKF:[C

    goto :goto_0

    :cond_1
    array-length v0, v0

    if-ge v0, p1, :cond_2

    new-array p1, v1, [C

    iput-object p1, p0, Lcom/kwad/sdk/utils/a/b;->aKF:[C

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/sdk/utils/a/b;->aKF:[C

    return-object p1
.end method

.method private dk(I)Ljava/lang/String;
    .locals 9

    const/16 v0, 0x800

    if-le p1, v0, :cond_0

    new-instance v0, Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    sget-object v3, Lcom/kwad/sdk/utils/a/b;->UTF_8:Ljava/nio/charset/Charset;

    invoke-direct {v0, v1, v2, p1, v3}, Ljava/lang/String;-><init>([BIILjava/nio/charset/Charset;)V

    return-object v0

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/a/b;->dj(I)[C

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/2addr p1, v2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v2, p1, :cond_4

    add-int/lit8 v5, v2, 0x1

    aget-byte v2, v1, v2

    if-lez v2, :cond_1

    add-int/lit8 v6, v4, 0x1

    xor-int/lit8 v2, v2, 0x1

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v5

    move v4, v6

    goto :goto_0

    :cond_1
    const/16 v6, -0x20

    if-ge v2, v6, :cond_2

    add-int/lit8 v6, v5, 0x1

    aget-byte v5, v1, v5

    add-int/lit8 v7, v4, 0x1

    and-int/lit8 v2, v2, 0x1f

    shl-int/lit8 v2, v2, 0x6

    and-int/lit8 v5, v5, 0x3f

    or-int/2addr v2, v5

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v6

    move v4, v7

    goto :goto_0

    :cond_2
    const/16 v6, -0x10

    if-ge v2, v6, :cond_3

    add-int/lit8 v6, v5, 0x1

    aget-byte v5, v1, v5

    add-int/lit8 v7, v6, 0x1

    aget-byte v6, v1, v6

    add-int/lit8 v8, v4, 0x1

    and-int/lit8 v2, v2, 0xf

    shl-int/lit8 v2, v2, 0xc

    and-int/lit8 v5, v5, 0x3f

    shl-int/lit8 v5, v5, 0x6

    or-int/2addr v2, v5

    and-int/lit8 v5, v6, 0x3f

    or-int/2addr v2, v5

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v7

    move v4, v8

    goto :goto_0

    :cond_3
    add-int/lit8 v6, v5, 0x1

    aget-byte v5, v1, v5

    add-int/lit8 v7, v6, 0x1

    aget-byte v6, v1, v6

    add-int/lit8 v8, v7, 0x1

    aget-byte v7, v1, v7

    and-int/lit8 v2, v2, 0x7

    shl-int/lit8 v2, v2, 0x12

    and-int/lit8 v5, v5, 0x3f

    shl-int/lit8 v5, v5, 0xc

    or-int/2addr v2, v5

    and-int/lit8 v5, v6, 0x3f

    shl-int/lit8 v5, v5, 0x6

    or-int/2addr v2, v5

    and-int/lit8 v5, v7, 0x3f

    or-int/2addr v2, v5

    add-int/lit8 v5, v4, 0x1

    const v6, 0xd7c0

    ushr-int/lit8 v7, v2, 0xa

    add-int/2addr v7, v6

    int-to-char v6, v7

    aput-char v6, v0, v4

    add-int/lit8 v4, v5, 0x1

    const v6, 0xdc00

    and-int/lit16 v2, v2, 0x3ff

    add-int/2addr v2, v6

    int-to-char v2, v2

    aput-char v2, v0, v5

    move v2, v8

    goto :goto_0

    :cond_4
    if-gt v2, p1, :cond_5

    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v0, v3, v4}, Ljava/lang/String;-><init>([CII)V

    return-object p1

    :cond_5
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Invalid String"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method private dl(I)Ljava/lang/String;
    .locals 9

    const/16 v0, 0x800

    if-le p1, v0, :cond_0

    new-instance v0, Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    sget-object v3, Lcom/kwad/sdk/utils/a/b;->UTF_8:Ljava/nio/charset/Charset;

    invoke-direct {v0, v1, v2, p1, v3}, Ljava/lang/String;-><init>([BIILjava/nio/charset/Charset;)V

    return-object v0

    :cond_0
    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/a/b;->dj(I)[C

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/2addr p1, v2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v2, p1, :cond_4

    add-int/lit8 v5, v2, 0x1

    aget-byte v2, v1, v2

    if-lez v2, :cond_1

    add-int/lit8 v6, v4, 0x1

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v5

    move v4, v6

    goto :goto_0

    :cond_1
    const/16 v6, -0x20

    if-ge v2, v6, :cond_2

    add-int/lit8 v6, v5, 0x1

    aget-byte v5, v1, v5

    add-int/lit8 v7, v4, 0x1

    and-int/lit8 v2, v2, 0x1f

    shl-int/lit8 v2, v2, 0x6

    and-int/lit8 v5, v5, 0x3f

    or-int/2addr v2, v5

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v6

    move v4, v7

    goto :goto_0

    :cond_2
    const/16 v6, -0x10

    if-ge v2, v6, :cond_3

    add-int/lit8 v6, v5, 0x1

    aget-byte v5, v1, v5

    add-int/lit8 v7, v6, 0x1

    aget-byte v6, v1, v6

    add-int/lit8 v8, v4, 0x1

    and-int/lit8 v2, v2, 0xf

    shl-int/lit8 v2, v2, 0xc

    and-int/lit8 v5, v5, 0x3f

    shl-int/lit8 v5, v5, 0x6

    or-int/2addr v2, v5

    and-int/lit8 v5, v6, 0x3f

    or-int/2addr v2, v5

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v7

    move v4, v8

    goto :goto_0

    :cond_3
    add-int/lit8 v6, v5, 0x1

    aget-byte v5, v1, v5

    add-int/lit8 v7, v6, 0x1

    aget-byte v6, v1, v6

    add-int/lit8 v8, v7, 0x1

    aget-byte v7, v1, v7

    and-int/lit8 v2, v2, 0x7

    shl-int/lit8 v2, v2, 0x12

    and-int/lit8 v5, v5, 0x3f

    shl-int/lit8 v5, v5, 0xc

    or-int/2addr v2, v5

    and-int/lit8 v5, v6, 0x3f

    shl-int/lit8 v5, v5, 0x6

    or-int/2addr v2, v5

    and-int/lit8 v5, v7, 0x3f

    or-int/2addr v2, v5

    add-int/lit8 v5, v4, 0x1

    const v6, 0xd7c0

    ushr-int/lit8 v7, v2, 0xa

    add-int/2addr v7, v6

    int-to-char v6, v7

    aput-char v6, v0, v4

    add-int/lit8 v4, v5, 0x1

    const v6, 0xdc00

    and-int/lit16 v2, v2, 0x3ff

    add-int/2addr v2, v6

    int-to-char v2, v2

    aput-char v2, v0, v5

    move v2, v8

    goto :goto_0

    :cond_4
    if-gt v2, p1, :cond_5

    new-instance p1, Ljava/lang/String;

    invoke-direct {p1, v0, v3, v4}, Ljava/lang/String;-><init>([CII)V

    return-object p1

    :cond_5
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v0, "Invalid String"

    invoke-direct {p1, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public static fS(Ljava/lang/String;)I
    .locals 5

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/4 v1, 0x0

    move v2, v1

    :goto_0
    if-ge v1, v0, :cond_4

    add-int/lit8 v3, v1, 0x1

    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v1

    const/16 v4, 0x80

    if-ge v1, v4, :cond_0

    add-int/lit8 v2, v2, 0x1

    :goto_1
    move v1, v3

    goto :goto_0

    :cond_0
    const/16 v4, 0x800

    if-ge v1, v4, :cond_1

    add-int/lit8 v2, v2, 0x2

    goto :goto_1

    :cond_1
    const v4, 0xd800

    if-lt v1, v4, :cond_3

    const v4, 0xdfff

    if-le v1, v4, :cond_2

    goto :goto_2

    :cond_2
    add-int/lit8 v1, v3, 0x1

    add-int/lit8 v2, v2, 0x4

    goto :goto_0

    :cond_3
    :goto_2
    add-int/lit8 v2, v2, 0x3

    goto :goto_1

    :cond_4
    return v2
.end method

.method private fT(Ljava/lang/String;)V
    .locals 8

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_4

    add-int/lit8 v4, v3, 0x1

    invoke-virtual {p1, v3}, Ljava/lang/String;->charAt(I)C

    move-result v3

    const/16 v5, 0x80

    if-ge v3, v5, :cond_0

    add-int/lit8 v5, v1, 0x1

    xor-int/lit8 v3, v3, 0x1

    int-to-byte v3, v3

    aput-byte v3, v0, v1

    move v3, v4

    move v1, v5

    goto :goto_0

    :cond_0
    const/16 v6, 0x800

    if-ge v3, v6, :cond_1

    add-int/lit8 v6, v1, 0x1

    ushr-int/lit8 v7, v3, 0x6

    or-int/lit16 v7, v7, 0xc0

    int-to-byte v7, v7

    aput-byte v7, v0, v1

    add-int/lit8 v1, v6, 0x1

    and-int/lit8 v3, v3, 0x3f

    or-int/2addr v3, v5

    int-to-byte v3, v3

    aput-byte v3, v0, v6

    move v3, v4

    goto :goto_0

    :cond_1
    const v6, 0xd800

    if-lt v3, v6, :cond_3

    const v6, 0xdfff

    if-le v3, v6, :cond_2

    goto :goto_1

    :cond_2
    add-int/lit8 v6, v4, 0x1

    invoke-virtual {p1, v4}, Ljava/lang/String;->charAt(I)C

    move-result v4

    shl-int/lit8 v3, v3, 0xa

    add-int/2addr v3, v4

    const v4, -0x35fdc00

    add-int/2addr v3, v4

    add-int/lit8 v4, v1, 0x1

    ushr-int/lit8 v7, v3, 0x12

    or-int/lit16 v7, v7, 0xf0

    int-to-byte v7, v7

    aput-byte v7, v0, v1

    add-int/lit8 v1, v4, 0x1

    ushr-int/lit8 v7, v3, 0xc

    and-int/lit8 v7, v7, 0x3f

    or-int/2addr v7, v5

    int-to-byte v7, v7

    aput-byte v7, v0, v4

    add-int/lit8 v4, v1, 0x1

    ushr-int/lit8 v7, v3, 0x6

    and-int/lit8 v7, v7, 0x3f

    or-int/2addr v7, v5

    int-to-byte v7, v7

    aput-byte v7, v0, v1

    add-int/lit8 v1, v4, 0x1

    and-int/lit8 v3, v3, 0x3f

    or-int/2addr v3, v5

    int-to-byte v3, v3

    aput-byte v3, v0, v4

    move v3, v6

    goto :goto_0

    :cond_3
    :goto_1
    add-int/lit8 v6, v1, 0x1

    ushr-int/lit8 v7, v3, 0xc

    or-int/lit16 v7, v7, 0xe0

    int-to-byte v7, v7

    aput-byte v7, v0, v1

    add-int/lit8 v1, v6, 0x1

    ushr-int/lit8 v7, v3, 0x6

    and-int/lit8 v7, v7, 0x3f

    or-int/2addr v7, v5

    int-to-byte v7, v7

    aput-byte v7, v0, v6

    add-int/lit8 v6, v1, 0x1

    and-int/lit8 v3, v3, 0x3f

    or-int/2addr v3, v5

    int-to-byte v3, v3

    aput-byte v3, v0, v1

    move v3, v4

    move v1, v6

    goto/16 :goto_0

    :cond_4
    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-void
.end method

.method public static fU(Ljava/lang/String;)[B
    .locals 8

    invoke-static {p0}, Lcom/kwad/sdk/utils/a/b;->fS(Ljava/lang/String;)I

    move-result v0

    new-array v0, v0, [B

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v2, v1, :cond_4

    add-int/lit8 v4, v2, 0x1

    invoke-virtual {p0, v2}, Ljava/lang/String;->charAt(I)C

    move-result v2

    const/16 v5, 0x80

    if-ge v2, v5, :cond_0

    add-int/lit8 v5, v3, 0x1

    xor-int/lit8 v2, v2, 0x1

    int-to-byte v2, v2

    aput-byte v2, v0, v3

    move v2, v4

    move v3, v5

    goto :goto_0

    :cond_0
    const/16 v6, 0x800

    if-ge v2, v6, :cond_1

    add-int/lit8 v6, v3, 0x1

    ushr-int/lit8 v7, v2, 0x6

    or-int/lit16 v7, v7, 0xc0

    int-to-byte v7, v7

    aput-byte v7, v0, v3

    add-int/lit8 v3, v6, 0x1

    and-int/lit8 v2, v2, 0x3f

    or-int/2addr v2, v5

    int-to-byte v2, v2

    aput-byte v2, v0, v6

    move v2, v4

    goto :goto_0

    :cond_1
    const v6, 0xd800

    if-lt v2, v6, :cond_3

    const v6, 0xdfff

    if-le v2, v6, :cond_2

    goto :goto_1

    :cond_2
    add-int/lit8 v6, v4, 0x1

    invoke-virtual {p0, v4}, Ljava/lang/String;->charAt(I)C

    move-result v4

    shl-int/lit8 v2, v2, 0xa

    add-int/2addr v2, v4

    const v4, -0x35fdc00

    add-int/2addr v2, v4

    add-int/lit8 v4, v3, 0x1

    ushr-int/lit8 v7, v2, 0x12

    or-int/lit16 v7, v7, 0xf0

    int-to-byte v7, v7

    aput-byte v7, v0, v3

    add-int/lit8 v3, v4, 0x1

    ushr-int/lit8 v7, v2, 0xc

    and-int/lit8 v7, v7, 0x3f

    or-int/2addr v7, v5

    int-to-byte v7, v7

    aput-byte v7, v0, v4

    add-int/lit8 v4, v3, 0x1

    ushr-int/lit8 v7, v2, 0x6

    and-int/lit8 v7, v7, 0x3f

    or-int/2addr v7, v5

    int-to-byte v7, v7

    aput-byte v7, v0, v3

    add-int/lit8 v3, v4, 0x1

    and-int/lit8 v2, v2, 0x3f

    or-int/2addr v2, v5

    int-to-byte v2, v2

    aput-byte v2, v0, v4

    move v2, v6

    goto :goto_0

    :cond_3
    :goto_1
    add-int/lit8 v6, v3, 0x1

    ushr-int/lit8 v7, v2, 0xc

    or-int/lit16 v7, v7, 0xe0

    int-to-byte v7, v7

    aput-byte v7, v0, v3

    add-int/lit8 v3, v6, 0x1

    ushr-int/lit8 v7, v2, 0x6

    and-int/lit8 v7, v7, 0x3f

    or-int/2addr v7, v5

    int-to-byte v7, v7

    aput-byte v7, v0, v6

    add-int/lit8 v6, v3, 0x1

    and-int/lit8 v2, v2, 0x3f

    or-int/2addr v2, v5

    int-to-byte v2, v2

    aput-byte v2, v0, v3

    move v2, v4

    move v3, v6

    goto/16 :goto_0

    :cond_4
    return-object v0
.end method

.method private getLong(I)J
    .locals 8

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    add-int/lit8 v1, p1, 0x1

    aget-byte p1, v0, p1

    int-to-long v2, p1

    const-wide/16 v4, 0xff

    and-long/2addr v2, v4

    add-int/lit8 p1, v1, 0x1

    aget-byte v1, v0, v1

    int-to-long v6, v1

    and-long/2addr v6, v4

    const/16 v1, 0x8

    shl-long/2addr v6, v1

    or-long v1, v2, v6

    add-int/lit8 v3, p1, 0x1

    aget-byte p1, v0, p1

    int-to-long v6, p1

    and-long/2addr v6, v4

    const/16 p1, 0x10

    shl-long/2addr v6, p1

    or-long/2addr v1, v6

    add-int/lit8 p1, v3, 0x1

    aget-byte v3, v0, v3

    int-to-long v6, v3

    and-long/2addr v6, v4

    const/16 v3, 0x18

    shl-long/2addr v6, v3

    or-long/2addr v1, v6

    add-int/lit8 v3, p1, 0x1

    aget-byte p1, v0, p1

    int-to-long v6, p1

    and-long/2addr v6, v4

    const/16 p1, 0x20

    shl-long/2addr v6, p1

    or-long/2addr v1, v6

    add-int/lit8 p1, v3, 0x1

    aget-byte v3, v0, v3

    int-to-long v6, v3

    and-long/2addr v6, v4

    const/16 v3, 0x28

    shl-long/2addr v6, v3

    or-long/2addr v1, v6

    add-int/lit8 v3, p1, 0x1

    aget-byte p1, v0, p1

    int-to-long v6, p1

    and-long/2addr v4, v6

    const/16 p1, 0x30

    shl-long/2addr v4, p1

    or-long/2addr v1, v4

    aget-byte p1, v0, v3

    int-to-long v3, p1

    const/16 p1, 0x38

    shl-long/2addr v3, p1

    or-long v0, v1, v3

    return-wide v0
.end method

.method static j([BI)Ljava/lang/String;
    .locals 8

    array-length v0, p0

    new-array v0, v0, [C

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    if-ge v2, p1, :cond_3

    add-int/lit8 v4, v2, 0x1

    aget-byte v2, p0, v2

    if-lez v2, :cond_0

    add-int/lit8 v5, v3, 0x1

    xor-int/lit8 v2, v2, 0x1

    int-to-char v2, v2

    aput-char v2, v0, v3

    move v2, v4

    move v3, v5

    goto :goto_0

    :cond_0
    const/16 v5, -0x20

    if-ge v2, v5, :cond_1

    add-int/lit8 v5, v4, 0x1

    aget-byte v4, p0, v4

    add-int/lit8 v6, v3, 0x1

    and-int/lit8 v2, v2, 0x1f

    shl-int/lit8 v2, v2, 0x6

    and-int/lit8 v4, v4, 0x3f

    or-int/2addr v2, v4

    int-to-char v2, v2

    aput-char v2, v0, v3

    move v2, v5

    move v3, v6

    goto :goto_0

    :cond_1
    const/16 v5, -0x10

    if-ge v2, v5, :cond_2

    add-int/lit8 v5, v4, 0x1

    aget-byte v4, p0, v4

    add-int/lit8 v6, v5, 0x1

    aget-byte v5, p0, v5

    add-int/lit8 v7, v3, 0x1

    and-int/lit8 v2, v2, 0xf

    shl-int/lit8 v2, v2, 0xc

    and-int/lit8 v4, v4, 0x3f

    shl-int/lit8 v4, v4, 0x6

    or-int/2addr v2, v4

    and-int/lit8 v4, v5, 0x3f

    or-int/2addr v2, v4

    int-to-char v2, v2

    aput-char v2, v0, v3

    move v2, v6

    move v3, v7

    goto :goto_0

    :cond_2
    add-int/lit8 v5, v4, 0x1

    aget-byte v4, p0, v4

    add-int/lit8 v6, v5, 0x1

    aget-byte v5, p0, v5

    add-int/lit8 v7, v6, 0x1

    aget-byte v6, p0, v6

    and-int/lit8 v2, v2, 0x7

    shl-int/lit8 v2, v2, 0x12

    and-int/lit8 v4, v4, 0x3f

    shl-int/lit8 v4, v4, 0xc

    or-int/2addr v2, v4

    and-int/lit8 v4, v5, 0x3f

    shl-int/lit8 v4, v4, 0x6

    or-int/2addr v2, v4

    and-int/lit8 v4, v6, 0x3f

    or-int/2addr v2, v4

    add-int/lit8 v4, v3, 0x1

    const v5, 0xd7c0

    ushr-int/lit8 v6, v2, 0xa

    add-int/2addr v6, v5

    int-to-char v5, v6

    aput-char v5, v0, v3

    add-int/lit8 v3, v4, 0x1

    const v5, 0xdc00

    and-int/lit16 v2, v2, 0x3ff

    add-int/2addr v2, v5

    int-to-char v2, v2

    aput-char v2, v0, v4

    move v2, v7

    goto :goto_0

    :cond_3
    if-gt v2, p1, :cond_4

    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v0, v1, v3}, Ljava/lang/String;-><init>([CII)V

    return-object p0

    :cond_4
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string p1, "Invalid String"

    invoke-direct {p0, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private z(II)I
    .locals 3

    :goto_0
    and-int/lit8 v0, p2, -0x80

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    add-int/lit8 v1, p1, 0x1

    and-int/lit8 v2, p2, 0x7f

    or-int/lit16 v2, v2, 0x80

    int-to-byte v2, v2

    aput-byte v2, v0, p1

    ushr-int/lit8 p2, p2, 0x7

    move p1, v1

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    add-int/lit8 v1, p1, 0x1

    int-to-byte p2, p2

    aput-byte p2, v0, p1

    return v1
.end method


# virtual methods
.method final A(II)J
    .locals 9

    const-wide/16 v0, 0x0

    if-gtz p2, :cond_0

    return-wide v0

    :cond_0
    shr-int/lit8 v2, p2, 0x3

    and-int/lit8 p2, p2, 0x7

    const/4 v3, 0x0

    move v5, p1

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_1

    invoke-direct {p0, v5}, Lcom/kwad/sdk/utils/a/b;->getLong(I)J

    move-result-wide v6

    xor-long/2addr v0, v6

    add-int/lit8 v5, v5, 0x8

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_1
    shl-int/lit8 p2, p2, 0x3

    :goto_1
    if-ge v3, p2, :cond_2

    iget-object v2, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    add-int/lit8 v4, v5, 0x1

    aget-byte v2, v2, v5

    int-to-long v5, v2

    const-wide/16 v7, 0xff

    and-long/2addr v5, v7

    shl-long/2addr v5, v3

    xor-long/2addr v0, v5

    add-int/lit8 v3, v3, 0x8

    move v5, v4

    goto :goto_1

    :cond_2
    and-int/lit8 p1, p1, 0x7

    shl-int/lit8 p1, p1, 0x3

    shl-long v2, v0, p1

    rsub-int/lit8 p1, p1, 0x40

    ushr-long p1, v0, p1

    or-long/2addr p1, v2

    return-wide p1
.end method

.method public final Kg()I
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v1, v0, v1

    shr-int/lit8 v3, v1, 0x7

    if-nez v3, :cond_0

    return v1

    :cond_0
    and-int/lit8 v1, v1, 0x7f

    add-int/lit8 v3, v2, 0x1

    iput v3, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v2, v0, v2

    shl-int/lit8 v2, v2, 0x7

    or-int/2addr v1, v2

    shr-int/lit8 v2, v1, 0xe

    if-nez v2, :cond_1

    return v1

    :cond_1
    and-int/lit16 v1, v1, 0x3fff

    add-int/lit8 v2, v3, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v3, v0, v3

    shl-int/lit8 v3, v3, 0xe

    or-int/2addr v1, v3

    shr-int/lit8 v3, v1, 0x15

    if-nez v3, :cond_2

    return v1

    :cond_2
    const v3, 0x1fffff

    and-int/2addr v1, v3

    add-int/lit8 v3, v2, 0x1

    iput v3, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v2, v0, v2

    shl-int/lit8 v2, v2, 0x15

    or-int/2addr v1, v2

    shr-int/lit8 v2, v1, 0x1c

    if-nez v2, :cond_3

    return v1

    :cond_3
    const v2, 0xfffffff

    and-int/2addr v1, v2

    add-int/lit8 v2, v3, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v0, v0, v3

    shl-int/lit8 v0, v0, 0x1c

    or-int/2addr v0, v1

    return v0
.end method

.method public final a(S)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    int-to-byte v3, p1

    aput-byte v3, v0, v1

    add-int/lit8 v1, v2, 0x1

    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    shr-int/lit8 p1, p1, 0x8

    int-to-byte p1, p1

    aput-byte p1, v0, v2

    return-void
.end method

.method public final av(J)V
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    invoke-virtual {p0, v0, p1, p2}, Lcom/kwad/sdk/utils/a/b;->g(IJ)V

    iget p1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 p1, p1, 0x8

    iput p1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-void
.end method

.method public final df(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    int-to-byte v3, p1

    aput-byte v3, v0, v1

    add-int/lit8 v1, v2, 0x1

    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    shr-int/lit8 v3, p1, 0x8

    int-to-byte v3, v3

    aput-byte v3, v0, v2

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    shr-int/lit8 v3, p1, 0x10

    int-to-byte v3, v3

    aput-byte v3, v0, v1

    add-int/lit8 v1, v2, 0x1

    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    shr-int/lit8 p1, p1, 0x18

    int-to-byte p1, p1

    aput-byte p1, v0, v2

    return-void
.end method

.method public final dg(I)V
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    invoke-direct {p0, v0, p1}, Lcom/kwad/sdk/utils/a/b;->z(II)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-void
.end method

.method public final di(I)Ljava/lang/String;
    .locals 2

    if-gez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    if-nez p1, :cond_1

    const-string p1, ""

    return-object p1

    :cond_1
    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/a/b;->dl(I)Ljava/lang/String;

    move-result-object v0

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/2addr v1, p1

    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-object v0
.end method

.method public final e(B)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aput-byte p1, v0, v1

    return-void
.end method

.method public final fR(Ljava/lang/String;)V
    .locals 1

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/a/b;->fT(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final g(IJ)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    add-int/lit8 v1, p1, 0x1

    long-to-int v2, p2

    int-to-byte v2, v2

    aput-byte v2, v0, p1

    add-int/lit8 p1, v1, 0x1

    const/16 v2, 0x8

    shr-long v2, p2, v2

    long-to-int v2, v2

    int-to-byte v2, v2

    aput-byte v2, v0, v1

    add-int/lit8 v1, p1, 0x1

    const/16 v2, 0x10

    shr-long v2, p2, v2

    long-to-int v2, v2

    int-to-byte v2, v2

    aput-byte v2, v0, p1

    add-int/lit8 p1, v1, 0x1

    const/16 v2, 0x18

    shr-long v2, p2, v2

    long-to-int v2, v2

    int-to-byte v2, v2

    aput-byte v2, v0, v1

    add-int/lit8 v1, p1, 0x1

    const/16 v2, 0x20

    shr-long v2, p2, v2

    long-to-int v2, v2

    int-to-byte v2, v2

    aput-byte v2, v0, p1

    add-int/lit8 p1, v1, 0x1

    const/16 v2, 0x28

    shr-long v2, p2, v2

    long-to-int v2, v2

    int-to-byte v2, v2

    aput-byte v2, v0, v1

    add-int/lit8 v1, p1, 0x1

    const/16 v2, 0x30

    shr-long v2, p2, v2

    long-to-int v2, v2

    int-to-byte v2, v2

    aput-byte v2, v0, p1

    const/16 p1, 0x38

    shr-long p1, p2, p1

    long-to-int p1, p1

    int-to-byte p1, p1

    aput-byte p1, v0, v1

    return-void
.end method

.method public final get()B
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v0, v0, v1

    return v0
.end method

.method public final getBytes(I)[B
    .locals 4

    new-array v0, p1, [B

    iget-object v1, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    const/4 v3, 0x0

    invoke-static {v1, v2, v0, v3, p1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/2addr v1, p1

    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-object v0
.end method

.method public final getDouble()D
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/sdk/utils/a/b;->getLong()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Double;->longBitsToDouble(J)D

    move-result-wide v0

    return-wide v0
.end method

.method public final getFloat()F
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/sdk/utils/a/b;->getInt()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Float;->intBitsToFloat(I)F

    move-result v0

    return v0
.end method

.method public final getInt()I
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v1, v0, v1

    and-int/lit16 v1, v1, 0xff

    add-int/lit8 v3, v2, 0x1

    iput v3, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v2, v0, v2

    and-int/lit16 v2, v2, 0xff

    shl-int/lit8 v2, v2, 0x8

    or-int/2addr v1, v2

    add-int/lit8 v2, v3, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v3, v0, v3

    and-int/lit16 v3, v3, 0xff

    shl-int/lit8 v3, v3, 0x10

    or-int/2addr v1, v3

    add-int/lit8 v3, v2, 0x1

    iput v3, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v0, v0, v2

    shl-int/lit8 v0, v0, 0x18

    or-int/2addr v0, v1

    return v0
.end method

.method public final getLong()J
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    invoke-direct {p0, v0}, Lcom/kwad/sdk/utils/a/b;->getLong(I)J

    move-result-wide v0

    iget v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v2, 0x8

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-wide v0
.end method

.method public final getShort()S
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v1, v0, v1

    and-int/lit16 v1, v1, 0xff

    add-int/lit8 v3, v2, 0x1

    iput v3, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    aget-byte v0, v0, v2

    shl-int/lit8 v0, v0, 0x8

    or-int/2addr v0, v1

    int-to-short v0, v0

    return v0
.end method

.method public final getString(I)Ljava/lang/String;
    .locals 2

    if-gez p1, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    if-nez p1, :cond_1

    const-string p1, ""

    return-object p1

    :cond_1
    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/a/b;->dk(I)Ljava/lang/String;

    move-result-object v0

    iget v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/2addr v1, p1

    iput v1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    return-object v0
.end method

.method public final n([B)V
    .locals 4

    array-length v0, p1

    if-lez v0, :cond_0

    const/4 v1, 0x0

    iget-object v2, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    iget v3, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    invoke-static {p1, v1, v2, v3, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    iget p1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    add-int/2addr p1, v0

    iput p1, p0, Lcom/kwad/sdk/utils/a/b;->position:I

    :cond_0
    return-void
.end method

.method public final y(II)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/utils/a/b;->aKG:[B

    add-int/lit8 v1, p1, 0x1

    int-to-byte v2, p2

    aput-byte v2, v0, p1

    add-int/lit8 p1, v1, 0x1

    shr-int/lit8 v2, p2, 0x8

    int-to-byte v2, v2

    aput-byte v2, v0, v1

    add-int/lit8 v1, p1, 0x1

    shr-int/lit8 v2, p2, 0x10

    int-to-byte v2, v2

    aput-byte v2, v0, p1

    shr-int/lit8 p1, p2, 0x18

    int-to-byte p1, p1

    aput-byte p1, v0, v1

    return-void
.end method

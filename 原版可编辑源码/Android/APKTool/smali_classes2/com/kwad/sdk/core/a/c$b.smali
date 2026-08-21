.class public final Lcom/kwad/sdk/core/a/c$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# static fields
.field static final aom:Lcom/kwad/sdk/core/a/c$b;

.field static final aon:Lcom/kwad/sdk/core/a/c$b;

.field private static final aoo:[C

.field private static final aop:[C


# instance fields
.field private final aok:Z

.field private final aoq:[B

.field private final aor:I

.field private final aos:Z


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/a/c$b;

    const/4 v1, 0x1

    const/4 v2, -0x1

    const/4 v3, 0x0

    const/4 v4, 0x0

    invoke-direct {v0, v4, v3, v2, v1}, Lcom/kwad/sdk/core/a/c$b;-><init>(Z[BIZ)V

    sput-object v0, Lcom/kwad/sdk/core/a/c$b;->aom:Lcom/kwad/sdk/core/a/c$b;

    new-instance v0, Lcom/kwad/sdk/core/a/c$b;

    invoke-direct {v0, v1, v3, v2, v4}, Lcom/kwad/sdk/core/a/c$b;-><init>(Z[BIZ)V

    sput-object v0, Lcom/kwad/sdk/core/a/c$b;->aon:Lcom/kwad/sdk/core/a/c$b;

    const/16 v0, 0x40

    new-array v1, v0, [C

    fill-array-data v1, :array_0

    sput-object v1, Lcom/kwad/sdk/core/a/c$b;->aoo:[C

    new-array v0, v0, [C

    fill-array-data v0, :array_1

    sput-object v0, Lcom/kwad/sdk/core/a/c$b;->aop:[C

    return-void

    nop

    :array_0
    .array-data 2
        0x41s
        0x42s
        0x43s
        0x44s
        0x45s
        0x46s
        0x47s
        0x48s
        0x49s
        0x4as
        0x4bs
        0x4cs
        0x4ds
        0x4es
        0x4fs
        0x50s
        0x51s
        0x52s
        0x53s
        0x54s
        0x55s
        0x56s
        0x57s
        0x58s
        0x59s
        0x5as
        0x61s
        0x62s
        0x63s
        0x64s
        0x65s
        0x66s
        0x67s
        0x68s
        0x69s
        0x6as
        0x6bs
        0x6cs
        0x6ds
        0x6es
        0x6fs
        0x70s
        0x71s
        0x72s
        0x73s
        0x74s
        0x75s
        0x76s
        0x77s
        0x78s
        0x79s
        0x7as
        0x30s
        0x31s
        0x32s
        0x33s
        0x34s
        0x35s
        0x36s
        0x37s
        0x38s
        0x39s
        0x2bs
        0x2fs
    .end array-data

    :array_1
    .array-data 2
        0x41s
        0x42s
        0x43s
        0x44s
        0x45s
        0x46s
        0x47s
        0x48s
        0x49s
        0x4as
        0x4bs
        0x4cs
        0x4ds
        0x4es
        0x4fs
        0x50s
        0x51s
        0x52s
        0x53s
        0x54s
        0x55s
        0x56s
        0x57s
        0x58s
        0x59s
        0x5as
        0x61s
        0x62s
        0x63s
        0x64s
        0x65s
        0x66s
        0x67s
        0x68s
        0x69s
        0x6as
        0x6bs
        0x6cs
        0x6ds
        0x6es
        0x6fs
        0x70s
        0x71s
        0x72s
        0x73s
        0x74s
        0x75s
        0x76s
        0x77s
        0x78s
        0x79s
        0x7as
        0x30s
        0x31s
        0x32s
        0x33s
        0x34s
        0x35s
        0x36s
        0x37s
        0x38s
        0x39s
        0x2ds
        0x5fs
    .end array-data
.end method

.method private constructor <init>(Z[BIZ)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-boolean p1, p0, Lcom/kwad/sdk/core/a/c$b;->aok:Z

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/sdk/core/a/c$b;->aoq:[B

    const/4 p1, -0x1

    iput p1, p0, Lcom/kwad/sdk/core/a/c$b;->aor:I

    iput-boolean p4, p0, Lcom/kwad/sdk/core/a/c$b;->aos:Z

    return-void
.end method

.method static synthetic AO()[C
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/a/c$b;->aoo:[C

    return-object v0
.end method

.method static synthetic AP()[C
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/a/c$b;->aop:[C

    return-object v0
.end method

.method private b([BII[B)I
    .locals 11

    iget-boolean p2, p0, Lcom/kwad/sdk/core/a/c$b;->aok:Z

    if-eqz p2, :cond_0

    sget-object p2, Lcom/kwad/sdk/core/a/c$b;->aop:[C

    goto :goto_0

    :cond_0
    sget-object p2, Lcom/kwad/sdk/core/a/c$b;->aoo:[C

    :goto_0
    add-int/lit8 v0, p3, 0x0

    div-int/lit8 v0, v0, 0x3

    mul-int/lit8 v0, v0, 0x3

    add-int/lit8 v1, v0, 0x0

    iget v2, p0, Lcom/kwad/sdk/core/a/c$b;->aor:I

    if-lez v2, :cond_1

    div-int/lit8 v3, v2, 0x4

    mul-int/lit8 v3, v3, 0x3

    if-le v0, v3, :cond_1

    div-int/lit8 v2, v2, 0x4

    mul-int/lit8 v0, v2, 0x3

    :cond_1
    const/4 v2, 0x0

    move v3, v2

    move v4, v3

    :goto_1
    if-ge v3, v1, :cond_4

    add-int v5, v3, v0

    invoke-static {v5, v1}, Ljava/lang/Math;->min(II)I

    move-result v5

    move v6, v3

    move v7, v4

    :goto_2
    if-ge v6, v5, :cond_2

    add-int/lit8 v8, v6, 0x1

    aget-byte v6, p1, v6

    and-int/lit16 v6, v6, 0xff

    shl-int/lit8 v6, v6, 0x10

    add-int/lit8 v9, v8, 0x1

    aget-byte v8, p1, v8

    and-int/lit16 v8, v8, 0xff

    shl-int/lit8 v8, v8, 0x8

    or-int/2addr v6, v8

    add-int/lit8 v8, v9, 0x1

    aget-byte v9, p1, v9

    and-int/lit16 v9, v9, 0xff

    or-int/2addr v6, v9

    add-int/lit8 v9, v7, 0x1

    ushr-int/lit8 v10, v6, 0x12

    and-int/lit8 v10, v10, 0x3f

    aget-char v10, p2, v10

    int-to-byte v10, v10

    aput-byte v10, p4, v7

    add-int/lit8 v7, v9, 0x1

    ushr-int/lit8 v10, v6, 0xc

    and-int/lit8 v10, v10, 0x3f

    aget-char v10, p2, v10

    int-to-byte v10, v10

    aput-byte v10, p4, v9

    add-int/lit8 v9, v7, 0x1

    ushr-int/lit8 v10, v6, 0x6

    and-int/lit8 v10, v10, 0x3f

    aget-char v10, p2, v10

    int-to-byte v10, v10

    aput-byte v10, p4, v7

    add-int/lit8 v7, v9, 0x1

    and-int/lit8 v6, v6, 0x3f

    aget-char v6, p2, v6

    int-to-byte v6, v6

    aput-byte v6, p4, v9

    move v6, v8

    goto :goto_2

    :cond_2
    sub-int v3, v5, v3

    div-int/lit8 v3, v3, 0x3

    mul-int/lit8 v3, v3, 0x4

    add-int/2addr v4, v3

    iget v6, p0, Lcom/kwad/sdk/core/a/c$b;->aor:I

    if-ne v3, v6, :cond_3

    if-ge v5, p3, :cond_3

    iget-object v3, p0, Lcom/kwad/sdk/core/a/c$b;->aoq:[B

    array-length v6, v3

    move v7, v2

    :goto_3
    if-ge v7, v6, :cond_3

    aget-byte v8, v3, v7

    add-int/lit8 v9, v4, 0x1

    aput-byte v8, p4, v4

    add-int/lit8 v7, v7, 0x1

    move v4, v9

    goto :goto_3

    :cond_3
    move v3, v5

    goto :goto_1

    :cond_4
    if-ge v3, p3, :cond_6

    add-int/lit8 v0, v3, 0x1

    aget-byte v1, p1, v3

    and-int/lit16 v1, v1, 0xff

    add-int/lit8 v2, v4, 0x1

    shr-int/lit8 v3, v1, 0x2

    aget-char v3, p2, v3

    int-to-byte v3, v3

    aput-byte v3, p4, v4

    const/16 v3, 0x3d

    if-ne v0, p3, :cond_5

    add-int/lit8 v4, v2, 0x1

    shl-int/lit8 p1, v1, 0x4

    and-int/lit8 p1, p1, 0x3f

    aget-char p1, p2, p1

    int-to-byte p1, p1

    aput-byte p1, p4, v2

    iget-boolean p1, p0, Lcom/kwad/sdk/core/a/c$b;->aos:Z

    if-eqz p1, :cond_6

    add-int/lit8 p1, v4, 0x1

    aput-byte v3, p4, v4

    add-int/lit8 v4, p1, 0x1

    aput-byte v3, p4, p1

    goto :goto_4

    :cond_5
    aget-byte p1, p1, v0

    and-int/lit16 p1, p1, 0xff

    add-int/lit8 p3, v2, 0x1

    shl-int/lit8 v0, v1, 0x4

    and-int/lit8 v0, v0, 0x3f

    shr-int/lit8 v1, p1, 0x4

    or-int/2addr v0, v1

    aget-char v0, p2, v0

    int-to-byte v0, v0

    aput-byte v0, p4, v2

    add-int/lit8 v4, p3, 0x1

    shl-int/lit8 p1, p1, 0x2

    and-int/lit8 p1, p1, 0x3f

    aget-char p1, p2, p1

    int-to-byte p1, p1

    aput-byte p1, p4, p3

    iget-boolean p1, p0, Lcom/kwad/sdk/core/a/c$b;->aos:Z

    if-eqz p1, :cond_6

    add-int/lit8 p1, v4, 0x1

    aput-byte v3, p4, v4

    move v4, p1

    :cond_6
    :goto_4
    return v4
.end method

.method private final bX(I)I
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/sdk/core/a/c$b;->aos:Z

    if-eqz v0, :cond_0

    add-int/lit8 p1, p1, 0x2

    div-int/lit8 p1, p1, 0x3

    mul-int/lit8 p1, p1, 0x4

    goto :goto_1

    :cond_0
    rem-int/lit8 v0, p1, 0x3

    div-int/lit8 p1, p1, 0x3

    mul-int/lit8 p1, p1, 0x4

    if-nez v0, :cond_1

    const/4 v0, 0x0

    goto :goto_0

    :cond_1
    add-int/lit8 v0, v0, 0x1

    :goto_0
    add-int/2addr p1, v0

    :goto_1
    iget v0, p0, Lcom/kwad/sdk/core/a/c$b;->aor:I

    if-lez v0, :cond_2

    add-int/lit8 v1, p1, -0x1

    div-int/2addr v1, v0

    iget-object v0, p0, Lcom/kwad/sdk/core/a/c$b;->aoq:[B

    array-length v0, v0

    mul-int/2addr v1, v0

    add-int/2addr p1, v1

    :cond_2
    return p1
.end method


# virtual methods
.method public final encode([B)[B
    .locals 4

    array-length v0, p1

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/a/c$b;->bX(I)I

    move-result v0

    new-array v1, v0, [B

    array-length v2, p1

    const/4 v3, 0x0

    invoke-direct {p0, p1, v3, v2, v1}, Lcom/kwad/sdk/core/a/c$b;->b([BII[B)I

    move-result p1

    if-eq p1, v0, :cond_0

    invoke-static {v1, p1}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object p1

    return-object p1

    :cond_0
    return-object v1
.end method

.method public final encodeToString([B)Ljava/lang/String;
    .locals 3

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/a/c$b;->encode([B)[B

    move-result-object p1

    new-instance v0, Ljava/lang/String;

    array-length v1, p1

    const/4 v2, 0x0

    invoke-direct {v0, p1, v2, v2, v1}, Ljava/lang/String;-><init>([BIII)V

    return-object v0
.end method

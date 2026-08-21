.class public Lcom/igexin/push/d/c/g;
.super Lcom/igexin/push/d/c/c;


# instance fields
.field public a:Ljava/lang/String;

.field public b:[B

.field public c:B

.field public d:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/igexin/push/d/c/c;-><init>()V

    const/16 v0, 0x60

    iput v0, p0, Lcom/igexin/push/d/c/g;->i:I

    const/4 v0, 0x4

    iput-byte v0, p0, Lcom/igexin/push/d/c/g;->j:B

    iget-byte v0, p0, Lcom/igexin/push/d/c/g;->k:B

    or-int/lit8 v0, v0, 0x10

    int-to-byte v0, v0

    iput-byte v0, p0, Lcom/igexin/push/d/c/g;->k:B

    return-void
.end method

.method private a([BII)Ljava/lang/String;
    .locals 2

    :try_start_0
    new-instance v0, Ljava/lang/String;

    const-string v1, "UTF-8"

    invoke-direct {v0, p1, p2, p3, v1}, Ljava/lang/String;-><init>([BIILjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    const-string p1, ""

    return-object p1
.end method


# virtual methods
.method public a([B)V
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    aget-byte v1, p1, v0

    iput-byte v1, p0, Lcom/igexin/push/d/c/g;->c:B

    const/4 v1, 0x2

    const/4 v2, 0x1

    aget-byte v2, p1, v2

    and-int/lit16 v2, v2, 0xff

    invoke-direct {p0, p1, v1, v2}, Lcom/igexin/push/d/c/g;->a([BII)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/igexin/push/d/c/g;->a:Ljava/lang/String;

    add-int/2addr v1, v2

    add-int/lit8 v2, v1, 0x1

    aget-byte v1, p1, v1

    and-int/lit16 v1, v1, 0xff

    new-array v3, v1, [B

    iput-object v3, p0, Lcom/igexin/push/d/c/g;->b:[B

    invoke-static {p1, v2, v3, v0, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    add-int/2addr v2, v1

    add-int/lit8 v0, v2, 0x1

    aget-byte v1, p1, v2

    and-int/lit16 v1, v1, 0xff

    invoke-direct {p0, p1, v0, v1}, Lcom/igexin/push/d/c/g;->a([BII)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/igexin/push/d/c/g;->d:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method public c()[B
    .locals 7

    iget-object v0, p0, Lcom/igexin/push/d/c/g;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    long-to-int v1, v1

    invoke-static {v1}, Lcom/igexin/b/a/b/f;->b(I)[B

    move-result-object v1

    invoke-static {v1}, Lcom/igexin/push/util/EncryptUtils;->getIV([B)[B

    move-result-object v1

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getSocketAESKey()[B

    move-result-object v2

    array-length v3, v0

    add-int/lit8 v3, v3, 0x2

    add-int/lit8 v3, v3, 0x2

    array-length v4, v2

    add-int/2addr v3, v4

    add-int/lit8 v3, v3, 0x1

    array-length v4, v1

    add-int/2addr v3, v4

    new-array v3, v3, [B

    const/4 v4, 0x0

    invoke-static {v4, v3, v4}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v5

    array-length v6, v0

    int-to-byte v6, v6

    invoke-static {v6, v3, v5}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v6

    add-int/2addr v5, v6

    array-length v6, v0

    invoke-static {v0, v4, v3, v5, v6}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v0

    add-int/2addr v5, v0

    array-length v0, v2

    int-to-short v0, v0

    invoke-static {v0, v3, v5}, Lcom/igexin/b/a/b/f;->b(I[BI)I

    move-result v0

    add-int/2addr v5, v0

    array-length v0, v2

    invoke-static {v2, v4, v3, v5, v0}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v0

    add-int/2addr v5, v0

    array-length v0, v1

    int-to-byte v0, v0

    invoke-static {v0, v3, v5}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result v0

    add-int/2addr v5, v0

    array-length v0, v1

    invoke-static {v1, v4, v3, v5, v0}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    return-object v3
.end method

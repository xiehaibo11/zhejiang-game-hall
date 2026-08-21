.class public Lcom/igexin/push/util/EncryptUtils;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Z

.field private static c:I

.field private static d:[B

.field private static e:[B

.field public static errorMsg:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 4

    const-class v0, Lcom/igexin/push/util/EncryptUtils;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    const-string v0, ""

    sput-object v0, Lcom/igexin/push/util/EncryptUtils;->errorMsg:Ljava/lang/String;

    const/4 v0, 0x0

    :try_start_0
    sget-boolean v1, Lcom/igexin/push/extension/mod/SecurityUtils;->b:Z

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->initSocketAESKey()[B

    move-result-object v1

    sput-object v1, Lcom/igexin/push/util/EncryptUtils;->d:[B

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->initHttpAESKey()[B

    move-result-object v1

    sput-object v1, Lcom/igexin/push/util/EncryptUtils;->e:[B

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->d:[B

    if-eqz v2, :cond_0

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getSocketAESKey()[B

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getHttpAESKey()[B

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getRSAKeyId()[B

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getVersion()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    sput-boolean v1, Lcom/igexin/push/util/EncryptUtils;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|load so error = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    new-array v3, v0, [Ljava/lang/Object;

    invoke-static {v2, v3}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sput-boolean v0, Lcom/igexin/push/util/EncryptUtils;->b:Z

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/igexin/push/util/EncryptUtils;->errorMsg:Ljava/lang/String;

    :cond_1
    :goto_1
    sget-object v1, Lcom/igexin/push/util/EncryptUtils;->errorMsg:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_2

    sget-object v1, Lcom/igexin/push/extension/mod/SecurityUtils;->c:Ljava/lang/String;

    sput-object v1, Lcom/igexin/push/util/EncryptUtils;->errorMsg:Ljava/lang/String;

    :cond_2
    sget-boolean v1, Lcom/igexin/push/util/EncryptUtils;->b:Z

    if-nez v1, :cond_3

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|load so error ++++++++"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->errorMsg:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    const-string v0, "value = null, normal error"

    sput-object v0, Lcom/igexin/push/util/EncryptUtils;->errorMsg:Ljava/lang/String;

    goto :goto_2

    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|load so success ~~~~~~~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_4
    :goto_2
    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static aesDecHttp([B[B)[B
    .locals 1

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->e:[B

    invoke-static {v0, p0, p1}, Lcom/igexin/push/extension/mod/SecurityUtils;->c([B[B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static aesDecSocket([B[B)[B
    .locals 1

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->d:[B

    invoke-static {v0, p0, p1}, Lcom/igexin/push/extension/mod/SecurityUtils;->g([B[B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static aesEncHttp([B[B)[B
    .locals 1

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->e:[B

    invoke-static {v0, p0, p1}, Lcom/igexin/push/extension/mod/SecurityUtils;->b([B[B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static aesEncSocket([B[B)[B
    .locals 1

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->d:[B

    invoke-static {v0, p0, p1}, Lcom/igexin/push/extension/mod/SecurityUtils;->f([B[B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static altAesDecSocket([B[B)[B
    .locals 0

    invoke-static {p0, p1}, Lcom/igexin/push/extension/mod/SecurityUtils;->m([B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static altAesEncSocket([B[B)[B
    .locals 0

    invoke-static {p0, p1}, Lcom/igexin/push/extension/mod/SecurityUtils;->l([B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static getBytesEncrypted([B)[B
    .locals 1

    sget-object v0, Lcom/igexin/push/core/d;->E:Ljava/lang/String;

    invoke-static {p0, v0}, Lcom/igexin/b/a/a/a;->d([BLjava/lang/String;)[B

    move-result-object p0

    return-object p0
.end method

.method public static getHttpAESKey()[B
    .locals 1

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->e:[B

    invoke-static {v0}, Lcom/igexin/push/extension/mod/SecurityUtils;->d([B)[B

    move-result-object v0

    return-object v0
.end method

.method public static getHttpGTCV()Ljava/lang/String;
    .locals 5

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getHttpAESKey()[B

    move-result-object v0

    const/16 v1, 0x10

    invoke-static {v1}, Lcom/igexin/push/util/l;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    array-length v2, v1

    array-length v3, v0

    add-int/2addr v2, v3

    new-array v2, v2, [B

    array-length v3, v1

    const/4 v4, 0x0

    invoke-static {v1, v4, v2, v4, v3}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v1

    array-length v3, v0

    invoke-static {v0, v4, v2, v1, v3}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    const/4 v0, 0x2

    invoke-static {v2, v0}, Lcom/igexin/push/util/d;->b([BI)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getHttpSignature(Ljava/lang/String;[B)Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    array-length v0, p0

    array-length v1, p1

    add-int/2addr v0, v1

    new-array v0, v0, [B

    array-length v1, p0

    const/4 v2, 0x0

    invoke-static {p0, v2, v0, v2, v1}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result p0

    array-length v1, p1

    if-lez v1, :cond_0

    array-length v1, p1

    invoke-static {p1, v2, v0, p0, v1}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    :cond_0
    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->sha1([B)[B

    move-result-object p0

    const/4 p1, 0x2

    invoke-static {p0, p1}, Lcom/igexin/push/util/d;->b([BI)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getIV([B)[B
    .locals 0

    invoke-static {p0}, Lcom/igexin/push/util/EncryptUtils;->md5([B)[B

    move-result-object p0

    return-object p0
.end method

.method public static getPacketId()I
    .locals 2

    sget v0, Lcom/igexin/push/util/EncryptUtils;->c:I

    add-int/lit8 v1, v0, 0x1

    sput v1, Lcom/igexin/push/util/EncryptUtils;->c:I

    return v0
.end method

.method public static getRSAKeyId()[B
    .locals 1

    invoke-static {}, Lcom/igexin/push/extension/mod/SecurityUtils;->j()[B

    move-result-object v0

    return-object v0
.end method

.method public static getSocketAESKey()[B
    .locals 1

    sget-object v0, Lcom/igexin/push/util/EncryptUtils;->d:[B

    invoke-static {v0}, Lcom/igexin/push/extension/mod/SecurityUtils;->h([B)[B

    move-result-object v0

    return-object v0
.end method

.method public static getSocketSignature(Lcom/igexin/push/d/c/a;II)[B
    .locals 2

    iget v0, p0, Lcom/igexin/push/d/c/a;->a:I

    add-int/lit8 v0, v0, 0xb

    new-array v0, v0, [B

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/igexin/b/a/b/f;->a(I[BI)I

    move-result p1

    invoke-static {p2, v0, p1}, Lcom/igexin/b/a/b/f;->a(I[BI)I

    move-result p2

    add-int/2addr p1, p2

    iget p2, p0, Lcom/igexin/push/d/c/a;->a:I

    int-to-short p2, p2

    invoke-static {p2, v0, p1}, Lcom/igexin/b/a/b/f;->b(I[BI)I

    move-result p2

    add-int/2addr p1, p2

    iget-byte p2, p0, Lcom/igexin/push/d/c/a;->b:B

    invoke-static {p2, v0, p1}, Lcom/igexin/b/a/b/f;->c(I[BI)I

    move-result p2

    add-int/2addr p1, p2

    iget-object p2, p0, Lcom/igexin/push/d/c/a;->e:[B

    iget p0, p0, Lcom/igexin/push/d/c/a;->a:I

    invoke-static {p2, v1, v0, p1, p0}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    invoke-static {v0}, Lcom/igexin/push/util/EncryptUtils;->sha1([B)[B

    move-result-object p0

    return-object p0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/igexin/push/extension/mod/SecurityUtils;->k()[B

    move-result-object v0

    if-eqz v0, :cond_0

    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v0}, Ljava/lang/String;-><init>([B)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "| so version is "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v1

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static initHttpAESKey()[B
    .locals 1

    invoke-static {}, Lcom/igexin/push/extension/mod/SecurityUtils;->a()[B

    move-result-object v0

    return-object v0
.end method

.method public static initSocketAESKey()[B
    .locals 1

    invoke-static {}, Lcom/igexin/push/extension/mod/SecurityUtils;->e()[B

    move-result-object v0

    return-object v0
.end method

.method public static isLoadSuccess()Z
    .locals 1

    sget-boolean v0, Lcom/igexin/push/util/EncryptUtils;->b:Z

    return v0
.end method

.method public static md5([B)[B
    .locals 1

    :try_start_0
    const-string v0, "MD5"

    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->update([B)V

    invoke-virtual {v0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static reset()Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    sget-boolean v1, Lcom/igexin/push/extension/mod/SecurityUtils;->b:Z

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->initSocketAESKey()[B

    move-result-object v1

    sput-object v1, Lcom/igexin/push/util/EncryptUtils;->d:[B

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->initHttpAESKey()[B

    move-result-object v1

    sput-object v1, Lcom/igexin/push/util/EncryptUtils;->e:[B

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->d:[B

    if-eqz v2, :cond_0

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getSocketAESKey()[B

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getHttpAESKey()[B

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getRSAKeyId()[B

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {}, Lcom/igexin/push/util/EncryptUtils;->getVersion()Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    move v1, v0

    :goto_0
    sput-boolean v1, Lcom/igexin/push/util/EncryptUtils;->b:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|load so error = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v2, v0, [Ljava/lang/Object;

    invoke-static {v1, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    sput-boolean v0, Lcom/igexin/push/util/EncryptUtils;->b:Z

    :cond_1
    :goto_1
    sget-boolean v1, Lcom/igexin/push/util/EncryptUtils;->b:Z

    if-nez v1, :cond_2

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|load so error ++++++++"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_2

    :cond_2
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/util/EncryptUtils;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|load so success ~~~~~~~"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {v1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :goto_2
    sget-boolean v0, Lcom/igexin/push/util/EncryptUtils;->b:Z

    return v0
.end method

.method public static rsaEnc([B)[B
    .locals 9

    array-length v0, p0

    const/16 v1, 0xd6

    if-gt v0, v1, :cond_0

    invoke-static {p0}, Lcom/igexin/push/extension/mod/SecurityUtils;->i([B)[B

    move-result-object p0

    return-object p0

    :cond_0
    rem-int/lit16 v1, v0, 0xc8

    if-nez v1, :cond_1

    div-int/lit16 v1, v0, 0xc8

    goto :goto_0

    :cond_1
    div-int/lit16 v1, v0, 0xc8

    add-int/lit8 v1, v1, 0x1

    :goto_0
    mul-int/lit16 v2, v1, 0x100

    new-array v2, v2, [B

    const/4 v3, 0x0

    move v4, v3

    move v5, v4

    :goto_1
    if-ge v4, v1, :cond_3

    add-int/lit8 v6, v1, -0x1

    if-ge v4, v6, :cond_2

    const/16 v6, 0xc8

    goto :goto_2

    :cond_2
    mul-int/lit16 v6, v4, 0xc8

    sub-int v6, v0, v6

    :goto_2
    new-array v7, v6, [B

    mul-int/lit16 v8, v4, 0xc8

    invoke-static {p0, v8, v7, v3, v6}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    invoke-static {v7}, Lcom/igexin/push/extension/mod/SecurityUtils;->i([B)[B

    move-result-object v6

    array-length v7, v6

    invoke-static {v6, v3, v2, v5, v7}, Lcom/igexin/b/a/b/f;->a([BI[BII)I

    move-result v6

    add-int/2addr v5, v6

    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    :cond_3
    return-object v2
.end method

.method public static sha1([B)[B
    .locals 1

    :try_start_0
    const-string v0, "SHA-1"

    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.class public final Lcom/loc/ao;
.super Ljava/lang/Object;
.source "SecurityUtil.java"


# static fields
.field private static a:[B

.field private static b:[Ljava/lang/String;

.field private static c:[I


# direct methods
.method static constructor <clinit>()V
    .locals 8

    const-string v0, "kp6SsA"

    const-string v1, "cHE4dQ"

    const-string v2, "JKekrA"

    const-string v3, "XBxOHQ"

    const-string v4, "CSnpKw"

    const-string v5, "VwcThw"

    const-string v6, "wkp6Sg"

    const-string v7, "1cHE4Q"

    filled-new-array/range {v0 .. v7}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/ao;->b:[Ljava/lang/String;

    const/4 v0, 0x0

    sput-object v0, Lcom/loc/ao;->c:[I

    return-void
.end method

.method private static a(II)I
    .locals 3

    const/4 v0, 0x0

    const/4 v1, 0x0

    :goto_0
    if-ge v0, p1, :cond_0

    shr-int/lit8 v1, v1, 0x1

    const/high16 v2, -0x80000000

    or-int/2addr v1, v2

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    and-int v0, p0, v1

    rsub-int/lit8 v1, p1, 0x20

    ushr-int/2addr v0, v1

    shl-int/2addr p0, p1

    or-int/2addr p0, v0

    return p0
.end method

.method public static a()Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/security/SecureRandom;

    invoke-direct {v0}, Ljava/security/SecureRandom;-><init>()V

    :try_start_0
    const-string v1, "EQUVT"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljavax/crypto/KeyGenerator;->getInstance(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;

    move-result-object v1

    const/16 v2, 0x80

    invoke-virtual {v1, v2, v0}, Ljavax/crypto/KeyGenerator;->init(ILjava/security/SecureRandom;)V

    invoke-virtual {v1}, Ljavax/crypto/KeyGenerator;->generateKey()Ljavax/crypto/SecretKey;

    move-result-object v0

    invoke-interface {v0}, Ljavax/crypto/SecretKey;->getEncoded()[B

    move-result-object v0

    invoke-static {v0}, Lcom/loc/aj;->a([B)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 v0, 0x0

    return-object v0
.end method

.method private static a(I)Ljava/lang/String;
    .locals 9

    const/4 v0, 0x4

    new-array v1, v0, [C

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v0, :cond_1

    rsub-int/lit8 v4, v3, 0x4

    add-int/lit8 v4, v4, -0x1

    mul-int/lit8 v5, v3, 0x8

    ushr-int v5, p0, v5

    and-int/lit16 v5, v5, 0xff

    int-to-char v5, v5

    aput-char v5, v1, v4

    aget-char v4, v1, v4

    const-string v5, " "

    const/4 v6, 0x0

    :goto_1
    const/16 v7, 0x20

    if-ge v6, v7, :cond_0

    const/high16 v7, -0x80000000

    ushr-int/2addr v7, v6

    and-int/2addr v7, v4

    rsub-int/lit8 v8, v6, 0x1f

    ushr-int/2addr v7, v8

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    add-int/lit8 v6, v6, 0x1

    goto :goto_1

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v1}, Ljava/lang/String;-><init>([C)V

    return-object p0
.end method

.method public static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/loc/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a([I)Ljava/lang/String;
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    if-eqz p0, :cond_0

    const/4 v1, 0x0

    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_0

    aget v2, p0, v1

    invoke-static {v2}, Lcom/loc/ao;->b(I)I

    move-result v2

    invoke-static {v2, v1}, Lcom/loc/ao;->a(II)I

    move-result v2

    invoke-static {v2}, Lcom/loc/ao;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a([B)[B
    .locals 4

    :try_start_0
    new-instance v0, Ljavax/crypto/spec/IvParameterSpec;

    sget-object v1, Lcom/loc/ao;->a:[B

    if-nez v1, :cond_0

    const-string v1, "YAAAAAAAAAAAAAAAAAAAAAA"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    sput-object v1, Lcom/loc/ao;->a:[B

    :cond_0
    sget-object v1, Lcom/loc/ao;->a:[B

    invoke-direct {v0, v1}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    invoke-static {}, Lcom/loc/ao;->b()[I

    move-result-object v1

    invoke-static {v1}, Lcom/loc/ao;->a([I)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljavax/crypto/spec/SecretKeySpec;

    const-string v3, "UTF-8"

    invoke-virtual {v1, v3}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1

    const-string v3, "EQUVT"

    invoke-static {v3}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v1, v3}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string v1, "CQUVTL0NCQy9QS0NTNVBhZGRpbmc"

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v1

    const/4 v3, 0x1

    invoke-virtual {v1, v3, v2, v0}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    invoke-virtual {v1, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method private static b(I)I
    .locals 4

    const/4 v0, 0x1

    const/4 v1, 0x0

    const/4 v2, 0x1

    :goto_0
    const/16 v3, 0xf

    if-ge v1, v3, :cond_0

    shl-int/lit8 v2, v2, 0x2

    or-int/2addr v2, v0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    shl-int/lit8 v1, v2, 0x1

    and-int/2addr v1, p0

    ushr-int/2addr v1, v0

    and-int/2addr p0, v2

    shl-int/2addr p0, v0

    or-int/2addr p0, v1

    return p0
.end method

.method public static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "UTF-8"

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-static {p0}, Lcom/loc/ao;->a([B)[B

    move-result-object p0

    invoke-static {p0}, Lcom/loc/aj;->a([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static b()[I
    .locals 7

    sget-object v0, Lcom/loc/ao;->c:[I

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const/16 v0, 0x8

    new-array v1, v0, [I

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    sget-object v4, Lcom/loc/ao;->b:[Ljava/lang/String;

    array-length v5, v4

    if-ge v3, v5, :cond_1

    aget-object v4, v4, v3

    invoke-static {v4}, Lcom/loc/p;->b(Ljava/lang/String;)[B

    move-result-object v4

    const/4 v5, 0x3

    aget-byte v5, v4, v5

    and-int/lit16 v5, v5, 0xff

    const/4 v6, 0x2

    aget-byte v6, v4, v6

    and-int/lit16 v6, v6, 0xff

    shl-int/2addr v6, v0

    or-int/2addr v5, v6

    const/4 v6, 0x1

    aget-byte v6, v4, v6

    and-int/lit16 v6, v6, 0xff

    shl-int/lit8 v6, v6, 0x10

    or-int/2addr v5, v6

    aget-byte v4, v4, v2

    and-int/lit16 v4, v4, 0xff

    shl-int/lit8 v4, v4, 0x18

    or-int/2addr v4, v5

    aput v4, v1, v3

    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_1
    return-object v1
.end method

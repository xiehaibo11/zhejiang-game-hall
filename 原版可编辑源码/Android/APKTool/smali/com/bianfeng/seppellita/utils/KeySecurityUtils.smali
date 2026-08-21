.class public Lcom/bianfeng/seppellita/utils/KeySecurityUtils;
.super Ljava/lang/Object;
.source "KeySecurityUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static bytesToHexString([B)Ljava/lang/String;
    .locals 6

    .line 45
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    if-eqz p0, :cond_2

    .line 46
    array-length v1, p0

    if-lez v1, :cond_2

    const/4 v1, 0x0

    move v2, v1

    .line 47
    :goto_0
    array-length v3, p0

    if-ge v2, v3, :cond_1

    .line 48
    aget-byte v3, p0, v2

    and-int/lit16 v3, v3, 0xff

    .line 49
    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    .line 50
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    const/4 v5, 0x2

    if-ge v4, v5, :cond_0

    .line 51
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 53
    :cond_0
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 55
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method public static getApihubSecret(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    .line 9
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/SHA256Utils;->getSHA256(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 10
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 11
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 12
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    .line 13
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    .line 14
    array-length v1, v0

    .line 15
    new-array v2, v1, [B

    .line 16
    new-array v3, v1, [B

    .line 17
    array-length v4, p0

    const/4 v5, 0x0

    move v6, v5

    :goto_0
    if-ge v6, v1, :cond_0

    .line 19
    rem-int v7, v6, v4

    aget-byte v7, p0, v7

    aput-byte v7, v2, v6

    add-int/lit8 v6, v6, 0x1

    goto :goto_0

    :cond_0
    :goto_1
    if-ge v5, v1, :cond_1

    .line 22
    aget-byte p0, v0, v5

    aget-byte v4, v2, v5

    add-int/2addr p0, v4

    rem-int/lit16 p0, p0, 0x100

    int-to-byte p0, p0

    aput-byte p0, v3, v5

    add-int/lit8 v5, v5, 0x1

    goto :goto_1

    .line 24
    :cond_1
    invoke-static {v3}, Lcom/bianfeng/seppellita/utils/KeySecurityUtils;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p0

    .line 25
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getEncryptKey(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 30
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/SHA256Utils;->getSHA256(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 31
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Md5Utils;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 32
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    .line 33
    array-length v0, p0

    .line 34
    div-int/lit8 v1, v0, 0x2

    new-array v2, v1, [B

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v1, :cond_1

    mul-int/lit8 v4, v3, 0x2

    if-ge v4, v0, :cond_0

    .line 38
    aget-byte v4, p0, v4

    aput-byte v4, v2, v3

    :cond_0
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 41
    :cond_1
    new-instance p0, Ljava/lang/String;

    invoke-direct {p0, v2}, Ljava/lang/String;-><init>([B)V

    return-object p0
.end method

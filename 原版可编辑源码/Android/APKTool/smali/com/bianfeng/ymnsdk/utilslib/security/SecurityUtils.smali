.class public Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;
.super Ljava/lang/Object;
.source "SecurityUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static bytesToHexString([B)Ljava/lang/String;
    .locals 6
    .param p0, "src"    # [B

    .line 36
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 37
    .local v0, "sb":Ljava/lang/StringBuilder;
    if-eqz p0, :cond_3

    array-length v1, p0

    if-gtz v1, :cond_0

    goto :goto_1

    .line 38
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_2

    .line 39
    aget-byte v2, p0, v1

    and-int/lit16 v2, v2, 0xff

    .line 40
    .local v2, "v":I
    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    .line 41
    .local v3, "hv":Ljava/lang/String;
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    const/4 v5, 0x2

    if-ge v4, v5, :cond_1

    const/4 v4, 0x0

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 42
    :cond_1
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 38
    .end local v2    # "v":I
    .end local v3    # "hv":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 44
    .end local v1    # "i":I
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 37
    :cond_3
    :goto_1
    const/4 v1, 0x0

    return-object v1
.end method

.method static getSHA256([B)Ljava/lang/String;
    .locals 2
    .param p0, "str"    # [B

    .line 55
    :try_start_0
    const-string v0, "SHA-256"

    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    .line 56
    .local v0, "messageDigest":Ljava/security/MessageDigest;
    invoke-virtual {v0, p0}, Ljava/security/MessageDigest;->update([B)V

    .line 57
    invoke-virtual {v0}, Ljava/security/MessageDigest;->digest()[B

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 58
    .end local v0    # "messageDigest":Ljava/security/MessageDigest;
    :catch_0
    move-exception v0

    .line 59
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 61
    .end local v0    # "e":Ljava/lang/Exception;
    const-string v0, ""

    return-object v0
.end method

.method static md5(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p0, "input"    # Ljava/lang/String;

    .line 20
    :try_start_0
    const-string v0, "MD5.algorithm"

    const-string v1, "MD5"

    invoke-static {v0, v1}, Ljava/lang/System;->getProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 21
    .local v0, "algorithm":Ljava/lang/String;
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    .line 22
    .local v1, "md":Ljava/security/MessageDigest;
    const-string v2, "utf-8"

    invoke-virtual {p0, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    .line 23
    .local v2, "bs":[B
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v3

    .line 24
    .end local v0    # "algorithm":Ljava/lang/String;
    .end local v1    # "md":Ljava/security/MessageDigest;
    .end local v2    # "bs":[B
    :catch_0
    move-exception v0

    .line 25
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 26
    const/4 v1, 0x0

    return-object v1
.end method

.method static sha256_HMAC([BLjava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p0, "message"    # [B
    .param p1, "secret"    # Ljava/lang/String;

    .line 72
    const-string v0, "HmacSHA256"

    :try_start_0
    invoke-static {v0}, Ljavax/crypto/Mac;->getInstance(Ljava/lang/String;)Ljavax/crypto/Mac;

    move-result-object v1

    .line 73
    .local v1, "sha256_HMAC":Ljavax/crypto/Mac;
    new-instance v2, Ljavax/crypto/spec/SecretKeySpec;

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-direct {v2, v3, v0}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    move-object v0, v2

    .line 74
    .local v0, "secret_key":Ljavax/crypto/spec/SecretKeySpec;
    invoke-virtual {v1, v0}, Ljavax/crypto/Mac;->init(Ljava/security/Key;)V

    .line 75
    invoke-virtual {v1, p0}, Ljavax/crypto/Mac;->doFinal([B)[B

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v2

    .line 76
    .end local v0    # "secret_key":Ljavax/crypto/spec/SecretKeySpec;
    .end local v1    # "sha256_HMAC":Ljavax/crypto/Mac;
    :catch_0
    move-exception v0

    .line 77
    .local v0, "var5":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 78
    sget-object v1, Ljava/lang/System;->out:Ljava/io/PrintStream;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Error HmacSHA256 ==========="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/io/PrintStream;->println(Ljava/lang/String;)V

    .line 79
    const/4 v1, 0x0

    return-object v1
.end method

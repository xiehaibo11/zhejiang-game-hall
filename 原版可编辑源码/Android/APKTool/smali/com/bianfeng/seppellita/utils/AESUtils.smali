.class public Lcom/bianfeng/seppellita/utils/AESUtils;
.super Ljava/lang/Object;
.source "AESUtils.java"


# static fields
.field private static final MODE:Ljava/lang/String; = "AES/ECB/NoPadding"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static encrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    const-string p0, "Key\u4e3a\u7a7anull"

    .line 19
    invoke-static {p0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-object v0

    .line 23
    :cond_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0x10

    if-eq v1, v2, :cond_1

    const-string p0, "Key\u957f\u5ea6\u4e0d\u662f16\u4f4d"

    .line 24
    invoke-static {p0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    return-object v0

    .line 27
    :cond_1
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    const-string v0, "AES/ECB/NoPadding"

    .line 28
    invoke-static {v0}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v0

    .line 29
    invoke-virtual {v0}, Ljavax/crypto/Cipher;->getBlockSize()I

    move-result v1

    .line 30
    array-length v2, p0

    .line 31
    rem-int v3, v2, v1

    if-eqz v3, :cond_2

    sub-int/2addr v1, v3

    add-int/2addr v2, v1

    .line 34
    :cond_2
    new-array v1, v2, [B

    .line 35
    array-length v2, p0

    const/4 v3, 0x0

    invoke-static {p0, v3, v1, v3, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    const/4 p0, 0x1

    .line 36
    invoke-static {p1}, Lcom/bianfeng/seppellita/utils/AESUtils;->getSecretKeySpec(Ljava/lang/String;)Ljavax/crypto/spec/SecretKeySpec;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    .line 37
    invoke-virtual {v0, v1}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p0

    .line 38
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->encode([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static getSecretKeySpec(Ljava/lang/String;)Ljavax/crypto/spec/SecretKeySpec;
    .locals 3

    .line 46
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    .line 47
    array-length v0, p0

    .line 48
    rem-int/lit8 v1, v0, 0x10

    if-eqz v1, :cond_0

    rsub-int/lit8 v1, v1, 0x10

    add-int/2addr v0, v1

    .line 51
    :cond_0
    new-array v0, v0, [B

    .line 52
    array-length v1, p0

    const/4 v2, 0x0

    invoke-static {p0, v2, v0, v2, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 53
    new-instance p0, Ljavax/crypto/spec/SecretKeySpec;

    const-string v1, "AES"

    invoke-direct {p0, v0, v1}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    return-object p0
.end method

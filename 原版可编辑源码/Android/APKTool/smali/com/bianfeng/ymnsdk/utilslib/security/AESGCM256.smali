.class public Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;
.super Ljava/lang/Object;
.source "AESGCM256.java"


# static fields
.field private static a:Ljava/lang/String;

.field private static b:Ljava/lang/String;

.field private static c:Ljava/lang/String;

.field private static d:Ljava/lang/String;

.field private static hexString:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 15
    const-string v0, "0123456789abcdef"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->hexString:Ljava/lang/String;

    .line 16
    const-string v0, "66633064336"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->a:Ljava/lang/String;

    .line 17
    const-string v0, "3032396433616535343"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->b:Ljava/lang/String;

    .line 18
    const-string v0, "136636666313737323138"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->c:Ljava/lang/String;

    .line 19
    const-string v0, "1363333366261"

    sput-object v0, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->d:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static decode(Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p0, "bytes"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/UnsupportedEncodingException;
        }
    .end annotation

    .line 101
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    div-int/lit8 v1, v1, 0x2

    invoke-direct {v0, v1}, Ljava/io/ByteArrayOutputStream;-><init>(I)V

    .line 103
    .local v0, "baos":Ljava/io/ByteArrayOutputStream;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 104
    sget-object v2, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->hexString:Ljava/lang/String;

    invoke-virtual {p0, v1}, Ljava/lang/String;->charAt(I)C

    move-result v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->indexOf(I)I

    move-result v2

    shl-int/lit8 v2, v2, 0x4

    sget-object v3, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->hexString:Ljava/lang/String;

    add-int/lit8 v4, v1, 0x1

    invoke-virtual {p0, v4}, Ljava/lang/String;->charAt(I)C

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->indexOf(I)I

    move-result v3

    or-int/2addr v2, v3

    invoke-virtual {v0, v2}, Ljava/io/ByteArrayOutputStream;->write(I)V

    .line 103
    add-int/lit8 v1, v1, 0x2

    goto :goto_0

    .line 105
    .end local v1    # "i":I
    :cond_0
    new-instance v1, Ljava/lang/String;

    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object v2

    const-string v3, "GBK"

    invoke-direct {v1, v2, v3}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    return-object v1
.end method

.method public static decrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 9
    .param p0, "ciphertext"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 49
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 51
    const/4 v0, 0x0

    invoke-static {p0, v0}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v1

    .line 52
    .local v1, "combinedBytes":[B
    const/16 v2, 0xc

    new-array v3, v2, [B

    .line 53
    .local v3, "iv":[B
    array-length v4, v1

    sub-int/2addr v4, v2

    new-array v4, v4, [B

    .line 55
    .local v4, "encryptedBytes":[B
    invoke-static {v1, v0, v3, v0, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 56
    array-length v5, v4

    invoke-static {v1, v2, v4, v0, v5}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 58
    const-string v0, "AES/GCM/NoPadding"

    invoke-static {v0}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v0

    .line 59
    .local v0, "cipher":Ljavax/crypto/Cipher;
    new-instance v2, Ljavax/crypto/spec/SecretKeySpec;

    const-string v5, "UTF-8"

    invoke-virtual {p1, v5}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v6

    const-string v7, "AES"

    invoke-direct {v2, v6, v7}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    .line 60
    .local v2, "secretKeySpec":Ljavax/crypto/spec/SecretKeySpec;
    const/4 v6, 0x0

    .line 61
    .local v6, "gcmParameterSpec":Ljavax/crypto/spec/GCMParameterSpec;
    sget v7, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v8, 0x13

    if-lt v7, v8, :cond_0

    .line 62
    new-instance v7, Ljavax/crypto/spec/GCMParameterSpec;

    const/16 v8, 0x80

    invoke-direct {v7, v8, v3}, Ljavax/crypto/spec/GCMParameterSpec;-><init>(I[B)V

    move-object v6, v7

    .line 63
    const/4 v7, 0x2

    invoke-virtual {v0, v7, v2, v6}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 69
    invoke-virtual {v0, v4}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v7

    .line 71
    .local v7, "decryptedBytes":[B
    new-instance v8, Ljava/lang/String;

    invoke-direct {v8, v7, v5}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    return-object v8

    .line 65
    .end local v7    # "decryptedBytes":[B
    :cond_0
    const-string v5, "ymnsdk"

    const-string v7, "--------------------\n\u6bcd\u5305miniversion\u8bf7\u8bbe\u7f6e\u4e3a19\u53ca\u4ee5\u4e0a!!!!!!!!!!!!!!!\n--------------------"

    invoke-static {v5, v7}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 66
    const-string v5, "\u6bcd\u5305miniversion\u8bf7\u8bbe\u7f6e\u4e3a19\u53ca\u4ee5\u4e0a"

    return-object v5
.end method

.method public static encode(Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p0, "str"    # Ljava/lang/String;

    .line 87
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    .line 88
    .local v0, "bytes":[B
    new-instance v1, Ljava/lang/StringBuilder;

    array-length v2, v0

    mul-int/lit8 v2, v2, 0x2

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(I)V

    .line 90
    .local v1, "sb":Ljava/lang/StringBuilder;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v0

    if-ge v2, v3, :cond_0

    .line 91
    sget-object v3, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->hexString:Ljava/lang/String;

    aget-byte v4, v0, v2

    and-int/lit16 v4, v4, 0xf0

    shr-int/lit8 v4, v4, 0x4

    invoke-virtual {v3, v4}, Ljava/lang/String;->charAt(I)C

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 92
    sget-object v3, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->hexString:Ljava/lang/String;

    aget-byte v4, v0, v2

    and-int/lit8 v4, v4, 0xf

    invoke-virtual {v3, v4}, Ljava/lang/String;->charAt(I)C

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 90
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 94
    .end local v2    # "i":I
    :cond_0
    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method public static encrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 10
    .param p0, "plaintext"    # Ljava/lang/String;
    .param p1, "key"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 24
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 25
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->generateRandomIV()[B

    move-result-object v0

    .line 26
    .local v0, "iv":[B
    const-string v1, "UTF-8"

    invoke-virtual {p0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    .line 28
    .local v2, "plaintextBytes":[B
    const-string v3, "AES/GCM/NoPadding"

    invoke-static {v3}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v3

    .line 29
    .local v3, "cipher":Ljavax/crypto/Cipher;
    new-instance v4, Ljavax/crypto/spec/SecretKeySpec;

    invoke-virtual {p1, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1

    const-string v5, "AES"

    invoke-direct {v4, v1, v5}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    move-object v1, v4

    .line 30
    .local v1, "secretKeySpec":Ljavax/crypto/spec/SecretKeySpec;
    const/4 v4, 0x0

    .line 31
    .local v4, "gcmParameterSpec":Ljavax/crypto/spec/GCMParameterSpec;
    sget v5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v6, 0x13

    if-lt v5, v6, :cond_0

    .line 32
    new-instance v5, Ljavax/crypto/spec/GCMParameterSpec;

    const/16 v6, 0x80

    invoke-direct {v5, v6, v0}, Ljavax/crypto/spec/GCMParameterSpec;-><init>(I[B)V

    move-object v4, v5

    .line 33
    const/4 v5, 0x1

    invoke-virtual {v3, v5, v1, v4}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 39
    invoke-virtual {v3, v2}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v5

    .line 41
    .local v5, "encryptedBytes":[B
    array-length v6, v0

    array-length v7, v5

    add-int/2addr v6, v7

    new-array v6, v6, [B

    .line 42
    .local v6, "combinedBytes":[B
    array-length v7, v0

    const/4 v8, 0x0

    invoke-static {v0, v8, v6, v8, v7}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 43
    array-length v7, v0

    array-length v9, v5

    invoke-static {v5, v8, v6, v7, v9}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 44
    invoke-static {v6, v8}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v7}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v7

    const-string v8, "\n"

    const-string v9, ""

    invoke-virtual {v7, v8, v9}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v7

    return-object v7

    .line 35
    .end local v5    # "encryptedBytes":[B
    .end local v6    # "combinedBytes":[B
    :cond_0
    const-string v5, "ymnsdk"

    const-string v6, "--------------------\n\u6bcd\u5305miniversion\u8bf7\u8bbe\u7f6e\u4e3a19\u53ca\u4ee5\u4e0a!!!!!!!!!!!!!!!\n--------------------"

    invoke-static {v5, v6}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 36
    const-string v5, "\u6bcd\u5305miniversion\u8bf7\u8bbe\u7f6e\u4e3a19\u53ca\u4ee5\u4e0a"

    return-object v5
.end method

.method private static generateRandomIV()[B
    .locals 1

    .line 76
    const/16 v0, 0xc

    new-array v0, v0, [B

    .line 79
    .local v0, "iv":[B
    return-object v0
.end method

.method private static getString(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "bytes"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/UnsupportedEncodingException;
        }
    .end annotation

    .line 112
    if-eqz p0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 115
    :cond_0
    return-object p0

    .line 113
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/security/AESGCM256;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

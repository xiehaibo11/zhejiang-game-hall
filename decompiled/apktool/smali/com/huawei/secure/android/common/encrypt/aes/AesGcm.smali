.class public final Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;
.super Ljava/lang/Object;
.source "SourceFile"


# static fields
.field private static final a:Ljava/lang/String; = "security:"

.field private static final b:Ljava/lang/String; = "AES/GCM/NoPadding"

.field private static final c:Ljava/lang/String; = "AES"

.field private static final d:Ljava/lang/String; = "AesGcm"

.field private static final e:Ljava/lang/String; = ""

.field private static final f:I = 0x10

.field private static final g:I = 0xc

.field private static final h:I = 0x2


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a([B)I
    .locals 2

    const/16 v0, 0xc

    .line 22
    aget-byte p0, p0, v0

    const/16 v1, 0x3a

    if-ne p0, v1, :cond_0

    return v0

    :cond_0
    const/4 p0, -0x1

    return p0
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 18
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x18

    if-ge v0, v1, :cond_0

    goto :goto_0

    .line 21
    :cond_0
    invoke-virtual {p0, v1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    :goto_0
    const-string p0, ""

    return-object p0
.end method

.method private static a(Ljava/lang/String;[B[B)[B
    .locals 3

    .line 1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_1

    if-eqz p1, :cond_1

    array-length v0, p1

    const/16 v2, 0x10

    if-lt v0, v2, :cond_1

    if-eqz p2, :cond_1

    array-length v0, p2

    const/16 v2, 0xc

    if-lt v0, v2, :cond_1

    .line 2
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    const-string v0, "UTF-8"

    .line 8
    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-static {p0, p1, p2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->encrypt([B[B[B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 10
    sget-object p1, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "GCM encrypt data error"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/io/UnsupportedEncodingException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    new-array p0, v1, [B

    return-object p0

    .line 13
    :cond_1
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "gcm encrypt param is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    new-array p0, v1, [B

    return-object p0
.end method

.method private static a([B[B)[B
    .locals 3

    .line 15
    array-length v0, p0

    array-length v1, p1

    add-int/2addr v0, v1

    new-array v0, v0, [B

    .line 16
    array-length v1, p0

    const/4 v2, 0x0

    invoke-static {p0, v2, v0, v2, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 17
    array-length p0, p0

    array-length v1, p1

    invoke-static {p1, v2, v0, p0, v1}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v0
.end method

.method private static b(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 3
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0x18

    if-ge v0, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 7
    invoke-virtual {p0, v0, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 8
    :cond_1
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string v0, "IV is invalid."

    invoke-static {p0, v0}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, ""

    return-object p0
.end method

.method private static b([B)[B
    .locals 4

    .line 1
    array-length v0, p0

    const/16 v1, 0xc

    sub-int/2addr v0, v1

    new-array v0, v0, [B

    .line 2
    array-length v2, p0

    sub-int/2addr v2, v1

    const/4 v3, 0x0

    invoke-static {p0, v1, v0, v3, v2}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v0
.end method

.method private static c([B)[B
    .locals 3

    const/16 v0, 0xc

    new-array v1, v0, [B

    const/4 v2, 0x0

    .line 2
    invoke-static {p0, v2, v1, v2, v0}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    return-object v1
.end method

.method public static decrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    invoke-static {p1}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p1

    .line 5
    array-length v0, p1

    const/16 v2, 0x10

    if-ge v0, v2, :cond_1

    .line 6
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "key length is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 9
    :cond_1
    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decrypt(Ljava/lang/String;[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method public static decrypt(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 39
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 40
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 44
    :cond_0
    invoke-static {p1}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p1

    .line 45
    invoke-static {p2}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p2

    .line 46
    array-length v0, p1

    const/16 v2, 0x10

    if-lt v0, v2, :cond_2

    array-length v0, p2

    const/16 v2, 0xc

    if-ge v0, v2, :cond_1

    goto :goto_0

    .line 51
    :cond_1
    invoke-static {p0, p1, p2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decrypt(Ljava/lang/String;[B[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 52
    :cond_2
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "key length or iv length is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 53
    :cond_3
    :goto_1
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "gcm decrypt param is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method public static decrypt(Ljava/lang/String;[B)Ljava/lang/String;
    .locals 4

    .line 10
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_3

    if-eqz p1, :cond_3

    array-length v0, p1

    const/16 v2, 0x10

    if-lt v0, v2, :cond_3

    .line 11
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_2

    .line 15
    :cond_0
    :try_start_0
    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    const-string v2, "AES"

    invoke-direct {v0, p1, v2}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string p1, "AES/GCM/NoPadding"

    .line 16
    invoke-static {p1}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object p1

    .line 19
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 20
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 21
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_1

    goto :goto_0

    .line 25
    :cond_1
    invoke-static {v2}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object v2

    invoke-static {v2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->getGcmAlgorithmParams([B)Ljava/security/spec/AlgorithmParameterSpec;

    move-result-object v2

    const/4 v3, 0x2

    .line 26
    invoke-virtual {p1, v3, v0, v2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 27
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p0

    invoke-virtual {p1, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p0

    .line 28
    new-instance p1, Ljava/lang/String;

    const-string v0, "UTF-8"

    invoke-direct {p1, p0, v0}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    return-object p1

    .line 29
    :cond_2
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "ivParameter or encrypedWord is null"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p0

    goto :goto_1

    :catch_1
    move-exception p0

    .line 38
    :goto_1
    sget-object p1, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "GCM decrypt data exception: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_2
    return-object v1
.end method

.method public static decrypt(Ljava/lang/String;[B[B)Ljava/lang/String;
    .locals 3

    .line 54
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_1

    if-eqz p1, :cond_1

    array-length v0, p1

    const/16 v2, 0x10

    if-lt v0, v2, :cond_1

    if-eqz p2, :cond_1

    array-length v0, p2

    const/16 v2, 0xc

    if-lt v0, v2, :cond_1

    .line 55
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 59
    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p0

    .line 60
    invoke-static {p0, p1, p2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decrypt([B[B[B)[B

    move-result-object p0

    .line 61
    new-instance p1, Ljava/lang/String;

    const-string p2, "UTF-8"

    invoke-direct {p1, p0, p2}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p0

    .line 63
    sget-object p1, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "GCM decrypt data exception: "

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/io/UnsupportedEncodingException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-object v1
.end method

.method public static decrypt([B[B)[B
    .locals 1

    .line 79
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->c([B)[B

    move-result-object v0

    .line 80
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->b([B)[B

    move-result-object p0

    .line 81
    invoke-static {p0, p1, v0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decrypt([B[B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static decrypt([B[B[B)[B
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 64
    array-length v1, p0

    if-eqz v1, :cond_1

    if-eqz p1, :cond_1

    array-length v1, p1

    const/16 v2, 0x10

    if-lt v1, v2, :cond_1

    .line 65
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 69
    :cond_0
    :try_start_0
    new-instance v1, Ljavax/crypto/spec/SecretKeySpec;

    const-string v2, "AES"

    invoke-direct {v1, p1, v2}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string p1, "AES/GCM/NoPadding"

    .line 70
    invoke-static {p1}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object p1

    .line 71
    invoke-static {p2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->getGcmAlgorithmParams([B)Ljava/security/spec/AlgorithmParameterSpec;

    move-result-object p2

    const/4 v2, 0x2

    .line 72
    invoke-virtual {p1, v2, v1, p2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 73
    invoke-virtual {p1, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 75
    sget-object p1, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "GCM decrypt data exception: "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/security/GeneralSecurityException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    new-array p0, v0, [B

    return-object p0

    :cond_1
    :goto_0
    new-array p0, v0, [B

    return-object p0
.end method

.method public static decryptWithCryptHead(Ljava/lang/String;[B)Ljava/lang/String;
    .locals 3

    .line 1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_3

    if-eqz p1, :cond_3

    array-length v0, p1

    const/16 v2, 0x10

    if-ge v0, v2, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesCbc;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 5
    invoke-virtual {v1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-object v1

    :cond_1
    const/16 v0, 0x3a

    .line 8
    invoke-virtual {p0, v0}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    if-ltz v0, :cond_2

    const/4 v1, 0x0

    .line 12
    invoke-virtual {p0, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object v1

    add-int/lit8 v0, v0, 0x1

    .line 13
    invoke-virtual {p0, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p0

    .line 18
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->byteArray2HexStr([B)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1, v1}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decrypt(Ljava/lang/String;[B[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 19
    :cond_2
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, " gcm cipherText data missing colon"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-object v1
.end method

.method public static decryptWithCryptHead([B[B)Ljava/lang/String;
    .locals 1

    .line 20
    :try_start_0
    new-instance v0, Ljava/lang/String;

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decryptWithCryptHeadReturnByte([B[B)[B

    move-result-object p0

    const-string p1, "UTF-8"

    invoke-direct {v0, p0, p1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 22
    :catch_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "UnsupportedEncodingException"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, ""

    return-object p0
.end method

.method public static decryptWithCryptHeadReturnByte([B[B)[B
    .locals 5

    const/4 v0, 0x0

    if-eqz p0, :cond_3

    if-eqz p1, :cond_3

    .line 1
    array-length v1, p1

    const/16 v2, 0x10

    if-ge v1, v2, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesCbc;->d([B)[B

    move-result-object p0

    .line 5
    array-length v1, p0

    if-nez v1, :cond_1

    new-array p0, v0, [B

    return-object p0

    .line 8
    :cond_1
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->a([B)I

    move-result v1

    if-ltz v1, :cond_2

    .line 12
    invoke-static {p0, v1}, Ljava/util/Arrays;->copyOf([BI)[B

    move-result-object v2

    .line 13
    array-length v3, p0

    array-length v4, v2

    sub-int/2addr v3, v4

    add-int/lit8 v3, v3, -0x1

    .line 14
    new-array v4, v3, [B

    add-int/lit8 v1, v1, 0x1

    .line 15
    invoke-static {p0, v1, v4, v0, v3}, Ljava/lang/System;->arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V

    .line 20
    invoke-static {v4, p1, v2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->decrypt([B[B[B)[B

    move-result-object p0

    return-object p0

    .line 21
    :cond_2
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, " gcm cipherText data missing colon"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    new-array p0, v0, [B

    return-object p0

    :cond_3
    :goto_0
    new-array p0, v0, [B

    return-object p0
.end method

.method public static encrypt(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 4
    :cond_0
    invoke-static {p1}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p1

    .line 5
    array-length v0, p1

    const/16 v2, 0x10

    if-ge v0, v2, :cond_1

    .line 6
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "key length is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 9
    :cond_1
    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->encrypt(Ljava/lang/String;[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method public static encrypt(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 24
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_3

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 25
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 29
    :cond_0
    invoke-static {p1}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object p1

    .line 30
    invoke-static {p2}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->hexStr2ByteArray(Ljava/lang/String;)[B

    move-result-object v0

    .line 31
    array-length v2, p1

    const/16 v3, 0x10

    if-lt v2, v3, :cond_2

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    const/16 v2, 0xc

    if-ge p2, v2, :cond_1

    goto :goto_0

    .line 35
    :cond_1
    invoke-static {p0, p1, v0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->encrypt(Ljava/lang/String;[B[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 36
    :cond_2
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "key length or iv length is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    .line 37
    :cond_3
    :goto_1
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "gcm encrypt parameter is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method public static encrypt(Ljava/lang/String;[B)Ljava/lang/String;
    .locals 3

    .line 10
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_2

    if-eqz p1, :cond_2

    array-length v0, p1

    const/16 v2, 0x10

    if-lt v0, v2, :cond_2

    .line 11
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/16 v0, 0xc

    .line 15
    invoke-static {v0}, Lcom/huawei/secure/android/common/encrypt/utils/EncryptUtil;->generateSecureRandom(I)[B

    move-result-object v0

    .line 16
    invoke-static {p0, p1, v0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->a(Ljava/lang/String;[B[B)[B

    move-result-object p0

    if-eqz p0, :cond_2

    .line 17
    array-length p1, p0

    if-nez p1, :cond_1

    goto :goto_0

    .line 21
    :cond_1
    invoke-static {v0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->byteArray2HexStr([B)Ljava/lang/String;

    move-result-object p1

    .line 22
    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->byteArray2HexStr([B)Ljava/lang/String;

    move-result-object p0

    .line 23
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    :goto_0
    return-object v1
.end method

.method public static encrypt(Ljava/lang/String;[B[B)Ljava/lang/String;
    .locals 2

    .line 38
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-eqz p1, :cond_1

    array-length v0, p1

    const/16 v1, 0x10

    if-lt v0, v1, :cond_1

    if-eqz p2, :cond_1

    array-length v0, p2

    const/16 v1, 0xc

    if-lt v0, v1, :cond_1

    .line 39
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 43
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->a(Ljava/lang/String;[B[B)[B

    move-result-object p0

    invoke-static {p0}, Lcom/huawei/secure/android/common/encrypt/utils/HexUtil;->byteArray2HexStr([B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 44
    :cond_1
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "gcm encrypt param is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string p0, ""

    return-object p0
.end method

.method public static encrypt([B[B)[B
    .locals 1

    const/16 v0, 0xc

    .line 62
    invoke-static {v0}, Lcom/huawei/secure/android/common/encrypt/utils/EncryptUtil;->generateSecureRandom(I)[B

    move-result-object v0

    .line 63
    invoke-static {p0, p1, v0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->encrypt([B[B[B)[B

    move-result-object p0

    .line 64
    invoke-static {v0, p0}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->a([B[B)[B

    move-result-object p0

    return-object p0
.end method

.method public static encrypt([B[B[B)[B
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 45
    array-length v1, p0

    if-eqz v1, :cond_1

    if-eqz p1, :cond_1

    array-length v1, p1

    const/16 v2, 0x10

    if-lt v1, v2, :cond_1

    if-eqz p2, :cond_1

    array-length v1, p2

    const/16 v2, 0xc

    if-lt v1, v2, :cond_1

    .line 46
    invoke-static {}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->isBuildVersionHigherThan19()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    .line 51
    :cond_0
    :try_start_0
    new-instance v1, Ljavax/crypto/spec/SecretKeySpec;

    const-string v2, "AES"

    invoke-direct {v1, p1, v2}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string p1, "AES/GCM/NoPadding"

    .line 52
    invoke-static {p1}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object p1

    .line 53
    invoke-static {p2}, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->getGcmAlgorithmParams([B)Ljava/security/spec/AlgorithmParameterSpec;

    move-result-object p2

    const/4 v2, 0x1

    .line 54
    invoke-virtual {p1, v2, v1, p2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 55
    invoke-virtual {p1, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p0
    :try_end_0
    .catch Ljava/security/GeneralSecurityException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 57
    sget-object p1, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "GCM encrypt data error"

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/security/GeneralSecurityException;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    new-array p0, v0, [B

    return-object p0

    .line 60
    :cond_1
    :goto_0
    sget-object p0, Lcom/huawei/secure/android/common/encrypt/aes/AesGcm;->d:Ljava/lang/String;

    const-string p1, "gcm encrypt param is not right"

    invoke-static {p0, p1}, Lcom/huawei/secure/android/common/encrypt/utils/b;->b(Ljava/lang/String;Ljava/lang/String;)V

    new-array p0, v0, [B

    return-object p0
.end method

.method public static getGcmAlgorithmParams([B)Ljava/security/spec/AlgorithmParameterSpec;
    .locals 2

    .line 1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    .line 5
    new-instance v0, Ljavax/crypto/spec/IvParameterSpec;

    invoke-direct {v0, p0}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    return-object v0

    .line 7
    :cond_0
    new-instance v0, Ljavax/crypto/spec/GCMParameterSpec;

    const/16 v1, 0x80

    invoke-direct {v0, v1, p0}, Ljavax/crypto/spec/GCMParameterSpec;-><init>(I[B)V

    return-object v0
.end method

.method public static isBuildVersionHigherThan19()Z
    .locals 2

    .line 1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

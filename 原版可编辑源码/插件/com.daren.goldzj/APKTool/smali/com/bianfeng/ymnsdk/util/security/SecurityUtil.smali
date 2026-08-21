.class public Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;
.super Ljava/lang/Object;
.source "SecurityUtil.java"


# static fields
.field private static final SIGN_APP_SECREAT:Ljava/lang/String; = "c986f7b40c468a3a3b1087d0eb08628b"

.field private static volatile util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;


# instance fields
.field private decodeUtil:Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

.field private hmacUtil:Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

.field private payTokenUtils:Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

.field private rsaSignature:Lcom/bianfeng/ymnsdk/util/security/RSASignature;

.field private urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 1
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 2
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    .line 3
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->hmacUtil:Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

    .line 4
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/RSASignature;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->rsaSignature:Lcom/bianfeng/ymnsdk/util/security/RSASignature;

    .line 5
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->decodeUtil:Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

    .line 6
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->payTokenUtils:Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;
    .locals 2

    .line 1
    sget-object v0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    if-nez v0, :cond_1

    .line 2
    const-class v0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    monitor-enter v0

    .line 3
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    if-nez v1, :cond_0

    .line 4
    new-instance v1, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    .line 6
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 8
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    return-object v0
.end method


# virtual methods
.method addContent(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 1
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    .line 2
    div-int/lit8 v1, v0, 0x10

    mul-int/lit8 v1, v1, 0x10

    sub-int/2addr v0, v1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_0

    .line 4
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "?"

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object p1
.end method

.method public aesDecrypt([BLjava/lang/String;)[B
    .locals 3

    .line 1
    :try_start_0
    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const-string v1, "AES"

    invoke-direct {v0, p2, v1}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string p2, "AES/CBC/PKCS5Padding"

    .line 3
    invoke-static {p2}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object p2

    .line 4
    new-instance v1, Ljavax/crypto/spec/IvParameterSpec;

    const-string v2, "0102030405060708"

    .line 5
    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    const/4 v2, 0x2

    .line 7
    invoke-virtual {p2, v2, v0, v1}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 9
    invoke-virtual {p2, p1}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 11
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public aesEncrypt(Ljava/lang/String;Ljava/lang/String;)[B
    .locals 3
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "TrulyRandom"
        }
    .end annotation

    .line 1
    :try_start_0
    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const-string v1, "AES"

    invoke-direct {v0, p2, v1}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    const-string p2, "AES/CBC/PKCS5Padding"

    .line 2
    invoke-static {p2}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object p2

    const-string v1, "utf-8"

    .line 3
    invoke-virtual {p1, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    .line 4
    new-instance v1, Ljavax/crypto/spec/IvParameterSpec;

    const-string v2, "0102030405060708"

    .line 5
    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-direct {v1, v2}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    const/4 v2, 0x1

    .line 6
    invoke-virtual {p2, v2, v0, v1}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 7
    invoke-virtual {p2, p1}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 9
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    return-object p1
.end method

.method public bytesToHexString([B)Ljava/lang/String;
    .locals 6

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    if-eqz p1, :cond_3

    .line 2
    array-length v1, p1

    if-gtz v1, :cond_0

    goto :goto_1

    :cond_0
    const/4 v1, 0x0

    const/4 v2, 0x0

    .line 4
    :goto_0
    array-length v3, p1

    if-ge v2, v3, :cond_2

    .line 5
    aget-byte v3, p1, v2

    and-int/lit16 v3, v3, 0xff

    .line 6
    invoke-static {v3}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    .line 7
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    const/4 v5, 0x2

    if-ge v4, v5, :cond_1

    .line 8
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 9
    :cond_1
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 11
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_3
    :goto_1
    const/4 p1, 0x0

    return-object p1
.end method

.method charToByte(C)B
    .locals 1

    const-string v0, "0123456789ABCDEF"

    .line 1
    invoke-virtual {v0, p1}, Ljava/lang/String;->indexOf(I)I

    move-result p1

    int-to-byte p1, p1

    return p1
.end method

.method public decode([B)[B
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->decodeUtil:Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;->decode([B)[B

    move-result-object p1

    return-object p1
.end method

.method public doCheck(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->rsaSignature:Lcom/bianfeng/ymnsdk/util/security/RSASignature;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;->doCheck(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public getPaySignatue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getAppId()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "&"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getAppContext()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    invoke-virtual {v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getIdentify_id()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 4
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppKey()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 6
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    const-string p1, ""

    return-object p1
.end method

.method public getPayToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->payTokenUtils:Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;->getPayToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getSign(Ljava/util/TreeMap;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    const-string v0, "c986f7b40c468a3a3b1087d0eb08628b"

    .line 1
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getSign(Ljava/util/TreeMap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getSign(Ljava/util/TreeMap;Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/TreeMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 3
    invoke-virtual {p1}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 4
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 5
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 6
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 7
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 8
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "="

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "&"

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 10
    :cond_0
    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 11
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public hexStringToBytes(Ljava/lang/String;)[B
    .locals 5

    if-eqz p1, :cond_2

    const-string v0, ""

    .line 1
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 3
    :cond_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->toUpperCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p1

    .line 4
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    div-int/lit8 v0, v0, 0x2

    .line 5
    invoke-virtual {p1}, Ljava/lang/String;->toCharArray()[C

    move-result-object p1

    .line 6
    new-array v1, v0, [B

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v0, :cond_1

    mul-int/lit8 v3, v2, 0x2

    .line 9
    aget-char v4, p1, v3

    invoke-virtual {p0, v4}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->charToByte(C)B

    move-result v4

    shl-int/lit8 v4, v4, 0x4

    add-int/lit8 v3, v3, 0x1

    aget-char v3, p1, v3

    invoke-virtual {p0, v3}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->charToByte(C)B

    move-result v3

    or-int/2addr v3, v4

    int-to-byte v3, v3

    aput-byte v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v1

    :cond_2
    :goto_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public md5(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    const/16 v0, 0x20

    .line 10
    :try_start_0
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 12
    new-instance v0, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v0, p1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method public md5(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    :try_start_0
    const-string v0, "MD5.algorithm"

    const-string v1, "MD5"

    .line 1
    invoke-static {v0, v1}, Ljava/lang/System;->getProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v0

    const-string v1, "utf-8"

    .line 3
    invoke-virtual {p1, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object p1

    const/16 v0, 0x10

    if-ne p2, v0, :cond_0

    .line 5
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p1

    const/16 p2, 0x8

    const/16 v0, 0x18

    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 7
    :cond_0
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 9
    new-instance p2, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {p2, p1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw p2
.end method

.method public mixByte([B)V
    .locals 8

    const/4 v0, 0x1

    const/4 v1, 0x1

    .line 1
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_1

    add-int/lit8 v2, v1, -0x1

    .line 3
    aget-byte v3, p1, v2

    and-int/lit16 v3, v3, 0xf0

    .line 4
    aget-byte v4, p1, v2

    and-int/lit8 v4, v4, 0xf

    .line 6
    aget-byte v5, p1, v1

    and-int/lit16 v5, v5, 0xf0

    .line 7
    aget-byte v6, p1, v1

    and-int/lit8 v6, v6, 0xf

    and-int/lit8 v7, v1, 0x1

    if-ne v7, v0, :cond_0

    or-int/2addr v3, v6

    int-to-byte v3, v3

    .line 10
    aput-byte v3, p1, v1

    or-int v3, v5, v4

    int-to-byte v3, v3

    .line 11
    aput-byte v3, p1, v2

    goto :goto_1

    :cond_0
    or-int/2addr v4, v5

    int-to-byte v4, v4

    .line 15
    aput-byte v4, p1, v1

    or-int/2addr v3, v6

    int-to-byte v3, v3

    .line 16
    aput-byte v3, p1, v2

    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public mixDecrypt(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->hexStringToBytes(Ljava/lang/String;)[B

    move-result-object p1

    .line 2
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->resolveByte([B)V

    const-string v0, "linxcool_aes_mix"

    .line 3
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->aesDecrypt([BLjava/lang/String;)[B

    move-result-object p1

    .line 4
    new-instance v0, Ljava/lang/String;

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->reduceCotent(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public mixEncrypt(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->addContent(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "linxcool_aes_mix"

    .line 2
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->aesEncrypt(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object p1

    .line 3
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->mixByte([B)V

    .line 4
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->bytesToHexString([B)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method reduceCotent(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, ""

    const/4 v1, 0x0

    .line 1
    :goto_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 2
    invoke-virtual {p1, v1}, Ljava/lang/String;->charAt(I)C

    move-result v2

    const/16 v3, 0x3f

    if-eq v2, v3, :cond_0

    .line 3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0
.end method

.method public resolveByte([B)V
    .locals 8

    .line 1
    array-length v0, p1

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    :goto_0
    if-lez v0, :cond_1

    add-int/lit8 v2, v0, -0x1

    .line 3
    aget-byte v3, p1, v2

    and-int/lit16 v3, v3, 0xf0

    .line 4
    aget-byte v4, p1, v2

    and-int/lit8 v4, v4, 0xf

    .line 6
    aget-byte v5, p1, v0

    and-int/lit16 v5, v5, 0xf0

    .line 7
    aget-byte v6, p1, v0

    and-int/lit8 v6, v6, 0xf

    and-int/lit8 v7, v0, 0x1

    if-ne v7, v1, :cond_0

    or-int/2addr v3, v6

    int-to-byte v3, v3

    .line 10
    aput-byte v3, p1, v0

    or-int v3, v5, v4

    int-to-byte v3, v3

    .line 11
    aput-byte v3, p1, v2

    goto :goto_1

    :cond_0
    or-int/2addr v4, v5

    int-to-byte v4, v4

    .line 13
    aput-byte v4, p1, v0

    or-int/2addr v3, v6

    int-to-byte v3, v3

    .line 14
    aput-byte v3, p1, v2

    :goto_1
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public sha256_HMAC(Ljava/lang/String;Ljava/lang/String;)[B
    .locals 1

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->hmacUtil:Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;->sha256_HMAC(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object p1

    return-object p1
.end method

.method public urlDecoder(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public urlEncode(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

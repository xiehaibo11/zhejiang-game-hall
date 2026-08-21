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

    .line 45
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 46
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    .line 47
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->hmacUtil:Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

    .line 48
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/RSASignature;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->rsaSignature:Lcom/bianfeng/ymnsdk/util/security/RSASignature;

    .line 49
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->decodeUtil:Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

    .line 50
    new-instance v0, Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->payTokenUtils:Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

    .line 51
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;
    .locals 2

    .line 28
    sget-object v0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    if-nez v0, :cond_1

    .line 29
    const-class v0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    monitor-enter v0

    .line 30
    :try_start_0
    sget-object v1, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    if-nez v1, :cond_0

    .line 31
    new-instance v1, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    .line 33
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->util:Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    return-object v0
.end method


# virtual methods
.method addContent(Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p1, "content"    # Ljava/lang/String;

    .line 178
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    .line 179
    .local v0, "srcLen":I
    div-int/lit8 v1, v0, 0x10

    mul-int/lit8 v1, v1, 0x10

    sub-int v1, v0, v1

    .line 180
    .local v1, "addedLen":I
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    if-ge v2, v1, :cond_0

    .line 181
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "?"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 180
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 183
    .end local v2    # "i":I
    :cond_0
    return-object p1
.end method

.method public aesDecrypt([BLjava/lang/String;)[B
    .locals 4
    .param p1, "str"    # [B
    .param p2, "in"    # Ljava/lang/String;

    .line 156
    :try_start_0
    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const-string v2, "AES"

    invoke-direct {v0, v1, v2}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    .line 158
    .local v0, "key":Ljavax/crypto/spec/SecretKeySpec;
    const-string v1, "AES/CBC/PKCS5Padding"

    invoke-static {v1}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v1

    .line 159
    .local v1, "cipher":Ljavax/crypto/Cipher;
    new-instance v2, Ljavax/crypto/spec/IvParameterSpec;

    const-string v3, "0102030405060708"

    .line 160
    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-direct {v2, v3}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    .line 162
    .local v2, "zeroIv":Ljavax/crypto/spec/IvParameterSpec;
    const/4 v3, 0x2

    invoke-virtual {v1, v3, v0, v2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 164
    invoke-virtual {v1, p1}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v3

    .line 165
    .end local v0    # "key":Ljavax/crypto/spec/SecretKeySpec;
    .end local v1    # "cipher":Ljavax/crypto/Cipher;
    .end local v2    # "zeroIv":Ljavax/crypto/spec/IvParameterSpec;
    :catch_0
    move-exception v0

    .line 166
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 167
    const/4 v1, 0x0

    return-object v1
.end method

.method public aesEncrypt(Ljava/lang/String;Ljava/lang/String;)[B
    .locals 5
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "in"    # Ljava/lang/String;
    .annotation build Landroid/annotation/SuppressLint;
        value = {
            "TrulyRandom"
        }
    .end annotation

    .line 134
    :try_start_0
    new-instance v0, Ljavax/crypto/spec/SecretKeySpec;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const-string v2, "AES"

    invoke-direct {v0, v1, v2}, Ljavax/crypto/spec/SecretKeySpec;-><init>([BLjava/lang/String;)V

    .line 135
    .local v0, "key":Ljavax/crypto/spec/SecretKeySpec;
    const-string v1, "AES/CBC/PKCS5Padding"

    invoke-static {v1}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v1

    .line 136
    .local v1, "cipher":Ljavax/crypto/Cipher;
    const-string v2, "utf-8"

    invoke-virtual {p1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    .line 137
    .local v2, "byteContent":[B
    new-instance v3, Ljavax/crypto/spec/IvParameterSpec;

    const-string v4, "0102030405060708"

    .line 138
    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-direct {v3, v4}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    .line 139
    .local v3, "zeroIv":Ljavax/crypto/spec/IvParameterSpec;
    const/4 v4, 0x1

    invoke-virtual {v1, v4, v0, v3}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 140
    invoke-virtual {v1, v2}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v4

    .line 141
    .end local v0    # "key":Ljavax/crypto/spec/SecretKeySpec;
    .end local v1    # "cipher":Ljavax/crypto/Cipher;
    .end local v2    # "byteContent":[B
    .end local v3    # "zeroIv":Ljavax/crypto/spec/IvParameterSpec;
    :catch_0
    move-exception v0

    .line 142
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 143
    const/4 v1, 0x0

    return-object v1
.end method

.method public bytesToHexString([B)Ljava/lang/String;
    .locals 6
    .param p1, "src"    # [B

    .line 60
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 61
    .local v0, "sb":Ljava/lang/StringBuilder;
    if-eqz p1, :cond_3

    array-length v1, p1

    if-gtz v1, :cond_0

    goto :goto_1

    .line 63
    :cond_0
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p1

    if-ge v1, v2, :cond_2

    .line 64
    aget-byte v2, p1, v1

    and-int/lit16 v2, v2, 0xff

    .line 65
    .local v2, "v":I
    invoke-static {v2}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v3

    .line 66
    .local v3, "hv":Ljava/lang/String;
    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v4

    const/4 v5, 0x2

    if-ge v4, v5, :cond_1

    .line 67
    const/4 v4, 0x0

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 68
    :cond_1
    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 63
    .end local v2    # "v":I
    .end local v3    # "hv":Ljava/lang/String;
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 70
    .end local v1    # "i":I
    :cond_2
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 62
    :cond_3
    :goto_1
    const/4 v1, 0x0

    return-object v1
.end method

.method charToByte(C)B
    .locals 1
    .param p1, "c"    # C

    .line 94
    const-string v0, "0123456789ABCDEF"

    invoke-virtual {v0, p1}, Ljava/lang/String;->indexOf(I)I

    move-result v0

    int-to-byte v0, v0

    return v0
.end method

.method public decode([B)[B
    .locals 1
    .param p1, "in"    # [B

    .line 326
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->decodeUtil:Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/security/DecodeUtil;->decode([B)[B

    move-result-object v0

    return-object v0
.end method

.method public doCheck(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "sign"    # Ljava/lang/String;

    .line 322
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->rsaSignature:Lcom/bianfeng/ymnsdk/util/security/RSASignature;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;->doCheck(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public getPaySignatue(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p1, "httpData"    # Ljava/lang/String;
    .param p2, "trace"    # Ljava/lang/String;

    .line 345
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

    .line 346
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

    .line 348
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppKey()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 350
    .local v0, "data":Ljava/lang/String;
    :try_start_0
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 351
    :catch_0
    move-exception v1

    .line 353
    const-string v1, ""

    return-object v1
.end method

.method public getPayToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "header"    # Ljava/lang/String;
    .param p2, "payload"    # Ljava/lang/String;

    .line 336
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->payTokenUtils:Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;->getPayToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
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

    .line 282
    .local p1, "map":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v0, "c986f7b40c468a3a3b1087d0eb08628b"

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getSign(Ljava/util/TreeMap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public getSign(Ljava/util/TreeMap;Ljava/lang/String;)Ljava/lang/String;
    .locals 7
    .param p2, "appSecret"    # Ljava/lang/String;
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

    .line 291
    .local p1, "map":Ljava/util/TreeMap;, "Ljava/util/TreeMap<Ljava/lang/String;Ljava/lang/String;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 292
    .local v0, "sb":Ljava/lang/StringBuilder;
    invoke-virtual {p1}, Ljava/util/TreeMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    .line 293
    .local v1, "iter":Ljava/util/Iterator;, "Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;>;"
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 294
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 295
    .local v2, "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 296
    .local v3, "key":Ljava/lang/String;
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 297
    .local v4, "value":Ljava/lang/String;
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "&"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 298
    .end local v2    # "entry":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    .end local v3    # "key":Ljava/lang/String;
    .end local v4    # "value":Ljava/lang/String;
    goto :goto_0

    .line 299
    :cond_0
    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 300
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    return-object v2
.end method

.method public hexStringToBytes(Ljava/lang/String;)[B
    .locals 7
    .param p1, "str"    # Ljava/lang/String;

    .line 80
    if-eqz p1, :cond_2

    const-string v0, ""

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 82
    :cond_0
    invoke-static {}, Ljava/util/Locale;->getDefault()Ljava/util/Locale;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->toUpperCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p1

    .line 83
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    div-int/lit8 v0, v0, 0x2

    .line 84
    .local v0, "length":I
    invoke-virtual {p1}, Ljava/lang/String;->toCharArray()[C

    move-result-object v1

    .line 85
    .local v1, "hexChars":[C
    new-array v2, v0, [B

    .line 86
    .local v2, "d":[B
    const/4 v3, 0x0

    .local v3, "i":I
    :goto_0
    if-ge v3, v0, :cond_1

    .line 87
    mul-int/lit8 v4, v3, 0x2

    .line 88
    .local v4, "pos":I
    aget-char v5, v1, v4

    invoke-virtual {p0, v5}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->charToByte(C)B

    move-result v5

    shl-int/lit8 v5, v5, 0x4

    add-int/lit8 v6, v4, 0x1

    aget-char v6, v1, v6

    invoke-virtual {p0, v6}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->charToByte(C)B

    move-result v6

    or-int/2addr v5, v6

    int-to-byte v5, v5

    aput-byte v5, v2, v3

    .line 86
    .end local v4    # "pos":I
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    .line 90
    .end local v3    # "i":I
    :cond_1
    return-object v2

    .line 81
    .end local v0    # "length":I
    .end local v1    # "hexChars":[C
    .end local v2    # "d":[B
    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public md5(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "input"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 119
    const/16 v0, 0x20

    :try_start_0
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->md5(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 120
    :catch_0
    move-exception v0

    .line 121
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public md5(Ljava/lang/String;I)Ljava/lang/String;
    .locals 6
    .param p1, "input"    # Ljava/lang/String;
    .param p2, "bit"    # I
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 105
    :try_start_0
    const-string v0, "MD5.algorithm"

    const-string v1, "MD5"

    invoke-static {v0, v1}, Ljava/lang/System;->getProperty(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 106
    .local v0, "algorithm":Ljava/lang/String;
    invoke-static {v0}, Ljava/security/MessageDigest;->getInstance(Ljava/lang/String;)Ljava/security/MessageDigest;

    move-result-object v1

    .line 107
    .local v1, "md":Ljava/security/MessageDigest;
    const-string v2, "utf-8"

    invoke-virtual {p1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/security/MessageDigest;->digest([B)[B

    move-result-object v2

    .line 108
    .local v2, "bs":[B
    const/16 v3, 0x10

    if-ne p2, v3, :cond_0

    .line 109
    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v3

    const/16 v4, 0x8

    const/16 v5, 0x18

    invoke-virtual {v3, v4, v5}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    return-object v3

    .line 111
    :cond_0
    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v3

    .line 112
    .end local v0    # "algorithm":Ljava/lang/String;
    .end local v1    # "md":Ljava/security/MessageDigest;
    .end local v2    # "bs":[B
    :catch_0
    move-exception v0

    .line 113
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public mixByte([B)V
    .locals 7
    .param p1, "bytes"    # [B

    .line 211
    const/4 v0, 0x1

    .local v0, "i":I
    :goto_0
    array-length v1, p1

    if-ge v0, v1, :cond_1

    .line 213
    add-int/lit8 v1, v0, -0x1

    aget-byte v1, p1, v1

    and-int/lit16 v1, v1, 0xf0

    .line 214
    .local v1, "pMSB":I
    add-int/lit8 v2, v0, -0x1

    aget-byte v2, p1, v2

    and-int/lit8 v2, v2, 0xf

    .line 216
    .local v2, "pLSB":I
    aget-byte v3, p1, v0

    and-int/lit16 v3, v3, 0xf0

    .line 217
    .local v3, "cMSB":I
    aget-byte v4, p1, v0

    and-int/lit8 v4, v4, 0xf

    .line 219
    .local v4, "cLSB":I
    and-int/lit8 v5, v0, 0x1

    const/4 v6, 0x1

    if-ne v5, v6, :cond_0

    .line 220
    or-int v5, v1, v4

    int-to-byte v5, v5

    aput-byte v5, p1, v0

    .line 221
    add-int/lit8 v5, v0, -0x1

    or-int v6, v3, v2

    int-to-byte v6, v6

    aput-byte v6, p1, v5

    goto :goto_1

    .line 225
    :cond_0
    or-int v5, v3, v2

    int-to-byte v5, v5

    aput-byte v5, p1, v0

    .line 226
    add-int/lit8 v5, v0, -0x1

    or-int v6, v1, v4

    int-to-byte v6, v6

    aput-byte v6, p1, v5

    .line 211
    .end local v1    # "pMSB":I
    .end local v2    # "pLSB":I
    .end local v3    # "cMSB":I
    .end local v4    # "cLSB":I
    :goto_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 229
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method public mixDecrypt(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "in"    # Ljava/lang/String;

    .line 275
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->hexStringToBytes(Ljava/lang/String;)[B

    move-result-object v0

    .line 276
    .local v0, "bytes":[B
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->resolveByte([B)V

    .line 277
    const-string v1, "linxcool_aes_mix"

    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->aesDecrypt([BLjava/lang/String;)[B

    move-result-object v0

    .line 278
    new-instance v1, Ljava/lang/String;

    invoke-direct {v1, v0}, Ljava/lang/String;-><init>([B)V

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->reduceCotent(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method public mixEncrypt(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p1, "in"    # Ljava/lang/String;

    .line 262
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->addContent(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 263
    const-string v0, "linxcool_aes_mix"

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->aesEncrypt(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v0

    .line 264
    .local v0, "bytes":[B
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->mixByte([B)V

    .line 265
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->bytesToHexString([B)Ljava/lang/String;

    move-result-object v1

    return-object v1
.end method

.method reduceCotent(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .param p1, "content"    # Ljava/lang/String;

    .line 193
    const-string v0, ""

    .line 194
    .local v0, "rs":Ljava/lang/String;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 195
    invoke-virtual {p1, v1}, Ljava/lang/String;->charAt(I)C

    move-result v2

    .line 196
    .local v2, "c":C
    const/16 v3, 0x3f

    if-eq v2, v3, :cond_0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 194
    .end local v2    # "c":C
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 197
    .restart local v2    # "c":C
    :cond_0
    return-object v0

    .line 199
    .end local v1    # "i":I
    .end local v2    # "c":C
    :cond_1
    return-object v0
.end method

.method public resolveByte([B)V
    .locals 8
    .param p1, "bytes"    # [B

    .line 237
    array-length v0, p1

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    .local v0, "i":I
    :goto_0
    if-lez v0, :cond_1

    .line 239
    add-int/lit8 v2, v0, -0x1

    aget-byte v2, p1, v2

    and-int/lit16 v2, v2, 0xf0

    .line 240
    .local v2, "pMSB":I
    add-int/lit8 v3, v0, -0x1

    aget-byte v3, p1, v3

    and-int/lit8 v3, v3, 0xf

    .line 242
    .local v3, "pLSB":I
    aget-byte v4, p1, v0

    and-int/lit16 v4, v4, 0xf0

    .line 243
    .local v4, "cMSB":I
    aget-byte v5, p1, v0

    and-int/lit8 v5, v5, 0xf

    .line 245
    .local v5, "cLSB":I
    and-int/lit8 v6, v0, 0x1

    if-ne v6, v1, :cond_0

    .line 246
    or-int v6, v2, v5

    int-to-byte v6, v6

    aput-byte v6, p1, v0

    .line 247
    add-int/lit8 v6, v0, -0x1

    or-int v7, v4, v3

    int-to-byte v7, v7

    aput-byte v7, p1, v6

    goto :goto_1

    .line 249
    :cond_0
    or-int v6, v4, v3

    int-to-byte v6, v6

    aput-byte v6, p1, v0

    .line 250
    add-int/lit8 v6, v0, -0x1

    or-int v7, v2, v5

    int-to-byte v7, v7

    aput-byte v7, p1, v6

    .line 237
    .end local v2    # "pMSB":I
    .end local v3    # "pLSB":I
    .end local v4    # "cMSB":I
    .end local v5    # "cLSB":I
    :goto_1
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    .line 253
    .end local v0    # "i":I
    :cond_1
    return-void
.end method

.method public sha256_HMAC(Ljava/lang/String;Ljava/lang/String;)[B
    .locals 1
    .param p1, "message"    # Ljava/lang/String;
    .param p2, "secret"    # Ljava/lang/String;

    .line 318
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->hmacUtil:Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;

    invoke-virtual {v0, p1, p2}, Lcom/bianfeng/ymnsdk/util/security/SHA256_HMACUtil;->sha256_HMAC(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v0

    return-object v0
.end method

.method public urlDecoder(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "str"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 307
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public urlEncode(Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "str"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 314
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoderUtils:Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/util/security/URLDecoderUtils;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

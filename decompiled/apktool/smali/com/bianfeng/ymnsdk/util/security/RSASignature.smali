.class public Lcom/bianfeng/ymnsdk/util/security/RSASignature;
.super Ljava/lang/Object;
.source "RSASignature.java"


# static fields
.field public static final PUBLICKEY:Ljava/lang/String; = "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDyesxvCKEiWA2ie4QpGN9xCtI8q6HqmspYl+4aN8YRTS1adT4pxrvw3ZXMleBA+AFL9ZZzt40Vkgq893wO4jT23UdoSkLfRajHMfCyKZP7cxmrok7YSGFiyBdsucJ+IbbE//H+egha6ixbv14TO6ObCBjn6EVjLqccrGOUVoikbwIDAQAB"

.field public static final SIGN_ALGORITHMS:Ljava/lang/String; = "SHA1WithRSA"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public doCheck(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "sign"    # Ljava/lang/String;

    .line 52
    const-string v0, "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDyesxvCKEiWA2ie4QpGN9xCtI8q6HqmspYl+4aN8YRTS1adT4pxrvw3ZXMleBA+AFL9ZZzt40Vkgq893wO4jT23UdoSkLfRajHMfCyKZP7cxmrok7YSGFiyBdsucJ+IbbE//H+egha6ixbv14TO6ObCBjn6EVjLqccrGOUVoikbwIDAQAB"

    const-string v1, "UTF-8"

    invoke-virtual {p0, p1, p2, v0, v1}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;->verify(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public doCheck(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "sign"    # Ljava/lang/String;
    .param p3, "publicKey"    # Ljava/lang/String;

    .line 57
    const-string v0, "UTF-8"

    invoke-virtual {p0, p1, p2, p3, v0}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;->verify(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public sign(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "privateKey"    # Ljava/lang/String;

    .line 25
    const-string v0, "UTF-8"

    invoke-virtual {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/util/security/RSASignature;->sign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public sign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "privateKey"    # Ljava/lang/String;
    .param p3, "encode"    # Ljava/lang/String;

    .line 37
    :try_start_0
    new-instance v0, Ljava/security/spec/PKCS8EncodedKeySpec;

    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/security/Base64;->decode(Ljava/lang/String;)[B

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/security/spec/PKCS8EncodedKeySpec;-><init>([B)V

    .line 38
    .local v0, "priPKCS8":Ljava/security/spec/PKCS8EncodedKeySpec;
    const-string v1, "RSA"

    invoke-static {v1}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v1

    .line 39
    .local v1, "keyf":Ljava/security/KeyFactory;
    invoke-virtual {v1, v0}, Ljava/security/KeyFactory;->generatePrivate(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;

    move-result-object v2

    .line 40
    .local v2, "priKey":Ljava/security/PrivateKey;
    const-string v3, "SHA1WithRSA"

    invoke-static {v3}, Ljava/security/Signature;->getInstance(Ljava/lang/String;)Ljava/security/Signature;

    move-result-object v3

    .line 41
    .local v3, "signature":Ljava/security/Signature;
    invoke-virtual {v3, v2}, Ljava/security/Signature;->initSign(Ljava/security/PrivateKey;)V

    .line 42
    invoke-virtual {p1, p3}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/security/Signature;->update([B)V

    .line 44
    invoke-virtual {v3}, Ljava/security/Signature;->sign()[B

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/security/Base64;->encode([B)Ljava/lang/String;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v4

    .line 45
    .end local v0    # "priPKCS8":Ljava/security/spec/PKCS8EncodedKeySpec;
    .end local v1    # "keyf":Ljava/security/KeyFactory;
    .end local v2    # "priKey":Ljava/security/PrivateKey;
    .end local v3    # "signature":Ljava/security/Signature;
    :catch_0
    move-exception v0

    .line 46
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 48
    .end local v0    # "e":Ljava/lang/Exception;
    const/4 v0, 0x0

    return-object v0
.end method

.method public verify(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 5
    .param p1, "content"    # Ljava/lang/String;
    .param p2, "sign"    # Ljava/lang/String;
    .param p3, "ali_public_key"    # Ljava/lang/String;
    .param p4, "input_charset"    # Ljava/lang/String;

    .line 72
    :try_start_0
    const-string v0, "RSA"

    invoke-static {v0}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v0

    .line 73
    .local v0, "keyFactory":Ljava/security/KeyFactory;
    invoke-static {p3}, Lcom/bianfeng/ymnsdk/util/security/Base64;->decode(Ljava/lang/String;)[B

    move-result-object v1

    .line 74
    .local v1, "encodedKey":[B
    new-instance v2, Ljava/security/spec/X509EncodedKeySpec;

    invoke-direct {v2, v1}, Ljava/security/spec/X509EncodedKeySpec;-><init>([B)V

    invoke-virtual {v0, v2}, Ljava/security/KeyFactory;->generatePublic(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;

    move-result-object v2

    .line 76
    .local v2, "pubKey":Ljava/security/PublicKey;
    const-string v3, "SHA1WithRSA"

    invoke-static {v3}, Ljava/security/Signature;->getInstance(Ljava/lang/String;)Ljava/security/Signature;

    move-result-object v3

    .line 77
    .local v3, "signature":Ljava/security/Signature;
    invoke-virtual {v3, v2}, Ljava/security/Signature;->initVerify(Ljava/security/PublicKey;)V

    .line 78
    invoke-virtual {p1, p4}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/security/Signature;->update([B)V

    .line 80
    invoke-static {p2}, Lcom/bianfeng/ymnsdk/util/security/Base64;->decode(Ljava/lang/String;)[B

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/security/Signature;->verify([B)Z

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 81
    .local v4, "bverify":Z
    return v4

    .line 83
    .end local v0    # "keyFactory":Ljava/security/KeyFactory;
    .end local v1    # "encodedKey":[B
    .end local v2    # "pubKey":Ljava/security/PublicKey;
    .end local v3    # "signature":Ljava/security/Signature;
    .end local v4    # "bverify":Z
    :catch_0
    move-exception v0

    .line 85
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 87
    .end local v0    # "e":Ljava/lang/Exception;
    const/4 v0, 0x0

    return v0
.end method

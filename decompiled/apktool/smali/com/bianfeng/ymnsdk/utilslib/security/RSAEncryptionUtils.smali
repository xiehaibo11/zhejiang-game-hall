.class public Lcom/bianfeng/ymnsdk/utilslib/security/RSAEncryptionUtils;
.super Ljava/lang/Object;
.source "RSAEncryptionUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static decrypt([BLjava/security/PrivateKey;)[B
    .locals 2
    .param p0, "encryptedData"    # [B
    .param p1, "privateKey"    # Ljava/security/PrivateKey;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 38
    const-string v0, "RSA/ECB/PKCS1Padding"

    invoke-static {v0}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v0

    .line 39
    .local v0, "cipher":Ljavax/crypto/Cipher;
    const/4 v1, 0x2

    invoke-virtual {v0, v1, p1}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    .line 40
    invoke-virtual {v0, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v1

    return-object v1
.end method

.method private static encrypt([BLjava/security/PublicKey;)[B
    .locals 2
    .param p0, "data"    # [B
    .param p1, "publicKey"    # Ljava/security/PublicKey;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 31
    const-string v0, "RSA/ECB/PKCS1Padding"

    invoke-static {v0}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v0

    .line 32
    .local v0, "cipher":Ljavax/crypto/Cipher;
    const/4 v1, 0x1

    invoke-virtual {v0, v1, p1}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    .line 33
    invoke-virtual {v0, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v1

    return-object v1
.end method

.method public static getEncryptStringAndBase64(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 5
    .param p0, "pubicKey"    # Ljava/lang/String;
    .param p1, "contentString"    # Ljava/lang/String;

    .line 44
    const-string v0, "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCW4Yx58hmtadmu6d1HzEyRqO0Hik7JGyXc7ibxBokIUSeUTJcbksGaartCzfzXZzHF5zhuXosf3HFzPekJqf7HxIdXUAC4QWlgNT+WZ91cW4H5r0tObhuBges3n2xk+eEi1aowTR8WTOvfKPeYuLw1zG8WrMnugQHbp2UMZf7h4wIDAQAB"

    .line 45
    .local v0, "PUBLIC_KEY_STRING":Ljava/lang/String;
    if-eqz p0, :cond_0

    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 46
    :cond_0
    move-object p0, v0

    .line 50
    :cond_1
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/RSAEncryptionUtils;->loadPublicKey(Ljava/lang/String;)Ljava/security/PublicKey;

    move-result-object v1

    .line 53
    .local v1, "publicKey":Ljava/security/PublicKey;
    const-string v2, "UTF-8"

    invoke-virtual {p1, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v2

    .line 55
    .local v2, "data":[B
    invoke-static {v2, v1}, Lcom/bianfeng/ymnsdk/utilslib/security/RSAEncryptionUtils;->encrypt([BLjava/security/PublicKey;)[B

    move-result-object v3

    .line 56
    .local v3, "encryptedData":[B
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->encode([B)Ljava/lang/String;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 63
    .local v4, "encryptedString":Ljava/lang/String;
    return-object v4

    .line 64
    .end local v1    # "publicKey":Ljava/security/PublicKey;
    .end local v2    # "data":[B
    .end local v3    # "encryptedData":[B
    .end local v4    # "encryptedString":Ljava/lang/String;
    :catch_0
    move-exception v1

    .line 65
    .local v1, "e":Ljava/lang/Exception;
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 67
    .end local v1    # "e":Ljava/lang/Exception;
    const-string v1, ""

    return-object v1
.end method

.method private static loadPrivateKey(Ljava/lang/String;)Ljava/security/PrivateKey;
    .locals 4
    .param p0, "privateKeyStr"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 23
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->decode(Ljava/lang/String;)[B

    move-result-object v0

    .line 24
    .local v0, "privateKeyBytes":[B
    new-instance v1, Ljava/security/spec/PKCS8EncodedKeySpec;

    invoke-direct {v1, v0}, Ljava/security/spec/PKCS8EncodedKeySpec;-><init>([B)V

    .line 25
    .local v1, "spec":Ljava/security/spec/PKCS8EncodedKeySpec;
    const-string v2, "RSA"

    invoke-static {v2}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v2

    .line 26
    .local v2, "keyFactory":Ljava/security/KeyFactory;
    invoke-virtual {v2, v1}, Ljava/security/KeyFactory;->generatePrivate(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;

    move-result-object v3

    return-object v3
.end method

.method private static loadPublicKey(Ljava/lang/String;)Ljava/security/PublicKey;
    .locals 4
    .param p0, "publicKeyStr"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 15
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/Base64;->decode(Ljava/lang/String;)[B

    move-result-object v0

    .line 16
    .local v0, "publicKeyBytes":[B
    new-instance v1, Ljava/security/spec/X509EncodedKeySpec;

    invoke-direct {v1, v0}, Ljava/security/spec/X509EncodedKeySpec;-><init>([B)V

    .line 17
    .local v1, "spec":Ljava/security/spec/X509EncodedKeySpec;
    const-string v2, "RSA"

    invoke-static {v2}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v2

    .line 18
    .local v2, "keyFactory":Ljava/security/KeyFactory;
    invoke-virtual {v2, v1}, Ljava/security/KeyFactory;->generatePublic(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;

    move-result-object v3

    return-object v3
.end method

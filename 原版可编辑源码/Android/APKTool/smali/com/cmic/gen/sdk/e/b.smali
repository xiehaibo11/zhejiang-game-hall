.class public Lcom/cmic/gen/sdk/e/b;
.super Ljava/lang/Object;
.source "KeystoreUtil.java"


# static fields
.field private static a:[B


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method static a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 117
    invoke-static {}, Lcom/cmic/gen/sdk/e/b;->a()V

    .line 118
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/b;->b(Landroid/content/Context;)[B

    move-result-object p0

    if-eqz p0, :cond_0

    .line 120
    sget-object v0, Lcom/cmic/gen/sdk/e/b;->a:[B

    invoke-static {p0, p1, v0}, Lcom/cmic/gen/sdk/e/a;->a([BLjava/lang/String;[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 122
    :cond_0
    invoke-static {}, Lcom/cmic/gen/sdk/e/b;->a()V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static a()V
    .locals 1

    const-string v0, "AES_KEY"

    .line 209
    invoke-static {v0}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;)V

    return-void
.end method

.method private static a(Landroid/content/Context;)Z
    .locals 11

    .line 69
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const-wide/16 v1, 0x3e8

    const-string v3, "CMCC_SDK_V1"

    const-string v4, "KeystoreUtil"

    const-string v5, "AndroidKeyStore"

    const/4 v6, 0x1

    const/4 v7, 0x0

    const/16 v8, 0x17

    if-lt v0, v8, :cond_0

    :try_start_0
    const-string p0, "AES"

    .line 71
    invoke-static {p0, v5}, Ljavax/crypto/KeyGenerator;->getInstance(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;

    move-result-object p0

    .line 72
    new-instance v0, Landroid/security/keystore/KeyGenParameterSpec$Builder;

    const/4 v5, 0x3

    invoke-direct {v0, v3, v5}, Landroid/security/keystore/KeyGenParameterSpec$Builder;-><init>(Ljava/lang/String;I)V

    const/4 v3, 0x2

    new-array v3, v3, [Ljava/lang/String;

    const-string v5, "SHA-256"

    aput-object v5, v3, v7

    const-string v5, "SHA-512"

    aput-object v5, v3, v6

    .line 73
    invoke-virtual {v0, v3}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setDigests([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v0

    new-array v3, v6, [Ljava/lang/String;

    const-string v5, "CBC"

    aput-object v5, v3, v7

    .line 74
    invoke-virtual {v0, v3}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setBlockModes([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v0

    new-array v3, v6, [Ljava/lang/String;

    const-string v5, "PKCS7Padding"

    aput-object v5, v3, v7

    .line 75
    invoke-virtual {v0, v3}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setEncryptionPaddings([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v0

    .line 76
    invoke-virtual {v0, v7}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setRandomizedEncryptionRequired(Z)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v0

    const/16 v3, 0x100

    .line 77
    invoke-virtual {v0, v3}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setKeySize(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v0

    .line 78
    invoke-virtual {v0}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->build()Landroid/security/keystore/KeyGenParameterSpec;

    move-result-object v0

    .line 79
    invoke-virtual {p0, v0}, Ljavax/crypto/KeyGenerator;->init(Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 80
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V

    .line 81
    invoke-virtual {p0}, Ljavax/crypto/KeyGenerator;->generateKey()Ljavax/crypto/SecretKey;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v6

    :catch_0
    move-exception p0

    .line 84
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v7

    .line 88
    :cond_0
    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v0

    .line 89
    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v8

    const/16 v9, 0x1e

    .line 90
    invoke-virtual {v8, v6, v9}, Ljava/util/Calendar;->add(II)V

    .line 92
    :try_start_1
    sget v9, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v10, 0x12

    if-lt v9, v10, :cond_1

    .line 93
    new-instance v9, Landroid/security/KeyPairGeneratorSpec$Builder;

    invoke-direct {v9, p0}, Landroid/security/KeyPairGeneratorSpec$Builder;-><init>(Landroid/content/Context;)V

    .line 94
    invoke-virtual {v9, v3}, Landroid/security/KeyPairGeneratorSpec$Builder;->setAlias(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    new-instance v3, Ljavax/security/auth/x500/X500Principal;

    const-string v9, "CN=CMCC_SDK_V1"

    invoke-direct {v3, v9}, Ljavax/security/auth/x500/X500Principal;-><init>(Ljava/lang/String;)V

    .line 95
    invoke-virtual {p0, v3}, Landroid/security/KeyPairGeneratorSpec$Builder;->setSubject(Ljavax/security/auth/x500/X500Principal;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    sget-object v3, Ljava/math/BigInteger;->TEN:Ljava/math/BigInteger;

    .line 96
    invoke-virtual {p0, v3}, Landroid/security/KeyPairGeneratorSpec$Builder;->setSerialNumber(Ljava/math/BigInteger;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    .line 97
    invoke-virtual {v0}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setStartDate(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    .line 98
    invoke-virtual {v8}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setEndDate(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    .line 99
    invoke-virtual {p0}, Landroid/security/KeyPairGeneratorSpec$Builder;->build()Landroid/security/KeyPairGeneratorSpec;

    move-result-object p0

    const-string v0, "RSA"

    .line 100
    invoke-static {v0, v5}, Ljava/security/KeyPairGenerator;->getInstance(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;

    move-result-object v0

    .line 101
    invoke-virtual {v0, p0}, Ljava/security/KeyPairGenerator;->initialize(Ljava/security/spec/AlgorithmParameterSpec;)V

    .line 102
    invoke-static {v1, v2}, Ljava/lang/Thread;->sleep(J)V

    .line 103
    invoke-virtual {v0}, Ljava/security/KeyPairGenerator;->generateKeyPair()Ljava/security/KeyPair;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    return v6

    :cond_1
    return v7

    :catch_1
    move-exception p0

    .line 108
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v4, p0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return v7
.end method

.method public static a(Landroid/content/Context;Z)Z
    .locals 3

    :try_start_0
    const-string v0, "AndroidKeyStore"

    .line 51
    invoke-static {v0}, Ljava/security/KeyStore;->getInstance(Ljava/lang/String;)Ljava/security/KeyStore;

    move-result-object v0

    const/4 v1, 0x0

    .line 52
    invoke-virtual {v0, v1}, Ljava/security/KeyStore;->load(Ljava/security/KeyStore$LoadStoreParameter;)V

    const-string v2, "CMCC_SDK_V1"

    .line 53
    invoke-virtual {v0, v2, v1}, Ljava/security/KeyStore;->getKey(Ljava/lang/String;[C)Ljava/security/Key;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    :catch_0
    move-exception v0

    .line 58
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    if-eqz p1, :cond_1

    .line 61
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/b;->a(Landroid/content/Context;)Z

    move-result p0

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private static b()Ljava/lang/String;
    .locals 2

    const-string v0, "AES_KEY"

    const-string v1, ""

    .line 213
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static b(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 128
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 129
    invoke-static {p0}, Lcom/cmic/gen/sdk/e/b;->b(Landroid/content/Context;)[B

    move-result-object p0

    if-eqz p0, :cond_0

    .line 131
    sget-object v0, Lcom/cmic/gen/sdk/e/b;->a:[B

    invoke-static {p0, p1, v0}, Lcom/cmic/gen/sdk/e/a;->b([BLjava/lang/String;[B)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 133
    :cond_0
    invoke-static {}, Lcom/cmic/gen/sdk/e/b;->a()V

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static declared-synchronized b(Landroid/content/Context;)[B
    .locals 9

    const-class v0, Lcom/cmic/gen/sdk/e/b;

    monitor-enter v0

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "AndroidKeyStore"

    .line 142
    invoke-static {v2}, Ljava/security/KeyStore;->getInstance(Ljava/lang/String;)Ljava/security/KeyStore;

    move-result-object v2

    .line 143
    invoke-virtual {v2, v1}, Ljava/security/KeyStore;->load(Ljava/security/KeyStore$LoadStoreParameter;)V

    const/4 v3, 0x0

    .line 144
    invoke-static {p0, v3}, Lcom/cmic/gen/sdk/e/b;->a(Landroid/content/Context;Z)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez p0, :cond_0

    .line 145
    monitor-exit v0

    return-object v1

    .line 147
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/cmic/gen/sdk/e/b;->b()Ljava/lang/String;

    move-result-object p0

    .line 149
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    const/4 v5, 0x1

    if-eqz v4, :cond_3

    .line 150
    invoke-static {}, Lcom/cmic/gen/sdk/e/q;->a()[B

    move-result-object p0

    .line 151
    invoke-static {}, Lcom/cmic/gen/sdk/e/q;->a()[B

    move-result-object v4

    sput-object v4, Lcom/cmic/gen/sdk/e/b;->a:[B

    const-string v4, "CMCC_SDK_V1"

    .line 152
    invoke-virtual {v2, v4, v1}, Ljava/security/KeyStore;->getKey(Ljava/lang/String;[C)Ljava/security/Key;

    move-result-object v4

    .line 155
    instance-of v6, v4, Ljavax/crypto/SecretKey;

    if-eqz v6, :cond_1

    const-string v2, "KeystoreUtil"

    const-string v6, "\u968f\u673a\u751f\u6210aes\u79d8\u94a5"

    .line 156
    invoke-static {v2, v6}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "AES/CBC/PKCS7Padding"

    .line 157
    invoke-static {v2}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v2

    .line 158
    new-instance v6, Ljavax/crypto/spec/IvParameterSpec;

    sget-object v7, Lcom/cmic/gen/sdk/e/b;->a:[B

    invoke-direct {v6, v7}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    invoke-virtual {v2, v5, v4, v6}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    goto :goto_0

    .line 159
    :cond_1
    instance-of v4, v4, Ljava/security/PrivateKey;

    if-eqz v4, :cond_2

    const-string v4, "CMCC_SDK_V1"

    .line 160
    invoke-virtual {v2, v4}, Ljava/security/KeyStore;->getCertificate(Ljava/lang/String;)Ljava/security/cert/Certificate;

    move-result-object v2

    .line 162
    invoke-virtual {v2}, Ljava/security/cert/Certificate;->getPublicKey()Ljava/security/PublicKey;

    move-result-object v2

    const-string v4, "RSA/ECB/OAEPWithSHA256AndMGF1Padding"

    .line 163
    invoke-static {v4}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v4

    const-string v6, "KeystoreUtil"

    const-string v7, "\u751f\u6210rsa\u5bc6"

    .line 164
    invoke-static {v6, v7}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 165
    invoke-virtual {v4, v5, v2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    move-object v2, v4

    .line 170
    :goto_0
    invoke-virtual {v2, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object v2

    .line 171
    invoke-static {v2, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    .line 172
    sget-object v4, Lcom/cmic/gen/sdk/e/b;->a:[B

    invoke-static {v4, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v3

    .line 174
    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4}, Ljava/util/HashMap;-><init>()V

    const-string v5, "AES_IV"

    .line 175
    invoke-interface {v4, v5, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "AES_KEY"

    .line 176
    invoke-interface {v4, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 177
    invoke-static {v4}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/util/Map;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    .line 167
    :cond_2
    monitor-exit v0

    return-object v1

    .line 179
    :cond_3
    :try_start_2
    invoke-static {}, Lcom/cmic/gen/sdk/e/b;->c()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4, v3}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v4

    sput-object v4, Lcom/cmic/gen/sdk/e/b;->a:[B

    .line 180
    invoke-static {p0, v3}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object p0

    const-string v4, "CMCC_SDK_V1"

    .line 181
    invoke-virtual {v2, v4, v1}, Ljava/security/KeyStore;->getKey(Ljava/lang/String;[C)Ljava/security/Key;

    move-result-object v2
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-nez v2, :cond_4

    .line 183
    monitor-exit v0

    return-object v1

    .line 186
    :cond_4
    :try_start_3
    instance-of v4, v2, Ljavax/crypto/SecretKey;

    const/4 v6, 0x2

    if-eqz v4, :cond_5

    const-string v4, "AES/CBC/PKCS7Padding"

    .line 187
    invoke-static {v4}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v4

    .line 188
    new-instance v7, Ljavax/crypto/spec/IvParameterSpec;

    sget-object v8, Lcom/cmic/gen/sdk/e/b;->a:[B

    invoke-direct {v7, v8}, Ljavax/crypto/spec/IvParameterSpec;-><init>([B)V

    invoke-virtual {v4, v6, v2, v7}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V

    const-string v2, "KeystoreUtil"

    const-string v6, "\u4f7f\u7528aes"

    .line 189
    invoke-static {v2, v6}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 190
    :cond_5
    instance-of v4, v2, Ljava/security/PrivateKey;

    if-eqz v4, :cond_7

    const-string v4, "RSA/ECB/OAEPWithSHA256AndMGF1Padding"

    .line 191
    invoke-static {v4}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v4

    .line 192
    invoke-virtual {v4, v6, v2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    const-string v2, "KeystoreUtil"

    const-string v6, "\u4f7f\u7528rsa"

    .line 193
    invoke-static {v2, v6}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 197
    :goto_1
    invoke-virtual {v4, p0}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p0

    const-string v2, "KeystoreUtil"

    .line 198
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u662f\u5426\u89e3\u5bc6\u51fa\u79d8\u94a5\uff1a"

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {p0, v3}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_6

    const/4 v3, 0x1

    :cond_6
    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 200
    :goto_2
    monitor-exit v0

    return-object p0

    .line 195
    :cond_7
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception p0

    goto :goto_3

    :catch_0
    move-exception p0

    .line 203
    :try_start_4
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 205
    monitor-exit v0

    return-object v1

    :goto_3
    monitor-exit v0

    throw p0
.end method

.method private static c()Ljava/lang/String;
    .locals 2

    const-string v0, "AES_IV"

    const-string v1, ""

    .line 217
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

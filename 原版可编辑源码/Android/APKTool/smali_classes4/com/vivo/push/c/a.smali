.class public final Lcom/vivo/push/c/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/c/c;


# instance fields
.field private a:Ljava/security/KeyStore;

.field private b:Ljavax/crypto/SecretKey;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    invoke-direct {p0}, Lcom/vivo/push/c/a;->a()V

    invoke-direct {p0}, Lcom/vivo/push/c/a;->b()Ljavax/crypto/SecretKey;

    return-void
.end method

.method private a()V
    .locals 3

    :try_start_0
    const-string v0, "AndroidKeyStore"

    invoke-static {v0}, Ljava/security/KeyStore;->getInstance(Ljava/lang/String;)Ljava/security/KeyStore;

    move-result-object v0

    iput-object v0, p0, Lcom/vivo/push/c/a;->a:Ljava/security/KeyStore;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/security/KeyStore;->load(Ljava/security/KeyStore$LoadStoreParameter;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "initKeyStore error"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AesSecurity"

    invoke-static {v1, v0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private b()Ljavax/crypto/SecretKey;
    .locals 4

    :try_start_0
    iget-object v0, p0, Lcom/vivo/push/c/a;->b:Ljavax/crypto/SecretKey;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/vivo/push/c/a;->b:Ljavax/crypto/SecretKey;

    return-object v0

    :cond_0
    invoke-direct {p0}, Lcom/vivo/push/c/a;->c()Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "AES"

    const-string v1, "AndroidKeyStore"

    invoke-static {v0, v1}, Ljavax/crypto/KeyGenerator;->getInstance(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;

    move-result-object v0

    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    if-lt v1, v2, :cond_1

    new-instance v1, Landroid/security/keystore/KeyGenParameterSpec$Builder;

    const-string v2, "AesKeyAlias"

    const/4 v3, 0x3

    invoke-direct {v1, v2, v3}, Landroid/security/keystore/KeyGenParameterSpec$Builder;-><init>(Ljava/lang/String;I)V

    const-string v2, "GCM"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setBlockModes([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v1

    const-string v2, "NoPadding"

    filled-new-array {v2}, [Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setEncryptionPaddings([Ljava/lang/String;)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v1

    const/16 v2, 0x100

    invoke-virtual {v1, v2}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->setKeySize(I)Landroid/security/keystore/KeyGenParameterSpec$Builder;

    move-result-object v1

    invoke-virtual {v1}, Landroid/security/keystore/KeyGenParameterSpec$Builder;->build()Landroid/security/keystore/KeyGenParameterSpec;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljavax/crypto/KeyGenerator;->init(Ljava/security/spec/AlgorithmParameterSpec;)V

    :cond_1
    invoke-virtual {v0}, Ljavax/crypto/KeyGenerator;->generateKey()Ljavax/crypto/SecretKey;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/vivo/push/c/a;->b:Ljavax/crypto/SecretKey;

    goto :goto_1

    :cond_2
    invoke-direct {p0}, Lcom/vivo/push/c/a;->d()Ljavax/crypto/SecretKey;

    move-result-object v0

    goto :goto_0

    :goto_1
    iget-object v0, p0, Lcom/vivo/push/c/a;->b:Ljavax/crypto/SecretKey;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getSecretKey error"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AesSecurity"

    invoke-static {v1, v0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return-object v0
.end method

.method private c()Z
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/vivo/push/c/a;->a:Ljava/security/KeyStore;

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/vivo/push/c/a;->a()V

    :cond_0
    iget-object v0, p0, Lcom/vivo/push/c/a;->a:Ljava/security/KeyStore;

    const-string v1, "AesKeyAlias"

    invoke-virtual {v0, v1}, Ljava/security/KeyStore;->containsAlias(Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "hasAESKey error"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AesSecurity"

    invoke-static {v1, v0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    return v0
.end method

.method private d()Ljavax/crypto/SecretKey;
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/vivo/push/c/a;->a:Ljava/security/KeyStore;

    const-string v2, "AesKeyAlias"

    invoke-virtual {v1, v2, v0}, Ljava/security/KeyStore;->getEntry(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;

    move-result-object v1

    check-cast v1, Ljava/security/KeyStore$SecretKeyEntry;

    invoke-virtual {v1}, Ljava/security/KeyStore$SecretKeyEntry;->getSecretKey()Ljavax/crypto/SecretKey;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v1

    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "getAESSecretKey error"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "AesSecurity"

    invoke-static {v2, v1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0
.end method

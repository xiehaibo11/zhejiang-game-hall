.class public final Lcom/vivo/push/c/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/vivo/push/c/b;


# static fields
.field private static a:Ljava/security/PrivateKey;

.field private static b:Ljava/security/PublicKey;

.field private static c:Ljava/security/KeyStore;

.field private static d:Ljavax/security/auth/x500/X500Principal;


# instance fields
.field private e:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/vivo/push/c/e;->e:Landroid/content/Context;

    :try_start_0
    invoke-static {}, Lcom/vivo/push/c/e;->b()V

    invoke-static {p1}, Lcom/vivo/push/c/e;->a(Landroid/content/Context;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "init error"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "RsaSecurity"

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private static a(Landroid/content/Context;)V
    .locals 6

    const-string v0, "PushRsaKeyAlias"

    const-string v1, "RsaSecurity"

    if-nez p0, :cond_0

    :try_start_0
    const-string p0, " generateRSAKeyPairSign context == null "

    invoke-static {v1, p0}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    :cond_0
    invoke-static {v0}, Lcom/vivo/push/c/e;->b(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_2

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v2

    invoke-static {}, Ljava/util/Calendar;->getInstance()Ljava/util/Calendar;

    move-result-object v3

    const/4 v4, 0x1

    const/16 v5, 0x3e7

    invoke-virtual {v3, v4, v5}, Ljava/util/Calendar;->add(II)V

    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x12

    if-lt v4, v5, :cond_1

    new-instance v4, Landroid/security/KeyPairGeneratorSpec$Builder;

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    invoke-direct {v4, p0}, Landroid/security/KeyPairGeneratorSpec$Builder;-><init>(Landroid/content/Context;)V

    invoke-virtual {v4, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setAlias(Ljava/lang/String;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    sget-object v0, Lcom/vivo/push/c/e;->d:Ljavax/security/auth/x500/X500Principal;

    invoke-virtual {p0, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setSubject(Ljavax/security/auth/x500/X500Principal;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    const-wide/16 v4, 0x539

    invoke-static {v4, v5}, Ljava/math/BigInteger;->valueOf(J)Ljava/math/BigInteger;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setSerialNumber(Ljava/math/BigInteger;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    invoke-virtual {v2}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setStartDate(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    invoke-virtual {v3}, Ljava/util/Calendar;->getTime()Ljava/util/Date;

    move-result-object v0

    invoke-virtual {p0, v0}, Landroid/security/KeyPairGeneratorSpec$Builder;->setEndDate(Ljava/util/Date;)Landroid/security/KeyPairGeneratorSpec$Builder;

    move-result-object p0

    invoke-virtual {p0}, Landroid/security/KeyPairGeneratorSpec$Builder;->build()Landroid/security/KeyPairGeneratorSpec;

    move-result-object p0

    const-string v0, "RSA"

    const-string v2, "AndroidKeyStore"

    invoke-static {v0, v2}, Ljava/security/KeyPairGenerator;->getInstance(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;

    move-result-object v0

    invoke-virtual {v0, p0}, Ljava/security/KeyPairGenerator;->initialize(Ljava/security/spec/AlgorithmParameterSpec;)V

    invoke-virtual {v0}, Ljava/security/KeyPairGenerator;->generateKeyPair()Ljava/security/KeyPair;

    :cond_1
    return-void

    :cond_2
    const-string p0, " generateRSAKeyPairSign this keyAlias PushRsaKeyAlias is Created "

    invoke-static {v1, p0}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "generateRSAKeyPairSign error"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private static b(Landroid/content/Context;)Ljava/security/PrivateKey;
    .locals 4

    const-string v0, "PushRsaKeyAlias"

    const-string v1, "RsaSecurity"

    const/4 v2, 0x0

    :try_start_0
    sget-object v3, Lcom/vivo/push/c/e;->a:Ljava/security/PrivateKey;

    if-eqz v3, :cond_0

    sget-object p0, Lcom/vivo/push/c/e;->a:Ljava/security/PrivateKey;

    return-object p0

    :cond_0
    if-nez p0, :cond_1

    const-string p0, " getPrivateKeySigin context == null "

    invoke-static {v1, p0}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    :cond_1
    invoke-static {v0}, Lcom/vivo/push/c/e;->b(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_2

    invoke-static {p0}, Lcom/vivo/push/c/e;->a(Landroid/content/Context;)V

    :cond_2
    sget-object p0, Lcom/vivo/push/c/e;->c:Ljava/security/KeyStore;

    invoke-virtual {p0, v0, v2}, Ljava/security/KeyStore;->getEntry(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;

    move-result-object p0

    instance-of v0, p0, Ljava/security/KeyStore$PrivateKeyEntry;

    if-eqz v0, :cond_3

    check-cast p0, Ljava/security/KeyStore$PrivateKeyEntry;

    invoke-virtual {p0}, Ljava/security/KeyStore$PrivateKeyEntry;->getPrivateKey()Ljava/security/PrivateKey;

    move-result-object p0

    sput-object p0, Lcom/vivo/push/c/e;->a:Ljava/security/PrivateKey;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v3, "getPrivateKeySigin error"

    invoke-direct {v0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object v2
.end method

.method private static b()V
    .locals 3

    :try_start_0
    const-string v0, "AndroidKeyStore"

    invoke-static {v0}, Ljava/security/KeyStore;->getInstance(Ljava/lang/String;)Ljava/security/KeyStore;

    move-result-object v0

    sput-object v0, Lcom/vivo/push/c/e;->c:Ljava/security/KeyStore;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/security/KeyStore;->load(Ljava/security/KeyStore$LoadStoreParameter;)V

    new-instance v0, Ljavax/security/auth/x500/X500Principal;

    const-string v1, "CN=Push SDK, OU=VIVO, O=VIVO PUSH, C=CN"

    invoke-direct {v0, v1}, Ljavax/security/auth/x500/X500Principal;-><init>(Ljava/lang/String;)V

    sput-object v0, Lcom/vivo/push/c/e;->d:Ljavax/security/auth/x500/X500Principal;
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

    const-string v1, "RsaSecurity"

    invoke-static {v1, v0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 3

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return v1

    :cond_0
    :try_start_0
    sget-object v0, Lcom/vivo/push/c/e;->c:Ljava/security/KeyStore;

    if-nez v0, :cond_1

    invoke-static {}, Lcom/vivo/push/c/e;->b()V

    :cond_1
    sget-object v0, Lcom/vivo/push/c/e;->c:Ljava/security/KeyStore;

    invoke-virtual {v0, p0}, Ljava/security/KeyStore;->containsAlias(Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "getPrivateKeySigin error"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "RsaSecurity"

    invoke-static {v0, p0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "RsaSecurity"

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/vivo/push/c/e;->e:Landroid/content/Context;

    invoke-static {v1}, Lcom/vivo/push/c/e;->b(Landroid/content/Context;)Ljava/security/PrivateKey;

    move-result-object v1

    if-eqz v1, :cond_0

    const-string v1, "UTF-8"

    invoke-virtual {p1, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1

    iget-object v2, p0, Lcom/vivo/push/c/e;->e:Landroid/content/Context;

    invoke-static {v2}, Lcom/vivo/push/c/e;->b(Landroid/content/Context;)Ljava/security/PrivateKey;

    move-result-object v2

    const-string v3, "SHA256withRSA"

    invoke-static {v3}, Ljava/security/Signature;->getInstance(Ljava/lang/String;)Ljava/security/Signature;

    move-result-object v3

    invoke-virtual {v3, v2}, Ljava/security/Signature;->initSign(Ljava/security/PrivateKey;)V

    invoke-virtual {v3, v1}, Ljava/security/Signature;->update([B)V

    invoke-virtual {v3}, Ljava/security/Signature;->sign()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " = "

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "signClientSDK error"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a()Ljava/security/PublicKey;
    .locals 4

    const-string v0, "PushRsaKeyAlias"

    const/4 v1, 0x0

    :try_start_0
    sget-object v2, Lcom/vivo/push/c/e;->b:Ljava/security/PublicKey;

    if-eqz v2, :cond_0

    sget-object v0, Lcom/vivo/push/c/e;->b:Ljava/security/PublicKey;

    return-object v0

    :cond_0
    invoke-static {v0}, Lcom/vivo/push/c/e;->b(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    iget-object v2, p0, Lcom/vivo/push/c/e;->e:Landroid/content/Context;

    invoke-static {v2}, Lcom/vivo/push/c/e;->a(Landroid/content/Context;)V

    :cond_1
    sget-object v2, Lcom/vivo/push/c/e;->c:Ljava/security/KeyStore;

    invoke-virtual {v2, v0, v1}, Ljava/security/KeyStore;->getEntry(Ljava/lang/String;Ljava/security/KeyStore$ProtectionParameter;)Ljava/security/KeyStore$Entry;

    move-result-object v0

    instance-of v2, v0, Ljava/security/KeyStore$PrivateKeyEntry;

    if-eqz v2, :cond_2

    check-cast v0, Ljava/security/KeyStore$PrivateKeyEntry;

    invoke-virtual {v0}, Ljava/security/KeyStore$PrivateKeyEntry;->getCertificate()Ljava/security/cert/Certificate;

    move-result-object v0

    invoke-virtual {v0}, Ljava/security/cert/Certificate;->getPublicKey()Ljava/security/PublicKey;

    move-result-object v0

    sput-object v0, Lcom/vivo/push/c/e;->b:Ljava/security/PublicKey;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "getPublicKeySign error"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "RsaSecurity"

    invoke-static {v2, v0}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-object v1
.end method

.method public final a([BLjava/security/PublicKey;[B)Z
    .locals 1

    :try_start_0
    const-string v0, "SHA256withRSA"

    invoke-static {v0}, Ljava/security/Signature;->getInstance(Ljava/lang/String;)Ljava/security/Signature;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/security/Signature;->initVerify(Ljava/security/PublicKey;)V

    invoke-virtual {v0, p1}, Ljava/security/Signature;->update([B)V

    invoke-virtual {v0, p3}, Ljava/security/Signature;->verify([B)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    new-instance p2, Ljava/lang/StringBuilder;

    const-string p3, "verifyClientSDK error"

    invoke-direct {p2, p3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "RsaSecurity"

    invoke-static {p2, p1}, Lcom/vivo/push/util/p;->a(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    return p1
.end method

.class public Lcom/cmic/gen/sdk/e/i;
.super Ljava/lang/Object;
.source "RSAUtil.java"


# static fields
.field private static final a:Ljava/lang/String;

.field private static d:Lcom/cmic/gen/sdk/e/i;


# instance fields
.field private b:Ljava/security/PublicKey;

.field private c:Ljava/security/PublicKey;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    const-class v0, Lcom/cmic/gen/sdk/e/i;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/cmic/gen/sdk/e/i;->a:Ljava/lang/String;

    const/4 v0, 0x0

    .line 43
    sput-object v0, Lcom/cmic/gen/sdk/e/i;->d:Lcom/cmic/gen/sdk/e/i;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 57
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 36
    iput-object v0, p0, Lcom/cmic/gen/sdk/e/i;->b:Ljava/security/PublicKey;

    .line 37
    iput-object v0, p0, Lcom/cmic/gen/sdk/e/i;->c:Ljava/security/PublicKey;

    if-nez v0, :cond_0

    .line 60
    :try_start_0
    invoke-direct {p0}, Lcom/cmic/gen/sdk/e/i;->b()V

    .line 62
    :cond_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/i;->c:Ljava/security/PublicKey;

    if-nez v0, :cond_1

    .line 63
    invoke-direct {p0}, Lcom/cmic/gen/sdk/e/i;->c()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 75
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a()Lcom/cmic/gen/sdk/e/i;
    .locals 1

    .line 50
    sget-object v0, Lcom/cmic/gen/sdk/e/i;->d:Lcom/cmic/gen/sdk/e/i;

    if-nez v0, :cond_0

    .line 51
    new-instance v0, Lcom/cmic/gen/sdk/e/i;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/e/i;-><init>()V

    sput-object v0, Lcom/cmic/gen/sdk/e/i;->d:Lcom/cmic/gen/sdk/e/i;

    .line 54
    :cond_0
    sget-object v0, Lcom/cmic/gen/sdk/e/i;->d:Lcom/cmic/gen/sdk/e/i;

    return-object v0
.end method

.method private b()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    :try_start_0
    const-string v0, "MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDNFGdEpQ1d8cPqekvvEDQyBGnI\nKwvjX9o3OmnnqWMGbIiFYIpc21QeG7aqizuWdXlgS5M9rstDfHQfG/AaPElJ7Yix\nBCau4hdVwFpRmb9NIuqavDeHKP9BKPZ01Ra5/666NGKBqmkRRer3lBCe6EKNUc2U\n/DZg6U/Q3CTPiORt/wIDAQAB"

    const/4 v1, 0x0

    .line 130
    invoke-static {v0, v1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v0

    const-string v1, "RSA"

    .line 131
    invoke-static {v1}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v1

    .line 132
    new-instance v2, Ljava/security/spec/X509EncodedKeySpec;

    invoke-direct {v2, v0}, Ljava/security/spec/X509EncodedKeySpec;-><init>([B)V

    .line 133
    invoke-virtual {v1, v2}, Ljava/security/KeyFactory;->generatePublic(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/e/i;->b:Ljava/security/PublicKey;
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 135
    invoke-virtual {v0}, Ljava/lang/NullPointerException;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private c()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    :try_start_0
    const-string v0, "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAuyqBGJVxu+5Z2ZwItIhl\noxI53CVpYUR3OWAQyAQNcMhDDf3nGsxLLHP8kGWqrpLn1uAIgI+EIAl0sM+i1leD\nFD+sYU2rkUVZgpwO7ly+THBFw/YcZNwS094NBdhzxmCCFbCKHVNzDLirlV9T2q4k\nJhjaEmyCOtSU6+mdjcHhbcbF6lKYx8tfQlpPmyM5suFY138qtEoB4b+q/j8q22MI\naUotg1Av257RuMh97hAwoi5D7HS5LH0piLIN/au/X08rxbXnWNdgQtFtUeCNy3vw\nkO0ykg5qH942X8poQ+a9GgBUeDBpY4GSIv6/qq+zJxiJxpoL0SGKAP3FlcuLr07f\nxwIDAQAB"

    const/4 v1, 0x0

    .line 146
    invoke-static {v0, v1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v0

    const-string v1, "RSA"

    .line 147
    invoke-static {v1}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v1

    .line 148
    new-instance v2, Ljava/security/spec/X509EncodedKeySpec;

    invoke-direct {v2, v0}, Ljava/security/spec/X509EncodedKeySpec;-><init>([B)V

    .line 149
    invoke-virtual {v1, v2}, Ljava/security/KeyFactory;->generatePublic(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/e/i;->c:Ljava/security/PublicKey;
    :try_end_0
    .catch Ljava/lang/NullPointerException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    .line 152
    :catch_0
    new-instance v0, Ljava/lang/Exception;

    const-string v1, "\u516c\u94a5\u8f93\u5165\u6d41\u4e3a\u7a7a"

    invoke-direct {v0, v1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v0
.end method


# virtual methods
.method public a([B)Ljava/lang/String;
    .locals 4

    .line 85
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/i;->b:Ljava/security/PublicKey;

    const-string v1, ""

    if-nez v0, :cond_0

    .line 86
    sget-object p1, Lcom/cmic/gen/sdk/e/i;->a:Ljava/lang/String;

    const-string v0, "mServerPublicKey == null"

    invoke-static {p1, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "RSA/ECB/OAEPWithSHA256AndMGF1Padding"

    .line 91
    invoke-static {v0}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v0

    const/4 v2, 0x1

    .line 92
    iget-object v3, p0, Lcom/cmic/gen/sdk/e/i;->b:Ljava/security/PublicKey;

    invoke-virtual {v0, v2, v3}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    .line 93
    invoke-virtual {v0, p1}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p1

    invoke-static {p1}, Lcom/cmic/gen/sdk/e/q;->a([B)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 95
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v1
.end method

.method public b([B)Ljava/lang/String;
    .locals 3

    .line 107
    iget-object v0, p0, Lcom/cmic/gen/sdk/e/i;->b:Ljava/security/PublicKey;

    if-nez v0, :cond_0

    .line 108
    sget-object p1, Lcom/cmic/gen/sdk/e/i;->a:Ljava/lang/String;

    const-string v0, "mServerPublicKey == null"

    invoke-static {p1, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return-object p1

    :cond_0
    :try_start_0
    const-string v0, "RSA/ECB/OAEPWithSHA256AndMGF1Padding"

    .line 113
    invoke-static {v0}, Ljavax/crypto/Cipher;->getInstance(Ljava/lang/String;)Ljavax/crypto/Cipher;

    move-result-object v0

    const/4 v1, 0x1

    .line 114
    iget-object v2, p0, Lcom/cmic/gen/sdk/e/i;->c:Ljava/security/PublicKey;

    invoke-virtual {v0, v1, v2}, Ljavax/crypto/Cipher;->init(ILjava/security/Key;)V

    .line 115
    invoke-virtual {v0, p1}, Ljavax/crypto/Cipher;->doFinal([B)[B

    move-result-object p1

    const/4 v0, 0x0

    invoke-static {p1, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 117
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const-string p1, ""

    return-object p1
.end method

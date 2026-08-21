.class public Lcom/alipay/sdk/executor/AlipayRsa;
.super Ljava/lang/Object;
.source "AlipayRsa.java"


# static fields
.field public static final RESULT_CHECK_SIGN_FAILED:I = 0x1

.field public static final RESULT_CHECK_SIGN_SUCCEED:I = 0x2

.field public static final RESULT_INVALID_PARAM:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkSign(Ljava/lang/String;)I
    .locals 0

    const/4 p0, 0x2

    return p0
.end method

.method public static doCheck(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 2

    :try_start_0
    const-string v0, "RSA"

    .line 24
    invoke-static {v0}, Ljava/security/KeyFactory;->getInstance(Ljava/lang/String;)Ljava/security/KeyFactory;

    move-result-object v0

    .line 25
    invoke-static {p2}, Lcom/alipay/sdk/util/Base64;->decode(Ljava/lang/String;)[B

    move-result-object p2

    .line 26
    new-instance v1, Ljava/security/spec/X509EncodedKeySpec;

    invoke-direct {v1, p2}, Ljava/security/spec/X509EncodedKeySpec;-><init>([B)V

    invoke-virtual {v0, v1}, Ljava/security/KeyFactory;->generatePublic(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;

    move-result-object p2

    const-string v0, "SHA1WithRSA"

    .line 28
    invoke-static {v0}, Ljava/security/Signature;->getInstance(Ljava/lang/String;)Ljava/security/Signature;

    move-result-object v0

    .line 30
    invoke-virtual {v0, p2}, Ljava/security/Signature;->initVerify(Ljava/security/PublicKey;)V

    const-string p2, "utf-8"

    .line 31
    invoke-virtual {p0, p2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/security/Signature;->update([B)V

    .line 33
    invoke-static {p1}, Lcom/alipay/sdk/util/Base64;->decode(Ljava/lang/String;)[B

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/security/Signature;->verify([B)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 37
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static string2JSON(Ljava/lang/String;Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 5

    .line 85
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 87
    :try_start_0
    invoke-virtual {p0, p1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x0

    const/4 v1, 0x0

    .line 88
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_0

    .line 89
    aget-object v2, p0, v1

    const-string v3, "="

    invoke-virtual {v2, v3}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v2

    .line 90
    aget-object v3, v2, p1

    aget-object v4, p0, v1

    aget-object v2, v2, p1

    invoke-virtual {v2}, Ljava/lang/String;->length()I

    move-result v2

    add-int/lit8 v2, v2, 0x1

    invoke-virtual {v4, v2}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    .line 93
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-object v0
.end method

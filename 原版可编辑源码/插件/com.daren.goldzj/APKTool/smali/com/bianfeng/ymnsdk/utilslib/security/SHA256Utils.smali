.class public Lcom/bianfeng/ymnsdk/utilslib/security/SHA256Utils;
.super Ljava/lang/Object;
.source "SHA256Utils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 4
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getSHA256(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    :try_start_0
    const-string v0, "utf-8"

    .line 21
    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->getSHA256([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 23
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const-string p0, ""

    return-object p0
.end method

.method public static getSHA256([B)Ljava/lang/String;
    .locals 0

    .line 11
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->getSHA256([B)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static sha256_HMAC([BLjava/lang/String;)Ljava/lang/String;
    .locals 0

    .line 29
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->sha256_HMAC([BLjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

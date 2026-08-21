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
    .locals 2
    .param p0, "str"    # Ljava/lang/String;

    .line 21
    :try_start_0
    const-string v0, "utf-8"

    invoke-virtual {p0, v0}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->getSHA256([B)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 22
    :catch_0
    move-exception v0

    .line 23
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 24
    const-string v1, ""

    return-object v1
.end method

.method public static getSHA256([B)Ljava/lang/String;
    .locals 1
    .param p0, "str"    # [B

    .line 11
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->getSHA256([B)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static sha256_HMAC([BLjava/lang/String;)Ljava/lang/String;
    .locals 1
    .param p0, "bytes"    # [B
    .param p1, "secret"    # Ljava/lang/String;

    .line 29
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/security/SecurityUtils;->sha256_HMAC([BLjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

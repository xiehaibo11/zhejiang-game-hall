.class public Lcom/bianfeng/ymnsdk/utilslib/security/ApihubUtils;
.super Ljava/lang/Object;
.source "ApihubUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static getRfc339()Ljava/lang/String;
    .locals 2

    .line 58
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/SystemUtils;->getRFC3339(Ljava/lang/Long;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 59
    :catch_0
    move-exception v0

    .line 60
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 61
    const-string v1, ""

    return-object v1
.end method

.method public static getSign(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)Ljava/lang/String;
    .locals 8
    .param p0, "httpMethod"    # Ljava/lang/String;
    .param p1, "httpArg"    # Ljava/lang/String;
    .param p2, "key"    # Ljava/lang/String;
    .param p3, "secret"    # Ljava/lang/String;
    .param p4, "route"    # Ljava/lang/String;
    .param p5, "data"    # [B

    .line 26
    const-string v0, "Shield"

    :try_start_0
    invoke-static {p5}, Lcom/bianfeng/ymnsdk/utilslib/security/SHA256Utils;->getSHA256([B)Ljava/lang/String;

    move-result-object v1

    .line 27
    .local v1, "sha256_data":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/security/ApihubUtils;->getRfc339()Ljava/lang/String;

    move-result-object v2

    .line 28
    .local v2, "rcf3339":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/SystemUtils;->createTransactionId()Ljava/lang/String;

    move-result-object v3

    .line 30
    .local v3, "md5":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuffer;

    invoke-direct {v4, v0}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    .line 31
    .local v4, "stringBuffer":Ljava/lang/StringBuffer;
    const-string v5, "\n"

    .line 32
    .local v5, "lineseparator":Ljava/lang/String;
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, p2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 33
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 34
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 35
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 36
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, p4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 37
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 38
    invoke-virtual {v4, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 41
    invoke-virtual {v4}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/String;->getBytes()[B

    move-result-object v6

    invoke-static {v6, p3}, Lcom/bianfeng/ymnsdk/utilslib/security/SHA256Utils;->sha256_HMAC([BLjava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 42
    .local v6, "sign_sha256":Ljava/lang/String;
    new-instance v7, Ljava/lang/StringBuffer;

    invoke-direct {v7, v0}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    move-object v0, v7

    .line 43
    .local v0, "sb":Ljava/lang/StringBuffer;
    const-string v7, " "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v7, "RequestKey="

    .line 44
    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v7, ", RequestTime="

    .line 45
    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v7, ", Nonce="

    .line 46
    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v7, ", Signature="

    .line 47
    invoke-virtual {v0, v7}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 48
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 49
    .local v7, "aut":Ljava/lang/String;
    return-object v7

    .line 50
    .end local v0    # "sb":Ljava/lang/StringBuffer;
    .end local v1    # "sha256_data":Ljava/lang/String;
    .end local v2    # "rcf3339":Ljava/lang/String;
    .end local v3    # "md5":Ljava/lang/String;
    .end local v4    # "stringBuffer":Ljava/lang/StringBuffer;
    .end local v5    # "lineseparator":Ljava/lang/String;
    .end local v6    # "sign_sha256":Ljava/lang/String;
    .end local v7    # "aut":Ljava/lang/String;
    :catch_0
    move-exception v0

    .line 51
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 53
    .end local v0    # "e":Ljava/lang/Exception;
    const-string v0, ""

    return-object v0
.end method

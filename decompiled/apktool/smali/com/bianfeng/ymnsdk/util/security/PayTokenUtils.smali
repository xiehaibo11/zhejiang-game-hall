.class public Lcom/bianfeng/ymnsdk/util/security/PayTokenUtils;
.super Ljava/lang/Object;
.source "PayTokenUtils.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 10
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getPayToken(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 8
    .param p1, "header"    # Ljava/lang/String;
    .param p2, "payload"    # Ljava/lang/String;

    .line 19
    const-string v0, "."

    const-string v1, "UTF-8"

    :try_start_0
    new-instance v2, Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    const/16 v4, 0xb

    invoke-static {v3, v4}, Landroid/util/Base64;->encode([BI)[B

    move-result-object v3

    invoke-direct {v2, v3, v1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 21
    .local v2, "headerEncoded":Ljava/lang/String;
    new-instance v3, Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object v5

    invoke-static {v5, v4}, Landroid/util/Base64;->encode([BI)[B

    move-result-object v5

    invoke-direct {v3, v5, v1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    .line 23
    .local v3, "payloadEncoded":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v5

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getSdkAppKey()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v6, v7}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->sha256_HMAC(Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v5

    .line 24
    .local v5, "sign":[B
    new-instance v6, Ljava/lang/String;

    invoke-static {v5, v4}, Landroid/util/Base64;->encode([BI)[B

    move-result-object v4

    invoke-direct {v6, v4, v1}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    move-object v1, v6

    .line 26
    .local v1, "signEncoded":Ljava/lang/String;
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 27
    .local v0, "token":Ljava/lang/String;
    return-object v0

    .line 28
    .end local v0    # "token":Ljava/lang/String;
    .end local v1    # "signEncoded":Ljava/lang/String;
    .end local v2    # "headerEncoded":Ljava/lang/String;
    .end local v3    # "payloadEncoded":Ljava/lang/String;
    .end local v5    # "sign":[B
    :catch_0
    move-exception v0

    .line 29
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 30
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "token\u9519\u8bef"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 32
    .end local v0    # "e":Ljava/lang/Exception;
    const/4 v0, 0x0

    return-object v0
.end method

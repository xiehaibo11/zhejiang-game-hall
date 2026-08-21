.class public Lcom/bykv/vk/openvk/api/plugin/df/df;
.super Ljava/lang/Object;


# direct methods
.method public static df()Ljava/lang/String;
    .locals 3

    const/16 v0, 0x8

    .line 123
    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/df/df;->rg(I)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 124
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0x10

    if-eq v1, v2, :cond_1

    :cond_0
    const/4 v0, 0x0

    :cond_1
    return-object v0
.end method

.method private static q()Ljava/security/SecureRandom;
    .locals 2

    .line 150
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1a

    if-lt v0, v1, :cond_0

    .line 152
    :try_start_0
    invoke-static {}, Ljava/security/SecureRandom;->getInstanceStrong()Ljava/security/SecureRandom;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    .line 154
    :catchall_0
    new-instance v0, Ljava/security/SecureRandom;

    invoke-direct {v0}, Ljava/security/SecureRandom;-><init>()V

    return-object v0

    .line 158
    :cond_0
    new-instance v0, Ljava/security/SecureRandom;

    invoke-direct {v0}, Ljava/security/SecureRandom;-><init>()V

    return-object v0
.end method

.method public static rg()Ljava/lang/String;
    .locals 3

    const/16 v0, 0x10

    .line 95
    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/df/df;->rg(I)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 96
    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v1

    const/16 v2, 0x20

    if-eq v1, v2, :cond_1

    :cond_0
    const/4 v0, 0x0

    :cond_1
    return-object v0
.end method

.method public static rg(I)Ljava/lang/String;
    .locals 1

    .line 138
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/df/df;->q()Ljava/security/SecureRandom;

    move-result-object v0

    .line 140
    :try_start_0
    new-array p0, p0, [B

    .line 141
    invoke-virtual {v0, p0}, Ljava/util/Random;->nextBytes([B)V

    .line 142
    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/df/q;->rg([B)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static rg(Ljava/lang/String;)Ljava/lang/String;
    .locals 4
    .annotation runtime Lcom/bytedance/JProtect;
    .end annotation

    .line 27
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    .line 30
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/df/df;->rg()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x20

    .line 31
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/plugin/df/df;->rg(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v1

    .line 32
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/df/df;->df()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    if-eqz v1, :cond_1

    if-eqz v2, :cond_1

    .line 35
    invoke-static {p0, v2, v1}, Lcom/bykv/vk/openvk/api/plugin/df/rg;->rg(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 37
    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const/4 v1, 0x3

    .line 38
    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 39
    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 40
    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 41
    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 42
    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static rg(Ljava/lang/String;I)Ljava/lang/String;
    .locals 2

    if-eqz p0, :cond_1

    .line 111
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-eq v0, p1, :cond_0

    goto :goto_0

    .line 114
    :cond_0
    div-int/lit8 v0, p1, 0x2

    .line 115
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0, p1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 p1, 0x0

    invoke-virtual {p0, p1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static rg(Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6
    .annotation runtime Lcom/bytedance/JProtect;
    .end annotation

    const-string v0, "cypher"

    const-string v1, "message"

    .line 47
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    if-nez p0, :cond_0

    return-object v2

    :cond_0
    const/4 v3, 0x0

    .line 52
    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bykv/vk/openvk/api/plugin/df/df;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 53
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    .line 54
    invoke-virtual {v2, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 v4, 0x3

    .line 55
    invoke-virtual {v2, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_0

    .line 57
    :cond_1
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 58
    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    .line 62
    :catchall_0
    :try_start_1
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 63
    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :goto_0
    return-object v2
.end method

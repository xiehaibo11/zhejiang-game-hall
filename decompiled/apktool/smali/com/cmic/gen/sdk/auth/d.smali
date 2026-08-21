.class public Lcom/cmic/gen/sdk/auth/d;
.super Ljava/lang/Object;
.source "AuthnResult.java"


# direct methods
.method static a(Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 2

    .line 62
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "resultCode"

    const-string v1, "103000"

    .line 64
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "desc"

    const-string v1, "true"

    .line 65
    invoke-virtual {p0, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 67
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object p0
.end method

.method static a(Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    const-string v0, "0"

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/String;

    const-string v2, "\u672a\u77e5"

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "\u79fb\u52a8"

    const/4 v4, 0x1

    aput-object v2, v1, v4

    const/4 v2, 0x2

    const-string v5, "\u8054\u901a"

    aput-object v5, v1, v2

    const/4 v2, 0x3

    const-string v5, "\u7535\u4fe1"

    aput-object v5, v1, v2

    :try_start_0
    const-string v2, "operatortype"

    .line 45
    invoke-virtual {p1, v2, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 46
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v2, "operatorType"

    if-nez v0, :cond_1

    :try_start_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 53
    :cond_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p0

    aget-object p0, v1, p0

    invoke-virtual {p2, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    :cond_1
    :goto_0
    const-string p1, "103000"

    .line 47
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 48
    aget-object p0, v1, v4

    invoke-virtual {p2, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 50
    :cond_2
    aget-object p0, v1, v3

    invoke-virtual {p2, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 56
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-object p2
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 2

    .line 32
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "resultCode"

    .line 34
    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "desc"

    .line 35
    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 37
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v0
.end method

.method static a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 10

    const-string v0, "tokenExpiresIn"

    const-string v1, "openId"

    const-string v2, "token"

    const-string v3, "0"

    const-string v4, "authType"

    .line 89
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    .line 91
    :try_start_0
    invoke-virtual {p2, v4, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v6

    const-string v7, "networktype"

    .line 92
    invoke-virtual {p2, v7}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v7

    const/4 v8, 0x3

    if-ne v6, v8, :cond_1

    if-ne v7, v8, :cond_0

    const-string v3, "WIFI\u4e0b\u7f51\u5173\u9274\u6743"

    const-string v6, "1"

    goto :goto_0

    :cond_0
    const-string v3, "\u7f51\u5173\u9274\u6743"

    const-string v6, "2"

    :goto_0
    move-object v9, v6

    move-object v6, v3

    move-object v3, v9

    goto :goto_1

    :cond_1
    const-string v6, "\u5176\u4ed6"

    :goto_1
    const-string v7, "resultCode"

    .line 107
    invoke-virtual {v5, v7, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 108
    invoke-virtual {v5, v4, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "authTypeDes"

    .line 109
    invoke-virtual {v5, v3, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "103000"

    .line 110
    invoke-virtual {v3, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_3

    const/4 p0, 0x1

    const-string p1, "logintype"

    .line 111
    invoke-virtual {p2, p1}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result p1

    if-ne p0, p1, :cond_2

    .line 112
    invoke-virtual {p2, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v5, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 115
    :cond_2
    invoke-virtual {p3, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v5, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 116
    invoke-virtual {p3, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v5, v0, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_2

    :cond_3
    const-string p0, "desc"

    .line 118
    invoke-virtual {v5, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 121
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 123
    :goto_2
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string p1, "\u8fd4\u56de\u53c2\u6570:"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "AuthnResult"

    invoke-static {p1, p0}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-object v5
.end method

.method static b(Ljava/lang/String;Ljava/lang/String;)Lorg/json/JSONObject;
    .locals 2

    .line 73
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "resultCode"

    .line 75
    invoke-virtual {v0, v1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "desc"

    .line 76
    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 78
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    return-object v0
.end method

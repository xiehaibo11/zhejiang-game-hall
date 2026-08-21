.class public final Lcom/bianfeng/ymnsdk/gongxiang/c;
.super Ljava/lang/Object;
.source "ChannelReader.java"


# direct methods
.method public static a(Ljava/io/File;)Lcom/bianfeng/ymnsdk/gongxiang/b;
    .locals 3
    .param p0, "apkFile"    # Ljava/io/File;

    .line 22
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/c;->b(Ljava/io/File;)Ljava/util/Map;

    move-result-object v0

    .line 23
    .local v0, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    if-nez v0, :cond_0

    .line 24
    const/4 v1, 0x0

    return-object v1

    .line 26
    :cond_0
    const-string v1, "ymn_channel"

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 27
    .local v2, "channel":Ljava/lang/String;
    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 28
    new-instance v1, Lcom/bianfeng/ymnsdk/gongxiang/b;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/gongxiang/b;-><init>(Ljava/lang/String;Ljava/util/Map;)V

    return-object v1
.end method

.method public static b(Ljava/io/File;)Ljava/util/Map;
    .locals 7
    .param p0, "apkFile"    # Ljava/io/File;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 33
    const/4 v0, 0x0

    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/c;->c(Ljava/io/File;)Ljava/lang/String;

    move-result-object v1

    .line 34
    .local v1, "rawString":Ljava/lang/String;
    if-nez v1, :cond_0

    .line 35
    return-object v0

    .line 37
    :cond_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 38
    .local v2, "jsonObject":Lorg/json/JSONObject;
    invoke-virtual {v2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v3

    .line 39
    .local v3, "keys":Ljava/util/Iterator;
    new-instance v4, Ljava/util/HashMap;

    invoke-direct {v4}, Ljava/util/HashMap;-><init>()V

    .line 40
    .local v4, "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_1

    .line 41
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    .line 42
    .local v5, "key":Ljava/lang/String;
    invoke-virtual {v2, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-interface {v4, v5, v6}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    .line 43
    nop

    .end local v5    # "key":Ljava/lang/String;
    goto :goto_0

    .line 44
    :cond_1
    return-object v4

    .line 45
    .end local v1    # "rawString":Ljava/lang/String;
    .end local v2    # "jsonObject":Lorg/json/JSONObject;
    .end local v3    # "keys":Ljava/util/Iterator;
    .end local v4    # "result":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    :catch_0
    move-exception v1

    .line 46
    .local v1, "e":Lorg/json/JSONException;
    invoke-virtual {v1}, Ljava/lang/RuntimeException;->printStackTrace()V

    .line 48
    .end local v1    # "e":Lorg/json/JSONException;
    return-object v0
.end method

.method public static c(Ljava/io/File;)Ljava/lang/String;
    .locals 1
    .param p0, "apkFile"    # Ljava/io/File;

    .line 52
    const v0, 0x71777777

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/gongxiang/e;->b(Ljava/io/File;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.class public final Lcom/bianfeng/ymnsdk/gongxiang/c;
.super Ljava/lang/Object;
.source "ChannelReader.java"


# direct methods
.method public static a(Ljava/io/File;)Lcom/bianfeng/ymnsdk/gongxiang/b;
    .locals 2

    .line 1
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/c;->b(Ljava/io/File;)Ljava/util/Map;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const-string v0, "ymn_channel"

    .line 5
    invoke-interface {p0, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 6
    invoke-interface {p0, v0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 7
    new-instance v0, Lcom/bianfeng/ymnsdk/gongxiang/b;

    invoke-direct {v0, v1, p0}, Lcom/bianfeng/ymnsdk/gongxiang/b;-><init>(Ljava/lang/String;Ljava/util/Map;)V

    return-object v0
.end method

.method public static b(Ljava/io/File;)Ljava/util/Map;
    .locals 5
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

    const/4 v0, 0x0

    .line 1
    :try_start_0
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/c;->c(Ljava/io/File;)Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_0

    return-object v0

    .line 5
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 6
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p0

    .line 7
    new-instance v2, Ljava/util/HashMap;

    invoke-direct {v2}, Ljava/util/HashMap;-><init>()V

    .line 8
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 9
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    .line 10
    invoke-virtual {v1, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_1
    return-object v2

    :catch_0
    move-exception p0

    .line 14
    invoke-virtual {p0}, Ljava/lang/RuntimeException;->printStackTrace()V

    return-object v0
.end method

.method public static c(Ljava/io/File;)Ljava/lang/String;
    .locals 1

    const v0, 0x71777777

    .line 1
    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/gongxiang/e;->b(Ljava/io/File;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

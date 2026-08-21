.class public final Lcom/bianfeng/ymnsdk/gongxiang/i;
.super Ljava/lang/Object;
.source "ChannelWriter.java"


# direct methods
.method public static a(Ljava/io/File;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "channel"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 31
    .local p2, "extraInfo":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const/4 v0, 0x0

    invoke-static {p0, p1, p2, v0}, Lcom/bianfeng/ymnsdk/gongxiang/i;->a(Ljava/io/File;Ljava/lang/String;Ljava/util/Map;Z)V

    .line 32
    return-void
.end method

.method public static a(Ljava/io/File;Ljava/lang/String;Ljava/util/Map;Z)V
    .locals 7
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "channel"    # Ljava/lang/String;
    .param p3, "lowMemory"    # Z
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;Z)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 35
    .local p2, "extraInfo":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 36
    .local v0, "newData":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/gongxiang/c;->b(Ljava/io/File;)Ljava/util/Map;

    move-result-object v1

    .line 37
    .local v1, "existsData":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    if-eqz v1, :cond_0

    .line 38
    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 40
    :cond_0
    const-string v2, "ymn_channel"

    if-eqz p2, :cond_1

    .line 42
    invoke-interface {p2, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 43
    invoke-interface {v0, p2}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 45
    :cond_1
    if-eqz p1, :cond_2

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v3

    if-lez v3, :cond_2

    .line 46
    invoke-interface {v0, v2, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 48
    :cond_2
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 49
    .local v2, "jsonObject":Lorg/json/JSONObject;
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 50
    .local v4, "item":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v2, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 51
    .end local v4    # "item":Ljava/util/Map$Entry;, "Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;"
    goto :goto_0

    .line 52
    :cond_3
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {p0, v3, p3}, Lcom/bianfeng/ymnsdk/gongxiang/i;->a(Ljava/io/File;Ljava/lang/String;Z)V

    .line 53
    return-void
.end method

.method public static a(Ljava/io/File;Ljava/lang/String;Z)V
    .locals 1
    .param p0, "apkFile"    # Ljava/io/File;
    .param p1, "string"    # Ljava/lang/String;
    .param p2, "lowMemory"    # Z
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/io/IOException;,
            Lcom/bianfeng/ymnsdk/gongxiang/f;
        }
    .end annotation

    .line 60
    const v0, 0x71777777

    invoke-static {p0, v0, p1, p2}, Lcom/bianfeng/ymnsdk/gongxiang/j;->a(Ljava/io/File;ILjava/lang/String;Z)V

    .line 61
    return-void
.end method

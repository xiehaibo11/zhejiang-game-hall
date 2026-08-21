.class public Lcom/bianfeng/afext/Afexter;
.super Ljava/lang/Object;
.source "Afexter.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 17
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static read(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/gongxiang/b;
    .locals 1
    .param p0, "apkFile"    # Ljava/lang/String;

    .line 43
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/gongxiang/c;->a(Ljava/io/File;)Lcom/bianfeng/ymnsdk/gongxiang/b;

    move-result-object v0

    return-object v0
.end method

.method public static readChannel(Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .param p0, "apkFile"    # Ljava/lang/String;

    .line 47
    invoke-static {p0}, Lcom/bianfeng/afext/Afexter;->read(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/gongxiang/b;

    move-result-object v0

    .line 48
    .local v0, "info":Lcom/bianfeng/ymnsdk/gongxiang/b;
    if-eqz v0, :cond_0

    .line 49
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/gongxiang/b;->a()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 51
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public static readExtraInfo(Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .param p0, "apkFile"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 55
    invoke-static {p0}, Lcom/bianfeng/afext/Afexter;->read(Ljava/lang/String;)Lcom/bianfeng/ymnsdk/gongxiang/b;

    move-result-object v0

    .line 56
    .local v0, "info":Lcom/bianfeng/ymnsdk/gongxiang/b;
    if-eqz v0, :cond_0

    .line 57
    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/gongxiang/b;->b()Ljava/util/Map;

    move-result-object v1

    return-object v1

    .line 59
    :cond_0
    const/4 v1, 0x0

    return-object v1
.end method

.method public static write(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6
    .param p0, "apkFile"    # Ljava/lang/String;
    .param p1, "channel"    # Ljava/lang/String;
    .param p2, "urlData"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 20
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 21
    .local v0, "extraInfo":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    const-string v1, "&"

    invoke-virtual {p2, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v1

    .line 22
    .local v1, "args":[Ljava/lang/String;
    const/4 v2, 0x0

    .local v2, "i":I
    :goto_0
    array-length v3, v1

    if-ge v2, v3, :cond_0

    .line 23
    aget-object v3, v1, v2

    const-string v4, "="

    invoke-virtual {v3, v4}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v3

    .line 24
    .local v3, "kv":[Ljava/lang/String;
    const/4 v4, 0x0

    aget-object v4, v3, v4

    const/4 v5, 0x1

    aget-object v5, v3, v5

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 22
    .end local v3    # "kv":[Ljava/lang/String;
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 26
    .end local v2    # "i":I
    :cond_0
    invoke-static {p0, p1, v0}, Lcom/bianfeng/afext/Afexter;->write(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    .line 27
    return-void
.end method

.method public static write(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 1
    .param p0, "apkFile"    # Ljava/lang/String;
    .param p1, "channel"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 39
    .local p2, "extraInfo":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0, p1, p2}, Lcom/bianfeng/ymnsdk/gongxiang/i;->a(Ljava/io/File;Ljava/lang/String;Ljava/util/Map;)V

    .line 40
    return-void
.end method

.method public static write(Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 5
    .param p0, "apkFile"    # Ljava/lang/String;
    .param p1, "channel"    # Ljava/lang/String;
    .param p2, "json"    # Lorg/json/JSONObject;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 30
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 31
    .local v0, "extraInfo":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;"
    invoke-virtual {p2}, Lorg/json/JSONObject;->keySet()Ljava/util/Set;

    move-result-object v1

    .line 32
    .local v1, "keys":Ljava/util/Set;, "Ljava/util/Set<Ljava/lang/String;>;"
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 33
    .local v3, "key":Ljava/lang/String;
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 34
    .end local v3    # "key":Ljava/lang/String;
    goto :goto_0

    .line 35
    :cond_0
    invoke-static {p0, p1, v0}, Lcom/bianfeng/afext/Afexter;->write(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V

    .line 36
    return-void
.end method

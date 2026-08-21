.class public Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;
.super Ljava/lang/Object;
.source "YmnGsonUtil.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static fromJson(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 2
    .param p0, "data"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 91
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 92
    :catch_0
    move-exception v0

    .line 93
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static fromJson(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 2
    .param p0, "data"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Object;",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 83
    .local p1, "tClass":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 84
    :catch_0
    move-exception v0

    .line 85
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 2
    .param p0, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "TT;>;)TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 75
    .local p1, "tClass":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 76
    :catch_0
    move-exception v0

    .line 77
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getLinkedHashMapFromStr(Ljava/lang/String;)Ljava/util/LinkedHashMap;
    .locals 2
    .param p0, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 63
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getLinkedHashMapFromStr(Ljava/lang/String;)Ljava/util/LinkedHashMap;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 64
    :catch_0
    move-exception v0

    .line 65
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getListFrom(Ljava/lang/Object;)Ljava/util/List;
    .locals 2
    .param p0, "data"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 55
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getListFrom(Ljava/lang/Object;)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 56
    :catch_0
    move-exception v0

    .line 57
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getListFrom(Ljava/lang/String;)Ljava/util/List;
    .locals 2
    .param p0, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 48
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getListFrom(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 49
    :catch_0
    move-exception v0

    .line 50
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getMapFrom(Landroid/content/Context;Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .param p0, "context"    # Landroid/content/Context;
    .param p1, "fileName"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Landroid/content/Context;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 33
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Landroid/content/Context;Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 34
    :catch_0
    move-exception v0

    .line 35
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getMapFrom(Ljava/io/Reader;)Ljava/util/Map;
    .locals 2
    .param p0, "data"    # Ljava/io/Reader;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/io/Reader;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 41
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/io/Reader;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 42
    :catch_0
    move-exception v0

    .line 43
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getMapFrom(Ljava/lang/Object;)Ljava/util/Map;
    .locals 2
    .param p0, "data"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Object;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 25
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/lang/Object;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 26
    :catch_0
    move-exception v0

    .line 27
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static getMapFrom(Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .param p0, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "TT;>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 17
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getMapFrom(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 18
    :catch_0
    move-exception v0

    .line 19
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public static isJsonArrayObject(Ljava/lang/String;)Z
    .locals 1
    .param p0, "data"    # Ljava/lang/String;

    .line 98
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->isJsonArrayObject(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static isJsonObject(Ljava/lang/String;)Z
    .locals 1
    .param p0, "data"    # Ljava/lang/String;

    .line 102
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->isJsonObject(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method public static toJson(Ljava/lang/Object;)Ljava/lang/String;
    .locals 1
    .param p0, "object"    # Ljava/lang/Object;

    .line 70
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->getGsonUtils()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

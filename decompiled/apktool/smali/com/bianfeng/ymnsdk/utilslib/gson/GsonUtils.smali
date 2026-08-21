.class public Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;
.super Ljava/lang/Object;
.source "GsonUtils.java"


# static fields
.field private static utils:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;


# instance fields
.field private TAG:Ljava/lang/String;

.field private gson:Lcom/google/gson/Gson;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    .line 32
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    .line 34
    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;
    .locals 2

    .line 37
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->utils:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    if-nez v0, :cond_0

    .line 38
    const-class v0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    monitor-enter v0

    .line 39
    :try_start_0
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    invoke-direct {v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->utils:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    .line 40
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 42
    :cond_0
    :goto_0
    sget-object v0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->utils:Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    return-object v0
.end method


# virtual methods
.method public fromJson(Ljava/lang/Object;)Ljava/lang/Object;
    .locals 3
    .param p1, "data"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 161
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fromJson Object"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 163
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-class v2, Ljava/lang/Object;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 164
    :catch_0
    move-exception v0

    .line 165
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public fromJson(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 3
    .param p1, "data"    # Ljava/lang/Object;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 152
    .local p2, "tClass":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fromJson Object Class"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 154
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 155
    :catch_0
    move-exception v0

    .line 156
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public fromJson(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 6
    .param p1, "data"    # Ljava/lang/Object;
    .param p2, "obj"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Object;",
            "Ljava/lang/Object;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 170
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fromJson Object"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 172
    :try_start_0
    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getGenericInterfaces()[Ljava/lang/reflect/Type;

    move-result-object v0

    .line 173
    .local v0, "types":[Ljava/lang/reflect/Type;
    const/4 v1, 0x0

    aget-object v2, v0, v1

    check-cast v2, Ljava/lang/reflect/ParameterizedType;

    .line 174
    .local v2, "pt":Ljava/lang/reflect/ParameterizedType;
    invoke-interface {v2}, Ljava/lang/reflect/ParameterizedType;->getActualTypeArguments()[Ljava/lang/reflect/Type;

    move-result-object v3

    .line 175
    .local v3, "typeArguments":[Ljava/lang/reflect/Type;
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    aget-object v1, v3, v1

    invoke-virtual {v4, v5, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 176
    .end local v0    # "types":[Ljava/lang/reflect/Type;
    .end local v2    # "pt":Ljava/lang/reflect/ParameterizedType;
    .end local v3    # "typeArguments":[Ljava/lang/reflect/Type;
    :catch_0
    move-exception v0

    .line 177
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 3
    .param p1, "data"    # Ljava/lang/String;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 142
    .local p2, "tClass":Ljava/lang/Class;, "Ljava/lang/Class<TT;>;"
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fromJson String Class"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 144
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v0, p1, p2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 145
    :catch_0
    move-exception v0

    .line 146
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 147
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public fromJson(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 5
    .param p1, "data"    # Ljava/lang/String;
    .param p2, "obj"    # Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ")TT;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 190
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " fromJson Object"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 192
    :try_start_0
    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getGenericInterfaces()[Ljava/lang/reflect/Type;

    move-result-object v0

    .line 193
    .local v0, "types":[Ljava/lang/reflect/Type;
    const/4 v1, 0x0

    aget-object v2, v0, v1

    check-cast v2, Ljava/lang/reflect/ParameterizedType;

    .line 194
    .local v2, "pt":Ljava/lang/reflect/ParameterizedType;
    invoke-interface {v2}, Ljava/lang/reflect/ParameterizedType;->getActualTypeArguments()[Ljava/lang/reflect/Type;

    move-result-object v3

    .line 195
    .local v3, "typeArguments":[Ljava/lang/reflect/Type;
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    aget-object v1, v3, v1

    invoke-virtual {v4, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 196
    .end local v0    # "types":[Ljava/lang/reflect/Type;
    .end local v2    # "pt":Ljava/lang/reflect/ParameterizedType;
    .end local v3    # "typeArguments":[Ljava/lang/reflect/Type;
    :catch_0
    move-exception v0

    .line 197
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public getLinkedHashMapFromStr(Ljava/lang/String;)Ljava/util/LinkedHashMap;
    .locals 3
    .param p1, "data"    # Ljava/lang/String;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 127
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getLinkedHashMapFromStr String"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 129
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$7;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$7;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v1}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/LinkedHashMap;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 130
    :catch_0
    move-exception v0

    .line 131
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public getListFrom(Ljava/lang/Object;)Ljava/util/List;
    .locals 3
    .param p1, "data"    # Ljava/lang/Object;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 112
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getListFrom Object"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 114
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$6;

    invoke-direct {v2, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$6;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v2}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 115
    :catch_0
    move-exception v0

    .line 116
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public getListFrom(Ljava/lang/String;)Ljava/util/List;
    .locals 3
    .param p1, "data"    # Ljava/lang/String;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 103
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getListFrom String"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 105
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$5;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$5;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v1}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 106
    :catch_0
    move-exception v0

    .line 107
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public getMapFrom(Landroid/content/Context;Ljava/lang/String;)Ljava/util/Map;
    .locals 4
    .param p1, "context"    # Landroid/content/Context;
    .param p2, "fileName"    # Ljava/lang/String;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 74
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getMapFrom context String"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 75
    const/4 v0, 0x0

    .line 77
    .local v0, "reader":Ljava/io/Reader;
    :try_start_0
    invoke-virtual {p1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    .line 78
    .local v1, "am":Landroid/content/res/AssetManager;
    new-instance v2, Ljava/io/InputStreamReader;

    invoke-virtual {v1, p2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;)V

    move-object v0, v2

    .line 79
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v3, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$3;

    invoke-direct {v3, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$3;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v3}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v3

    invoke-virtual {v2, v0, v3}, Lcom/google/gson/Gson;->fromJson(Ljava/io/Reader;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 83
    nop

    .line 85
    :try_start_1
    invoke-virtual {v0}, Ljava/io/Reader;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_0

    .line 88
    goto :goto_0

    .line 86
    :catch_0
    move-exception v3

    .line 87
    .local v3, "e":Ljava/io/IOException;
    invoke-virtual {v3}, Ljava/io/IOException;->printStackTrace()V

    .line 79
    .end local v3    # "e":Ljava/io/IOException;
    :goto_0
    return-object v2

    .line 83
    .end local v1    # "am":Landroid/content/res/AssetManager;
    :catchall_0
    move-exception v1

    goto :goto_1

    .line 80
    :catch_1
    move-exception v1

    .line 81
    .local v1, "e":Ljava/lang/Exception;
    :try_start_2
    new-instance v2, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v2, v3, v1}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .end local v0    # "reader":Ljava/io/Reader;
    .end local p1    # "context":Landroid/content/Context;
    .end local p2    # "fileName":Ljava/lang/String;
    throw v2
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 83
    .end local v1    # "e":Ljava/lang/Exception;
    .restart local v0    # "reader":Ljava/io/Reader;
    .restart local p1    # "context":Landroid/content/Context;
    .restart local p2    # "fileName":Ljava/lang/String;
    :goto_1
    if-eqz v0, :cond_0

    .line 85
    :try_start_3
    invoke-virtual {v0}, Ljava/io/Reader;->close()V
    :try_end_3
    .catch Ljava/io/IOException; {:try_start_3 .. :try_end_3} :catch_2

    .line 88
    goto :goto_2

    .line 86
    :catch_2
    move-exception v2

    .line 87
    .local v2, "e":Ljava/io/IOException;
    invoke-virtual {v2}, Ljava/io/IOException;->printStackTrace()V

    .line 90
    .end local v2    # "e":Ljava/io/IOException;
    :cond_0
    :goto_2
    throw v1
.end method

.method public getMapFrom(Ljava/io/Reader;)Ljava/util/Map;
    .locals 3
    .param p1, "data"    # Ljava/io/Reader;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 94
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getMapFrom Reader"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 96
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$4;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$4;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v1}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/io/Reader;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 97
    :catch_0
    move-exception v0

    .line 98
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public getMapFrom(Ljava/lang/Object;)Ljava/util/Map;
    .locals 3
    .param p1, "data"    # Ljava/lang/Object;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 65
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getMapFrom Object"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 67
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$2;

    invoke-direct {v2, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$2;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v2}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 68
    :catch_0
    move-exception v0

    .line 69
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public getMapFrom(Ljava/lang/String;)Ljava/util/Map;
    .locals 3
    .param p1, "data"    # Ljava/lang/String;
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
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 52
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " getMapFrom String"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 57
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils$1;-><init>(Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;)V

    invoke-virtual {v1}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 58
    :catch_0
    move-exception v0

    .line 59
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-direct {v1, v2, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    throw v1
.end method

.method public isJsonArrayObject(Ljava/lang/String;)Z
    .locals 2
    .param p1, "data"    # Ljava/lang/String;

    .line 212
    :try_start_0
    new-instance v0, Lcom/google/gson/JsonParser;

    invoke-direct {v0}, Lcom/google/gson/JsonParser;-><init>()V

    invoke-virtual {v0, p1}, Lcom/google/gson/JsonParser;->parse(Ljava/lang/String;)Lcom/google/gson/JsonElement;

    move-result-object v0

    invoke-virtual {v0}, Lcom/google/gson/JsonElement;->getAsJsonArray()Lcom/google/gson/JsonArray;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 215
    nop

    .line 216
    const/4 v0, 0x1

    return v0

    .line 213
    :catch_0
    move-exception v0

    .line 214
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return v1
.end method

.method public isJsonObject(Ljava/lang/String;)Z
    .locals 2
    .param p1, "data"    # Ljava/lang/String;

    .line 203
    :try_start_0
    new-instance v0, Lcom/google/gson/JsonParser;

    invoke-direct {v0}, Lcom/google/gson/JsonParser;-><init>()V

    invoke-virtual {v0, p1}, Lcom/google/gson/JsonParser;->parse(Ljava/lang/String;)Lcom/google/gson/JsonElement;

    move-result-object v0

    invoke-virtual {v0}, Lcom/google/gson/JsonElement;->getAsJsonObject()Lcom/google/gson/JsonObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 206
    nop

    .line 207
    const/4 v0, 0x1

    return v0

    .line 204
    :catch_0
    move-exception v0

    .line 205
    .local v0, "e":Ljava/lang/Exception;
    const/4 v1, 0x0

    return v1
.end method

.method public parseJsonArray(Ljava/lang/String;)Lcom/google/gson/JsonArray;
    .locals 2
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 241
    :try_start_0
    new-instance v0, Lcom/google/gson/JsonParser;

    invoke-direct {v0}, Lcom/google/gson/JsonParser;-><init>()V

    invoke-virtual {v0, p1}, Lcom/google/gson/JsonParser;->parse(Ljava/lang/String;)Lcom/google/gson/JsonElement;

    move-result-object v0

    invoke-virtual {v0}, Lcom/google/gson/JsonElement;->getAsJsonArray()Lcom/google/gson/JsonArray;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 242
    :catch_0
    move-exception v0

    .line 243
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public parseJsonObject(Ljava/lang/String;)Lcom/google/gson/JsonObject;
    .locals 2
    .param p1, "data"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;
        }
    .end annotation

    .line 227
    :try_start_0
    new-instance v0, Lcom/google/gson/JsonParser;

    invoke-direct {v0}, Lcom/google/gson/JsonParser;-><init>()V

    invoke-virtual {v0, p1}, Lcom/google/gson/JsonParser;->parse(Ljava/lang/String;)Lcom/google/gson/JsonElement;

    move-result-object v0

    invoke-virtual {v0}, Lcom/google/gson/JsonElement;->getAsJsonObject()Lcom/google/gson/JsonObject;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 228
    :catch_0
    move-exception v0

    .line 229
    .local v0, "e":Ljava/lang/Exception;
    new-instance v1, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;

    invoke-direct {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method public toJson(Ljava/lang/Object;)Ljava/lang/String;
    .locals 2
    .param p1, "object"    # Ljava/lang/Object;

    .line 137
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->TAG:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " toJson Object"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/log/UtilsLogger;->i(Ljava/lang/String;)I

    .line 138
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v0, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

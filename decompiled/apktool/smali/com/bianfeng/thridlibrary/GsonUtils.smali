.class public Lcom/bianfeng/thridlibrary/GsonUtils;
.super Ljava/lang/Object;
.source "GsonUtils.java"


# static fields
.field private static volatile utils:Lcom/bianfeng/thridlibrary/GsonUtils;


# instance fields
.field private gson:Lcom/google/gson/Gson;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 12
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 13
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/thridlibrary/GsonUtils;->gson:Lcom/google/gson/Gson;

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/thridlibrary/GsonUtils;
    .locals 2

    .line 17
    sget-object v0, Lcom/bianfeng/thridlibrary/GsonUtils;->utils:Lcom/bianfeng/thridlibrary/GsonUtils;

    if-nez v0, :cond_1

    .line 18
    const-class v0, Lcom/bianfeng/thridlibrary/GsonUtils;

    monitor-enter v0

    .line 19
    :try_start_0
    sget-object v1, Lcom/bianfeng/thridlibrary/GsonUtils;->utils:Lcom/bianfeng/thridlibrary/GsonUtils;

    if-nez v1, :cond_0

    .line 20
    new-instance v1, Lcom/bianfeng/thridlibrary/GsonUtils;

    invoke-direct {v1}, Lcom/bianfeng/thridlibrary/GsonUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/thridlibrary/GsonUtils;->utils:Lcom/bianfeng/thridlibrary/GsonUtils;

    .line 22
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 24
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/thridlibrary/GsonUtils;->utils:Lcom/bianfeng/thridlibrary/GsonUtils;

    return-object v0
.end method


# virtual methods
.method public fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
    .locals 1
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

    .line 32
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v0, p1, p2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public fromJson(Ljava/lang/String;)Ljava/util/Map;
    .locals 2
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

    .line 37
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/thridlibrary/GsonUtils$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/thridlibrary/GsonUtils$1;-><init>(Lcom/bianfeng/thridlibrary/GsonUtils;)V

    invoke-virtual {v1}, Lcom/bianfeng/thridlibrary/GsonUtils$1;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1
.end method

.method public fromJsonWithObject(Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 41
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/thridlibrary/GsonUtils$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/thridlibrary/GsonUtils$2;-><init>(Lcom/bianfeng/thridlibrary/GsonUtils;)V

    invoke-virtual {v1}, Lcom/bianfeng/thridlibrary/GsonUtils$2;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    return-object p1
.end method

.method public getFromMap(Ljava/lang/String;)Ljava/util/Map;
    .locals 2
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

    .line 46
    :try_start_0
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/GsonUtils;->gson:Lcom/google/gson/Gson;

    new-instance v1, Lcom/bianfeng/thridlibrary/GsonUtils$3;

    invoke-direct {v1, p0}, Lcom/bianfeng/thridlibrary/GsonUtils$3;-><init>(Lcom/bianfeng/thridlibrary/GsonUtils;)V

    .line 47
    invoke-virtual {v1}, Lcom/bianfeng/thridlibrary/GsonUtils$3;->getType()Ljava/lang/reflect/Type;

    move-result-object v1

    .line 46
    invoke-virtual {v0, p1, v1}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    .line 49
    :catch_0
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    return-object p1
.end method

.method public toJson(Ljava/lang/Object;)Ljava/lang/String;
    .locals 1

    .line 28
    iget-object v0, p0, Lcom/bianfeng/thridlibrary/GsonUtils;->gson:Lcom/google/gson/Gson;

    invoke-virtual {v0, p1}, Lcom/google/gson/Gson;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

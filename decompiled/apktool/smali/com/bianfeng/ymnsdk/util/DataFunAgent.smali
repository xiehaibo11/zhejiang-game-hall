.class public Lcom/bianfeng/ymnsdk/util/DataFunAgent;
.super Ljava/lang/Object;
.source "DataFunAgent.java"


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static sessionId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static arrayToMapItem([Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .param p0, "args"    # [Ljava/lang/String;

    .line 58
    if-eqz p0, :cond_2

    array-length v0, p0

    if-nez v0, :cond_0

    goto :goto_1

    .line 61
    :cond_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 62
    .local v0, "json":Lorg/json/JSONArray;
    const/4 v1, 0x0

    .local v1, "i":I
    :goto_0
    array-length v2, p0

    if-ge v1, v2, :cond_1

    .line 63
    aget-object v2, p0, v1

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 62
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 65
    .end local v1    # "i":I
    :cond_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v1

    return-object v1

    .line 59
    .end local v0    # "json":Lorg/json/JSONArray;
    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private static getDeviceId(Landroid/content/Context;)Ljava/lang/String;
    .locals 1
    .param p0, "context"    # Landroid/content/Context;

    .line 37
    const-string v0, ""

    return-object v0
.end method

.method protected static init(Landroid/content/Context;)V
    .locals 3
    .param p0, "context"    # Landroid/content/Context;

    .line 24
    :try_start_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->sessionId:Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 28
    goto :goto_0

    .line 25
    :catch_0
    move-exception v0

    .line 26
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 27
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->sessionId:Ljava/lang/String;

    .line 29
    .end local v0    # "e":Ljava/lang/Exception;
    :goto_0
    return-void
.end method

.method protected static onEvent(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;)V
    .locals 0
    .param p0, "eventId"    # Ljava/lang/String;
    .param p1, "ext"    # Ljava/lang/String;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 33
    .local p2, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    return-void
.end method

.method protected static testCallFunction(Ljava/lang/String;)V
    .locals 1
    .param p0, "functionName"    # Ljava/lang/String;

    .line 45
    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->testCallFunction(Ljava/lang/String;[Ljava/lang/String;)V

    .line 46
    return-void
.end method

.method protected static testCallFunction(Ljava/lang/String;[Ljava/lang/String;)V
    .locals 3
    .param p0, "functionName"    # Ljava/lang/String;
    .param p1, "args"    # [Ljava/lang/String;

    .line 49
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 50
    .local v0, "map":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    sget-object v1, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->sessionId:Ljava/lang/String;

    const-string v2, "sessionId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 51
    const-string v1, "functionName"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 52
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/DataFunAgent;->arrayToMapItem([Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "args"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 53
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->getConfigId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const-string v2, "package_id"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 55
    return-void
.end method

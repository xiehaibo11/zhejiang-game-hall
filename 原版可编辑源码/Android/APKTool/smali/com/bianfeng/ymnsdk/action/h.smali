.class public Lcom/bianfeng/ymnsdk/action/h;
.super Lcom/bianfeng/ymnsdk/action/ActionSupport;
.source "RequestServerListAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/action/ActionSupport<",
        "Lcom/bianfeng/ymnsdk/entity/UrlConfig;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0
    .param p1, "context"    # Landroid/content/Context;

    .line 13
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 14
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 37
    const-string v0, "server/getList"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 5
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 18
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 20
    .local v0, "json":Lorg/json/JSONObject;
    :try_start_0
    const-string v1, "platform_id"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 21
    const-string v1, "platform_name"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 22
    const-string v1, "platform_ver"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 23
    const-string v1, "isDebug"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->isDebugMode()Z

    move-result v2

    const/4 v3, 0x1

    const/4 v4, 0x0

    if-eqz v2, :cond_0

    const/4 v2, 0x1

    goto :goto_0

    :cond_0
    const/4 v2, 0x0

    :goto_0
    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 25
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 26
    .local v1, "data":Lorg/json/JSONObject;
    const-string v2, "pid"

    aget-object v4, p2, v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 27
    const-string v2, "gid"

    aget-object v3, p2, v3

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 28
    const-string v2, "data"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 31
    nop

    .line 32
    .end local v1    # "data":Lorg/json/JSONObject;
    return-object v0

    .line 29
    :catch_0
    move-exception v1

    .line 30
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v2, v1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;
    .locals 2
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 42
    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v0

    const-class v1, Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 10
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/h;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lcom/bianfeng/ymnsdk/entity/UrlConfig;

    move-result-object p1

    return-object p1
.end method

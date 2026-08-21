.class public Lcom/bianfeng/ymnsdk/action/d;
.super Lcom/bianfeng/ymnsdk/action/ActionSupport;
.source "RequestLoginAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/action/ActionSupport<",
        "Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;",
        ">;"
    }
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    const-string p1, "uid"

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->a:Ljava/lang/String;

    const-string p1, "pid"

    .line 3
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->b:Ljava/lang/String;

    const-string p1, "gid"

    .line 4
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->c:Ljava/lang/String;

    const-string p1, "username"

    .line 8
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->d:Ljava/lang/String;

    const-string p1, "session"

    .line 9
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->e:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    const-string v0, "login"

    .line 1
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldRequestEvent(Ljava/lang/String;)V

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    .line 3
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "platform_id"

    .line 5
    :try_start_0
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "platform_name"

    .line 6
    :try_start_1
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v1, "platform_ver"

    .line 7
    :try_start_2
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v1, "isDebug"

    .line 8
    :try_start_3
    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->isDebugMode()Z

    move-result p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    const-string p1, "data"

    const/4 v1, 0x0

    .line 10
    :try_start_4
    aget-object v1, p2, v1

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatType(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    const-string p1, "ext"

    const/4 v1, 0x1

    .line 11
    :try_start_5
    aget-object p2, p2, v1

    invoke-virtual {p0, p2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatType(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 12
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getLoginTrace()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->setTransactionId(Ljava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_0

    return-object v0

    :catch_0
    move-exception p1

    .line 14
    new-instance p2, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {p2, p1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw p2
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 2
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_id"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 3
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_name"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "thirdparty"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 6
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;-><init>()V

    const/4 v1, 0x1

    .line 8
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnLogined(Z)V

    .line 9
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserIdInt(Ljava/lang/String;)V

    .line 10
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserId(Ljava/lang/String;)V

    .line 11
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setPlatformUserId(Ljava/lang/String;)V

    .line 12
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnSession(Ljava/lang/String;)V

    .line 13
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserName(Ljava/lang/String;)V

    .line 14
    iget-object p1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->ext:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setResponseExt(Ljava/lang/Object;)V

    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/d;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object p1

    return-object p1
.end method

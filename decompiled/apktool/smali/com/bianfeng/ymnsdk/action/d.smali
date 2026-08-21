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
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 25
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 14
    const-string v0, "uid"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/d;->a:Ljava/lang/String;

    .line 15
    const-string v0, "pid"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/d;->b:Ljava/lang/String;

    .line 16
    const-string v0, "gid"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/d;->c:Ljava/lang/String;

    .line 20
    const-string v0, "username"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/d;->d:Ljava/lang/String;

    .line 21
    const-string v0, "session"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/action/d;->e:Ljava/lang/String;

    .line 26
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    .line 50
    const-string v0, "login"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 51
    .local v0, "url":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginOldRequestEvent(Ljava/lang/String;)V

    .line 52
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

    .line 30
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    .line 32
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 34
    .local v0, "json":Lorg/json/JSONObject;
    :try_start_0
    const-string v1, "platform_id"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 35
    const-string v1, "platform_name"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 36
    const-string v1, "platform_ver"

    invoke-interface {p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginVersion()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 37
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

    .line 39
    const-string v1, "data"

    aget-object v2, p2, v4

    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatType(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 40
    const-string v1, "ext"

    aget-object v2, p2, v3

    invoke-virtual {p0, v2}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatType(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 41
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getLoginTrace()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->setTransactionId(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 44
    nop

    .line 45
    return-object v0

    .line 42
    :catch_0
    move-exception v1

    .line 43
    .local v1, "e":Ljava/lang/Exception;
    new-instance v2, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;

    invoke-direct {v2, v1}, Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;-><init>(Ljava/lang/Throwable;)V

    throw v2
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 3
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 57
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_id"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 58
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_name"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 59
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/d;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "thirdparty"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 61
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;-><init>()V

    .line 63
    .local v0, "userInfo":Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnLogined(Z)V

    .line 64
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserIdInt(Ljava/lang/String;)V

    .line 65
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserId(Ljava/lang/String;)V

    .line 66
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setPlatformUserId(Ljava/lang/String;)V

    .line 67
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnSession(Ljava/lang/String;)V

    .line 68
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/d;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserName(Ljava/lang/String;)V

    .line 69
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->ext:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setResponseExt(Ljava/lang/Object;)V

    .line 70
    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 12
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/d;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object p1

    return-object p1
.end method

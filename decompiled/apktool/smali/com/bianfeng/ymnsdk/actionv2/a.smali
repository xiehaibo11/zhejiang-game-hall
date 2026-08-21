.class public Lcom/bianfeng/ymnsdk/actionv2/a;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;
.source "RequestLoginActionV2.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<",
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

    .line 31
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;-><init>(Landroid/content/Context;)V

    .line 18
    const-string v0, "uid"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->a:Ljava/lang/String;

    .line 19
    const-string v0, "pid"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->b:Ljava/lang/String;

    .line 20
    const-string v0, "gid"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->c:Ljava/lang/String;

    .line 24
    const-string v0, "username"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->d:Ljava/lang/String;

    .line 25
    const-string v0, "session"

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->e:Ljava/lang/String;

    .line 32
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    .line 49
    const-string v0, "sync/login_data"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 51
    .local v0, "url":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginNewRequest(Ljava/lang/String;)V

    .line 52
    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 1
    .param p1, "plugin"    # Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;
    .param p2, "datas"    # [Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 36
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    .line 44
    const/4 v0, 0x0

    return-object v0
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 3
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 57
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_id"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 58
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_name"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 59
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "thirdparty"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 60
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;-><init>()V

    .line 61
    .local v0, "userInfo":Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnLogined(Z)V

    .line 62
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserIdInt(Ljava/lang/String;)V

    .line 63
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserId(Ljava/lang/String;)V

    .line 64
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setPlatformUserId(Ljava/lang/String;)V

    .line 65
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnSession(Ljava/lang/String;)V

    .line 66
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserName(Ljava/lang/String;)V

    .line 67
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->ext:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setResponseExt(Ljava/lang/Object;)V

    .line 68
    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 16
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/a;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object p1

    return-object p1
.end method

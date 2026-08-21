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
    .locals 0

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;-><init>(Landroid/content/Context;)V

    const-string p1, "uid"

    .line 2
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->a:Ljava/lang/String;

    const-string p1, "pid"

    .line 3
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->b:Ljava/lang/String;

    const-string p1, "gid"

    .line 4
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->c:Ljava/lang/String;

    const-string p1, "username"

    .line 8
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->d:Ljava/lang/String;

    const-string p1, "session"

    .line 9
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->e:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    const-string v0, "sync/login_data"

    .line 1
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginNewRequest(Ljava/lang/String;)V

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 1
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    const/4 p1, 0x0

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 2
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_id"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 3
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "platform_name"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 4
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->f:Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;

    invoke-interface {v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;->getPluginName()Ljava/lang/String;

    move-result-object v1

    const-string v2, "thirdparty"

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 5
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;-><init>()V

    const/4 v1, 0x1

    .line 6
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnLogined(Z)V

    .line 7
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserIdInt(Ljava/lang/String;)V

    .line 8
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserId(Ljava/lang/String;)V

    .line 9
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setPlatformUserId(Ljava/lang/String;)V

    .line 10
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnSession(Ljava/lang/String;)V

    .line 11
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/actionv2/a;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserName(Ljava/lang/String;)V

    .line 12
    iget-object p1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->ext:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setResponseExt(Ljava/lang/Object;)V

    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/a;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object p1

    return-object p1
.end method

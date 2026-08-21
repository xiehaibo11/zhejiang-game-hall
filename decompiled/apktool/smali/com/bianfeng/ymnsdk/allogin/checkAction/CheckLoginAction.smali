.class public Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;
.super Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;
.source "CheckLoginAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3<",
        "Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;",
        ">;"
    }
.end annotation


# instance fields
.field private LOGIN_SUC_RS_GID:Ljava/lang/String;

.field private LOGIN_SUC_RS_PID:Ljava/lang/String;

.field private LOGIN_SUC_RS_SESSION:Ljava/lang/String;

.field private LOGIN_SUC_RS_UID:Ljava/lang/String;

.field private LOGIN_SUC_RS_USERNAME:Ljava/lang/String;

.field private context:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3;-><init>(Landroid/content/Context;)V

    const-string p1, "uid"

    .line 15
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_UID:Ljava/lang/String;

    const-string p1, "pid"

    .line 16
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_PID:Ljava/lang/String;

    const-string p1, "gid"

    .line 17
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_GID:Ljava/lang/String;

    const-string p1, "username"

    .line 21
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_USERNAME:Ljava/lang/String;

    const-string p1, "session"

    .line 22
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_SESSION:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    const-string v0, "check"

    .line 45
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 47
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->getInstance()Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/util/YmnDataFunUtils;->loginNewRequest(Ljava/lang/String;)V

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    const/4 p1, 0x0

    .line 31
    aget-object p1, p2, p1

    check-cast p1, Ljava/lang/String;

    .line 32
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 34
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "session"

    .line 35
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "sid"

    .line 36
    invoke-virtual {p2, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 38
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object p2
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 54
    new-instance v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-direct {v0}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;-><init>()V

    const/4 v1, 0x1

    .line 55
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnLogined(Z)V

    .line 56
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_PID:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserIdInt(Ljava/lang/String;)V

    .line 57
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_UID:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserId(Ljava/lang/String;)V

    .line 58
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_GID:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setPlatformUserId(Ljava/lang/String;)V

    .line 59
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_SESSION:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnSession(Ljava/lang/String;)V

    .line 60
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->data:Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->LOGIN_SUC_RS_USERNAME:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setYmnUserName(Ljava/lang/String;)V

    .line 61
    iget-object v1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->ext:Ljava/lang/Object;

    if-eqz v1, :cond_0

    .line 62
    iget-object p1, p1, Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;->ext:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;->setResponseExt(Ljava/lang/Object;)V

    :cond_0
    return-object v0
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 13
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/allogin/checkAction/CheckLoginAction;->onSuccess(Lcom/bianfeng/ymnsdk/actionv2/ActionSupportV3$ResponseResult;)Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    move-result-object p1

    return-object p1
.end method

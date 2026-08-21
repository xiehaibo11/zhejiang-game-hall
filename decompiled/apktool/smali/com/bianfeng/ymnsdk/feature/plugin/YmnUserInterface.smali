.class public abstract Lcom/bianfeng/ymnsdk/feature/plugin/YmnUserInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "YmnUserInterface.java"

# interfaces
.implements Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature;
.implements Lcom/bianfeng/ymnsdk/YmnCode;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 16
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    return-void
.end method


# virtual methods
.method public enterPlatform()V
    .locals 0

    .line 104
    return-void
.end method

.method public exit()V
    .locals 0

    .line 84
    return-void
.end method

.method public getUserInfo()Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    .locals 2

    .line 94
    :try_start_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->getLoginedData()Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-class v1, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;

    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bianfeng/ymnsdk/feature/protocol/IUserFeature$UserInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 95
    :catch_0
    move-exception v0

    .line 96
    .local v0, "e":Ljava/lang/Exception;
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 97
    const/4 v1, 0x0

    return-object v1
.end method

.method public hideToolBar()V
    .locals 0

    .line 74
    return-void
.end method

.method public isLogined()Z
    .locals 1

    .line 58
    const/4 v0, 0x0

    return v0
.end method

.method public logout()V
    .locals 0

    .line 64
    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1
    .param p1, "context"    # Landroid/content/Context;

    .line 20
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onInit(Landroid/content/Context;)V

    .line 21
    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 22
    return-void
.end method

.method public sendResult(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 26
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnUserInterface;->setInitFlagsByReturnCode(I)V

    .line 27
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResult(ILjava/lang/String;)V

    .line 28
    return-void
.end method

.method public sendResultWithoutInterceptors(ILjava/lang/String;)V
    .locals 0
    .param p1, "code"    # I
    .param p2, "msg"    # Ljava/lang/String;

    .line 35
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnUserInterface;->setInitFlagsByReturnCode(I)V

    .line 36
    invoke-super {p0, p1, p2}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->sendResultWithoutInterceptors(ILjava/lang/String;)V

    .line 37
    return-void
.end method

.method protected setInitFlagsByReturnCode(I)V
    .locals 2
    .param p1, "code"    # I

    .line 45
    const/4 v0, 0x0

    const/16 v1, 0x64

    if-ne p1, v1, :cond_0

    .line 46
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 47
    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 49
    :cond_0
    const/16 v1, 0x65

    if-ne p1, v1, :cond_1

    .line 50
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setIniting(Z)V

    .line 51
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->setInited(Z)V

    .line 53
    :cond_1
    return-void
.end method

.method public showToolBar()V
    .locals 0

    .line 69
    return-void
.end method

.method public submitUserInfo(Ljava/util/LinkedHashMap;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 89
    .local p1, "data":Ljava/util/LinkedHashMap;, "Ljava/util/LinkedHashMap<Ljava/lang/String;Ljava/lang/String;>;"
    return-void
.end method

.method public switchAccount()V
    .locals 0

    .line 79
    return-void
.end method

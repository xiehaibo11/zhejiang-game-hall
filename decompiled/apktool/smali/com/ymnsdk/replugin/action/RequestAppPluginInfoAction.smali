.class public Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;
.super Lcom/ymnsdk/replugin/action/ActionSupport;
.source "RequestAppPluginInfoAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/ymnsdk/replugin/action/ActionSupport<",
        "Lcom/ymnsdk/replugin/entity/AppPluginInfo;",
        ">;"
    }
.end annotation


# instance fields
.field requestParams:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 18
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;-><init>(Landroid/content/Context;)V

    const-string p1, ""

    .line 15
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->requestParams:Ljava/lang/String;

    .line 19
    iget-object p1, p0, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->setMethod(I)V

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 2

    .line 29
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/action/URLManager;->getHost()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/app/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->requestParams:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/manifest.json"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public varargs onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 24
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    return-object p1
.end method

.method protected onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lcom/ymnsdk/replugin/entity/AppPluginInfo;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 38
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object p1

    const-class v1, Lcom/ymnsdk/replugin/entity/AppPluginInfo;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/AppPluginInfo;

    return-object p1
.end method

.method protected bridge synthetic onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 14
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lcom/ymnsdk/replugin/entity/AppPluginInfo;

    move-result-object p1

    return-object p1
.end method

.method public setRequestParams(Ljava/lang/String;)V
    .locals 0

    .line 33
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;->requestParams:Ljava/lang/String;

    return-void
.end method

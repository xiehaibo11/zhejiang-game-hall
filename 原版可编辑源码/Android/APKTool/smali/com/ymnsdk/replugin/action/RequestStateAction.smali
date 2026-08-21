.class public Lcom/ymnsdk/replugin/action/RequestStateAction;
.super Lcom/ymnsdk/replugin/action/ActionSupport;
.source "RequestStateAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/ymnsdk/replugin/action/ActionSupport<",
        "Lcom/ymnsdk/replugin/entity/PluginState;",
        ">;"
    }
.end annotation


# instance fields
.field murl:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 14
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;-><init>(Landroid/content/Context;)V

    const-string p1, ""

    .line 11
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/RequestStateAction;->murl:Ljava/lang/String;

    .line 15
    iget-object p1, p0, Lcom/ymnsdk/replugin/action/RequestStateAction;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->setMethod(I)V

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/RequestStateAction;->murl:Ljava/lang/String;

    return-object v0
.end method

.method public varargs onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 20
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    return-object p1
.end method

.method protected onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lcom/ymnsdk/replugin/entity/PluginState;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 34
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object p1

    const-class v1, Lcom/ymnsdk/replugin/entity/PluginState;

    invoke-virtual {v0, p1, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/PluginState;

    return-object p1
.end method

.method protected bridge synthetic onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 10
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/RequestStateAction;->onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lcom/ymnsdk/replugin/entity/PluginState;

    move-result-object p1

    return-object p1
.end method

.method public setURL(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/RequestStateAction;->murl:Ljava/lang/String;

    return-void
.end method

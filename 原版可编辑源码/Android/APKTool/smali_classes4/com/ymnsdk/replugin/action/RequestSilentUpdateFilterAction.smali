.class public Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;
.super Lcom/ymnsdk/replugin/action/ActionSupport;
.source "RequestSilentUpdateFilterAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/ymnsdk/replugin/action/ActionSupport<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# instance fields
.field mUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 13
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 14
    iget-object p1, p0, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->setMethod(I)V

    .line 15
    iput-object p2, p0, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->mUrl:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 30
    iget-object v0, p0, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->mUrl:Ljava/lang/String;

    return-object v0
.end method

.method public varargs onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 20
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    const/4 v1, 0x0

    aget-object p1, p1, v1

    invoke-virtual {v0, p1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 22
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 24
    :catch_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    return-object p1
.end method

.method protected bridge synthetic onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 9
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;->onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 35
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

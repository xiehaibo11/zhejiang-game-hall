.class public Lcom/ymnsdk/replugin/action/RequestPluginsInfoAction;
.super Lcom/ymnsdk/replugin/action/ActionSupport;
.source "RequestPluginsInfoAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/ymnsdk/replugin/action/ActionSupport<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 14
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 15
    iget-object p1, p0, Lcom/ymnsdk/replugin/action/RequestPluginsInfoAction;->httpHelper:Lcom/ymnsdk/replugin/action/HttpHelper;

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->setMethod(I)V

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    .line 32
    invoke-static {}, Lcom/ymnsdk/replugin/action/URLManager;->getHost()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    const/4 v1, 0x1

    const-string v2, "plugin/update"

    aput-object v2, v0, v1

    const-string v1, "%s/%s"

    invoke-static {v1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public varargs onPrepareData([Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    const/4 v0, 0x0

    .line 20
    aget-object v1, p1, v0

    instance-of v1, v1, Ljava/lang/String;

    if-eqz v1, :cond_0

    .line 22
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    aget-object p1, p1, v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v1

    .line 24
    :catch_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    return-object p1

    .line 27
    :cond_0
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

    .line 11
    invoke-virtual {p0, p1}, Lcom/ymnsdk/replugin/action/RequestPluginsInfoAction;->onSuccess(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;

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

    .line 37
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    return-object v0
.end method

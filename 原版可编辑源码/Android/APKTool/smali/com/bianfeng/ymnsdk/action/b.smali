.class public Lcom/bianfeng/ymnsdk/action/b;
.super Lcom/bianfeng/ymnsdk/action/ActionSupport;
.source "RequestIdentityStatusAction.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/bianfeng/ymnsdk/action/ActionSupport<",
        "Lorg/json/JSONObject;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2
    .param p1, "context"    # Landroid/content/Context;

    .line 18
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 19
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->setMethod(I)V

    .line 20
    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    .line 36
    const-string v0, "player/getRealName"

    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

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

    .line 24
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v1, 0x0

    aget-object v1, p2, v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "type"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 25
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v1, 0x1

    aget-object v1, p2, v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "area_id"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v1, 0x2

    aget-object v1, p2, v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "numid"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 27
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const-string v1, "appid"

    const-string v2, "1148"

    invoke-virtual {v0, v1, v2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 28
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const-string v2, "time"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 29
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v1

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const-string v3, "c986f7b40c468a3a3b1087d0eb08628b"

    invoke-virtual {v1, v2, v3}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getSign(Ljava/util/TreeMap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "sign"

    invoke-virtual {v0, v2, v1}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 30
    const/4 v0, 0x0

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
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/b;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;
    .locals 2
    .param p1, "result"    # Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "request identity status resource success : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->dataAsString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ymn_ActionSupport"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 42
    iget-object v0, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->data:Lorg/json/JSONObject;

    return-object v0
.end method

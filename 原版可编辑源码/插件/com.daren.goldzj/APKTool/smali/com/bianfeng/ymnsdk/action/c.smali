.class public Lcom/bianfeng/ymnsdk/action/c;
.super Lcom/bianfeng/ymnsdk/action/ActionSupport;
.source "RequestIdentityUpdateAction.java"


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
    .locals 1

    .line 1
    invoke-direct {p0, p1}, Lcom/bianfeng/ymnsdk/action/ActionSupport;-><init>(Landroid/content/Context;)V

    .line 2
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->httpHelper:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->setMethod(I)V

    return-void
.end method


# virtual methods
.method protected getURL()Ljava/lang/String;
    .locals 1

    const-string v0, "player/setRealName"

    .line 1
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/action/ActionSupport;->formatUrl(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public varargs onPrepareData(Lcom/bianfeng/ymnsdk/feature/protocol/IPlugin;[Ljava/lang/Object;)Lorg/json/JSONObject;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lcom/bianfeng/ymnsdk/util/exception/YmnsdkException;
        }
    .end annotation

    .line 1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v0, 0x0

    aget-object v0, p2, v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "type"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v0, 0x1

    aget-object v0, p2, v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "area_id"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 3
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v0, 0x2

    aget-object v0, p2, v0

    check-cast v0, Ljava/lang/String;

    const-string v1, "numid"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v0

    const/4 v1, 0x3

    aget-object v1, p2, v1

    check-cast v1, Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlEncode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "name"

    invoke-virtual {p1, v1, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const/4 v0, 0x4

    aget-object p2, p2, v0

    check-cast p2, Ljava/lang/String;

    const-string v0, "identity_number"

    invoke-virtual {p1, v0, p2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 7
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const-string p2, "appid"

    const-string v0, "1148"

    invoke-virtual {p1, p2, v0}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 8
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p2

    const-string v0, "time"

    invoke-virtual {p1, v0, p2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 9
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object p2

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/ActionSupport;->gContent:Ljava/util/TreeMap;

    const-string v1, "c986f7b40c468a3a3b1087d0eb08628b"

    invoke-virtual {p2, v0, v1}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getSign(Ljava/util/TreeMap;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "sign"

    invoke-virtual {p1, v0, p2}, Ljava/util/TreeMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x0

    return-object p1
.end method

.method protected bridge synthetic onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Ljava/lang/Object;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 1
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/action/c;->onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

.method protected onSuccess(Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;)Lorg/json/JSONObject;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "request identity status resource success : "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcRes:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Ymn_ActionSupport"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 3
    iget-object p1, p1, Lcom/bianfeng/ymnsdk/action/ActionSupport$ResponseResult;->srcObj:Lorg/json/JSONObject;

    return-object p1
.end method

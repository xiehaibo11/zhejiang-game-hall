.class public Lcom/bianfeng/ymnsdk/wechat/WechatWXEntryActivity;
.super Ljava/lang/Object;
.source "WechatWXEntryActivity.java"

# interfaces
.implements Lcom/tencent/mm/opensdk/openapi/IWXAPIEventHandler;


# static fields
.field public static final WX_LOGIN_TYPE:I = 0x1


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)V
    .locals 1

    .line 63
    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseReq;->getType()I

    move-result p1

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    :cond_0
    return-void
.end method

.method public onResp(Lcom/tencent/mm/opensdk/modelbase/BaseResp;)V
    .locals 4

    .line 25
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onResp"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->getType()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "WXEntryActivity"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 26
    invoke-virtual {p1}, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->getType()I

    move-result v0

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    return-void

    .line 30
    :cond_0
    iget v0, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    const/4 v1, -0x4

    const-string v2, "|"

    const/16 v3, 0x69

    if-eq v0, v1, :cond_6

    const/4 v1, -0x2

    if-eq v0, v1, :cond_5

    if-eqz v0, :cond_1

    .line 56
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errStr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    goto :goto_2

    .line 32
    :cond_1
    instance-of v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Resp;

    if-eqz v0, :cond_4

    .line 33
    check-cast p1, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Resp;

    iget-object v0, p1, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Resp;->state:Ljava/lang/String;

    .line 34
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    const-string v1, "wechat_login"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_1

    .line 37
    :cond_2
    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Resp;->code:Ljava/lang/String;

    .line 38
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "session"

    .line 40
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 42
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    const/16 p1, 0x66

    .line 44
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    goto :goto_2

    :cond_3
    :goto_1
    return-void

    .line 46
    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errStr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    goto :goto_2

    :cond_5
    const/16 p1, 0x6a

    const-string v0, "\u53d6\u6d88\u767b\u5f55"

    .line 50
    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    goto :goto_2

    .line 53
    :cond_6
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errCode:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/tencent/mm/opensdk/modelbase/BaseResp;->errStr:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    :goto_2
    return-void
.end method

.class public Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;
.super Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;
.source "WechatSupportInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final EXT_WECHAT_LOGIN:Ljava/lang/String; = "wechat_support_login"

.field public static final TAG:Ljava/lang/String; = "WechatSupportInterface"

.field private static instance:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;
    .locals 1

    .line 54
    sget-object v0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->instance:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    return-object v0
.end method

.method private loginWithHistory()V
    .locals 4

    .line 137
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "refresh_token"

    .line 139
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->readResponse()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 141
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    .line 142
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loginWithHistory"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :goto_0
    const/16 v1, 0x66

    .line 144
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method private loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;Ljava/lang/String;)V
    .locals 1

    .line 129
    invoke-interface {p1, p2}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->registerApp(Ljava/lang/String;)Z

    .line 130
    new-instance p2, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;

    invoke-direct {p2}, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;-><init>()V

    const-string v0, "snsapi_userinfo"

    .line 131
    iput-object v0, p2, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;->scope:Ljava/lang/String;

    const-string v0, "wechat_support_login"

    .line 132
    iput-object v0, p2, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;->state:Ljava/lang/String;

    .line 133
    invoke-interface {p1, p2}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method public static sendLoginResult(ILjava/lang/String;)V
    .locals 1

    .line 58
    sget-object v0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->instance:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method private supportAutoLogin()Z
    .locals 1

    .line 179
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->readResponse()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method private wxAutoLogin(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "WXSupAutoLogin"
    .end annotation

    .line 113
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;Z)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    .line 114
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->saveResponseWxappid(Ljava/lang/String;)V

    .line 115
    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 116
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->supportAutoLogin()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 117
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->loginWithHistory()V

    goto :goto_0

    .line 119
    :cond_0
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;Ljava/lang/String;)V

    goto :goto_0

    .line 122
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    const-string v0, "\u767b\u5f55\u5931\u8d25\uff0c\u672a\u5b89\u88c5\u5fae\u4fe1"

    invoke-static {p1, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    const/16 p1, 0x69

    const-string v0, "\u672a\u5b89\u88c5\u5fae\u4fe1"

    .line 123
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method private wxLogin(Ljava/lang/String;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "WXSupLogin"
    .end annotation

    .line 100
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "WXSupupLogin----"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 101
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p1, v1}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;Z)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    .line 102
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->saveResponseWxappid(Ljava/lang/String;)V

    .line 103
    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v2

    if-eqz v2, :cond_0

    .line 104
    invoke-direct {p0, v0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;Ljava/lang/String;)V

    goto :goto_0

    .line 106
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    const-string v0, "\u767b\u5f55\u5931\u8d25\uff0c\u672a\u5b89\u88c5\u5fae\u4fe1"

    invoke-static {p1, v0, v1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    const/16 p1, 0x69

    const-string v0, "\u672a\u5b89\u88c5\u5fae\u4fe1"

    .line 107
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public clearResponse()V
    .locals 1

    const-string v0, ""

    .line 168
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->saveResponse(Ljava/lang/String;)V

    return-void
.end method

.method public clearResponseWxappid()V
    .locals 1

    const-string v0, ""

    .line 175
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->saveResponseWxappid(Ljava/lang/String;)V

    return-void
.end method

.method public exit()V
    .locals 0

    .line 213
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->exit()V

    .line 214
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->logout()V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "30025"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "weixinsup"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/4 v0, 0x6

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "6.8.0"

    return-object v0
.end method

.method public login()V
    .locals 1

    const-string v0, "\u4e0d\u652f\u6301\u8be5\u65b9\u6cd5"

    .line 45
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->e(Ljava/lang/String;)I

    return-void
.end method

.method public logout()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "logout"
    .end annotation

    .line 205
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->clearResponse()V

    .line 206
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->clearResponseWxappid()V

    const/16 v0, 0x6b

    const-string v1, "\u6ce8\u9500\u6210\u529f"

    .line 207
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendLoginResult(ILjava/lang/String;)V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 63
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->onInit(Landroid/content/Context;)V

    .line 64
    sput-object p0, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->instance:Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;

    const/4 p1, 0x0

    const/16 v0, 0x64

    .line 66
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendResult(ILjava/lang/String;)V

    const/16 v0, 0xcd

    .line 67
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->sendResult(ILjava/lang/String;)V

    .line 69
    new-instance p1, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface$1;-><init>(Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;)V

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

    return-void
.end method

.method public pay(Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 94
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->pay(Ljava/util/Map;)V

    .line 95
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->wxPay(Ljava/util/Map;)V

    return-void
.end method

.method public readResponse()Ljava/lang/String;
    .locals 3

    .line 153
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "WechatSupportInterface"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "opensdk_wx_response_refresh_token"

    const/4 v2, 0x0

    .line 154
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public readResponseWxappid()Ljava/lang/String;
    .locals 3

    .line 163
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "WechatSupportInterface"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "opensdk_wx_response_wxappid"

    const/4 v2, 0x0

    .line 164
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public saveResponse(Ljava/lang/String;)V
    .locals 3

    .line 148
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "WechatSupportInterface"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 149
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "opensdk_wx_response_refresh_token"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public saveResponseWxappid(Ljava/lang/String;)V
    .locals 3

    .line 158
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "WechatSupportInterface"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 159
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "opensdk_wx_response_wxappid"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public wxPay(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 185
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    const-string v1, "client_callback"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 186
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    const/4 v1, 0x0

    invoke-static {p1, v1}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object p1

    const-string v1, "wxAppId"

    .line 187
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/weixin_support/WechatSupportInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->registerApp(Ljava/lang/String;)Z

    .line 188
    new-instance v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelpay/PayReq;-><init>()V

    const-string v2, "appId"

    .line 189
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->appId:Ljava/lang/String;

    const-string v2, "partnerId"

    .line 190
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->partnerId:Ljava/lang/String;

    const-string v2, "prepayId"

    .line 191
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->prepayId:Ljava/lang/String;

    const-string v2, "Sign=WXPay"

    .line 192
    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->packageValue:Ljava/lang/String;

    const-string v2, "nonceStr"

    .line 193
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->nonceStr:Ljava/lang/String;

    const-string v2, "timeStamp"

    .line 194
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->timeStamp:Ljava/lang/String;

    const-string v2, "sign"

    .line 195
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->sign:Ljava/lang/String;

    .line 196
    invoke-interface {p1, v1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 198
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "wx pay"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    :goto_0
    return-void
.end method

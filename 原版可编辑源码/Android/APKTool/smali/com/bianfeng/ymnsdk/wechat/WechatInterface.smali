.class public Lcom/bianfeng/ymnsdk/wechat/WechatInterface;
.super Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;
.source "WechatInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final EXT_WECHAT_LOGIN:Ljava/lang/String; = "wechat_login"

.field public static final EXT_WECHAT_LOGIN_WITHOUT_HISTORY:Ljava/lang/String; = "wechat_login_without_history"

.field private static final RESET_PAY_PARAMS_FAIL:I = 0x1c9dedc

.field private static final RESET_PAY_PARAMS_SUCCESS:I = 0x1c9dedb

.field private static final SET_PAY_PARAMS_FAIL:I = 0x1c9deda

.field private static final SET_PAY_PARAMS_SUCCESS:I = 0x1c9ded9

.field public static final TAG:Ljava/lang/String; = "WechatInterface"

.field public static final WECHAT_RESET_PAY_PARAMS:Ljava/lang/String; = "wechat_reset_pay_params"

.field public static final WECHAT_SET_PAY_PARAMS:Ljava/lang/String; = "wechat_set_pay_params"

.field public static final WECHAT_SET_PAY_PARAMS_FLAG:Ljava/lang/String; = "wechat_set_pay_params_flag"

.field private static instance:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;


# instance fields
.field private volatile setParamsFlag:Z

.field private volatile wxAppId:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 29
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;-><init>()V

    const/4 v0, 0x0

    .line 64
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->setParamsFlag:Z

    const-string v0, ""

    .line 65
    iput-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAppId:Ljava/lang/String;

    .line 30
    sput-object p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->instance:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    return-void
.end method

.method private loginWithHistory()V
    .locals 3

    .line 157
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "refresh_token"

    .line 159
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->readResponse()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 161
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    const/16 v1, 0x66

    .line 163
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v1, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method private loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;)V
    .locals 2

    const-string v0, "wxAppId"

    .line 149
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->registerApp(Ljava/lang/String;)Z

    .line 150
    new-instance v0, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;

    invoke-direct {v0}, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;-><init>()V

    const-string v1, "snsapi_userinfo"

    .line 151
    iput-object v1, v0, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;->scope:Ljava/lang/String;

    const-string v1, "wechat_login"

    .line 152
    iput-object v1, v0, Lcom/tencent/mm/opensdk/modelmsg/SendAuth$Req;->state:Ljava/lang/String;

    .line 153
    invoke-interface {p1, v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z

    return-void
.end method

.method public static sendLoginResult(ILjava/lang/String;)V
    .locals 1

    .line 68
    sget-object v0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->instance:Lcom/bianfeng/ymnsdk/wechat/WechatInterface;

    if-eqz v0, :cond_0

    .line 70
    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method private supportAutoLogin()Z
    .locals 1

    .line 183
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->readResponse()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    return v0
.end method

.method private wxAutoLogin()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "WXAutoLogin"
    .end annotation

    .line 134
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "wxAppId"

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;Z)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    .line 135
    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 136
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->supportAutoLogin()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 137
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->loginWithHistory()V

    goto :goto_0

    .line 139
    :cond_0
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;)V

    goto :goto_0

    .line 142
    :cond_1
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "\u767b\u5f55\u5931\u8d25\uff0c\u672a\u5b89\u88c5\u5fae\u4fe1"

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    const/16 v0, 0x69

    const-string v1, "\u672a\u5b89\u88c5\u5fae\u4fe1"

    .line 143
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method private wxLogin()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "WXLogin"
    .end annotation

    .line 122
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "wxAppId"

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;Z)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    .line 123
    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 124
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;)V

    goto :goto_0

    .line 126
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "\u767b\u5f55\u5931\u8d25\uff0c\u672a\u5b89\u88c5\u5fae\u4fe1"

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    const/16 v0, 0x69

    const-string v1, "\u672a\u5b89\u88c5\u5fae\u4fe1"

    .line 127
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public WechatLoginWithoutHistory()V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "wechat_login_without_history"
    .end annotation

    .line 223
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "wxAppId"

    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;Z)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object v0

    .line 224
    invoke-interface {v0}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->isWXAppInstalled()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 225
    invoke-direct {p0, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->loginWithoutHistory(Lcom/tencent/mm/opensdk/openapi/IWXAPI;)V

    goto :goto_0

    .line 227
    :cond_0
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "\u767b\u5f55\u5931\u8d25\uff0c\u672a\u5b89\u88c5\u5fae\u4fe1"

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    const/16 v0, 0x69

    const-string v1, "\u672a\u5b89\u88c5\u5fae\u4fe1"

    .line 228
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    :goto_0
    return-void
.end method

.method public WechatResetPayParams()V
    .locals 6
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "wechat_reset_pay_params"
    .end annotation

    const-string v0, "\u91cd\u7f6e\u5931\u8d25\uff0c\u672c\u5730\u6ca1\u6709clientKey"

    const-string v1, "\u91cd\u7f6e\u5931\u8d25\uff0c\u672c\u5730\u6ca1\u6709packageId"

    const-string v2, "\u91cd\u7f6e\u5931\u8d25\uff0c\u672c\u5730\u6ca1\u6709appId"

    const-string v3, "wxAppId"

    .line 308
    invoke-virtual {p0, v3}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAppId:Ljava/lang/String;

    const v3, 0x1c9dedc

    .line 310
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v4

    const-string v5, "TD_SDK_APP_ID"

    invoke-virtual {v4, v5}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_2

    .line 311
    invoke-virtual {v4}, Ljava/lang/String;->isEmpty()Z

    move-result v5

    if-nez v5, :cond_2

    .line 313
    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setAppId(Ljava/lang/String;)V

    .line 314
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v5

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-virtual {v5, v4}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->setAppId(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    .line 326
    :try_start_1
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v2

    const-string v4, "TD_CONFIG_ID"

    invoke-virtual {v2, v4}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 327
    invoke-virtual {v2}, Ljava/lang/String;->isEmpty()Z

    move-result v4

    if-nez v4, :cond_1

    .line 329
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setGroupId(Ljava/lang/String;)V

    .line 330
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v4

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    invoke-virtual {v4, v5}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->setIdentify_id(I)V

    .line 331
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Integer;->intValue()I

    move-result v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setConfigId(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 343
    :try_start_2
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    const-string v2, "TD_SDK_APP_KEY"

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getMetaDataValueString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 344
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v2

    if-nez v2, :cond_0

    .line 346
    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setSdkAppKey(Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const v0, 0x1c9dedb

    const-string v1, "\u91cd\u7f6e\u6210\u529f"

    .line 357
    invoke-virtual {p0, v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    .line 348
    :cond_0
    :try_start_3
    invoke-virtual {p0, v3, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    return-void

    :catch_0
    move-exception v1

    .line 353
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 354
    invoke-virtual {p0, v3, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    .line 333
    :cond_1
    :try_start_4
    invoke-virtual {p0, v3, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    return-void

    :catch_1
    move-exception v0

    .line 338
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 339
    invoke-virtual {p0, v3, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    .line 316
    :cond_2
    :try_start_5
    invoke-virtual {p0, v3, v2}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2

    return-void

    :catch_2
    move-exception v0

    .line 321
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 322
    invoke-virtual {p0, v3, v2}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public WechatSetPayParams(Ljava/util/LinkedHashMap;)V
    .locals 4
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "wechat_set_pay_params"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x1

    .line 234
    iput-boolean v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->setParamsFlag:Z

    const-string v0, "wxAppId"

    .line 235
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const v2, 0x1c9deda

    if-eqz v1, :cond_5

    .line 236
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAppId:Ljava/lang/String;

    const-string v0, "appId"

    .line 242
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 244
    :try_start_0
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 245
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setAppId(Ljava/lang/String;)V

    .line 246
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    if-eqz v0, :cond_0

    .line 247
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->setAppId(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 250
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    const-string v0, "packageId"

    .line 257
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 259
    :try_start_1
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    .line 260
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setGroupId(Ljava/lang/String;)V

    .line 261
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    .line 263
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v1

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Integer;->intValue()I

    move-result v3

    invoke-virtual {v1, v3}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->setIdentify_id(I)V

    .line 264
    invoke-static {v0}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setConfigId(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 268
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    const-string v0, "clientKey"

    .line 275
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 276
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    .line 277
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/YmnAppContext;->setSdkAppKey(Ljava/lang/String;)V

    const p1, 0x1c9ded9

    const-string v0, "\u8bbe\u7f6e\u6210\u529f"

    .line 283
    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    :cond_2
    const-string p1, "\u8bbe\u7f6e\u5931\u8d25\uff0c\u4f20\u53c2\u6ca1\u6709clientKey"

    .line 280
    invoke-virtual {p0, v2, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    :cond_3
    const-string p1, "\u8bbe\u7f6e\u5931\u8d25\uff0c\u4f20\u53c2\u6ca1\u6709packageId"

    .line 272
    invoke-virtual {p0, v2, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    :cond_4
    const-string p1, "\u8bbe\u7f6e\u5931\u8d25\uff0c\u4f20\u53c2\u6ca1\u6709appId"

    .line 254
    invoke-virtual {p0, v2, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void

    :cond_5
    const-string p1, "\u8bbe\u7f6e\u5931\u8d25\uff0c\u4f20\u53c2\u6ca1\u6709wxAppId"

    .line 239
    invoke-virtual {p0, v2, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    return-void
.end method

.method public clearResponse()V
    .locals 1

    const-string v0, ""

    .line 177
    invoke-virtual {p0, v0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->saveResponse(Ljava/lang/String;)V

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "30007"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "weixin"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0x11

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "6.8.0"

    return-object v0
.end method

.method public login()V
    .locals 0

    .line 111
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAutoLogin()V

    return-void
.end method

.method public logout()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "logout"
    .end annotation

    .line 215
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->clearResponse()V

    const/16 v0, 0x6b

    const-string v1, "\u6ce8\u9500\u6210\u529f"

    .line 216
    invoke-static {v0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendLoginResult(ILjava/lang/String;)V

    return-void
.end method

.method public onInit(Landroid/content/Context;)V
    .locals 1

    .line 80
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->onInit(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 82
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->setParamsFlag:Z

    const/4 p1, 0x0

    const/16 v0, 0x64

    .line 83
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    const/16 v0, 0xcd

    .line 84
    invoke-virtual {p0, v0, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->sendResult(ILjava/lang/String;)V

    .line 86
    new-instance p1, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface$1;-><init>(Lcom/bianfeng/ymnsdk/wechat/WechatInterface;)V

    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->addCallbackInterceptor(Lcom/bianfeng/ymnsdk/feature/YmnCallbackInterceptor;)V

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

    .line 116
    invoke-super {p0, p1}, Lcom/bianfeng/ymnsdk/feature/plugin/YmnChannelInterface;->pay(Ljava/util/Map;)V

    .line 117
    invoke-virtual {p0, p1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxPay(Ljava/util/Map;)V

    return-void
.end method

.method public readResponse()Ljava/lang/String;
    .locals 3

    .line 172
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "WechatInterface"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    const-string v1, "opensdk_wx_response_refresh_token"

    const/4 v2, 0x0

    .line 173
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public saveResponse(Ljava/lang/String;)V
    .locals 3

    .line 167
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const-string v1, "WechatInterface"

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Landroid/app/Activity;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    .line 168
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    const-string v1, "opensdk_wx_response_refresh_token"

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method

.method public setParamsFlag(Ljava/util/LinkedHashMap;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "wechat_set_pay_params_flag"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/LinkedHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    const-string v0, "setParamsFlag"

    .line 288
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 291
    :try_start_0
    invoke-virtual {p1, v0}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v0, "true"

    .line 293
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    .line 294
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->setParamsFlag:Z

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    .line 296
    iput-boolean p1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->setParamsFlag:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 301
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void
.end method

.method public wxPay(Ljava/util/Map;)V
    .locals 3
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "WXpay"
    .end annotation

    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 189
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    const-string v1, "client_callback"

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 190
    invoke-virtual {p0}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    const/4 v1, 0x0

    invoke-static {p1, v1}, Lcom/tencent/mm/opensdk/openapi/WXAPIFactory;->createWXAPI(Landroid/content/Context;Ljava/lang/String;)Lcom/tencent/mm/opensdk/openapi/IWXAPI;

    move-result-object p1

    .line 191
    iget-boolean v1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->setParamsFlag:Z

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAppId:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 193
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAppId:Ljava/lang/String;

    invoke-interface {p1, v1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->registerApp(Ljava/lang/String;)Z

    .line 194
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u8bbe\u7f6e\u4e86wxAppId,\u4e3a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->wxAppId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    goto :goto_0

    :cond_0
    const-string v1, "wxAppId"

    .line 197
    invoke-virtual {p0, v1}, Lcom/bianfeng/ymnsdk/wechat/WechatInterface;->getPropertie(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->registerApp(Ljava/lang/String;)Z

    .line 199
    :goto_0
    new-instance v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;

    invoke-direct {v1}, Lcom/tencent/mm/opensdk/modelpay/PayReq;-><init>()V

    const-string v2, "appId"

    .line 200
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->appId:Ljava/lang/String;

    const-string v2, "partnerId"

    .line 201
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->partnerId:Ljava/lang/String;

    const-string v2, "prepayId"

    .line 202
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->prepayId:Ljava/lang/String;

    const-string v2, "Sign=WXPay"

    .line 203
    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->packageValue:Ljava/lang/String;

    const-string v2, "nonceStr"

    .line 204
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->nonceStr:Ljava/lang/String;

    const-string v2, "timeStamp"

    .line 205
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->timeStamp:Ljava/lang/String;

    const-string v2, "sign"

    .line 206
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/tencent/mm/opensdk/modelpay/PayReq;->sign:Ljava/lang/String;

    .line 207
    invoke-interface {p1, v1}, Lcom/tencent/mm/opensdk/openapi/IWXAPI;->sendReq(Lcom/tencent/mm/opensdk/modelbase/BaseReq;)Z
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 209
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :goto_1
    return-void
.end method

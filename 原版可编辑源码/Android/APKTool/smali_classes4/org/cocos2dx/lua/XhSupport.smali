.class public Lorg/cocos2dx/lua/XhSupport;
.super Ljava/lang/Object;
.source "XhSupport.java"

# interfaces
.implements Lcom/bianfeng/platform/PlatformSdkListener;


# static fields
.field private static final TAG:Ljava/lang/String; = "XhSupport"

.field private static activity:Landroid/app/Activity;

.field private static callbackiniting:Z

.field private static inited:Z

.field private static initing:Z

.field private static instance:Lorg/cocos2dx/lua/XhSupport;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    new-instance v0, Lorg/cocos2dx/lua/XhSupport;

    invoke-direct {v0}, Lorg/cocos2dx/lua/XhSupport;-><init>()V

    sput-object v0, Lorg/cocos2dx/lua/XhSupport;->instance:Lorg/cocos2dx/lua/XhSupport;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Landroid/app/Activity;
    .locals 1

    .line 34
    sget-object v0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    return-object v0
.end method

.method public static callbackInitSdk()V
    .locals 2

    .line 84
    sget-boolean v0, Lorg/cocos2dx/lua/XhSupport;->callbackiniting:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 87
    sput-boolean v0, Lorg/cocos2dx/lua/XhSupport;->callbackiniting:Z

    :try_start_0
    const-string v0, "AppActivity"

    const-string v1, "-----------------\u6743\u9650\u56de\u8c03PlatformSdkinit-----------------"

    .line 89
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 90
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    sget-object v1, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 92
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 0

    if-nez p2, :cond_0

    .line 229
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "showToast"

    const-string p1, "\u9519\u8bef\uff1aargs\u53c2\u6570\u975ejson\u7ed3\u6784\uff01"

    .line 230
    invoke-static {p0, p1}, Lorg/cocos2dx/lua/XhSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method private static convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;
    .locals 3

    .line 235
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 236
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 237
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 239
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p0

    new-array p0, p0, [Ljava/lang/String;

    invoke-interface {v0, p0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/String;

    return-object p0
.end method

.method public static init(Landroid/app/Activity;)V
    .locals 0

    .line 47
    sput-object p0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    const/4 p0, 0x0

    .line 50
    :try_start_0
    invoke-static {p0}, Lorg/cocos2dx/lua/XhSupport;->initSdk(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 52
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static initSdk(Z)V
    .locals 1

    .line 57
    sget-boolean v0, Lorg/cocos2dx/lua/XhSupport;->initing:Z

    if-eqz v0, :cond_0

    return-void

    .line 61
    :cond_0
    sget-boolean v0, Lorg/cocos2dx/lua/XhSupport;->inited:Z

    if-eqz v0, :cond_1

    const/16 p0, 0x64

    const-string v0, "sdk already inited"

    .line 62
    invoke-static {p0, v0}, Lorg/cocos2dx/lua/XhSupport;->xhCallBack(ILjava/lang/String;)V

    const/16 p0, 0xcd

    .line 63
    invoke-static {p0, v0}, Lorg/cocos2dx/lua/XhSupport;->xhCallBack(ILjava/lang/String;)V

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 67
    sput-boolean v0, Lorg/cocos2dx/lua/XhSupport;->initing:Z

    .line 69
    sget-object v0, Lorg/cocos2dx/lua/XhSupport;->instance:Lorg/cocos2dx/lua/XhSupport;

    invoke-static {v0}, Lcom/bianfeng/platform/PlatformSdk;->setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V

    if-eqz p0, :cond_2

    .line 72
    new-instance p0, Lorg/cocos2dx/lua/XhSupport$1;

    invoke-direct {p0}, Lorg/cocos2dx/lua/XhSupport$1;-><init>()V

    invoke-static {p0}, Lorg/cocos2dx/lua/XhSupport;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 79
    :cond_2
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    sget-object v0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    invoke-virtual {p0, v0}, Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V

    :goto_0
    return-void
.end method

.method private static invokeBfAnalytics(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 6
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "getDeviceIdSync"

    .line 161
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 162
    new-array p0, v2, [Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string v0, "onEvent"

    .line 163
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "label"

    const-string v3, "eventId"

    const-string v4, "map"

    if-eqz v0, :cond_1

    .line 165
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 166
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    .line 167
    invoke-static {p0, v4, p1}, Lorg/cocos2dx/lua/XhSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 168
    new-instance p1, Ljava/util/LinkedHashMap;

    invoke-direct {p1}, Ljava/util/LinkedHashMap;-><init>()V

    .line 169
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v3, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 170
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 171
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v4, p0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "bfdata_onevent"

    .line 172
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_0

    :cond_1
    const-string v0, "setFrequentRate"

    .line 175
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    const/4 p0, 0x1

    .line 176
    new-array p0, p0, [Ljava/lang/String;

    aput-object p1, p0, v2

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "onFrequentEvent"

    .line 177
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 178
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 179
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    .line 180
    invoke-static {p0, v4, p1}, Lorg/cocos2dx/lua/XhSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 181
    new-instance p1, Ljava/util/LinkedHashMap;

    invoke-direct {p1}, Ljava/util/LinkedHashMap;-><init>()V

    .line 182
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v3, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 183
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 184
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v4, p0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 185
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_0

    :cond_3
    const-string p1, "flushFrequentEvents"

    .line 187
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 188
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    :cond_4
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 13
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "payForProduct"

    .line 243
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 244
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 245
    invoke-static {}, Lcom/bianfeng/platform/PaymentInterface;->getInstance()Lcom/bianfeng/platform/PaymentInterface;

    move-result-object v0

    const-string p1, "order_id"

    .line 246
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string p1, "product_id"

    .line 247
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string p1, "product_name"

    .line 248
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string p1, "product_price"

    .line 249
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string p1, "product_count"

    .line 250
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string p1, "role_id"

    .line 251
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string p1, "role_name"

    .line 252
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string p1, "role_grade"

    .line 253
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string p1, "role_balance"

    .line 254
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string p1, "server_id"

    .line 255
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    const-string p1, "notify_url"

    .line 256
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    const-string p1, "ext"

    .line 257
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 245
    invoke-virtual/range {v0 .. v12}, Lcom/bianfeng/platform/PaymentInterface;->payForProduct(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokePlatformSdk(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const-string p1, "init"

    .line 147
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p0, 0x1

    .line 148
    invoke-static {p0}, Lorg/cocos2dx/lua/XhSupport;->initSdk(Z)V

    goto :goto_0

    :cond_0
    const-string p1, "getPlatformId"

    .line 149
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 150
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformId()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string p1, "getPlatformName"

    .line 151
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 152
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const-string p1, "getPlatformVersion"

    .line 153
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 154
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformVersion()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    const-string p1, "getYmnSdkVersion"

    .line 155
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 156
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getSdkVersion()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokeUserInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "login"

    .line 193
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 194
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/UserInterface;->login()V

    goto/16 :goto_2

    :cond_0
    const-string v0, "callFunction"

    .line 195
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "args"

    const-string v2, "functionName"

    if-eqz v0, :cond_3

    .line 196
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 197
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 198
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    .line 199
    invoke-static {p0, v1, v0}, Lorg/cocos2dx/lua/XhSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    if-eqz v0, :cond_2

    .line 201
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-nez p0, :cond_1

    goto :goto_0

    .line 204
    :cond_1
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p0

    invoke-static {v0}, Lorg/cocos2dx/lua/XhSupport;->convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_2

    .line 202
    :cond_2
    :goto_0
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p0

    invoke-virtual {p0, p1}, Lcom/bianfeng/platform/UserInterface;->callFunction(Ljava/lang/String;)V

    goto :goto_2

    :cond_3
    const-string v0, "callFunctionWithResult"

    .line 206
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 207
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 208
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 209
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_5

    .line 211
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-nez v0, :cond_4

    goto :goto_1

    .line 214
    :cond_4
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object v0

    invoke-static {p0}, Lorg/cocos2dx/lua/XhSupport;->convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p1, p0}, Lcom/bianfeng/platform/UserInterface;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 212
    :cond_5
    :goto_1
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p0

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/String;

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/platform/UserInterface;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_6
    const-string v0, "isSupportFunction"

    .line 216
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_8

    .line 217
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 218
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 219
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/platform/UserInterface;->isSupportFunction(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_7

    .line 220
    sget-object p0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 222
    :cond_7
    sget-object p0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_8
    :goto_2
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "showToast"

    .line 264
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 265
    new-instance p0, Lorg/cocos2dx/lua/XhSupport$2;

    invoke-direct {p0, p1}, Lorg/cocos2dx/lua/XhSupport$2;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Lorg/cocos2dx/lua/XhSupport;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    const-string v0, "logcat"

    .line 271
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 272
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "out log from native:"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "XhSupport"

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONObject;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 281
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    .line 286
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 287
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 288
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 289
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public static onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    .line 324
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/bianfeng/platform/PlatformSdk;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method public static onNewIntent(Landroid/content/Intent;)V
    .locals 1

    .line 320
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/platform/PlatformSdk;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method public static onPause()V
    .locals 1

    .line 311
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onPause()V

    return-void
.end method

.method public static onResume()V
    .locals 1

    .line 306
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onResume()V

    return-void
.end method

.method public static onStart()V
    .locals 1

    .line 302
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStart()V

    return-void
.end method

.method public static onStop()V
    .locals 1

    .line 316
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStop()V

    return-void
.end method

.method public static release()V
    .locals 1

    .line 328
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->release()V

    return-void
.end method

.method private static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 97
    sget-object v0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 98
    sget-object v0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    invoke-virtual {v0, p0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public static setActivity(Landroid/app/Activity;)V
    .locals 0

    .line 332
    sput-object p0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    return-void
.end method

.method public static shareBox(Ljava/lang/String;II)I
    .locals 2

    .line 336
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "shareBox:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "XhSupport"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 337
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fybox://action/share?uuid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "&numid="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, "&areaid="

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p0

    .line 340
    new-instance p1, Landroid/content/Intent;

    const-string p2, "android.intent.action.VIEW"

    invoke-direct {p1, p2, p0}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 342
    :try_start_0
    sget-object p0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    invoke-virtual {p0, p1}, Landroid/app/Activity;->startActivity(Landroid/content/Intent;)V
    :try_end_0
    .catch Landroid/content/ActivityNotFoundException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/4 p0, 0x0

    return p0

    :catch_0
    move-exception p0

    .line 348
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p0, -0x1

    return p0

    :catch_1
    move-exception p0

    .line 345
    invoke-virtual {p0}, Landroid/content/ActivityNotFoundException;->printStackTrace()V

    const/4 p0, -0x2

    return p0
.end method

.method public static native xhCallBack(ILjava/lang/String;)V
.end method

.method public static ymnInvoke(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "----------------------"

    const-string v1, "XhSupport"

    .line 123
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v2, 0x3

    .line 124
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p0, v2, v3

    const/4 v3, 0x1

    aput-object p1, v2, v3

    const/4 v3, 0x2

    aput-object p2, v2, v3

    const-string v3, "native called method ymnInvoke %s::%s(%s)"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 125
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 126
    sget-object v0, Lorg/cocos2dx/lua/XhSupport;->activity:Landroid/app/Activity;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "PlatformSdk"

    .line 128
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 129
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/XhSupport;->invokePlatformSdk(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string v0, "UserInterface"

    .line 130
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 131
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/XhSupport;->invokeUserInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const-string v0, "PaymentInterface"

    .line 132
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 133
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/XhSupport;->invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    const-string v0, "Utils"

    .line 134
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 135
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/XhSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    const-string v0, "BfAnalytics"

    .line 136
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_5

    .line 137
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/XhSupport;->invokeBfAnalytics(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :cond_5
    return-object v1

    .line 140
    :catch_0
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "\u53c2\u6570\u683c\u5f0f\u5f02\u5e38"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method


# virtual methods
.method public onCallBack(ILjava/lang/String;)V
    .locals 2

    const/4 v0, 0x0

    const/16 v1, 0x64

    if-ne p1, v1, :cond_0

    .line 105
    sput-boolean v0, Lorg/cocos2dx/lua/XhSupport;->initing:Z

    const/4 v0, 0x1

    .line 106
    sput-boolean v0, Lorg/cocos2dx/lua/XhSupport;->inited:Z

    goto :goto_0

    :cond_0
    const/16 v1, 0x65

    if-ne p1, v1, :cond_1

    .line 108
    sput-boolean v0, Lorg/cocos2dx/lua/XhSupport;->initing:Z

    .line 109
    sput-boolean v0, Lorg/cocos2dx/lua/XhSupport;->inited:Z

    :cond_1
    :goto_0
    if-eqz p2, :cond_2

    goto :goto_1

    :cond_2
    const-string p2, ""

    .line 111
    :goto_1
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/XhSupport;->xhCallBack(ILjava/lang/String;)V

    return-void
.end method

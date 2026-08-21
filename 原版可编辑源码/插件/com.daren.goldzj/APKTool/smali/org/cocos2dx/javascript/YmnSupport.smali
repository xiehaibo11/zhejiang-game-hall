.class public Lorg/cocos2dx/javascript/YmnSupport;
.super Ljava/lang/Object;
.source "YmnSupport.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "YmnSupport"

.field private static uActivity:Lorg/cocos2dx/javascript/AppActivity;


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 63
    new-instance v0, Lorg/cocos2dx/javascript/YmnSupport$2;

    invoke-direct {v0, p0}, Lorg/cocos2dx/javascript/YmnSupport$2;-><init>(Lorg/cocos2dx/javascript/YmnSupport;)V

    iput-object v0, p0, Lorg/cocos2dx/javascript/YmnSupport;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method static synthetic access$000()Lorg/cocos2dx/javascript/AppActivity;
    .locals 1

    .line 28
    sget-object v0, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    return-object v0
.end method

.method private static checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 0

    if-nez p2, :cond_0

    .line 187
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "showToast"

    const-string p1, "\u9519\u8bef\uff1aargs\u53c2\u6570\u975ejson\u7ed3\u6784\uff01"

    .line 188
    invoke-static {p0, p1}, Lorg/cocos2dx/javascript/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method private static convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;
    .locals 3

    .line 193
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 194
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 195
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 197
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p0

    new-array p0, p0, [Ljava/lang/String;

    invoke-interface {v0, p0}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p0

    check-cast p0, [Ljava/lang/String;

    return-object p0
.end method

.method private static invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "payForProduct"

    .line 201
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 202
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 203
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    const-string v0, "order_id"

    .line 204
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_id"

    .line 205
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_name"

    .line 206
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_price"

    .line 207
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_count"

    .line 208
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_id"

    .line 209
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_name"

    .line 210
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_grade"

    .line 211
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_balance"

    .line 212
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "server_id"

    .line 213
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "server_name"

    .line 214
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "notify_url"

    .line 215
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p1, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "ext"

    .line 216
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {p1, v0, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 218
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->pay(Ljava/util/Map;)V

    :cond_0
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

    .line 152
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 153
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->login()V

    goto/16 :goto_1

    :cond_0
    const-string v0, "isSupportFunction"

    .line 154
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "functionName"

    if-eqz v0, :cond_2

    .line 155
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 156
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 157
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->isSupportFunction(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 158
    sget-object p0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    goto :goto_1

    .line 160
    :cond_1
    sget-object p0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    goto :goto_1

    :cond_2
    const-string v0, "callFunction"

    .line 162
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 163
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 164
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "args"

    .line 165
    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 166
    invoke-static {p0, v0, v1}, Lorg/cocos2dx/javascript/YmnSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    if-eqz v1, :cond_4

    .line 168
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-nez p0, :cond_3

    goto :goto_0

    .line 171
    :cond_3
    invoke-static {v1}, Lorg/cocos2dx/javascript/YmnSupport;->convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_1

    .line 169
    :cond_4
    :goto_0
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    goto :goto_1

    .line 174
    :cond_5
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 175
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YmnSupport"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 176
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-nez v0, :cond_6

    const-string p1, "callFunction 1111"

    .line 177
    invoke-static {v2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 178
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    goto :goto_1

    :cond_6
    const/4 v0, 0x1

    .line 180
    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    invoke-static {p0, v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "showToast"

    .line 245
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 246
    new-instance p0, Lorg/cocos2dx/javascript/YmnSupport$3;

    invoke-direct {p0, p1}, Lorg/cocos2dx/javascript/YmnSupport$3;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Lorg/cocos2dx/javascript/YmnSupport;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    const-string v0, "logcat"

    .line 252
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 253
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "out log from native:"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "YmnSupport"

    invoke-static {p1, p0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private jsonToMap(Lorg/json/JSONObject;)Ljava/util/Map;
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

    .line 259
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p1, :cond_0

    return-object v0

    .line 264
    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 265
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 266
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 267
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 53
    sget-object v0, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lorg/cocos2dx/javascript/AppActivity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 54
    sget-object v0, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    invoke-virtual {v0, p0}, Lorg/cocos2dx/javascript/AppActivity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public static ymnInvoke(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "----------------------"

    const-string v1, "YmnSupport"

    .line 132
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v2, 0x3

    .line 133
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p0, v2, v3

    const/4 v3, 0x1

    aput-object p1, v2, v3

    const/4 v3, 0x2

    aput-object p2, v2, v3

    const-string v3, "called method ymnInvoke %s::%s(%s)"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 134
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :try_start_0
    const-string v0, "UserInterface"

    .line 137
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 138
    invoke-static {p1, p2}, Lorg/cocos2dx/javascript/YmnSupport;->invokeUserInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string v0, "PaymentInterface"

    .line 139
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 140
    invoke-static {p1, p2}, Lorg/cocos2dx/javascript/YmnSupport;->invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string v0, "Utils"

    .line 141
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 142
    invoke-static {p1, p2}, Lorg/cocos2dx/javascript/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :cond_2
    const/4 p0, 0x0

    return-object p0

    .line 145
    :catch_0
    new-instance p0, Ljava/lang/RuntimeException;

    const-string p1, "\u53c2\u6570\u683c\u5f0f\u5f02\u5e38"

    invoke-direct {p0, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p0
.end method


# virtual methods
.method public init(Landroid/app/Activity;)V
    .locals 1

    .line 35
    check-cast p1, Lorg/cocos2dx/javascript/AppActivity;

    sput-object p1, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    :try_start_0
    const-string p1, "YmnSupport"

    const-string v0, "-----------------YmnSupport.init----------------- 1"

    .line 38
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 39
    sget-object p1, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->onCreate(Landroid/app/Activity;)V

    .line 40
    iget-object p1, p0, Lorg/cocos2dx/javascript/YmnSupport;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 41
    new-instance p1, Lorg/cocos2dx/javascript/YmnSupport$1;

    invoke-direct {p1, p0}, Lorg/cocos2dx/javascript/YmnSupport$1;-><init>(Lorg/cocos2dx/javascript/YmnSupport;)V

    invoke-static {p1}, Lorg/cocos2dx/javascript/YmnSupport;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 48
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public invokeWechatSetPayParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 232
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "wxAppId"

    .line 234
    invoke-virtual {v0, v1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p4, "appId"

    .line 235
    invoke-virtual {v0, p4, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "packageId"

    .line 236
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "clientKey"

    .line 237
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "wechat_set_pay_params"

    const/4 p2, 0x1

    .line 238
    new-array p2, p2, [Ljava/lang/String;

    const/4 p3, 0x0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p4

    aput-object p4, p2, p3

    invoke-static {p1, p2}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 240
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    .line 303
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdk;->onActivityResult(IILandroid/content/Intent;)V

    const p1, 0x511b3

    if-ne p2, p1, :cond_1

    const/4 p1, 0x0

    const-string p2, "code"

    .line 305
    invoke-virtual {p3, p2, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    const-string p2, "msg"

    .line 306
    invoke-virtual {p3, p2}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    if-nez p2, :cond_0

    const-string p2, "\u672a\u77e5\u9519\u8bef"

    .line 311
    :cond_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p3

    const-string v0, "zzx-test-Result"

    invoke-static {v0, p3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string p3, "zzx-test-Result====>>>"

    .line 312
    invoke-static {p3, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 314
    sget-object p3, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    invoke-virtual {p3, p1, p2}, Lorg/cocos2dx/javascript/AppActivity;->ymnUnityCallback(ILjava/lang/String;)V

    :cond_1
    return-void
.end method

.method public onBackPressed()V
    .locals 2

    const-string v0, "exit"

    .line 328
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->isSupportFunction(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 329
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected onDestroy()V
    .locals 1

    .line 294
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onDestroy()V

    .line 295
    iget-object v0, p0, Lorg/cocos2dx/javascript/YmnSupport;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->removeCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 0

    .line 299
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method protected onPause()V
    .locals 0

    .line 286
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onPause()V

    return-void
.end method

.method public onRequestPermissionsResult(I[Ljava/lang/String;[I)V
    .locals 0

    .line 319
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdk;->onRequestPermissionsResult(I[Ljava/lang/String;[I)V

    return-void
.end method

.method protected onRestart()V
    .locals 0

    .line 278
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onRestart()V

    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 282
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onResume()V

    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 274
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 0

    .line 290
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onStop()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 1

    .line 324
    sget-object v0, Lorg/cocos2dx/javascript/YmnSupport;->uActivity:Lorg/cocos2dx/javascript/AppActivity;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    return-void
.end method

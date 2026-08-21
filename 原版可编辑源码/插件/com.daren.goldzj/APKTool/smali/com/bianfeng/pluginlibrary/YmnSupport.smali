.class public Lcom/bianfeng/pluginlibrary/YmnSupport;
.super Ljava/lang/Object;
.source "YmnSupport.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "YmnUnitySupport"


# instance fields
.field private callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

.field private listener:Lcom/bianfeng/pluginlibrary/YmnListener;

.field private uActivity:Landroid/app/Activity;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 32
    iput-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    .line 34
    iput-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->listener:Lcom/bianfeng/pluginlibrary/YmnListener;

    .line 70
    new-instance v0, Lcom/bianfeng/pluginlibrary/YmnSupport$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/pluginlibrary/YmnSupport$2;-><init>(Lcom/bianfeng/pluginlibrary/YmnSupport;)V

    iput-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/pluginlibrary/YmnSupport;)Landroid/app/Activity;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic access$100(Lcom/bianfeng/pluginlibrary/YmnSupport;)Lcom/bianfeng/pluginlibrary/YmnListener;
    .locals 0

    .line 28
    iget-object p0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->listener:Lcom/bianfeng/pluginlibrary/YmnListener;

    return-object p0
.end method

.method private checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 0

    if-nez p3, :cond_0

    .line 194
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p1, "showToast"

    const-string p2, "\u9519\u8bef\uff1aargs\u53c2\u6570\u975ejson\u7ed3\u6784\uff01"

    .line 195
    invoke-direct {p0, p1, p2}, Lcom/bianfeng/pluginlibrary/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method private convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;
    .locals 3

    .line 200
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 201
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 202
    invoke-virtual {p1, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 204
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result p1

    new-array p1, p1, [Ljava/lang/String;

    invoke-interface {v0, p1}, Ljava/util/List;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object p1

    check-cast p1, [Ljava/lang/String;

    return-object p1
.end method

.method private invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "payForProduct"

    .line 208
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 209
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 210
    new-instance p2, Ljava/util/HashMap;

    invoke-direct {p2}, Ljava/util/HashMap;-><init>()V

    const-string v0, "order_id"

    .line 211
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_id"

    .line 212
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_name"

    .line 213
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_price"

    .line 214
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "product_count"

    .line 215
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_id"

    .line 216
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_name"

    .line 217
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_grade"

    .line 218
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "role_balance"

    .line 219
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "server_id"

    .line 220
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "server_name"

    .line 221
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "notify_url"

    .line 222
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-interface {p2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "ext"

    .line 223
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {p2, v0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 225
    invoke-static {p2}, Lcom/bianfeng/ymnsdk/YmnSdk;->pay(Ljava/util/Map;)V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private invokeUserInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "login"

    .line 159
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 160
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->login()V

    goto/16 :goto_1

    :cond_0
    const-string v0, "isSupportFunction"

    .line 161
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "functionName"

    if-eqz v0, :cond_2

    .line 162
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 163
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 164
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->isSupportFunction(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 165
    sget-object p1, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    goto :goto_1

    .line 167
    :cond_1
    sget-object p1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {p1}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    goto :goto_1

    :cond_2
    const-string v0, "callFunction"

    .line 169
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 170
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 171
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "args"

    .line 172
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    .line 173
    invoke-direct {p0, p1, v0, v1}, Lcom/bianfeng/pluginlibrary/YmnSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    if-eqz v1, :cond_4

    .line 175
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    .line 178
    :cond_3
    invoke-direct {p0, v1}, Lcom/bianfeng/pluginlibrary/YmnSupport;->convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_1

    .line 176
    :cond_4
    :goto_0
    invoke-static {p2}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    goto :goto_1

    .line 181
    :cond_5
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 182
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "YmnUnitySupport"

    invoke-static {v2, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 183
    invoke-virtual {v0}, Lorg/json/JSONObject;->length()I

    move-result v0

    if-nez v0, :cond_6

    const-string p2, "callFunction 1111"

    .line 184
    invoke-static {v2, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 185
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    goto :goto_1

    :cond_6
    const/4 v0, 0x1

    .line 187
    new-array v0, v0, [Ljava/lang/String;

    const/4 v1, 0x0

    aput-object p2, v0, v1

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    :goto_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "showToast"

    .line 252
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 253
    new-instance p1, Lcom/bianfeng/pluginlibrary/YmnSupport$3;

    invoke-direct {p1, p0, p2}, Lcom/bianfeng/pluginlibrary/YmnSupport$3;-><init>(Lcom/bianfeng/pluginlibrary/YmnSupport;Ljava/lang/String;)V

    invoke-direct {p0, p1}, Lcom/bianfeng/pluginlibrary/YmnSupport;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    const-string v0, "logcat"

    .line 259
    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 260
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "out log from native:"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "YmnUnitySupport"

    invoke-static {p2, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    const/4 p1, 0x0

    return-object p1
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

    .line 266
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p1, :cond_0

    return-object v0

    .line 271
    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 272
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 273
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 274
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private runOnUiThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 61
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    invoke-virtual {v0, p1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public init(Landroid/app/Activity;)V
    .locals 1

    .line 37
    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    :try_start_0
    const-string p1, "YmnUnitySupport"

    const-string v0, "-----------------YmnSupport.init----------------- 1"

    .line 40
    invoke-static {p1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 41
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->onCreate(Landroid/app/Activity;)V

    .line 42
    iget-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->registCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    .line 43
    new-instance p1, Lcom/bianfeng/pluginlibrary/YmnSupport$1;

    invoke-direct {p1, p0}, Lcom/bianfeng/pluginlibrary/YmnSupport$1;-><init>(Lcom/bianfeng/pluginlibrary/YmnSupport;)V

    invoke-direct {p0, p1}, Lcom/bianfeng/pluginlibrary/YmnSupport;->runOnUiThread(Ljava/lang/Runnable;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 50
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public invokeWechatSetPayParams(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 239
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "wxAppId"

    .line 241
    invoke-virtual {v0, v1, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p4, "appId"

    .line 242
    invoke-virtual {v0, p4, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "packageId"

    .line 243
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "clientKey"

    .line 244
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "wechat_set_pay_params"

    const/4 p2, 0x1

    .line 245
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

    .line 247
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 3

    .line 310
    invoke-static {p1, p2, p3}, Lcom/bianfeng/ymnsdk/YmnSdk;->onActivityResult(IILandroid/content/Intent;)V

    const p1, 0x511b3

    if-ne p2, p1, :cond_0

    const/4 p1, 0x0

    const-string p2, "code"

    .line 312
    invoke-virtual {p3, p2, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    const-string v1, "zzx-test-Result"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const-string v0, "msg"

    .line 313
    invoke-virtual {p3, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 314
    iget-object v1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->listener:Lcom/bianfeng/pluginlibrary/YmnListener;

    invoke-virtual {p3, p2, p1}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    invoke-virtual {p3, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-interface {v1, p1, p2}, Lcom/bianfeng/pluginlibrary/YmnListener;->callBack(ILjava/lang/String;)V

    :cond_0
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

    .line 301
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onDestroy()V

    .line 302
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->callback:Lcom/bianfeng/ymnsdk/feature/YmnCallback;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->removeCallback(Lcom/bianfeng/ymnsdk/feature/YmnCallback;)V

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 0

    .line 306
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method protected onPause()V
    .locals 0

    .line 293
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

    .line 285
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onRestart()V

    return-void
.end method

.method protected onResume()V
    .locals 0

    .line 289
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onResume()V

    return-void
.end method

.method protected onStart()V
    .locals 0

    .line 281
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onStart()V

    return-void
.end method

.method protected onStop()V
    .locals 0

    .line 297
    invoke-static {}, Lcom/bianfeng/ymnsdk/YmnSdk;->onStop()V

    return-void
.end method

.method public onWindowFocusChanged(Z)V
    .locals 1

    .line 324
    iget-object v0, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->uActivity:Landroid/app/Activity;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/YmnSdk;->onWindowFocusChanged(ZLandroid/app/Activity;)V

    return-void
.end method

.method public setCallback(Lcom/bianfeng/pluginlibrary/YmnListener;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/bianfeng/pluginlibrary/YmnSupport;->listener:Lcom/bianfeng/pluginlibrary/YmnListener;

    return-void
.end method

.method public ymnInvoke(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "----------------------"

    const-string v1, "YmnUnitySupport"

    .line 139
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v2, 0x3

    .line 140
    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    const/4 v3, 0x1

    aput-object p2, v2, v3

    const/4 v3, 0x2

    aput-object p3, v2, v3

    const-string v3, "called method ymnInvoke %s::%s(%s)"

    invoke-static {v3, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 141
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :try_start_0
    const-string v0, "UserInterface"

    .line 144
    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 145
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/pluginlibrary/YmnSupport;->invokeUserInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const-string v0, "PaymentInterface"

    .line 146
    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 147
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/pluginlibrary/YmnSupport;->invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    const-string v0, "Utils"

    .line 148
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 149
    invoke-direct {p0, p2, p3}, Lcom/bianfeng/pluginlibrary/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :cond_2
    const/4 p1, 0x0

    return-object p1

    .line 152
    :catch_0
    new-instance p1, Ljava/lang/RuntimeException;

    const-string p2, "\u53c2\u6570\u683c\u5f0f\u5f02\u5e38"

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

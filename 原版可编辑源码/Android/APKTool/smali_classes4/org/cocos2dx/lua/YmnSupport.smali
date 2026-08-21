.class public Lorg/cocos2dx/lua/YmnSupport;
.super Ljava/lang/Object;
.source "YmnSupport.java"

# interfaces
.implements Lcom/bianfeng/platform/PlatformSdkListener;


# static fields
.field private static final TAG:Ljava/lang/String; = "YmnSupport"

.field private static activity:Landroid/app/Activity;

.field private static callbackiniting:Z

.field private static inited:Z

.field private static initing:Z

.field private static instance:Lorg/cocos2dx/lua/YmnSupport;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 44
    new-instance v0, Lorg/cocos2dx/lua/YmnSupport;

    invoke-direct {v0}, Lorg/cocos2dx/lua/YmnSupport;-><init>()V

    sput-object v0, Lorg/cocos2dx/lua/YmnSupport;->instance:Lorg/cocos2dx/lua/YmnSupport;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Landroid/app/Activity;
    .locals 1

    .line 40
    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    return-object v0
.end method

.method public static callbackInitSdk()V
    .locals 2

    .line 91
    sget-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->callbackiniting:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 94
    sput-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->callbackiniting:Z

    :try_start_0
    const-string v0, "AppActivity"

    const-string v1, "-----------------\u6743\u9650\u56de\u8c03PlatformSdkinit-----------------"

    .line 96
    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 97
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    sget-object v1, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/bianfeng/platform/PlatformSdk;->init(Landroid/app/Activity;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 99
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 0

    if-nez p2, :cond_0

    .line 276
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, "showToast"

    const-string p1, "\u9519\u8bef\uff1aargs\u53c2\u6570\u975ejson\u7ed3\u6784\uff01"

    .line 277
    invoke-static {p0, p1}, Lorg/cocos2dx/lua/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    :cond_0
    return-void
.end method

.method private static convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;
    .locals 3

    .line 282
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 283
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 284
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 286
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

    .line 53
    sput-object p0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    const/4 p0, 0x0

    .line 57
    :try_start_0
    invoke-static {p0}, Lorg/cocos2dx/lua/YmnSupport;->initSdk(Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 59
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static initSdk(Z)V
    .locals 1

    .line 64
    sget-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->initing:Z

    if-eqz v0, :cond_0

    return-void

    .line 68
    :cond_0
    sget-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->inited:Z

    if-eqz v0, :cond_1

    const/16 p0, 0x64

    const-string v0, "sdk already inited"

    .line 69
    invoke-static {p0, v0}, Lorg/cocos2dx/lua/YmnSupport;->ymnCallBack(ILjava/lang/String;)V

    const/16 p0, 0xcd

    .line 70
    invoke-static {p0, v0}, Lorg/cocos2dx/lua/YmnSupport;->ymnCallBack(ILjava/lang/String;)V

    return-void

    :cond_1
    const/4 v0, 0x1

    .line 74
    sput-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->initing:Z

    .line 76
    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->instance:Lorg/cocos2dx/lua/YmnSupport;

    invoke-static {v0}, Lcom/bianfeng/platform/PlatformSdk;->setListener(Lcom/bianfeng/platform/PlatformSdkListener;)V

    if-eqz p0, :cond_2

    .line 79
    new-instance p0, Lorg/cocos2dx/lua/YmnSupport$1;

    invoke-direct {p0}, Lorg/cocos2dx/lua/YmnSupport$1;-><init>()V

    invoke-static {p0}, Lorg/cocos2dx/lua/YmnSupport;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    .line 86
    :cond_2
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

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

    .line 171
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 172
    new-array p0, v2, [Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const-string v0, "onEvent"

    .line 173
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const-string v1, "label"

    const-string v3, "eventId"

    const-string v4, "map"

    if-eqz v0, :cond_1

    .line 175
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 176
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    .line 177
    invoke-static {p0, v4, p1}, Lorg/cocos2dx/lua/YmnSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 178
    new-instance p1, Ljava/util/LinkedHashMap;

    invoke-direct {p1}, Ljava/util/LinkedHashMap;-><init>()V

    .line 179
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v3, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 180
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 181
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v4, p0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "bfdata_onevent"

    .line 182
    invoke-static {p0, p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_0

    :cond_1
    const-string v0, "setFrequentRate"

    .line 185
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_2

    const/4 p0, 0x1

    .line 186
    new-array p0, p0, [Ljava/lang/String;

    aput-object p1, p0, v2

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    const-string v0, "onFrequentEvent"

    .line 187
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    .line 188
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 189
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    .line 190
    invoke-static {p0, v4, p1}, Lorg/cocos2dx/lua/YmnSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 191
    new-instance p1, Ljava/util/LinkedHashMap;

    invoke-direct {p1}, Ljava/util/LinkedHashMap;-><init>()V

    .line 192
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v3, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 193
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v1, v2}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 194
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p1, v4, p0}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 195
    invoke-static {v0, p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto :goto_0

    :cond_3
    const-string p1, "flushFrequentEvents"

    .line 197
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 198
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    :cond_4
    :goto_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokeFilePathInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "getStoragePath"

    .line 257
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 259
    invoke-static {}, Landroid/os/Environment;->getExternalStorageState()Ljava/lang/String;

    move-result-object p0

    const-string v0, "mounted"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 260
    sget-object p0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    invoke-virtual {p0, p1}, Landroid/app/Activity;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 262
    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    invoke-virtual {v0}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object v0, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 264
    :goto_0
    new-instance p1, Ljava/io/File;

    invoke-direct {p1, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 265
    invoke-virtual {p1}, Ljava/io/File;->exists()Z

    move-result v0

    const-string v1, "AppActivity"

    if-nez v0, :cond_1

    const-string v0, "spideman555"

    .line 266
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 267
    invoke-virtual {p1}, Ljava/io/File;->mkdirs()Z

    .line 269
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "spideman"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-object p0

    :cond_2
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

    .line 290
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    .line 291
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 292
    invoke-static {}, Lcom/bianfeng/platform/PaymentInterface;->getInstance()Lcom/bianfeng/platform/PaymentInterface;

    move-result-object v0

    const-string p1, "order_id"

    .line 293
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string p1, "product_id"

    .line 294
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string p1, "product_name"

    .line 295
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string p1, "product_price"

    .line 296
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string p1, "product_count"

    .line 297
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    const-string p1, "role_id"

    .line 298
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    const-string p1, "role_name"

    .line 299
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string p1, "role_grade"

    .line 300
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string p1, "role_balance"

    .line 301
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    const-string p1, "server_id"

    .line 302
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    const-string p1, "notify_url"

    .line 303
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    const-string p1, "ext"

    .line 304
    invoke-virtual {p0, p1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    .line 292
    invoke-virtual/range {v0 .. v12}, Lcom/bianfeng/platform/PaymentInterface;->payForProduct(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static invokePlatformSdk(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 0

    const-string p1, "init"

    .line 157
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p0, 0x1

    .line 158
    invoke-static {p0}, Lorg/cocos2dx/lua/YmnSupport;->initSdk(Z)V

    goto :goto_0

    :cond_0
    const-string p1, "getPlatformId"

    .line 159
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 160
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformId()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string p1, "getPlatformName"

    .line 161
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 162
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformName()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const-string p1, "getPlatformVersion"

    .line 163
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_3

    .line 164
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/PlatformSdk;->getPlatformVersion()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    const-string p1, "getYmnSdkVersion"

    .line 165
    invoke-virtual {p1, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_4

    .line 166
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
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Lorg/json/JSONException;
        }
    .end annotation

    const-string v0, "login"

    .line 203
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 204
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bianfeng/platform/UserInterface;->login()V

    goto/16 :goto_4

    :cond_0
    const-string v0, "callFunction"

    .line 205
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v2, 0x0

    const-string v3, "functionName"

    const-string v4, "args"

    if-eqz v0, :cond_9

    .line 206
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 207
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "ZFBBUY"

    .line 208
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string p1, "alipay_pay"

    goto :goto_0

    :cond_1
    const-string v0, "WXBUY"

    .line 210
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    const-string p1, "weixin_pay"

    :cond_2
    :goto_0
    const/4 v0, 0x1

    .line 213
    new-array v0, v0, [Ljava/lang/Object;

    aput-object p1, v0, v2

    const-string v2, "spideman_functionName :(%s)"

    invoke-static {v2, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "YmnSupport"

    invoke-static {v2, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 214
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 215
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v2

    .line 217
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_3

    if-nez v2, :cond_3

    .line 218
    new-instance p0, Lcom/google/gson/Gson;

    invoke-direct {p0}, Lcom/google/gson/Gson;-><init>()V

    const-class v3, Ljava/util/LinkedHashMap;

    invoke-virtual {p0, v0, v3}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/LinkedHashMap;

    goto :goto_1

    .line 220
    :cond_3
    invoke-static {p0, v4, v2}, Lorg/cocos2dx/lua/YmnSupport;->checkJsonStruct(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    move-object p0, v1

    :goto_1
    if-eqz p0, :cond_4

    .line 223
    invoke-virtual {p0}, Ljava/util/LinkedHashMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_5

    :cond_4
    if-eqz v2, :cond_8

    invoke-virtual {v2}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-nez v0, :cond_5

    goto :goto_2

    :cond_5
    if-eqz p0, :cond_6

    .line 227
    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;Ljava/util/LinkedHashMap;)V

    goto/16 :goto_4

    :cond_6
    if-eqz v2, :cond_7

    .line 229
    invoke-static {v2}, Lorg/cocos2dx/lua/YmnSupport;->convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p0

    invoke-static {p1, p0}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;[Ljava/lang/String;)V

    goto/16 :goto_4

    .line 231
    :cond_7
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u9519\u8bef\uff1a"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\u8c03\u7528\u9519\u8bef\uff01\uff01"

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "showToast"

    invoke-static {p1, p0}, Lorg/cocos2dx/lua/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    goto :goto_4

    .line 224
    :cond_8
    :goto_2
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/YmnSdk;->callFunction(Ljava/lang/String;)V

    goto :goto_4

    :cond_9
    const-string v0, "callFunctionWithResult"

    .line 235
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 236
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 237
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 238
    invoke-virtual {p0, v4}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_b

    .line 240
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-nez v0, :cond_a

    goto :goto_3

    .line 243
    :cond_a
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object v0

    invoke-static {p0}, Lorg/cocos2dx/lua/YmnSupport;->convertJsonArray(Lorg/json/JSONArray;)[Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p1, p0}, Lcom/bianfeng/platform/UserInterface;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 241
    :cond_b
    :goto_3
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p0

    new-array v0, v2, [Ljava/lang/String;

    invoke-virtual {p0, p1, v0}, Lcom/bianfeng/platform/UserInterface;->callFunctionWithResult(Ljava/lang/String;[Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_c
    const-string v0, "isSupportFunction"

    .line 245
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_e

    .line 246
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 247
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 248
    invoke-static {}, Lcom/bianfeng/platform/UserInterface;->getInstance()Lcom/bianfeng/platform/UserInterface;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/bianfeng/platform/UserInterface;->isSupportFunction(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_d

    .line 249
    sget-object p0, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    .line 251
    :cond_d
    sget-object p0, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    invoke-virtual {p0}, Ljava/lang/Boolean;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_e
    :goto_4
    return-object v1
.end method

.method private static invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "showToast"

    .line 311
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 312
    new-instance p0, Lorg/cocos2dx/lua/YmnSupport$2;

    invoke-direct {p0, p1}, Lorg/cocos2dx/lua/YmnSupport$2;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Lorg/cocos2dx/lua/YmnSupport;->runOnUiThread(Ljava/lang/Runnable;)V

    goto :goto_0

    :cond_0
    const-string v0, "logcat"

    .line 318
    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_1

    .line 319
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

    .line 328
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    .line 333
    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 334
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 335
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 336
    invoke-virtual {p0, v2}, Lorg/json/JSONObject;->opt(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v3

    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method public static onActivityResult(IILandroid/content/Intent;)V
    .locals 1

    .line 371
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/bianfeng/platform/PlatformSdk;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method

.method public static onNewIntent(Landroid/content/Intent;)V
    .locals 1

    .line 367
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bianfeng/platform/PlatformSdk;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method public static onPause()V
    .locals 1

    .line 358
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onPause()V

    return-void
.end method

.method public static onResume()V
    .locals 1

    .line 353
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onResume()V

    return-void
.end method

.method public static onStart()V
    .locals 1

    .line 349
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStart()V

    return-void
.end method

.method public static onStop()V
    .locals 1

    .line 363
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->onStop()V

    return-void
.end method

.method public static release()V
    .locals 1

    .line 375
    invoke-static {}, Lcom/bianfeng/platform/PlatformSdk;->getInstance()Lcom/bianfeng/platform/PlatformSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/platform/PlatformSdk;->release()V

    return-void
.end method

.method private static runOnUiThread(Ljava/lang/Runnable;)V
    .locals 1

    .line 104
    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/app/Activity;->isFinishing()Z

    move-result v0

    if-nez v0, :cond_0

    .line 105
    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    invoke-virtual {v0, p0}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public static native ymnCallBack(ILjava/lang/String;)V
.end method

.method public static ymnInvoke(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "----------------------"

    const-string v1, "YmnSupport"

    .line 131
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v2, 0x3

    .line 132
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

    .line 133
    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 134
    sget-object v0, Lorg/cocos2dx/lua/YmnSupport;->activity:Landroid/app/Activity;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    :try_start_0
    const-string v0, "PlatformSdk"

    .line 136
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 137
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->invokePlatformSdk(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const-string v0, "UserInterface"

    .line 138
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 139
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->invokeUserInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    const-string v0, "PaymentInterface"

    .line 140
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 141
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->invokePaymentInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    const-string v0, "Utils"

    .line 142
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 143
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->invokeUtils(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    const-string v0, "BfAnalytics"

    .line 144
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 145
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->invokeBfAnalytics(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    const-string v0, "FilePathInterface"

    .line 146
    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_6

    .line 147
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->invokeFilePathInterface(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :cond_6
    return-object v1

    .line 150
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

    .line 112
    sput-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->initing:Z

    const/4 v0, 0x1

    .line 113
    sput-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->inited:Z

    goto :goto_0

    :cond_0
    const/16 v1, 0x65

    if-ne p1, v1, :cond_1

    .line 115
    sput-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->initing:Z

    .line 116
    sput-boolean v0, Lorg/cocos2dx/lua/YmnSupport;->inited:Z

    .line 118
    :cond_1
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "AppActivity"

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p2, :cond_2

    goto :goto_1

    :cond_2
    const-string p2, ""

    .line 119
    :goto_1
    invoke-static {p1, p2}, Lorg/cocos2dx/lua/YmnSupport;->ymnCallBack(ILjava/lang/String;)V

    return-void
.end method

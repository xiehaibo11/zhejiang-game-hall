.class public Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;
.super Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;
.source "BaseRewardJs.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;


# instance fields
.field protected a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 33
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;-><init>()V

    return-void
.end method

.method private a(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 204
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 205
    invoke-virtual {v1, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 206
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 207
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 208
    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p1

    goto :goto_0

    :catchall_0
    const-string p1, "JS-Reward-Brigde"

    const-string v1, "code to string is error"

    .line 212
    invoke-static {p1, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v0
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    const-string v0, "cai"

    const-string v1, "exception: "

    .line 244
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "cai:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "JS-Reward-Brigde"

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string p2, "params is null"

    .line 246
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 249
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 252
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 253
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 254
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "packageName is empty"

    .line 255
    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 257
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x2

    if-eqz p2, :cond_2

    const/4 p2, 0x1

    goto :goto_0

    :cond_2
    move p2, v2

    .line 260
    :goto_0
    :try_start_1
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "code"

    .line 261
    sget v6, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 262
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "result"

    .line 263
    invoke-virtual {v5, v6, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 264
    invoke-virtual {v4, p2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 265
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/String;->getBytes()[B

    move-result-object v4

    invoke-static {v4, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 267
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 268
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v3, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 274
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 275
    invoke-static {v3, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    :catch_1
    move-exception p2

    .line 271
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 272
    invoke-static {v3, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    const-string v0, "JS-Reward-Brigde"

    .line 96
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v1, :cond_0

    .line 97
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v1, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V

    const-string p1, "getEndScreenInfo factory is true"

    .line 98
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    const-string p2, "getEndScreenInfo factory is null"

    .line 100
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p1, :cond_1

    .line 102
    move-object p2, p1

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 103
    iget-object v1, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    instance-of v1, v1, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_1

    .line 104
    iget-object p2, p2, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    .line 105
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 106
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object p2

    check-cast p2, Lcom/mbridge/msdk/mbjscommon/c/a;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/c/a;->a(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "getEndScreenInfo"

    .line 112
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 7

    .line 282
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "gial:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v0, "JS-Reward-Brigde"

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 284
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    .line 285
    sget v2, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 286
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 287
    sget-object v2, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    .line 288
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3}, Lorg/json/JSONArray;-><init>()V

    if-eqz v2, :cond_0

    .line 289
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    if-lez v4, :cond_0

    .line 290
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v4

    const/4 v5, 0x0

    :goto_0
    if-ge v5, v4, :cond_0

    .line 292
    invoke-interface {v2, v5}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    invoke-virtual {v3, v6}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    :cond_0
    const-string v2, "packageNameList"

    .line 295
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "data"

    .line 296
    invoke-virtual {p2, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 297
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v2, 0x2

    invoke-static {p2, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 302
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 303
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_0
    move-exception p2

    .line 299
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 300
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 193
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 194
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Reward-Brigde"

    const-string v0, "handlerPlayableException"

    .line 197
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 7

    .line 39
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->initialize(Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "com.mbridge.msdk.video.js.factory.IJSFactory"

    .line 42
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 43
    invoke-virtual {v1, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 45
    invoke-virtual {v1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    move v1, v0

    :goto_0
    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "com.mbridge.msdk.video.js.bridge.BaseRewardJsH5"

    .line 49
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 50
    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    iput-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    const-string v2, "initialize"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 51
    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v0

    const-class v5, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 52
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v0

    aput-object p2, v3, v6

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 54
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz p1, :cond_1

    .line 55
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 59
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 60
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V
    .locals 7

    .line 67
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/AbsMbridgeDownload;->initialize(Ljava/lang/Object;Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;)V

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "com.mbridge.msdk.video.js.factory.IJSFactory"

    .line 70
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 71
    invoke-virtual {v1, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 73
    invoke-virtual {v1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    move v1, v0

    :goto_0
    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "com.mbridge.msdk.video.js.bridge.BaseRewardJsH5"

    .line 77
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 78
    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    iput-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    const-string v2, "initialize"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 79
    const-class v5, Ljava/lang/Object;

    aput-object v5, v4, v0

    const-class v5, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 80
    iget-object v2, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v0

    aput-object p2, v3, v6

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 82
    :cond_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz p1, :cond_1

    .line 83
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    iput-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    .line 87
    sget-boolean p2, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p2, :cond_1

    .line 88
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_1
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    const-string v0, "JS-Reward-Brigde"

    .line 118
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->addDownloaderListener(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 120
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v1, :cond_0

    .line 121
    iget-object v1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v1, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->install(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_0

    .line 123
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    :cond_1
    if-eqz p1, :cond_3

    .line 127
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 128
    iget-object v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/mbridge/msdk/video/js/a/j;

    if-eqz v1, :cond_3

    .line 129
    iget-object v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/video/js/a/j;

    .line 130
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 131
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    if-eq p1, v2, :cond_2

    .line 132
    invoke-virtual {v1, p1}, Lcom/mbridge/msdk/video/js/a/j;->a(Landroid/content/Context;)V

    :cond_2
    const/4 p1, 0x1

    .line 134
    invoke-virtual {v1, p1, p2}, Lcom/mbridge/msdk/video/js/a/j;->click(ILjava/lang/String;)V

    const-string p1, "JSCommon install jump success"

    .line 135
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    const-string p1, "JSCommon install failed"

    .line 138
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "install"

    .line 141
    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 148
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 149
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Reward-Brigde"

    const-string v0, "notifyCloseBtn"

    .line 152
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 219
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "openURL:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "JS-Reward-Brigde"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 220
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is null"

    .line 221
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 224
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 226
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 227
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "type"

    .line 228
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    .line 230
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->mContext:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    .line 232
    iget-object p1, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->mContext:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 237
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :catch_0
    move-exception p1

    .line 235
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public sendNoticeAndCallBackClick(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 309
    invoke-virtual {p0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 182
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 183
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Reward-Brigde"

    const-string v0, "setOrientation"

    .line 186
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 159
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 160
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "JS-Reward-Brigde"

    const-string v0, "toggleCloseBtn"

    .line 163
    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 170
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 171
    iget-object v0, p0, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a:Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/video/js/bridge/IRewardBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    const-string v0, "JS-Reward-Brigde"

    const-string v1, "triggerCloseBtn"

    .line 174
    invoke-static {v0, v1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 175
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    const/4 v0, -0x1

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/js/bridge/BaseRewardJs;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

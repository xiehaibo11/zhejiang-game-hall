.class public Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;
.super Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;

# interfaces
.implements Lcom/tkay/expressad/video/signal/communication/IRewardBridge;


# static fields
.field protected static final h:Ljava/lang/String; = "JS-Reward-Brigde"


# instance fields
.field protected i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;-><init>()V

    return-void
.end method

.method private static a()Ljava/lang/String;
    .locals 4

    const-string v0, ""

    .line 203
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    const/4 v3, -0x1

    .line 204
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 205
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    .line 206
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 207
    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-object v0
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "exception: "

    .line 245
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p2, "params is null"

    .line 246
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 249
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 252
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 253
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 254
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "packageName is empty"

    .line 255
    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 257
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1, p2}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x2

    if-eqz p2, :cond_2

    const/4 p2, 0x1

    goto :goto_0

    :cond_2
    move p2, v1

    .line 260
    :goto_0
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "code"

    .line 261
    sget v4, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 262
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "result"

    .line 263
    invoke-virtual {v3, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 264
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 265
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/String;->getBytes()[B

    move-result-object v2

    invoke-static {v2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catch_0
    move-exception p2

    .line 267
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 268
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 274
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    goto :goto_1

    :catch_1
    move-exception p2

    .line 271
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lorg/json/JSONException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 94
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 100
    move-object p2, p1

    check-cast p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 101
    iget-object v0, p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    instance-of v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 102
    iget-object p2, p2, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 103
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 104
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/atsignalcommon/a/a;

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/atsignalcommon/a/a;->a(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 284
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 285
    sget v1, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 286
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "packageNameList"

    const-string v2, "[]"

    .line 296
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 297
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 298
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 303
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 304
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception p2

    .line 300
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 301
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 192
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 193
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 7

    .line 37
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "com.tkay.expressad.video.signal.factory.IJSFactory"

    .line 40
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 41
    invoke-virtual {v1, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 43
    invoke-virtual {v1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    move v1, v0

    :goto_0
    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "com.tkay.expressad.video.signal.communication.BaseRewardJsH5"

    .line 47
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 48
    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    iput-object v2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    const-string v2, "initialize"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 49
    const-class v5, Landroid/content/Context;

    aput-object v5, v4, v0

    const-class v5, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 50
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v0

    aput-object p2, v3, v6

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    .line 52
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz p1, :cond_1

    .line 53
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :cond_1
    return-void

    :catch_1
    move-exception p1

    .line 57
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_2

    .line 58
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 7

    .line 65
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    const/4 v0, 0x0

    :try_start_0
    const-string v1, "com.tkay.expressad.video.signal.factory.IJSFactory"

    .line 68
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 69
    invoke-virtual {v1, p1}, Ljava/lang/Class;->isInstance(Ljava/lang/Object;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 71
    invoke-virtual {v1}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    move v1, v0

    :goto_0
    if-eqz v1, :cond_0

    :try_start_1
    const-string v1, "com.tkay.expressad.video.signal.communication.BaseRewardJsH5"

    .line 75
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    .line 76
    invoke-virtual {v1}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    iput-object v2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    const-string v2, "initialize"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Class;

    .line 77
    const-class v5, Ljava/lang/Object;

    aput-object v5, v4, v0

    const-class v5, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    const/4 v6, 0x1

    aput-object v5, v4, v6

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    .line 78
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    new-array v3, v3, [Ljava/lang/Object;

    aput-object p1, v3, v0

    aput-object p2, v3, v6

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void

    .line 80
    :cond_0
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    instance-of p1, p1, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz p1, :cond_1

    .line 81
    invoke-virtual {p2}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :cond_1
    return-void

    :catch_1
    move-exception p1

    .line 85
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_2

    .line 86
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 119
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    .line 120
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->install(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 122
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    :cond_1
    if-eqz p1, :cond_3

    .line 126
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 127
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_3

    .line 128
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    .line 129
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 130
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    if-eq p1, v1, :cond_2

    .line 131
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/signal/a/j;->a(Landroid/content/Context;)V

    :cond_2
    const/4 p1, 0x1

    .line 133
    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/video/signal/a/j;->click(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_3
    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 147
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 148
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 219
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is null"

    .line 220
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 223
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 225
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 226
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "type"

    .line 227
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_1

    .line 230
    invoke-static {p2}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    .line 232
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->e:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception p1

    .line 237
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    goto :goto_0

    :catch_0
    move-exception p1

    .line 235
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    :cond_3
    :goto_0
    return-void
.end method

.method public setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 181
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 182
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 158
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 159
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 169
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 170
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->i:Lcom/tkay/expressad/video/signal/communication/IRewardBridge;

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/communication/IRewardBridge;->triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    .line 174
    :catchall_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-static {}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJs;->a()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

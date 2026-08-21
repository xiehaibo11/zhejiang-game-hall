.class public Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/signal/communication/IRewardBridge;


# static fields
.field protected static final a:Ljava/lang/String; = "JS-Reward-Brigde"


# instance fields
.field protected b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 268
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 269
    invoke-virtual {v1, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 270
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 271
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 272
    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    const/4 v1, 0x2

    invoke-static {p0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    :catchall_0
    :cond_0
    return-object v0
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "exception: "

    .line 130
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 133
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 134
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 135
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "packageName is empty"

    .line 136
    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 138
    :cond_0
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

    if-eqz p2, :cond_1

    const/4 p2, 0x1

    goto :goto_0

    :cond_1
    move p2, v1

    .line 141
    :goto_0
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "code"

    .line 142
    sget v4, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 143
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "result"

    .line 144
    invoke-virtual {v3, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 145
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 146
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

    .line 148
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 149
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 155
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

    .line 152
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lorg/json/JSONException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method public getEndScreenInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 46
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p2, :cond_1

    .line 47
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/i;->a()Ljava/lang/String;

    move-result-object p2

    .line 48
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 49
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    goto :goto_0

    :cond_0
    const-string p2, ""

    .line 55
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 165
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 166
    sget v1, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 167
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "packageNameList"

    const-string v2, "[]"

    .line 177
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 178
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 179
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

    .line 184
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 185
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception p2

    .line 181
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 182
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public handlerPlayableException(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 254
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 255
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "msg"

    .line 256
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 258
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/i;->handlerPlayableException(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public initialize(Landroid/content/Context;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 32
    instance-of p2, p1, Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p2, :cond_0

    .line 33
    check-cast p1, Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    :cond_0
    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 38
    instance-of p2, p1, Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p2, :cond_0

    .line 39
    check-cast p1, Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    :cond_0
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 65
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_2

    if-eqz p1, :cond_0

    .line 69
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 70
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_0

    .line 71
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_0

    .line 73
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 74
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    if-eq p1, v1, :cond_0

    .line 75
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/signal/a/j;->a(Landroid/content/Context;)V

    .line 80
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/e;->endCardShowing()Z

    move-result p1

    if-eqz p1, :cond_1

    .line 81
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    const/4 v0, 0x3

    invoke-interface {p1, v0, p2}, Lcom/tkay/expressad/video/signal/c;->click(ILjava/lang/String;)V

    return-void

    .line 83
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    const/4 v0, 0x1

    invoke-interface {p1, v0, p2}, Lcom/tkay/expressad/video/signal/c;->click(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 192
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 193
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 194
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 196
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/i;->notifyCloseBtn(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 94
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 95
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    if-nez v0, :cond_0

    .line 97
    :try_start_0
    instance-of v1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz v1, :cond_0

    .line 98
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_0

    .line 100
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 104
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    if-nez v0, :cond_1

    return-void

    .line 110
    :cond_1
    :try_start_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 111
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "type"

    .line 112
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_2

    .line 115
    invoke-static {p2}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    return-void

    :cond_2
    const/4 v1, 0x2

    if-ne p1, v1, :cond_3

    .line 117
    invoke-static {v0, p2}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception p1

    .line 122
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    goto :goto_1

    :catch_1
    move-exception p1

    .line 120
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    :cond_4
    :goto_1
    return-void
.end method

.method public setOrientation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 239
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 240
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 241
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 243
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/i;->b(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 206
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 207
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 208
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 210
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/i;->toggleCloseBtn(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 220
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 222
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 223
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 224
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->b:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getIJSRewardVideoV1()Lcom/tkay/expressad/video/signal/i;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/tkay/expressad/video/signal/i;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    .line 232
    :catchall_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, -0x1

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseRewardJsH5;->a(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

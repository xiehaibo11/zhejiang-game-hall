.class public Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;
.super Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;

# interfaces
.implements Lcom/tkay/expressad/video/signal/communication/IVideoBridge;


# static fields
.field protected static final h:Ljava/lang/String; = "JS-Video-Brigde"

.field private static final j:I = 0x1

.field private static final k:I = 0x2

.field private static final l:Ljava/lang/String; = "showTransparent"

.field private static final m:Ljava/lang/String; = "mute"

.field private static final n:Ljava/lang/String; = "closeType"

.field private static final o:Ljava/lang/String; = "orientationType"

.field private static final p:Ljava/lang/String; = "type"

.field private static final q:Ljava/lang/String; = "h5cbp"

.field private static final r:Ljava/lang/String; = "webfront"

.field private static final s:Ljava/lang/String; = "showAlertRole"


# instance fields
.field protected i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 43
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;-><init>()V

    return-void
.end method

.method private static a(I)Ljava/lang/String;
    .locals 0

    packed-switch p0, :pswitch_data_0

    const-string p0, ""

    goto :goto_0

    :pswitch_0
    const-string p0, "sdkSetting"

    goto :goto_0

    :pswitch_1
    const-string p0, "device"

    goto :goto_0

    :pswitch_2
    const-string p0, "unitSetting"

    goto :goto_0

    :pswitch_3
    const-string p0, "appSetting"

    goto :goto_0

    :pswitch_4
    const-string p0, "unit_id"

    goto :goto_0

    :pswitch_5
    const-string p0, "sdk_info"

    :goto_0
    return-object p0

    :pswitch_data_0
    .packed-switch 0x1
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private static a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 806
    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 807
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    const/4 v1, 0x1

    .line 808
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "params is null"

    .line 809
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 810
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->getBytes()[B

    move-result-object p1

    const/4 v1, 0x2

    invoke-static {p1, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p0

    .line 814
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method private static b(I)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    .line 643
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "code"

    .line 644
    invoke-virtual {v1, v2, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 645
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 646
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 647
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
.method public appendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 918
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 920
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->i(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 922
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "appendSubView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public appendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 928
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 930
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->j(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 932
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "appendViewTo error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public bringViewToFront(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 958
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 960
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->m(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 962
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "bringViewToFront error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public broadcast(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1249
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1251
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->M(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1253
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "broadcast error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "exception: "

    .line 447
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 450
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 451
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 452
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "packageName is empty"

    .line 453
    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 455
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

    .line 458
    :goto_0
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "code"

    .line 459
    sget v4, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 460
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "result"

    .line 461
    invoke-virtual {v3, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 462
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 463
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

    .line 465
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 466
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 472
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

    .line 469
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

.method public clearAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1473
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p2

    const-string v0, "tkay_h5_cachesp"

    const/4 v1, 0x0

    .line 1474
    invoke-virtual {p2, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p2

    .line 1475
    invoke-interface {p2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->clear()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V

    if-eqz p1, :cond_0

    .line 1477
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 1478
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "Success"

    .line 1479
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1480
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
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 1483
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getAllCache error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 149
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_1

    .line 154
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 155
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v1, "pt"

    .line 156
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception p2

    const/4 v0, 0x1

    :try_start_2
    const-string v1, ""

    .line 160
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    move p2, v0

    move-object v0, v1

    .line 184
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v1, :cond_0

    .line 195
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1, p2, v0}, Lcom/tkay/expressad/video/signal/c;->click(ILjava/lang/String;)V

    return-void

    :cond_0
    if-eqz p1, :cond_1

    .line 198
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 199
    iget-object v1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v1, :cond_1

    .line 200
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz p1, :cond_1

    .line 207
    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/video/signal/a/j;->click(ILjava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public closeAd(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1239
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1241
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->L(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1243
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "closeAd error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public closeVideoOperte(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 318
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 319
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "close"

    .line 320
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v1, "view_visible"

    .line 321
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 322
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "closeVideoOperte,close:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",viewVisible:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 323
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v1

    invoke-interface {v1, p2, v0}, Lcom/tkay/expressad/video/signal/j;->closeVideoOperate(II)V

    .line 325
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public closeWeb(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 1261
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 1264
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1265
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "status"

    .line 1266
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 1267
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/e;->hideAlertWebview()V

    .line 1268
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/j;->hideAlertView(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public createNativeEC(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1354
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1356
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->Q(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1358
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "createNativeEC error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public createPlayerView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 846
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 848
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->c(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 850
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "createPlayerView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public createSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 856
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 858
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->d(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 860
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "createSubPlayTemplateView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public createView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 836
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 838
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 840
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "createWebview error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public createWebview(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 826
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 828
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 830
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "createWebview error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public destroyComponent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 872
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 874
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->e(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 876
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "destroyComponent error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getAllCache(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string p2, "getAllCache error "

    const/4 v0, 0x0

    const/4 v1, 0x0

    .line 1440
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_h5_cachesp"

    .line 1441
    invoke-virtual {v2, v3, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 1442
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1443
    :try_start_1
    invoke-interface {v2}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v1

    .line 1444
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 1445
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const-string v1, "getAllCache Success"
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v1

    goto :goto_1

    :catchall_1
    move-exception v2

    move-object v3, v1

    move-object v1, v2

    .line 1449
    :goto_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 1450
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v4, "getAllCache Error, reason is : "

    invoke-direct {v2, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 1454
    :goto_2
    :try_start_2
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "code"

    .line 1455
    invoke-virtual {v2, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    .line 1456
    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    const-string v0, "data"

    if-eqz v3, :cond_1

    .line 1458
    :try_start_3
    invoke-virtual {v2, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_3

    :cond_1
    const-string v1, "{}"

    .line 1460
    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :goto_3
    if-eqz p1, :cond_2

    .line 1463
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    const/4 v2, 0x2

    invoke-static {v1, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :cond_2
    return-void

    :catchall_2
    move-exception p1

    .line 1466
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getAppSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 1509
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "appid"

    const-string v1, ""

    .line 1510
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1513
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 1515
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v2, 0x1

    const-string v3, "message"

    const-string v4, "code"

    if-nez v1, :cond_2

    .line 1516
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {p2}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1517
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v5, 0x0

    if-eqz v1, :cond_0

    .line 1518
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object p2

    .line 1519
    invoke-virtual {p2}, Lcom/tkay/expressad/d/a;->R()Ljava/lang/String;

    move-result-object p2

    .line 1520
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    goto :goto_0

    .line 1522
    :cond_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isDefault"

    .line 1523
    invoke-virtual {v1, p2, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :goto_0
    if-eqz p1, :cond_1

    .line 1527
    invoke-virtual {v0, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Success"

    .line 1528
    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 1529
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 1531
    :cond_1
    invoke-virtual {v0, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get App Setting error, plz try again later."

    .line 1532
    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 1535
    :cond_2
    invoke-virtual {v0, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get App Setting error, because must give a appId."

    .line 1536
    invoke-virtual {v0, v3, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1538
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1540
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getAppSetting error : "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getComponentOptions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 882
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 884
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->f(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 886
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getComponentOptions error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getCurrentProgress(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 367
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p2, :cond_1

    .line 368
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/j;->getCurrentProgress()Ljava/lang/String;

    move-result-object p2

    .line 370
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 371
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 373
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public getCutout(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 1490
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/c;->o()Ljava/lang/String;

    move-result-object p2

    const/4 v0, 0x2

    if-eqz p1, :cond_0

    .line 1493
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 1494
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v1

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1496
    :cond_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "code"

    const/4 v2, 0x1

    .line 1497
    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "message"

    const-string v2, "No notch data, plz try again later."

    .line 1498
    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1499
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v1

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v1, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1502
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getCutout error : "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getEncryptPrice(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 696
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 698
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->P(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public getRewardSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 1547
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p2

    invoke-virtual {p2}, Lcom/tkay/expressad/videocommon/e/c;->b()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object p2

    .line 1548
    invoke-virtual {p2}, Lcom/tkay/expressad/videocommon/e/a;->k()Lorg/json/JSONObject;

    move-result-object p2

    .line 1549
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "message"

    const-string v2, "code"

    if-eqz p1, :cond_0

    const/4 v3, 0x0

    .line 1552
    :try_start_1
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "Success"

    .line 1553
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 1554
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    :cond_0
    const/4 p2, 0x1

    .line 1556
    invoke-virtual {v0, v2, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get Reward Setting error, plz try again later."

    .line 1557
    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1559
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1561
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getRewardSetting error : "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getRewardUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    const-string v0, ""

    .line 1568
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "appid"

    .line 1569
    invoke-virtual {v1, p2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v2, "unitid"

    .line 1570
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1572
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    .line 1574
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v3, 0x1

    const-string v4, "message"

    const-string v5, "code"

    if-nez v2, :cond_1

    :try_start_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1575
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    invoke-virtual {v2, p2, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p2

    .line 1576
    invoke-virtual {p2}, Lcom/tkay/expressad/videocommon/e/d;->R()Lorg/json/JSONObject;

    move-result-object p2

    if-eqz p1, :cond_0

    const/4 v0, 0x0

    .line 1579
    invoke-virtual {v1, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "Success"

    .line 1580
    invoke-virtual {v1, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "data"

    .line 1581
    invoke-virtual {v1, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 1583
    :cond_0
    invoke-virtual {v1, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get Reward Unit Setting error, plz try again later."

    .line 1584
    invoke-virtual {v1, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 1587
    :cond_1
    invoke-virtual {v1, v5, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "Get reward unit Setting error, because must give appId and unitId."

    .line 1588
    invoke-virtual {v1, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1590
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1592
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getRewardUnitSetting error : "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public getSDKInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    .line 722
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 723
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 724
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->getJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p2

    .line 725
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 726
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    .line 727
    :goto_0
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v2, v1, :cond_2

    .line 728
    invoke-virtual {p2, v2}, Lorg/json/JSONArray;->getInt(I)I

    move-result v1

    .line 729
    iget-object v3, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v3}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v3

    invoke-interface {v3, v1}, Lcom/tkay/expressad/video/signal/c;->h(I)Ljava/lang/String;

    move-result-object v3

    .line 730
    invoke-static {v1}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    if-eqz p1, :cond_2

    .line 734
    :goto_1
    invoke-virtual {p2}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v2, v1, :cond_2

    .line 735
    invoke-virtual {p2, v2}, Lorg/json/JSONArray;->getInt(I)I

    move-result v1

    .line 736
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 737
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v4}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v4

    instance-of v4, v4, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v4, :cond_1

    .line 738
    iget-object v3, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/video/signal/a/j;

    .line 739
    invoke-static {v1}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/video/signal/a/j;->h(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v4, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 744
    :cond_2
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    .line 745
    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 746
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 748
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const-string v0, "params is null"

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 752
    :catchall_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const-string v0, "exception"

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public getUnitSetting(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1599
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    const/4 v1, 0x1

    .line 1600
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "Get Unit Setting error, RV/IV can not support this method."

    .line 1601
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1602
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
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1604
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "getUnitSetting error : "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 482
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 483
    sget v1, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 484
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "packageNameList"

    const-string v2, "[]"

    .line 494
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 495
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 496
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

    .line 501
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 502
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception p2

    .line 498
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 499
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public handleNativeObject(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1324
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1326
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/b;->a()Lcom/tkay/expressad/video/bt/a/b;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/b;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1328
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "handleNativeObject error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 568
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 569
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "code"

    const/16 v0, -0x3e7

    .line 571
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    const-string v0, "message"

    const-string v1, "h5 error"

    .line 572
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 573
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0, p2, p1}, Lcom/tkay/expressad/video/signal/c;->handlerH5Exception(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public hideView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 968
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 970
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->n(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 972
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "hideView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public increaseOfferFrequence(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 1314
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1316
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Lcom/tkay/expressad/video/bt/a/c;->a(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1318
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "increaseOfferFrequence error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 13

    .line 85
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x0

    const-string v2, "showAlertRole"

    const-string v3, "webfront"

    const-string v4, "h5cbp"

    const-string v5, "orientationType"

    const-string v6, "closeType"

    const-string v7, "mute"

    const-string v8, "showTransparent"

    const/4 v9, 0x2

    const/4 v10, 0x1

    if-eqz v0, :cond_4

    .line 86
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/c;->i()Ljava/lang/String;

    move-result-object v0

    .line 87
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v11

    if-nez v11, :cond_0

    .line 88
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-static {v0, v9}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 90
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v9

    invoke-virtual {v9, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 92
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->h()V

    .line 93
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 94
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 95
    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 96
    invoke-virtual {p1, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 97
    invoke-virtual {p1, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    .line 98
    invoke-virtual {p1, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    .line 99
    invoke-virtual {p1, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    .line 100
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    .line 101
    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 102
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v2

    if-ne p2, v10, :cond_1

    move v1, v10

    :cond_1
    invoke-interface {v2, v1}, Lcom/tkay/expressad/video/signal/c;->a(Z)V

    .line 103
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2, v0}, Lcom/tkay/expressad/video/signal/c;->b(I)V

    .line 104
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2, v6}, Lcom/tkay/expressad/video/signal/c;->c(I)V

    .line 105
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2, v5}, Lcom/tkay/expressad/video/signal/c;->d(I)V

    .line 106
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2, v4}, Lcom/tkay/expressad/video/signal/c;->e(I)V

    .line 107
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2, v3}, Lcom/tkay/expressad/video/signal/c;->f(I)V

    .line 108
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    if-nez p1, :cond_2

    goto :goto_0

    :cond_2
    move v10, p1

    :goto_0
    invoke-interface {p2, v10}, Lcom/tkay/expressad/video/signal/c;->i(I)V

    :cond_3
    return-void

    :cond_4
    if-eqz p1, :cond_8

    .line 113
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 114
    iget-object v11, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v11}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v11

    instance-of v11, v11, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v11, :cond_8

    .line 115
    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    .line 116
    invoke-virtual {v0}, Lcom/tkay/expressad/video/signal/a/j;->i()Ljava/lang/String;

    move-result-object v11

    .line 117
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_7

    .line 118
    new-instance v12, Lorg/json/JSONObject;

    invoke-direct {v12, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 119
    invoke-virtual {v12, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 120
    invoke-virtual {v12, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v7

    .line 121
    invoke-virtual {v12, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    .line 122
    invoke-virtual {v12, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    .line 123
    invoke-virtual {v12, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v4

    .line 124
    invoke-virtual {v12, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    .line 125
    invoke-virtual {v12, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    if-ne p2, v10, :cond_5

    move v1, v10

    .line 126
    :cond_5
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/signal/a/j;->a(Z)V

    .line 127
    invoke-virtual {v0, v7}, Lcom/tkay/expressad/video/signal/a/j;->b(I)V

    .line 128
    invoke-virtual {v0, v6}, Lcom/tkay/expressad/video/signal/a/j;->c(I)V

    .line 129
    invoke-virtual {v0, v5}, Lcom/tkay/expressad/video/signal/a/j;->d(I)V

    .line 130
    invoke-virtual {v0, v4}, Lcom/tkay/expressad/video/signal/a/j;->e(I)V

    .line 131
    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/signal/a/j;->f(I)V

    if-nez v2, :cond_6

    goto :goto_1

    :cond_6
    move v10, v2

    .line 132
    :goto_1
    invoke-virtual {v0, v10}, Lcom/tkay/expressad/video/signal/a/j;->i(I)V

    .line 135
    :cond_7
    invoke-virtual {v11}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    invoke-static {p2, v9}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 136
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_8
    return-void
.end method

.method public initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 75
    invoke-super {p0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/AbsFeedBackForH5;->initialize(Ljava/lang/Object;Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V

    .line 76
    instance-of p2, p1, Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p2, :cond_0

    .line 77
    check-cast p1, Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    iput-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    :cond_0
    return-void
.end method

.method public insertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1018
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1020
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->s(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1022
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "insertViewAbove error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public insertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1028
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1030
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->t(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1032
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "insertViewBelow error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public isSystemResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 583
    :try_start_0
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p2, :cond_0

    .line 585
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getActivityProxy()Lcom/tkay/expressad/video/signal/a;

    move-result-object p2

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/a;->h()I

    move-result p2

    .line 586
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-static {p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public ivRewardAdsWithoutVideo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 1279
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 1283
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 1284
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object p1

    invoke-interface {p1, p2}, Lcom/tkay/expressad/video/signal/e;->ivRewardAdsWithoutVideo(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public loadads(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const/4 v0, 0x1

    .line 771
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 772
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "unitId"

    .line 774
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v2, "type"

    .line 775
    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const/4 v3, 0x2

    if-le v2, v3, :cond_0

    move v2, v0

    :cond_0
    const-string v3, "adtype"

    .line 780
    invoke-virtual {v1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_1
    const-string p2, ""

    move v1, v0

    move v2, v1

    .line 782
    :goto_0
    :try_start_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 783
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    :cond_2
    if-eqz p1, :cond_3

    .line 787
    move-object v3, p1

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 788
    iget-object v4, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    instance-of v4, v4, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v4, :cond_3

    .line 789
    iget-object v3, v3, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 790
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v4

    if-eqz v4, :cond_3

    .line 791
    invoke-virtual {v3}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/atsignalcommon/a/a;

    invoke-virtual {v3, p2, v2, v1}, Lcom/tkay/expressad/atsignalcommon/a/a;->a(Ljava/lang/String;II)V

    .line 795
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v1, 0x0

    invoke-static {v1}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    .line 798
    :catchall_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void
.end method

.method public loadingResourceStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1334
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    if-eqz p1, :cond_0

    .line 1337
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1338
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 1339
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 1340
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 1341
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1342
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 1343
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->loadingResourceStatus(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1348
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "loadingResourceStatus error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    :cond_0
    :goto_0
    return-void
.end method

.method public notifyCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 411
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 412
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 413
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 415
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/j;->notifyCloseBtn(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public onlyAppendSubView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 938
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 940
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->k(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 942
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "appendSubView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public onlyAppendViewTo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 948
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 950
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->l(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 952
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "appendViewTo error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public onlyInsertViewAbove(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1038
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1040
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->u(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1042
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "insertViewAbove error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public onlyInsertViewBelow(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1048
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1050
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->v(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1052
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "insertViewBelow error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 425
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 427
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 428
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "type"

    .line 429
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 432
    invoke-static {p2}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 434
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->e:Landroid/content/Context;

    invoke-static {p1, p2}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 439
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    goto :goto_0

    :catch_0
    move-exception p1

    .line 437
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    :cond_2
    :goto_0
    return-void
.end method

.method public playVideoFinishOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 626
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 629
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_1

    .line 630
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 631
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 633
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/c;->g(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public playerGetMuteState(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1180
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1182
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->H(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1184
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerGetMuteState error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerMute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1160
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1162
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->F(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1164
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerMute error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerPause(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1120
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1122
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->B(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1124
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerPause error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerPlay(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1110
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1112
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->A(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1114
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerPlay error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerResume(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1130
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1132
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->C(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1134
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerResume error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerSetRenderType(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 1200
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1202
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->J(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1204
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerSetRenderType error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerSetSource(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 1190
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1192
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->I(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1194
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerSetSource error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerStop(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1140
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1142
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->D(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1144
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerStop error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerUnmute(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1170
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1172
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->G(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1174
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerUnmute error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public playerUpdateFrame(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 1150
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1152
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/bt/a/c;->E(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1154
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "playerUpdateFrame error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public preloadSubPlayTemplateView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1216
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1218
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    .line 1219
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->K(Ljava/lang/Object;Lorg/json/JSONObject;)V

    return-void

    .line 1221
    :cond_0
    move-object v0, p1

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 1222
    iget-object v1, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    instance-of v1, v1, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v1, :cond_1

    .line 1223
    iget-object v0, v0, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 1224
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 1225
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/atsignalcommon/a/a;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/a/a;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 1233
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "preloadSubPlayTemplateView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public progressBarOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 352
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 353
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "view_visible"

    .line 354
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 355
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/tkay/expressad/video/signal/j;->progressBarOperate(I)V

    .line 357
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public progressOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 335
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 336
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "progress"

    .line 337
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v1, "view_visible"

    .line 338
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 339
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "progressOperate,progress:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",viewVisible:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 340
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v1

    invoke-interface {v1, p2, v0}, Lcom/tkay/expressad/video/signal/j;->progressOperate(II)V

    .line 342
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 670
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 671
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSBTModule()Lcom/tkay/expressad/video/signal/b;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/video/signal/b;->reactDeveloper(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 673
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 676
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "reactDeveloper error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    if-eqz p1, :cond_1

    .line 603
    :try_start_0
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 604
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "isReady"

    const/4 v1, 0x1

    .line 605
    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p2

    .line 606
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/expressad/video/signal/a/j;

    if-eqz v0, :cond_0

    .line 607
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/video/signal/a/j;

    .line 608
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/video/signal/a/j;->j(I)V

    .line 610
    :cond_0
    iget-object v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_1

    .line 611
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    .line 612
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 613
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->readyState(Landroid/webkit/WebView;I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_1
    return-void
.end method

.method public removeCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 1404
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_h5_cachesp"

    .line 1405
    invoke-virtual {v2, v3, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 1406
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 1407
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "key"

    .line 1408
    invoke-virtual {v3, p2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 1409
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 1410
    invoke-interface {v2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    invoke-interface {v2, p2}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    const-string p2, "Delete Success"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v2, v0

    goto :goto_1

    :cond_1
    const-string p2, ""

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 1416
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "removeCacheItem error "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 1417
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Delete Error, reason is : "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :goto_0
    move v2, v1

    .line 1422
    :goto_1
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "code"

    if-eqz v2, :cond_2

    move v0, v1

    .line 1423
    :cond_2
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    .line 1424
    invoke-virtual {v3, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 p2, 0x2

    if-eqz p1, :cond_3

    if-eqz v2, :cond_3

    .line 1426
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1428
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void
.end method

.method public removeFromSuperView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 908
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 910
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->h(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 912
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "removeFromSuperView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 684
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 685
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    invoke-static {p1, p2}, Lcom/tkay/expressad/video/bt/a/c;->b(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 687
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x1

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 690
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "reportUrls error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public setCacheItem(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const/4 v0, 0x1

    const/4 v1, 0x0

    .line 1367
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const-string v3, "tkay_h5_cachesp"

    .line 1368
    invoke-virtual {v2, v3, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    .line 1369
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 1370
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "key"

    .line 1371
    invoke-virtual {v3, p2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v4, "value"

    .line 1372
    invoke-virtual {v3, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 1373
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    .line 1374
    invoke-interface {v2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    invoke-interface {v2, p2, v3}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    const-string p2, "Save Success"
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v2, v0

    goto :goto_1

    :cond_1
    const-string p2, ""

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 1380
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "setCacheItem error "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 1381
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "Save Error, reason is : "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    :goto_0
    move v2, v1

    .line 1386
    :goto_1
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "code"

    if-eqz v2, :cond_2

    move v0, v1

    .line 1387
    :cond_2
    invoke-virtual {v3, v4, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    .line 1388
    invoke-virtual {v3, v0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const/4 p2, 0x2

    if-eqz p1, :cond_3

    if-eqz v2, :cond_3

    .line 1390
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 1392
    :cond_3
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->getBytes()[B

    move-result-object v1

    invoke-static {v1, p2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    return-void
.end method

.method public setScaleFitXY(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 397
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 398
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "fitxy"

    .line 399
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 401
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/j;->setScaleFitXY(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public setSubPlayTemplateInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1294
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1296
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->N(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1298
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "setSubPlayTemplateInfo error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public setViewAlpha(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 998
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1000
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->q(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1002
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "setViewAlpha error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public setViewBgColor(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 988
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 990
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->p(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 992
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "setViewBgColor error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public setViewRect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 898
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 900
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->g(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 902
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "setViewRect error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public setViewScale(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1008
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1010
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->r(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1012
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "setViewScale error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public showAlertView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 510
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 511
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/tkay/expressad/video/signal/j;->showIVRewardAlertView(Ljava/lang/String;)V

    .line 512
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const-string v0, "showAlertView"

    const-string v1, ""

    invoke-virtual {p2, p1, v0, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public showVideoClickView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 383
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 384
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 385
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 387
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSContainerModule()Lcom/tkay/expressad/video/signal/e;

    move-result-object p2

    invoke-interface {p2, p1}, Lcom/tkay/expressad/video/signal/e;->showVideoClickView(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public showVideoLocation(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 11

    .line 255
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 256
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "margin_top"

    const/4 v0, 0x0

    .line 257
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v2

    const-string p2, "margin_left"

    .line 258
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v3

    const-string p2, "view_width"

    .line 259
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v4

    const-string p2, "view_height"

    .line 260
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v5

    const-string p2, "radius"

    .line 261
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v6

    const-string p2, "border_top"

    .line 262
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v7

    const-string p2, "border_left"

    .line 263
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v8

    const-string p2, "border_width"

    .line 264
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    const-string p2, "border_height"

    .line 265
    invoke-virtual {p1, p2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v10

    .line 267
    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "showVideoLocation,margin_top:"

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",marginLeft:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",viewWidth:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",viewHeight:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",radius:"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",borderTop: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",borderLeft: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",borderWidth: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ",borderHeight: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 269
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v1

    invoke-interface/range {v1 .. v10}, Lcom/tkay/expressad/video/signal/j;->showVideoLocation(IIIIIIIII)V

    .line 270
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/c;->l()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public showView(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 978
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 980
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->o(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 982
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "showView error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public soundOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 280
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_1

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 281
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "mute"

    .line 282
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v1, "view_visible"

    .line 283
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    const-string v2, "pt"

    const-string v3, ""

    .line 284
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 285
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "soundOperate,mute:"

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",viewVisible:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, ",pt:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 286
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 287
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, p2, v1}, Lcom/tkay/expressad/video/signal/j;->soundOperate(II)V

    goto :goto_0

    .line 289
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v2

    invoke-interface {v2, p2, v1, v0}, Lcom/tkay/expressad/video/signal/j;->soundOperate(IILjava/lang/String;)V

    .line 292
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public statistics(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 222
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 223
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "type"

    .line 224
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    const-string v0, "data"

    .line 225
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSCommon()Lcom/tkay/expressad/video/signal/c;

    move-result-object v0

    invoke-interface {v0, p2, p1}, Lcom/tkay/expressad/video/signal/c;->a(ILjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 547
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz p1, :cond_2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 548
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 549
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 p2, 0x0

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-ne p1, v1, :cond_0

    goto :goto_0

    :cond_0
    if-ne p1, v0, :cond_1

    move v0, v1

    goto :goto_0

    :cond_1
    move v0, p2

    .line 558
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p1}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p1

    invoke-interface {p1, p2, v0}, Lcom/tkay/expressad/video/signal/j;->closeVideoOperate(II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_2
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 238
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 239
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 240
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v0, "click"

    .line 241
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 243
    iget-object p2, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {p2}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object p2

    const/4 v0, 0x1

    const/4 v1, -0x1

    invoke-interface {p2, v0, v1}, Lcom/tkay/expressad/video/signal/j;->closeVideoOperate(II)V

    .line 244
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public videoOperate(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 302
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    if-eqz v0, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 303
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pause_or_resume"

    .line 304
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2

    .line 306
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->i:Lcom/tkay/expressad/video/signal/factory/IJSFactory;

    invoke-interface {v0}, Lcom/tkay/expressad/video/signal/factory/IJSFactory;->getJSVideoModule()Lcom/tkay/expressad/video/signal/j;

    move-result-object v0

    invoke-interface {v0, p2}, Lcom/tkay/expressad/video/signal/j;->videoOperate(I)V

    .line 308
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object p2

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->b(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public webviewFireEvent(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1304
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1306
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->O(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1308
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "setSubPlayTemplateInfo error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public webviewGoBack(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1084
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1086
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->y(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1088
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "webviewGoBack error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public webviewGoForward(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1094
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1096
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->z(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1098
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "webviewGoForward error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public webviewLoad(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1064
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1066
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->w(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1068
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "webviewLoad error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public webviewReload(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 1074
    invoke-static {p1, p2}, Lcom/tkay/expressad/video/signal/communication/BaseVideoBridge;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 1076
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/video/bt/a/c;->a()Lcom/tkay/expressad/video/bt/a/c;

    move-result-object v0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/bt/a/c;->x(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 1078
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "webviewReload error "

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

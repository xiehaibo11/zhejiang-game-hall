.class public Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/splash/js/ISplashBridge;


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:I

.field private g:I

.field private h:I

.field private i:I

.field private j:Lcom/tkay/expressad/splash/d/a;

.field private k:Lcom/tkay/expressad/splash/js/SplashExpandDialog;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 49
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "SplashJSBridgeImpl"

    .line 36
    iput-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->a:Ljava/lang/String;

    const/4 v0, 0x5

    .line 44
    iput v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->h:I

    .line 50
    iput-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->e:Ljava/lang/String;

    .line 51
    iput-object p3, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->d:Ljava/lang/String;

    .line 52
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->b:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public cai(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string v0, "exception: "

    .line 262
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p2, "params is null"

    .line 263
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 266
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 269
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 270
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 271
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "packageName is empty"

    .line 272
    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 274
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

    .line 277
    :goto_0
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "code"

    .line 278
    sget v4, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 279
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "result"

    .line 280
    invoke-virtual {v3, v4, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 281
    invoke-virtual {v2, p2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 282
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

    .line 284
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 285
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return-void

    :catchall_0
    move-exception p2

    .line 291
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

    .line 288
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

.method public close()V
    .locals 1

    .line 358
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz v0, :cond_0

    .line 359
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    invoke-interface {v0}, Lcom/tkay/expressad/splash/d/a;->c()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public expand(Ljava/lang/String;Z)V
    .locals 2

    .line 394
    :try_start_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "url"

    .line 395
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "shouldUseCustomClose"

    .line 396
    invoke-virtual {v0, p1, p2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 398
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->b:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 399
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->k:Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->k:Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->isShowing()Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 402
    :cond_0
    new-instance p1, Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    invoke-direct {p1, p2, v0, v1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;-><init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/tkay/expressad/splash/d/a;)V

    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->k:Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    .line 403
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->setCampaignList(Ljava/lang/String;Ljava/util/List;)V

    .line 404
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->k:Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->show()V

    .line 405
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p1, :cond_1

    .line 406
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    const/4 p2, 0x1

    invoke-interface {p1, p2}, Lcom/tkay/expressad/splash/d/a;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 2

    .line 373
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 374
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public getSplashBridgeListener()Lcom/tkay/expressad/splash/d/a;
    .locals 1

    .line 83
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    return-object v0
.end method

.method public getmCampaignList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    return-object v0
.end method

.method public gial(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 301
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 302
    sget v1, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->b:I

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 303
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 306
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    const-string v2, "packageNameList"

    .line 313
    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 314
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 315
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

    .line 320
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 321
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void

    :catch_0
    move-exception p2

    .line 317
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    .line 318
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public handlerH5Exception(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 112
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 113
    new-instance v0, Lcom/tkay/expressad/splash/a/a;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/splash/a/a;-><init>(Landroid/content/Context;)V

    .line 114
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "dev_close_state"

    .line 115
    iget v3, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->f:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "sdkSetting"

    .line 116
    invoke-virtual {p2, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device"

    .line 117
    invoke-virtual {v0}, Lcom/tkay/expressad/splash/a/a;->a()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "campaignList"

    .line 118
    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/c;->b(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 119
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 120
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->d:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->c(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    if-nez v0, :cond_0

    .line 122
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->d:Ljava/lang/String;

    invoke-static {v0}, Lcom/tkay/expressad/d/c;->c(Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    .line 125
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->e:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 126
    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->e(Ljava/lang/String;)V

    .line 129
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->a(Ljava/lang/String;)V

    .line 130
    iget v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->h:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->b(I)V

    .line 131
    iget v1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->g:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->a(I)V

    const-string v1, "unitSetting"

    .line 132
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->s()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 133
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 134
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 135
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "appSetting"

    .line 136
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v0, "sdk_info"

    .line 138
    sget-object v1, Lcom/tkay/expressad/atsignalcommon/base/d;->a:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 139
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "init"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 140
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 141
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public install(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 179
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 183
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 184
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 186
    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_4

    .line 193
    :try_start_1
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 194
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 195
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p2

    .line 196
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 197
    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 198
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 199
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 201
    :cond_2
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p2

    const-string v1, "unitId"

    .line 202
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 203
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 204
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 208
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 210
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p2, :cond_4

    .line 211
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/splash/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_4
    return-void
.end method

.method public onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 489
    :try_start_0
    instance-of p2, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz p2, :cond_0

    .line 490
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    invoke-static {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->b(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public open(Ljava/lang/String;)V
    .locals 1

    .line 349
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz v0, :cond_0

    .line 350
    invoke-interface {v0, p1}, Lcom/tkay/expressad/splash/d/a;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public openURL(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 222
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is null"

    .line 223
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 226
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 227
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    if-nez v0, :cond_1

    .line 229
    :try_start_0
    instance-of v1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz v1, :cond_1

    .line 230
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 232
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 236
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    :cond_1
    :goto_0
    if-nez v0, :cond_2

    return-void

    .line 242
    :cond_2
    :try_start_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 243
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "type"

    .line 244
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_3

    .line 247
    invoke-static {p2}, Lcom/tkay/core/common/l/l;->a(Ljava/lang/String;)V

    return-void

    :cond_3
    const/4 v1, 0x2

    if-ne p1, v1, :cond_4

    .line 249
    invoke-static {v0, p2}, Lcom/tkay/core/common/l/l;->a(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_4
    return-void

    :catchall_0
    move-exception p1

    .line 254
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    goto :goto_1

    :catch_1
    move-exception p1

    .line 252
    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    :cond_5
    :goto_1
    return-void
.end method

.method public pauseCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 499
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "code"

    const/4 v1, 0x0

    .line 501
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "Call pause count down success."

    .line 502
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 503
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "countdown"

    .line 504
    iget v2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->i:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 505
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 507
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

    goto :goto_0

    :catch_0
    move-exception p1

    .line 509
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 512
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p1, :cond_0

    const/4 p2, 0x1

    const/4 v0, -0x1

    .line 513
    invoke-interface {p1, p2, v0}, Lcom/tkay/expressad/splash/d/a;->a(II)V

    :cond_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public release()V
    .locals 1

    .line 104
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 105
    iput-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    :cond_0
    return-void
.end method

.method public reportUrls(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 12

    .line 461
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is null"

    .line 462
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 465
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 467
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 p2, 0x0

    move v1, p2

    .line 468
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_4

    .line 469
    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    const-string v3, "type"

    .line 470
    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "url"

    .line 471
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v4, "report"

    .line 472
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v11

    const/4 v2, 0x1

    if-nez v11, :cond_2

    .line 474
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    const/4 v5, 0x0

    const-string v6, ""

    if-eqz v3, :cond_1

    goto :goto_1

    :cond_1
    move v2, p2

    :goto_1
    invoke-static {v4, v5, v6, v8, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V

    goto :goto_3

    .line 476
    :cond_2
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v5

    const/4 v6, 0x0

    const-string v7, ""

    const/4 v9, 0x0

    if-eqz v3, :cond_3

    move v10, v2

    goto :goto_2

    :cond_3
    move v10, p2

    :goto_2
    invoke-static/range {v5 .. v11}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    :goto_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 479
    :cond_4
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-static {p2}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->codeToJsonString(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_5
    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 328
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 329
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "countdown"

    .line 330
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    .line 333
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p2, :cond_0

    .line 334
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/splash/d/a;->b(I)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 338
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public resumeCountDown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 521
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 523
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "countdown"

    .line 524
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 525
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    move-result-object v0

    invoke-static {v1}, Lcom/tkay/expressad/splash/js/SplashJsUtils;->codeToJsonString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move v1, p2

    goto :goto_1

    :catch_0
    move-exception p1

    move v1, p2

    goto :goto_0

    :catch_1
    move-exception p1

    .line 527
    :goto_0
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    .line 531
    :cond_0
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p1, :cond_1

    const/4 p2, 0x2

    .line 532
    invoke-interface {p1, p2, v1}, Lcom/tkay/expressad/splash/d/a;->a(II)V

    :cond_1
    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 422
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 423
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 424
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, 0x0

    .line 425
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 426
    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 427
    iget-object v2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/expressad/foundation/d/c;

    .line 428
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 429
    iget-object v4, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->d:Ljava/lang/String;

    const-string v5, "splash"

    invoke-static {v4, v3, v5}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 431
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catchall_0
    :cond_2
    return-void
.end method

.method public setAllowSkip(I)V
    .locals 0

    .line 60
    iput p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->g:I

    return-void
.end method

.method public setCampaignList(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)V"
        }
    .end annotation

    .line 92
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->c:Ljava/util/List;

    return-void
.end method

.method public setCountdownS(I)V
    .locals 0

    .line 64
    iput p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->h:I

    return-void
.end method

.method public setDevCloseBtnStatus(I)V
    .locals 0

    .line 100
    iput p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->f:I

    return-void
.end method

.method public setSplashBridgeListener(Lcom/tkay/expressad/splash/d/a;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 78
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 151
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 152
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 153
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 154
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p2, :cond_0

    .line 155
    iget-object p2, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/splash/d/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 165
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz p1, :cond_0

    .line 166
    invoke-interface {p1}, Lcom/tkay/expressad/splash/d/a;->a()V

    :cond_0
    return-void
.end method

.method public unload()V
    .locals 0

    .line 368
    invoke-virtual {p0}, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->close()V

    return-void
.end method

.method public updateContext(Landroid/content/Context;)V
    .locals 1

    .line 56
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->b:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public updateCountDown(I)V
    .locals 0

    .line 68
    iput p1, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->i:I

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 1

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 383
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    if-eqz v0, :cond_1

    .line 384
    iget-object v0, p0, Lcom/tkay/expressad/splash/js/SplashJSBridgeImpl;->j:Lcom/tkay/expressad/splash/d/a;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/splash/d/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

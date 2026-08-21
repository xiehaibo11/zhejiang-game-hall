.class public Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;
.super Lcom/tkay/expressad/atsignalcommon/bridge/CommonBannerJSBridgeImp;


# instance fields
.field private b:Ljava/lang/String;

.field private c:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:I

.field private h:I

.field private i:I

.field private j:Lcom/tkay/expressad/advanced/d/a;

.field private k:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 47
    invoke-direct {p0}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonBannerJSBridgeImp;-><init>()V

    const-string v0, "NativeAdvancedJSBridgeImpl"

    .line 35
    iput-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->b:Ljava/lang/String;

    const/4 v0, 0x5

    .line 43
    iput v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->i:I

    .line 48
    iput-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->f:Ljava/lang/String;

    .line 49
    iput-object p3, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->e:Ljava/lang/String;

    .line 50
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method


# virtual methods
.method public click(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const/4 p1, 0x0

    .line 153
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 154
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 156
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_3

    .line 162
    :try_start_1
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 163
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pt"

    .line 164
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 165
    invoke-virtual {p2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 166
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 167
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 168
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 169
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 171
    :cond_1
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p2

    const-string v1, "unitId"

    .line 172
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 173
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 174
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_2
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 178
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 180
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz p2, :cond_3

    .line 181
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/advanced/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_3
    return-void
.end method

.method public close()V
    .locals 1

    .line 319
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz v0, :cond_0

    .line 320
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {v0}, Lcom/tkay/expressad/advanced/d/a;->e()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public expand(Ljava/lang/String;Z)V
    .locals 2

    .line 359
    :try_start_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "url"

    .line 360
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "shouldUseCustomClose"

    .line 361
    invoke-virtual {v0, p1, p2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 363
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->c:Ljava/lang/ref/WeakReference;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 364
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->k:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->k:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->isShowing()Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 367
    :cond_0
    new-instance p1, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/content/Context;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-direct {p1, p2, v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;-><init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/tkay/expressad/advanced/d/a;)V

    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->k:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    .line 368
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->e:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    invoke-virtual {p1, p2, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->setCampaignList(Ljava/lang/String;Ljava/util/List;)V

    .line 369
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->k:Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedExpandDialog;->show()V

    .line 370
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz p1, :cond_1

    .line 371
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    const/4 p2, 0x1

    invoke-interface {p1, p2}, Lcom/tkay/expressad/advanced/d/a;->a(Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

.method public getFileInfo(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 425
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is empty"

    .line 426
    invoke-static {p1, p2}, Lcom/tkay/expressad/atsignalcommon/bridge/CommonJSBridgeImpUtils;->callbackExcep(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 430
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->getFileInfo(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 432
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 2

    .line 334
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 335
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/foundation/d/c;

    return-object v0

    :cond_0
    const/4 v0, 0x0

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

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    return-object v0
.end method

.method public init(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 105
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    .line 106
    new-instance v0, Lcom/tkay/expressad/advanced/a/a;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/advanced/a/a;-><init>(Landroid/content/Context;)V

    .line 107
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "dev_close_state"

    .line 108
    iget v3, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->g:I

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "customURLScheme"

    const/4 v3, 0x1

    .line 109
    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "sdkSetting"

    .line 110
    invoke-virtual {p2, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "device"

    .line 111
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/a/a;->a()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "campaignList"

    .line 112
    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/c;->b(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v1

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 113
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    .line 114
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->e:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/tkay/expressad/d/b;->d(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/d/c;

    move-result-object v0

    if-nez v0, :cond_0

    .line 116
    invoke-static {}, Lcom/tkay/expressad/d/c;->y()Lcom/tkay/expressad/d/c;

    move-result-object v0

    .line 119
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->f:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 120
    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->f:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->e(Ljava/lang/String;)V

    .line 123
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->e:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->a(Ljava/lang/String;)V

    .line 124
    iget v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->i:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->b(I)V

    .line 125
    iget v1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->h:I

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/d/c;->a(I)V

    const-string v1, "unitSetting"

    .line 126
    invoke-virtual {v0}, Lcom/tkay/expressad/d/c;->s()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "appSetting"

    .line 131
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "sdk_info"

    .line 133
    sget-object v1, Lcom/tkay/expressad/atsignalcommon/base/d;->a:Ljava/lang/String;

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 134
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "init"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 135
    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v0, 0x2

    invoke-static {p2, v0}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    .line 136
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

    const/4 p1, 0x0

    .line 254
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 255
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    .line 257
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_3

    .line 263
    :try_start_1
    invoke-static {p1}, Lcom/tkay/expressad/foundation/d/c;->a(Lcom/tkay/expressad/foundation/d/c;)Lorg/json/JSONObject;

    move-result-object v0

    .line 264
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pt"

    .line 265
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 266
    invoke-virtual {p2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 267
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 268
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 269
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 270
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 272
    :cond_1
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/c;->b(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/c;

    move-result-object p2

    const-string v1, "unitId"

    .line 273
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 274
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 275
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_2
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 279
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 281
    :goto_1
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz p2, :cond_3

    .line 282
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/advanced/d/a;->a(Lcom/tkay/expressad/foundation/d/c;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_3
    return-void
.end method

.method public onJSBridgeConnect(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 241
    :try_start_0
    instance-of p2, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz p2, :cond_0

    .line 242
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

    .line 310
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz v0, :cond_0

    .line 311
    invoke-interface {v0, p1}, Lcom/tkay/expressad/advanced/d/a;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public readyStatus(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 192
    :try_start_0
    instance-of v0, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    if-eqz v0, :cond_0

    .line 193
    check-cast p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;

    .line 194
    iget-object p1, p1, Lcom/tkay/expressad/atsignalcommon/windvane/a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_0

    .line 197
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 198
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object p2

    const-string v1, "isReady"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->readyState(Landroid/webkit/WebView;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-void

    .line 200
    :catch_0
    :try_start_2
    invoke-virtual {p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/tkay/expressad/atsignalcommon/windvane/e;

    move-result-object p2

    const/4 v0, 0x2

    invoke-interface {p2, p1, v0}, Lcom/tkay/expressad/atsignalcommon/windvane/e;->readyState(Landroid/webkit/WebView;I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 205
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public release()V
    .locals 1

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 97
    iput-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    :cond_0
    return-void
.end method

.method public resetCountdown(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 293
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 294
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "countdown"

    .line 295
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    .line 298
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz p1, :cond_0

    .line 299
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {p1}, Lcom/tkay/expressad/advanced/d/a;->c()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 303
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    return-void
.end method

.method public sendImpressions(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 387
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 388
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 389
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, 0x0

    .line 390
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 391
    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 392
    iget-object v2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

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

    .line 393
    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 394
    iget-object v4, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->e:Ljava/lang/String;

    const-string v5, "h5_native"

    invoke-static {v4, v3, v5}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 396
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

    .line 59
    iput p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->h:I

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

    .line 84
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->d:Ljava/util/List;

    return-void
.end method

.method public setCountdownS(I)V
    .locals 0

    .line 64
    iput p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->i:I

    return-void
.end method

.method public setDevCloseBtnStatus(I)V
    .locals 0

    .line 92
    iput p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->g:I

    return-void
.end method

.method public setNativeAdvancedBridgeListener(Lcom/tkay/expressad/advanced/d/a;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 74
    iput-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    :cond_0
    return-void
.end method

.method public toggleCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 212
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 213
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 214
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 215
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz p2, :cond_0

    .line 216
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {p2, p1}, Lcom/tkay/expressad/advanced/d/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public triggerCloseBtn(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 226
    iget-object p2, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz p2, :cond_0

    .line 227
    invoke-static {p1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->callbackSuccess(Ljava/lang/Object;)V

    .line 228
    iget-object p1, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {p1}, Lcom/tkay/expressad/advanced/d/a;->a()V

    :cond_0
    return-void
.end method

.method public unload()V
    .locals 0

    .line 329
    invoke-virtual {p0}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->close()V

    return-void
.end method

.method public updateContext(Landroid/content/Context;)V
    .locals 1

    .line 55
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 2

    .line 345
    :try_start_0
    iget v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->h:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_1

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 347
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    if-eqz v0, :cond_1

    .line 348
    iget-object v0, p0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->j:Lcom/tkay/expressad/advanced/d/a;

    invoke-interface {v0, p1}, Lcom/tkay/expressad/advanced/d/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    return-void
.end method

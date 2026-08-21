.class public final Lcom/mbridge/msdk/splash/js/b;
.super Ljava/lang/Object;
.source "SplashJSBridgeImpl.java"

# interfaces
.implements Lcom/mbridge/msdk/splash/js/a;


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
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
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

.field private j:Lcom/mbridge/msdk/splash/d/a;

.field private k:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "SplashJSBridgeImpl"

    .line 39
    iput-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const/4 v0, 0x5

    .line 47
    iput v0, p0, Lcom/mbridge/msdk/splash/js/b;->h:I

    .line 53
    iput-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->e:Ljava/lang/String;

    .line 54
    iput-object p3, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    .line 55
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->b:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/js/b;)Ljava/lang/String;
    .locals 0

    .line 38
    iget-object p0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/splash/d/a;
    .locals 1

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 63
    iput p1, p0, Lcom/mbridge/msdk/splash/js/b;->g:I

    return-void
.end method

.method public final a(Landroid/content/Context;)V
    .locals 1

    .line 59
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->b:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/splash/d/a;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 81
    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string p2, "init"

    .line 115
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 116
    new-instance v1, Lcom/mbridge/msdk/splash/a/a;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/splash/a/a;-><init>(Landroid/content/Context;)V

    .line 117
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "dev_close_state"

    .line 118
    iget v4, p0, Lcom/mbridge/msdk/splash/js/b;->f:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "sdkSetting"

    .line 119
    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "device"

    .line 120
    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/a/a;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "campaignList"

    .line 121
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCamplistToJson(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 122
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    .line 123
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/c/b;->e(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    if-nez v1, :cond_0

    .line 125
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/c/d;->d(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    .line 128
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->e:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 129
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->g(Ljava/lang/String;)V

    .line 132
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->a(Ljava/lang/String;)V

    .line 133
    iget v2, p0, Lcom/mbridge/msdk/splash/js/b;->h:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->b(I)V

    .line 134
    iget v2, p0, Lcom/mbridge/msdk/splash/js/b;->g:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->a(I)V

    const-string v2, "unitSetting"

    .line 135
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->t()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 136
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    .line 137
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 138
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "appSetting"

    .line 139
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v1, "sdk_info"

    .line 141
    sget-object v2, Lcom/mbridge/msdk/mbjscommon/base/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 142
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 143
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 144
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 147
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-static {v0, p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public final a(Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    .line 95
    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    return-void
.end method

.method public final b()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 99
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    return-object v0
.end method

.method public final b(I)V
    .locals 0

    .line 67
    iput p1, p0, Lcom/mbridge/msdk/splash/js/b;->h:I

    return-void
.end method

.method public final b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 154
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 155
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 156
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 157
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz p2, :cond_0

    .line 158
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/splash/d/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 162
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v0, "toggleCloseBtn"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final c(I)V
    .locals 0

    .line 71
    iput p1, p0, Lcom/mbridge/msdk/splash/js/b;->i:I

    return-void
.end method

.method public final c(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 168
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz v0, :cond_0

    .line 169
    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/splash/d/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final close()V
    .locals 3

    .line 357
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v1, "close"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 359
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz v0, :cond_0

    .line 360
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    invoke-interface {v0}, Lcom/mbridge/msdk/splash/d/a;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 363
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final d(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    .line 180
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v0, "install"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 182
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    if-nez p1, :cond_0

    return-void

    :cond_0
    const/4 p1, 0x0

    .line 186
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 187
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 189
    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_4

    .line 196
    :try_start_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v0

    .line 197
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 198
    invoke-virtual {v1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p2

    .line 199
    :goto_0
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    .line 200
    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 201
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 202
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 204
    :cond_2
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    const-string v1, "unitId"

    .line 205
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 206
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 207
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_3
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 211
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 213
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz p2, :cond_4

    .line 214
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/splash/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 218
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v0, "click"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_4
    :goto_2
    return-void
.end method

.method public final e(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 224
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "openURL:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 225
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is null"

    .line 226
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 229
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    .line 230
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    if-nez v0, :cond_1

    .line 232
    :try_start_0
    instance-of v1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v1, :cond_1

    .line 233
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-eqz p1, :cond_1

    .line 235
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getContext()Landroid/content/Context;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, p1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 239
    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    if-nez v0, :cond_2

    return-void

    .line 245
    :cond_2
    :try_start_1
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "url"

    .line 246
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    const-string v1, "type"

    .line 247
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const/4 v1, 0x1

    if-ne p1, v1, :cond_3

    .line 249
    invoke-static {v0, p2}, Lcom/mbridge/msdk/click/c;->a(Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    const/4 v1, 0x2

    if-ne p1, v1, :cond_4

    .line 251
    invoke-static {v0, p2}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 256
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_1
    move-exception p1

    .line 254
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_1
    return-void
.end method

.method public final expand(Ljava/lang/String;Z)V
    .locals 3

    .line 395
    :try_start_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "url"

    .line 396
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "shouldUseCustomClose"

    .line 397
    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 399
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->b:Ljava/lang/ref/WeakReference;

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 400
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->k:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->k:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->isShowing()Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    .line 403
    :cond_0
    new-instance p2, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/b;->b:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    invoke-direct {p2, v1, v0, v2}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;-><init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/mbridge/msdk/splash/d/a;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->k:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    .line 404
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->setCampaignList(Ljava/lang/String;Ljava/util/List;)V

    .line 405
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->k:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->show()V

    .line 406
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz p2, :cond_1

    .line 407
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    const/4 v0, 0x1

    invoke-interface {p2, v0}, Lcom/mbridge/msdk/splash/d/a;->a(Z)V

    .line 410
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/js/b;->getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/splash/e/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 415
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v0, "expand"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final f(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    const-string v0, "cai"

    const-string v1, "exception: "

    .line 263
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "cai:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 264
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string p2, "params is null"

    .line 265
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 268
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_3

    .line 271
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "packageName"

    .line 272
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 273
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    const-string v2, "packageName is empty"

    .line 274
    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 276
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

    .line 279
    :goto_0
    :try_start_1
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "code"

    .line 280
    sget v5, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 281
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "result"

    .line 282
    invoke-virtual {v4, v5, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "data"

    .line 283
    invoke-virtual {v3, p2, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 284
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-static {v3, v2}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2, p1, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catch_0
    move-exception p2

    .line 286
    :try_start_2
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {p1, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 287
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 293
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 294
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    :catch_1
    move-exception p2

    .line 290
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lorg/json/JSONException;->getLocalizedMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v1}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 291
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-static {p1, v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public final g(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 301
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "gial:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 303
    :try_start_0
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    const-string v0, "code"

    .line 304
    sget v1, Lcom/mbridge/msdk/mbjscommon/bridge/b;->b:I

    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 305
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 306
    sget-object v1, Lcom/mbridge/msdk/foundation/controller/a;->c:Ljava/util/List;

    .line 307
    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    if-eqz v1, :cond_0

    .line 308
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_0

    .line 309
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    const/4 v4, 0x0

    :goto_0
    if-ge v4, v3, :cond_0

    .line 311
    invoke-interface {v1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v2, v5}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_0
    const-string v1, "packageNameList"

    .line 314
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 315
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 316
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 321
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 322
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :catch_0
    move-exception p2

    .line 318
    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    .line 319
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p2}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method public final getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 2

    .line 374
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 375
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public final h(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 329
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 330
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "countdown"

    .line 331
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    .line 334
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz p2, :cond_0

    .line 335
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/splash/d/a;->b(I)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 339
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final i(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 421
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendImpressions:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 423
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 424
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 425
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, 0x0

    .line 426
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 427
    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 428
    iget-object v2, p0, Lcom/mbridge/msdk/splash/js/b;->c:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_0
    :goto_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 429
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 430
    iget-object v4, p0, Lcom/mbridge/msdk/splash/js/b;->d:Ljava/lang/String;

    const-string v5, "splash"

    invoke-static {v4, v3, v5}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 432
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 437
    :cond_2
    new-instance p1, Ljava/lang/Thread;

    new-instance v0, Lcom/mbridge/msdk/splash/js/b$1;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/splash/js/b$1;-><init>(Lcom/mbridge/msdk/splash/js/b;Ljava/util/ArrayList;)V

    invoke-direct {p1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 451
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 454
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v0, "sendImpressions"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public final j(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 17

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    move-object/from16 v2, p2

    .line 460
    iget-object v3, v1, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "reportUrls:"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 461
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    const-string v2, "params is null"

    .line 462
    invoke-static {v0, v2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 465
    :cond_0
    invoke-static/range {p2 .. p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 467
    :try_start_0
    new-instance v3, Lorg/json/JSONArray;

    invoke-direct {v3, v2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    move v4, v2

    .line 468
    :goto_0
    invoke-virtual {v3}, Lorg/json/JSONArray;->length()I

    move-result v5

    if-ge v4, v5, :cond_4

    .line 469
    invoke-virtual {v3, v4}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v5

    const-string v6, "type"

    .line 470
    invoke-virtual {v5, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v6

    const-string v7, "url"

    .line 471
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    const-string v8, "&tun="

    .line 472
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v10, ""

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {v7, v8, v9}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    const-string v7, "report"

    .line 473
    invoke-virtual {v5, v7}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v16

    const/4 v5, 0x1

    if-nez v16, :cond_2

    .line 475
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v10

    const/4 v11, 0x0

    const-string v12, ""

    const/4 v14, 0x0

    if-eqz v6, :cond_1

    move v15, v5

    goto :goto_1

    :cond_1
    move v15, v2

    :goto_1
    invoke-static/range {v10 .. v15}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V

    goto :goto_3

    .line 477
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v10

    const/4 v11, 0x0

    const-string v12, ""

    const/4 v14, 0x0

    if-eqz v6, :cond_3

    move v15, v5

    goto :goto_2

    :cond_3
    move v15, v2

    :goto_2
    invoke-static/range {v10 .. v16}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    :goto_3
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 480
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v3

    invoke-static {v2}, Lcom/mbridge/msdk/splash/js/c;->a(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v3, v0, v2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 482
    iget-object v2, v1, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v3, "reportUrls"

    invoke-static {v2, v3, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_5
    :goto_4
    return-void
.end method

.method public final k(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 490
    :try_start_0
    instance-of p2, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz p2, :cond_0

    .line 491
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 494
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v0, "onJSBridgeConnect"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final l(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 3

    .line 500
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v0, "code"

    const/4 v1, 0x0

    .line 502
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "message"

    const-string v1, "Call pause count down success."

    .line 503
    invoke-virtual {p2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 504
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "countdown"

    .line 505
    iget v2, p0, Lcom/mbridge/msdk/splash/js/b;->i:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "data"

    .line 506
    invoke-virtual {p2, v1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 508
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->getBytes()[B

    move-result-object p2

    const/4 v1, 0x2

    invoke-static {p2, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 510
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 513
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz p1, :cond_0

    const/4 p2, 0x1

    const/4 v0, -0x1

    .line 514
    invoke-interface {p1, p2, v0}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    :cond_0
    return-void
.end method

.method public final m(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 522
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 524
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "countdown"

    .line 525
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 526
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v0

    invoke-static {v1}, Lcom/mbridge/msdk/splash/js/c;->a(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
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

    .line 528
    :goto_0
    iget-object p2, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 532
    :cond_0
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz p1, :cond_1

    const/4 p2, 0x2

    .line 533
    invoke-interface {p1, p2, v1}, Lcom/mbridge/msdk/splash/d/a;->a(II)V

    :cond_1
    return-void
.end method

.method public final open(Ljava/lang/String;)V
    .locals 2

    .line 350
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 351
    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/splash/d/a;->a(ZLjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final unload()V
    .locals 0

    .line 369
    invoke-virtual {p0}, Lcom/mbridge/msdk/splash/js/b;->close()V

    return-void
.end method

.method public final useCustomClose(Z)V
    .locals 2

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 384
    :goto_0
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    if-eqz v0, :cond_1

    .line 385
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->j:Lcom/mbridge/msdk/splash/d/a;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/splash/d/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 388
    iget-object v0, p0, Lcom/mbridge/msdk/splash/js/b;->a:Ljava/lang/String;

    const-string v1, "useCustomClose"

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_1
    return-void
.end method

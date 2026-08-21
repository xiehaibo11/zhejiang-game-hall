.class public final Lcom/mbridge/msdk/advanced/js/a;
.super Lcom/mbridge/msdk/mbjscommon/bridge/a;
.source "NativeAdvancedJSBridgeImpl.java"


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
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:I

.field private h:I

.field private i:I

.field private j:Lcom/mbridge/msdk/advanced/c/a;

.field private k:Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 49
    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/bridge/a;-><init>()V

    const-string v0, "NativeAdvancedJSBridgeImpl"

    .line 37
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const/4 v0, 0x5

    .line 45
    iput v0, p0, Lcom/mbridge/msdk/advanced/js/a;->i:I

    .line 50
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->f:Ljava/lang/String;

    .line 51
    iput-object p3, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    .line 52
    new-instance p2, Ljava/lang/ref/WeakReference;

    invoke-direct {p2, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->c:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/js/a;)Ljava/lang/String;
    .locals 0

    .line 36
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final a()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation

    .line 90
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 61
    iput p1, p0, Lcom/mbridge/msdk/advanced/js/a;->h:I

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/advanced/c/a;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 76
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    :cond_0
    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    const-string p2, "init"

    .line 107
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 108
    new-instance v1, Lcom/mbridge/msdk/advanced/common/a;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/advanced/common/a;-><init>(Landroid/content/Context;)V

    .line 109
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "dev_close_state"

    .line 110
    iget v4, p0, Lcom/mbridge/msdk/advanced/js/a;->g:I

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "customURLScheme"

    const/4 v4, 0x1

    .line 111
    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "sdkSetting"

    .line 112
    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "device"

    .line 113
    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/common/a;->a()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "campaignList"

    .line 114
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCamplistToJson(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 115
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    .line 116
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/c/b;->f(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    if-nez v1, :cond_0

    .line 118
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    invoke-static {v1}, Lcom/mbridge/msdk/c/d;->c(Ljava/lang/String;)Lcom/mbridge/msdk/c/d;

    move-result-object v1

    .line 121
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->f:Ljava/lang/String;

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 122
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->f:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->g(Ljava/lang/String;)V

    .line 125
    :cond_1
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->a(Ljava/lang/String;)V

    .line 126
    iget v2, p0, Lcom/mbridge/msdk/advanced/js/a;->i:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->b(I)V

    .line 127
    iget v2, p0, Lcom/mbridge/msdk/advanced/js/a;->h:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/d;->a(I)V

    const-string v2, "unitSetting"

    .line 128
    invoke-virtual {v1}, Lcom/mbridge/msdk/c/d;->t()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 129
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v1

    .line 130
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/c/b;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 131
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, "appSetting"

    .line 132
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const-string v1, "sdk_info"

    .line 134
    sget-object v2, Lcom/mbridge/msdk/mbjscommon/base/d;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 135
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v0, v1}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v0

    .line 137
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Ljava/lang/Object;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 140
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

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

    .line 86
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    return-void
.end method

.method public final b(I)V
    .locals 0

    .line 66
    iput p1, p0, Lcom/mbridge/msdk/advanced/js/a;->i:I

    return-void
.end method

.method public final b(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 4

    const/4 p1, 0x0

    .line 154
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 155
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 157
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_3

    .line 163
    :try_start_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v0

    .line 164
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pt"

    .line 165
    invoke-virtual {v1, p2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 166
    invoke-virtual {p2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v1

    .line 167
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 168
    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 169
    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 170
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 172
    :cond_1
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    const-string v1, "unitId"

    .line 173
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 174
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 175
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_2
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 179
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 181
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz p2, :cond_3

    .line 182
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/advanced/c/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 186
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v0, "click"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public final c(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 2

    .line 193
    :try_start_0
    instance-of v0, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz v0, :cond_0

    .line 194
    check-cast p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    .line 195
    iget-object p1, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;->a:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p1, :cond_0

    .line 198
    :try_start_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 199
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object p2

    const-string v1, "isReady"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v0

    invoke-interface {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 201
    :catch_0
    :try_start_2
    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getWebViewListener()Lcom/mbridge/msdk/mbjscommon/windvane/d;

    move-result-object p2

    const/4 v0, 0x2

    invoke-interface {p2, p1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/d;->a(Landroid/webkit/WebView;I)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 206
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final close()V
    .locals 3

    .line 318
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v1, "close"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 320
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz v0, :cond_0

    .line 321
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {v0}, Lcom/mbridge/msdk/advanced/c/a;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 324
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final d(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 213
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 214
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "state"

    .line 215
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    .line 216
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz p2, :cond_0

    .line 217
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/advanced/c/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 221
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v0, "toggleCloseBtn"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final e(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz v0, :cond_0

    .line 228
    invoke-static {p1}, Lcom/mbridge/msdk/advanced/js/b;->a(Ljava/lang/Object;)V

    .line 229
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/advanced/c/a;->a(Ljava/lang/Object;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final expand(Ljava/lang/String;Z)V
    .locals 3

    .line 360
    :try_start_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "url"

    .line 361
    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "shouldUseCustomClose"

    .line 362
    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 364
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->c:Ljava/lang/ref/WeakReference;

    if-eqz p2, :cond_2

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {p2}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 365
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->k:Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->k:Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;

    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->isShowing()Z

    move-result p2

    if-eqz p2, :cond_0

    return-void

    .line 368
    :cond_0
    new-instance p2, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/a;->c:Ljava/lang/ref/WeakReference;

    invoke-virtual {v1}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-direct {p2, v1, v0, v2}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;-><init>(Landroid/content/Context;Landroid/os/Bundle;Lcom/mbridge/msdk/advanced/c/a;)V

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->k:Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;

    .line 369
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    invoke-virtual {p2, v0, v1}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->setCampaignList(Ljava/lang/String;Ljava/util/List;)V

    .line 370
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->k:Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;

    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/js/NativeAdvancedExpandDialog;->show()V

    .line 371
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz p2, :cond_1

    .line 372
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    const/4 v0, 0x1

    invoke-interface {p2, v0}, Lcom/mbridge/msdk/advanced/c/a;->a(Z)V

    .line 375
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/a;->getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/advanced/d/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 380
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v0, "expand"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public final f(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 242
    :try_start_0
    instance-of p2, p1, Lcom/mbridge/msdk/mbjscommon/windvane/a;

    if-eqz p2, :cond_0

    .line 243
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

    .line 246
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v0, "onJSBridgeConnect"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public final g(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 5

    .line 252
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v0, "install"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 255
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 256
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    const/4 v1, 0x0

    invoke-interface {p1, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 258
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_3

    .line 264
    :try_start_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v1

    .line 265
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "pt"

    .line 266
    invoke-virtual {v2, p2}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p2

    .line 267
    invoke-virtual {p2}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v2

    .line 268
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 269
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 270
    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 271
    invoke-virtual {v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 273
    :cond_1
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p2

    const-string v2, "unitId"

    .line 274
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 275
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 276
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_2
    move-object p1, p2

    goto :goto_1

    :catch_0
    move-exception p2

    .line 280
    :try_start_2
    invoke-virtual {p2}, Lorg/json/JSONException;->printStackTrace()V

    .line 282
    :goto_1
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz p2, :cond_3

    .line 283
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/advanced/c/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 287
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public final getMraidCampaign()Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 2

    .line 335
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 336
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

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

    .line 294
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 295
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "countdown"

    .line 296
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result p1

    .line 299
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz p2, :cond_0

    .line 300
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/advanced/c/a;->b(I)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 304
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public final i(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 6

    .line 386
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendImpressions:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 388
    :try_start_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 389
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, p2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 390
    new-instance p2, Ljava/util/ArrayList;

    invoke-direct {p2}, Ljava/util/ArrayList;-><init>()V

    const/4 v0, 0x0

    .line 391
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 392
    invoke-virtual {p1, v0}, Lorg/json/JSONArray;->getString(I)Ljava/lang/String;

    move-result-object v1

    .line 393
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/js/a;->d:Ljava/util/List;

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

    .line 394
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v4, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 395
    iget-object v4, p0, Lcom/mbridge/msdk/advanced/js/a;->e:Ljava/lang/String;

    const-string v5, "h5_native"

    invoke-static {v4, v3, v5}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 397
    invoke-virtual {p2, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 402
    :cond_2
    new-instance p1, Ljava/lang/Thread;

    new-instance v0, Lcom/mbridge/msdk/advanced/js/a$1;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/advanced/js/a$1;-><init>(Lcom/mbridge/msdk/advanced/js/a;Ljava/util/ArrayList;)V

    invoke-direct {p1, v0}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 416
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 419
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v0, "sendImpressions"

    invoke-static {p2, v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public final j(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 1

    .line 425
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p2, "params is empty"

    .line 426
    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/bridge/b;->a(Ljava/lang/Object;Ljava/lang/String;)V

    return-void

    .line 430
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/mbridge/msdk/advanced/js/b;->a(Ljava/lang/Object;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 432
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public final open(Ljava/lang/String;)V
    .locals 2

    .line 311
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 312
    invoke-interface {v0, v1, p1}, Lcom/mbridge/msdk/advanced/c/a;->a(ZLjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final unload()V
    .locals 0

    .line 330
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/js/a;->close()V

    return-void
.end method

.method public final useCustomClose(Z)V
    .locals 2

    .line 346
    :try_start_0
    iget v0, p0, Lcom/mbridge/msdk/advanced/js/a;->h:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_1

    if-eqz p1, :cond_0

    const/4 p1, 0x2

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    .line 348
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz v0, :cond_1

    .line 349
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->j:Lcom/mbridge/msdk/advanced/c/a;

    invoke-interface {v0, p1}, Lcom/mbridge/msdk/advanced/c/a;->a(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 353
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/js/a;->b:Ljava/lang/String;

    const-string v1, "useCustomClose"

    invoke-static {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_1
    :goto_1
    return-void
.end method

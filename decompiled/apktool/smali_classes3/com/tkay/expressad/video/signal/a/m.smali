.class public final Lcom/tkay/expressad/video/signal/a/m;
.super Lcom/tkay/expressad/video/signal/a/f;


# instance fields
.field private b:Landroid/app/Activity;

.field private c:Lcom/tkay/expressad/video/module/TkayContainerView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;Lcom/tkay/expressad/video/module/TkayContainerView;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Lcom/tkay/expressad/video/signal/a/f;-><init>()V

    .line 32
    iput-object p1, p0, Lcom/tkay/expressad/video/signal/a/m;->b:Landroid/app/Activity;

    .line 33
    iput-object p2, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    return-void
.end method

.method private static a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)Ljava/lang/String;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Lorg/json/JSONObject;",
            ")",
            "Ljava/lang/String;"
        }
    .end annotation

    const-string v0, ""

    const/4 v1, 0x0

    .line 155
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_7

    .line 156
    new-instance v2, Lcom/tkay/expressad/foundation/h/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v2, v3}, Lcom/tkay/expressad/foundation/h/b;-><init>(Landroid/content/Context;)V

    .line 157
    invoke-static {p0}, Lcom/tkay/expressad/foundation/d/c;->b(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object p0

    .line 158
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    const-string v4, "campaignList"

    .line 159
    invoke-virtual {v3, v4, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "device"

    .line 160
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/h/b;->a()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v3, p0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "unit_id"

    .line 161
    invoke-virtual {v3, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "sdk_info"

    .line 162
    invoke-virtual {v3, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "unitSetting"

    .line 163
    invoke-virtual {v3, p0, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 164
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    move-result-object p0

    if-eqz p0, :cond_6

    .line 165
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/expressad/d/b;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 167
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_6

    .line 168
    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    .line 1197
    :try_start_1
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p0

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object p0

    const-string p3, "Tkay_ConfirmTitle"

    .line 1198
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p3, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-static {p0, p3, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p3

    const-string v2, "Tkay_ConfirmContent"

    .line 1199
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {p0, v2, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "Tkay_CancelText"

    .line 1200
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {p0, v4, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "Tkay_ConfirmText"

    .line 1201
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {p0, v5, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p0

    .line 1202
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "confirm_title"

    .line 1203
    invoke-virtual {p2, v0, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1205
    :cond_0
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_1

    const-string p3, "confirm_description"

    .line 1206
    invoke-virtual {p2, p3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1208
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_2

    const-string p3, "confirm_t"

    .line 1209
    invoke-virtual {p2, p3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1211
    :cond_2
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_3

    const-string p3, "confirm_c_play"

    .line 1212
    invoke-virtual {p2, p3, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1214
    :cond_3
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_4

    const-string p3, "confirm_c_rv"

    .line 1215
    invoke-virtual {p2, p3, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 1218
    :try_start_2
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 171
    :cond_4
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {p1}, Lcom/tkay/expressad/d/b;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 172
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_5

    .line 173
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "ivreward"

    .line 174
    invoke-virtual {p2, p0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5
    const-string p0, "appSetting"

    .line 177
    invoke-virtual {v3, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 180
    :cond_6
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_1

    :catch_1
    move-exception p0

    .line 183
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_7
    :goto_1
    return-object v1
.end method

.method private static a(Lorg/json/JSONObject;Ljava/lang/String;)V
    .locals 6

    const-string v0, ""

    .line 197
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    const-string v2, "Tkay_ConfirmTitle"

    .line 198
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "Tkay_ConfirmContent"

    .line 199
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "Tkay_CancelText"

    .line 200
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v4

    const-string v5, "Tkay_ConfirmText"

    .line 201
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v5, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1, v0}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object p1

    .line 202
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "confirm_title"

    .line 203
    invoke-virtual {p0, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 205
    :cond_0
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "confirm_description"

    .line 206
    invoke-virtual {p0, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 208
    :cond_1
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "confirm_t"

    .line 209
    invoke-virtual {p0, v0, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 211
    :cond_2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    const-string v0, "confirm_c_play"

    .line 212
    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 214
    :cond_3
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    const-string v0, "confirm_c_rv"

    .line 215
    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    :catch_0
    move-exception p0

    .line 218
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private static c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 2

    .line 189
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 192
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 6

    .line 38
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-nez v0, :cond_0

    .line 39
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/f;->a()Ljava/lang/String;

    goto :goto_1

    .line 42
    :cond_0
    :try_start_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 43
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->getCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 44
    iget-object v1, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v1}, Lcom/tkay/expressad/video/module/TkayContainerView;->getUnitID()Ljava/lang/String;

    move-result-object v1

    .line 45
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/tkay/expressad/out/n;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",3.0.1"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 1189
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v3

    if-nez v3, :cond_1

    const/4 v3, 0x0

    goto :goto_0

    .line 1192
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v3

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v3

    .line 47
    :goto_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    if-eqz v3, :cond_2

    .line 49
    invoke-virtual {v3}, Lcom/tkay/expressad/videocommon/e/d;->R()Lorg/json/JSONObject;

    move-result-object v4

    .line 51
    :cond_2
    new-instance v3, Ljava/lang/StringBuilder;

    const-string v5, "getEndScreenInfo success campaign = "

    invoke-direct {v3, v5}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v5}, Lcom/tkay/expressad/video/module/TkayContainerView;->getCampaign()Lcom/tkay/expressad/foundation/d/c;

    move-result-object v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    .line 52
    invoke-static {v0, v1, v2, v4}, Lcom/tkay/expressad/video/signal/a/m;->a(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 54
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 57
    :goto_1
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/f;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 78
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->a(Ljava/lang/String;)V

    .line 80
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->b:Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "click"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 81
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 82
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->triggerCloseBtn(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 86
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    .line 114
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->b(Ljava/lang/String;)V

    .line 116
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->b:Landroid/app/Activity;

    if-eqz v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "landscape"

    .line 117
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 118
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/m;->b:Landroid/app/Activity;

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V

    return-void

    :cond_0
    const-string v0, "portrait"

    .line 119
    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 120
    iget-object p1, p0, Lcom/tkay/expressad/video/signal/a/m;->b:Landroid/app/Activity;

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Landroid/app/Activity;->setRequestedOrientation(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception p1

    .line 124
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final handlerPlayableException(Ljava/lang/String;)V
    .locals 1

    .line 100
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->handlerPlayableException(Ljava/lang/String;)V

    .line 102
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->b:Landroid/app/Activity;

    if-eqz v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 103
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 104
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->handlerPlayableException(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 108
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final install(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 62
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->install(Lcom/tkay/expressad/foundation/d/c;)V

    .line 63
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 64
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->install(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final notifyCloseBtn(I)V
    .locals 1

    .line 92
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->notifyCloseBtn(I)V

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 94
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->notifyCloseBtn(I)V

    :cond_0
    return-void
.end method

.method public final orientation(Landroid/content/res/Configuration;)V
    .locals 1

    .line 142
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->orientation(Landroid/content/res/Configuration;)V

    .line 144
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 145
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->orientation(Landroid/content/res/Configuration;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    .line 148
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final toggleCloseBtn(I)V
    .locals 1

    .line 70
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/signal/a/f;->toggleCloseBtn(I)V

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 72
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayContainerView;->toggleCloseBtn(I)V

    :cond_0
    return-void
.end method

.method public final webviewshow()V
    .locals 1

    .line 130
    invoke-super {p0}, Lcom/tkay/expressad/video/signal/a/f;->webviewshow()V

    .line 132
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    if-eqz v0, :cond_0

    .line 133
    iget-object v0, p0, Lcom/tkay/expressad/video/signal/a/m;->c:Lcom/tkay/expressad/video/module/TkayContainerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayContainerView;->webviewshow()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 136
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

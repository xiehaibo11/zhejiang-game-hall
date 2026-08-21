.class public Lcom/tkay/core/common/q;
.super Ljava/lang/Object;


# static fields
.field private static volatile c:Lcom/tkay/core/common/q;


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Ljava/lang/String;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "1"

    .line 31
    iput-object v0, p0, Lcom/tkay/core/common/q;->a:Ljava/lang/String;

    const-string v0, "2"

    .line 32
    iput-object v0, p0, Lcom/tkay/core/common/q;->b:Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/tkay/core/common/q;
    .locals 2

    .line 42
    sget-object v0, Lcom/tkay/core/common/q;->c:Lcom/tkay/core/common/q;

    if-nez v0, :cond_1

    .line 43
    const-class v0, Lcom/tkay/core/common/q;

    monitor-enter v0

    .line 44
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/q;->c:Lcom/tkay/core/common/q;

    if-nez v1, :cond_0

    .line 45
    new-instance v1, Lcom/tkay/core/common/q;

    invoke-direct {v1}, Lcom/tkay/core/common/q;-><init>()V

    sput-object v1, Lcom/tkay/core/common/q;->c:Lcom/tkay/core/common/q;

    .line 46
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 48
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/q;->c:Lcom/tkay/core/common/q;

    return-object v0
.end method

.method public static a(Lcom/tkay/core/common/f/d;)V
    .locals 9

    if-nez p0, :cond_0

    return-void

    .line 58
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/c/e;->a(Landroid/content/Context;)Lcom/tkay/core/c/e;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/e;->a(Ljava/lang/String;)Lcom/tkay/core/c/d;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 61
    invoke-virtual {v0}, Lcom/tkay/core/c/d;->C()Ljava/lang/String;

    move-result-object v0

    .line 63
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-void

    .line 67
    :cond_1
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v0, "1"

    .line 70
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-wide v2, 0x408f400000000000L    # 1000.0

    if-eqz v0, :cond_2

    const-string v4, "token"

    .line 72
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 73
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 74
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->p()Ljava/lang/String;

    move-result-object v4

    .line 75
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->w()D

    move-result-wide v5

    div-double/2addr v5, v2

    .line 76
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 1122
    :try_start_1
    new-instance v8, Lcom/adjust/sdk/AdjustEvent;

    invoke-direct {v8, v0}, Lcom/adjust/sdk/AdjustEvent;-><init>(Ljava/lang/String;)V

    .line 1123
    invoke-virtual {v8, v5, v6, v4}, Lcom/adjust/sdk/AdjustEvent;->setRevenue(DLjava/lang/String;)V

    .line 1124
    invoke-virtual {v8, v7}, Lcom/adjust/sdk/AdjustEvent;->setOrderId(Ljava/lang/String;)V

    .line 1125
    invoke-static {v8}, Lcom/adjust/sdk/Adjust;->trackEvent(Lcom/adjust/sdk/AdjustEvent;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_2
    :try_start_2
    const-string v0, "2"

    .line 81
    invoke-virtual {v1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_4

    const-string v1, "rtye"

    .line 83
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    .line 85
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    const-string v4, "af_order_id"

    .line 86
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->l()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "af_content_id"

    .line 87
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "af_content_type"

    .line 88
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->Y()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "af_revenue"

    const/4 v5, 0x2

    if-ne v0, v5, :cond_3

    .line 89
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->w()D

    move-result-wide v2

    goto :goto_0

    :cond_3
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->w()D

    move-result-wide v5

    div-double v2, v5, v2

    :goto_0
    invoke-static {v2, v3}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object p0

    invoke-interface {v1, v4, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "af_currency"

    const-string v0, "USD"

    .line 90
    invoke-interface {v1, p0, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    invoke-static {}, Lcom/appsflyer/AppsFlyerLib;->getInstance()Lcom/appsflyer/AppsFlyerLib;

    move-result-object p0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    const-string v2, "af_ad_view"

    invoke-virtual {p0, v0, v2, v1}, Lcom/appsflyer/AppsFlyerLib;->trackEvent(Landroid/content/Context;Ljava/lang/String;Ljava/util/Map;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_4
    return-void
.end method

.method private static a(Ljava/lang/String;DLjava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 122
    :try_start_0
    new-instance v0, Lcom/adjust/sdk/AdjustEvent;

    invoke-direct {v0, p0}, Lcom/adjust/sdk/AdjustEvent;-><init>(Ljava/lang/String;)V

    .line 123
    invoke-virtual {v0, p1, p2, p3}, Lcom/adjust/sdk/AdjustEvent;->setRevenue(DLjava/lang/String;)V

    .line 124
    invoke-virtual {v0, p4}, Lcom/adjust/sdk/AdjustEvent;->setOrderId(Ljava/lang/String;)V

    .line 125
    invoke-static {v0}, Lcom/adjust/sdk/Adjust;->trackEvent(Lcom/adjust/sdk/AdjustEvent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

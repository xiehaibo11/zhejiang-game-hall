.class final Lcom/bykv/vk/openvk/api/plugin/pt;
.super Ljava/lang/Object;


# static fields
.field private static df:Ljava/util/concurrent/ScheduledExecutorService;

.field private static volatile pp:Z

.field private static final pt:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/util/Pair<",
            "Ljava/lang/String;",
            "Lorg/json/JSONObject;",
            ">;>;"
        }
    .end annotation
.end field

.field private static q:Landroid/content/SharedPreferences;

.field static final rg:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 38
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/fw$df;

    const-string v1, "tt_pangle_thread_pl_report"

    invoke-direct {v0, v1}, Lcom/bykv/vk/openvk/api/plugin/fw$df;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Ljava/util/concurrent/Executors;->newSingleThreadScheduledExecutor(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->df:Ljava/util/concurrent/ScheduledExecutorService;

    .line 54
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pt:Ljava/util/List;

    .line 55
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    const/4 v0, 0x0

    .line 77
    sput-boolean v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pp:Z

    return-void
.end method

.method private static c(Ljava/lang/String;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 9

    const-string v0, "oaid"

    const-string v1, "imei"

    const-string v2, "5.1.1.4"

    .line 144
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v4, "os_api"

    .line 146
    sget v5, Landroid/os/Build$VERSION;->SDK_INT:I

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 147
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x15

    const/4 v6, 0x1

    if-lt v4, v5, :cond_0

    sget-object v4, Landroid/os/Build;->SUPPORTED_ABIS:[Ljava/lang/String;

    goto :goto_0

    :cond_0
    const/4 v4, 0x2

    new-array v4, v4, [Ljava/lang/String;

    const/4 v5, 0x0

    sget-object v7, Landroid/os/Build;->CPU_ABI:Ljava/lang/String;

    aput-object v7, v4, v5

    sget-object v5, Landroid/os/Build;->CPU_ABI2:Ljava/lang/String;

    aput-object v5, v4, v6

    :goto_0
    const-string v5, "support_abi"

    .line 148
    invoke-static {v4}, Ljava/util/Arrays;->toString([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1, v5, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "ad_sdk_version"

    .line 150
    invoke-virtual {v3, v4, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v4, "com.bykv.vk"

    .line 151
    invoke-static {v4}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "plugin_version"

    .line 152
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_1

    goto :goto_1

    :cond_1
    move-object v2, v4

    :goto_1
    invoke-virtual {v3, v5, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "timestamp"

    .line 153
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    const-wide/16 v7, 0x3e8

    div-long/2addr v4, v7

    invoke-virtual {v3, v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v2, "is_plugin"

    .line 154
    invoke-virtual {v3, v2, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v2, "event_extra"

    if-eqz p1, :cond_2

    .line 155
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    goto :goto_2

    :cond_2
    const-string p1, ""

    :goto_2
    invoke-virtual {v3, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "type"

    .line 156
    invoke-virtual {v3, p1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 158
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    const-string p1, "model"

    .line 159
    sget-object v2, Landroid/os/Build;->MODEL:Ljava/lang/String;

    invoke-virtual {p0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "vendor"

    .line 160
    sget-object v2, Landroid/os/Build;->MANUFACTURER:Ljava/lang/String;

    invoke-virtual {p0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 161
    sget-object p1, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 162
    sget-object p1, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    invoke-virtual {p0, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "device_info"

    .line 163
    invoke-virtual {v3, p1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v3
.end method

.method public static final df(ILjava/lang/String;J)V
    .locals 2

    .line 105
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "duration"

    .line 107
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "code"

    .line 108
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p2, p0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "message"

    .line 109
    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 111
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    const-string p0, "plugin_load_failed"

    .line 113
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/pt;->df(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static df(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 2

    .line 117
    sget-boolean v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pp:Z

    if-nez v0, :cond_0

    .line 118
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->df:Ljava/util/concurrent/ScheduledExecutorService;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/pt$1;

    invoke-direct {v1, p0, p1}, Lcom/bykv/vk/openvk/api/plugin/pt$1;-><init>(Ljava/lang/String;Lorg/json/JSONObject;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ScheduledExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method static synthetic df(Ljava/util/List;)V
    .locals 0

    .line 37
    invoke-static {p0}, Lcom/bykv/vk/openvk/api/plugin/pt;->q(Ljava/util/List;)V

    return-void
.end method

.method private static pp(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    .line 92
    :cond_0
    invoke-static {}, Lcom/bykv/vk/openvk/TTVfSdk;->getVfManager()Lcom/bykv/vk/openvk/TTVfManager;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 94
    new-instance v1, Landroid/os/Bundle;

    invoke-direct {v1}, Landroid/os/Bundle;-><init>()V

    const/4 v2, 0x1

    const-string v3, "action"

    .line 95
    invoke-virtual {v1, v3, v2}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v2, "event_name"

    .line 96
    invoke-virtual {v1, v2, p0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 97
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "event_extra"

    invoke-virtual {v1, p1, p0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 98
    const-class p0, Landroid/os/Bundle;

    invoke-interface {v0, p0, v1}, Lcom/bykv/vk/openvk/TTVfManager;->getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;

    goto :goto_0

    .line 100
    :cond_1
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/pt;->df(Ljava/lang/String;Lorg/json/JSONObject;)V

    :goto_0
    return-void
.end method

.method static synthetic pt(Ljava/lang/String;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    .line 37
    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/pt;->c(Ljava/lang/String;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p0

    return-object p0
.end method

.method public static q(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 2

    .line 170
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pt:Ljava/util/List;

    new-instance v1, Landroid/util/Pair;

    invoke-direct {v1, p0, p1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private static q(Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;)V"
        }
    .end annotation

    if-nez p0, :cond_0

    return-void

    :cond_0
    const-string v0, "api-access.pangolin-sdk-toutiao.com"

    .line 176
    sget-object v1, Lcom/bykv/vk/openvk/api/plugin/pt;->q:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_1

    const-string v2, "url_alog"

    .line 177
    invoke-interface {v1, v2, v0}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_1
    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object v0, v1, v2

    const/4 v0, 0x1

    const-string v2, "/api/ad/union/sdk/stats/batch/"

    aput-object v2, v1, v0

    const-string v2, "https://%s%s"

    .line 180
    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    .line 181
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 183
    :try_start_0
    sget-object v3, Lcom/bykv/vk/openvk/api/plugin/pt;->pt:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 184
    sget-object v3, Lcom/bykv/vk/openvk/api/plugin/pt;->pt:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 185
    :goto_0
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    .line 186
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/util/Pair;

    .line 187
    iget-object v5, v4, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast v5, Ljava/lang/String;

    iget-object v4, v4, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v4, Lorg/json/JSONObject;

    invoke-static {v5, v4}, Lcom/bykv/vk/openvk/api/plugin/pt;->c(Ljava/lang/String;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v4

    invoke-interface {p0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 188
    invoke-interface {v3}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    :cond_2
    const-string v3, "stats_list"

    .line 191
    new-instance v4, Lorg/json/JSONArray;

    invoke-direct {v4, p0}, Lorg/json/JSONArray;-><init>(Ljava/util/Collection;)V

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    .line 194
    :catch_0
    invoke-static {v2}, Lcom/bykv/vk/openvk/api/plugin/df/df;->rg(Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p0

    .line 195
    invoke-static {}, Lcom/bykv/vk/openvk/api/plugin/rg/q;->rg()Lcom/bykv/vk/openvk/api/plugin/rg/q;

    move-result-object v2

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    invoke-virtual {v2, v0, v1, p0}, Lcom/bykv/vk/openvk/api/plugin/rg/q;->rg(ZLjava/lang/String;[B)Ljava/lang/String;

    return-void
.end method

.method public static rg()V
    .locals 1

    .line 81
    sget-boolean v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pp:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 83
    :try_start_0
    sput-boolean v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pp:Z

    .line 84
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->df:Ljava/util/concurrent/ScheduledExecutorService;

    invoke-interface {v0}, Ljava/util/concurrent/ScheduledExecutorService;->shutdown()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method public static final rg(ILjava/lang/String;J)V
    .locals 2

    .line 62
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v1, "duration"

    .line 64
    invoke-static {p2, p3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p2

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p2, "code"

    .line 65
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {v0, p2, p0}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p0, "message"

    .line 66
    invoke-virtual {v0, p0, p1}, Lorg/json/JSONObject;->putOpt(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 68
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    const-string p0, "plugin_load_failed"

    .line 70
    invoke-static {p0, v0}, Lcom/bykv/vk/openvk/api/plugin/pt;->pp(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static rg(Landroid/content/Context;)V
    .locals 2

    const-string v0, "tt_sdk_settings_other"

    const/4 v1, 0x0

    .line 58
    invoke-virtual {p0, v0, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    sput-object p0, Lcom/bykv/vk/openvk/api/plugin/pt;->q:Landroid/content/SharedPreferences;

    return-void
.end method

.method public static rg(Landroid/os/Bundle;)V
    .locals 2

    .line 199
    sget-boolean v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pp:Z

    if-nez v0, :cond_0

    .line 200
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->df:Ljava/util/concurrent/ScheduledExecutorService;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/pt$3;

    invoke-direct {v1, p0}, Lcom/bykv/vk/openvk/api/plugin/pt$3;-><init>(Landroid/os/Bundle;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ScheduledExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public static rg(Lcom/bykv/vk/openvk/AdConfig;)V
    .locals 3

    if-nez p0, :cond_0

    return-void

    .line 224
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    invoke-interface {p0}, Lcom/bykv/vk/openvk/AdConfig;->getAppId()Ljava/lang/String;

    move-result-object v1

    const-string v2, "appid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v0, "plugin_update_conf"

    .line 225
    invoke-interface {p0, v0}, Lcom/bykv/vk/openvk/AdConfig;->getExtra(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 226
    instance-of v2, v1, Ljava/lang/Integer;

    if-eqz v2, :cond_2

    .line 227
    check-cast v1, Ljava/lang/Integer;

    invoke-virtual {v1}, Ljava/lang/Integer;->toString()Ljava/lang/String;

    move-result-object v1

    .line 228
    sget-object v2, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    const-string v1, "2"

    :goto_0
    invoke-interface {v2, v0, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 230
    :cond_2
    invoke-interface {p0}, Lcom/bykv/vk/openvk/AdConfig;->getCustomController()Lcom/bykv/vk/openvk/TTCustomController;

    move-result-object p0

    if-eqz p0, :cond_3

    .line 233
    :try_start_0
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    const-string v1, "oaid"

    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTCustomController;->getDevOaid()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 234
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->rg:Ljava/util/Map;

    const-string v1, "imei"

    invoke-virtual {p0}, Lcom/bykv/vk/openvk/TTCustomController;->getDevImei()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    :cond_3
    return-void
.end method

.method public static rg(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 2

    .line 74
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "zeus_"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Lcom/bykv/vk/openvk/api/plugin/pt;->pp(Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method public static rg(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lorg/json/JSONObject;",
            ">;)V"
        }
    .end annotation

    .line 130
    sget-boolean v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pp:Z

    if-nez v0, :cond_1

    if-eqz p0, :cond_0

    .line 131
    invoke-interface {p0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->pt:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 134
    :cond_0
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/pt;->df:Ljava/util/concurrent/ScheduledExecutorService;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/pt$2;

    invoke-direct {v1, p0}, Lcom/bykv/vk/openvk/api/plugin/pt$2;-><init>(Ljava/util/List;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ScheduledExecutorService;->execute(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method

.class public Lcom/bykv/vk/openvk/api/plugin/fw;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bykv/vk/openvk/TTInitializer;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bykv/vk/openvk/api/plugin/fw$df;,
        Lcom/bykv/vk/openvk/api/plugin/fw$rg;
    }
.end annotation


# static fields
.field private static final q:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Landroid/os/Bundle;",
            ">;"
        }
    .end annotation
.end field

.field public static rg:Ljava/util/concurrent/ScheduledExecutorService;


# instance fields
.field private volatile df:Lcom/bykv/vk/openvk/TTInitializer;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 47
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/fw;->q:Ljava/util/Map;

    .line 48
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/fw$df;

    invoke-direct {v0}, Lcom/bykv/vk/openvk/api/plugin/fw$df;-><init>()V

    invoke-static {v0}, Ljava/util/concurrent/Executors;->newSingleThreadScheduledExecutor(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;

    move-result-object v0

    sput-object v0, Lcom/bykv/vk/openvk/api/plugin/fw;->rg:Ljava/util/concurrent/ScheduledExecutorService;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static df(Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/api/plugin/pp;)Lcom/bykv/vk/openvk/TTInitializer;
    .locals 11

    const-string v0, "Load plugin failed"

    const-string v1, "TTPluginManager"

    const/4 v2, 0x0

    const/4 v3, 0x6

    const-wide/16 v4, 0x0

    :try_start_0
    const-string v6, "call_create_initializer"

    .line 144
    invoke-virtual {p1, v6}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    .line 145
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-static {v6}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;

    move-result-object v6

    .line 146
    invoke-virtual {v6, p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Lcom/bykv/vk/openvk/api/plugin/pp;)Ldalvik/system/BaseDexClassLoader;

    move-result-object v7

    if-nez v7, :cond_0

    .line 148
    invoke-static {v3, v0, v4, v5}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(ILjava/lang/String;J)V

    .line 149
    invoke-static {v1, v0}, Lcom/bykv/vk/openvk/api/rg;->pp(Ljava/lang/String;Ljava/lang/String;)V

    goto/16 :goto_1

    :cond_0
    const-string v0, "com.bykv.vk.openvk.core.AdSdkInitializerHolder"

    .line 151
    invoke-virtual {v7, v0}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v7, "get_init_class_cost"

    .line 152
    invoke-virtual {p1, v7}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    .line 153
    new-instance v7, Landroid/os/Bundle;

    invoke-direct {v7}, Landroid/os/Bundle;-><init>()V

    const-string v8, "_pl_update_listener_"

    .line 154
    new-instance v9, Lcom/bykv/vk/openvk/api/plugin/c$df;

    invoke-direct {v9}, Lcom/bykv/vk/openvk/api/plugin/c$df;-><init>()V

    invoke-virtual {v7, v8, v9}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    const-string v8, "_pl_update_event_listener_"

    .line 155
    new-instance v9, Lcom/bykv/vk/openvk/api/plugin/c$q;

    invoke-direct {v9}, Lcom/bykv/vk/openvk/api/plugin/c$q;-><init>()V

    invoke-virtual {v7, v8, v9}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    .line 156
    sget-object v8, Lcom/bykv/vk/openvk/api/plugin/fw;->q:Ljava/util/Map;

    invoke-static {v8}, Lcom/bykv/vk/openvk/api/plugin/fw;->rg(Ljava/util/Map;)Landroid/os/Bundle;

    move-result-object v8

    const-string v9, "_pl_config_info_"

    .line 157
    invoke-virtual {v7, v9, v8}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    const-string v9, "create_bundle_cost"

    .line 158
    invoke-virtual {p1, v9}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    const-string v9, "_live_sdk_"

    .line 160
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->rg()Lcom/bykv/vk/openvk/live/df;

    move-result-object v10

    invoke-virtual {v7, v9, v10}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    .line 161
    invoke-interface {p0}, Lcom/bykv/vk/openvk/AdConfig;->getAppId()Ljava/lang/String;

    move-result-object p0

    invoke-static {v6, p0}, Lcom/bykv/vk/openvk/live/rg;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object p0

    .line 162
    invoke-static {}, Lcom/bykv/vk/openvk/live/df;->rg()Lcom/bykv/vk/openvk/live/df;

    move-result-object v9

    invoke-virtual {v9, v6, p0}, Lcom/bykv/vk/openvk/live/df;->rg(Lcom/bykv/vk/openvk/api/plugin/c;Landroid/os/Bundle;)V

    if-eqz p0, :cond_1

    const-string v6, "com.byted.live.lite"

    .line 164
    invoke-virtual {v8, v6, p0}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    :cond_1
    const-string p0, "live_init_cost"

    .line 166
    invoke-virtual {p1, p0}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    const-string p0, "getInstance"

    const/4 v6, 0x1

    new-array v8, v6, [Ljava/lang/Class;

    .line 168
    const-class v9, Landroid/os/Bundle;

    const/4 v10, 0x0

    aput-object v9, v8, v10

    invoke-virtual {v0, p0, v8}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    const-string v0, "get_init_method_cost"

    .line 169
    invoke-virtual {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    new-array v0, v6, [Ljava/lang/Object;

    aput-object v7, v0, v10

    .line 170
    invoke-virtual {p0, v2, v0}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/bykv/vk/openvk/TTInitializer;

    const-string v0, "get_init_instance_cost"

    .line 171
    invoke-virtual {p1, v0}, Lcom/bykv/vk/openvk/api/plugin/pp;->df(Ljava/lang/String;)J

    const-string p1, "Create initializer success"

    .line 172
    invoke-static {v1, p1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 176
    instance-of p1, p0, Lcom/bykv/vk/openvk/api/plugin/q;

    if-eqz p1, :cond_2

    .line 177
    move-object p1, p0

    check-cast p1, Lcom/bykv/vk/openvk/api/plugin/q;

    .line 178
    invoke-virtual {p1}, Lcom/bykv/vk/openvk/api/plugin/q;->rg()I

    move-result v0

    invoke-virtual {p1}, Lcom/bykv/vk/openvk/api/plugin/q;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, v4, v5}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(ILjava/lang/String;J)V

    goto :goto_0

    .line 180
    :cond_2
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1, v4, v5}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(ILjava/lang/String;J)V

    .line 182
    :goto_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "Create initializer failed: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0}, Lcom/bykv/vk/openvk/api/rg;->pp(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    return-object v2
.end method

.method private static final rg(Ljava/util/Map;)Landroid/os/Bundle;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Landroid/os/Bundle;",
            ">;)",
            "Landroid/os/Bundle;"
        }
    .end annotation

    if-eqz p0, :cond_3

    .line 188
    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 191
    :cond_0
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    .line 192
    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    .line 193
    :cond_1
    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 194
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 195
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    .line 196
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/Bundle;

    .line 197
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    if-eqz v1, :cond_1

    .line 198
    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putBundle(Ljava/lang/String;Landroid/os/Bundle;)V

    goto :goto_0

    :cond_2
    return-object v0

    .line 189
    :cond_3
    :goto_1
    new-instance p0, Landroid/os/Bundle;

    invoke-direct {p0}, Landroid/os/Bundle;-><init>()V

    return-object p0
.end method

.method private rg(Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/api/plugin/pp;)Lcom/bykv/vk/openvk/TTInitializer;
    .locals 3

    .line 120
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    if-nez v0, :cond_1

    .line 121
    monitor-enter p0

    .line 122
    :try_start_0
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    if-nez v0, :cond_0

    .line 123
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/pt;->rg(Lcom/bykv/vk/openvk/AdConfig;)V

    const-string v0, "TTPluginManager"

    const-string v1, "Create initializer"

    .line 124
    invoke-static {v0, v1}, Lcom/bykv/vk/openvk/api/rg;->df(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/api/plugin/fw;->df(Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/api/plugin/pp;)Lcom/bykv/vk/openvk/TTInitializer;

    move-result-object v0

    iput-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    .line 126
    invoke-virtual {p2}, Lcom/bykv/vk/openvk/api/plugin/pp;->rg()J

    .line 127
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-wide/16 v1, 0x14

    .line 128
    invoke-virtual {p2, v0, v1, v2}, Lcom/bykv/vk/openvk/api/plugin/pp;->rg(Lorg/json/JSONObject;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :try_start_1
    const-string p2, "zeus"

    .line 130
    invoke-static {}, Lcom/bykv/vk/openvk/TTAppContextHolder;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bykv/vk/openvk/api/plugin/c;->df()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, p2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catch_0
    :try_start_2
    const-string p2, "plugin"

    .line 135
    invoke-interface {p1, p2, v0}, Lcom/bykv/vk/openvk/AdConfig;->setExtra(Ljava/lang/String;Ljava/lang/Object;)V

    .line 137
    :cond_0
    monitor-exit p0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw p1

    .line 139
    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    return-object p1
.end method

.method static synthetic rg(Lcom/bykv/vk/openvk/api/plugin/fw;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/api/plugin/pp;)Lcom/bykv/vk/openvk/TTInitializer;
    .locals 0

    .line 40
    invoke-direct {p0, p1, p2}, Lcom/bykv/vk/openvk/api/plugin/fw;->rg(Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/api/plugin/pp;)Lcom/bykv/vk/openvk/TTInitializer;

    move-result-object p0

    return-object p0
.end method

.method private rg(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;Lcom/bykv/vk/openvk/api/plugin/pp;)V
    .locals 8

    .line 103
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/fw;->rg:Ljava/util/concurrent/ScheduledExecutorService;

    new-instance v7, Lcom/bykv/vk/openvk/api/plugin/fw$1;

    move-object v1, v7

    move-object v2, p0

    move-object v3, p4

    move-object v4, p2

    move-object v5, p1

    move-object v6, p3

    invoke-direct/range {v1 .. v6}, Lcom/bykv/vk/openvk/api/plugin/fw$1;-><init>(Lcom/bykv/vk/openvk/api/plugin/fw;Lcom/bykv/vk/openvk/api/plugin/pp;Lcom/bykv/vk/openvk/AdConfig;Landroid/content/Context;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V

    invoke-interface {v0, v7}, Ljava/util/concurrent/ScheduledExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static rg(Ljava/lang/String;Landroid/os/Bundle;)V
    .locals 1

    .line 51
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 52
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/fw;->q:Ljava/util/Map;

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method


# virtual methods
.method public getAdManager()Lcom/bykv/vk/openvk/TTVfManager;
    .locals 1

    .line 99
    sget-object v0, Lcom/bykv/vk/openvk/api/plugin/rg;->rg:Lcom/bykv/vk/openvk/api/plugin/rg;

    return-object v0
.end method

.method public init(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V
    .locals 2

    .line 58
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x15

    if-ge v0, v1, :cond_0

    const/16 p1, 0x1069

    const-string p2, "Only support >= 5.0"

    .line 59
    invoke-interface {p3, p1, p2}, Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;->fail(ILjava/lang/String;)V

    return-void

    .line 62
    :cond_0
    invoke-static {p1}, Lcom/bykv/vk/openvk/api/plugin/c;->rg(Landroid/content/Context;)Lcom/bykv/vk/openvk/api/plugin/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bykv/vk/openvk/api/plugin/c;->rg()V

    .line 63
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    if-eqz v0, :cond_1

    .line 64
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    new-instance v1, Lcom/bykv/vk/openvk/api/plugin/fw$rg;

    invoke-direct {v1, p3}, Lcom/bykv/vk/openvk/api/plugin/fw$rg;-><init>(Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V

    invoke-interface {v0, p1, p2, v1}, Lcom/bykv/vk/openvk/TTInitializer;->init(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V

    goto :goto_0

    .line 66
    :cond_1
    new-instance v0, Lcom/bykv/vk/openvk/api/plugin/fw$rg;

    invoke-direct {v0, p3}, Lcom/bykv/vk/openvk/api/plugin/fw$rg;-><init>(Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;)V

    const-string p3, "duration"

    invoke-static {p3}, Lcom/bykv/vk/openvk/api/plugin/pp;->rg(Ljava/lang/String;)Lcom/bykv/vk/openvk/api/plugin/pp;

    move-result-object p3

    invoke-direct {p0, p1, p2, v0, p3}, Lcom/bykv/vk/openvk/api/plugin/fw;->rg(Landroid/content/Context;Lcom/bykv/vk/openvk/AdConfig;Lcom/bykv/vk/openvk/TTVfSdk$InitCallback;Lcom/bykv/vk/openvk/api/plugin/pp;)V

    :goto_0
    return-void
.end method

.method public isInitSuccess()Z
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/bykv/vk/openvk/api/plugin/fw;->df:Lcom/bykv/vk/openvk/TTInitializer;

    invoke-interface {v0}, Lcom/bykv/vk/openvk/TTInitializer;->isInitSuccess()Z

    move-result v0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

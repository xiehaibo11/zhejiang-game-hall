.class public Lcom/bytedance/android/openliveplugin/LivePluginHelper;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitRunnable;,
        Lcom/bytedance/android/openliveplugin/LivePluginHelper$DefaultThreadFactory;,
        Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;
    }
.end annotation


# static fields
.field public static final LIVE_PLUGIN_PACKAGE_NAME:Ljava/lang/String; = "com.byted.live.lite"

.field private static hasInitZeus:Z

.field private static liveRoomService:Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

.field private static mLiveInitListeners:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/bytedance/android/live/base/api/ILiveInitCallback;",
            ">;"
        }
    .end annotation
.end field

.field private static materialManager:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

.field public static final sExecutor:Ljava/util/concurrent/ScheduledExecutorService;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 34
    new-instance v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$DefaultThreadFactory;

    invoke-direct {v0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$DefaultThreadFactory;-><init>()V

    invoke-static {v0}, Ljava/util/concurrent/Executors;->newSingleThreadScheduledExecutor(Ljava/util/concurrent/ThreadFactory;)Ljava/util/concurrent/ScheduledExecutorService;

    move-result-object v0

    sput-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->sExecutor:Ljava/util/concurrent/ScheduledExecutorService;

    const/4 v0, 0x0

    .line 138
    sput-boolean v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->hasInitZeus:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Ljava/util/ArrayList;
    .locals 1

    .line 28
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->mLiveInitListeners:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$100()Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;
    .locals 1

    .line 28
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->materialManager:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    return-object v0
.end method

.method static synthetic access$200(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 0

    .line 28
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->realInitLivePlugin(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    return-void
.end method

.method private static adaptEventBus()V
    .locals 4

    .line 236
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, "com.bytedance.pangle.activity"

    aput-object v3, v1, v2

    const/4 v2, 0x1

    const-string v3, "com.bytedance.pangle.wrapper"

    aput-object v3, v1, v2

    const-string v2, "com.bytedance.android.openlive.OpenLiveBackdoor"

    const-string v3, "tryAdaptEventBus"

    .line 235
    invoke-static {v2, v3, v0, v1}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static addInitListener(Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 1

    .line 37
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->mLiveInitListeners:Ljava/util/ArrayList;

    if-nez v0, :cond_0

    .line 38
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->mLiveInitListeners:Ljava/util/ArrayList;

    .line 41
    :cond_0
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;->INSTANCE:Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;

    if-ne p0, v0, :cond_1

    return-void

    .line 44
    :cond_1
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->mLiveInitListeners:Ljava/util/ArrayList;

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    :cond_2
    if-eqz p0, :cond_3

    .line 48
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->mLiveInitListeners:Ljava/util/ArrayList;

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_3
    return-void
.end method

.method public static getLiveArgsJsonStr()Ljava/lang/String;
    .locals 4

    .line 246
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    const-string v2, "com.bytedance.android.openlive.OpenLiveBackdoor"

    const-string v3, "getLiveArgsJsonStr"

    .line 245
    invoke-static {v2, v3, v0, v1}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0
.end method

.method public static getLiveRoomService()Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;
    .locals 4

    .line 260
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->liveRoomService:Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    if-nez v0, :cond_0

    .line 262
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    const-string v2, "com.bytedance.android.openlive.OpenLiveBackdoor"

    const-string v3, "getOuterLiveRoomService"

    .line 261
    invoke-static {v2, v3, v0, v1}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    sput-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->liveRoomService:Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    .line 264
    :cond_0
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->liveRoomService:Lcom/bytedance/android/live/base/api/IOuterLiveRoomService;

    return-object v0
.end method

.method public static init(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 1

    .line 141
    sget-boolean v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->hasInitZeus:Z

    if-nez v0, :cond_0

    .line 142
    invoke-static {p0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->initZeus(Landroid/app/Application;)V

    const/4 v0, 0x1

    .line 143
    sput-boolean v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->hasInitZeus:Z

    .line 145
    :cond_0
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->initLive(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    return-void
.end method

.method public static initLive(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 1

    .line 149
    new-instance v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$2;-><init>(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    .line 155
    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->prepare(Ljava/lang/Runnable;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 158
    :cond_0
    invoke-static {p0, p1, p2, p3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->realInitLivePlugin(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    return-void
.end method

.method public static initLiveCommerce()V
    .locals 4

    .line 226
    :try_start_0
    invoke-static {}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->adaptEventBus()V

    const-string v0, "com.bytedance.android.ecom.live.adapter.ECLiveAdapter"

    const-string v1, "init"

    .line 228
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v2

    const-string v3, "com.byted.live.lite"

    invoke-virtual {v2, v3}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v2

    iget-object v2, v2, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v3, 0x0

    new-array v3, v3, [Ljava/lang/Object;

    .line 227
    invoke-static {v0, v1, v2, v3}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 230
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public static initLivePlugin(Lcom/bytedance/android/live/base/api/ILiveHostContextParam;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 7

    .line 99
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const-string v1, "com.bytedance.android.openlive.auth.impl.auth.LiveAuthCallStub"

    :try_start_0
    const-string v2, "wrap"

    const/4 v3, 0x2

    new-array v4, v3, [Ljava/lang/Object;

    const/4 v5, 0x0

    aput-object p0, v4, v5

    const/4 p0, 0x1

    aput-object p1, v4, p0

    .line 104
    invoke-static {v1, v2, v0, v4}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/util/Pair;

    .line 107
    iget-object v2, p1, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v2, Lcom/bytedance/android/live/base/api/ILiveInitCallback;

    invoke-static {v2}, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->addInitListener(Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    const-string v2, "getTransformer"

    new-array v4, v5, [Ljava/lang/Object;

    .line 108
    invoke-static {v1, v2, v0, v4}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v2, "live init : start call LiveInitWrapper init ..."

    .line 109
    invoke-static {v2}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;)V

    const-string v2, "com.bytedance.android.openlive.LiveInitWrapper"

    const-string v4, "initWithTransform"

    const/4 v6, 0x3

    new-array v6, v6, [Ljava/lang/Object;

    .line 110
    iget-object p1, p1, Landroid/util/Pair;->first:Ljava/lang/Object;

    aput-object p1, v6, v5

    sget-object p1, Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;->INSTANCE:Lcom/bytedance/android/openliveplugin/LivePluginHelper$LiveInitCallbackWrapper;

    aput-object p1, v6, p0

    aput-object v1, v6, v3

    invoke-static {v2, v4, v0, v6}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string p1, "live init : LiveInitWrapper init error"

    .line 113
    invoke-static {p1}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->e(Ljava/lang/String;)V

    .line 114
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private static initZeus(Landroid/app/Application;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    .line 163
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->init()V

    const/4 v0, 0x1

    .line 164
    invoke-static {p0, v0}, Lcom/bytedance/pangle/Zeus;->init(Landroid/app/Application;Z)V

    .line 165
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->installFromDownloadDir()V

    const-string p0, "com.byted.live.lite"

    .line 166
    invoke-static {p0}, Lcom/bytedance/pangle/Zeus;->fetchPlugin(Ljava/lang/String;)V

    return-void
.end method

.method public static logEventV3(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 3

    .line 241
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v1, 0x2

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const/4 p0, 0x1

    aput-object p1, v1, p0

    const-string p0, "com.bytedance.android.openlive.OpenLiveBackdoor"

    const-string p1, "onEventV3"

    .line 240
    invoke-static {p0, p1, v0, v1}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static prepare(Ljava/lang/Runnable;)Z
    .locals 2

    const-string v0, "com.byted.live.lite"

    .line 170
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 172
    new-instance v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;

    invoke-direct {v0, p0}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$3;-><init>(Ljava/lang/Runnable;)V

    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->registerPluginStateListener(Lcom/bytedance/pangle/ZeusPluginStateListener;)V

    const/4 p0, 0x0

    return p0

    .line 188
    :cond_0
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_1

    .line 189
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->loadPlugin(Ljava/lang/String;)Z

    move-result p0

    return p0

    .line 191
    :cond_1
    invoke-static {v0}, Lcom/bytedance/pangle/Zeus;->isPluginLoaded(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static realInitLivePlugin(Landroid/app/Application;Ljava/lang/String;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V
    .locals 2

    .line 119
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->materialManager:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    if-nez v0, :cond_0

    .line 120
    new-instance v0, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    invoke-direct {v0}, Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;-><init>()V

    sput-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->materialManager:Lcom/bytedance/android/openliveplugin/material/LiveInitMaterialManager;

    :cond_0
    const-string v0, "live init : material task execute"

    .line 122
    invoke-static {v0}, Lcom/bytedance/android/openliveplugin/material/TTLogger;->d(Ljava/lang/String;)V

    .line 123
    sget-object v0, Lcom/bytedance/android/openliveplugin/LivePluginHelper;->sExecutor:Ljava/util/concurrent/ScheduledExecutorService;

    new-instance v1, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;

    invoke-direct {v1, p1, p0, p2, p3}, Lcom/bytedance/android/openliveplugin/LivePluginHelper$1;-><init>(Ljava/lang/String;Landroid/app/Application;Lcom/bytedance/android/live/base/api/ILiveHostContextParam$Builder;Lcom/bytedance/android/live/base/api/ILiveInitCallback;)V

    invoke-interface {v0, v1}, Ljava/util/concurrent/ScheduledExecutorService;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public static setBoeValue(Ljava/lang/String;)V
    .locals 3

    .line 256
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const-string p0, "com.bytedance.android.openlive.OpenLiveBackdoor"

    const-string v2, "setBoeValue"

    .line 255
    invoke-static {p0, v2, v0, v1}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static setPpeValue(Ljava/lang/String;)V
    .locals 3

    .line 251
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    const-string v1, "com.byted.live.lite"

    invoke-virtual {v0, v1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    iget-object v0, v0, Lcom/bytedance/pangle/plugin/Plugin;->mClassLoader:Lcom/bytedance/pangle/PluginClassLoader;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    aput-object p0, v1, v2

    const-string p0, "com.bytedance.android.openlive.OpenLiveBackdoor"

    const-string v2, "setPpeValue"

    .line 250
    invoke-static {p0, v2, v0, v1}, Lcom/bytedance/android/live/base/api/JavaCallsUtils;->callStaticMethodWithClassLoader(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;[Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

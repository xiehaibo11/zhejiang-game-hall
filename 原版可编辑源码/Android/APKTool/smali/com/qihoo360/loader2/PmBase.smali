.class Lcom/qihoo360/loader2/PmBase;
.super Ljava/lang/Object;
.source "PmBase.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/PmBase$DynamicClass;
    }
.end annotation


# static fields
.field static final ACTION_NEW_PLUGIN:Ljava/lang/String; = "ACTION_NEW_PLUGIN"

.field private static final CONTAINER_PROVIDER_PART:Ljava/lang/String; = ".loader.p.Provider"

.field static final CONTAINER_SERVICE_PART:Ljava/lang/String; = ".loader.s.Service"

.field private static final LOCKER:[B

.field private static final TAG:Ljava/lang/String; = "PmBase"


# instance fields
.field mAll:Lcom/qihoo360/loader2/Builder$PxAll;

.field private mBroadcastReceiver:Landroid/content/BroadcastReceiver;

.field private final mBuiltinModules:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/i/IModule;",
            ">;>;"
        }
    .end annotation
.end field

.field private final mBuiltinPlugins:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/replugin/IHostBinderFetcher;",
            ">;"
        }
    .end annotation
.end field

.field private mClassLoader:Ljava/lang/ClassLoader;

.field mClient:Lcom/qihoo360/loader2/PluginProcessPer;

.field private final mContainerActivities:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mContainerProviders:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mContainerServices:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private final mContext:Landroid/content/Context;

.field private mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

.field private mDefaultPluginName:Ljava/lang/String;

.field private final mDynamicClasses:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PmBase$DynamicClass;",
            ">;"
        }
    .end annotation
.end field

.field private mHostSvc:Lcom/qihoo360/loader2/PmHostSvc;

.field mInternal:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

.field mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

.field mLocalCookie:J

.field private mNeedRestart:Z

.field private final mPlugins:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/Plugin;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 174
    sput-object v0, Lcom/qihoo360/loader2/PmBase;->LOCKER:[B

    return-void
.end method

.method constructor <init>(Landroid/content/Context;)V
    .locals 4

    .line 230
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 89
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContainerActivities:Ljava/util/HashSet;

    .line 94
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContainerProviders:Ljava/util/HashSet;

    .line 99
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContainerServices:Ljava/util/HashSet;

    .line 104
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinModules:Ljava/util/HashMap;

    .line 114
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    .line 119
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinPlugins:Ljava/util/HashMap;

    .line 124
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    .line 179
    new-instance v0, Lcom/qihoo360/loader2/PmBase$1;

    invoke-direct {v0, p0}, Lcom/qihoo360/loader2/PmBase$1;-><init>(Lcom/qihoo360/loader2/PmBase;)V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    .line 232
    iput-object p1, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    .line 237
    sget v0, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    invoke-static {}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 239
    :cond_0
    sget v0, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    if-ne v0, v1, :cond_1

    const-string v0, "N1"

    goto :goto_0

    .line 242
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 245
    :goto_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mContainerProviders:Ljava/util/HashSet;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".loader.p.Provider"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    .line 247
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mContainerServices:Ljava/util/HashSet;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ".loader.s.Service"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    .line 251
    :cond_2
    new-instance v0, Lcom/qihoo360/loader2/PluginProcessPer;

    sget v1, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mContainerActivities:Ljava/util/HashSet;

    invoke-direct {v0, p1, p0, v1, v2}, Lcom/qihoo360/loader2/PluginProcessPer;-><init>(Landroid/content/Context;Lcom/qihoo360/loader2/PmBase;ILjava/util/HashSet;)V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    .line 254
    new-instance v0, Lcom/qihoo360/loader2/PluginCommImpl;

    invoke-direct {v0, p1, p0}, Lcom/qihoo360/loader2/PluginCommImpl;-><init>(Landroid/content/Context;Lcom/qihoo360/loader2/PmBase;)V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    .line 257
    new-instance p1, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-direct {p1, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;-><init>(Lcom/qihoo360/loader2/PmBase;)V

    iput-object p1, p0, Lcom/qihoo360/loader2/PmBase;->mInternal:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    return-void
.end method

.method static final cleanIntentPluginParams(Landroid/content/Intent;)V
    .locals 1

    :try_start_0
    const-string v0, "compatible"

    .line 222
    invoke-virtual {p0, v0}, Landroid/content/Intent;->removeExtra(Ljava/lang/String;)V

    const-string v0, "plugin"

    .line 223
    invoke-virtual {p0, v0}, Landroid/content/Intent;->removeExtra(Ljava/lang/String;)V

    const-string v0, "activity"

    .line 224
    invoke-virtual {p0, v0}, Landroid/content/Intent;->removeExtra(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-void
.end method

.method private final initForClient()V
    .locals 2

    .line 339
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    const-string v0, "ws001"

    const-string v1, "list plugins from persistent process"

    .line 340
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 344
    :cond_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->connectToHostSvc()V

    .line 347
    invoke-direct {p0}, Lcom/qihoo360/loader2/PmBase;->refreshPluginsFromHostSvc()V

    return-void
.end method

.method private final initForServer()V
    .locals 4

    .line 305
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    const-string v0, "search plugins from file system"

    .line 306
    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 309
    :cond_0
    new-instance v0, Lcom/qihoo360/loader2/PmHostSvc;

    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    invoke-direct {v0, v2, p0}, Lcom/qihoo360/loader2/PmHostSvc;-><init>(Landroid/content/Context;Lcom/qihoo360/loader2/PmBase;)V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mHostSvc:Lcom/qihoo360/loader2/PmHostSvc;

    .line 310
    invoke-static {v0}, Lcom/qihoo360/loader2/PluginProcessMain;->installHost(Lcom/qihoo360/loader2/IPluginHost;)V

    const-wide/16 v2, 0x4268

    .line 311
    invoke-static {v2, v3}, Lcom/qihoo360/loader2/StubProcessManager;->schedulePluginProcessLoop(J)V

    .line 314
    new-instance v0, Lcom/qihoo360/loader2/Builder$PxAll;

    invoke-direct {v0}, Lcom/qihoo360/loader2/Builder$PxAll;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mAll:Lcom/qihoo360/loader2/Builder$PxAll;

    .line 315
    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    invoke-static {v2, v0}, Lcom/qihoo360/loader2/Builder;->builder(Landroid/content/Context;Lcom/qihoo360/loader2/Builder$PxAll;)V

    .line 316
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mAll:Lcom/qihoo360/loader2/Builder$PxAll;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/Builder$PxAll;->getPlugins()Ljava/util/ArrayList;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/PmBase;->refreshPluginMap(Ljava/util/List;)V

    .line 321
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->load()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 325
    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/PmBase;->refreshPluginMap(Ljava/util/List;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 329
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "lst.p: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Landroid/os/RemoteException;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    return-void
.end method

.method private final isNeedToUpdate(Ljava/util/List;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;)Z"
        }
    .end annotation

    if-eqz p1, :cond_1

    .line 394
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 395
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "upinfo"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method private final loadDefaultClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 906
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-nez v0, :cond_1

    .line 908
    invoke-static {}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 909
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 910
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin class loader: not found default plugin,  in="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v1

    .line 916
    :cond_1
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Plugin;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    .line 917
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_2

    .line 918
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "plugin class loader: in="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 922
    :cond_2
    :try_start_0
    invoke-virtual {v0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v3

    .line 924
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_4

    .line 925
    invoke-virtual {v3}, Ljava/lang/Throwable;->getCause()Ljava/lang/Throwable;

    move-result-object v4

    instance-of v4, v4, Ljava/lang/ClassNotFoundException;

    if-eqz v4, :cond_3

    .line 926
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_4

    .line 927
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "plugin classloader not found className="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 930
    :cond_3
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    .line 931
    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 936
    :cond_4
    :goto_0
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 937
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin class loader: c="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, ", loader="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v1
.end method

.method private final loadProviderClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 864
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-nez v0, :cond_1

    .line 866
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 867
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin provider loader: not found default plugin,  in="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v1

    .line 872
    :cond_1
    iget-object v3, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v3, v3, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v3, v3, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    if-eqz v3, :cond_6

    .line 873
    array-length v4, v3

    if-gtz v4, :cond_2

    goto :goto_1

    :cond_2
    const/4 v4, 0x0

    .line 880
    aget-object v3, v3, v4

    iget-object v3, v3, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    .line 882
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Plugin;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    .line 883
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 884
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "plugin provider loader: in="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " target="

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 888
    :cond_3
    :try_start_0
    invoke-virtual {v0, v3}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 890
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_4

    .line 891
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 894
    :cond_4
    :goto_0
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 895
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin provider loader: c="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, ", loader="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v1

    .line 874
    :cond_6
    :goto_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_7

    const-string p1, "plugin provider loader: manifest not item found"

    .line 875
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    return-object v1
.end method

.method private final loadServiceClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 822
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-nez v0, :cond_1

    .line 824
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 825
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin service loader: not found default plugin,  in="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v1

    .line 830
    :cond_1
    iget-object v3, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v3, v3, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    iget-object v3, v3, Landroid/content/pm/PackageInfo;->services:[Landroid/content/pm/ServiceInfo;

    if-eqz v3, :cond_6

    .line 831
    array-length v4, v3

    if-gtz v4, :cond_2

    goto :goto_1

    :cond_2
    const/4 v4, 0x0

    .line 838
    aget-object v3, v3, v4

    iget-object v3, v3, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    .line 840
    invoke-virtual {v0}, Lcom/qihoo360/loader2/Plugin;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    .line 841
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 842
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "plugin service loader: in="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " target="

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 846
    :cond_3
    :try_start_0
    invoke-virtual {v0, v3}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 848
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_4

    .line 849
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 852
    :cond_4
    :goto_0
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 853
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin service loader: c="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, ", loader="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v1

    .line 832
    :cond_6
    :goto_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_7

    const-string p1, "plugin service loader: manifest not item found"

    .line 833
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    return-object v1
.end method

.method private putPluginObject(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/loader2/Plugin;)V
    .locals 3

    .line 425
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 454
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 455
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 457
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_1

    .line 426
    :cond_1
    :goto_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_2

    .line 427
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f53\u524d\u5185\u7f6e\u63d2\u4ef6\u5217\u8868\u4e2d\u5df2\u7ecf\u6709"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "\uff0c\u9700\u8981\u770b\u770b\u8c01\u7684\u7248\u672c\u53f7\u5927\u3002"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 431
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/loader2/Plugin;

    if-nez v0, :cond_3

    .line 433
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/loader2/Plugin;

    .line 436
    :cond_3
    iget-object v0, v0, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    if-eq v0, v2, :cond_5

    .line 437
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 438
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u65b0\u4f20\u5165\u7684\u7eafAPK\u63d2\u4ef6, name="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", \u7248\u672c\u53f7\u6bd4\u8f83\u5927,ver="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ",\u4ee5TA\u4e3a\u51c6\u3002"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 442
    :cond_4
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 443
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    .line 445
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getAlias()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    .line 448
    :cond_5
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_6

    .line 449
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u65b0\u4f20\u5165\u7684\u7eafAPK\u63d2\u4ef6"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\u7248\u672c\u53f7\u8fd8\u6ca1\u6709\u5185\u7f6e\u7684\u5927\uff0c\u4ec0\u4e48\u90fd\u4e0d\u505a\u3002"

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    :goto_1
    return-void
.end method

.method private final refreshPluginMap(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;)V"
        }
    .end annotation

    if-nez p1, :cond_0

    return-void

    .line 412
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 413
    invoke-static {v0}, Lcom/qihoo360/loader2/Plugin;->build(Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v1

    .line 414
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/loader2/PmBase;->putPluginObject(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/loader2/Plugin;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method private refreshPluginsFromHostSvc()V
    .locals 5

    const-string v0, "ws001"

    const/4 v1, 0x0

    .line 356
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    invoke-interface {v2}, Lcom/qihoo360/loader2/IPluginHost;->listPlugins()Ljava/util/List;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 359
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "lst.p: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    move-object v2, v1

    .line 364
    :goto_0
    invoke-direct {p0, v2}, Lcom/qihoo360/loader2/PmBase;->refreshPluginMap(Ljava/util/List;)V

    .line 369
    invoke-direct {p0, v2}, Lcom/qihoo360/loader2/PmBase;->isNeedToUpdate(Ljava/util/List;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 370
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_0

    const-string v2, "plugins need to perform update operations"

    .line 371
    invoke-static {v0, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 374
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->updateAllPlugins()Ljava/util/List;

    move-result-object v1
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 376
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_1
    :goto_1
    if-eqz v1, :cond_2

    .line 382
    invoke-direct {p0, v1}, Lcom/qihoo360/loader2/PmBase;->refreshPluginMap(Ljava/util/List;)V

    :cond_2
    return-void
.end method


# virtual methods
.method final addBuiltinModule(Ljava/lang/String;Ljava/lang/Class;Lcom/qihoo360/i/IModule;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/qihoo360/i/IModule;",
            ">;",
            "Lcom/qihoo360/i/IModule;",
            ")V"
        }
    .end annotation

    .line 515
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinModules:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 517
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 518
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinModules:Ljava/util/HashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 520
    :cond_0
    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method final addDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z
    .locals 2

    .line 524
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 525
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "addDynamicClass: class="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " type="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " target="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " def="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 527
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 p1, 0x0

    return p1

    .line 530
    :cond_1
    new-instance v0, Lcom/qihoo360/loader2/PmBase$DynamicClass;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/qihoo360/loader2/PmBase$DynamicClass;-><init>(Lcom/qihoo360/loader2/PmBase$1;)V

    .line 531
    iput-object p2, v0, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    .line 532
    iput-object p3, v0, Lcom/qihoo360/loader2/PmBase$DynamicClass;->classType:Ljava/lang/String;

    .line 533
    iput-object p4, v0, Lcom/qihoo360/loader2/PmBase$DynamicClass;->className:Ljava/lang/String;

    .line 534
    iput-object p5, v0, Lcom/qihoo360/loader2/PmBase$DynamicClass;->defClass:Ljava/lang/Class;

    .line 535
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    invoke-virtual {p2, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x1

    return p1
.end method

.method final attach()V
    .locals 5

    .line 465
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v1

    sget v2, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    iget-object v3, p0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v4, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPluginName:Ljava/lang/String;

    invoke-interface {v0, v1, v2, v3, v4}, Lcom/qihoo360/loader2/IPluginHost;->attachPluginProcess(Ljava/lang/String;ILandroid/os/IBinder;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPluginName:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 468
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "c.n.a: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ws001"

    invoke-static {v2, v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method

.method final callAppCreate()V
    .locals 4

    .line 576
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 577
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPersistentCookie()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    .line 599
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_1

    .line 600
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "initial local cookie="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v2, p0, Lcom/qihoo360/loader2/PmBase;->mLocalCookie:J

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 650
    :cond_1
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-nez v0, :cond_2

    .line 652
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v2, "ACTION_NEW_PLUGIN"

    .line 653
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v2, "ACTION_UNINSTALL_PLUGIN"

    .line 654
    invoke-virtual {v0, v2}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    .line 656
    :try_start_0
    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    invoke-static {v2}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object v2

    iget-object v3, p0, Lcom/qihoo360/loader2/PmBase;->mBroadcastReceiver:Landroid/content/BroadcastReceiver;

    invoke-virtual {v2, v3, v0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 659
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "p m hlc a r e: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    :goto_0
    return-void
.end method

.method final callAttach()V
    .locals 5

    .line 481
    const-class v0, Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    .line 484
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/Plugin;

    .line 485
    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    iget-object v4, p0, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    invoke-virtual {v1, v2, v3, v4}, Lcom/qihoo360/loader2/Plugin;->attach(Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)V

    goto :goto_0

    .line 489
    :cond_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 490
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPluginName:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 492
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPluginName:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/loader2/Plugin;

    if-eqz v0, :cond_2

    const/4 v1, 0x3

    const/4 v2, 0x1

    .line 494
    invoke-virtual {v0, v1, v2}, Lcom/qihoo360/loader2/Plugin;->load(IZ)Z

    move-result v1

    if-nez v1, :cond_1

    .line 496
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    .line 497
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "failed to load default plugin="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPluginName:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ws001"

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    if-eqz v1, :cond_2

    .line 501
    iput-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    .line 502
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    invoke-virtual {v1, v0}, Lcom/qihoo360/loader2/PluginProcessPer;->init(Lcom/qihoo360/loader2/Plugin;)V

    :cond_2
    return-void
.end method

.method dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 9

    .line 943
    sget-boolean v0, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    if-eqz v0, :cond_14

    .line 947
    array-length v0, p3

    const/4 v1, 0x0

    move v2, v1

    move v3, v2

    :goto_0
    const/4 v4, 0x1

    if-ge v2, v0, :cond_2

    aget-object v5, p3, v2

    if-eqz v3, :cond_0

    .line 949
    invoke-static {v5}, Lcom/qihoo360/i/Factory;->queryPluginContext(Ljava/lang/String;)Landroid/content/Context;

    move-result-object p1

    .line 950
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "plugin.c="

    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    return-void

    :cond_0
    const-string v6, "--load"

    .line 953
    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    move v3, v4

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 962
    :cond_2
    array-length v0, p3

    move v2, v1

    move v3, v2

    :goto_1
    const/high16 v5, -0x80000000

    if-ge v2, v0, :cond_5

    aget-object v6, p3, v2

    if-eqz v3, :cond_3

    .line 965
    :try_start_0
    new-instance p1, Lcom/qihoo360/loader2/PluginBinderInfo;

    const/4 p2, 0x4

    invoke-direct {p1, p2}, Lcom/qihoo360/loader2/PluginBinderInfo;-><init>(I)V

    .line 966
    invoke-static {v6, v5, p1}, Lcom/qihoo360/loader2/MP;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception p1

    .line 968
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_2
    return-void

    :cond_3
    const-string v5, "--start-plugin-process"

    .line 972
    invoke-virtual {v6, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    move v3, v4

    :cond_4
    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    .line 980
    :cond_5
    array-length v0, p3

    move v2, v1

    :goto_3
    if-ge v2, v0, :cond_8

    aget-object v3, p3, v2

    const-string v6, "--reason"

    .line 981
    invoke-virtual {v3, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_7

    const-string p1, "--- Reason ---"

    .line 982
    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 983
    sget-object p1, Lcom/qihoo360/loader2/Plugin;->sLoadedReasons:Ljava/util/ArrayList;

    if-eqz p1, :cond_6

    .line 984
    sget-object p1, Lcom/qihoo360/loader2/Plugin;->sLoadedReasons:Ljava/util/ArrayList;

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_4
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_6

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/String;

    .line 985
    invoke-virtual {p2, p3}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    goto :goto_4

    :cond_6
    return-void

    :cond_7
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    .line 995
    :cond_8
    array-length v0, p3

    move v2, v1

    :goto_5
    if-ge v2, v0, :cond_b

    aget-object v3, p3, v2

    const-string v6, "--binder-reason"

    .line 996
    invoke-virtual {v3, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_a

    const-string p1, "--- Binder Reason ---"

    .line 997
    invoke-virtual {p2, p1}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 998
    sget-object p1, Lcom/qihoo360/loader2/MP;->sBinderReasons:Ljava/util/HashMap;

    if-eqz p1, :cond_9

    .line 999
    sget-object p1, Lcom/qihoo360/loader2/MP;->sBinderReasons:Ljava/util/HashMap;

    invoke-virtual {p1}, Ljava/util/HashMap;->keySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_6
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_9

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/String;

    .line 1000
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "binder: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 1001
    sget-object v0, Lcom/qihoo360/loader2/MP;->sBinderReasons:Ljava/util/HashMap;

    invoke-virtual {v0, p3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    goto :goto_6

    :cond_9
    return-void

    :cond_a
    add-int/lit8 v2, v2, 0x1

    goto :goto_5

    .line 1014
    :cond_b
    array-length v0, p3

    const-string v2, ""

    move-object v3, v2

    move-object v6, v3

    move v2, v1

    :goto_7
    if-ge v1, v0, :cond_f

    aget-object v7, p3, v1

    if-eqz v2, :cond_d

    .line 1016
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_c

    move-object v3, v7

    goto :goto_8

    .line 1020
    :cond_c
    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_d

    move-object v6, v7

    goto :goto_8

    :cond_d
    const-string v8, "--start"

    .line 1025
    invoke-virtual {v7, v8}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_e

    move v2, v4

    :cond_e
    :goto_8
    add-int/lit8 v1, v1, 0x1

    goto :goto_7

    :cond_f
    if-eqz v2, :cond_12

    .line 1030
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_10

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_10

    .line 1031
    new-instance p1, Landroid/content/Intent;

    invoke-direct {p1}, Landroid/content/Intent;-><init>()V

    const/high16 p2, 0x10000000

    .line 1032
    invoke-virtual {p1, p2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 1033
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    invoke-static {p2, p1, v3, v6, v5}, Lcom/qihoo360/i/Factory;->startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Z

    goto :goto_9

    .line 1035
    :cond_10
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_11

    const-string p1, "ws001"

    const-string p2, "need {plugin} and {activity}"

    .line 1036
    invoke-static {p1, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_11
    :goto_9
    return-void

    .line 1043
    :cond_12
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/replugin/utils/ReflectUtils;->dumpObject(Ljava/lang/Object;Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    .line 1044
    invoke-virtual {p2}, Ljava/io/PrintWriter;->println()V

    const-string v0, "--- plugins V2 ---"

    .line 1046
    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 1047
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "--- plugins.size = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v1}, Ljava/util/Map;->size()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " ---"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 1048
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_a
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_13

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/Plugin;

    .line 1049
    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p2, v1}, Ljava/io/PrintWriter;->println(Ljava/lang/Object;)V

    goto :goto_a

    .line 1051
    :cond_13
    invoke-virtual {p2}, Ljava/io/PrintWriter;->println()V

    .line 1053
    invoke-static {p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    const-string v0, "--- plugins.cached objects ---"

    .line 1055
    invoke-virtual {p2, v0}, Ljava/io/PrintWriter;->println(Ljava/lang/String;)V

    .line 1056
    invoke-static {p1, p2, p3}, Lcom/qihoo360/loader2/Plugin;->dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    .line 1057
    invoke-virtual {p2}, Ljava/io/PrintWriter;->println()V

    :cond_14
    return-void
.end method

.method final getBuiltinModules(Ljava/lang/String;)Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/i/IModule;",
            ">;"
        }
    .end annotation

    .line 1291
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinModules:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/HashMap;

    return-object p1
.end method

.method final getBuiltinPlugin(Ljava/lang/String;)Lcom/qihoo360/replugin/IHostBinderFetcher;
    .locals 2

    .line 1285
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinPlugins:Ljava/util/HashMap;

    monitor-enter v0

    .line 1286
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinPlugins:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/IHostBinderFetcher;

    monitor-exit v0

    return-object p1

    :catchall_0
    move-exception p1

    .line 1287
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final getHostBinder()Landroid/os/IBinder;
    .locals 1

    .line 1062
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mHostSvc:Lcom/qihoo360/loader2/PmHostSvc;

    return-object v0
.end method

.method final getPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;
    .locals 1

    .line 1070
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/loader2/Plugin;

    return-object p1
.end method

.method final getPluginByDynamicClass(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 567
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/loader2/PmBase$DynamicClass;

    if-eqz p1, :cond_0

    .line 569
    iget-object p1, p1, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    return-object p1

    :cond_0
    const-string p1, ""

    return-object p1
.end method

.method final handleServiceCreated(Landroid/app/Service;)V
    .locals 3

    .line 1297
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    sget v1, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    iget-object v2, v2, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->regService(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1300
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "r.s: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method

.method final handleServiceDestroyed(Landroid/app/Service;)V
    .locals 3

    .line 1317
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    sget v1, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    iget-object v2, v2, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, v1, v2, p1}, Lcom/qihoo360/loader2/IPluginHost;->unregService(ILjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 1320
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ur.s: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method

.method init()V
    .locals 4

    .line 262
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginCallbacks;->initPnPluginOverride()V

    .line 264
    sget-boolean v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->PERSISTENT_ENABLE:Z

    if-eqz v0, :cond_1

    .line 266
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 268
    invoke-direct {p0}, Lcom/qihoo360/loader2/PmBase;->initForServer()V

    goto :goto_0

    .line 271
    :cond_0
    invoke-direct {p0}, Lcom/qihoo360/loader2/PmBase;->initForClient()V

    goto :goto_0

    .line 275
    :cond_1
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isUIProcess()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 277
    invoke-direct {p0}, Lcom/qihoo360/loader2/PmBase;->initForServer()V

    .line 281
    sget-object v0, Lcom/qihoo360/loader2/PMF;->sPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PmBase;->attach()V

    goto :goto_0

    .line 285
    :cond_2
    invoke-direct {p0}, Lcom/qihoo360/loader2/PmBase;->initForClient()V

    .line 290
    :goto_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-static {v0}, Lcom/qihoo360/loader2/PluginTable;->initPlugins(Ljava/util/Map;)V

    .line 293
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_3

    .line 294
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/Plugin;

    .line 295
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin: p="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ws001"

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_1

    :cond_3
    return-void
.end method

.method final insertNewPlugin(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 5

    .line 1123
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 1124
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "insert new plugin: info="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1126
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/PmBase;->LOCKER:[B

    monitor-enter v0

    .line 1129
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object v1

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/RePluginCallbacks;->isPluginBlocked(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 1130
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    const-string v1, "ws001"

    .line 1131
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "insert new plugin: plugin is blocked, in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1133
    :cond_1
    monitor-exit v0

    return-void

    .line 1136
    :cond_2
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/Plugin;

    const/4 v2, 0x1

    if-eqz v1, :cond_3

    .line 1140
    iget-object v3, v1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v3

    const/4 v4, 0x2

    if-ne v3, v4, :cond_3

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getType()I

    move-result v3

    if-ne v3, v2, :cond_3

    goto :goto_0

    :cond_3
    if-eqz v1, :cond_5

    .line 1143
    invoke-virtual {v1}, Lcom/qihoo360/loader2/Plugin;->isInitialized()Z

    move-result v1

    if-eqz v1, :cond_5

    .line 1145
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_4

    const-string v1, "ws001"

    .line 1146
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "insert new plugin: failed cause plugin has loaded, plugin="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1149
    :cond_4
    iput-boolean v2, p0, Lcom/qihoo360/loader2/PmBase;->mNeedRestart:Z

    .line 1150
    monitor-exit v0

    return-void

    .line 1154
    :cond_5
    :goto_0
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_6

    const-string v1, "ws001"

    .line 1155
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "insert new plugin: ok: plugin="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1157
    :cond_6
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->build(Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v1

    .line 1158
    iget-object v2, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    iget-object v4, p0, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    invoke-virtual {v1, v2, v3, v4}, Lcom/qihoo360/loader2/Plugin;->attach(Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)V

    .line 1161
    invoke-direct {p0, p1, v1}, Lcom/qihoo360/loader2/PmBase;->putPluginObject(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/loader2/Plugin;)V

    .line 1162
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final installBuiltinPlugin(Ljava/lang/String;Lcom/qihoo360/replugin/IHostBinderFetcher;)V
    .locals 2

    .line 474
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinPlugins:Ljava/util/HashMap;

    monitor-enter v0

    .line 475
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mBuiltinPlugins:Ljava/util/HashMap;

    invoke-virtual {v1, p1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 476
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method final isActivity(Ljava/lang/String;)Z
    .locals 1

    .line 1066
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContainerActivities:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method final isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 547
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 548
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    invoke-virtual {v0, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;

    if-eqz p2, :cond_0

    .line 550
    iget-object p2, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method final loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;
    .locals 2

    .line 1089
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/loader2/Plugin;

    const/4 v0, 0x3

    const/4 v1, 0x1

    invoke-virtual {p0, p1, v0, v1}, Lcom/qihoo360/loader2/PmBase;->loadPlugin(Lcom/qihoo360/loader2/Plugin;IZ)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    return-object p1
.end method

.method final loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 672
    const-class p2, Lcom/qihoo360/replugin/component/service/server/PluginPitService;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 673
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 674
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "loadClass: Loading PitService Class... clz="

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "PmBase"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 676
    :cond_0
    const-class p1, Lcom/qihoo360/replugin/component/service/server/PluginPitService;

    return-object p1

    .line 680
    :cond_1
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mContainerActivities:Ljava/util/HashSet;

    invoke-virtual {p2, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result p2

    const-string v0, "ws001"

    if-eqz p2, :cond_3

    .line 681
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    invoke-virtual {p2, p1}, Lcom/qihoo360/loader2/PluginProcessPer;->resolveActivityClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p2

    if-eqz p2, :cond_2

    return-object p2

    .line 688
    :cond_2
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p m hlc u d a o "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 690
    const-class p1, Lcom/qihoo360/replugin/component/dummy/DummyActivity;

    return-object p1

    .line 694
    :cond_3
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mContainerServices:Ljava/util/HashSet;

    invoke-virtual {p2, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_5

    .line 695
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PmBase;->loadServiceClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p2

    if-eqz p2, :cond_4

    return-object p2

    .line 702
    :cond_4
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p m hlc u d s o "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 704
    const-class p1, Lcom/qihoo360/replugin/component/dummy/DummyService;

    return-object p1

    .line 708
    :cond_5
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mContainerProviders:Ljava/util/HashSet;

    invoke-virtual {p2, p1}, Ljava/util/HashSet;->contains(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_7

    .line 709
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PmBase;->loadProviderClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p2

    if-eqz p2, :cond_6

    return-object p2

    .line 716
    :cond_6
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p m hlc u d p o "

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 718
    const-class p1, Lcom/qihoo360/replugin/component/dummy/DummyProvider;

    return-object p1

    .line 722
    :cond_7
    iget-object p2, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    invoke-virtual {p2, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;

    if-eqz p2, :cond_16

    .line 724
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v1

    .line 725
    iget-object v2, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-static {v2}, Lcom/qihoo360/loader2/PluginDesc;->get(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginDesc;

    move-result-object v2

    .line 727
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v4, "loadClass"

    if-eqz v3, :cond_9

    .line 728
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "desc="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz v2, :cond_8

    .line 730
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "desc.isLarge()="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginDesc;->isLarge()Z

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 732
    :cond_8
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "RePlugin.isPluginDexExtracted("

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ") = "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-static {v5}, Lcom/qihoo360/replugin/RePlugin;->isPluginDexExtracted(Ljava/lang/String;)Z

    move-result v5

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_9
    if-eqz v2, :cond_b

    .line 737
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginDesc;->getPluginName()Ljava/lang/String;

    move-result-object v3

    .line 738
    invoke-static {v3}, Lcom/qihoo360/loader2/PluginTable;->getPluginInfo(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v5

    if-nez v5, :cond_b

    .line 739
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_a

    .line 740
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "plugin="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " not found, return DynamicClassProxyActivity.class"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 742
    :cond_a
    const-class p1, Lcom/qihoo360/replugin/component/activity/DynamicClassProxyActivity;

    return-object p1

    :cond_b
    if-eqz v2, :cond_c

    .line 748
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginDesc;->isLarge()Z

    move-result v2

    if-eqz v2, :cond_c

    iget-object v2, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-static {v2}, Lcom/qihoo360/replugin/RePlugin;->isPluginDexExtracted(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_c

    const/4 v2, 0x1

    goto :goto_0

    :cond_c
    const/4 v2, 0x0

    .line 749
    :goto_0
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_d

    .line 750
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "needStartLoadingActivity = "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v4, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_d
    if-eqz v2, :cond_e

    .line 753
    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3}, Landroid/content/Intent;-><init>()V

    const/high16 v5, 0x10000000

    .line 754
    invoke-virtual {v3, v5}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 756
    new-instance v5, Landroid/content/ComponentName;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v6

    const-string v7, "com.qihoo360.loader2.updater.PluginLoadingActivity2"

    invoke-direct {v5, v6, v7}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3, v5}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 757
    invoke-virtual {v1, v3}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 760
    :cond_e
    iget-object v3, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-virtual {p0, v3}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v3

    .line 761
    sget-boolean v5, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v5, :cond_f

    .line 762
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "p="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_f
    const-wide/16 v5, 0x12c

    if-eqz v3, :cond_11

    .line 766
    :try_start_0
    invoke-virtual {v3}, Lcom/qihoo360/loader2/Plugin;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    iget-object v4, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->className:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    if-eqz v2, :cond_10

    .line 770
    new-instance v2, Lcom/qihoo360/loader2/PmBase$2;

    invoke-direct {v2, p0, v1}, Lcom/qihoo360/loader2/PmBase$2;-><init>(Lcom/qihoo360/loader2/PmBase;Landroid/content/Context;)V

    invoke-static {v2, v5, v6}, Lcom/qihoo360/mobilesafe/api/Tasks;->postDelayed2Thread(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_10
    return-object v3

    :catchall_0
    move-exception v1

    .line 784
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "p m hlc dc "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_1

    .line 788
    :cond_11
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_12

    .line 789
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\u52a0\u8f7d "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->plugin:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " \u5931\u8d25"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 791
    :cond_12
    new-instance v2, Lcom/qihoo360/loader2/PmBase$3;

    invoke-direct {v2, p0, v1}, Lcom/qihoo360/loader2/PmBase$3;-><init>(Lcom/qihoo360/loader2/PmBase;Landroid/content/Context;)V

    invoke-static {v2, v5, v6}, Lcom/qihoo360/mobilesafe/api/Tasks;->postDelayed2Thread(Ljava/lang/Runnable;J)Z

    .line 799
    :goto_1
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "p m hlc dc failed: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " t="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->className:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " tp="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->classType:Ljava/lang/String;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " df="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->defClass:Ljava/lang/Class;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 802
    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->classType:Ljava/lang/String;

    const-string v0, "activity"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_13

    .line 803
    const-class p1, Lcom/qihoo360/replugin/component/dummy/DummyActivity;

    return-object p1

    .line 804
    :cond_13
    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->classType:Ljava/lang/String;

    const-string v0, "service"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_14

    .line 805
    const-class p1, Lcom/qihoo360/replugin/component/dummy/DummyService;

    return-object p1

    .line 806
    :cond_14
    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->classType:Ljava/lang/String;

    const-string v0, "provider"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_15

    .line 807
    const-class p1, Lcom/qihoo360/replugin/component/dummy/DummyProvider;

    return-object p1

    .line 809
    :cond_15
    iget-object p1, p2, Lcom/qihoo360/loader2/PmBase$DynamicClass;->defClass:Ljava/lang/Class;

    return-object p1

    .line 813
    :cond_16
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PmBase;->loadDefaultClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method final loadDexPlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;
    .locals 2

    .line 1084
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/loader2/Plugin;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-static {v0, p1, v1, p2}, Lcom/qihoo360/loader2/Plugin;->cloneAndReattach(Landroid/content/Context;Lcom/qihoo360/loader2/Plugin;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    const/4 p2, 0x2

    const/4 v0, 0x1

    .line 1085
    invoke-virtual {p0, p1, p2, v0}, Lcom/qihoo360/loader2/PmBase;->loadPlugin(Lcom/qihoo360/loader2/Plugin;IZ)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    return-object p1
.end method

.method final loadPackageInfoPlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;
    .locals 2

    .line 1074
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/loader2/Plugin;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-static {v0, p1, v1, p2}, Lcom/qihoo360/loader2/Plugin;->cloneAndReattach(Landroid/content/Context;Lcom/qihoo360/loader2/Plugin;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    const/4 p2, 0x0

    const/4 v0, 0x1

    .line 1075
    invoke-virtual {p0, p1, p2, v0}, Lcom/qihoo360/loader2/PmBase;->loadPlugin(Lcom/qihoo360/loader2/Plugin;IZ)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    return-object p1
.end method

.method final loadPlugin(Lcom/qihoo360/loader2/Plugin;IZ)Lcom/qihoo360/loader2/Plugin;
    .locals 2

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 1104
    :cond_0
    invoke-virtual {p1, p2, p3}, Lcom/qihoo360/loader2/Plugin;->load(IZ)Z

    move-result p3

    if-nez p3, :cond_1

    .line 1106
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pmb.lp: f to l. lt="

    invoke-virtual {p3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "; i="

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ws001"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    :cond_1
    return-object p1
.end method

.method final loadPlugin(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/loader2/PluginCommImpl;IZ)Lcom/qihoo360/loader2/Plugin;
    .locals 2

    .line 1094
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->build(Lcom/qihoo360/replugin/model/PluginInfo;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    .line 1095
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {p1, v0, v1, p2}, Lcom/qihoo360/loader2/Plugin;->attach(Landroid/content/Context;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)V

    .line 1096
    invoke-virtual {p0, p1, p3, p4}, Lcom/qihoo360/loader2/PmBase;->loadPlugin(Lcom/qihoo360/loader2/Plugin;IZ)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    return-object p1
.end method

.method final loadResourcePlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;
    .locals 2

    .line 1079
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/loader2/Plugin;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmBase;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-static {v0, p1, v1, p2}, Lcom/qihoo360/loader2/Plugin;->cloneAndReattach(Landroid/content/Context;Lcom/qihoo360/loader2/Plugin;Ljava/lang/ClassLoader;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    const/4 p2, 0x1

    .line 1080
    invoke-virtual {p0, p1, p2, p2}, Lcom/qihoo360/loader2/PmBase;->loadPlugin(Lcom/qihoo360/loader2/Plugin;IZ)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    return-object p1
.end method

.method final lookupPlugin(Ljava/lang/ClassLoader;)Lcom/qihoo360/loader2/Plugin;
    .locals 3

    .line 1114
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/loader2/Plugin;

    if-eqz v1, :cond_0

    .line 1115
    invoke-virtual {v1}, Lcom/qihoo360/loader2/Plugin;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    if-ne v2, p1, :cond_0

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method final newPluginFound(Lcom/qihoo360/replugin/model/PluginInfo;Z)V
    .locals 3

    .line 1167
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginTable;->updatePlugin(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 1170
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/PmBase;->insertNewPlugin(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 1173
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result v1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Lcom/qihoo360/loader2/PluginStatusController;->setStatus(Ljava/lang/String;II)V

    .line 1175
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1176
    iget-boolean p2, p0, Lcom/qihoo360/loader2/PmBase;->mNeedRestart:Z

    .line 1181
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "p.m. n p f n="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " b1="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, " b2="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v1, p0, Lcom/qihoo360/loader2/PmBase;->mNeedRestart:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1185
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.qihoo360.loader2.ACTION_NEW_PLUGIN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "plugin_info"

    .line 1186
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    const-string p1, "persist_need_restart"

    .line 1187
    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1188
    iget-boolean p1, p0, Lcom/qihoo360/loader2/PmBase;->mNeedRestart:Z

    const-string p2, "self_need_restart"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 1189
    iget-object p1, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    invoke-static {p1}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    return-void
.end method

.method final pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 1193
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 1194
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Clear plugin cache. pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1198
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1199
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mPlugins:Ljava/util/Map;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1203
    :cond_1
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginTable;->removeInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 1206
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->clearCachedPlugin(Ljava/lang/String;)V

    return-void
.end method

.method final removeDynamicClass(Ljava/lang/String;)V
    .locals 1

    .line 557
    iget-object v0, p0, Lcom/qihoo360/loader2/PmBase;->mDynamicClasses:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method final startPluginProcessLocked(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
    .locals 8

    const-string v0, " index="

    .line 1210
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v2, "ws001"

    if-eqz v1, :cond_0

    .line 1211
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "start plugin process: plugin="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " info="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 1216
    :cond_0
    iget v1, p3, Lcom/qihoo360/loader2/PluginBinderInfo;->request:I

    const/4 v3, 0x1

    const/4 v4, -0x1

    const/high16 v5, -0x80000000

    if-ne v1, v3, :cond_1

    if-ne p2, v5, :cond_1

    move p2, v4

    .line 1221
    :cond_1
    iget v1, p3, Lcom/qihoo360/loader2/PluginBinderInfo;->request:I

    const/4 v3, 0x4

    if-ne v1, v3, :cond_2

    if-ne p2, v5, :cond_2

    move p2, v4

    :cond_2
    const-wide/16 v6, 0x4268

    .line 1229
    invoke-static {v6, v7}, Lcom/qihoo360/loader2/StubProcessManager;->schedulePluginProcessLoop(J)V

    .line 1232
    invoke-static {p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->probePluginClient(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v1

    if-eqz v1, :cond_4

    .line 1234
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_3

    .line 1235
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "start plugin process: probe client ok, already running, plugin="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " client="

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object v1

    .line 1243
    :cond_4
    :try_start_0
    invoke-static {p1, p2}, Lcom/qihoo360/loader2/PluginProcessMain;->allocProcess(Ljava/lang/String;I)I

    move-result v5

    .line 1244
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_5

    .line 1245
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "start plugin process: alloc process ok, plugin="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 1249
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "a.p.p: "

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_5
    :goto_0
    const/4 v1, 0x0

    if-eq v5, v4, :cond_6

    .line 1254
    invoke-static {v5}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->isCustomPluginProcess(I)Z

    move-result v3

    if-nez v3, :cond_6

    .line 1255
    invoke-static {v5}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess(I)Z

    move-result v3

    if-nez v3, :cond_6

    return-object v1

    .line 1260
    :cond_6
    iget-object v3, p0, Lcom/qihoo360/loader2/PmBase;->mContext:Landroid/content/Context;

    invoke-static {v3, v5}, Lcom/qihoo360/loader2/PluginProviderStub;->proxyStartPluginProcess(Landroid/content/Context;I)Z

    move-result v3

    .line 1261
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_7

    .line 1262
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "start plugin process: start process ok, plugin="

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v2, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    if-nez v3, :cond_8

    return-object v1

    .line 1269
    :cond_8
    invoke-static {p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->probePluginClient(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p2

    if-nez p2, :cond_9

    const-string p1, "spp pc n"

    .line 1272
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v1

    .line 1277
    :cond_9
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_a

    .line 1278
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "start plugin process: probe client ok, plugin="

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p1, p3, Lcom/qihoo360/loader2/PluginBinderInfo;->index:I

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return-object p2
.end method

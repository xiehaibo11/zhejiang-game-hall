.class public Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;
.super Ljava/lang/Object;
.source "PluginServiceServer.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$Stub;
    }
.end annotation


# static fields
.field private static final LOCKER:[B

.field private static final TAG:Ljava/lang/String; = "PluginServiceServer"

.field private static final WHAT_ON_START_COMMAND:I = 0x1


# instance fields
.field private mAttachBaseContextMethod:Ljava/lang/reflect/Method;

.field private final mContext:Landroid/content/Context;

.field private mHandler:Landroid/os/Handler;

.field final mProcesses:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Ljava/lang/Integer;",
            "Lcom/qihoo360/replugin/component/service/server/ProcessRecord;",
            ">;"
        }
    .end annotation
.end field

.field final mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/os/IBinder;",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;",
            ">;>;"
        }
    .end annotation
.end field

.field private final mServicesByIntent:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/Intent$FilterComparison;",
            "Lcom/qihoo360/replugin/component/service/server/ServiceRecord;",
            ">;"
        }
    .end annotation
.end field

.field private final mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/ComponentName;",
            "Lcom/qihoo360/replugin/component/service/server/ServiceRecord;",
            ">;"
        }
    .end annotation
.end field

.field private final mStub:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$Stub;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 71
    sput-object v0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->LOCKER:[B

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 122
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 87
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mProcesses:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 93
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 95
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 96
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByIntent:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 98
    new-instance v0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$1;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$1;-><init>(Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mHandler:Landroid/os/Handler;

    .line 123
    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mContext:Landroid/content/Context;

    .line 124
    new-instance p1, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$Stub;

    invoke-direct {p1, p0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$Stub;-><init>(Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;)V

    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mStub:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$Stub;

    return-void
.end method

.method static synthetic access$000(Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)Z
    .locals 0

    .line 67
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->installServiceLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)Z

    move-result p0

    return p0
.end method

.method static synthetic access$100()[B
    .locals 1

    .line 67
    sget-object v0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->LOCKER:[B

    return-object v0
.end method

.method static synthetic access$200(Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;)Ljava/lang/String;
    .locals 0

    .line 67
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->dump()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private attachBaseContextLocked(Landroid/content/ContextWrapper;Landroid/content/Context;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/NoSuchMethodException;,
            Ljava/lang/reflect/InvocationTargetException;,
            Ljava/lang/IllegalAccessException;,
            Ljava/lang/NoSuchFieldException;
        }
    .end annotation

    .line 531
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mAttachBaseContextMethod:Ljava/lang/reflect/Method;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-nez v0, :cond_0

    .line 532
    const-class v0, Landroid/content/ContextWrapper;

    new-array v3, v2, [Ljava/lang/Class;

    const-class v4, Landroid/content/Context;

    aput-object v4, v3, v1

    const-string v4, "attachBaseContext"

    invoke-virtual {v0, v4, v3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mAttachBaseContextMethod:Ljava/lang/reflect/Method;

    .line 533
    invoke-virtual {v0, v2}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 535
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mAttachBaseContextMethod:Ljava/lang/reflect/Method;

    new-array v3, v2, [Ljava/lang/Object;

    aput-object p2, v3, v1

    invoke-virtual {v0, p1, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    .line 538
    const-class v0, Landroid/app/Service;

    const-string v1, "mApplication"

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 540
    invoke-virtual {v0, v2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 541
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Ljava/lang/reflect/Field;->set(Ljava/lang/Object;Ljava/lang/Object;)V

    :cond_1
    return-void
.end method

.method private callConnectedMethodLocked(Lcom/qihoo360/loader2/mgr/IServiceConnection;Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 466
    :try_start_0
    invoke-interface {p1, p2, p3}, Lcom/qihoo360/loader2/mgr/IServiceConnection;->connected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 468
    sget-boolean p2, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    if-eqz p2, :cond_0

    .line 469
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method private cloneIntentLocked(Landroid/content/Intent;)Landroid/content/Intent;
    .locals 1

    .line 332
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0, p1}, Landroid/content/Intent;-><init>(Landroid/content/Intent;)V

    return-object v0
.end method

.method private dump()Ljava/lang/String;
    .locals 6

    .line 645
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_1

    .line 649
    :cond_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    .line 652
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 653
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/content/ComponentName;

    .line 654
    invoke-interface {v2}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    .line 656
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    .line 658
    invoke-virtual {v3}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v3

    const-string v5, "className"

    invoke-static {v4, v5, v3}, Lcom/qihoo360/replugin/helper/JSONHelper;->putNoThrows(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 659
    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->getServiceInfo()Landroid/content/pm/ServiceInfo;

    move-result-object v3

    iget-object v3, v3, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    const-string v5, "process"

    invoke-static {v4, v5, v3}, Lcom/qihoo360/replugin/helper/JSONHelper;->putNoThrows(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 660
    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->getPlugin()Ljava/lang/String;

    move-result-object v3

    const-string v5, "plugin"

    invoke-static {v4, v5, v3}, Lcom/qihoo360/replugin/helper/JSONHelper;->putNoThrows(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 661
    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->getPitComponentName()Landroid/content/ComponentName;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v2

    const-string v3, "pitClassName"

    invoke-static {v4, v3, v2}, Lcom/qihoo360/replugin/helper/JSONHelper;->putNoThrows(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V

    .line 663
    invoke-virtual {v0, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 666
    :cond_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_2
    :goto_1
    const/4 v0, 0x0

    return-object v0
.end method

.method private getPitComponentName()Landroid/content/ComponentName;
    .locals 2

    .line 596
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    .line 597
    invoke-static {v0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getProcessInt(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 599
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mContext:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/component/service/server/PluginPitService;->makeComponentName(Landroid/content/Context;I)Landroid/content/ComponentName;

    move-result-object v0

    return-object v0
.end method

.method private getServiceLocked(Landroid/content/Intent;)Lcom/qihoo360/replugin/component/service/server/ServiceRecord;
    .locals 1

    .line 337
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p1

    .line 338
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    return-object p1
.end method

.method private insertConnectionToRecords(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;Lcom/qihoo360/loader2/mgr/IServiceConnection;I)V
    .locals 1

    .line 217
    new-instance v0, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;

    invoke-direct {v0, p2, p3, p4}, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;-><init>(Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;Lcom/qihoo360/loader2/mgr/IServiceConnection;I)V

    .line 218
    invoke-interface {p3}, Lcom/qihoo360/loader2/mgr/IServiceConnection;->asBinder()Landroid/os/IBinder;

    move-result-object p3

    .line 221
    iget-object p4, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p4, p3}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Ljava/util/ArrayList;

    if-nez p4, :cond_0

    .line 223
    new-instance p4, Ljava/util/ArrayList;

    invoke-direct {p4}, Ljava/util/ArrayList;-><init>()V

    .line 224
    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p1, p3, p4}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 226
    :cond_0
    invoke-virtual {p4, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 229
    iget-object p1, p2, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArraySet;

    invoke-virtual {p1, v0}, Lcom/qihoo360/replugin/utils/basic/ArraySet;->add(Ljava/lang/Object;)Z

    .line 232
    iget-object p1, p2, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->client:Lcom/qihoo360/replugin/component/service/server/ProcessRecord;

    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->connections:Ljava/util/ArrayList;

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 235
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p1, p3}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/ArrayList;

    if-nez p1, :cond_1

    .line 237
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 238
    iget-object p2, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p2, p3, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 240
    :cond_1
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method private installServiceIfNeededLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)Z
    .locals 3

    .line 391
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->service:Landroid/app/Service;

    if-eqz v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 v0, 0x0

    .line 396
    :try_start_0
    new-instance v1, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$2;

    invoke-direct {v1, p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$2;-><init>(Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)V

    const/16 p1, 0x1770

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/base/ThreadUtils;->syncToMainThread(Ljava/util/concurrent/Callable;I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Boolean;

    if-nez p1, :cond_1

    return v0

    .line 406
    :cond_1
    invoke-virtual {p1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 408
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_2

    const-string v1, "ws001"

    const-string v2, "pss.isinl e:"

    .line 409
    invoke-static {v1, v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return v0
.end method

.method private installServiceLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)Z
    .locals 6

    .line 418
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->plugin:Ljava/lang/String;

    invoke-static {v0}, Lcom/qihoo360/i/Factory;->queryPluginContext(Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "PluginServiceServer"

    const/4 v2, 0x0

    if-nez v0, :cond_1

    .line 420
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 421
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "installServiceLocked(): Fetch Context Error! pn="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->plugin:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v2

    .line 425
    :cond_1
    invoke-virtual {v0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    const-string v4, "ws001"

    if-nez v3, :cond_2

    .line 428
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "psm.is: cl n "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->className:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v2

    .line 436
    :cond_2
    :try_start_0
    iget-object v5, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->serviceInfo:Landroid/content/pm/ServiceInfo;

    iget-object v5, v5, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/app/Service;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 446
    :try_start_1
    invoke-direct {p0, v3, v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->attachBaseContextLocked(Landroid/content/ContextWrapper;Landroid/content/Context;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 453
    invoke-virtual {v3}, Landroid/app/Service;->onCreate()V

    .line 454
    iput-object v3, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->service:Landroid/app/Service;

    .line 457
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->getPitComponentName()Landroid/content/ComponentName;

    move-result-object v0

    .line 458
    iput-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->pitComponentName:Landroid/content/ComponentName;

    .line 459
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->startPitService(Landroid/content/ComponentName;)V

    const/4 p1, 0x1

    return p1

    :catchall_0
    move-exception p1

    const-string v0, "psm.is: abc e"

    .line 449
    invoke-static {v4, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return v2

    :catchall_1
    move-exception v0

    .line 439
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "isl: ni f "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->plugin:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return v2
.end method

.method private recycleServiceIfNeededLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)V
    .locals 3

    .line 478
    iget-boolean v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->startRequested:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_1

    .line 479
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 480
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PSM.recycleServiceIfNeededLocked(): Not Recycle because startRequested is true! sr="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 485
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->hasAutoCreateConnections()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 487
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 488
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PSM.recycleServiceIfNeededLocked(): Not Recycle because bindingCount > 0! sr="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void

    .line 493
    :cond_3
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->recycleServiceLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)V

    return-void
.end method

.method private recycleServiceLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)V
    .locals 7

    .line 499
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    const-string v0, "ws001"

    const-string v1, "PSM.recycleServiceLocked(): Recycle Now!"

    .line 500
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 504
    :cond_0
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->size()I

    move-result v0

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    :goto_0
    if-ltz v0, :cond_2

    .line 505
    iget-object v2, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->valueAt(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/ArrayList;

    const/4 v3, 0x0

    .line 506
    :goto_1
    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v4

    if-ge v3, v4, :cond_1

    .line 507
    invoke-virtual {v2, v3}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;

    .line 510
    iput-boolean v1, v4, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;->serviceDead:Z

    .line 511
    iget-object v4, v4, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;->conn:Lcom/qihoo360/loader2/mgr/IServiceConnection;

    iget-object v5, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->name:Landroid/content/ComponentName;

    const/4 v6, 0x0

    invoke-direct {p0, v4, v5, v6}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->callConnectedMethodLocked(Lcom/qihoo360/loader2/mgr/IServiceConnection;Landroid/content/ComponentName;Landroid/os/IBinder;)V

    add-int/lit8 v3, v3, 0x1

    goto :goto_1

    :cond_1
    add-int/lit8 v0, v0, -0x1

    goto :goto_0

    .line 514
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    iget-object v1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->name:Landroid/content/ComponentName;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 515
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByIntent:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    iget-object v1, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->intent:Landroid/content/Intent$FilterComparison;

    invoke-virtual {v0, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 517
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->bindings:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 518
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->bindings:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->clear()V

    .line 521
    :cond_3
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->service:Landroid/app/Service;

    invoke-virtual {v0}, Landroid/app/Service;->onDestroy()V

    .line 524
    invoke-direct {p0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->getPitComponentName()Landroid/content/ComponentName;

    move-result-object v0

    .line 525
    iput-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->pitComponentName:Landroid/content/ComponentName;

    .line 526
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->stopPitService(Landroid/content/ComponentName;)V

    return-void
.end method

.method private removeConnectionLocked(Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;)V
    .locals 5

    .line 268
    iget-object v0, p1, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;->conn:Lcom/qihoo360/loader2/mgr/IServiceConnection;

    invoke-interface {v0}, Lcom/qihoo360/loader2/mgr/IServiceConnection;->asBinder()Landroid/os/IBinder;

    move-result-object v0

    .line 269
    iget-object v1, p1, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;->binding:Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;

    .line 270
    iget-object v2, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->service:Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    .line 273
    iget-object v3, v2, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/ArrayList;

    if-eqz v3, :cond_0

    .line 275
    invoke-virtual {v3, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 276
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-nez v3, :cond_0

    .line 277
    iget-object v3, v2, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 281
    :cond_0
    iget-object v3, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArraySet;

    invoke-virtual {v3, p1}, Lcom/qihoo360/replugin/utils/basic/ArraySet;->remove(Ljava/lang/Object;)Z

    .line 284
    iget-object v3, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->client:Lcom/qihoo360/replugin/component/service/server/ProcessRecord;

    iget-object v3, v3, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->connections:Ljava/util/ArrayList;

    invoke-virtual {v3, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 287
    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/ArrayList;

    if-eqz v3, :cond_1

    .line 289
    invoke-virtual {v3, p1}, Ljava/util/ArrayList;->remove(Ljava/lang/Object;)Z

    .line 290
    invoke-virtual {v3}, Ljava/util/ArrayList;->size()I

    move-result v3

    if-nez v3, :cond_1

    .line 291
    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v3, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 296
    :cond_1
    iget-object v0, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->connections:Lcom/qihoo360/replugin/utils/basic/ArraySet;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArraySet;->size()I

    move-result v0

    if-nez v0, :cond_2

    .line 297
    iget-object v0, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-object v0, v0, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->apps:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    iget-object v3, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->client:Lcom/qihoo360/replugin/component/service/server/ProcessRecord;

    invoke-virtual {v0, v3}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 301
    :cond_2
    iget-boolean v0, p1, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;->serviceDead:Z

    if-eqz v0, :cond_3

    return-void

    .line 306
    :cond_3
    iget-object v0, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-object v0, v0, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->apps:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->size()I

    move-result v0

    const-string v3, "ws001"

    if-nez v0, :cond_5

    iget-object v0, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-boolean v0, v0, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->hasBound:Z

    if-eqz v0, :cond_5

    .line 307
    iget-object v0, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    const/4 v4, 0x0

    iput-boolean v4, v0, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->hasBound:Z

    .line 308
    iget-object v0, v2, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->service:Landroid/app/Service;

    iget-object v1, v1, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-object v1, v1, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->intent:Landroid/content/Intent$FilterComparison;

    invoke-virtual {v1}, Landroid/content/Intent$FilterComparison;->getIntent()Landroid/content/Intent;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/app/Service;->onUnbind(Landroid/content/Intent;)Z

    .line 309
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_4

    .line 310
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PSM.removeConnectionLocked(): boundRef is 0, call onUnbind(), sr="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 314
    :cond_4
    iget p1, p1, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;->flags:I

    and-int/lit8 p1, p1, 0x1

    if-eqz p1, :cond_6

    .line 315
    invoke-direct {p0, v2}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->recycleServiceIfNeededLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)V

    goto :goto_0

    .line 318
    :cond_5
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_6

    .line 319
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PSM.removeConnectionLocked(): Not unbind, sr="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    :goto_0
    return-void
.end method

.method private retrieveProcessRecordLocked(Landroid/os/Messenger;)Lcom/qihoo360/replugin/component/service/server/ProcessRecord;
    .locals 3

    .line 585
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v0

    .line 586
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mProcesses:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;

    if-nez v1, :cond_0

    .line 588
    new-instance v1, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;

    invoke-direct {v1, v0, p1}, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;-><init>(ILandroid/os/Messenger;)V

    .line 589
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mProcesses:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {p1, v0, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v1
.end method

.method private retrieveServiceLocked(Landroid/content/Intent;)Lcom/qihoo360/replugin/component/service/server/ServiceRecord;
    .locals 6

    .line 343
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    .line 344
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v1, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    if-eqz v1, :cond_0

    return-object v1

    .line 349
    :cond_0
    new-instance v1, Landroid/content/Intent$FilterComparison;

    invoke-direct {v1, p1}, Landroid/content/Intent$FilterComparison;-><init>(Landroid/content/Intent;)V

    .line 350
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByIntent:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p1, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    if-eqz p1, :cond_1

    return-object p1

    .line 354
    :cond_1
    invoke-virtual {v0}, Landroid/content/ComponentName;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 355
    invoke-virtual {v0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v2

    .line 358
    invoke-static {p1}, Lcom/qihoo360/replugin/RePlugin;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v3

    const/4 v4, 0x0

    if-nez v3, :cond_2

    .line 360
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "psm.is: p n ex "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v4

    .line 366
    :cond_2
    invoke-static {p1}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v2

    const-string v3, "PluginServiceServer"

    if-nez v2, :cond_4

    .line 368
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_3

    .line 369
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "installServiceLocked(): Fetch Component List Error! pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object v4

    .line 373
    :cond_4
    invoke-virtual {v0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Lcom/qihoo360/replugin/component/ComponentList;->getService(Ljava/lang/String;)Landroid/content/pm/ServiceInfo;

    move-result-object v2

    if-nez v2, :cond_6

    .line 375
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_5

    .line 376
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "installServiceLocked(): Not register! pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v4

    .line 383
    :cond_6
    new-instance p1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    invoke-direct {p1, v0, v1, v2}, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;-><init>(Landroid/content/ComponentName;Landroid/content/Intent$FilterComparison;Landroid/content/pm/ServiceInfo;)V

    .line 384
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2, v0, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 385
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByIntent:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0, v1, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object p1
.end method

.method private startPitService(Landroid/content/ComponentName;)V
    .locals 2

    .line 606
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 607
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startPitService: Start "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginServiceServer"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 610
    :cond_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 611
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 614
    :try_start_0
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mContext:Landroid/content/Context;

    invoke-virtual {p1, v0}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 617
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private stopPitService(Landroid/content/ComponentName;)V
    .locals 2

    .line 624
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 625
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "stopPitService: Stop "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginServiceServer"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 628
    :cond_0
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 629
    invoke-virtual {v0, p1}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 631
    :try_start_0
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mContext:Landroid/content/Context;

    invoke-virtual {p1, v0}, Landroid/content/Context;->stopService(Landroid/content/Intent;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 634
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method


# virtual methods
.method bindServiceLocked(Landroid/content/Intent;Lcom/qihoo360/loader2/mgr/IServiceConnection;ILandroid/os/Messenger;)I
    .locals 4

    .line 178
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->cloneIntentLocked(Landroid/content/Intent;)Landroid/content/Intent;

    move-result-object p1

    .line 179
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    .line 180
    invoke-direct {p0, p4}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->retrieveProcessRecordLocked(Landroid/os/Messenger;)Lcom/qihoo360/replugin/component/service/server/ProcessRecord;

    move-result-object p4

    .line 181
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->retrieveServiceLocked(Landroid/content/Intent;)Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    move-result-object v1

    const/4 v2, 0x0

    if-nez v1, :cond_0

    return v2

    .line 185
    :cond_0
    invoke-direct {p0, v1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->installServiceIfNeededLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)Z

    move-result v3

    if-nez v3, :cond_1

    return v2

    .line 190
    :cond_1
    invoke-virtual {v1, p1, p4}, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->retrieveAppBindingLocked(Landroid/content/Intent;Lcom/qihoo360/replugin/component/service/server/ProcessRecord;)Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;

    move-result-object p4

    .line 191
    invoke-direct {p0, v1, p4, p2, p3}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->insertConnectionToRecords(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;Lcom/qihoo360/loader2/mgr/IServiceConnection;I)V

    .line 194
    iget-object v2, p4, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-boolean v2, v2, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->hasBound:Z

    const/4 v3, 0x1

    if-eqz v2, :cond_2

    .line 197
    iget-object p1, p4, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-object p1, p1, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->binder:Landroid/os/IBinder;

    invoke-direct {p0, p2, v0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->callConnectedMethodLocked(Lcom/qihoo360/loader2/mgr/IServiceConnection;Landroid/content/ComponentName;Landroid/os/IBinder;)V

    goto :goto_0

    .line 200
    :cond_2
    iget-object v2, p4, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iget-object v2, v2, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->apps:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->size()I

    move-result v2

    if-lez v2, :cond_3

    .line 201
    iget-object v2, v1, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->service:Landroid/app/Service;

    invoke-virtual {v2, p1}, Landroid/app/Service;->onBind(Landroid/content/Intent;)Landroid/os/IBinder;

    move-result-object p1

    .line 202
    iget-object v2, p4, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iput-boolean v3, v2, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->hasBound:Z

    .line 203
    iget-object v2, p4, Lcom/qihoo360/replugin/component/service/server/ProcessBindRecord;->intent:Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;

    iput-object p1, v2, Lcom/qihoo360/replugin/component/service/server/IntentBindRecord;->binder:Landroid/os/IBinder;

    if-eqz p1, :cond_3

    .line 206
    invoke-direct {p0, p2, v0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->callConnectedMethodLocked(Lcom/qihoo360/loader2/mgr/IServiceConnection;Landroid/content/ComponentName;Landroid/os/IBinder;)V

    .line 210
    :cond_3
    :goto_0
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    .line 211
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PSM.bindService(): Bind! inb="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, "; fl="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "; sr="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ws001"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return v3
.end method

.method public getService()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 1

    .line 325
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mStub:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer$Stub;

    return-object v0
.end method

.method startServiceLocked(Landroid/content/Intent;Landroid/os/Messenger;)Landroid/content/ComponentName;
    .locals 4

    .line 129
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->cloneIntentLocked(Landroid/content/Intent;)Landroid/content/Intent;

    move-result-object p1

    .line 130
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p2

    .line 132
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->retrieveServiceLocked(Landroid/content/Intent;)Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 136
    :cond_0
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->installServiceIfNeededLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)Z

    move-result v2

    if-nez v2, :cond_1

    return-object v1

    :cond_1
    const/4 v1, 0x1

    .line 140
    iput-boolean v1, v0, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->startRequested:Z

    .line 143
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServicesByName:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2, p2, v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 145
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_2

    .line 146
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PSM.startService(): Start! in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, "; sr="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "ws001"

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 150
    :cond_2
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mHandler:Landroid/os/Handler;

    invoke-virtual {v2, v1}, Landroid/os/Handler;->obtainMessage(I)Landroid/os/Message;

    move-result-object v1

    .line 151
    new-instance v2, Landroid/os/Bundle;

    invoke-direct {v2}, Landroid/os/Bundle;-><init>()V

    const-string v3, "intent"

    .line 152
    invoke-virtual {v2, v3, p1}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    .line 153
    invoke-virtual {v1, v2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 154
    iput-object v0, v1, Landroid/os/Message;->obj:Ljava/lang/Object;

    .line 155
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mHandler:Landroid/os/Handler;

    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    return-object p2
.end method

.method stopServiceLocked(Landroid/content/Intent;)I
    .locals 3

    .line 162
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->cloneIntentLocked(Landroid/content/Intent;)Landroid/content/Intent;

    move-result-object p1

    .line 163
    invoke-direct {p0, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->getServiceLocked(Landroid/content/Intent;)Lcom/qihoo360/replugin/component/service/server/ServiceRecord;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return v1

    .line 167
    :cond_0
    iput-boolean v1, v0, Lcom/qihoo360/replugin/component/service/server/ServiceRecord;->startRequested:Z

    .line 168
    invoke-direct {p0, v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->recycleServiceIfNeededLocked(Lcom/qihoo360/replugin/component/service/server/ServiceRecord;)V

    .line 170
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    .line 171
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "PSM.stopService(): Stop! in="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "; sr="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p1, 0x1

    return p1
.end method

.method unbindServiceLocked(Lcom/qihoo360/loader2/mgr/IServiceConnection;)Z
    .locals 3

    .line 246
    invoke-interface {p1}, Lcom/qihoo360/loader2/mgr/IServiceConnection;->asBinder()Landroid/os/IBinder;

    move-result-object p1

    .line 247
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->mServiceConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/ArrayList;

    const/4 v0, 0x0

    if-nez p1, :cond_1

    .line 249
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    const-string p1, "ws001"

    const-string v1, "PSM.unbindService(): clist is null!"

    .line 250
    invoke-static {p1, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v0

    .line 254
    :cond_1
    :goto_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lez v1, :cond_2

    .line 255
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;

    .line 256
    invoke-direct {p0, v1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->removeConnectionLocked(Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;)V

    .line 257
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-lez v2, :cond_1

    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-ne v2, v1, :cond_1

    .line 259
    invoke-virtual {p1, v0}, Ljava/util/ArrayList;->remove(I)Ljava/lang/Object;

    goto :goto_0

    :cond_2
    const/4 p1, 0x1

    return p1
.end method

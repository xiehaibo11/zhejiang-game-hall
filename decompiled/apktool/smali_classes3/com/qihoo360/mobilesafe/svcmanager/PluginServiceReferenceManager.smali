.class Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;
.super Ljava/lang/Object;
.source "PluginServiceReferenceManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;
    }
.end annotation


# static fields
.field private static final DEBUG:Z

.field private static final TAG:Ljava/lang/String;

.field private static sAppContext:Landroid/content/Context;

.field private static sMonitorThread:Ljava/lang/Thread;

.field private static sRefList:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;",
            ">;"
        }
    .end annotation
.end field

.field private static sRefQueue:Ljava/lang/ref/ReferenceQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/ReferenceQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 37
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    sput-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "PluginServiceReferenceManager"

    goto :goto_0

    .line 39
    :cond_0
    const-class v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->TAG:Ljava/lang/String;

    const/4 v0, 0x0

    .line 54
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sAppContext:Landroid/content/Context;

    .line 56
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sput-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefList:Ljava/util/ArrayList;

    .line 58
    new-instance v1, Ljava/lang/ref/ReferenceQueue;

    invoke-direct {v1}, Ljava/lang/ref/ReferenceQueue;-><init>()V

    sput-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefQueue:Ljava/lang/ref/ReferenceQueue;

    .line 60
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sMonitorThread:Ljava/lang/Thread;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Ljava/util/ArrayList;
    .locals 1

    .line 35
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefList:Ljava/util/ArrayList;

    return-object v0
.end method

.method static synthetic access$100()Ljava/lang/ref/ReferenceQueue;
    .locals 1

    .line 35
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefQueue:Ljava/lang/ref/ReferenceQueue;

    return-object v0
.end method

.method static synthetic access$200()Z
    .locals 1

    .line 35
    sget-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->DEBUG:Z

    return v0
.end method

.method static synthetic access$300()Ljava/lang/String;
    .locals 1

    .line 35
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->TAG:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic access$400()Landroid/content/Context;
    .locals 1

    .line 35
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sAppContext:Landroid/content/Context;

    return-object v0
.end method

.method static synthetic access$502(Ljava/lang/Thread;)Ljava/lang/Thread;
    .locals 0

    .line 35
    sput-object p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sMonitorThread:Ljava/lang/Thread;

    return-object p0
.end method

.method static declared-synchronized onPluginServiceObtained(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/os/IBinder;)V
    .locals 4

    const-class v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;

    monitor-enter v0

    .line 66
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sAppContext:Landroid/content/Context;

    .line 68
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefList:Ljava/util/ArrayList;

    monitor-enter p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 69
    :try_start_1
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefList:Ljava/util/ArrayList;

    new-instance v2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;

    sget-object v3, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sRefQueue:Ljava/lang/ref/ReferenceQueue;

    invoke-direct {v2, p1, p2, p3, v3}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$ServicePhantomRef;-><init>(Ljava/lang/String;Ljava/lang/String;Landroid/os/IBinder;Ljava/lang/ref/ReferenceQueue;)V

    invoke-virtual {v1, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 70
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 72
    :try_start_2
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sMonitorThread:Ljava/lang/Thread;

    if-nez p0, :cond_0

    .line 73
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->startMonitoring()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    .line 75
    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    .line 70
    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    throw p1
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static declared-synchronized startMonitoring()V
    .locals 3

    const-class v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;

    monitor-enter v0

    .line 81
    :try_start_0
    new-instance v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$1;

    invoke-direct {v1}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager$1;-><init>()V

    sput-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sMonitorThread:Ljava/lang/Thread;

    .line 128
    sget-boolean v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 129
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->TAG:Ljava/lang/String;

    const-string v2, "Start monitoring..."

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 131
    :cond_0
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sMonitorThread:Ljava/lang/Thread;

    const/4 v2, 0x5

    invoke-virtual {v1, v2}, Ljava/lang/Thread;->setPriority(I)V

    .line 132
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->sMonitorThread:Ljava/lang/Thread;

    invoke-virtual {v1}, Ljava/lang/Thread;->start()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 133
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

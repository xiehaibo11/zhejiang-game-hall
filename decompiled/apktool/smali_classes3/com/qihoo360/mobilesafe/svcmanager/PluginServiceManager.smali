.class Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;
.super Ljava/lang/Object;
.source "PluginServiceManager.java"


# static fields
.field private static final DEBUG:Z

.field private static final TAG:Ljava/lang/String;

.field private static sRecordMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 41
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    sput-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "PluginServiceManager"

    goto :goto_0

    .line 43
    :cond_0
    const-class v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->TAG:Ljava/lang/String;

    .line 45
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    return-void
.end method

.method constructor <init>()V
    .locals 0

    .line 39
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static generateMapKey(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 149
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "-"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static getPluginService(Ljava/lang/String;Ljava/lang/String;ILandroid/os/IBinder;)Landroid/os/IBinder;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 59
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    monitor-enter v0

    .line 60
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->generateMapKey(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 61
    sget-object v2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    if-eqz v2, :cond_0

    .line 62
    invoke-virtual {v2}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->isServiceAlive()Z

    move-result v3

    if-nez v3, :cond_0

    const/4 v2, 0x0

    :cond_0
    if-nez v2, :cond_1

    .line 66
    new-instance v2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    invoke-direct {v2, p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 67
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    invoke-interface {p0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    :cond_1
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 71
    invoke-virtual {v2, p2, p3}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->getService(ILandroid/os/IBinder;)Landroid/os/IBinder;

    move-result-object p0

    return-object p0

    :catchall_0
    move-exception p0

    .line 69
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p0
.end method

.method static onRefProcessDied(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 3

    .line 106
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    monitor-enter v0

    .line 107
    :try_start_0
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    invoke-static {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->generateMapKey(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    if-eqz p0, :cond_1

    .line 109
    invoke-virtual {p0, p2}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->refProcessDied(I)I

    move-result p1

    .line 111
    sget-boolean p2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->DEBUG:Z

    if-eqz p2, :cond_0

    .line 112
    sget-object p2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[onRefProcessDied] remaining ref count: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-gtz p1, :cond_1

    .line 116
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->removePluginServiceRecord(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;)V

    .line 119
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method static onRefReleased(Ljava/lang/String;Ljava/lang/String;I)V
    .locals 3

    .line 82
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    monitor-enter v0

    .line 83
    :try_start_0
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    invoke-static {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->generateMapKey(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-interface {v1, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;

    if-eqz p0, :cond_1

    .line 85
    invoke-virtual {p0, p2}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->decrementProcessRef(I)I

    move-result p1

    .line 87
    sget-boolean p2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->DEBUG:Z

    if-eqz p2, :cond_0

    .line 88
    sget-object p2, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[onRefReleased] remaining ref count: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-gtz p1, :cond_1

    .line 92
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->removePluginServiceRecord(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;)V

    .line 95
    :cond_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method private static removePluginServiceRecord(Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;)V
    .locals 3

    .line 126
    sget-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 127
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[removePluginServiceRecord]: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mPluginName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ", "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mServiceName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 130
    :cond_0
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    monitor-enter v0

    .line 131
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mPluginName:Ljava/lang/String;

    iget-object v2, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mServiceName:Ljava/lang/String;

    invoke-static {v1, v2}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->generateMapKey(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 136
    iget-object v2, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mPluginBinder:Lcom/qihoo360/loader2/MP$PluginBinder;

    if-nez v2, :cond_1

    const-string p0, "ws001"

    const-string v1, "psm.rpsr: mpb nil"

    .line 138
    invoke-static {p0, v1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 140
    monitor-exit v0

    return-void

    .line 142
    :cond_1
    iget-object p0, p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceRecord;->mPluginBinder:Lcom/qihoo360/loader2/MP$PluginBinder;

    invoke-static {p0}, Lcom/qihoo360/loader2/MP;->releasePluginBinder(Lcom/qihoo360/loader2/MP$PluginBinder;)V

    .line 144
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->sRecordMap:Ljava/util/Map;

    invoke-interface {p0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 145
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.class public final Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;
.super Ljava/lang/Object;
.source "QihooServiceManager.java"


# static fields
.field private static final DEBUG:Z

.field private static final PROCESS_DEATH_AGENT:Landroid/os/IBinder;

.field private static final TAG:Ljava/lang/String;

.field private static sCache:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/ref/SoftReference<",
            "Landroid/os/IBinder;",
            ">;>;"
        }
    .end annotation
.end field

.field private static sServerChannel:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

.field private static sServiceChannelUri:Landroid/net/Uri;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 45
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    sput-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "QihooServiceManager"

    goto :goto_0

    .line 47
    :cond_0
    const-class v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const/4 v0, 0x0

    .line 49
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServiceChannelUri:Landroid/net/Uri;

    .line 55
    new-instance v0, Landroid/os/Binder;

    invoke-direct {v0}, Landroid/os/Binder;-><init>()V

    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->PROCESS_DEATH_AGENT:Landroid/os/IBinder;

    .line 58
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sCache:Ljava/util/Map;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addService(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)Z
    .locals 0

    .line 131
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 137
    :cond_0
    :try_start_0
    invoke-interface {p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->addService(Ljava/lang/String;Landroid/os/IBinder;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 139
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p1, :cond_1

    .line 140
    sget-object p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string p2, "Add service failed..."

    invoke-static {p1, p2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static addService(Landroid/content/Context;Ljava/lang/String;Lcom/qihoo360/replugin/IBinderGetter;)Z
    .locals 0

    .line 154
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 160
    :cond_0
    :try_start_0
    invoke-interface {p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->addServiceDelayed(Ljava/lang/String;Lcom/qihoo360/replugin/IBinderGetter;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 162
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p1, :cond_1

    .line 163
    sget-object p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string p2, "Add service failed..."

    invoke-static {p1, p2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

.method public static getPluginService(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 3

    .line 202
    invoke-static {p0, p2}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getService(Landroid/content/Context;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 210
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object v1

    if-nez v1, :cond_1

    const/4 p0, 0x0

    return-object p0

    .line 220
    :cond_1
    :try_start_0
    sget-object v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->PROCESS_DEATH_AGENT:Landroid/os/IBinder;

    invoke-interface {v1, p1, p2, v2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->getPluginService(Ljava/lang/String;Ljava/lang/String;Landroid/os/IBinder;)Landroid/os/IBinder;

    move-result-object v0

    .line 221
    invoke-static {p0, p1, p2, v0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceReferenceManager;->onPluginServiceObtained(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Landroid/os/IBinder;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 223
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p1, :cond_2

    .line 224
    sget-object p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string p2, "[getPluginService] Error when getting plugin service from service channel..."

    invoke-static {p1, p2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    :goto_0
    return-object v0
.end method

.method static getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;
    .locals 9

    const-string v0, "Error closing cursor: "

    .line 232
    sget-boolean v1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 233
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getServerChannel] begin = "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 236
    :cond_0
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServerChannel:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->asBinder()Landroid/os/IBinder;

    move-result-object v1

    invoke-interface {v1}, Landroid/os/IBinder;->isBinderAlive()Z

    move-result v1

    if-eqz v1, :cond_1

    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServerChannel:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    invoke-interface {v1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->asBinder()Landroid/os/IBinder;

    move-result-object v1

    invoke-interface {v1}, Landroid/os/IBinder;->pingBinder()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 237
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServerChannel:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    return-object p0

    .line 245
    :cond_1
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 246
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->sServiceChannelImpl:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;

    return-object p0

    :cond_2
    const/4 v1, 0x0

    if-nez p0, :cond_3

    return-object v1

    .line 256
    :cond_3
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServiceChannelUri()Landroid/net/Uri;

    move-result-object v3

    const/4 v4, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x0

    const/4 v7, 0x0

    invoke-virtual/range {v2 .. v7}, Landroid/content/ContentResolver;->query(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 257
    :try_start_1
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelCursor;->getBinder(Landroid/database/Cursor;)Landroid/os/IBinder;

    move-result-object v2

    .line 258
    invoke-static {v2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object v1

    .line 259
    sput-object v1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServerChannel:Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz p0, :cond_6

    .line 267
    :try_start_2
    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 269
    sget-boolean v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v2, :cond_6

    .line 270
    sget-object v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    invoke-static {v2, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    goto :goto_2

    :catchall_0
    move-exception v1

    goto :goto_3

    :catch_1
    move-exception v2

    move-object v8, v1

    move-object v1, p0

    move-object p0, v8

    goto :goto_0

    :catchall_1
    move-exception p0

    move-object v8, v1

    move-object v1, p0

    move-object p0, v8

    goto :goto_3

    :catch_2
    move-exception v2

    move-object p0, v1

    .line 261
    :goto_0
    :try_start_3
    sget-boolean v3, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v3, :cond_4

    .line 262
    sget-object v3, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string v4, "Error fetching service manager binder object using provider: "

    invoke-static {v3, v4, v2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :cond_4
    if-eqz v1, :cond_5

    .line 267
    :try_start_4
    invoke-interface {v1}, Landroid/database/Cursor;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_1

    :catch_3
    move-exception v1

    .line 269
    sget-boolean v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v2, :cond_5

    .line 270
    sget-object v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    invoke-static {v2, v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_5
    :goto_1
    move-object v1, p0

    .line 276
    :cond_6
    :goto_2
    sget-boolean p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p0, :cond_7

    .line 277
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getServerChannel] end = "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    return-object v1

    :goto_3
    if-eqz p0, :cond_8

    .line 267
    :try_start_5
    invoke-interface {p0}, Landroid/database/Cursor;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_4

    :catch_4
    move-exception p0

    .line 269
    sget-boolean v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v2, :cond_8

    .line 270
    sget-object v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    invoke-static {v2, v0, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 272
    :cond_8
    :goto_4
    throw v1
.end method

.method public static getService(Landroid/content/Context;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 5

    .line 70
    sget-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 71
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getService] begin = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    :cond_0
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sCache:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/ref/SoftReference;

    const-string v1, "[getService] end = "

    const/4 v2, 0x0

    if-eqz v0, :cond_3

    .line 81
    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    if-eqz v0, :cond_4

    .line 83
    invoke-interface {v0}, Landroid/os/IBinder;->isBinderAlive()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0}, Landroid/os/IBinder;->pingBinder()Z

    move-result v3

    if-eqz v3, :cond_2

    .line 84
    sget-boolean p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p0, :cond_1

    .line 85
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "[getService] Found service from cache: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 86
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v0

    .line 90
    :cond_2
    sget-object v3, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sCache:Ljava/util/Map;

    invoke-interface {v3, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_3
    move-object v0, v2

    .line 95
    :cond_4
    :goto_0
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object v3

    if-nez v3, :cond_5

    return-object v2

    .line 101
    :cond_5
    :try_start_0
    invoke-interface {v3, p1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->getService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 104
    sget-boolean v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz v2, :cond_6

    .line 105
    sget-object v2, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "[getService] Found service from remote service channel: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 107
    :cond_6
    invoke-static {p0, p1, v0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->factory(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)Landroid/os/IBinder;

    move-result-object v0

    .line 108
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sCache:Ljava/util/Map;

    new-instance v2, Ljava/lang/ref/SoftReference;

    invoke-direct {v2, v0}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    invoke-interface {p0, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 111
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p1, :cond_7

    .line 112
    sget-object p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string v2, "[getService] Error when getting service from service channel..."

    invoke-static {p1, v2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 116
    :cond_7
    :goto_1
    sget-boolean p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p0, :cond_8

    .line 117
    sget-object p0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_8
    return-object v0
.end method

.method static getServiceChannelUri()Landroid/net/Uri;
    .locals 2

    .line 284
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServiceChannelUri:Landroid/net/Uri;

    if-nez v0, :cond_0

    .line 285
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "content://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceProvider;->AUTHORITY:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "severchannel"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServiceChannelUri:Landroid/net/Uri;

    .line 288
    :cond_0
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->sServiceChannelUri:Landroid/net/Uri;

    return-object v0
.end method

.method static onPluginServiceReleased(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 292
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 295
    :try_start_0
    invoke-interface {p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->onPluginServiceRefReleased(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 297
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p1, :cond_0

    .line 298
    sget-object p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string p2, "Error releaseing plugin service reference: "

    invoke-static {p1, p2, p0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    :goto_0
    return-void
.end method

.method public static removeService(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)Z
    .locals 0

    .line 177
    invoke-static {p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 183
    :cond_0
    :try_start_0
    invoke-interface {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->removeService(Ljava/lang/String;)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 185
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->DEBUG:Z

    if-eqz p1, :cond_1

    .line 186
    sget-object p1, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->TAG:Ljava/lang/String;

    const-string p2, "Remove service failed..."

    invoke-static {p1, p2, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method

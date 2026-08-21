.class final Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl$1;
.super Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;
.source "ServiceChannelImpl.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 53
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel$Stub;-><init>()V

    return-void
.end method

.method private fetchFromDelayedMap(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 3

    .line 89
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$300()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/IBinderGetter;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    .line 95
    :cond_0
    :try_start_0
    invoke-interface {v0}, Lcom/qihoo360/replugin/IBinderGetter;->get()Landroid/os/IBinder;

    move-result-object v0

    .line 96
    invoke-virtual {p0, p1, v0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl$1;->addService(Ljava/lang/String;Landroid/os/IBinder;)V
    :try_end_0
    .catch Landroid/os/DeadObjectException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p1

    .line 106
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$000()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 107
    invoke-virtual {p1}, Landroid/os/RemoteException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 99
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$000()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 100
    invoke-virtual {v0}, Landroid/os/DeadObjectException;->printStackTrace()V

    .line 104
    :cond_1
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$300()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    :goto_0
    return-object v1
.end method


# virtual methods
.method public addService(Ljava/lang/String;Landroid/os/IBinder;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 117
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$200()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public addServiceDelayed(Ljava/lang/String;Lcom/qihoo360/replugin/IBinderGetter;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 122
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$300()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1, p2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public getPluginService(Ljava/lang/String;Ljava/lang/String;Landroid/os/IBinder;)Landroid/os/IBinder;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 132
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl$1;->getCallingPid()I

    move-result v0

    invoke-static {p1, p2, v0, p3}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->getPluginService(Ljava/lang/String;Ljava/lang/String;ILandroid/os/IBinder;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public getService(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 57
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$000()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 58
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$100()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getService] --> serviceName = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 61
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_5

    .line 65
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$200()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    if-nez v0, :cond_1

    .line 70
    invoke-direct {p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl$1;->fetchFromDelayedMap(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    .line 74
    :cond_1
    invoke-interface {v0}, Landroid/os/IBinder;->isBinderAlive()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Landroid/os/IBinder;->pingBinder()Z

    move-result v1

    if-nez v1, :cond_2

    goto :goto_0

    :cond_2
    return-object v0

    .line 75
    :cond_3
    :goto_0
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$000()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 76
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$100()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "[getService] --> service died:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 79
    :cond_4
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$200()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x0

    return-object p1

    .line 62
    :cond_5
    new-instance p1, Ljava/lang/IllegalArgumentException;

    invoke-direct {p1}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p1
.end method

.method public onPluginServiceRefReleased(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 137
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl$1;->getCallingPid()I

    move-result v0

    invoke-static {p1, p2, v0}, Lcom/qihoo360/mobilesafe/svcmanager/PluginServiceManager;->onRefReleased(Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public removeService(Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 127
    invoke-static {}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceChannelImpl;->access$200()Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

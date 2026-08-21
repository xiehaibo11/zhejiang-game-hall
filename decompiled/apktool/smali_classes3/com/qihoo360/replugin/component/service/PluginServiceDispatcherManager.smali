.class public Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;
.super Ljava/lang/Object;
.source "PluginServiceDispatcherManager.java"


# static fields
.field private static final SERVICES_LOCKER:[B

.field private static final TAG:Ljava/lang/String; = "PSDM"


# instance fields
.field private mServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/Context;",
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/ServiceConnection;",
            "Lcom/qihoo360/replugin/component/service/ServiceDispatcher;",
            ">;>;"
        }
    .end annotation
.end field

.field private mUnboundServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/Context;",
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/ServiceConnection;",
            "Lcom/qihoo360/replugin/component/service/ServiceDispatcher;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/4 v0, 0x0

    new-array v0, v0, [B

    .line 39
    sput-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->SERVICES_LOCKER:[B

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 33
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 37
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 38
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mUnboundServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    return-void
.end method


# virtual methods
.method public forget(Landroid/content/Context;Landroid/content/ServiceConnection;)Lcom/qihoo360/replugin/component/service/ServiceDispatcher;
    .locals 5

    .line 63
    sget-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->SERVICES_LOCKER:[B

    monitor-enter v0

    .line 64
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 65
    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    if-eqz v1, :cond_3

    .line 68
    invoke-virtual {v1, p2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;

    if-eqz v2, :cond_3

    .line 70
    invoke-virtual {v1, p2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 71
    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->doForget()V

    .line 72
    invoke-virtual {v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->size()I

    move-result v1

    if-nez v1, :cond_0

    .line 73
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    :cond_0
    invoke-virtual {v2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->getFlags()I

    move-result v1

    and-int/lit8 v1, v1, 0x2

    if-eqz v1, :cond_2

    .line 76
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mUnboundServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 77
    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    if-nez v1, :cond_1

    .line 79
    new-instance v1, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    .line 80
    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mUnboundServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v3, p1, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 82
    :cond_1
    new-instance p1, Ljava/lang/IllegalArgumentException;

    const-string v3, "Originally unbound here:"

    invoke-direct {p1, v3}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    .line 84
    invoke-virtual {p1}, Ljava/lang/RuntimeException;->fillInStackTrace()Ljava/lang/Throwable;

    .line 85
    invoke-virtual {v2, p1}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->setUnbindLocation(Ljava/lang/RuntimeException;)V

    .line 86
    invoke-virtual {v1, p2, v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    :cond_2
    monitor-exit v0

    return-object v2

    .line 91
    :cond_3
    iget-object v1, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mUnboundServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 92
    invoke-virtual {v1, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    const/4 v2, 0x0

    if-eqz v1, :cond_5

    .line 94
    invoke-virtual {v1, p2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;

    if-eqz v1, :cond_5

    .line 99
    invoke-virtual {v1}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->getUnbindLocation()Ljava/lang/RuntimeException;

    move-result-object p1

    .line 100
    new-instance v1, Ljava/lang/IllegalArgumentException;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "Unbinding Service "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, " that was already unbound"

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {v1, p2, p1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 103
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    const-string p1, "PSDM"

    const-string p2, "forgetServiceDispatcher(): Unbind Error!"

    .line 104
    invoke-static {p1, p2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 106
    :cond_4
    monitor-exit v0

    return-object v2

    :cond_5
    if-nez p1, :cond_7

    .line 110
    new-instance p1, Ljava/lang/IllegalStateException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Unbinding Service "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p2, " from Context that is no longer in use"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    .line 112
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_6

    const-string p2, "PSDM"

    const-string v1, "forgetServiceDispatcher(): Unbind Error!"

    .line 113
    invoke-static {p2, v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 115
    :cond_6
    monitor-exit v0

    return-object v2

    .line 117
    :cond_7
    new-instance p1, Ljava/lang/IllegalArgumentException;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "Service not registered: "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    .line 118
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_8

    const-string p2, "PSDM"

    const-string v1, "forgetServiceDispatcher(): Unbind Error!"

    .line 119
    invoke-static {p2, v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 121
    :cond_8
    monitor-exit v0

    return-object v2

    :catchall_0
    move-exception p1

    .line 123
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public get(Landroid/content/ServiceConnection;Landroid/content/Context;Landroid/os/Handler;II)Lcom/qihoo360/replugin/component/service/ServiceDispatcher;
    .locals 9

    .line 42
    sget-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->SERVICES_LOCKER:[B

    monitor-enter v0

    const/4 v1, 0x0

    .line 44
    :try_start_0
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2, p2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    if-eqz v2, :cond_0

    .line 46
    invoke-virtual {v2, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;

    :cond_0
    if-nez v1, :cond_2

    .line 49
    new-instance v1, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;

    move-object v3, v1

    move-object v4, p1

    move-object v5, p2

    move-object v6, p3

    move v7, p4

    move v8, p5

    invoke-direct/range {v3 .. v8}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;-><init>(Landroid/content/ServiceConnection;Landroid/content/Context;Landroid/os/Handler;II)V

    if-nez v2, :cond_1

    .line 51
    new-instance v2, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    .line 52
    iget-object p3, p0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->mServices:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p3, p2, v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 54
    :cond_1
    invoke-virtual {v2, p1, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 56
    :cond_2
    invoke-virtual {v1, p2, p3}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->validate(Landroid/content/Context;Landroid/os/Handler;)V

    .line 58
    :goto_0
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception p1

    .line 59
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

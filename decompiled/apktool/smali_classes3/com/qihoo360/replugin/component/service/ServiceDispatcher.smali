.class final Lcom/qihoo360/replugin/component/service/ServiceDispatcher;
.super Ljava/lang/Object;
.source "ServiceDispatcher.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/component/service/ServiceDispatcher$DeathMonitor;,
        Lcom/qihoo360/replugin/component/service/ServiceDispatcher$RunConnection;,
        Lcom/qihoo360/replugin/component/service/ServiceDispatcher$InnerConnection;,
        Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;
    }
.end annotation


# instance fields
.field private final mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Lcom/qihoo360/replugin/utils/basic/ArrayMap<",
            "Landroid/content/ComponentName;",
            "Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;",
            ">;"
        }
    .end annotation
.end field

.field private final mActivityThread:Landroid/os/Handler;

.field private final mConnection:Landroid/content/ServiceConnection;

.field private final mContext:Landroid/content/Context;

.field private final mFlags:I

.field private mForgotten:Z

.field private final mIServiceConnection:Lcom/qihoo360/replugin/component/service/ServiceDispatcher$InnerConnection;

.field private final mLocation:Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;

.field private final mProcess:I

.field private mUnbindLocation:Ljava/lang/RuntimeException;


# direct methods
.method constructor <init>(Landroid/content/ServiceConnection;Landroid/content/Context;Landroid/os/Handler;II)V
    .locals 1

    .line 82
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 79
    new-instance v0, Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-direct {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    .line 83
    new-instance v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$InnerConnection;

    invoke-direct {v0, p0}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$InnerConnection;-><init>(Lcom/qihoo360/replugin/component/service/ServiceDispatcher;)V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mIServiceConnection:Lcom/qihoo360/replugin/component/service/ServiceDispatcher$InnerConnection;

    .line 84
    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    .line 85
    iput-object p2, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mContext:Landroid/content/Context;

    .line 86
    iput-object p3, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActivityThread:Landroid/os/Handler;

    .line 87
    new-instance p1, Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;

    const/4 p2, 0x0

    invoke-direct {p1, p2}, Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;-><init>(Ljava/lang/String;)V

    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mLocation:Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;

    .line 88
    invoke-virtual {p1}, Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;->fillInStackTrace()Ljava/lang/Throwable;

    .line 89
    iput p4, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mFlags:I

    .line 90
    iput p5, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mProcess:I

    return-void
.end method


# virtual methods
.method public connected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 3

    .line 148
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActivityThread:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 149
    new-instance v1, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$RunConnection;

    const/4 v2, 0x0

    invoke-direct {v1, p0, p1, p2, v2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$RunConnection;-><init>(Lcom/qihoo360/replugin/component/service/ServiceDispatcher;Landroid/content/ComponentName;Landroid/os/IBinder;I)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 151
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->doConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V

    :goto_0
    return-void
.end method

.method public death(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 3

    .line 158
    monitor-enter p0

    .line 160
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;

    if-eqz v0, :cond_2

    .line 161
    iget-object v1, v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->binder:Landroid/os/IBinder;

    if-eq v1, p2, :cond_0

    goto :goto_1

    .line 166
    :cond_0
    iget-object v1, v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->binder:Landroid/os/IBinder;

    iget-object v0, v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->deathMonitor:Landroid/os/IBinder$DeathRecipient;

    const/4 v2, 0x0

    invoke-interface {v1, v0, v2}, Landroid/os/IBinder;->unlinkToDeath(Landroid/os/IBinder$DeathRecipient;I)Z

    .line 167
    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 169
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActivityThread:Landroid/os/Handler;

    if-eqz v0, :cond_1

    .line 170
    new-instance v1, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$RunConnection;

    const/4 v2, 0x1

    invoke-direct {v1, p0, p1, p2, v2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$RunConnection;-><init>(Lcom/qihoo360/replugin/component/service/ServiceDispatcher;Landroid/content/ComponentName;Landroid/os/IBinder;I)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    goto :goto_0

    .line 172
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->doDeath(Landroid/content/ComponentName;Landroid/os/IBinder;)V

    :goto_0
    return-void

    .line 164
    :cond_2
    :goto_1
    :try_start_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    .line 167
    monitor-exit p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public doConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 4

    .line 180
    monitor-enter p0

    .line 181
    :try_start_0
    iget-boolean v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mForgotten:Z

    if-eqz v0, :cond_0

    .line 184
    monitor-exit p0

    return-void

    .line 186
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;

    if-eqz v0, :cond_1

    .line 187
    iget-object v1, v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->binder:Landroid/os/IBinder;

    if-ne v1, p2, :cond_1

    .line 189
    monitor-exit p0

    return-void

    :cond_1
    const/4 v1, 0x0

    if-eqz p2, :cond_2

    .line 195
    new-instance v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;-><init>(Lcom/qihoo360/replugin/component/service/ServiceDispatcher$1;)V

    .line 196
    iput-object p2, v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->binder:Landroid/os/IBinder;

    .line 197
    new-instance v3, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$DeathMonitor;

    invoke-direct {v3, p0, p1, p2}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$DeathMonitor;-><init>(Lcom/qihoo360/replugin/component/service/ServiceDispatcher;Landroid/content/ComponentName;Landroid/os/IBinder;)V

    iput-object v3, v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->deathMonitor:Landroid/os/IBinder$DeathRecipient;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 199
    :try_start_1
    iget-object v3, v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->deathMonitor:Landroid/os/IBinder$DeathRecipient;

    invoke-interface {p2, v3, v1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V

    .line 200
    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v3, p1, v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Landroid/os/RemoteException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    .line 204
    :catch_0
    :try_start_2
    iget-object p2, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 205
    monitor-exit p0

    return-void

    .line 210
    :cond_2
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2, p1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :goto_0
    if-eqz v0, :cond_3

    .line 214
    iget-object v2, v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->binder:Landroid/os/IBinder;

    iget-object v3, v0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->deathMonitor:Landroid/os/IBinder$DeathRecipient;

    invoke-interface {v2, v3, v1}, Landroid/os/IBinder;->unlinkToDeath(Landroid/os/IBinder$DeathRecipient;I)Z

    .line 216
    :cond_3
    monitor-exit p0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v0, :cond_4

    .line 220
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    invoke-interface {v0, p1}, Landroid/content/ServiceConnection;->onServiceDisconnected(Landroid/content/ComponentName;)V

    :cond_4
    if-eqz p2, :cond_5

    .line 224
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    invoke-interface {v0, p1, p2}, Landroid/content/ServiceConnection;->onServiceConnected(Landroid/content/ComponentName;Landroid/os/IBinder;)V

    :cond_5
    return-void

    :catchall_0
    move-exception p1

    .line 216
    :try_start_3
    monitor-exit p0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw p1
.end method

.method public doDeath(Landroid/content/ComponentName;Landroid/os/IBinder;)V
    .locals 0

    .line 229
    iget-object p2, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    invoke-interface {p2, p1}, Landroid/content/ServiceConnection;->onServiceDisconnected(Landroid/content/ComponentName;)V

    return-void
.end method

.method doForget()V
    .locals 4

    .line 109
    monitor-enter p0

    const/4 v0, 0x0

    move v1, v0

    .line 110
    :goto_0
    :try_start_0
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 111
    iget-object v2, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v2, v1}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->valueAt(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;

    .line 112
    iget-object v3, v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->binder:Landroid/os/IBinder;

    iget-object v2, v2, Lcom/qihoo360/replugin/component/service/ServiceDispatcher$ConnectionInfo;->deathMonitor:Landroid/os/IBinder$DeathRecipient;

    invoke-interface {v3, v2, v0}, Landroid/os/IBinder;->unlinkToDeath(Landroid/os/IBinder$DeathRecipient;I)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 114
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActiveConnections:Lcom/qihoo360/replugin/utils/basic/ArrayMap;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/utils/basic/ArrayMap;->clear()V

    const/4 v0, 0x1

    .line 115
    iput-boolean v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mForgotten:Z

    .line 116
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0
.end method

.method getFlags()I
    .locals 1

    .line 132
    iget v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mFlags:I

    return v0
.end method

.method getIServiceConnection()Lcom/qihoo360/loader2/mgr/IServiceConnection;
    .locals 1

    .line 128
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mIServiceConnection:Lcom/qihoo360/replugin/component/service/ServiceDispatcher$InnerConnection;

    return-object v0
.end method

.method getLocation()Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;
    .locals 1

    .line 120
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mLocation:Lcom/qihoo360/replugin/component/service/ServiceConnectionLeaked;

    return-object v0
.end method

.method getProcess()I
    .locals 1

    .line 144
    iget v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mProcess:I

    return v0
.end method

.method getServiceConnection()Landroid/content/ServiceConnection;
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    return-object v0
.end method

.method getUnbindLocation()Ljava/lang/RuntimeException;
    .locals 1

    .line 140
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mUnbindLocation:Ljava/lang/RuntimeException;

    return-object v0
.end method

.method setUnbindLocation(Ljava/lang/RuntimeException;)V
    .locals 0

    .line 136
    iput-object p1, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mUnbindLocation:Ljava/lang/RuntimeException;

    return-void
.end method

.method validate(Landroid/content/Context;Landroid/os/Handler;)V
    .locals 4

    .line 94
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mContext:Landroid/content/Context;

    const-string v1, ")"

    const-string v2, " now "

    const-string v3, "ServiceConnection "

    if-ne v0, p1, :cond_1

    .line 100
    iget-object p1, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActivityThread:Landroid/os/Handler;

    if-ne p1, p2, :cond_0

    return-void

    .line 101
    :cond_0
    new-instance p1, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " registered with differing handler (was "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mActivityThread:Landroid/os/Handler;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 95
    :cond_1
    new-instance p2, Ljava/lang/RuntimeException;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mConnection:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v3, " registered with differing Context (was "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p2
.end method

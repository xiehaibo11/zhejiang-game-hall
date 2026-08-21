.class Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;
.super Ljava/lang/Object;
.source "ServiceWrapper.java"

# interfaces
.implements Landroid/os/IBinder;
.implements Landroid/os/IBinder$DeathRecipient;


# static fields
.field private static final DEBUG:Z

.field private static final TAG:Ljava/lang/String;


# instance fields
.field private final mAppCpntext:Landroid/content/Context;

.field private final mName:Ljava/lang/String;

.field private mRemote:Landroid/os/IBinder;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 39
    sget-boolean v0, Lcom/qihoo360/mobilesafe/core/BuildConfig;->DEBUG:Z

    sput-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz v0, :cond_0

    const-string v0, "ServiceWrapper"

    goto :goto_0

    .line 41
    :cond_0
    const-class v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    :goto_0
    sput-object v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)V
    .locals 0

    .line 71
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 72
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mAppCpntext:Landroid/content/Context;

    .line 73
    iput-object p3, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mRemote:Landroid/os/IBinder;

    .line 74
    iput-object p2, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mName:Ljava/lang/String;

    const/4 p1, 0x0

    .line 76
    :try_start_0
    invoke-interface {p3, p0, p1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 78
    sget-boolean p2, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz p2, :cond_0

    .line 79
    sget-object p2, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    const-string p3, "linkToDeath ex"

    invoke-static {p2, p3, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    :goto_0
    return-void
.end method

.method public static factory(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)Landroid/os/IBinder;
    .locals 3

    .line 52
    :try_start_0
    invoke-interface {p2}, Landroid/os/IBinder;->getInterfaceDescriptor()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 54
    sget-boolean v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 55
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    const-string v2, "getInterfaceDescriptor()"

    invoke-static {v1, v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    const/4 v0, 0x0

    .line 58
    :goto_0
    invoke-interface {p2, v0}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object v0

    if-eqz v0, :cond_1

    return-object p2

    .line 68
    :cond_1
    new-instance v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;

    invoke-direct {v0, p0, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)V

    return-object v0
.end method

.method private getRemoteBinder()Landroid/os/IBinder;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 85
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mRemote:Landroid/os/IBinder;

    if-eqz v0, :cond_0

    return-object v0

    .line 89
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mAppCpntext:Landroid/content/Context;

    invoke-static {v0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getServerChannel(Landroid/content/Context;)Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 96
    iget-object v1, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mName:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/qihoo360/mobilesafe/svcmanager/IServiceChannel;->getService(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 101
    iput-object v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mRemote:Landroid/os/IBinder;

    return-object v0

    .line 98
    :cond_1
    new-instance v0, Landroid/os/RemoteException;

    invoke-direct {v0}, Landroid/os/RemoteException;-><init>()V

    throw v0

    .line 93
    :cond_2
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    const-string v1, "sw.grb: s is n"

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 94
    new-instance v0, Landroid/os/RemoteException;

    invoke-direct {v0}, Landroid/os/RemoteException;-><init>()V

    throw v0
.end method


# virtual methods
.method public binderDied()V
    .locals 3

    .line 179
    sget-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 180
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "ServiceWrapper [binderDied]: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mName:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 v0, 0x0

    .line 182
    iput-object v0, p0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->mRemote:Landroid/os/IBinder;

    return-void
.end method

.method public dump(Ljava/io/FileDescriptor;[Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 148
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->getRemoteBinder()Landroid/os/IBinder;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Landroid/os/IBinder;->dump(Ljava/io/FileDescriptor;[Ljava/lang/String;)V

    return-void
.end method

.method public dumpAsync(Ljava/io/FileDescriptor;[Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    return-void
.end method

.method public getInterfaceDescriptor()Ljava/lang/String;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 107
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->getRemoteBinder()Landroid/os/IBinder;

    move-result-object v0

    invoke-interface {v0}, Landroid/os/IBinder;->getInterfaceDescriptor()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public isBinderAlive()Z
    .locals 3

    .line 125
    :try_start_0
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->getRemoteBinder()Landroid/os/IBinder;

    move-result-object v0

    invoke-interface {v0}, Landroid/os/IBinder;->isBinderAlive()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 127
    sget-boolean v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 128
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    const-string v2, "isBinderAlive()"

    invoke-static {v1, v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 163
    sget-boolean p1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-nez p1, :cond_0

    return-void

    .line 164
    :cond_0
    new-instance p1, Ljava/lang/UnsupportedOperationException;

    const-string p2, "ServiceWrapper does NOT support Death Recipient!"

    invoke-direct {p1, p2}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw p1
.end method

.method public pingBinder()Z
    .locals 3

    .line 113
    :try_start_0
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->getRemoteBinder()Landroid/os/IBinder;

    move-result-object v0

    invoke-interface {v0}, Landroid/os/IBinder;->pingBinder()Z

    move-result v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 115
    sget-boolean v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz v1, :cond_0

    .line 116
    sget-object v1, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    const-string v2, "getRemoteBinder()"

    invoke-static {v1, v2, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;
    .locals 2

    .line 137
    :try_start_0
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->getRemoteBinder()Landroid/os/IBinder;

    move-result-object v0

    invoke-interface {v0, p1}, Landroid/os/IBinder;->queryLocalInterface(Ljava/lang/String;)Landroid/os/IInterface;

    move-result-object p1
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 139
    sget-boolean v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->DEBUG:Z

    if-eqz v0, :cond_0

    .line 140
    sget-object v0, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->TAG:Ljava/lang/String;

    const-string v1, "queryLocalInterface()"

    invoke-static {v0, v1, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 153
    invoke-direct {p0}, Lcom/qihoo360/mobilesafe/svcmanager/ServiceWrapper;->getRemoteBinder()Landroid/os/IBinder;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3, p4}, Landroid/os/IBinder;->transact(ILandroid/os/Parcel;Landroid/os/Parcel;I)Z

    move-result p1

    return p1
.end method

.method public unlinkToDeath(Landroid/os/IBinder$DeathRecipient;I)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

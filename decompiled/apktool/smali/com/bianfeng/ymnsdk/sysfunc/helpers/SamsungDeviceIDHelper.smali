.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;
.super Ljava/lang/Object;
.source "SamsungDeviceIDHelper.java"


# instance fields
.field public final linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/LinkedBlockingQueue<",
            "Landroid/os/IBinder;",
            ">;"
        }
    .end annotation
.end field

.field private mContext:Landroid/content/Context;

.field serviceConnection:Landroid/content/ServiceConnection;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 22
    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 63
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    .line 25
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public getSumsungID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 5

    const-string v0, "com.samsung.android.deviceidservice"

    const-string v1, "Wooo"

    .line 30
    :try_start_0
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v0, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    const-string v3, "intentForID getSumsungID service not found;"

    .line 33
    invoke-static {v1, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 34
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 37
    :goto_0
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v3, "com.samsung.android.deviceidservice.DeviceIdService"

    .line 38
    invoke-virtual {v2, v0, v3}, Landroid/content/Intent;->setClassName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 39
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    const-string v2, ""

    if-eqz v0, :cond_1

    .line 42
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/SamsungDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    .line 43
    new-instance v3, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Proxy;

    invoke-direct {v3, v0}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Proxy;-><init>(Landroid/os/IBinder;)V

    .line 44
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/SamsungIDInterface$Proxy;->getID()Ljava/lang/String;

    move-result-object v0

    .line 45
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "intentForID getSumsungID oaid -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_2

    .line 47
    invoke-interface {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    if-eqz p1, :cond_0

    .line 52
    invoke-interface {p1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    .line 54
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :cond_1
    if-eqz p1, :cond_2

    .line 58
    invoke-interface {p1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

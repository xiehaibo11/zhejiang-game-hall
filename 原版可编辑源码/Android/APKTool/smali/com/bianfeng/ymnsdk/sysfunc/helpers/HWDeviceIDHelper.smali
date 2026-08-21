.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;
.super Ljava/lang/Object;
.source "HWDeviceIDHelper.java"


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

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    new-instance v0, Ljava/util/concurrent/LinkedBlockingQueue;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/LinkedBlockingQueue;-><init>(I)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 75
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    .line 26
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public getHWID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 7

    const-string v0, "com.huawei.hwid"

    const-string v1, "Wooo"

    const-string v2, "getHWID IN "

    .line 30
    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 32
    :try_start_0
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v0, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    const-string v3, "getHWID hw service not found;"

    .line 35
    invoke-static {v1, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 36
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 39
    :goto_0
    new-instance v2, Landroid/content/Intent;

    const-string v3, "com.uodis.opendevice.OPENIDS_SERVICE"

    invoke-direct {v2, v3}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 40
    invoke-virtual {v2, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 41
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    .line 42
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "intentForID bindService. isBin -> "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    const-string v2, ""

    if-eqz v0, :cond_2

    .line 45
    :try_start_1
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v3}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/os/IBinder;

    .line 46
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "getHWID bindService. binder -> "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 47
    new-instance v4, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;

    invoke-direct {v4, v3}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;-><init>(Landroid/os/IBinder;)V

    .line 48
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;->getIDs()Ljava/lang/String;

    move-result-object v3

    .line 49
    invoke-virtual {v4}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/HWIDInterface$HWID;->getBoos()Z

    move-result v4

    .line 50
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "getHWID OUT ids -> "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, " , boos -> "

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_1

    .line 53
    invoke-interface {p1, v3}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    goto :goto_2

    :catch_1
    move-exception v3

    if-eqz p1, :cond_0

    .line 58
    :try_start_2
    invoke-interface {p1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    .line 61
    :cond_0
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 64
    :cond_1
    :goto_1
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    invoke-virtual {p1, v2}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    goto :goto_3

    :goto_2
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/HWDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V

    .line 65
    throw p1

    :cond_2
    if-eqz p1, :cond_3

    .line 68
    invoke-interface {p1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    .line 71
    :cond_3
    :goto_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getHWID OUT isBin -> "

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method

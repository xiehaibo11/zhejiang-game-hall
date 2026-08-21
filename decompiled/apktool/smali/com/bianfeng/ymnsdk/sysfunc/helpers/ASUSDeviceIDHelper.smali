.class public Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;
.super Ljava/lang/Object;
.source "ASUSDeviceIDHelper.java"


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

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    .line 74
    new-instance v0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper$1;-><init>(Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;)V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    .line 26
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public getID(Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;)V
    .locals 5

    const-string v0, "com.asus.msa.SupplementaryDID"

    const-string v1, "Wooo"

    .line 36
    :try_start_0
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->mContext:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v2

    const/4 v3, 0x0

    invoke-virtual {v2, v0, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v2

    const-string v3, "intentForID asus service not found;"

    .line 39
    invoke-static {v1, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 40
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    .line 43
    :goto_0
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2}, Landroid/content/Intent;-><init>()V

    const-string v3, "com.asus.msa.action.ACCESS_DID"

    .line 44
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 45
    new-instance v3, Landroid/content/ComponentName;

    const-string v4, "com.asus.msa.SupplementaryDID.SupplementaryDIDService"

    invoke-direct {v3, v0, v4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    invoke-virtual {v2, v3}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 48
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->mContext:Landroid/content/Context;

    iget-object v3, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->serviceConnection:Landroid/content/ServiceConnection;

    const/4 v4, 0x1

    invoke-virtual {v0, v2, v3, v4}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result v0

    const-string v2, ""

    if-eqz v0, :cond_1

    .line 51
    :try_start_1
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/helpers/ASUSDeviceIDHelper;->linkedBlockingQueue:Ljava/util/concurrent/LinkedBlockingQueue;

    invoke-virtual {v0}, Ljava/util/concurrent/LinkedBlockingQueue;->take()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/IBinder;

    .line 52
    new-instance v3, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;

    invoke-direct {v3, v0}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;-><init>(Landroid/os/IBinder;)V

    .line 53
    invoke-virtual {v3}, Lcom/bianfeng/ymnsdk/sysfunc/interfaces/ASUSIDInterface$ASUSID;->getID()Ljava/lang/String;

    move-result-object v0

    .line 54
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "intentForID getID ids -> "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p1, :cond_2

    .line 57
    invoke-interface {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    if-eqz p1, :cond_0

    .line 62
    invoke-interface {p1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    .line 65
    :cond_0
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :cond_1
    if-eqz p1, :cond_2

    .line 69
    invoke-interface {p1, v2}, Lcom/bianfeng/ymnsdk/sysfunc/helpers/DevicesIDsHelper$AppIdsUpdater;->OnIdsAvalid(Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

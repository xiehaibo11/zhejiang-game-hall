.class Lcom/qihoo360/loader2/PmHostSvc;
.super Lcom/qihoo360/loader2/IPluginHost$Stub;
.source "PmHostSvc.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/loader2/PmHostSvc$BinderDied;
    }
.end annotation


# static fields
.field private static final GROUP_COUNT:I

.field private static mPluginGroupMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Integer;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private final mActionPluginComponents:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;>;"
        }
    .end annotation
.end field

.field mContext:Landroid/content/Context;

.field mManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

.field private mNeedRestart:Z

.field mPluginMgr:Lcom/qihoo360/loader2/PmBase;

.field mReceiverProxy:Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;

.field private mReceivers:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/BroadcastReceiver;",
            ">;"
        }
    .end annotation
.end field

.field mServiceMgr:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 617
    sget v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_COUNT_TASK:I

    sput v0, Lcom/qihoo360/loader2/PmHostSvc;->GROUP_COUNT:I

    .line 622
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginGroupMap:Ljava/util/Map;

    return-void
.end method

.method constructor <init>(Landroid/content/Context;Lcom/qihoo360/loader2/PmBase;)V
    .locals 1

    .line 139
    invoke-direct {p0}, Lcom/qihoo360/loader2/IPluginHost$Stub;-><init>()V

    .line 97
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mReceivers:Ljava/util/HashMap;

    .line 115
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mActionPluginComponents:Ljava/util/HashMap;

    .line 140
    iput-object p1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    .line 141
    iput-object p2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    .line 142
    new-instance p2, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    invoke-direct {p2, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mServiceMgr:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    .line 143
    new-instance p2, Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-direct {p2, p1}, Lcom/qihoo360/replugin/packages/PluginManagerServer;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    return-void
.end method

.method private getValidGroup()I
    .locals 3

    const/4 v0, 0x0

    .line 647
    :goto_0
    sget v1, Lcom/qihoo360/loader2/PmHostSvc;->GROUP_COUNT:I

    if-ge v0, v1, :cond_1

    .line 649
    sget-object v1, Lcom/qihoo360/loader2/PmHostSvc;->mPluginGroupMap:Ljava/util/Map;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->containsValue(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    return v0

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    const/4 v0, -0x1

    return v0
.end method

.method private pluginDownloadedForPn(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 7

    .line 413
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x1

    .line 414
    invoke-static {v0, v1}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object v2

    const-string v3, "ws001"

    const/4 v4, 0x0

    if-nez v2, :cond_1

    const/4 v2, 0x3

    .line 416
    invoke-static {v0, v2}, Lcom/qihoo360/loader2/V5FileInfo;->build(Ljava/io/File;I)Lcom/qihoo360/loader2/V5FileInfo;

    move-result-object v2

    if-nez v2, :cond_1

    .line 418
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 419
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pluginDownloaded: unknown v5 plugin file: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 423
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object v0

    sget-object v1, Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;->V5_FILE_BUILD_FAIL:Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;

    invoke-virtual {v0, p1, v1}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V

    return-object v4

    .line 428
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    const/4 v5, 0x0

    const-string v6, "plugins_v3"

    invoke-virtual {v0, v6, v5}, Landroid/content/Context;->getDir(Ljava/lang/String;I)Ljava/io/File;

    move-result-object v0

    .line 429
    iget-object v6, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    invoke-virtual {v2, v6, v0, v5, v1}, Lcom/qihoo360/loader2/V5FileInfo;->updateV5FileTo(Landroid/content/Context;Ljava/io/File;ZZ)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-nez v0, :cond_3

    .line 431
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 432
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pluginDownloaded: failed to update v5 plugin: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 436
    :cond_2
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object v0

    sget-object v1, Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;->V5_FILE_UPDATE_FAIL:Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;

    invoke-virtual {v0, p1, v1}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onInstallPluginFailed(Ljava/lang/String;Lcom/qihoo360/replugin/RePluginEventCallbacks$InstallResult;)V

    return-object v4

    :cond_3
    return-object v0
.end method

.method private saveAction(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 548
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mActionPluginComponents:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    if-nez v0, :cond_0

    .line 550
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 551
    iget-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mActionPluginComponents:Ljava/util/HashMap;

    invoke-virtual {v1, p1, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 555
    :cond_0
    invoke-virtual {v0, p2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/List;

    if-nez v1, :cond_1

    .line 557
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 558
    invoke-virtual {v0, p2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 562
    :cond_1
    invoke-interface {v1, p3}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 563
    invoke-interface {v1, p3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 565
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    const/4 v0, 0x3

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const/4 p1, 0x1

    aput-object p2, v0, p1

    const/4 p1, 0x2

    aput-object p3, v0, p1

    const-string p1, "\u4fdd\u5b58 Receiver (%s, %s, %s)"

    .line 566
    invoke-static {p1, v0}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "ms-receiver"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void
.end method

.method private sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 514
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 515
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendIntent2Plugin target="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " intent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string v0, "ui"

    .line 518
    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 519
    invoke-static {p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;Z)V

    .line 524
    :cond_1
    invoke-static {v0, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;Z)V

    return-void
.end method

.method private sendIntent2PluginHostProcess(Landroid/content/Intent;Z)V
    .locals 1

    .line 495
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->setExtrasClassLoader(Ljava/lang/ClassLoader;)V

    if-eqz p2, :cond_0

    .line 497
    iget-object p2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/base/LocalBroadcastHelper;->sendBroadcastSyncUi(Landroid/content/Context;Landroid/content/Intent;)V

    goto :goto_0

    .line 499
    :cond_0
    iget-object p2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    invoke-static {p2}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    :goto_0
    return-void
.end method

.method private sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 479
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 480
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendIntent2Process target="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " intent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 482
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPluginHostProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 483
    invoke-direct {p0, p2, p3}, Lcom/qihoo360/loader2/PmHostSvc;->sendIntent2PluginHostProcess(Landroid/content/Intent;Z)V

    return-void

    .line 487
    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 488
    invoke-direct {p0, p2, p3}, Lcom/qihoo360/loader2/PmHostSvc;->sendIntent2PluginHostProcess(Landroid/content/Intent;Z)V

    .line 491
    :cond_2
    invoke-static {p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;Z)V

    return-void
.end method

.method private syncInstalledPluginInfo2All(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 3

    .line 368
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getParentInfo()Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    move-object p1, v0

    .line 376
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Lcom/qihoo360/loader2/PmBase;->newPluginFound(Lcom/qihoo360/replugin/model/PluginInfo;Z)V

    .line 379
    new-instance v0, Landroid/content/Intent;

    const-string v1, "ACTION_NEW_PLUGIN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 380
    iget-boolean v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mNeedRestart:Z

    const-string v2, "persist_need_restart"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const-string v1, "obj"

    .line 381
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 382
    iget-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2AllSync(Landroid/content/Context;Landroid/content/Intent;)Z

    .line 384
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 385
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "syncInstalledPluginInfo2All: Sync complete! syncPi="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "task-affinity"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-void
.end method

.method private syncUninstalledPluginInfo2All(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 393
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 396
    new-instance v0, Landroid/content/Intent;

    const-string v1, "ACTION_UNINSTALL_PLUGIN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "obj"

    .line 397
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 400
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 401
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1, v0}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2AllSync(Landroid/content/Context;Landroid/content/Intent;)Z

    goto :goto_0

    .line 403
    :cond_0
    new-instance p1, Lcom/qihoo360/loader2/PmHostSvc$1;

    invoke-direct {p1, p0, v0}, Lcom/qihoo360/loader2/PmHostSvc$1;-><init>(Lcom/qihoo360/loader2/PmHostSvc;Landroid/content/Intent;)V

    invoke-static {p1}, Lcom/qihoo360/mobilesafe/api/Tasks;->post2UI(Ljava/lang/Runnable;)Z

    :goto_0
    return-void
.end method


# virtual methods
.method public attachPluginProcess(Ljava/lang/String;ILandroid/os/IBinder;Ljava/lang/String;)Ljava/lang/String;
    .locals 7
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 185
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v0

    const/4 v1, 0x0

    .line 188
    :try_start_0
    invoke-static {p3}, Lcom/qihoo360/loader2/IPluginClient$Stub;->asInterface(Landroid/os/IBinder;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v4, v2

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 191
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "a.p.p pc.s.ai: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "ws001"

    invoke-static {v4, v3, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    move-object v4, v1

    :goto_0
    if-nez v4, :cond_0

    return-object v1

    .line 197
    :cond_0
    iget-object v6, p0, Lcom/qihoo360/loader2/PmHostSvc;->mManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    move-object v1, p1

    move v2, p2

    move-object v3, p3

    move-object v5, p4

    invoke-static/range {v0 .. v6}, Lcom/qihoo360/loader2/PluginProcessMain;->attachProcess(ILjava/lang/String;ILandroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;Ljava/lang/String;Lcom/qihoo360/replugin/packages/PluginManagerServer;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public dump()Ljava/lang/String;
    .locals 1

    .line 668
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->dump()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public fetchBinder(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 164
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sBinders:Ljava/util/HashMap;

    monitor-enter v0

    .line 165
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginProcessMain;->sBinders:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/os/IBinder;

    .line 166
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 167
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 168
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "fetch binder: n="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " b="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v1

    :catchall_0
    move-exception p1

    .line 166
    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public fetchManagerServer()Lcom/qihoo360/replugin/packages/IPluginManagerServer;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 608
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->getService()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v0

    return-object v0
.end method

.method public fetchPersistentCookie()J
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 175
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPersistentCookie()J

    move-result-wide v0

    return-wide v0
.end method

.method public fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 540
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mServiceMgr:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->getService()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v0

    return-object v0
.end method

.method public getPidByProcessName(Ljava/lang/String;)I
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 658
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginProcessMain;->getPidByProcessName(Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public getProcessNameByPid(I)Ljava/lang/String;
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 663
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginProcessMain;->getProcessNameByPid(I)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getTaskAffinityGroupIndex(Ljava/lang/String;)I
    .locals 3

    .line 627
    sget-object v0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginGroupMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 628
    invoke-direct {p0}, Lcom/qihoo360/loader2/PmHostSvc;->getValidGroup()I

    move-result v0

    const/4 v1, -0x1

    if-ne v0, v1, :cond_1

    .line 630
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    const-string p1, "task-affinity"

    const-string v0, "Get groupID fail, not enough TaskAffinity group"

    .line 631
    invoke-static {p1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v1

    .line 635
    :cond_1
    sget-object v1, Lcom/qihoo360/loader2/PmHostSvc;->mPluginGroupMap:Ljava/util/Map;

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    invoke-interface {v1, p1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 637
    :cond_2
    sget-object v0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginGroupMap:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result v0

    :goto_0
    return v0
.end method

.method public installBinder(Ljava/lang/String;Landroid/os/IBinder;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 148
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 149
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "install binder: n="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " b="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 151
    :cond_0
    sget-object v0, Lcom/qihoo360/loader2/PluginProcessMain;->sBinders:Ljava/util/HashMap;

    monitor-enter v0

    if-eqz p2, :cond_1

    .line 153
    :try_start_0
    sget-object v1, Lcom/qihoo360/loader2/PluginProcessMain;->sBinders:Ljava/util/HashMap;

    invoke-virtual {v1, p1, p2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 154
    new-instance v1, Lcom/qihoo360/loader2/PmHostSvc$BinderDied;

    invoke-direct {v1, p1, p2}, Lcom/qihoo360/loader2/PmHostSvc$BinderDied;-><init>(Ljava/lang/String;Landroid/os/IBinder;)V

    const/4 p1, 0x0

    invoke-interface {p2, v1, p1}, Landroid/os/IBinder;->linkToDeath(Landroid/os/IBinder$DeathRecipient;I)V

    goto :goto_0

    .line 156
    :cond_1
    sget-object p2, Lcom/qihoo360/loader2/PluginProcessMain;->sBinders:Ljava/util/HashMap;

    invoke-virtual {p2, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 158
    :goto_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public isProcessAlive(Ljava/lang/String;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 530
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginProcessMain;->isProcessAlive(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public listPlugins()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 202
    invoke-static {}, Lcom/qihoo360/loader2/PluginTable;->buildPlugins()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    .locals 1

    .line 303
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mReceivers:Ljava/util/HashMap;

    invoke-static {p1, p2, v0, p3}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverHelper;->onPluginReceiverReceived(Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;Landroid/content/Intent;)V

    return-void
.end method

.method public pluginDownloaded(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 323
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pluginDownloaded\uff1a path="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 327
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v0

    const-string v1, "p-n-"

    .line 328
    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "v-plugin-"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "plugin-s-"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "p-m-"

    invoke-virtual {v0, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 331
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->getService()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    goto :goto_1

    .line 329
    :cond_1
    :goto_0
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PmHostSvc;->pluginDownloadedForPn(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    :goto_1
    if-eqz p1, :cond_2

    .line 336
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PmHostSvc;->syncInstalledPluginInfo2All(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_2
    return-object p1
.end method

.method public pluginExtracted(Ljava/lang/String;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 444
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 445
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pluginExtracted\uff1a path="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 449
    :cond_0
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 451
    invoke-static {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->build(Ljava/io/File;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p1, :cond_1

    return v0

    .line 457
    :cond_1
    iget-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v1, p1, v0}, Lcom/qihoo360/loader2/PmBase;->newPluginFound(Lcom/qihoo360/replugin/model/PluginInfo;Z)V

    .line 460
    new-instance v0, Landroid/content/Intent;

    const-string v1, "ACTION_NEW_PLUGIN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 461
    iget-boolean v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mNeedRestart:Z

    const-string v2, "persist_need_restart"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const-string v1, "obj"

    .line 462
    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    .line 463
    iget-object p1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    invoke-static {p1, v0}, Lcom/qihoo360/replugin/base/IPC;->sendLocalBroadcast2AllSync(Landroid/content/Context;Landroid/content/Intent;)Z

    const/4 p1, 0x1

    return p1
.end method

.method public pluginUninstalled(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 344
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 345
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "pluginUninstalled\uff1a pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 347
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mManager:Lcom/qihoo360/replugin/packages/PluginManagerServer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/packages/PluginManagerServer;->getService()Lcom/qihoo360/replugin/packages/IPluginManagerServer;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/qihoo360/replugin/packages/IPluginManagerServer;->uninstall(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 351
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PmHostSvc;->syncUninstalledPluginInfo2All(Lcom/qihoo360/replugin/model/PluginInfo;)V

    :cond_1
    return v0
.end method

.method public queryPluginBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 535
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    invoke-virtual {v0, p1, p2}, Lcom/qihoo360/loader2/PluginCommImpl;->query(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public queryPluginsReceiverList(Landroid/content/Intent;)Ljava/util/List;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Intent;",
            ")",
            "Ljava/util/List<",
            "Landroid/content/pm/ActivityInfo;",
            ">;"
        }
    .end annotation

    .line 573
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-nez p1, :cond_0

    return-object v0

    .line 579
    :cond_0
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object p1

    .line 580
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    .line 584
    :cond_1
    iget-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mActionPluginComponents:Ljava/util/HashMap;

    invoke-virtual {v1, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Map;

    .line 585
    invoke-interface {p1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_2

    return-object v0

    .line 590
    :cond_2
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_3
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 591
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 594
    iget-object v2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v2, v2, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    invoke-virtual {v2, v1}, Lcom/qihoo360/loader2/PluginCommImpl;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 597
    invoke-virtual {v1}, Lcom/qihoo360/replugin/component/ComponentList;->getReceiverMap()Ljava/util/HashMap;

    move-result-object v1

    if-eqz v1, :cond_3

    .line 599
    invoke-interface {v1}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto :goto_0

    :cond_4
    return-object v0
.end method

.method public regActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 207
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v0

    .line 208
    invoke-static {v0, p1, p2, p4, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->attachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method public regPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 231
    iget p1, p1, Lcom/qihoo360/loader2/PluginBinderInfo;->pid:I

    invoke-static {p1, p2}, Lcom/qihoo360/loader2/PluginProcessMain;->attachBinder(ILandroid/os/IBinder;)V

    return-void
.end method

.method public regReceiver(Ljava/lang/String;Ljava/util/Map;)V
    .locals 5
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 253
    invoke-static {p1, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 254
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getFrameworkVersion()I

    move-result v0

    const/4 v1, 0x4

    if-ge v0, v1, :cond_0

    goto :goto_2

    :cond_0
    if-nez p2, :cond_1

    return-void

    .line 262
    :cond_1
    check-cast p2, Ljava/util/HashMap;

    .line 265
    invoke-virtual {p2}, Ljava/util/HashMap;->entrySet()Ljava/util/Set;

    move-result-object p2

    invoke-interface {p2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p2

    :cond_2
    invoke-interface {p2}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_5

    invoke-interface {p2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 266
    iget-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mReceiverProxy:Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;

    if-nez v1, :cond_3

    .line 267
    new-instance v1, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;

    invoke-direct {v1}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;-><init>()V

    iput-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mReceiverProxy:Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;

    .line 268
    iget-object v2, p0, Lcom/qihoo360/loader2/PmHostSvc;->mActionPluginComponents:Ljava/util/HashMap;

    invoke-virtual {v1, v2}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;->setActionPluginMap(Ljava/util/HashMap;)V

    .line 272
    :cond_3
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 273
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/List;

    if-eqz v0, :cond_2

    .line 276
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/content/IntentFilter;

    .line 277
    invoke-virtual {v2}, Landroid/content/IntentFilter;->countActions()I

    move-result v3

    :goto_1
    const/4 v4, 0x1

    if-lt v3, v4, :cond_4

    add-int/lit8 v4, v3, -0x1

    .line 279
    invoke-virtual {v2, v4}, Landroid/content/IntentFilter;->getAction(I)Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v4, p1, v1}, Lcom/qihoo360/loader2/PmHostSvc;->saveAction(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    add-int/lit8 v3, v3, -0x1

    goto :goto_1

    .line 284
    :cond_4
    iget-object v3, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    iget-object v4, p0, Lcom/qihoo360/loader2/PmHostSvc;->mReceiverProxy:Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;

    invoke-virtual {v3, v4, v2}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    goto :goto_0

    :cond_5
    :goto_2
    return-void
.end method

.method public regService(ILjava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 219
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v0

    .line 220
    invoke-static {v0, p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->attachService(IILjava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method public sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 505
    invoke-direct {p0, p1, p2, v0}, Lcom/qihoo360/loader2/PmHostSvc;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;Z)V

    return-void
.end method

.method public sendIntent2PluginSync(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    .line 510
    invoke-direct {p0, p1, p2, v0}, Lcom/qihoo360/loader2/PmHostSvc;->sendIntent2Plugin(Ljava/lang/String;Landroid/content/Intent;Z)V

    return-void
.end method

.method public sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 470
    invoke-direct {p0, p1, p2, v0}, Lcom/qihoo360/loader2/PmHostSvc;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;Z)V

    return-void
.end method

.method public sendIntent2ProcessSync(Ljava/lang/String;Landroid/content/Intent;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    .line 475
    invoke-direct {p0, p1, p2, v0}, Lcom/qihoo360/loader2/PmHostSvc;->sendIntent2Process(Ljava/lang/String;Landroid/content/Intent;Z)V

    return-void
.end method

.method public startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 180
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1, p2, p3}, Lcom/qihoo360/loader2/PmBase;->startPluginProcessLocked(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1

    return-object p1
.end method

.method public sumBinders(I)I
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 308
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginProcessMain;->sumBinders(I)I

    move-result p1

    return p1
.end method

.method public unregActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 213
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v0

    .line 214
    invoke-static {v0, p1, p2, p4, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->detachActivity(IILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method public unregPluginBinder(Lcom/qihoo360/loader2/PluginBinderInfo;Landroid/os/IBinder;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 236
    iget v0, p1, Lcom/qihoo360/loader2/PluginBinderInfo;->pid:I

    invoke-static {v0, p2}, Lcom/qihoo360/loader2/PluginProcessMain;->detachBinder(ILandroid/os/IBinder;)V

    .line 239
    iget p2, p1, Lcom/qihoo360/loader2/PluginBinderInfo;->pid:I

    invoke-static {p2, p1}, Lcom/qihoo360/loader2/PluginProcessMain;->probePluginClientByPid(ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1

    if-nez p1, :cond_1

    .line 241
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    const-string p1, "ws001"

    const-string p2, "unregPluginBinder ... client is null"

    .line 242
    invoke-static {p1, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 248
    :cond_1
    invoke-interface {p1}, Lcom/qihoo360/loader2/IPluginClient;->releaseBinder()V

    return-void
.end method

.method public unregReceiver()V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 293
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/qihoo360/loader2/PmHostSvc;->mReceiverProxy:Lcom/qihoo360/replugin/component/receiver/PluginReceiverProxy;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 295
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    .line 296
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "unregProxyReceiver failed, "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ms-receiver"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    :goto_0
    return-void
.end method

.method public unregService(ILjava/lang/String;Ljava/lang/String;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 225
    invoke-static {}, Landroid/os/Binder;->getCallingPid()I

    move-result v0

    .line 226
    invoke-static {v0, p1, p2, p3}, Lcom/qihoo360/loader2/PluginProcessMain;->detachService(IILjava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method public updatePluginInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 314
    iget-object v0, p0, Lcom/qihoo360/loader2/PmHostSvc;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/loader2/PmBase;->getPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 316
    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/Plugin;->replaceInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    .line 318
    :cond_0
    invoke-static {p1}, Lcom/qihoo360/loader2/PluginTable;->replaceInfo(Lcom/qihoo360/replugin/model/PluginInfo;)V

    return-void
.end method

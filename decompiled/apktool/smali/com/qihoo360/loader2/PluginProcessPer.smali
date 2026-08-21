.class Lcom/qihoo360/loader2/PluginProcessPer;
.super Lcom/qihoo360/loader2/IPluginClient$Stub;
.source "PluginProcessPer.java"


# instance fields
.field final mACM:Lcom/qihoo360/loader2/PluginContainers;

.field private final mContext:Landroid/content/Context;

.field private mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

.field private final mPluginMgr:Lcom/qihoo360/loader2/PmBase;

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

.field final mServiceMgr:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/qihoo360/loader2/PmBase;ILjava/util/HashSet;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Lcom/qihoo360/loader2/PmBase;",
            "I",
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 68
    invoke-direct {p0}, Lcom/qihoo360/loader2/IPluginClient$Stub;-><init>()V

    .line 66
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mReceivers:Ljava/util/HashMap;

    .line 69
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mContext:Landroid/content/Context;

    .line 70
    iput-object p2, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    .line 71
    new-instance p2, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    invoke-direct {p2, p1}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mServiceMgr:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    .line 74
    new-instance p1, Lcom/qihoo360/loader2/PluginContainers;

    invoke-direct {p1}, Lcom/qihoo360/loader2/PluginContainers;-><init>()V

    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    .line 75
    invoke-virtual {p1, p3, p4}, Lcom/qihoo360/loader2/PluginContainers;->init(ILjava/util/HashSet;)V

    return-void
.end method

.method private sendIntent(Landroid/content/Intent;Z)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 231
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 232
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "sendIntent pr="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " intent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 234
    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/content/Intent;->setExtrasClassLoader(Ljava/lang/ClassLoader;)V

    if-eqz p2, :cond_1

    .line 236
    iget-object p2, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mContext:Landroid/content/Context;

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/base/LocalBroadcastHelper;->sendBroadcastSyncUi(Landroid/content/Context;Landroid/content/Intent;)V

    goto :goto_0

    .line 238
    :cond_1
    iget-object p2, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mContext:Landroid/content/Context;

    invoke-static {p2}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->sendBroadcast(Landroid/content/Intent;)Z

    :goto_0
    return-void
.end method


# virtual methods
.method public allocActivityContainer(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 138
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object v0

    invoke-virtual {v0, p4}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onPrepareAllocPitActivity(Landroid/content/Intent;)V

    .line 143
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isUIProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p2, -0x1

    .line 151
    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const-string v1, "ws001"

    if-eqz v0, :cond_2

    .line 152
    iget-object p1, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    if-nez p1, :cond_1

    const-string p1, "a.a.c p i n"

    .line 154
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    const/4 p1, 0x0

    return-object p1

    .line 158
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    .line 161
    :cond_2
    invoke-virtual {p0, p1, p2, p3, p4}, Lcom/qihoo360/loader2/PluginProcessPer;->bindActivity(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;

    move-result-object p2

    .line 162
    sget-boolean p4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p4, :cond_3

    .line 163
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PACM: eval plugin "

    invoke-virtual {p4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ", target="

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ", container="

    invoke-virtual {p4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object p2
.end method

.method final bindActivity(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;
    .locals 11

    .line 264
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-nez v0, :cond_1

    .line 266
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 267
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "PACM: bindActivity: may be invalid plugin name or load plugin failed: plugin="

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v1

    .line 273
    :cond_1
    iget-object v3, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v3, v3, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {v3, p3}, Lcom/qihoo360/replugin/component/ComponentList;->getActivity(Ljava/lang/String;)Landroid/content/pm/ActivityInfo;

    move-result-object v5

    if-nez v5, :cond_3

    .line 275
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    .line 276
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PACM: bindActivity: activity not found: activity="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-object v1

    .line 281
    :cond_3
    iget-object v3, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-nez v3, :cond_4

    .line 282
    iget-object v3, v5, Landroid/content/pm/ActivityInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v3, v3, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    iput-object v3, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 284
    :cond_4
    iget-object v3, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-nez v3, :cond_5

    .line 285
    iget-object v3, v5, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    iput-object v3, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 292
    :cond_5
    iget-object v3, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    const-string v4, ":p"

    invoke-virtual {v3, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_6

    .line 293
    iget-object v3, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-static {v3}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->processTail(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    .line 294
    iget-object v4, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    move-object v6, p1

    move-object v7, p3

    move v8, p2

    move-object v9, p4

    invoke-virtual/range {v4 .. v10}, Lcom/qihoo360/loader2/PluginContainers;->alloc2(Landroid/content/pm/ActivityInfo;Ljava/lang/String;Ljava/lang/String;ILandroid/content/Intent;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    .line 296
    :cond_6
    iget-object v4, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    move-object v6, p1

    move-object v7, p3

    move v8, p2

    move-object v9, p4

    invoke-virtual/range {v4 .. v9}, Lcom/qihoo360/loader2/PluginContainers;->alloc(Landroid/content/pm/ActivityInfo;Ljava/lang/String;Ljava/lang/String;ILandroid/content/Intent;)Ljava/lang/String;

    move-result-object p1

    .line 299
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_8

    .line 300
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_7

    const-string p1, "PACM: bindActivity: activity container is empty"

    .line 301
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    return-object v1

    .line 306
    :cond_8
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_9

    .line 307
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "PACM: bindActivity: lookup activity container: container="

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 313
    :cond_9
    :try_start_0
    iget-object p2, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p2, p2, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    invoke-virtual {p2, p3}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 316
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p4

    invoke-static {v2, p4, p2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    move-object p2, v1

    :goto_1
    if-nez p2, :cond_b

    .line 320
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_a

    .line 321
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PACM: bindActivity: plugin activity class not found: c="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return-object v1

    :cond_b
    return-object p1
.end method

.method public dumpActivities()Ljava/lang/String;
    .locals 1

    .line 356
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    invoke-virtual {v0}, Lcom/qihoo360/loader2/PluginContainers;->dump()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public dumpServices()Ljava/lang/String;
    .locals 3

    .line 337
    :try_start_0
    invoke-virtual {p0}, Lcom/qihoo360/loader2/PluginProcessPer;->fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v0, :cond_0

    .line 340
    :try_start_1
    invoke-interface {v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->dump()Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    :try_start_2
    const-string v1, "ws001"

    const-string v2, "psc.sts: pss e"

    .line 343
    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I
    :try_end_2
    .catch Landroid/os/RemoteException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 348
    invoke-virtual {v0}, Landroid/os/RemoteException;->printStackTrace()V

    :cond_0
    :goto_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public fetchServiceServer()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 249
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mServiceMgr:Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;

    invoke-virtual {v0}, Lcom/qihoo360/replugin/component/service/server/PluginServiceServer;->getService()Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object v0

    return-object v0
.end method

.method final init(Lcom/qihoo360/loader2/Plugin;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    return-void
.end method

.method public onReceive(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)V
    .locals 1

    .line 331
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mReceivers:Ljava/util/HashMap;

    invoke-static {p1, p2, v0, p3}, Lcom/qihoo360/replugin/component/receiver/PluginReceiverHelper;->onPluginReceiverReceived(Ljava/lang/String;Ljava/lang/String;Ljava/util/HashMap;Landroid/content/Intent;)V

    return-void
.end method

.method public queryBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 4
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 171
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 172
    iget-object p1, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mDefaultPlugin:Lcom/qihoo360/loader2/Plugin;

    goto :goto_0

    .line 174
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    :goto_0
    const/4 v0, 0x0

    const-string v1, "ws001"

    if-nez p1, :cond_1

    const-string p1, "q.b p i n"

    .line 179
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 183
    :cond_1
    iget-object v2, p1, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    if-nez v2, :cond_2

    const-string p1, "q.b p l i n"

    .line 185
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 189
    :cond_2
    iget-object v2, p1, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v2, v2, Lcom/qihoo360/loader2/Loader;->mBinderPlugin:Lcom/qihoo360/loader2/Loader$ProxyPlugin;

    if-nez v2, :cond_3

    const-string p1, "q.b p l b i n"

    .line 191
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 195
    :cond_3
    iget-object v2, p1, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v2, v2, Lcom/qihoo360/loader2/Loader;->mBinderPlugin:Lcom/qihoo360/loader2/Loader$ProxyPlugin;

    iget-object v2, v2, Lcom/qihoo360/loader2/Loader$ProxyPlugin;->mPlugin:Lcom/qihoo360/loader2/IPlugin;

    if-nez v2, :cond_4

    const-string p1, "q.b p l b p i n"

    .line 197
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v0

    .line 201
    :cond_4
    iget-object v0, p1, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader;->mBinderPlugin:Lcom/qihoo360/loader2/Loader$ProxyPlugin;

    iget-object v0, v0, Lcom/qihoo360/loader2/Loader$ProxyPlugin;->mPlugin:Lcom/qihoo360/loader2/IPlugin;

    invoke-interface {v0, p2}, Lcom/qihoo360/loader2/IPlugin;->query(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object v0

    .line 202
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_5

    .line 203
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "PluginImpl.query: call plugin aidl: plugin="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p1, p1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " binder.name="

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " binder.object="

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v0
.end method

.method public releaseBinder()V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 213
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    const-string v0, "ws001"

    const-string v1, "PluginImpl.releaseBinder"

    .line 214
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 217
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onBinderReleased()V

    return-void
.end method

.method final resolveActivityClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .line 92
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PluginContainers;->lookupByContainer(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginContainers$ActivityState;

    move-result-object v0

    const-string v1, "ws001"

    if-nez v0, :cond_0

    .line 96
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "use f.a, c="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 98
    const-class p1, Lcom/qihoo360/replugin/component/dummy/ForwardActivity;

    return-object p1

    .line 100
    :cond_0
    iget-object v2, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->plugin:Ljava/lang/String;

    .line 101
    iget-object v0, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->activity:Ljava/lang/String;

    .line 103
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_1

    .line 104
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "PACM: loadActivityClass in="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " target="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, " plugin="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 107
    :cond_1
    iget-object v3, p0, Lcom/qihoo360/loader2/PluginProcessPer;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v3, v2}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v3

    const/4 v4, 0x0

    if-nez v3, :cond_2

    .line 111
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "load fail: c="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " p="

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " t="

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v4

    .line 116
    :cond_2
    invoke-virtual {v3}, Lcom/qihoo360/loader2/Plugin;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    .line 117
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_3

    .line 118
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "PACM: loadActivityClass, plugin activity loader: in="

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " activity="

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 122
    :cond_3
    :try_start_0
    invoke-virtual {v2, v0}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v4
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 125
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 128
    :goto_0
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    .line 129
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PACM: loadActivityClass, plugin activity loader: c="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v0, ", loader="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return-object v4
.end method

.method public sendIntent(Landroid/content/Intent;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x0

    .line 222
    invoke-direct {p0, p1, v0}, Lcom/qihoo360/loader2/PluginProcessPer;->sendIntent(Landroid/content/Intent;Z)V

    return-void
.end method

.method public sendIntentSync(Landroid/content/Intent;)V
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    const/4 v0, 0x1

    .line 227
    invoke-direct {p0, p1, v0}, Lcom/qihoo360/loader2/PluginProcessPer;->sendIntent(Landroid/content/Intent;Z)V

    return-void
.end method

.method public sumActivities()I
    .locals 1
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 244
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->sumActivities()I

    move-result v0

    return v0
.end method

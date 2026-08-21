.class public Lcom/qihoo360/replugin/component/service/PluginServiceClient;
.super Ljava/lang/Object;
.source "PluginServiceClient.java"


# static fields
.field static final PROCESS_UNKNOWN:I = 0x7fffffff

.field private static final TAG:Ljava/lang/String; = "PluginServiceClient"

.field private static sClientHandler:Landroid/os/Handler;

.field private static sClientMessenger:Landroid/os/Messenger;

.field private static sDispatcherManager:Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;

.field private static sServerFetcher:Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 55
    new-instance v0, Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;

    invoke-direct {v0}, Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sServerFetcher:Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;

    .line 56
    new-instance v0, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;

    invoke-direct {v0}, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;-><init>()V

    sput-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sDispatcherManager:Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;

    .line 58
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientHandler:Landroid/os/Handler;

    .line 59
    new-instance v0, Landroid/os/Messenger;

    sget-object v1, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientHandler:Landroid/os/Handler;

    invoke-direct {v0, v1}, Landroid/os/Messenger;-><init>(Landroid/os/Handler;)V

    sput-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientMessenger:Landroid/os/Messenger;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static bindService(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z
    .locals 1

    const/4 v0, 0x0

    .line 179
    invoke-static {p0, p1, p2, p3, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->bindService(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;IZ)Z

    move-result p0

    return p0
.end method

.method public static bindService(Landroid/content/Context;Landroid/content/Intent;Landroid/content/ServiceConnection;IZ)Z
    .locals 8

    .line 185
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getComponentNameByContext(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/content/ComponentName;

    move-result-object v0

    .line 188
    invoke-static {v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->getProcessByComponentName(Landroid/content/ComponentName;)I

    move-result v6

    const-string v7, "ws001"

    const v1, 0x7fffffff

    if-ne v6, v1, :cond_2

    .line 191
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 192
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PSS.bindService(): Call SystemAPI: in="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v7, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-nez p4, :cond_1

    .line 197
    invoke-virtual {p0, p1, p2, p3}, Landroid/content/Context;->bindService(Landroid/content/Intent;Landroid/content/ServiceConnection;I)Z

    move-result p0

    return p0

    .line 195
    :cond_1
    new-instance p0, Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem;

    invoke-direct {p0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem;-><init>()V

    throw p0

    .line 202
    :cond_2
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 204
    sget-object p4, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sServerFetcher:Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;

    invoke-virtual {p4, v6}, Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;->fetchByProcess(I)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object p4

    const/4 v0, 0x0

    if-nez p4, :cond_3

    const-string p0, "psc.bs: pss n"

    .line 207
    invoke-static {v7, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v0

    .line 214
    :cond_3
    :try_start_0
    sget-object v1, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sDispatcherManager:Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;

    sget-object v4, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientHandler:Landroid/os/Handler;

    move-object v2, p2

    move-object v3, p0

    move v5, p3

    invoke-virtual/range {v1 .. v6}, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->get(Landroid/content/ServiceConnection;Landroid/content/Context;Landroid/os/Handler;II)Lcom/qihoo360/replugin/component/service/ServiceDispatcher;

    move-result-object p0

    .line 215
    invoke-virtual {p0}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->getIServiceConnection()Lcom/qihoo360/loader2/mgr/IServiceConnection;

    move-result-object p0

    sget-object p2, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientMessenger:Landroid/os/Messenger;

    invoke-interface {p4, p1, p0, p3, p2}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->bindService(Landroid/content/Intent;Lcom/qihoo360/loader2/mgr/IServiceConnection;ILandroid/os/Messenger;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_4

    const/4 v0, 0x1

    :cond_4
    return v0

    :catchall_0
    move-exception p0

    const-string p1, "psc.bs: pss e"

    .line 220
    invoke-static {v7, p1, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return v0
.end method

.method private static getProcessByComponentName(Landroid/content/ComponentName;)I
    .locals 4

    const v0, 0x7fffffff

    if-nez p0, :cond_0

    return v0

    .line 300
    :cond_0
    invoke-virtual {p0}, Landroid/content/ComponentName;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 302
    invoke-static {v1}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v2

    const-string v3, "PluginServiceClient"

    if-nez v2, :cond_2

    .line 304
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_1

    .line 305
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getProcessByComponentName(): Fetch Component List Error! pn="

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return v0

    .line 309
    :cond_2
    invoke-virtual {p0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/qihoo360/replugin/component/ComponentList;->getService(Ljava/lang/String;)Landroid/content/pm/ServiceInfo;

    move-result-object p0

    if-nez p0, :cond_4

    .line 311
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_3

    .line 312
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getProcessByComponentName(): Not register! pn="

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return v0

    .line 316
    :cond_4
    iget-object p0, p0, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    invoke-static {p0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getProcessInt(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    .line 317
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_5

    .line 318
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getProcessByComponentName(): Okay! Process="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "; pn="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return p0
.end method

.method private static getServiceComponentFromIntent(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;
    .locals 2

    .line 327
    invoke-virtual {p0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    .line 328
    invoke-static {v0}, Lcom/qihoo360/i/Factory;->fetchPluginName(Ljava/lang/ClassLoader;)Ljava/lang/String;

    move-result-object v0

    .line 331
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 333
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getComponentNameByContext(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/content/ComponentName;

    move-result-object p0

    return-object p0

    .line 337
    :cond_0
    invoke-virtual {p1}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 338
    invoke-static {v0}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 341
    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/replugin/component/ComponentList;->getServiceAndPluginByIntent(Landroid/content/Context;Landroid/content/Intent;)Landroid/util/Pair;

    move-result-object p0

    if-eqz p0, :cond_2

    .line 343
    new-instance p1, Landroid/content/ComponentName;

    iget-object v0, p0, Landroid/util/Pair;->second:Ljava/lang/Object;

    check-cast v0, Ljava/lang/String;

    iget-object p0, p0, Landroid/util/Pair;->first:Ljava/lang/Object;

    check-cast p0, Landroid/content/pm/ServiceInfo;

    iget-object p0, p0, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    invoke-direct {p1, v0, p0}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object p1

    .line 347
    :cond_1
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_2

    const-string p0, "ws001"

    const-string p1, "PSS.startService(): No Component and no Action"

    .line 348
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p0, 0x0

    return-object p0
.end method

.method public static startService(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;
    .locals 1

    const/4 v0, 0x0

    .line 70
    invoke-static {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->startService(Landroid/content/Context;Landroid/content/Intent;Z)Landroid/content/ComponentName;

    move-result-object p0

    return-object p0
.end method

.method public static startService(Landroid/content/Context;Landroid/content/Intent;Z)Landroid/content/ComponentName;
    .locals 4

    .line 77
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->getServiceComponentFromIntent(Landroid/content/Context;Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object v0

    .line 80
    invoke-static {v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->getProcessByComponentName(Landroid/content/ComponentName;)I

    move-result v1

    const-string v2, "ws001"

    const v3, 0x7fffffff

    if-ne v1, v3, :cond_2

    .line 83
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 84
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PSS.startService(): Call SystemAPI: in="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-nez p2, :cond_1

    .line 89
    invoke-virtual {p0, p1}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    move-result-object p0

    return-object p0

    .line 87
    :cond_1
    new-instance p0, Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem;

    invoke-direct {p0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem;-><init>()V

    throw p0

    .line 94
    :cond_2
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 96
    sget-object p0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sServerFetcher:Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;

    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;->fetchByProcess(I)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object p0

    const/4 p2, 0x0

    if-nez p0, :cond_3

    const-string p0, "psc.ss: pss n"

    .line 99
    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object p2

    .line 106
    :cond_3
    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientMessenger:Landroid/os/Messenger;

    invoke-interface {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->startService(Landroid/content/Intent;Landroid/os/Messenger;)Landroid/content/ComponentName;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    const-string p1, "psc.ss: pss e"

    .line 109
    invoke-static {v2, p1, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-object p2
.end method

.method public static stopSelf(Landroid/app/Service;)V
    .locals 2

    .line 284
    new-instance v0, Landroid/content/Intent;

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 286
    :try_start_0
    invoke-static {v0}, Lcom/qihoo360/loader2/PMF;->stopService(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string v0, "ws001"

    const-string v1, "pss.ss: pf f"

    .line 289
    invoke-static {v0, v1, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_0
    return-void
.end method

.method public static stopService(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 1

    const/4 v0, 0x0

    .line 124
    invoke-static {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->stopService(Landroid/content/Context;Landroid/content/Intent;Z)Z

    move-result p0

    return p0
.end method

.method public static stopService(Landroid/content/Context;Landroid/content/Intent;Z)Z
    .locals 4

    .line 130
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getComponentNameByContext(Landroid/content/Context;Landroid/content/ComponentName;)Landroid/content/ComponentName;

    move-result-object v0

    .line 133
    invoke-static {v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->getProcessByComponentName(Landroid/content/ComponentName;)I

    move-result v1

    const-string v2, "ws001"

    const v3, 0x7fffffff

    if-ne v1, v3, :cond_2

    .line 136
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 137
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PSS.stopService(): Call SystemAPI: in="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-nez p2, :cond_1

    .line 142
    invoke-virtual {p0, p1}, Landroid/content/Context;->stopService(Landroid/content/Intent;)Z

    move-result p0

    return p0

    .line 140
    :cond_1
    new-instance p0, Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem;

    invoke-direct {p0}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper$ShouldCallSystem;-><init>()V

    throw p0

    .line 147
    :cond_2
    invoke-virtual {p1, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 149
    sget-object p0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sServerFetcher:Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;

    invoke-virtual {p0, v1}, Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;->fetchByProcess(I)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object p0

    const/4 p2, 0x0

    if-nez p0, :cond_3

    const-string p0, "psc.sts: pss n"

    .line 152
    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return p2

    .line 159
    :cond_3
    :try_start_0
    sget-object v0, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sClientMessenger:Landroid/os/Messenger;

    invoke-interface {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->stopService(Landroid/content/Intent;Landroid/os/Messenger;)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz p0, :cond_4

    const/4 p2, 0x1

    :cond_4
    return p2

    :catchall_0
    move-exception p0

    const-string p1, "psc.sts: pss e"

    .line 162
    invoke-static {v2, p1, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return p2
.end method

.method public static unbindService(Landroid/content/Context;Landroid/content/ServiceConnection;)Z
    .locals 1

    const/4 v0, 0x1

    .line 234
    invoke-static {p0, p1, v0}, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->unbindService(Landroid/content/Context;Landroid/content/ServiceConnection;Z)Z

    move-result p0

    return p0
.end method

.method public static unbindService(Landroid/content/Context;Landroid/content/ServiceConnection;Z)Z
    .locals 2

    const-string v0, "ws001"

    if-eqz p2, :cond_1

    .line 242
    :try_start_0
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 243
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "PSS.unbindService(): First, We call SystemAPI: sc="

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 245
    :cond_0
    invoke-virtual {p0, p1}, Landroid/content/Context;->unbindService(Landroid/content/ServiceConnection;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 252
    :catchall_0
    :cond_1
    sget-object p2, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sDispatcherManager:Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;

    invoke-virtual {p2, p0, p1}, Lcom/qihoo360/replugin/component/service/PluginServiceDispatcherManager;->forget(Landroid/content/Context;Landroid/content/ServiceConnection;)Lcom/qihoo360/replugin/component/service/ServiceDispatcher;

    move-result-object p0

    const/4 p1, 0x0

    if-nez p0, :cond_2

    const-string p0, "psc.us: sd n"

    .line 255
    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    .line 259
    :cond_2
    sget-object p2, Lcom/qihoo360/replugin/component/service/PluginServiceClient;->sServerFetcher:Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;

    invoke-virtual {p0}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->getProcess()I

    move-result v1

    invoke-virtual {p2, v1}, Lcom/qihoo360/replugin/component/service/PluginServiceServerFetcher;->fetchByProcess(I)Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;

    move-result-object p2

    if-nez p2, :cond_3

    const-string p0, "psc.us: pss n"

    .line 262
    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    .line 267
    :cond_3
    :try_start_1
    invoke-virtual {p0}, Lcom/qihoo360/replugin/component/service/ServiceDispatcher;->getIServiceConnection()Lcom/qihoo360/loader2/mgr/IServiceConnection;

    move-result-object p0

    invoke-interface {p2, p0}, Lcom/qihoo360/replugin/component/service/server/IPluginServiceServer;->unbindService(Lcom/qihoo360/loader2/mgr/IServiceConnection;)Z

    move-result p0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    return p0

    :catchall_1
    move-exception p0

    const-string p2, "psc.us: pss e"

    .line 270
    invoke-static {v0, p2, p0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return p1
.end method

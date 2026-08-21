.class public Lcom/qihoo360/loader2/PluginCommImpl;
.super Ljava/lang/Object;
.source "PluginCommImpl.java"


# static fields
.field private static final CONTAINER_PROVIDER_AUTHORITY_PART:Ljava/lang/String; = ".loader.p.pr"

.field static final INTENT_KEY_THEME_ID:Ljava/lang/String; = "__themeId"


# instance fields
.field mContext:Landroid/content/Context;

.field mPluginMgr:Lcom/qihoo360/loader2/PmBase;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/qihoo360/loader2/PmBase;)V
    .locals 0

    .line 73
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 74
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mContext:Landroid/content/Context;

    .line 75
    iput-object p2, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    return-void
.end method


# virtual methods
.method public fetchPluginName(Ljava/lang/ClassLoader;)Ljava/lang/String;
    .locals 1

    .line 539
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mContext:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    if-ne p1, v0, :cond_0

    const-string p1, "main"

    return-object p1

    .line 543
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->lookupPlugin(Ljava/lang/ClassLoader;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    if-nez p1, :cond_1

    const/4 p1, 0x0

    return-object p1

    .line 548
    :cond_1
    iget-object p1, p1, Lcom/qihoo360/loader2/Plugin;->mInfo:Lcom/qihoo360/replugin/model/PluginInfo;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public getActivityInfo(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/pm/ActivityInfo;
    .locals 2

    .line 561
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-nez v0, :cond_1

    .line 563
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 564
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "PACM: bindActivity: may be invalid plugin name or load plugin failed: plugin="

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ws001"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, 0x0

    return-object p1

    .line 572
    :cond_1
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 573
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    invoke-virtual {p1, p2}, Lcom/qihoo360/replugin/component/ComponentList;->getActivity(Ljava/lang/String;)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    goto :goto_0

    .line 576
    :cond_2
    iget-object p2, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mContext:Landroid/content/Context;

    invoke-static {p2, p1, p3}, Lcom/qihoo360/replugin/component/utils/IntentMatcherHelper;->getActivityInfo(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/pm/ActivityInfo;

    move-result-object p1

    :goto_0
    return-object p1
.end method

.method public isPluginLoaded(Ljava/lang/String;)Z
    .locals 2

    .line 83
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 84
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "isPluginLoaded: name="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 86
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->getPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object p1

    if-nez p1, :cond_1

    const/4 p1, 0x0

    return p1

    .line 90
    :cond_1
    invoke-virtual {p1}, Lcom/qihoo360/loader2/Plugin;->isLoaded()Z

    move-result p1

    return p1
.end method

.method public loadPluginActivity(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Landroid/content/ComponentName;
    .locals 10

    const-string v0, "ws001"

    .line 407
    new-instance v1, Lcom/qihoo360/loader2/PluginBinderInfo;

    const/4 v2, 0x1

    invoke-direct {v1, v2}, Lcom/qihoo360/loader2/PluginBinderInfo;-><init>(I)V

    const/4 v3, 0x0

    const/4 v4, 0x0

    .line 411
    :try_start_0
    invoke-virtual {p0, p2, p3, p1}, Lcom/qihoo360/loader2/PluginCommImpl;->getActivityInfo(Ljava/lang/String;Ljava/lang/String;Landroid/content/Intent;)Landroid/content/pm/ActivityInfo;

    move-result-object v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    if-nez v5, :cond_1

    .line 413
    :try_start_1
    sget-boolean p3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p3, :cond_0

    const-string p3, "PACM: bindActivity: activity not found"

    .line 414
    invoke-static {v0, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v4

    :cond_1
    const-string v6, "__themeId"

    .line 420
    iget v7, v5, Landroid/content/pm/ActivityInfo;->theme:I

    invoke-virtual {p1, v6, v7}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    .line 421
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_2

    const-string v6, "theme"

    const-string v7, "intent.putExtra(%s, %s);"

    const/4 v8, 0x2

    new-array v8, v8, [Ljava/lang/Object;

    .line 422
    iget-object v9, v5, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    aput-object v9, v8, v3

    iget v9, v5, Landroid/content/pm/ActivityInfo;->theme:I

    invoke-static {v9}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v9

    aput-object v9, v8, v2

    invoke-static {v7, v8}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v6, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 426
    :cond_2
    iget-object v2, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-eqz v2, :cond_3

    .line 427
    iget-object p4, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    invoke-static {p4}, Lcom/qihoo360/replugin/component/utils/PluginClientHelper;->getProcessInt(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p4

    invoke-virtual {p4}, Ljava/lang/Integer;->intValue()I

    move-result p4

    .line 431
    :cond_3
    invoke-static {p2, p4, v1}, Lcom/qihoo360/loader2/MP;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object v1

    if-nez v1, :cond_4

    return-object v4

    .line 437
    :cond_4
    iget-object v2, v5, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-interface {v1, p2, p4, v2, p1}, Lcom/qihoo360/loader2/IPluginClient;->allocActivityContainer(Ljava/lang/String;ILjava/lang/String;Landroid/content/Intent;)Ljava/lang/String;

    move-result-object p4
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    .line 438
    :try_start_2
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_5

    .line 439
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "alloc success: container="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " plugin="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " activity="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v0, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p3

    goto :goto_0

    :catchall_1
    move-exception p3

    move-object p4, v4

    goto :goto_0

    :catchall_2
    move-exception p3

    move-object p4, v4

    move-object v5, p4

    .line 443
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "l.p.a spp|aac: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1, p3}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 448
    :cond_5
    :goto_1
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-eqz p3, :cond_6

    return-object v4

    .line 452
    :cond_6
    invoke-static {p1}, Lcom/qihoo360/loader2/PmBase;->cleanIntentPluginParams(Landroid/content/Intent;)V

    .line 461
    new-instance p3, Lcom/qihoo360/loader2/PluginIntent;

    invoke-direct {p3, p1}, Lcom/qihoo360/loader2/PluginIntent;-><init>(Landroid/content/Intent;)V

    .line 462
    invoke-virtual {p3, p2}, Lcom/qihoo360/loader2/PluginIntent;->setPlugin(Ljava/lang/String;)V

    .line 463
    iget-object p1, v5, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {p3, p1}, Lcom/qihoo360/loader2/PluginIntent;->setActivity(Ljava/lang/String;)V

    const/high16 p1, -0x80000000

    .line 464
    invoke-virtual {p3, p1}, Lcom/qihoo360/loader2/PluginIntent;->setProcess(I)V

    .line 465
    invoke-virtual {p3, p4}, Lcom/qihoo360/loader2/PluginIntent;->setContainer(Ljava/lang/String;)V

    .line 466
    invoke-virtual {p3, v3}, Lcom/qihoo360/loader2/PluginIntent;->setCounter(I)V

    .line 467
    new-instance p1, Landroid/content/ComponentName;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object p2

    invoke-direct {p1, p2, p4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object p1
.end method

.method public loadPluginClassLoader(Lcom/qihoo360/replugin/model/PluginInfo;)Ljava/lang/ClassLoader;
    .locals 3

    .line 335
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    const/4 v1, 0x2

    const/4 v2, 0x0

    invoke-virtual {v0, p1, p0, v1, v2}, Lcom/qihoo360/loader2/PmBase;->loadPlugin(Lcom/qihoo360/replugin/model/PluginInfo;Lcom/qihoo360/loader2/PluginCommImpl;IZ)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 337
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    return-object p1

    .line 340
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 341
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "not found plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public loadPluginProvider(Ljava/lang/String;Ljava/lang/String;I)Landroid/net/Uri;
    .locals 1

    .line 510
    new-instance p2, Lcom/qihoo360/loader2/PluginBinderInfo;

    const/4 v0, 0x3

    invoke-direct {p2, v0}, Lcom/qihoo360/loader2/PluginBinderInfo;-><init>(I)V

    const/4 v0, 0x0

    .line 513
    :try_start_0
    invoke-static {p1, p3, p2}, Lcom/qihoo360/loader2/MP;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1

    if-nez p1, :cond_0

    return-object v0

    .line 518
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ".loader.p.pr"

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p2, Lcom/qihoo360/loader2/PluginBinderInfo;->index:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 521
    new-instance p2, Landroid/net/Uri$Builder;

    invoke-direct {p2}, Landroid/net/Uri$Builder;-><init>()V

    const-string p3, "content"

    invoke-virtual {p2, p3}, Landroid/net/Uri$Builder;->scheme(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p2

    invoke-virtual {p2, p1}, Landroid/net/Uri$Builder;->encodedAuthority(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p1

    const-string p2, "main"

    invoke-virtual {p1, p2}, Landroid/net/Uri$Builder;->encodedPath(Ljava/lang/String;)Landroid/net/Uri$Builder;

    move-result-object p1

    invoke-virtual {p1}, Landroid/net/Uri$Builder;->build()Landroid/net/Uri;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 524
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "l.p.p spp: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "ws001"

    invoke-static {p3, p2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-object v0
.end method

.method public loadPluginService(Ljava/lang/String;Ljava/lang/String;I)Landroid/content/ComponentName;
    .locals 1

    .line 480
    new-instance p2, Lcom/qihoo360/loader2/PluginBinderInfo;

    const/4 v0, 0x2

    invoke-direct {p2, v0}, Lcom/qihoo360/loader2/PluginBinderInfo;-><init>(I)V

    const/4 v0, 0x0

    .line 483
    :try_start_0
    invoke-static {p1, p3, p2}, Lcom/qihoo360/loader2/MP;->startPluginProcess(Ljava/lang/String;ILcom/qihoo360/loader2/PluginBinderInfo;)Lcom/qihoo360/loader2/IPluginClient;

    move-result-object p1

    if-nez p1, :cond_0

    return-object v0

    .line 489
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, ".loader.s.Service"

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget p2, p2, Lcom/qihoo360/loader2/PluginBinderInfo;->index:I

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 491
    new-instance p2, Landroid/content/ComponentName;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object p3

    invoke-direct {p2, p3, p1}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p2

    :catchall_0
    move-exception p1

    .line 494
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "l.p.p spp: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "ws001"

    invoke-static {p3, p2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    return-object v0
.end method

.method public query(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 4

    .line 126
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, " binder="

    const-string v2, "ws001"

    if-eqz v0, :cond_0

    .line 127
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "query: name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 132
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->getBuiltinPlugin(Ljava/lang/String;)Lcom/qihoo360/replugin/IHostBinderFetcher;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 134
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_1

    const-string p1, "use buildin plugin"

    .line 135
    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 137
    :cond_1
    invoke-interface {v0, p2}, Lcom/qihoo360/replugin/IHostBinderFetcher;->query(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    .line 141
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-nez v0, :cond_4

    .line 143
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_3

    .line 144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "query: not found plugin,  name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const/4 p1, 0x0

    return-object p1

    .line 149
    :cond_4
    invoke-virtual {v0, p2}, Lcom/qihoo360/loader2/Plugin;->query(Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public query(Ljava/lang/String;Ljava/lang/String;I)Landroid/os/IBinder;
    .locals 3

    .line 160
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    const/4 v1, -0x2

    if-eqz v0, :cond_0

    if-ne p3, v1, :cond_0

    .line 161
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/PluginCommImpl;->query(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    .line 164
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isUIProcess()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v0, -0x1

    if-ne p3, v0, :cond_1

    .line 165
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/PluginCommImpl;->query(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    .line 168
    :cond_1
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->processTail(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 169
    sget-object v2, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->PROCESS_INT_MAP:Ljava/util/Map;

    invoke-interface {v2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    sget-object v2, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->PROCESS_INT_MAP:Ljava/util/Map;

    .line 170
    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-ne p3, v0, :cond_2

    .line 171
    invoke-virtual {p0, p1, p2}, Lcom/qihoo360/loader2/PluginCommImpl;->query(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1

    :cond_2
    if-ne p3, v1, :cond_3

    .line 177
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object p3

    invoke-interface {p3, p1, p2}, Lcom/qihoo360/loader2/IPluginHost;->queryPluginBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 180
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "q.p.b: "

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string p3, "ws001"

    invoke-static {p3, p2, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    const/4 p1, 0x0

    return-object p1

    .line 186
    :cond_3
    iget-object p3, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mContext:Landroid/content/Context;

    invoke-static {p3, p1, p2}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getPluginService(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p1

    return-object p1
.end method

.method public query(Ljava/lang/String;Ljava/lang/Class;)Lcom/qihoo360/i/IModule;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/Class<",
            "+",
            "Lcom/qihoo360/i/IModule;",
            ">;)",
            "Lcom/qihoo360/i/IModule;"
        }
    .end annotation

    .line 100
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, " class="

    const-string v2, "ws001"

    if-eqz v0, :cond_0

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "query: name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 104
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->getBuiltinModules(Ljava/lang/String;)Ljava/util/HashMap;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 106
    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/qihoo360/i/IModule;

    return-object p1

    .line 109
    :cond_1
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-nez v0, :cond_3

    .line 111
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 112
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "query: not found plugin,  name="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p1, 0x0

    return-object p1

    .line 117
    :cond_3
    invoke-virtual {v0, p2}, Lcom/qihoo360/loader2/Plugin;->query(Ljava/lang/Class;)Lcom/qihoo360/i/IModule;

    move-result-object p1

    return-object p1
.end method

.method public queryPluginClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;
    .locals 2

    .line 308
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/loader2/Plugin;->queryCachedClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 313
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1, p0}, Lcom/qihoo360/loader2/PmBase;->loadDexPlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 315
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mClassLoader:Ljava/lang/ClassLoader;

    return-object p1

    .line 318
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 319
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "not found plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;
    .locals 2

    .line 283
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/loader2/Plugin;->queryCachedComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 288
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1, p0}, Lcom/qihoo360/loader2/PmBase;->loadPackageInfoPlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 290
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mComponents:Lcom/qihoo360/replugin/component/ComponentList;

    return-object p1

    .line 293
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 294
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "not found plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public queryPluginContext(Ljava/lang/String;)Landroid/content/Context;
    .locals 2

    .line 196
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->loadAppPlugin(Ljava/lang/String;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 198
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mPkgContext:Landroid/content/Context;

    return-object p1

    .line 201
    :cond_0
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 202
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "not found plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public queryPluginPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;
    .locals 2

    .line 241
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/loader2/Plugin;->queryCachedPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 246
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1, p0}, Lcom/qihoo360/loader2/PmBase;->loadPackageInfoPlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 248
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mPackageInfo:Landroid/content/pm/PackageInfo;

    return-object p1

    .line 251
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 252
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "not found plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public queryPluginPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;
    .locals 0

    .line 268
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryPluginNameByPkgName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 269
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_0

    .line 270
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/PluginCommImpl;->queryPluginPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public queryPluginResouces(Ljava/lang/String;)Landroid/content/res/Resources;
    .locals 2

    .line 216
    invoke-static {p1}, Lcom/qihoo360/loader2/Plugin;->queryCachedFilename(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/loader2/Plugin;->queryCachedResources(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 221
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1, p0}, Lcom/qihoo360/loader2/PmBase;->loadResourcePlugin(Ljava/lang/String;Lcom/qihoo360/loader2/PluginCommImpl;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 223
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    iget-object p1, p1, Lcom/qihoo360/loader2/Loader;->mPkgResources:Landroid/content/res/Resources;

    return-object p1

    .line 226
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 227
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "not found plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 p1, 0x0

    return-object p1
.end method

.method public queryPluginsReceiverList(Landroid/content/Intent;)Ljava/util/List;
    .locals 2
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

    .line 353
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 356
    :try_start_0
    invoke-interface {v0, p1}, Lcom/qihoo360/loader2/IPluginHost;->queryPluginsReceiverList(Landroid/content/Intent;)Ljava/util/List;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 358
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 359
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Query PluginsReceiverList fail:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws001"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Z
    .locals 8

    .line 376
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 377
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "start activity: intent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " activity="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " process="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 380
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v1, v0, Lcom/qihoo360/loader2/PmBase;->mInternal:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    const/4 v7, 0x1

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move-object v5, p4

    move v6, p5

    invoke-virtual/range {v1 .. v7}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;IZ)Z

    move-result p1

    return p1
.end method

.method public startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z
    .locals 2

    .line 388
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 389
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "startActivityForResult: intent="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " requestCode="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " options="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 392
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginCommImpl;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mInternal:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z

    move-result p1

    return p1
.end method

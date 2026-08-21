.class public Lcom/bytedance/pangle/plugin/PluginManager;
.super Ljava/lang/Object;


# static fields
.field private static final TAG:Ljava/lang/String; = "PluginManager"

.field private static volatile sInstance:Lcom/bytedance/pangle/plugin/PluginManager;


# instance fields
.field private volatile hasInstallFromDownloadDir:Z

.field private mInstallThreadPool:Ljava/util/concurrent/ExecutorService;

.field private volatile mIsParsePluginConfig:Z

.field private volatile mPlugins:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/bytedance/pangle/plugin/Plugin;",
            ">;"
        }
    .end annotation
.end field

.field private final pluginLoader:Lcom/bytedance/pangle/plugin/c;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 55
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 38
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mPlugins:Ljava/util/Map;

    .line 56
    new-instance v0, Lcom/bytedance/pangle/plugin/c;

    invoke-direct {v0}, Lcom/bytedance/pangle/plugin/c;-><init>()V

    iput-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->pluginLoader:Lcom/bytedance/pangle/plugin/c;

    return-void
.end method

.method private ensurePluginFileExist(Lcom/bytedance/pangle/plugin/Plugin;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 151
    invoke-virtual {p1}, Lcom/bytedance/pangle/plugin/Plugin;->isInstalled()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 152
    iget-object v0, p1, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v1

    invoke-static {v0, v1}, Lcom/bytedance/pangle/d/c;->b(Ljava/lang/String;I)Ljava/lang/String;

    move-result-object v0

    .line 153
    new-instance v1, Ljava/io/File;

    invoke-direct {v1, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 154
    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_0

    .line 155
    iget-object p1, p1, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->unInstallPackage(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public static getInstance()Lcom/bytedance/pangle/plugin/PluginManager;
    .locals 2

    .line 45
    sget-object v0, Lcom/bytedance/pangle/plugin/PluginManager;->sInstance:Lcom/bytedance/pangle/plugin/PluginManager;

    if-nez v0, :cond_1

    .line 46
    const-class v0, Lcom/bytedance/pangle/plugin/PluginManager;

    monitor-enter v0

    .line 47
    :try_start_0
    sget-object v1, Lcom/bytedance/pangle/plugin/PluginManager;->sInstance:Lcom/bytedance/pangle/plugin/PluginManager;

    if-nez v1, :cond_0

    .line 48
    new-instance v1, Lcom/bytedance/pangle/plugin/PluginManager;

    invoke-direct {v1}, Lcom/bytedance/pangle/plugin/PluginManager;-><init>()V

    sput-object v1, Lcom/bytedance/pangle/plugin/PluginManager;->sInstance:Lcom/bytedance/pangle/plugin/PluginManager;

    .line 50
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 52
    :cond_1
    :goto_0
    sget-object v0, Lcom/bytedance/pangle/plugin/PluginManager;->sInstance:Lcom/bytedance/pangle/plugin/PluginManager;

    return-object v0
.end method

.method private declared-synchronized parsePluginConfig()V
    .locals 7

    monitor-enter p0

    .line 95
    :try_start_0
    iget-boolean v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mIsParsePluginConfig:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    .line 96
    monitor-exit p0

    return-void

    :cond_0
    :try_start_1
    const-string v0, "Zeus/init_pangle"

    const-string v1, "PluginManager parsePluginsJson"

    .line 98
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->v(Ljava/lang/String;Ljava/lang/String;)V

    .line 99
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 102
    :try_start_2
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v1}, Landroid/app/Application;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object v1

    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v2

    invoke-virtual {v2}, Landroid/app/Application;->getPackageName()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x80

    invoke-virtual {v1, v2, v3}, Landroid/content/pm/PackageManager;->getPackageInfo(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;

    move-result-object v1

    iget-object v1, v1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v1, v1, Landroid/content/pm/ApplicationInfo;->metaData:Landroid/os/Bundle;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 107
    :try_start_3
    invoke-virtual {v1}, Landroid/os/Bundle;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_4

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 108
    sget-object v4, Lcom/bytedance/pangle/g;->e:Ljava/lang/String;

    const-string v5, "PANGLE_"

    invoke-virtual {v4, v5}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 110
    sget-object v4, Lcom/bytedance/pangle/g;->e:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_2

    const-string v4, "ZEUS_PLUGIN_"

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 111
    :cond_2
    invoke-virtual {v1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 115
    :cond_3
    sget-object v4, Lcom/bytedance/pangle/g;->e:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    .line 116
    invoke-virtual {v1, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_0

    .line 121
    :cond_4
    :try_start_4
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    .line 122
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 124
    :try_start_5
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 125
    new-instance v4, Lcom/bytedance/pangle/plugin/Plugin;

    invoke-direct {v4, v3}, Lcom/bytedance/pangle/plugin/Plugin;-><init>(Lorg/json/JSONObject;)V

    .line 127
    iget-object v3, v4, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-interface {v1, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "Zeus/init_pangle"

    .line 128
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "PluginManagerparsePluginsJson. find "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v4, Lcom/bytedance/pangle/plugin/Plugin;->mPkgName:Ljava/lang/String;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_5
    .catch Lorg/json/JSONException; {:try_start_5 .. :try_end_5} :catch_0
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v3

    :try_start_6
    const-string v4, "Zeus/init_pangle"

    .line 130
    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "PluginManager parsePluginsJson failed. "

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v5, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2, v3}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    goto :goto_1

    .line 134
    :cond_5
    iput-object v1, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mPlugins:Ljava/util/Map;

    const-string v0, "Zeus/init_pangle"

    const-string v1, "PluginManager parsePluginsJson success"

    .line 135
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    goto :goto_2

    :catch_1
    move-exception v0

    :try_start_7
    const-string v1, "Zeus/init_pangle"

    const-string v2, "PluginManager parsePluginsJson failed."

    .line 137
    invoke-static {v1, v2, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    const/4 v0, 0x1

    .line 139
    iput-boolean v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mIsParsePluginConfig:Z
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    .line 140
    monitor-exit p0

    return-void

    :catch_2
    move-exception v0

    :try_start_8
    const-string v1, "Zeus/init_pangle"

    const-string v2, "PluginManager parsePluginsJson failed."

    .line 104
    invoke-static {v1, v2, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->errReport(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 105
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method public asyncInstall(Ljava/lang/String;Ljava/io/File;)V
    .locals 4

    const-string v0, "Zeus/install_pangle"

    if-eqz p2, :cond_0

    .line 204
    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstallThreadPool()Ljava/util/concurrent/ExecutorService;

    move-result-object v1

    new-instance v2, Lcom/bytedance/pangle/plugin/a;

    invoke-direct {v2, p1, p2}, Lcom/bytedance/pangle/plugin/a;-><init>(Ljava/lang/String;Ljava/io/File;)V

    invoke-interface {v1, v2}, Ljava/util/concurrent/ExecutorService;->execute(Ljava/lang/Runnable;)V

    .line 205
    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string p2, "PluginManager asyncInstall, file="

    invoke-virtual {p2, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 p2, 0x7

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    const-string v3, "asyncInstall apk is null !"

    aput-object v3, v1, v2

    .line 207
    invoke-static {p1, p2, v1}, Lcom/bytedance/pangle/ZeusPluginStateListener;->postStateChange(Ljava/lang/String;I[Ljava/lang/Object;)V

    const-string p1, "PluginManager asyncInstall apk is null !"

    .line 208
    invoke-static {v0, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public checkPluginInstalled(Ljava/lang/String;)Z
    .locals 3

    .line 143
    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    .line 144
    invoke-direct {p0, v0}, Lcom/bytedance/pangle/plugin/PluginManager;->ensurePluginFileExist(Lcom/bytedance/pangle/plugin/Plugin;)V

    if-eqz v0, :cond_0

    .line 145
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->isInstalled()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 146
    :goto_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "PluginManager checkPluginInstalled, "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " = "

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v1, "Zeus/ppm_pangle"

    invoke-static {v1, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public getInstallThreadPool()Ljava/util/concurrent/ExecutorService;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mInstallThreadPool:Ljava/util/concurrent/ExecutorService;

    if-nez v0, :cond_0

    .line 65
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getInstallThreads()I

    move-result v0

    .line 66
    invoke-static {v0}, Lcom/bytedance/pangle/d/e;->a(I)Ljava/util/concurrent/ExecutorService;

    move-result-object v0

    iput-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mInstallThreadPool:Ljava/util/concurrent/ExecutorService;

    .line 68
    :cond_0
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mInstallThreadPool:Ljava/util/concurrent/ExecutorService;

    return-object v0
.end method

.method public getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;
    .locals 1

    const/4 v0, 0x1

    .line 91
    invoke-virtual {p0, p1, v0}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;Z)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p1

    return-object p1
.end method

.method public getPlugin(Ljava/lang/String;Z)Lcom/bytedance/pangle/plugin/Plugin;
    .locals 1

    .line 72
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->hasInit()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Lcom/bytedance/pangle/util/b;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 73
    :cond_0
    new-instance p1, Ljava/lang/RuntimeException;

    const-string p2, "Please init Zeus first!"

    invoke-direct {p1, p2}, Ljava/lang/RuntimeException;-><init>(Ljava/lang/String;)V

    throw p1

    .line 75
    :cond_1
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 p1, 0x0

    return-object p1

    .line 78
    :cond_2
    iget-boolean v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mIsParsePluginConfig:Z

    if-nez v0, :cond_3

    .line 79
    invoke-direct {p0}, Lcom/bytedance/pangle/plugin/PluginManager;->parsePluginConfig()V

    .line 81
    :cond_3
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->mPlugins:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/bytedance/pangle/plugin/Plugin;

    if-eqz p2, :cond_4

    if-eqz p1, :cond_4

    .line 83
    invoke-virtual {p1}, Lcom/bytedance/pangle/plugin/Plugin;->init()V

    :cond_4
    return-object p1
.end method

.method public declared-synchronized installFromDownloadDir()V
    .locals 2

    monitor-enter p0

    .line 218
    :try_start_0
    iget-boolean v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->hasInstallFromDownloadDir:Z

    if-eqz v0, :cond_0

    const-string v0, "Zeus/init_pangle"

    const-string v1, "PluginManager zeus has been installFromDownloadDir!"

    .line 219
    invoke-static {v0, v1}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 220
    monitor-exit p0

    return-void

    .line 222
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {v0}, Lcom/bytedance/pangle/d/d;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 223
    new-instance v0, Lcom/bytedance/pangle/plugin/d;

    invoke-direct {v0}, Lcom/bytedance/pangle/plugin/d;-><init>()V

    invoke-static {v0}, Lcom/bytedance/pangle/d/e;->a(Ljava/lang/Runnable;)V

    :cond_1
    const/4 v0, 0x1

    .line 225
    iput-boolean v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->hasInstallFromDownloadDir:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 226
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public isLoaded(Ljava/lang/String;)Z
    .locals 0

    .line 161
    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 162
    invoke-virtual {p1}, Lcom/bytedance/pangle/plugin/Plugin;->isLoaded()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public loadPlugin(Ljava/lang/String;)Z
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/PluginManager;->pluginLoader:Lcom/bytedance/pangle/plugin/c;

    invoke-virtual {v0, p1}, Lcom/bytedance/pangle/plugin/c;->a(Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public setAllowDownloadPlugin(Ljava/lang/String;IZ)V
    .locals 3

    .line 175
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "PluginManager setAllowDownloadPlugin, "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "Zeus/ppm_pangle"

    invoke-static {v1, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 178
    invoke-static {}, Lcom/bytedance/pangle/util/l;->a()Lcom/bytedance/pangle/util/l;

    move-result-object v0

    xor-int/lit8 p3, p3, 0x1

    .line 2197
    iget-object v0, v0, Lcom/bytedance/pangle/util/l;->a:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 2198
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "DISABLE_DOWNLOAD_"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    if-eqz p3, :cond_0

    const/4 v2, 0x0

    .line 2200
    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    goto :goto_0

    .line 2202
    :cond_0
    invoke-interface {v0, v1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 2204
    :goto_0
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 2205
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ZeusSpUtils markAllowDownloadFlag packageName="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, " version="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " disable="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "Zeus/init_pangle"

    invoke-static {p2, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public syncInstall(Ljava/lang/String;Ljava/io/File;)Z
    .locals 2

    .line 197
    invoke-static {p2}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginManager syncInstall, file="

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Zeus/install_pangle"

    invoke-static {v1, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    .line 198
    new-instance v0, Lcom/bytedance/pangle/plugin/a;

    invoke-direct {v0, p1, p2}, Lcom/bytedance/pangle/plugin/a;-><init>(Ljava/lang/String;Ljava/io/File;)V

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/a;->a()Z

    move-result p1

    return p1
.end method

.method public tryOfflineInternalPlugin(Ljava/lang/String;I)V
    .locals 3

    .line 189
    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 190
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getInternalVersionCode()I

    move-result v1

    if-ne v1, p2, :cond_0

    .line 191
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "PluginManager offlineInternalPlugin, pkgName:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " pluginVer:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, " apiVer:"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getApiVersionCode()I

    move-result p2

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    const-string v1, "Zeus/ppm_pangle"

    invoke-static {v1, p2}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 192
    invoke-static {}, Lcom/bytedance/pangle/util/l;->a()Lcom/bytedance/pangle/util/l;

    move-result-object p2

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getApiVersionCode()I

    move-result v0

    .line 2283
    iget-object p2, p2, Lcom/bytedance/pangle/util/l;->a:Landroid/content/SharedPreferences;

    invoke-interface {p2}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p2

    .line 2284
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "OFFLINE_INTERNAL_"

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 2285
    invoke-interface {p2, p1, v0}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 2286
    invoke-interface {p2}, Landroid/content/SharedPreferences$Editor;->apply()V

    :cond_0
    return-void
.end method

.method public unInstallPackage(Ljava/lang/String;)V
    .locals 3

    .line 167
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginManager unInstallPackage, "

    invoke-virtual {v1, v0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "Zeus/ppm_pangle"

    invoke-static {v1, v0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    invoke-virtual {p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 170
    invoke-static {}, Lcom/bytedance/pangle/util/l;->a()Lcom/bytedance/pangle/util/l;

    move-result-object v0

    .line 1221
    iget-object v0, v0, Lcom/bytedance/pangle/util/l;->a:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 1222
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "UNINSTALL__"

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-interface {v0, v1, v2}, Landroid/content/SharedPreferences$Editor;->putBoolean(Ljava/lang/String;Z)Landroid/content/SharedPreferences$Editor;

    .line 1223
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V

    .line 1224
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "ZeusSpUtils markUnInstallFlag packageName="

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Zeus/init_pangle"

    invoke-static {v0, p1}, Lcom/bytedance/pangle/log/ZeusLogger;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.class public Lcom/bytedance/pangle/Zeus;
.super Ljava/lang/Object;


# static fields
.field private static volatile onPrivacyAgreed:Z

.field private static sApplication:Landroid/app/Application;

.field private static final serverManagerHashMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ProviderInfo;",
            ">;"
        }
    .end annotation
.end field

.field static final wait:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 66
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/bytedance/pangle/Zeus;->serverManagerHashMap:Ljava/util/HashMap;

    .line 115
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/bytedance/pangle/Zeus;->wait:Ljava/lang/Object;

    const/4 v0, 0x0

    .line 117
    sput-boolean v0, Lcom/bytedance/pangle/Zeus;->onPrivacyAgreed:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 34
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static addExternalAssetsForPlugin(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 327
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 330
    :cond_0
    invoke-static {p0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 331
    iget-object v0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    if-eqz v0, :cond_1

    .line 332
    iget-object p0, p0, Lcom/bytedance/pangle/plugin/Plugin;->mResources:Landroid/content/res/Resources;

    invoke-virtual {p0}, Landroid/content/res/Resources;->getAssets()Landroid/content/res/AssetManager;

    move-result-object p0

    .line 333
    new-instance v0, Lcom/bytedance/pangle/res/a;

    invoke-direct {v0}, Lcom/bytedance/pangle/res/a;-><init>()V

    const/4 v1, 0x0

    .line 334
    invoke-virtual {v0, p0, p1, v1}, Lcom/bytedance/pangle/res/a;->a(Landroid/content/res/AssetManager;Ljava/lang/String;Z)Landroid/content/res/AssetManager;

    :cond_1
    :goto_0
    return-void
.end method

.method public static addPluginEventCallback(Lcom/bytedance/pangle/ZeusPluginEventCallback;)V
    .locals 2

    .line 183
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    if-eqz p0, :cond_0

    .line 5188
    iget-object v1, v0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    monitor-enter v1

    .line 5189
    :try_start_0
    iget-object v0, v0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 5190
    monitor-exit v1

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_0
    return-void
.end method

.method public static fetchPlugin(Ljava/lang/String;)V
    .locals 5

    .line 154
    invoke-static {}, Lcom/bytedance/pangle/download/a;->a()Lcom/bytedance/pangle/download/a;

    move-result-object v0

    .line 5049
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v1

    invoke-static {v1}, Lcom/bytedance/pangle/d/d;->a(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 5054
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bytedance/pangle/GlobalParam;->autoFetch()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 5055
    invoke-static {}, Lcom/bytedance/pangle/download/b;->a()Lcom/bytedance/pangle/download/b;

    move-result-object v1

    .line 5069
    iget-object v2, v1, Lcom/bytedance/pangle/download/b;->c:Ljava/util/Map;

    invoke-interface {v2, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Runnable;

    if-eqz v2, :cond_0

    .line 5071
    iget-object v3, v1, Lcom/bytedance/pangle/download/b;->b:Landroid/os/Handler;

    invoke-virtual {v3, v2}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 5074
    :cond_0
    new-instance v2, Lcom/bytedance/pangle/download/b$1;

    invoke-direct {v2, v1, p0}, Lcom/bytedance/pangle/download/b$1;-><init>(Lcom/bytedance/pangle/download/b;Ljava/lang/String;)V

    .line 5083
    iget-object v3, v1, Lcom/bytedance/pangle/download/b;->c:Ljava/util/Map;

    invoke-interface {v3, p0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 5084
    iget-object v1, v1, Lcom/bytedance/pangle/download/b;->b:Landroid/os/Handler;

    const-wide/32 v3, 0x1b7740

    invoke-virtual {v1, v2, v3, v4}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 5056
    invoke-static {}, Lcom/bytedance/pangle/download/b;->a()Lcom/bytedance/pangle/download/b;

    .line 5057
    iget-object v1, v0, Lcom/bytedance/pangle/download/a;->a:Ljava/util/List;

    invoke-interface {v1, p0}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 5058
    iget-object v0, v0, Lcom/bytedance/pangle/download/a;->a:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    .line 5061
    :cond_1
    invoke-static {}, Lcom/bytedance/pangle/download/b;->a()Lcom/bytedance/pangle/download/b;

    :cond_2
    return-void
.end method

.method public static getAppApplication()Landroid/app/Application;
    .locals 3

    .line 39
    sget-object v0, Lcom/bytedance/pangle/Zeus;->sApplication:Landroid/app/Application;

    if-nez v0, :cond_0

    .line 40
    invoke-static {}, Lcom/bytedance/pangle/b;->a()V

    .line 41
    invoke-static {}, Lcom/bytedance/pangle/d/a;->a()Ljava/lang/Object;

    move-result-object v0

    :try_start_0
    const-string v1, "getApplication"

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    .line 43
    invoke-static {v0, v1, v2}, Lcom/bytedance/pangle/util/MethodUtils;->invokeMethod(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    .line 44
    check-cast v0, Landroid/app/Application;

    sput-object v0, Lcom/bytedance/pangle/Zeus;->sApplication:Landroid/app/Application;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 48
    :catchall_0
    :cond_0
    sget-object v0, Lcom/bytedance/pangle/Zeus;->sApplication:Landroid/app/Application;

    return-object v0
.end method

.method public static getHostAbi()Ljava/lang/String;
    .locals 1

    .line 285
    invoke-static {}, Lcom/bytedance/pangle/d/b;->a()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getHostAbiBit()I
    .locals 1

    .line 302
    invoke-static {}, Lcom/bytedance/pangle/d/b;->b()I

    move-result v0

    return v0
.end method

.method public static getInstalledPluginVersion(Ljava/lang/String;)I
    .locals 3

    .line 307
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p0, -0x1

    return p0

    .line 311
    :cond_0
    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/Plugin;->getVersion()I

    move-result v0

    .line 312
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, " getInstalledPluginVersion, "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, " = "

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v1, "Zeus/download_pangle"

    invoke-static {v1, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->d(Ljava/lang/String;Ljava/lang/String;)V

    return v0
.end method

.method public static getMaxInstallVer(Ljava/lang/String;)I
    .locals 1

    .line 289
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {v0}, Lcom/bytedance/pangle/d/d;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 290
    invoke-static {p0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->getInstalledMaxVer()I

    move-result p0

    return p0

    :cond_0
    const/4 p0, -0x1

    return p0
.end method

.method public static getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;
    .locals 1

    const/4 v0, 0x1

    .line 205
    invoke-static {p0, v0}, Lcom/bytedance/pangle/Zeus;->getPlugin(Ljava/lang/String;Z)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    return-object p0
.end method

.method public static getPlugin(Ljava/lang/String;Z)Lcom/bytedance/pangle/plugin/Plugin;
    .locals 1

    .line 212
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;Z)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    return-object p0
.end method

.method public static getServerManagerHashMap()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ProviderInfo;",
            ">;"
        }
    .end annotation

    .line 69
    sget-object v0, Lcom/bytedance/pangle/Zeus;->serverManagerHashMap:Ljava/util/HashMap;

    return-object v0
.end method

.method public static getZeusDid()Ljava/lang/String;
    .locals 2

    .line 6015
    invoke-static {}, Lcom/bytedance/pangle/GlobalParam;->getInstance()Lcom/bytedance/pangle/GlobalParam;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/GlobalParam;->getDid()Ljava/lang/String;

    move-result-object v0

    .line 6016
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    .line 6019
    :cond_0
    invoke-static {}, Lcom/bytedance/pangle/apm/ApmUtils;->getApmInstance()Lcom/bytedance/pangle/apm/AbsApm;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/apm/AbsApm;->getDid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static hasInit()Z
    .locals 1

    .line 144
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    .line 4167
    iget-boolean v0, v0, Lcom/bytedance/pangle/h;->a:Z

    return v0
.end method

.method public static init(Landroid/app/Application;Z)V
    .locals 1

    .line 82
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/bytedance/pangle/h;->a(Landroid/app/Application;Z)V

    .line 83
    sget-object p0, Lcom/bytedance/pangle/Zeus;->wait:Ljava/lang/Object;

    monitor-enter p0

    .line 84
    :try_start_0
    sget-object p1, Lcom/bytedance/pangle/Zeus;->wait:Ljava/lang/Object;

    invoke-virtual {p1}, Ljava/lang/Object;->notifyAll()V

    .line 85
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public static installFromDownloadDir()V
    .locals 1

    .line 134
    invoke-static {}, Lcom/bytedance/pangle/Zeus;->getAppApplication()Landroid/app/Application;

    move-result-object v0

    invoke-static {v0}, Lcom/bytedance/pangle/d/d;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 135
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bytedance/pangle/plugin/PluginManager;->installFromDownloadDir()V

    :cond_0
    return-void
.end method

.method public static isPluginInstalled(Ljava/lang/String;)Z
    .locals 1

    .line 223
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bytedance/pangle/plugin/PluginManager;->getPlugin(Ljava/lang/String;)Lcom/bytedance/pangle/plugin/Plugin;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 224
    invoke-virtual {p0}, Lcom/bytedance/pangle/plugin/Plugin;->isInstalled()Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static isPluginLoaded(Ljava/lang/String;)Z
    .locals 1

    .line 234
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bytedance/pangle/plugin/PluginManager;->isLoaded(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static loadPlugin(Ljava/lang/String;)Z
    .locals 1

    .line 246
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bytedance/pangle/plugin/PluginManager;->loadPlugin(Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static declared-synchronized onPrivacyAgreed()V
    .locals 2

    const-class v0, Lcom/bytedance/pangle/Zeus;

    monitor-enter v0

    .line 123
    :try_start_0
    sget-boolean v1, Lcom/bytedance/pangle/Zeus;->onPrivacyAgreed:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    .line 124
    monitor-exit v0

    return-void

    .line 126
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/bytedance/pangle/apm/ApmUtils;->getApmInstance()Lcom/bytedance/pangle/apm/AbsApm;

    move-result-object v1

    invoke-virtual {v1}, Lcom/bytedance/pangle/apm/AbsApm;->init()V

    const/4 v1, 0x1

    .line 127
    sput-boolean v1, Lcom/bytedance/pangle/Zeus;->onPrivacyAgreed:Z
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 128
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public static registerPluginStateListener(Lcom/bytedance/pangle/ZeusPluginStateListener;)V
    .locals 1

    .line 165
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    .line 5175
    iget-object v0, v0, Lcom/bytedance/pangle/h;->b:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static removePluginEventCallback(Lcom/bytedance/pangle/ZeusPluginEventCallback;)V
    .locals 2

    .line 192
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    if-eqz p0, :cond_0

    .line 5197
    iget-object v1, v0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    monitor-enter v1

    .line 5198
    :try_start_0
    iget-object v0, v0, Lcom/bytedance/pangle/h;->c:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 5199
    monitor-exit v1

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    :cond_0
    return-void
.end method

.method public static setAllowDownloadPlugin(Ljava/lang/String;IZ)V
    .locals 1

    .line 276
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0, p1, p2}, Lcom/bytedance/pangle/plugin/PluginManager;->setAllowDownloadPlugin(Ljava/lang/String;IZ)V

    return-void
.end method

.method public static setAppContext(Landroid/app/Application;)V
    .locals 2

    if-eqz p0, :cond_0

    .line 52
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    const-string v1, "PluginApplicationWrapper"

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    :try_start_0
    const-string v0, "mOriginApplication"

    .line 54
    invoke-static {p0, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/Application;

    sput-object v0, Lcom/bytedance/pangle/Zeus;->sApplication:Landroid/app/Application;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    .line 59
    :catchall_0
    :cond_0
    sput-object p0, Lcom/bytedance/pangle/Zeus;->sApplication:Landroid/app/Application;

    return-void
.end method

.method public static syncInstallPlugin(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 250
    invoke-static {}, Lcom/bytedance/pangle/servermanager/b;->a()Lcom/bytedance/pangle/c;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 253
    :try_start_0
    invoke-interface {v0, p0, p1}, Lcom/bytedance/pangle/c;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    const-string p1, "Zeus/install_pangle"

    const-string v0, "syncInstallPlugin error."

    .line 255
    invoke-static {p1, v0, p0}, Lcom/bytedance/pangle/log/ZeusLogger;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static triggerBgDexOpt()V
    .locals 0

    .line 140
    invoke-static {}, Lcom/bytedance/pangle/e/f;->a()V

    return-void
.end method

.method public static unInstallPlugin(Ljava/lang/String;)V
    .locals 1

    .line 269
    invoke-static {}, Lcom/bytedance/pangle/plugin/PluginManager;->getInstance()Lcom/bytedance/pangle/plugin/PluginManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/bytedance/pangle/plugin/PluginManager;->unInstallPackage(Ljava/lang/String;)V

    return-void
.end method

.method public static unregisterPluginStateListener(Lcom/bytedance/pangle/ZeusPluginStateListener;)V
    .locals 2

    .line 174
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    .line 5179
    iget-object v1, v0, Lcom/bytedance/pangle/h;->b:Ljava/util/List;

    if-eqz v1, :cond_0

    .line 5180
    iget-object v0, v0, Lcom/bytedance/pangle/h;->b:Ljava/util/List;

    invoke-interface {v0, p0}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public static waitInit(I)Z
    .locals 4

    .line 97
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v0

    .line 1167
    iget-boolean v0, v0, Lcom/bytedance/pangle/h;->a:Z

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 100
    :cond_0
    sget-object v0, Lcom/bytedance/pangle/Zeus;->wait:Ljava/lang/Object;

    monitor-enter v0

    .line 101
    :try_start_0
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object v1

    .line 2167
    iget-boolean v1, v1, Lcom/bytedance/pangle/h;->a:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_2

    const/4 v1, -0x1

    if-ne p0, v1, :cond_1

    .line 104
    :try_start_1
    sget-object p0, Lcom/bytedance/pangle/Zeus;->wait:Ljava/lang/Object;

    invoke-virtual {p0}, Ljava/lang/Object;->wait()V

    goto :goto_0

    .line 106
    :cond_1
    sget-object v1, Lcom/bytedance/pangle/Zeus;->wait:Ljava/lang/Object;

    int-to-long v2, p0

    invoke-virtual {v1, v2, v3}, Ljava/lang/Object;->wait(J)V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 111
    :catch_0
    :cond_2
    :goto_0
    :try_start_2
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 112
    invoke-static {}, Lcom/bytedance/pangle/h;->a()Lcom/bytedance/pangle/h;

    move-result-object p0

    .line 3167
    iget-boolean p0, p0, Lcom/bytedance/pangle/h;->a:Z

    return p0

    :catchall_0
    move-exception p0

    .line 111
    :try_start_3
    monitor-exit v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    throw p0
.end method

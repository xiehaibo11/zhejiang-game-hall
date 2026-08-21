.class public Lcom/qihoo360/loader2/PluginLibraryInternalProxy;
.super Ljava/lang/Object;
.source "PluginLibraryInternalProxy.java"


# instance fields
.field mPluginMgr:Lcom/qihoo360/loader2/PmBase;


# direct methods
.method constructor <init>(Lcom/qihoo360/loader2/PmBase;)V
    .locals 0

    .line 65
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 66
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    return-void
.end method

.method private fetchPluginByPitActivity(Landroid/app/Activity;)Ljava/lang/String;
    .locals 2

    .line 174
    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 175
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PluginContainers;->lookupByContainer(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginContainers$ActivityState;

    move-result-object p1

    goto :goto_0

    :cond_0
    move-object p1, v1

    :goto_0
    if-eqz p1, :cond_1

    .line 179
    iget-object p1, p1, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->plugin:Ljava/lang/String;

    return-object p1

    :cond_1
    return-object v1
.end method

.method private static getDefaultThemeId()I
    .locals 2

    .line 784
    sget-boolean v0, Lcom/qihoo360/replugin/helper/HostConfigHelper;->ACTIVITY_PIT_USE_APPCOMPAT:Z

    if-eqz v0, :cond_1

    .line 786
    :try_start_0
    sget-boolean v0, Lcom/qihoo360/replugin/compat/CompatConfig;->DEPENDENCY_ANDROIDX:Z

    if-eqz v0, :cond_0

    const-string v0, "androidx.appcompat.R$style"

    goto :goto_0

    :cond_0
    const-string v0, "android.support.v7.appcompat.R$style"

    :goto_0
    invoke-static {v0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "Theme_AppCompat"

    .line 787
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readStaticField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/NoSuchFieldException; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    :catch_0
    move-exception v0

    .line 793
    invoke-virtual {v0}, Ljava/lang/NoSuchFieldException;->printStackTrace()V

    goto :goto_1

    :catch_1
    move-exception v0

    .line 791
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_1

    :catch_2
    move-exception v0

    .line 789
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :cond_1
    :goto_1
    const v0, 0x1030006

    return v0
.end method

.method private getDynamicThemeId(Landroid/app/Activity;)I
    .locals 6

    .line 708
    :try_start_0
    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    const-string v1, "android.view.ContextThemeWrapper"

    const-string v2, "getThemeResId"

    const/4 v4, 0x0

    const/4 v3, 0x0

    new-array v5, v3, [Ljava/lang/Object;

    move-object v3, p1

    invoke-static/range {v0 .. v5}, Lcom/qihoo360/replugin/utils/ReflectUtils;->invokeMethod(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;[Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 711
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, -0x1

    :goto_0
    return p1
.end method

.method private static getPluginName(Landroid/app/Activity;Landroid/content/Intent;)Ljava/lang/String;
    .locals 1

    .line 352
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 353
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/ComponentName;->getPackageName()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 356
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "."

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 357
    :cond_1
    invoke-virtual {p0}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/replugin/RePlugin;->fetchPluginNameByClassLoader(Ljava/lang/ClassLoader;)Ljava/lang/String;

    move-result-object p1

    :cond_2
    return-object p1
.end method

.method private getThemeId(Landroid/app/Activity;Landroid/content/Intent;)I
    .locals 4

    .line 722
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->getDynamicThemeId(Landroid/app/Activity;)I

    move-result v0

    const-string v1, "__themeId"

    const/4 v2, 0x0

    .line 725
    invoke-virtual {p2, v1, v2}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p2

    if-nez p2, :cond_0

    .line 728
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object p1

    iget p2, p1, Landroid/content/pm/ApplicationInfo;->theme:I

    .line 732
    :cond_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->getDefaultThemeId()I

    move-result p1

    .line 733
    invoke-static {p2}, Lcom/qihoo360/loader2/LaunchModeStates;->isTranslucentTheme(I)Z

    move-result v1

    if-eqz v1, :cond_1

    const p1, 0x1030010

    .line 739
    :cond_1
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v2, "theme"

    if-eqz v1, :cond_2

    .line 740
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "defaultThemeId = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 741
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "dynamicThemeId = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 742
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "manifestThemeId = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    const/4 v1, -0x1

    if-eq v0, v1, :cond_3

    if-ne v0, p1, :cond_5

    if-eqz p2, :cond_4

    goto :goto_0

    :cond_3
    if-eqz p2, :cond_4

    :goto_0
    move v0, p2

    goto :goto_1

    :cond_4
    move v0, p1

    .line 770
    :cond_5
    :goto_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_6

    .line 771
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "themeId = "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    return v0
.end method

.method private isNeedToDownload(Landroid/content/Context;Ljava/lang/String;Z)Z
    .locals 4

    .line 367
    invoke-static {p2}, Lcom/qihoo360/loader2/V5FileInfo;->getFileName(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 368
    new-instance v0, Ljava/io/File;

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->getPnInstallDir()Ljava/io/File;

    move-result-object v1

    invoke-direct {v0, v1, p1}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    .line 369
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p1

    const/4 v1, 0x1

    const-string v2, "ws001"

    if-nez p1, :cond_1

    .line 370
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 371
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "isNeedToDownload(): V5 file not exists. Plugin = "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v1

    .line 376
    :cond_1
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    .line 377
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "isNeedToDownload(): V5 file exists. Extracting... Plugin = "

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 380
    :cond_2
    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1, p3}, Lcom/qihoo360/loader2/MP;->pluginDownloaded(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p1

    if-nez p1, :cond_4

    .line 382
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_3

    .line 383
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "isNeedToDownload(): V5 file is invalid. Plugin = "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return v1

    .line 388
    :cond_4
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 389
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p3, "isNeedToDownload(): V5 file is Okay. Loading... Plugin = "

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    const/4 p1, 0x0

    return p1
.end method


# virtual methods
.method public createActivityContext(Landroid/app/Activity;Landroid/content/Context;)Landroid/content/Context;
    .locals 2

    .line 412
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/qihoo360/loader2/PmBase;->lookupPlugin(Ljava/lang/ClassLoader;)Lcom/qihoo360/loader2/Plugin;

    move-result-object v0

    if-nez v0, :cond_1

    .line 414
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_0

    .line 415
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "PACM: createActivityContext: can\'t found plugin object for activity="

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p2, "ws001"

    invoke-static {p2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p1, 0x0

    return-object p1

    .line 420
    :cond_1
    iget-object p1, v0, Lcom/qihoo360/loader2/Plugin;->mLoader:Lcom/qihoo360/loader2/Loader;

    invoke-virtual {p1, p2}, Lcom/qihoo360/loader2/Loader;->createBaseContext(Landroid/content/Context;)Landroid/content/Context;

    move-result-object p1

    return-object p1
.end method

.method public fetchPlugins(Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 5

    const/4 v0, 0x0

    .line 644
    invoke-static {v0}, Lcom/qihoo360/loader2/MP;->getPlugins(Z)Ljava/util/List;

    move-result-object v0

    .line 645
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 646
    sget-object v2, Lcom/qihoo360/loader2/PluginTable;->PLUGINS:Ljava/util/HashMap;

    monitor-enter v2

    .line 647
    :try_start_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 648
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4, p1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 649
    :cond_1
    invoke-virtual {v3}, Lcom/qihoo360/replugin/model/PluginInfo;->getJSON()Lorg/json/JSONObject;

    move-result-object v3

    .line 650
    invoke-virtual {v1, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    goto :goto_0

    .line 653
    :cond_2
    monitor-exit v2

    return-object v1

    :catchall_0
    move-exception p1

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1
.end method

.method public getPluginByDynamicClass(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 699
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->getPluginByDynamicClass(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method public handleActivityCreate(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 10

    .line 465
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    .line 466
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "activity create: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " this="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " taskid="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/app/Activity;->getTaskId()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 469
    :cond_0
    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 471
    :try_start_0
    new-instance v0, Landroid/content/Intent;

    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object v2

    invoke-direct {v0, v2}, Landroid/content/Intent;-><init>(Landroid/content/Intent;)V

    .line 477
    new-instance v2, Lcom/qihoo360/loader2/PluginIntent;

    invoke-direct {v2, v0}, Lcom/qihoo360/loader2/PluginIntent;-><init>(Landroid/content/Intent;)V

    .line 478
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginIntent;->getPlugin()Ljava/lang/String;

    move-result-object v3

    .line 479
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginIntent;->getActivity()Ljava/lang/String;

    move-result-object v4

    .line 480
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginIntent;->getProcess()I

    move-result v5

    .line 481
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginIntent;->getContainer()Ljava/lang/String;

    move-result-object v6

    .line 482
    invoke-virtual {v2}, Lcom/qihoo360/loader2/PluginIntent;->getCounter()I

    move-result v2

    .line 483
    sget-boolean v7, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v8, " activity="

    if-eqz v7, :cond_1

    .line 484
    :try_start_1
    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "activity create: name="

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v9, " process="

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " container="

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " counter="

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 487
    :cond_1
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v4, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 490
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "a.c.1: a="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " l="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 492
    invoke-static {p1, v0}, Lcom/qihoo360/loader2/PMF;->forward(Landroid/app/Activity;Landroid/content/Intent;)V

    return-void

    .line 495
    :cond_2
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_3

    .line 496
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "perfect: container="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " plugin="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 500
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "a.c.2: exception: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_3
    :goto_0
    const/4 v0, 0x0

    .line 507
    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object v2

    if-eqz v2, :cond_4

    .line 508
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/qihoo360/loader2/PluginContainers;->lookupByContainer(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginContainers$ActivityState;

    move-result-object v0

    :cond_4
    if-nez v0, :cond_5

    .line 513
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "a.c1: l="

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 519
    :cond_5
    iget-object v2, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v2, v2, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v2, v2, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    iget-object v3, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->plugin:Ljava/lang/String;

    iget-object v4, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->container:Ljava/lang/String;

    invoke-virtual {v2, v3, p1, v4}, Lcom/qihoo360/loader2/PluginContainers;->handleCreate(Ljava/lang/String;Landroid/app/Activity;Ljava/lang/String;)V

    .line 523
    :try_start_2
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v2

    sget v3, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    iget-object v4, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->plugin:Ljava/lang/String;

    iget-object v5, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->container:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v6

    invoke-virtual {v6}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v2, v3, v4, v5, v6}, Lcom/qihoo360/loader2/IPluginHost;->regActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v2

    .line 526
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "a.c2: "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3, v2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :goto_1
    if-eqz p2, :cond_6

    .line 532
    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    invoke-virtual {p2, v2}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    .line 536
    :cond_6
    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object p2

    if-eqz p2, :cond_8

    .line 538
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_7

    .line 539
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "set activity intent cl="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 541
    :cond_7
    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {p2, v1}, Landroid/content/Intent;->setExtrasClassLoader(Ljava/lang/ClassLoader;)V

    .line 546
    :cond_8
    iget-object p2, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->plugin:Ljava/lang/String;

    iget-object v0, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->activity:Ljava/lang/String;

    invoke-static {p1, p2, v0}, Lcom/qihoo360/replugin/component/activity/ActivityInjector;->inject(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)Z

    return-void
.end method

.method public handleActivityCreateBefore(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 3

    .line 430
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    .line 431
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "activity create before: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " this="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " taskid="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/app/Activity;->getTaskId()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-eqz p2, :cond_1

    .line 437
    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    :try_start_0
    const-string v0, "android:support:fragments"

    .line 442
    invoke-virtual {p2, v0}, Landroid/os/Bundle;->remove(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p2

    .line 445
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "a.c.b1: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0, p2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 451
    :cond_1
    :goto_0
    invoke-virtual {p1}, Landroid/app/Activity;->getIntent()Landroid/content/Intent;

    move-result-object p2

    if-eqz p2, :cond_2

    .line 453
    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/content/Intent;->setExtrasClassLoader(Ljava/lang/ClassLoader;)V

    .line 454
    invoke-direct {p0, p1, p2}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->getThemeId(Landroid/app/Activity;Landroid/content/Intent;)I

    move-result p2

    invoke-virtual {p1, p2}, Landroid/app/Activity;->setTheme(I)V

    :cond_2
    return-void
.end method

.method public handleActivityDestroy(Landroid/app/Activity;)V
    .locals 6

    .line 582
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    .line 583
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "activity destroy: "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " this="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->hashCode()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " taskid="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/app/Activity;->getTaskId()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 587
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PluginContainers;->handleDestroy(Landroid/app/Activity;)V

    const/4 v0, 0x0

    .line 591
    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 592
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v0, v0, Lcom/qihoo360/loader2/PmBase;->mClient:Lcom/qihoo360/loader2/PluginProcessPer;

    iget-object v0, v0, Lcom/qihoo360/loader2/PluginProcessPer;->mACM:Lcom/qihoo360/loader2/PluginContainers;

    invoke-virtual {p1}, Landroid/app/Activity;->getComponentName()Landroid/content/ComponentName;

    move-result-object v2

    invoke-virtual {v2}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/qihoo360/loader2/PluginContainers;->lookupByContainer(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginContainers$ActivityState;

    move-result-object v0

    :cond_1
    if-nez v0, :cond_2

    .line 597
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "p a h a d c f p a "

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 604
    :cond_2
    iget-object v2, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->plugin:Ljava/lang/String;

    .line 605
    iget-object v0, v0, Lcom/qihoo360/loader2/PluginContainers$ActivityState;->container:Ljava/lang/String;

    .line 607
    :try_start_0
    invoke-static {}, Lcom/qihoo360/loader2/PluginProcessMain;->getPluginHost()Lcom/qihoo360/loader2/IPluginHost;

    move-result-object v3

    sget v4, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v4, v2, v0, v5}, Lcom/qihoo360/loader2/IPluginHost;->unregActivity(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 610
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "ur.a: "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 615
    :goto_0
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onActivityDestroyed(Landroid/app/Activity;)V

    return-void
.end method

.method public handleRestoreInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 3

    .line 556
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 557
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "activity restore instance state: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    if-eqz p2, :cond_2

    .line 562
    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p2, v0}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    .line 564
    invoke-virtual {p2}, Landroid/os/Bundle;->keySet()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 566
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 567
    invoke-virtual {p2, v1}, Landroid/os/Bundle;->get(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    .line 568
    instance-of v2, v1, Landroid/os/Bundle;

    if-eqz v2, :cond_1

    .line 569
    check-cast v1, Landroid/os/Bundle;

    invoke-virtual {p1}, Landroid/app/Activity;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    goto :goto_0

    :cond_2
    return-void
.end method

.method public handleServiceCreate(Landroid/app/Service;)V
    .locals 1

    .line 624
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->handleServiceCreated(Landroid/app/Service;)V

    return-void
.end method

.method public handleServiceDestroy(Landroid/app/Service;)V
    .locals 1

    .line 633
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->handleServiceDestroyed(Landroid/app/Service;)V

    return-void
.end method

.method public isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 683
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1, p2}, Lcom/qihoo360/loader2/PmBase;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    return p1
.end method

.method public registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z
    .locals 6

    .line 675
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    const-string v3, ""

    move-object v1, p1

    move-object v2, p2

    move-object v4, p3

    move-object v5, p4

    invoke-virtual/range {v0 .. v5}, Lcom/qihoo360/loader2/PmBase;->addDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z

    move-result p1

    return p1
.end method

.method public registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 6

    .line 667
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    const/4 v5, 0x0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    move-object v4, p4

    invoke-virtual/range {v0 .. v5}, Lcom/qihoo360/loader2/PmBase;->addDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z

    move-result p1

    return p1
.end method

.method public startActivity(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 8

    .line 78
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    .line 79
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "start context: intent="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const-string v0, "compatible"

    const/4 v2, 0x0

    .line 83
    invoke-virtual {p2, v0, v2}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v3

    if-eqz v3, :cond_2

    .line 84
    invoke-static {p2}, Lcom/qihoo360/loader2/PmBase;->cleanIntentPluginParams(Landroid/content/Intent;)V

    .line 85
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_1

    const-string p1, "start context: COMPATIBLE is true, direct start"

    .line 86
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return v2

    :cond_2
    const-string v3, "activity"

    .line 94
    invoke-virtual {p2, v3}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 95
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_3

    .line 96
    invoke-virtual {p2}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v4

    if-eqz v4, :cond_3

    .line 98
    invoke-virtual {v4}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v3

    .line 99
    sget-boolean v4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v4, :cond_3

    .line 100
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "start context: custom context="

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1, v4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 106
    :cond_3
    iget-object v4, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v4, v3}, Lcom/qihoo360/loader2/PmBase;->isActivity(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_5

    .line 107
    invoke-static {p2}, Lcom/qihoo360/loader2/PmBase;->cleanIntentPluginParams(Landroid/content/Intent;)V

    .line 108
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    const-string p1, "start context: context is container, direct start"

    .line 109
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return v2

    :cond_5
    const-string v4, "plugin"

    .line 118
    invoke-virtual {p2, v4}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 123
    invoke-virtual {p2}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v5

    if-eqz v5, :cond_7

    .line 126
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_6

    .line 127
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "isHookingClass("

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ","

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, ") = "

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 128
    invoke-virtual {v5}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0, v4, v7}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-string v7, "loadClass"

    .line 127
    invoke-static {v7, v6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 130
    :cond_6
    invoke-virtual {v5}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {p0, v4, v6}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_7

    const/4 v1, 0x1

    .line 131
    invoke-virtual {p2, v0, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 132
    new-instance v0, Landroid/content/ComponentName;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v5}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v0, v1, v3}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 133
    invoke-virtual {p1, p2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return v2

    .line 138
    :cond_7
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 140
    instance-of v0, p1, Landroid/app/Activity;

    if-eqz v0, :cond_8

    .line 141
    move-object v0, p1

    check-cast v0, Landroid/app/Activity;

    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->fetchPluginByPitActivity(Landroid/app/Activity;)Ljava/lang/String;

    move-result-object v4

    .line 143
    :cond_8
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_9

    .line 144
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "start context: custom plugin is empty, query plugin="

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 149
    :cond_9
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 150
    invoke-virtual {p1}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->fetchPluginNameByClassLoader(Ljava/lang/ClassLoader;)Ljava/lang/String;

    move-result-object v4

    .line 154
    :cond_a
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_c

    .line 155
    invoke-static {p2}, Lcom/qihoo360/loader2/PmBase;->cleanIntentPluginParams(Landroid/content/Intent;)V

    .line 156
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_b

    const-string p1, "start context: plugin and context is empty, direct start"

    .line 157
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_b
    return v2

    :cond_c
    const/high16 v0, -0x80000000

    const-string v1, "process"

    .line 163
    invoke-virtual {p2, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v0

    .line 165
    invoke-static {p2}, Lcom/qihoo360/loader2/PmBase;->cleanIntentPluginParams(Landroid/content/Intent;)V

    .line 168
    invoke-static {p1, p2, v4, v3, v0}, Lcom/qihoo360/i/Factory;->startActivityWithNoInjectCN(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Z

    move-result p1

    return p1
.end method

.method public startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;IZ)Z
    .locals 7

    .line 198
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, " process="

    const-string v2, " activity="

    const-string v3, " plugin="

    const-string v4, "ws001"

    if-eqz v0, :cond_0

    .line 199
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "start activity: intent="

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v5, " download="

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v4, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 v0, 0x0

    if-eqz p6, :cond_2

    .line 206
    invoke-static {p3}, Lcom/qihoo360/loader2/PluginTable;->getPluginInfo(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p6

    if-nez p6, :cond_2

    .line 207
    sget-boolean p6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p6, :cond_1

    .line 208
    new-instance p6, Ljava/lang/StringBuilder;

    invoke-direct {p6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "plugin="

    invoke-virtual {p6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " not found, start download ..."

    invoke-virtual {p6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p6

    invoke-static {v4, p6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 215
    :cond_1
    invoke-direct {p0, p1, p3, v0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->isNeedToDownload(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result p6

    if-eqz p6, :cond_2

    .line 216
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p4

    invoke-virtual {p4}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object p4

    invoke-virtual {p4, p1, p3, p2, p5}, Lcom/qihoo360/replugin/RePluginCallbacks;->onPluginNotExistsForActivity(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;I)Z

    move-result p1

    return p1

    .line 224
    :cond_2
    sget-boolean p6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p6, :cond_3

    .line 225
    new-instance p6, Ljava/lang/StringBuilder;

    invoke-direct {p6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "isHookingClass("

    invoke-virtual {p6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, " , "

    invoke-virtual {p6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p6, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ") = "

    invoke-virtual {p6, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 226
    invoke-static {p3, p4}, Lcom/qihoo360/i/Factory2;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v5

    invoke-virtual {p6, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p6

    const-string v5, "loadClass"

    .line 225
    invoke-static {v5, p6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 229
    :cond_3
    invoke-static {p3, p4}, Lcom/qihoo360/i/Factory2;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p6

    const/4 v5, 0x1

    if-eqz p6, :cond_4

    const-string p3, "compatible"

    .line 230
    invoke-virtual {p2, p3, v5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    .line 231
    new-instance p3, Landroid/content/ComponentName;

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object p5

    invoke-direct {p3, p5, p4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p2, p3}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 232
    invoke-virtual {p1, p2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return v5

    .line 238
    :cond_4
    invoke-static {p3}, Lcom/qihoo360/loader2/PluginStatusController;->getStatus(Ljava/lang/String;)I

    move-result p6

    if-gez p6, :cond_6

    .line 239
    sget-boolean p4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p4, :cond_5

    .line 240
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string p6, "PluginLibraryInternalProxy.startActivity(): Plugin Disabled. pn="

    invoke-virtual {p4, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {v4, p4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 242
    :cond_5
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p4

    invoke-virtual {p4}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object p4

    invoke-virtual {p4, p1, p3, p2, p5}, Lcom/qihoo360/replugin/RePluginCallbacks;->onPluginNotExistsForActivity(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;I)Z

    move-result p1

    return p1

    .line 247
    :cond_6
    invoke-static {p3}, Lcom/qihoo360/replugin/RePlugin;->isPluginDexExtracted(Ljava/lang/String;)Z

    move-result p6

    if-nez p6, :cond_8

    .line 248
    invoke-static {p3}, Lcom/qihoo360/loader2/PluginDesc;->get(Ljava/lang/String;)Lcom/qihoo360/loader2/PluginDesc;

    move-result-object p6

    if-eqz p6, :cond_8

    .line 249
    invoke-virtual {p6}, Lcom/qihoo360/loader2/PluginDesc;->isLarge()Z

    move-result p6

    if-eqz p6, :cond_8

    .line 250
    sget-boolean p4, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p4, :cond_7

    .line 251
    new-instance p4, Ljava/lang/StringBuilder;

    invoke-direct {p4}, Ljava/lang/StringBuilder;-><init>()V

    const-string p6, "PM.startActivity(): Large Plugin! p="

    invoke-virtual {p4, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p4

    invoke-static {v4, p4}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 253
    :cond_7
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p4

    invoke-virtual {p4}, Lcom/qihoo360/replugin/RePluginConfig;->getCallbacks()Lcom/qihoo360/replugin/RePluginCallbacks;

    move-result-object p4

    invoke-virtual {p4, p1, p3, p2, p5}, Lcom/qihoo360/replugin/RePluginCallbacks;->onLoadLargePluginForActivity(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;I)Z

    move-result p1

    return p1

    .line 262
    :cond_8
    new-instance p6, Landroid/content/Intent;

    invoke-direct {p6, p2}, Landroid/content/Intent;-><init>(Landroid/content/Intent;)V

    .line 265
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_9

    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_9

    .line 266
    new-instance v6, Landroid/content/ComponentName;

    invoke-direct {v6, p3, p4}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p6, v6}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 269
    :cond_9
    iget-object v6, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    iget-object v6, v6, Lcom/qihoo360/loader2/PmBase;->mLocal:Lcom/qihoo360/loader2/PluginCommImpl;

    invoke-virtual {v6, p2, p3, p4, p5}, Lcom/qihoo360/loader2/PluginCommImpl;->loadPluginActivity(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Landroid/content/ComponentName;

    move-result-object v6

    if-nez v6, :cond_b

    .line 271
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_a

    .line 272
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p6, "plugin cn not found: intent="

    invoke-virtual {p1, p6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v4, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_a
    return v0

    .line 280
    :cond_b
    invoke-virtual {p2, v6}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 282
    sget-boolean p3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p3, :cond_c

    .line 283
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    const-string p4, "start activity: real intent="

    invoke-virtual {p3, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-static {v4, p3}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 298
    :cond_c
    invoke-virtual {p1, p2}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 302
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p3

    invoke-virtual {p3}, Lcom/qihoo360/replugin/RePluginConfig;->getEventCallbacks()Lcom/qihoo360/replugin/RePluginEventCallbacks;

    move-result-object p3

    invoke-virtual {p3, p1, p6, p2}, Lcom/qihoo360/replugin/RePluginEventCallbacks;->onPrepareStartPitActivity(Landroid/content/Context;Landroid/content/Intent;Landroid/content/Intent;)V

    return v5
.end method

.method public startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z
    .locals 4

    .line 316
    invoke-static {p1, p2}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->getPluginName(Landroid/app/Activity;Landroid/content/Intent;)Ljava/lang/String;

    move-result-object v0

    .line 318
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_0

    .line 319
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "start activity with startActivityForResult: intent="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ws001"

    invoke-static {v2, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 322
    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    return v2

    .line 326
    :cond_1
    invoke-virtual {p2}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v1

    if-nez v1, :cond_2

    return v2

    .line 330
    :cond_2
    invoke-virtual {v1}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v1

    const/high16 v3, -0x80000000

    .line 332
    invoke-static {p2, v0, v1, v3}, Lcom/qihoo360/i/Factory;->loadPluginActivity(Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Landroid/content/ComponentName;

    move-result-object v0

    if-nez v0, :cond_3

    return v2

    .line 337
    :cond_3
    invoke-virtual {p2, v0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    .line 339
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x10

    if-lt v0, v1, :cond_4

    .line 340
    invoke-virtual {p1, p2, p3, p4}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;ILandroid/os/Bundle;)V

    goto :goto_0

    .line 342
    :cond_4
    invoke-virtual {p1, p2, p3}, Landroid/app/Activity;->startActivityForResult(Landroid/content/Intent;I)V

    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method public unregisterDynamicClass(Ljava/lang/String;)V
    .locals 1

    .line 691
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->mPluginMgr:Lcom/qihoo360/loader2/PmBase;

    invoke-virtual {v0, p1}, Lcom/qihoo360/loader2/PmBase;->removeDynamicClass(Ljava/lang/String;)V

    return-void
.end method

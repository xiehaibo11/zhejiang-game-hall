.class public Lcom/qihoo360/replugin/RePlugin;
.super Ljava/lang/Object;
.source "RePlugin.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/RePlugin$App;
    }
.end annotation


# static fields
.field public static final PLUGIN_NAME_MAIN:Ljava/lang/String; = "main"

.field public static final PROCESS_AUTO:Ljava/lang/String; = "-2147483648"

.field public static final PROCESS_PERSIST:Ljava/lang/String; = "-2"

.field public static final PROCESS_UI:Ljava/lang/String; = "-1"

.field private static final TAG:Ljava/lang/String; = "RePlugin"

.field public static isEnableTraceInstallPlugin:Z

.field private static sConfig:Lcom/qihoo360/replugin/RePluginConfig;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 80
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 80
    sget-object v0, Lcom/qihoo360/replugin/RePlugin;->sConfig:Lcom/qihoo360/replugin/RePluginConfig;

    return-object v0
.end method

.method static synthetic access$002(Lcom/qihoo360/replugin/RePluginConfig;)Lcom/qihoo360/replugin/RePluginConfig;
    .locals 0

    .line 80
    sput-object p0, Lcom/qihoo360/replugin/RePlugin;->sConfig:Lcom/qihoo360/replugin/RePluginConfig;

    return-object p0
.end method

.method public static addCertSignature(Ljava/lang/String;)V
    .locals 1

    .line 333
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 336
    sget-object v0, Lcom/qihoo360/loader2/CertUtils;->SIGNATURES:Ljava/util/ArrayList;

    invoke-virtual {p0}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return-void

    .line 334
    :cond_0
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string v0, "arg is null"

    invoke-direct {p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static convertToPnFile(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 887
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/packages/RePluginInstaller;->covertToPnFile(Landroid/content/Context;Ljava/lang/String;)Ljava/io/File;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 889
    invoke-virtual {p0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static createComponentName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;
    .locals 1

    .line 322
    new-instance v0, Landroid/content/ComponentName;

    invoke-direct {v0, p0, p1}, Landroid/content/ComponentName;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    return-object v0
.end method

.method public static createIntent(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;
    .locals 1

    .line 308
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    .line 309
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/RePlugin;->createComponentName(Ljava/lang/String;Ljava/lang/String;)Landroid/content/ComponentName;

    move-result-object p0

    invoke-virtual {v0, p0}, Landroid/content/Intent;->setComponent(Landroid/content/ComponentName;)Landroid/content/Intent;

    return-object v0
.end method

.method public static dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V
    .locals 0

    .line 902
    invoke-static {p0, p1, p2}, Lcom/qihoo360/loader2/DumpUtils;->dump(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V

    return-void
.end method

.method public static enableDebugger(Landroid/content/Context;Z)Z
    .locals 0

    if-eqz p0, :cond_0

    if-eqz p1, :cond_0

    .line 218
    new-instance p1, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;

    invoke-direct {p1}, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;-><init>()V

    .line 219
    invoke-virtual {p1, p0}, Lcom/qihoo360/replugin/debugger/DebuggerReceivers;->registerReceivers(Landroid/content/Context;)Z

    :cond_0
    const/4 p0, 0x1

    return p0
.end method

.method public static fetchBinder(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 0

    .line 466
    invoke-static {p0, p1}, Lcom/qihoo360/i/Factory;->query(Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p0

    return-object p0
.end method

.method public static fetchBinder(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/os/IBinder;
    .locals 0

    .line 447
    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-static {p0, p1, p2}, Lcom/qihoo360/i/Factory;->query(Ljava/lang/String;Ljava/lang/String;I)Landroid/os/IBinder;

    move-result-object p0

    return-object p0
.end method

.method public static fetchClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;
    .locals 0

    .line 414
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginClassLoader(Ljava/lang/String;)Ljava/lang/ClassLoader;

    move-result-object p0

    return-object p0
.end method

.method public static fetchComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;
    .locals 0

    .line 373
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object p0

    return-object p0
.end method

.method public static fetchContext(Ljava/lang/String;)Landroid/content/Context;
    .locals 0

    .line 427
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginContext(Ljava/lang/String;)Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method public static fetchPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;
    .locals 0

    .line 387
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object p0

    return-object p0
.end method

.method public static fetchPluginNameByClassLoader(Ljava/lang/ClassLoader;)Ljava/lang/String;
    .locals 0

    .line 479
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->fetchPluginName(Ljava/lang/ClassLoader;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static fetchResourceIdByName(Ljava/lang/String;Ljava/lang/String;)I
    .locals 5

    .line 496
    invoke-static {p0}, Lcom/qihoo360/replugin/RePlugin;->fetchPackageInfo(Ljava/lang/String;)Landroid/content/pm/PackageInfo;

    move-result-object v0

    const-string v1, "; resName="

    const-string v2, "RePlugin"

    const/4 v3, 0x0

    if-nez v0, :cond_1

    .line 499
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 500
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "fetchResourceIdByName: Plugin not found. pn="

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return v3

    .line 504
    :cond_1
    invoke-static {p0}, Lcom/qihoo360/replugin/RePlugin;->fetchResources(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object v4

    if-nez v4, :cond_3

    .line 507
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    .line 508
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "fetchResourceIdByName: Plugin not found (fetchResources). pn="

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return v3

    .line 516
    :cond_3
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v0, v0, Landroid/content/pm/PackageInfo;->packageName:Ljava/lang/String;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ":"

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const/4 p1, 0x0

    .line 517
    invoke-virtual {v4, p0, p1, p1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p0

    return p0
.end method

.method public static fetchResources(Ljava/lang/String;)Landroid/content/res/Resources;
    .locals 0

    .line 401
    invoke-static {p0}, Lcom/qihoo360/i/Factory;->queryPluginResouces(Ljava/lang/String;)Landroid/content/res/Resources;

    move-result-object p0

    return-object p0
.end method

.method public static fetchViewByLayoutName(Ljava/lang/String;Ljava/lang/String;Landroid/view/ViewGroup;)Landroid/view/View;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Landroid/view/View;",
            ">(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Landroid/view/ViewGroup;",
            ")TT;"
        }
    .end annotation

    .line 533
    invoke-static {p0}, Lcom/qihoo360/replugin/RePlugin;->fetchContext(Ljava/lang/String;)Landroid/content/Context;

    move-result-object v0

    const-string v1, "; layoutName="

    const-string v2, "RePlugin"

    if-nez v0, :cond_0

    .line 536
    sget-boolean v3, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v3, :cond_0

    .line 537
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "fetchViewByLayoutName: Plugin not found. pn="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 541
    :cond_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "layout/"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 542
    invoke-static {p0, v3}, Lcom/qihoo360/replugin/RePlugin;->fetchResourceIdByName(Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    if-gtz v3, :cond_2

    .line 545
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_1

    .line 546
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "fetchViewByLayoutName: fetch failed! pn="

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    const/4 p0, 0x0

    return-object p0

    .line 555
    :cond_2
    invoke-static {v0}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object p0

    invoke-virtual {p0, v3, p2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p0

    return-object p0
.end method

.method public static getConfig()Lcom/qihoo360/replugin/RePluginConfig;
    .locals 1

    .line 715
    sget-object v0, Lcom/qihoo360/replugin/RePlugin;->sConfig:Lcom/qihoo360/replugin/RePluginConfig;

    return-object v0
.end method

.method public static getGlobalBinder(Ljava/lang/String;)Landroid/os/IBinder;
    .locals 1

    .line 808
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->getService(Landroid/content/Context;Ljava/lang/String;)Landroid/os/IBinder;

    move-result-object p0

    return-object p0
.end method

.method public static getPluginInfo(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 1

    const/4 v0, 0x1

    .line 576
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    return-object p0
.end method

.method public static getPluginInfoList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x1

    .line 565
    invoke-static {v0}, Lcom/qihoo360/loader2/MP;->getPlugins(Z)Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static getPluginVersion(Ljava/lang/String;)I
    .locals 1

    const/4 v0, 0x0

    .line 587
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, -0x1

    return p0

    .line 592
    :cond_0
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersion()I

    move-result p0

    return p0
.end method

.method public static getRunningPlugins()Lcom/qihoo360/replugin/packages/PluginRunningList;
    .locals 1

    .line 680
    invoke-static {}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->getRunningPluginsNoThrows()Lcom/qihoo360/replugin/packages/PluginRunningList;

    move-result-object v0

    return-object v0
.end method

.method public static getRunningProcessesByPlugin(Ljava/lang/String;)[Ljava/lang/String;
    .locals 0

    .line 693
    invoke-static {p0}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->getRunningProcessesByPluginNoThrows(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static getVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "2.0"

    return-object v0
.end method

.method public static install(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 4

    .line 121
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 126
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 127
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    const/4 v2, 0x0

    const-string v3, "RePlugin"

    if-nez v1, :cond_0

    .line 128
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "install: File not exists. path="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 130
    :cond_0
    invoke-virtual {v0}, Ljava/io/File;->isFile()Z

    move-result v0

    if-nez v0, :cond_1

    .line 131
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "install: Not a valid file. path="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    :cond_1
    const-string v0, "p-n-"

    .line 136
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 137
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->getPnInstallDir()Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    .line 138
    invoke-virtual {p0, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 139
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "install: Must be installed from the specified path. Path="

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "; Allowed="

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-object v2

    .line 144
    :cond_2
    invoke-static {p0, p1}, Lcom/qihoo360/loader2/MP;->pluginDownloaded(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    return-object p0

    .line 122
    :cond_3
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0
.end method

.method public static isCurrentPersistentProcess()Z
    .locals 1

    .line 703
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    return v0
.end method

.method public static isForDev()Z
    .locals 1

    .line 349
    sget-boolean v0, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    return v0
.end method

.method public static isHookingClass(Landroid/content/ComponentName;)Z
    .locals 1

    .line 857
    invoke-virtual {p0}, Landroid/content/ComponentName;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/i/Factory2;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static isPluginDexExtracted(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    .line 629
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 630
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isDexExtracted()Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public static isPluginInstalled(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    .line 604
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public static isPluginRunning(Ljava/lang/String;)Z
    .locals 0

    .line 642
    :try_start_0
    invoke-static {p0}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->isPluginRunning(Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 646
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static isPluginRunningInProcess(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 0

    .line 662
    :try_start_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/packages/PluginManagerProxy;->isPluginRunningInProcess(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0
    :try_end_0
    .catch Landroid/os/RemoteException; {:try_start_0 .. :try_end_0} :catch_0

    return p0

    :catch_0
    move-exception p0

    .line 666
    invoke-virtual {p0}, Landroid/os/RemoteException;->printStackTrace()V

    const/4 p0, 0x0

    return p0
.end method

.method public static isPluginUsed(Ljava/lang/String;)Z
    .locals 1

    const/4 v0, 0x0

    .line 617
    invoke-static {p0, v0}, Lcom/qihoo360/loader2/MP;->getPlugin(Ljava/lang/String;Z)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 618
    invoke-virtual {p0}, Lcom/qihoo360/replugin/model/PluginInfo;->isUsed()Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 v0, 0x1

    :cond_0
    return v0
.end method

.method public static preload(Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 1

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 205
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/packages/PluginFastInstallProviderProxy;->install(Landroid/content/Context;Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p0

    return p0
.end method

.method public static preload(Ljava/lang/String;)Z
    .locals 2

    .line 174
    invoke-static {p0}, Lcom/qihoo360/replugin/RePlugin;->getPluginInfo(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-nez v0, :cond_1

    .line 177
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 178
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "preload: Plugin not found! pn="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "RePlugin"

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p0, 0x0

    return p0

    .line 182
    :cond_1
    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->preload(Lcom/qihoo360/replugin/model/PluginInfo;)Z

    move-result p0

    return p0
.end method

.method public static registerGlobalBinder(Ljava/lang/String;Landroid/os/IBinder;)Z
    .locals 1

    .line 759
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->addService(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)Z

    move-result p0

    return p0
.end method

.method public static registerGlobalBinderDelayed(Ljava/lang/String;Lcom/qihoo360/replugin/IBinderGetter;)Z
    .locals 1

    .line 778
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0, p1}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->addService(Landroid/content/Context;Ljava/lang/String;Lcom/qihoo360/replugin/IBinderGetter;)Z

    move-result p0

    return p0
.end method

.method public static registerHookingClass(Ljava/lang/String;Landroid/content/ComponentName;Ljava/lang/Class;)V
    .locals 1

    .line 847
    invoke-virtual {p1}, Landroid/content/ComponentName;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, v0, p1, p2}, Lcom/qihoo360/i/Factory2;->registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z

    return-void
.end method

.method public static registerHostBinder(Lcom/qihoo360/replugin/IHostBinderFetcher;)V
    .locals 1

    const-string v0, "main"

    .line 743
    invoke-static {v0, p0}, Lcom/qihoo360/loader2/MP;->installBuiltinPlugin(Ljava/lang/String;Lcom/qihoo360/replugin/IHostBinderFetcher;)V

    return-void
.end method

.method public static registerInstalledReceiver(Landroid/content/Context;Landroid/content/BroadcastReceiver;)V
    .locals 2

    .line 731
    new-instance v0, Landroid/content/IntentFilter;

    const-string v1, "com.qihoo360.loader2.ACTION_NEW_PLUGIN"

    invoke-direct {v0, v1}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    .line 732
    invoke-static {p0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->getInstance(Landroid/content/Context;)Lcom/qihoo360/replugin/compat/LocalBroadcastManager;

    move-result-object p0

    invoke-virtual {p0, p1, v0}, Lcom/qihoo360/replugin/compat/LocalBroadcastManager;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)V

    return-void
.end method

.method public static setTraceInstallPlugin(Z)V
    .locals 0

    .line 906
    sput-boolean p0, Lcom/qihoo360/replugin/RePlugin;->isEnableTraceInstallPlugin:Z

    return-void
.end method

.method public static startActivity(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 3

    .line 237
    invoke-virtual {p1}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    if-nez v0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 242
    :cond_0
    invoke-virtual {v0}, Landroid/content/ComponentName;->getPackageName()Ljava/lang/String;

    move-result-object v1

    .line 243
    invoke-virtual {v0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v0

    const/high16 v2, -0x80000000

    .line 244
    invoke-static {p0, p1, v1, v0, v2}, Lcom/qihoo360/i/Factory;->startActivityWithNoInjectCN(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Z

    move-result p0

    return p0
.end method

.method public static startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    const/high16 v0, -0x80000000

    .line 259
    invoke-static {p0, p1, p2, p3, v0}, Lcom/qihoo360/i/Factory;->startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;I)Z

    move-result p0

    return p0
.end method

.method public static startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;I)Z
    .locals 1

    const/4 v0, 0x0

    .line 272
    invoke-static {p0, p1, p2, v0}, Lcom/qihoo360/i/Factory;->startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z

    move-result p0

    return p0
.end method

.method public static startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z
    .locals 0

    .line 286
    invoke-static {p0, p1, p2, p3}, Lcom/qihoo360/i/Factory;->startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z

    move-result p0

    return p0
.end method

.method public static uninstall(Ljava/lang/String;)Z
    .locals 1

    .line 158
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 161
    invoke-static {p0}, Lcom/qihoo360/loader2/MP;->pluginUninstall(Ljava/lang/String;)Z

    move-result p0

    return p0

    .line 159
    :cond_0
    new-instance p0, Ljava/lang/IllegalArgumentException;

    invoke-direct {p0}, Ljava/lang/IllegalArgumentException;-><init>()V

    throw p0
.end method

.method public static unregisterGlobalBinder(Ljava/lang/String;)Z
    .locals 2

    .line 791
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v0, p0, v1}, Lcom/qihoo360/mobilesafe/svcmanager/QihooServiceManager;->removeService(Landroid/content/Context;Ljava/lang/String;Landroid/os/IBinder;)Z

    move-result p0

    return p0
.end method

.method public static unregisterHookingClass(Ljava/lang/String;)V
    .locals 0

    .line 869
    invoke-static {p0}, Lcom/qihoo360/i/Factory2;->unregisterDynamicClass(Ljava/lang/String;)V

    return-void
.end method

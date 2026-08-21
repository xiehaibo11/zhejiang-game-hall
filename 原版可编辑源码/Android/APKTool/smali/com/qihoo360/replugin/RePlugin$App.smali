.class public Lcom/qihoo360/replugin/RePlugin$App;
.super Ljava/lang/Object;
.source "RePlugin.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/RePlugin;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "App"
.end annotation


# static fields
.field static sAttached:Z

.field static sCreated:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 919
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/qihoo360/replugin/RePlugin$App;->sCreated:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 915
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static attachBaseContext(Landroid/app/Application;)V
    .locals 1

    .line 929
    new-instance v0, Lcom/qihoo360/replugin/RePluginConfig;

    invoke-direct {v0}, Lcom/qihoo360/replugin/RePluginConfig;-><init>()V

    invoke-static {p0, v0}, Lcom/qihoo360/replugin/RePlugin$App;->attachBaseContext(Landroid/app/Application;Lcom/qihoo360/replugin/RePluginConfig;)V

    return-void
.end method

.method public static attachBaseContext(Landroid/app/Application;Lcom/qihoo360/replugin/RePluginCallbacks;)V
    .locals 1

    .line 943
    new-instance v0, Lcom/qihoo360/replugin/RePluginConfig;

    invoke-direct {v0}, Lcom/qihoo360/replugin/RePluginConfig;-><init>()V

    invoke-virtual {v0, p1}, Lcom/qihoo360/replugin/RePluginConfig;->setCallbacks(Lcom/qihoo360/replugin/RePluginCallbacks;)Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/qihoo360/replugin/RePlugin$App;->attachBaseContext(Landroid/app/Application;Lcom/qihoo360/replugin/RePluginConfig;)V

    return-void
.end method

.method public static attachBaseContext(Landroid/app/Application;Lcom/qihoo360/replugin/RePluginConfig;)V
    .locals 2

    .line 956
    sget-boolean v0, Lcom/qihoo360/replugin/RePlugin$App;->sAttached:Z

    const-string v1, "RePlugin"

    if-eqz v0, :cond_1

    .line 957
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    const-string p0, "attachBaseContext: Already called"

    .line 958
    invoke-static {v1, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void

    .line 963
    :cond_1
    invoke-static {p0}, Lcom/qihoo360/replugin/RePluginInternal;->init(Landroid/app/Application;)V

    .line 964
    invoke-static {p1}, Lcom/qihoo360/replugin/RePlugin;->access$002(Lcom/qihoo360/replugin/RePluginConfig;)Lcom/qihoo360/replugin/RePluginConfig;

    .line 965
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->access$000()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/qihoo360/replugin/RePluginConfig;->initDefaults(Landroid/content/Context;)V

    .line 967
    invoke-static {p0}, Lcom/qihoo360/replugin/base/IPC;->init(Landroid/content/Context;)V

    .line 971
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object p1

    invoke-virtual {p1}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result p1

    if-eqz p1, :cond_2

    const-string p1, "act=, init, flag=, Start, pn=, framework, func=, attachBaseContext, lib=, RePlugin"

    .line 972
    invoke-static {v1, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->printMemoryStatus(Ljava/lang/String;Ljava/lang/String;)I

    .line 977
    :cond_2
    invoke-static {}, Lcom/qihoo360/replugin/helper/HostConfigHelper;->init()V

    .line 980
    sput-object p0, Lcom/qihoo360/mobilesafe/api/AppVar;->sAppContext:Landroid/content/Context;

    .line 983
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginStatusController;->setAppContext(Landroid/app/Application;)V

    .line 985
    invoke-static {p0}, Lcom/qihoo360/loader2/PMF;->init(Landroid/app/Application;)V

    .line 986
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->callAttach()V

    const/4 p0, 0x1

    .line 988
    sput-boolean p0, Lcom/qihoo360/replugin/RePlugin$App;->sAttached:Z

    return-void
.end method

.method public static onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 1069
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    if-lt v0, v1, :cond_0

    return-void

    .line 1074
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->notifyOnConfigurationChanged(Landroid/content/res/Configuration;)V

    return-void
.end method

.method public static onCreate()V
    .locals 3

    .line 999
    sget-boolean v0, Lcom/qihoo360/replugin/RePlugin$App;->sAttached:Z

    if-eqz v0, :cond_3

    .line 1003
    sget-object v0, Lcom/qihoo360/replugin/RePlugin$App;->sCreated:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/atomic/AtomicBoolean;->compareAndSet(ZZ)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 1007
    :cond_0
    invoke-static {}, Lcom/qihoo360/mobilesafe/api/Tasks;->init()V

    .line 1009
    invoke-static {}, Lcom/qihoo360/loader2/PMF;->callAppCreate()V

    .line 1012
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1013
    invoke-static {}, Lcom/qihoo360/replugin/RePluginInternal;->getAppContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/qihoo360/replugin/packages/PluginInfoUpdater;->register(Landroid/content/Context;)V

    .line 1018
    :cond_1
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v0

    if-eqz v0, :cond_2

    const-string v0, "RePlugin"

    const-string v1, "act=, init, flag=, End, pn=, framework, func=, onCreate, lib=, RePlugin"

    .line 1019
    invoke-static {v0, v1}, Lcom/qihoo360/replugin/helper/LogDebug;->printMemoryStatus(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-void

    .line 1000
    :cond_3
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0}, Ljava/lang/IllegalStateException;-><init>()V

    throw v0
.end method

.method public static onLowMemory()V
    .locals 2

    .line 1033
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    if-lt v0, v1, :cond_0

    return-void

    .line 1038
    :cond_0
    invoke-static {}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->notifyOnLowMemory()V

    return-void
.end method

.method public static onTrimMemory(I)V
    .locals 2

    .line 1051
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xe

    if-lt v0, v1, :cond_0

    return-void

    .line 1056
    :cond_0
    invoke-static {p0}, Lcom/qihoo360/replugin/component/app/PluginApplicationClient;->notifyOnTrimMemory(I)V

    return-void
.end method

.class public Lcom/ymnsdk/replugin/RePluginSdk;
.super Ljava/lang/Object;
.source "RePluginSdk.java"


# static fields
.field private static pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 23
    new-instance v0, Lcom/ymnsdk/replugin/PluginInterface;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/PluginInterface;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
    .locals 1

    .line 161
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/ymnsdk/replugin/PluginInterface;->allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V

    return-void
.end method

.method public static allowUserPrivacy()V
    .locals 1

    .line 175
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/PluginInterface;->allowUserPrivacy()V

    return-void
.end method

.method public static clearDownloadCache(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;)V
    .locals 1

    .line 146
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/ymnsdk/replugin/PluginInterface;->clearDownloadCache(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;)V

    return-void
.end method

.method public static getFrameworkVersion()Ljava/lang/String;
    .locals 1

    .line 132
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/PluginInterface;->get_framework_version()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V
    .locals 1

    .line 54
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1, p2}, Lcom/ymnsdk/replugin/PluginInterface;->getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V

    return-void
.end method

.method public static installPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 3

    .line 80
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    const/4 v1, 0x5

    const/16 v2, 0xf

    invoke-virtual {v0, p0, v1, v2, p1}, Lcom/ymnsdk/replugin/PluginInterface;->installPlugin(Ljava/lang/String;IILcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method public static installPlugin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 1

    .line 92
    :try_start_0
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/ymnsdk/replugin/PluginInterface;->installPlugin(Ljava/lang/String;IILcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 95
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    const-string p0, "\u4f20\u53c2\u7c7b\u578b\u4e0d\u5408\u89c4"

    .line 96
    invoke-interface {p3, p0}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static is64Bit()Z
    .locals 2

    .line 193
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "is64Bit"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/PluginInterface;->is64Bit()Z

    move-result v1

    invoke-static {v1}, Ljava/lang/String;->valueOf(Z)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymnrelugin"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 194
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/PluginInterface;->is64Bit()Z

    move-result v0

    return v0
.end method

.method public static isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V
    .locals 1

    .line 72
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/ymnsdk/replugin/PluginInterface;->isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V

    return-void
.end method

.method public static onCreate(Landroid/content/Context;)V
    .locals 1

    .line 38
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0}, Lcom/ymnsdk/replugin/PluginInterface;->onCreate(Landroid/content/Context;)V

    .line 39
    invoke-static {p0}, Lcom/bianfeng/ymnsdk/utilslib/UtilsSdk;->initContext(Landroid/content/Context;)V

    return-void
.end method

.method public static onDestory()V
    .locals 1

    .line 184
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/PluginInterface;->onDestory()V

    return-void
.end method

.method public static onNewIntent(Landroid/content/Intent;)V
    .locals 1

    .line 44
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0}, Lcom/ymnsdk/replugin/PluginInterface;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method public static openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 1

    .line 153
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1, p2}, Lcom/ymnsdk/replugin/PluginInterface;->openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    return-void
.end method

.method public static postToSepperllita(Ljava/lang/String;)V
    .locals 1

    .line 168
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0}, Lcom/ymnsdk/replugin/PluginInterface;->postToSepperllita(Ljava/lang/String;)V

    return-void
.end method

.method public static preloadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V
    .locals 1

    .line 125
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/ymnsdk/replugin/PluginInterface;->preLoadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V

    return-void
.end method

.method public static queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V
    .locals 1

    .line 63
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/ymnsdk/replugin/PluginInterface;->queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V

    return-void
.end method

.method public static setPluginExitListener(Lcom/ymnsdk/replugin/listener/PluginExitListener;)V
    .locals 1

    .line 139
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0}, Lcom/ymnsdk/replugin/PluginInterface;->setPluginExitListener(Lcom/ymnsdk/replugin/listener/PluginExitListener;)V

    return-void
.end method

.method public static startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V
    .locals 1

    .line 107
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1, p2}, Lcom/ymnsdk/replugin/PluginInterface;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    return-void
.end method

.method public static unInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;)V
    .locals 1

    .line 116
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/ymnsdk/replugin/PluginInterface;->unInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;)V

    return-void
.end method


# virtual methods
.method public getPluginInterface()Lcom/ymnsdk/replugin/PluginInterface;
    .locals 1

    .line 30
    sget-object v0, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    return-object v0
.end method

.method public setPluginInterface(Lcom/ymnsdk/replugin/PluginInterface;)V
    .locals 0

    .line 26
    sput-object p1, Lcom/ymnsdk/replugin/RePluginSdk;->pluginInterface:Lcom/ymnsdk/replugin/PluginInterface;

    return-void
.end method

.class public Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;
.super Ljava/lang/Object;
.source "RepluginSdkJavaBridging.java"


# static fields
.field private static RePluginSdk_getPluginsInfo_failure:I = 0xc739

.field private static RePluginSdk_getPluginsInfo_success:I = 0xc738

.field private static RePluginSdk_installPlugin_downloading:I = 0xcf0a

.field private static RePluginSdk_installPlugin_failure:I = 0xcf09

.field private static RePluginSdk_installPlugin_success:I = 0xcf08

.field private static RePluginSdk_isInstallPlugin_installed:I = 0xd2f0

.field private static RePluginSdk_isInstallPlugin_notInstall:I = 0xd2f1

.field private static RePluginSdk_plugin_clear_fail:I = 0xe679

.field private static RePluginSdk_plugin_clear_success:I = 0xe678

.field private static RePluginSdk_plugin_exit:I = 0xe291

.field private static RePluginSdk_plugin_open_downloading:I = 0x7c832

.field private static RePluginSdk_plugin_open_fail:I = 0x7c831

.field private static RePluginSdk_plugin_open_success:I = 0x7c830

.field private static RePluginSdk_preloadPlugin_failure:I = 0xdea9

.field private static RePluginSdk_preloadPlugin_success:I = 0xdea8

.field private static RePluginSdk_queryPluginStatus_available:I = 0xcb20

.field private static RePluginSdk_queryPluginStatus_failure:I = 0xcb22

.field private static RePluginSdk_queryPluginStatus_unAvailable:I = 0xcb21

.field private static RePluginSdk_startApk_failure:I = 0xd6d9

.field private static RePluginSdk_startApk_success:I = 0xd6d8

.field private static RePluginSdk_unInstallPlugin_failure:I = 0xdac1

.field private static RePluginSdk_unInstallPlugin_success:I = 0xdac0

.field private static beforeProcess:J = -0x1L

.field static volatile isAllowing:Z = false

.field static volatile isInit:Z = false

.field static volatile isOpenComplete:Z = true

.field static isOpenSuc:Z

.field private static repluginListener:Lcom/ymnsdk/replugin/listener/RepluginListener;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 32
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_getPluginsInfo_success:I

    return v0
.end method

.method static synthetic access$100()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_getPluginsInfo_failure:I

    return v0
.end method

.method static synthetic access$1000()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_isInstallPlugin_notInstall:I

    return v0
.end method

.method static synthetic access$1100()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_startApk_success:I

    return v0
.end method

.method static synthetic access$1200()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_startApk_failure:I

    return v0
.end method

.method static synthetic access$1300()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_unInstallPlugin_success:I

    return v0
.end method

.method static synthetic access$1400()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_unInstallPlugin_failure:I

    return v0
.end method

.method static synthetic access$1500()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_preloadPlugin_success:I

    return v0
.end method

.method static synthetic access$1600()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_preloadPlugin_failure:I

    return v0
.end method

.method static synthetic access$1700()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_plugin_clear_success:I

    return v0
.end method

.method static synthetic access$1800()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_plugin_clear_fail:I

    return v0
.end method

.method static synthetic access$1900()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_plugin_open_success:I

    return v0
.end method

.method static synthetic access$200()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_queryPluginStatus_unAvailable:I

    return v0
.end method

.method static synthetic access$2000()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_plugin_open_fail:I

    return v0
.end method

.method static synthetic access$2100()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_plugin_open_downloading:I

    return v0
.end method

.method static synthetic access$2200()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_plugin_exit:I

    return v0
.end method

.method static synthetic access$300()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_queryPluginStatus_available:I

    return v0
.end method

.method static synthetic access$400()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_queryPluginStatus_failure:I

    return v0
.end method

.method static synthetic access$500()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_installPlugin_success:I

    return v0
.end method

.method static synthetic access$600()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_installPlugin_failure:I

    return v0
.end method

.method static synthetic access$700()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_installPlugin_downloading:I

    return v0
.end method

.method static synthetic access$800()J
    .locals 2

    .line 32
    sget-wide v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->beforeProcess:J

    return-wide v0
.end method

.method static synthetic access$802(J)J
    .locals 0

    .line 32
    sput-wide p0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->beforeProcess:J

    return-wide p0
.end method

.method static synthetic access$900()I
    .locals 1

    .line 32
    sget v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->RePluginSdk_isInstallPlugin_installed:I

    return v0
.end method

.method public static addRePluginLister(Lcom/ymnsdk/replugin/listener/RepluginListener;)V
    .locals 0

    .line 219
    sput-object p0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->repluginListener:Lcom/ymnsdk/replugin/listener/RepluginListener;

    return-void
.end method

.method public static allowStartPlugin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    .line 484
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isAllowing:Z

    const-string v0, "1"

    .line 485
    invoke-virtual {p2, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    .line 486
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$11;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$11;-><init>()V

    invoke-static {p0, p1, p2, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V

    return-void
.end method

.method public static allowUserPrivacy()V
    .locals 0

    .line 508
    invoke-static {}, Lcom/ymnsdk/replugin/RePluginSdk;->allowUserPrivacy()V

    return-void
.end method

.method public static clearDownloadCache(Ljava/lang/String;)V
    .locals 1

    .line 397
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$9;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$9;-><init>()V

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->clearDownloadCache(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;)V

    return-void
.end method

.method public static getPluginsInfo(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 223
    sget-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isInit:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 224
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isInit:Z

    .line 225
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$1;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$1;-><init>()V

    invoke-static {p0, p1, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V

    return-void
.end method

.method public static installPlugin(Ljava/lang/String;)V
    .locals 1

    .line 261
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$3;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$3;-><init>()V

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->installPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method public static installPlugin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 298
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$4;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$4;-><init>()V

    invoke-static {p0, p1, p2, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->installPlugin(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method public static isInstallPlugin(Ljava/lang/String;)V
    .locals 1

    .line 337
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$5;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$5;-><init>()V

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V

    return-void
.end method

.method public static onCreate(Landroid/content/Context;)V
    .locals 0

    .line 205
    invoke-static {p0}, Lcom/ymnsdk/replugin/RePluginSdk;->onCreate(Landroid/content/Context;)V

    .line 206
    invoke-static {}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->setPluginExitListener()V

    const/4 p0, 0x0

    .line 207
    sput-boolean p0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isInit:Z

    return-void
.end method

.method public static onDestory()V
    .locals 0

    .line 215
    invoke-static {}, Lcom/ymnsdk/replugin/RePluginSdk;->onDestory()V

    return-void
.end method

.method public static onNewIntent(Landroid/content/Intent;)V
    .locals 0

    .line 211
    invoke-static {p0}, Lcom/ymnsdk/replugin/RePluginSdk;->onNewIntent(Landroid/content/Intent;)V

    return-void
.end method

.method public static openPlugin(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x1

    .line 412
    sput-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    .line 413
    sget-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    if-nez v0, :cond_0

    return-void

    .line 414
    :cond_0
    sget-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isAllowing:Z

    if-eqz v0, :cond_1

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 415
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenComplete:Z

    .line 416
    sput-boolean v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->isOpenSuc:Z

    .line 417
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$10;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$10;-><init>()V

    invoke-static {p0, p1, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    return-void
.end method

.method public static postToSepperllita(Ljava/lang/String;)V
    .locals 0

    .line 503
    invoke-static {p0}, Lcom/ymnsdk/replugin/RePluginSdk;->postToSepperllita(Ljava/lang/String;)V

    return-void
.end method

.method public static preloadPlugin(Ljava/lang/String;)V
    .locals 2

    const-string v0, "ymn"

    const-string v1, "\u5230\u4e86preloadPlugin"

    .line 380
    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 381
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$8;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$8;-><init>()V

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->preloadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V

    return-void
.end method

.method public static queryPluginStatus(Ljava/lang/String;)V
    .locals 1

    .line 241
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$2;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$2;-><init>()V

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V

    return-void
.end method

.method public static sendResult(ILjava/lang/String;)V
    .locals 1

    .line 171
    sget-object v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging;->repluginListener:Lcom/ymnsdk/replugin/listener/RepluginListener;

    invoke-interface {v0, p0, p1}, Lcom/ymnsdk/replugin/listener/RepluginListener;->sendRepluginCodeAndMsg(ILjava/lang/String;)V

    return-void
.end method

.method public static setPluginExitListener()V
    .locals 1

    .line 513
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$12;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$12;-><init>()V

    invoke-static {v0}, Lcom/ymnsdk/replugin/RePluginSdk;->setPluginExitListener(Lcom/ymnsdk/replugin/listener/PluginExitListener;)V

    return-void
.end method

.method public static startApk(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 351
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$6;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$6;-><init>()V

    invoke-static {p0, p1, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    return-void
.end method

.method public static unInstallPlugin(Ljava/lang/String;)V
    .locals 1

    .line 365
    new-instance v0, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$7;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/RepluginSdkJavaBridging$7;-><init>()V

    invoke-static {p0, v0}, Lcom/ymnsdk/replugin/RePluginSdk;->unInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;)V

    return-void
.end method

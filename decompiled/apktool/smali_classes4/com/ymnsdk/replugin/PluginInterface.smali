.class public Lcom/ymnsdk/replugin/PluginInterface;
.super Ljava/lang/Object;
.source "PluginInterface.java"


# static fields
.field public static FRAMEWORK_VERSION:Ljava/lang/String; = "2.2.6"


# instance fields
.field private activity:Landroid/app/Activity;

.field private context:Landroid/content/Context;

.field info:Lcom/qihoo360/replugin/model/PluginInfo;

.field private mReceiver:Lcom/ymnsdk/replugin/util/RecentlyReceiver;

.field private pluginExitListener:Lcom/ymnsdk/replugin/listener/PluginExitListener;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "apkpatch"

    .line 63
    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    .line 54
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 57
    iput-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->info:Lcom/qihoo360/replugin/model/PluginInfo;

    .line 59
    iput-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->pluginExitListener:Lcom/ymnsdk/replugin/listener/PluginExitListener;

    return-void
.end method

.method private initReplugin(Landroid/app/Activity;)V
    .locals 3

    .line 74
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    .line 75
    invoke-static {}, Lcom/carlt/networklibs/NetworkManager;->getInstance()Lcom/carlt/networklibs/NetworkManager;

    move-result-object v0

    invoke-virtual {p1}, Landroid/app/Activity;->getApplication()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/carlt/networklibs/NetworkManager;->init(Landroid/app/Application;)V

    .line 77
    invoke-static {}, Lcom/carlt/networklibs/NetworkManager;->getInstance()Lcom/carlt/networklibs/NetworkManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/carlt/networklibs/NetworkManager;->registerObserver(Ljava/lang/Object;)V

    .line 78
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    invoke-virtual {p1}, Landroid/app/Activity;->getFilesDir()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->setWriteablePath(Ljava/lang/String;)V

    .line 79
    invoke-static {p1}, Lcom/qihoo360/replugin/utils/SharedPreferencesUtils;->init(Landroid/content/Context;)V

    .line 80
    new-instance v0, Lcom/ymnsdk/replugin/util/RecentlyReceiver;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/util/RecentlyReceiver;-><init>()V

    iput-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->mReceiver:Lcom/ymnsdk/replugin/util/RecentlyReceiver;

    .line 81
    new-instance v1, Landroid/content/IntentFilter;

    const-string v2, "android.intent.action.CLOSE_SYSTEM_DIALOGS"

    invoke-direct {v1, v2}, Landroid/content/IntentFilter;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1, v0, v1}, Landroid/app/Activity;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    .line 82
    invoke-static {p1}, Lcom/ymnsdk/replugin/util/PrivacyUtils;->getUserPrivacyAlone(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 83
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->init(Landroid/content/Context;)V

    .line 84
    invoke-static {p1}, Lcom/ymnsdk/replugin/util/LogUtils;->postInterruptEvent(Landroid/app/Activity;)V

    return-void
.end method


# virtual methods
.method public allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
    .locals 2

    .line 216
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 217
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 218
    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/ymnsdk/replugin/feature/PluginManager;->allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V

    return-void
.end method

.method public allowUserPrivacy()V
    .locals 2

    .line 235
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->init(Landroid/content/Context;)V

    .line 236
    iget-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-static {v0}, Lcom/ymnsdk/replugin/util/LogUtils;->postInterruptEvent(Landroid/app/Activity;)V

    return-void
.end method

.method public clearDownloadCache(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;)V
    .locals 1

    .line 204
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 205
    iget-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-static {v0, p1, p2}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->clearCache(Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/ClearDownloadCacheListener;)V

    return-void
.end method

.method protected getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V
    .locals 2

    .line 138
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setAppId(Ljava/lang/String;)V

    .line 139
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p2}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setAppInfo(Ljava/lang/String;)V

    .line 140
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;-><init>(Landroid/app/Activity;)V

    .line 141
    invoke-virtual {v0, p1, p2, p3}, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V

    return-void
.end method

.method public get_framework_version()Ljava/lang/String;
    .locals 1

    .line 121
    sget-object v0, Lcom/ymnsdk/replugin/PluginInterface;->FRAMEWORK_VERSION:Ljava/lang/String;

    return-object v0
.end method

.method protected installPlugin(Ljava/lang/String;IILcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 8

    .line 169
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 170
    invoke-static {}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->getInstance()Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v2, p1

    move v3, p2

    move v4, p3

    move-object v7, p4

    invoke-virtual/range {v0 .. v7}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method public is64Bit()Z
    .locals 2

    .line 191
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 192
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/feature/PluginManager;->is64Bit()Z

    move-result v0

    return v0
.end method

.method protected isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V
    .locals 2

    .line 162
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 163
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 164
    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/feature/PluginManager;->isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V

    return-void
.end method

.method public network(Lcom/carlt/networklibs/NetType;)V
    .locals 3
    .annotation runtime Lcom/carlt/networklibs/annotation/NetWork;
        netType = .enum Lcom/carlt/networklibs/NetType;->AUTO:Lcom/carlt/networklibs/NetType;
    .end annotation

    .line 255
    sget-object v0, Lcom/ymnsdk/replugin/PluginInterface$1;->$SwitchMap$com$carlt$networklibs$NetType:[I

    invoke-virtual {p1}, Lcom/carlt/networklibs/NetType;->ordinal()I

    move-result p1

    aget p1, v0, p1

    const-string v0, "ymn"

    const/4 v1, 0x1

    if-eq p1, v1, :cond_3

    const/4 v2, 0x2

    if-eq p1, v2, :cond_2

    const/4 v2, 0x3

    if-eq p1, v2, :cond_2

    const/4 v2, 0x4

    if-eq p1, v2, :cond_1

    const/4 v2, 0x5

    if-eq p1, v2, :cond_0

    .line 289
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setNetWorkAvailable(Z)V

    goto/16 :goto_0

    :cond_0
    const-string p1, "\u662f\u65e0\u7f51\u7edc"

    .line 281
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 282
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setNetWorkAvailable(Z)V

    .line 283
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setIsDownloadRecovery(Z)V

    goto :goto_0

    :cond_1
    const-string p1, "\u662fAUTO"

    .line 278
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    :cond_2
    const-string p1, "\u662fCMWAP"

    .line 271
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 272
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setNetWorkAvailable(Z)V

    .line 273
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result p1

    if-eqz p1, :cond_5

    sget p1, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->isNoWifiDownload:I

    if-nez p1, :cond_5

    .line 274
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadStop()V

    goto :goto_0

    :cond_3
    const-string p1, "\u662fwifi"

    .line 257
    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 258
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setNetWorkAvailable(Z)V

    .line 259
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result p1

    if-eqz p1, :cond_5

    .line 260
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getActivity()Landroid/app/Activity;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 262
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;

    move-result-object p1

    invoke-static {p1, v1}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadRecovery(Lcom/ymnsdk/replugin/entity/DownloadEntity;I)V

    goto :goto_0

    .line 264
    :cond_4
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object p1

    iget-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Landroid/app/Activity;)V

    :cond_5
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/content/Context;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/ymnsdk/replugin/PluginInterface;->context:Landroid/content/Context;

    .line 68
    check-cast p1, Landroid/app/Activity;

    iput-object p1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    .line 69
    invoke-direct {p0, p1}, Lcom/ymnsdk/replugin/PluginInterface;->initReplugin(Landroid/app/Activity;)V

    return-void
.end method

.method public onDestory()V
    .locals 3

    .line 242
    invoke-static {}, Lcom/carlt/networklibs/NetworkManager;->getInstance()Lcom/carlt/networklibs/NetworkManager;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v0, v1}, Lcom/carlt/networklibs/NetworkManager;->unRegisterObserver(Ljava/lang/Object;)V

    .line 243
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2}, Lcom/ymnsdk/replugin/event/other/KillApplicationEvent;-><init>(Landroid/app/Activity;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 244
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 246
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-virtual {v1, v2, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->postDownloadErrorEvent(Landroid/app/Activity;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V

    .line 248
    :cond_0
    iget-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->context:Landroid/content/Context;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->mReceiver:Lcom/ymnsdk/replugin/util/RecentlyReceiver;

    invoke-virtual {v0, v1}, Landroid/content/Context;->unregisterReceiver(Landroid/content/BroadcastReceiver;)V

    return-void
.end method

.method protected onNewIntent(Landroid/content/Intent;)V
    .locals 8

    if-eqz p1, :cond_1

    .line 92
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 94
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    const-string v1, "pluginId"

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 96
    iget-object v0, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    new-instance v2, Landroid/content/Intent;

    iget-object v3, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    const-class v4, Lcom/ymnsdk/replugin/service/HostService;

    invoke-direct {v2, v3, v4}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {v0, v2}, Landroid/app/Activity;->stopService(Landroid/content/Intent;)Z

    .line 97
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 99
    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    const-string v2, "data"

    invoke-virtual {v0, v2}, Landroid/os/Bundle;->containsKey(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Landroid/content/Intent;->getExtras()Landroid/os/Bundle;

    move-result-object p1

    invoke-virtual {p1, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 100
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "pluginId is "

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "ymn"

    invoke-static {v3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 101
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 103
    :try_start_0
    invoke-virtual {v0, v1, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 104
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 107
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 109
    :goto_1
    iget-object p1, p0, Lcom/ymnsdk/replugin/PluginInterface;->pluginExitListener:Lcom/ymnsdk/replugin/listener/PluginExitListener;

    if-eqz p1, :cond_1

    .line 111
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance v1, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    const v4, 0x21f0e

    const-string v5, ""

    const-string v7, ""

    move-object v2, v1

    invoke-direct/range {v2 .. v7}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 112
    iget-object p1, p0, Lcom/ymnsdk/replugin/PluginInterface;->pluginExitListener:Lcom/ymnsdk/replugin/listener/PluginExitListener;

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Lcom/ymnsdk/replugin/listener/PluginExitListener;->onPluginExit(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 2

    .line 210
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 211
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 212
    invoke-virtual {v0, p1, p2, p3}, Lcom/ymnsdk/replugin/feature/PluginManager;->openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    return-void
.end method

.method public postToSepperllita(Ljava/lang/String;)V
    .locals 3

    .line 224
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 225
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance v1, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2, v0}, Lcom/ymnsdk/replugin/event/custom/RepluginCustomEvent;-><init>(Landroid/app/Activity;Lorg/json/JSONObject;)V

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 228
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const-string p1, "ymn"

    const-string v0, "\u81ea\u5b9a\u4e49\u57cb\u70b9\u4e0a\u629b\uff0c\u4f20\u53c2\u683c\u5f0f\u4e0d\u662fjson"

    .line 229
    invoke-static {p1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :goto_0
    return-void
.end method

.method public preLoadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V
    .locals 2

    .line 195
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 196
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 197
    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/feature/PluginManager;->preLoadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V

    return-void
.end method

.method protected queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V
    .locals 4

    .line 151
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 153
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->endSilentDownload()V

    .line 154
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/UserStopSilentDownloadEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    sget v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadType:I

    invoke-direct {v1, v2, v3}, Lcom/ymnsdk/replugin/event/silentdownload/UserStopSilentDownloadEvent;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 156
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 157
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;-><init>(Landroid/app/Activity;)V

    .line 158
    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V

    return-void
.end method

.method public setPluginExitListener(Lcom/ymnsdk/replugin/listener/PluginExitListener;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/ymnsdk/replugin/PluginInterface;->pluginExitListener:Lcom/ymnsdk/replugin/listener/PluginExitListener;

    return-void
.end method

.method public startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V
    .locals 2

    .line 176
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 177
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 178
    invoke-virtual {v0, p1, p2, p3}, Lcom/ymnsdk/replugin/feature/PluginManager;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    return-void
.end method

.method public unInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;)V
    .locals 2

    .line 182
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginId(Ljava/lang/String;)V

    .line 183
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v1, p0, Lcom/ymnsdk/replugin/PluginInterface;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 184
    invoke-virtual {v0, p1, p2}, Lcom/ymnsdk/replugin/feature/PluginManager;->unInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;)V

    return-void
.end method

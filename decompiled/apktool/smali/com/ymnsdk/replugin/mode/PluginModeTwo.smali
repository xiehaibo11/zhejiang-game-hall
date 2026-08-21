.class public Lcom/ymnsdk/replugin/mode/PluginModeTwo;
.super Ljava/lang/Object;
.source "PluginModeTwo.java"


# static fields
.field static volatile isDownloading:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 25
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public allowOldStart(Ljava/lang/String;I)Z
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-ne p2, v1, :cond_0

    return v0

    .line 96
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object p2

    .line 97
    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    return v1

    :cond_1
    return v0
.end method

.method public installPlugin(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;ILcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 2

    .line 31
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/other/PluginModeTwoEvent;

    invoke-direct {v1, p1, p2}, Lcom/ymnsdk/replugin/event/other/PluginModeTwoEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 33
    invoke-virtual {p0, p2}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->isNeedDownloaded(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 35
    invoke-virtual {p0, p2, p4}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->allowOldStart(Ljava/lang/String;I)Z

    move-result p4

    if-eqz p4, :cond_0

    .line 38
    sput-object p1, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->activity:Landroid/app/Activity;

    .line 39
    sput-object p5, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->listener:Lcom/ymnsdk/replugin/listener/OpenListener;

    .line 40
    sput-object p2, Lcom/ymnsdk/replugin/mode/ModeTwoDownloadData;->pluginId:Ljava/lang/String;

    .line 43
    new-instance p4, Lcom/ymnsdk/replugin/feature/PluginManager;

    invoke-direct {p4, p1}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 44
    new-instance v0, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;

    invoke-direct {v0, p0, p1, p2, p5}, Lcom/ymnsdk/replugin/mode/PluginModeTwo$1;-><init>(Lcom/ymnsdk/replugin/mode/PluginModeTwo;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V

    invoke-virtual {p4, p2, p3, v0}, Lcom/ymnsdk/replugin/feature/PluginManager;->startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V

    .line 57
    sget-boolean p3, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->isDownloading:Z

    if-nez p3, :cond_2

    const/4 p3, 0x1

    .line 58
    sput-boolean p3, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->isDownloading:Z

    .line 60
    invoke-virtual {p0, p1, p2, p3, p5}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/OpenListener;)V

    goto :goto_0

    .line 64
    :cond_0
    invoke-virtual {p0, p1, p2, v1, p5}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/OpenListener;)V

    goto :goto_0

    .line 69
    :cond_1
    invoke-virtual {p0, p1, p2, v1, p5}, Lcom/ymnsdk/replugin/mode/PluginModeTwo;->installPlugin(Landroid/app/Activity;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/OpenListener;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public installPlugin(Landroid/app/Activity;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 8

    .line 106
    invoke-static {}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->getInstance()Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;

    invoke-direct {v7, p0, p3, p4, p2}, Lcom/ymnsdk/replugin/mode/PluginModeTwo$2;-><init>(Lcom/ymnsdk/replugin/mode/PluginModeTwo;ZLcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;)V

    const/4 v3, 0x5

    const/16 v4, 0xf

    const/4 v6, 0x0

    move-object v1, p1

    move-object v2, p2

    move v5, p3

    invoke-virtual/range {v0 .. v7}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method public isNeedDownloaded(Ljava/lang/String;)Z
    .locals 3

    .line 78
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "old.apk"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 80
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v1

    .line 81
    invoke-interface {v1, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 83
    invoke-interface {v1, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 85
    :goto_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v1, v0, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkMd5(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x0

    return p1

    :cond_1
    const/4 p1, 0x1

    return p1
.end method

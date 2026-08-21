.class public Lcom/ymnsdk/replugin/util/SilentDownloadUtils;
.super Ljava/lang/Object;
.source "SilentDownloadUtils.java"


# static fields
.field public static volatile isNoWifiDownload:I = 0x0

.field static mhostAppInfo:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static checkDowningPlugin(Landroid/app/Activity;Lcom/ymnsdk/replugin/entity/Plugin;)V
    .locals 5

    .line 125
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalSilentDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 126
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 128
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 129
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getVersion()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 131
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    invoke-direct {v2, p0, v3, v4}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 133
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 135
    :cond_0
    invoke-static {v0}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->clearCache(Ljava/util/List;)V

    .line 140
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 141
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 143
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 144
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/Plugin;->getVersion()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 146
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, p0, v2, v3}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 148
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object p0

    if-nez p0, :cond_2

    return-void

    .line 150
    :cond_2
    invoke-static {p0}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->clearCache(Ljava/util/List;)V

    :cond_3
    return-void
.end method

.method public static checkInBlackList(Ljava/util/List;Ljava/lang/String;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    .line 205
    invoke-static {p0, p1}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkscaleCondition(Ljava/util/List;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static checkInWhilteList(Ljava/util/List;Ljava/lang/String;)Z
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    .line 211
    invoke-static {p0, p1}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkscaleCondition(Ljava/util/List;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static checkPatch(Landroid/app/Activity;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 6

    .line 160
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->gutMergePatchData()Ljava/util/Map;

    move-result-object v0

    .line 161
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 163
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 164
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 166
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v3, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    invoke-direct {v3, p0, v4, v5}, Lcom/ymnsdk/replugin/event/silentdownload/ClearDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 168
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getMd5List()Ljava/util/List;

    move-result-object p0

    if-nez p0, :cond_0

    return-void

    .line 170
    :cond_0
    invoke-static {p0}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->clearPatch(Ljava/util/List;)V

    .line 171
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object p0

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 172
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putMergePatchData(Ljava/util/Map;)V

    :cond_1
    return-void
.end method

.method public static checkSilentFilter(Ljava/lang/String;JI)I
    .locals 9

    const-string v0, "silent_filter"

    .line 56
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    const-wide v2, 0x3fbeb851eb851eb8L    # 0.12

    invoke-virtual {v1, p1, p2, v2, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkSilentMemory(JD)Z

    move-result v1

    const/4 v2, 0x1

    if-nez v1, :cond_0

    return v2

    .line 57
    :cond_0
    invoke-static {p0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object p0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getSilent_update_filter()Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;

    move-result-object p0

    const/4 v1, 0x0

    if-eqz p0, :cond_9

    .line 61
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;->getStorageLeftSetting()Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;

    move-result-object v3

    if-eqz v3, :cond_2

    if-nez p3, :cond_1

    .line 67
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;->getWhen_apk()I

    move-result v3

    goto :goto_0

    .line 69
    :cond_1
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/silentfilter/StorageLeftSetting;->getWhen_patch()I

    move-result v3

    .line 71
    :goto_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v4

    const-wide/high16 v5, 0x3ff0000000000000L    # 1.0

    int-to-double v7, v3

    mul-double/2addr v7, v5

    const-wide/high16 v5, 0x4059000000000000L    # 100.0

    div-double/2addr v7, v5

    invoke-virtual {v4, p1, p2, v7, v8}, Lcom/ymnsdk/replugin/util/DownloadUtils;->checkSilentMemory(JD)Z

    move-result p1

    if-nez p1, :cond_2

    return v2

    :cond_2
    if-ne p3, v2, :cond_3

    return v1

    .line 78
    :cond_3
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;->getDeviceModelSetting()Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 81
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->getArray()Ljava/util/List;

    move-result-object p2

    .line 82
    sget-object p3, Landroid/os/Build;->MODEL:Ljava/lang/String;

    .line 83
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/silentfilter/DeviceModelSetting;->getIs_white_list()I

    move-result p1

    const/4 v3, 0x3

    if-eqz p1, :cond_5

    if-eq p1, v2, :cond_4

    goto :goto_1

    .line 90
    :cond_4
    invoke-static {p2, p3}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkInWhilteList(Ljava/util/List;Ljava/lang/String;)Z

    move-result p1

    if-nez p1, :cond_6

    return v3

    .line 86
    :cond_5
    invoke-static {p2, p3}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkInBlackList(Ljava/util/List;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    return v3

    .line 95
    :cond_6
    :goto_1
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;->getCustom_setting()Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_7

    .line 96
    invoke-virtual {p0}, Ljava/lang/String;->isEmpty()Z

    move-result p1

    if-nez p1, :cond_9

    .line 99
    :cond_7
    :try_start_0
    new-instance p1, Lorg/json/JSONObject;

    sget-object p2, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->mhostAppInfo:Ljava/lang/String;

    invoke-direct {p1, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 100
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p2

    if-eqz p2, :cond_9

    .line 102
    new-instance p2, Lorg/json/JSONObject;

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 103
    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 104
    invoke-virtual {p1}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object p0

    .line 105
    :cond_8
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result p3

    if-eqz p3, :cond_9

    .line 106
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Ljava/lang/String;

    .line 107
    invoke-virtual {p1, p3}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 108
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v2

    const-class v3, Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;

    invoke-virtual {v2, v0, v3}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;

    .line 109
    invoke-static {p2, p3, v0}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->filterCustData(Lorg/json/JSONObject;Ljava/lang/String;Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;)Z

    move-result p3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p3, :cond_8

    const/4 p0, 0x5

    return p0

    :catch_0
    move-exception p0

    .line 114
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_9
    return v1
.end method

.method private static checkscaleCondition(Ljava/util/List;Ljava/lang/String;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            ")Z"
        }
    .end annotation

    .line 217
    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    move v1, v0

    .line 219
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 221
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return v0
.end method

.method private static clearCache(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 180
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 182
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v2

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, ".cache"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 183
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 184
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    .line 185
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncFromFile()V

    .line 186
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileStatus()Ljava/util/Map;

    move-result-object v1

    .line 187
    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 188
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->syncToFile()V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method private static clearPatch(Ljava/util/List;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    const/4 v0, 0x0

    .line 194
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    .line 196
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-interface {p0, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 197
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 198
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->delete()Z

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private static filterCustData(Lorg/json/JSONObject;Ljava/lang/String;Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;)Z
    .locals 4

    .line 230
    :try_start_0
    invoke-virtual {p0}, Lorg/json/JSONObject;->keys()Ljava/util/Iterator;

    move-result-object v0

    .line 231
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 232
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 233
    invoke-virtual {p0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 234
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 236
    invoke-virtual {p2}, Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;->getIs_white_list()I

    move-result v1

    const/4 v3, 0x1

    if-eqz v1, :cond_2

    if-eq v1, v3, :cond_1

    goto :goto_0

    .line 243
    :cond_1
    invoke-virtual {p2}, Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;->getArray()Ljava/util/List;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkInWhilteList(Ljava/util/List;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_0

    return v3

    .line 239
    :cond_2
    invoke-virtual {p2}, Lcom/ymnsdk/replugin/entity/silentfilter/CustFilterEntity;->getArray()Ljava/util/List;

    move-result-object v1

    invoke-static {v1, v2}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->checkInBlackList(Ljava/util/List;Ljava/lang/String;)Z

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v1, :cond_0

    return v3

    :catch_0
    move-exception p0

    .line 250
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    const/4 p0, 0x0

    return p0
.end method

.method public static isSatisfySclentDownload(Ljava/lang/String;I)I
    .locals 2

    .line 41
    sput-object p0, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->mhostAppInfo:Ljava/lang/String;

    .line 42
    invoke-static {}, Lcom/carlt/networklibs/utils/NetworkUtils;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object p0

    sget-object v0, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    const/4 v1, 0x0

    if-ne p0, v0, :cond_0

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result p0

    if-eqz p0, :cond_0

    return v1

    .line 46
    :cond_0
    invoke-static {}, Lcom/carlt/networklibs/utils/NetworkUtils;->getNetType()Lcom/carlt/networklibs/NetType;

    move-result-object p0

    sget-object v0, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    if-eq p0, v0, :cond_2

    const/4 p0, 0x1

    if-ne p1, p0, :cond_1

    return v1

    :cond_1
    return p0

    :cond_2
    const/4 p0, 0x2

    return p0
.end method

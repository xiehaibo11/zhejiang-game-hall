.class public Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;
.super Ljava/lang/Object;
.source "SharedPerferencesDataUtils.java"


# static fields
.field private static utils:Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    new-instance v0, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->utils:Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;
    .locals 1

    .line 25
    sget-object v0, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->utils:Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    return-object v0
.end method


# virtual methods
.method public clearPluginGrayData()V
    .locals 3

    .line 224
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getPluginData()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    if-nez v0, :cond_0

    .line 226
    new-instance v0, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;-><init>()V

    .line 227
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->getGrayList()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 228
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->setGrayList(Ljava/util/Map;)V

    .line 229
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->getGrayList()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Map;->clear()V

    .line 230
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginData(Ljava/lang/String;)V

    return-void
.end method

.method public getDownloadFileData()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;"
        }
    .end annotation

    .line 165
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getDownloadFiledata()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;

    if-nez v0, :cond_0

    .line 167
    new-instance v0, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;-><init>()V

    .line 168
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;->getInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 169
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;->setInfoMap(Ljava/util/Map;)V

    .line 170
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;->getInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getLocalDownedPlugin()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 100
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getDownloadedPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;

    if-nez v0, :cond_0

    .line 101
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;-><init>()V

    .line 102
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 103
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getLocalGetPlugin()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 118
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getLocalPluginInfoDetail()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;

    if-nez v0, :cond_0

    .line 119
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;-><init>()V

    .line 120
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 121
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 122
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getLocalInstallPlugin()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 146
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getLocalPlugin()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    if-nez v0, :cond_0

    .line 148
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;-><init>()V

    .line 149
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 150
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 151
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getLocalSilentDowningPlugin()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 80
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getSilentDownloadingPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    if-nez v0, :cond_0

    .line 81
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;-><init>()V

    .line 82
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 83
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getLocalUserDowningPlugin()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 50
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getUserDownloadingPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    if-nez v0, :cond_0

    .line 52
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;-><init>()V

    .line 53
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 54
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 55
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public getPluginGrayData()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation

    .line 214
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getPluginData()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    if-nez v0, :cond_0

    .line 216
    new-instance v0, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;-><init>()V

    .line 217
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->getGrayList()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 218
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->setGrayList(Ljava/util/Map;)V

    .line 219
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->getGrayList()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public gutMergePatchData()Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 194
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getMergePatchData()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    if-nez v0, :cond_0

    .line 196
    new-instance v0, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;-><init>()V

    .line 197
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->getPatchInfo()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 198
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->setPatchInfo(Ljava/util/Map;)V

    .line 199
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->getPatchInfo()Ljava/util/Map;

    move-result-object v0

    return-object v0
.end method

.method public putDownloadFileData(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;",
            ">;)V"
        }
    .end annotation

    .line 156
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getDownloadFiledata()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;

    if-nez v0, :cond_0

    .line 158
    new-instance v0, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;-><init>()V

    .line 159
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/DownloadFileDataEnity;->setInfoMap(Ljava/util/Map;)V

    .line 160
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setDownloadFiledata(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalDownedPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 3

    .line 89
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getDownloadedPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;

    if-nez v0, :cond_0

    .line 91
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;-><init>()V

    .line 92
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 93
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 94
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalDownedPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 95
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setDownloadedPluginInfoList(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalGetPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 3

    .line 108
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getLocalPluginInfoDetail()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;

    if-nez v0, :cond_0

    .line 109
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;-><init>()V

    .line 110
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 111
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 112
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalGetPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 113
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setLocalPluginInfoDetail(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 3

    .line 127
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getLocalPlugin()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    if-nez v0, :cond_0

    .line 129
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;-><init>()V

    .line 130
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 131
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 132
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 133
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setLocalPlugin(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalInstallPlugin(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;)V"
        }
    .end annotation

    .line 137
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getLocalPlugin()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    if-nez v0, :cond_0

    .line 139
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;-><init>()V

    .line 140
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/LocalInstallPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 141
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setLocalPlugin(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalSilentDowningPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 3

    .line 61
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getSilentDownloadingPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    if-nez v0, :cond_0

    .line 62
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;-><init>()V

    .line 63
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 64
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    .line 65
    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 67
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setSilentDownloadingPluginInfoList(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalSilentDowningPlugin(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;)V"
        }
    .end annotation

    .line 72
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getSilentDownloadingPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    if-nez v0, :cond_0

    .line 73
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;-><init>()V

    .line 74
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/LocalSilentDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 75
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setSilentDownloadingPluginInfoList(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalUserDowningPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 3

    .line 29
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getUserDownloadingPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    if-nez v0, :cond_0

    .line 31
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;-><init>()V

    .line 32
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 33
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 34
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->getPluginInfoMap()Ljava/util/Map;

    move-result-object v1

    .line 35
    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 37
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setUserDownloadingPluginInfoList(Ljava/lang/String;)V

    return-void
.end method

.method public putLocalUserDowningPlugin(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;)V"
        }
    .end annotation

    .line 41
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getUserDownloadingPluginInfoList()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    if-nez v0, :cond_0

    .line 43
    new-instance v0, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;-><init>()V

    .line 44
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/LocalUserDowningPluginsEntity;->setPluginInfoMap(Ljava/util/Map;)V

    .line 45
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setUserDownloadingPluginInfoList(Ljava/lang/String;)V

    return-void
.end method

.method public putMergePatchData(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V
    .locals 3

    .line 175
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getMergePatchData()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    if-nez v0, :cond_0

    .line 176
    new-instance v0, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;-><init>()V

    .line 177
    :cond_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->getPatchInfo()Ljava/util/Map;

    move-result-object v1

    if-nez v1, :cond_1

    .line 178
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->setPatchInfo(Ljava/util/Map;)V

    .line 179
    :cond_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->getPatchInfo()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 180
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setMergePatchData(Ljava/lang/String;)V

    return-void
.end method

.method public putMergePatchData(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ymnsdk/replugin/entity/PluginInfo;",
            ">;)V"
        }
    .end annotation

    .line 185
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getMergePatchData()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    if-nez v0, :cond_0

    .line 187
    new-instance v0, Lcom/ymnsdk/replugin/entity/MergePatchEnity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;-><init>()V

    .line 188
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/MergePatchEnity;->setPatchInfo(Ljava/util/Map;)V

    .line 189
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setMergePatchData(Ljava/lang/String;)V

    return-void
.end method

.method public putPluginGrayData(Ljava/util/Map;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;)V"
        }
    .end annotation

    .line 205
    new-instance v0, Lcom/google/gson/Gson;

    invoke-direct {v0}, Lcom/google/gson/Gson;-><init>()V

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getPluginData()Ljava/lang/String;

    move-result-object v1

    const-class v2, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    invoke-virtual {v0, v1, v2}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    if-nez v0, :cond_0

    .line 207
    new-instance v0, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;-><init>()V

    .line 208
    :cond_0
    invoke-virtual {v0, p1}, Lcom/ymnsdk/replugin/entity/PluginGrayEntity;->setGrayList(Ljava/util/Map;)V

    .line 209
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginData(Ljava/lang/String;)V

    return-void
.end method

.class public Lcom/ymnsdk/replugin/manger/PluginMangerUtils;
.super Ljava/lang/Object;
.source "PluginMangerUtils.java"


# static fields
.field private static volatile manger:Lcom/ymnsdk/replugin/manger/PluginMangerUtils;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static checkGrayscaleCondition(Ljava/util/List;Ljava/lang/String;)Z
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

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    :cond_0
    move v1, v0

    .line 203
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_2

    .line 205
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

.method public static filterPlugin(Lcom/ymnsdk/replugin/entity/AppPluginInfo;Ljava/lang/String;)V
    .locals 3

    const-string v0, "ip"

    const-string v1, "user_id"

    const-string v2, "device_id"

    .line 148
    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    :goto_0
    const/4 v2, 0x3

    if-ge v1, v2, :cond_0

    .line 151
    aget-object v2, v0, v1

    invoke-static {p0, p1, v2}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->filterStr(Lcom/ymnsdk/replugin/entity/AppPluginInfo;Ljava/lang/String;Ljava/lang/String;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void
.end method

.method private static filterStr(Lcom/ymnsdk/replugin/entity/AppPluginInfo;Ljava/lang/String;Ljava/lang/String;)V
    .locals 10

    .line 158
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 159
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_9

    .line 161
    invoke-virtual {v0, p2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 162
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getPlugins()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    move v2, v1

    .line 163
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_8

    .line 165
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Plugin;->getGrayscale_condition()Lcom/ymnsdk/replugin/entity/GrayscaleCondition;

    move-result-object v3

    .line 166
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    const/4 v5, -0x1

    .line 167
    invoke-virtual {p2}, Ljava/lang/String;->hashCode()I

    move-result v6

    const v7, -0x8c511f1

    const/4 v8, 0x2

    const/4 v9, 0x1

    if-eq v6, v7, :cond_2

    const/16 v7, 0xd27

    if-eq v6, v7, :cond_1

    const v7, 0x180aba4

    if-eq v6, v7, :cond_0

    goto :goto_1

    :cond_0
    const-string v6, "device_id"

    invoke-virtual {p2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    move v5, v8

    goto :goto_1

    :cond_1
    const-string v6, "ip"

    invoke-virtual {p2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    move v5, v1

    goto :goto_1

    :cond_2
    const-string v6, "user_id"

    invoke-virtual {p2, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_3

    move v5, v9

    :cond_3
    :goto_1
    if-eqz v5, :cond_6

    if-eq v5, v9, :cond_5

    if-eq v5, v8, :cond_4

    goto :goto_2

    .line 176
    :cond_4
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->getDevice_id()Ljava/util/List;

    move-result-object v4

    goto :goto_2

    .line 173
    :cond_5
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->getUser_id()Ljava/util/List;

    move-result-object v4

    goto :goto_2

    .line 170
    :cond_6
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/GrayscaleCondition;->getIp()Ljava/util/List;

    move-result-object v4

    .line 181
    :goto_2
    invoke-static {v4, p1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->checkGrayscaleCondition(Ljava/util/List;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_7

    .line 183
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/Plugin;->getGray_version()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/ymnsdk/replugin/entity/Plugin;->setVersion(Ljava/lang/String;)V

    .line 184
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/Plugin;->getGray_manifest_path()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/ymnsdk/replugin/entity/Plugin;->setManifest_path(Ljava/lang/String;)V

    .line 185
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/Plugin;->getGray_update_type()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/ymnsdk/replugin/entity/Plugin;->setUpdate_type(I)V

    .line 186
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/Plugin;->getGray_update_type_v22()I

    move-result v4

    invoke-virtual {v3, v4}, Lcom/ymnsdk/replugin/entity/Plugin;->setUpdate_type_v22(I)V

    .line 187
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getPluginGrayData()Ljava/util/Map;

    move-result-object v3

    .line 188
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-static {v9}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-interface {v3, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 189
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putPluginGrayData(Ljava/util/Map;)V

    :cond_7
    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    .line 192
    :cond_8
    invoke-virtual {p0, v0}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->setPlugins(Ljava/util/List;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_3

    :catch_0
    move-exception p0

    .line 196
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_9
    :goto_3
    return-void
.end method

.method public static findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;
    .locals 3

    .line 113
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v0

    .line 114
    invoke-interface {v0, p0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 116
    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    if-nez p2, :cond_0

    return-object v2

    .line 117
    :cond_0
    invoke-interface {v0, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object p2

    .line 119
    :cond_1
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPatch()Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_3

    const/4 p1, 0x0

    .line 122
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-ge p1, v0, :cond_3

    .line 124
    invoke-interface {p0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/Patch;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Patch;->getFrom_version()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 126
    invoke-interface {p0, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/ymnsdk/replugin/entity/Patch;

    return-object p0

    :cond_2
    add-int/lit8 p1, p1, 0x1

    goto :goto_0

    :cond_3
    return-object v2
.end method

.method public static findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;
    .locals 5

    .line 70
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v0

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getPluginList()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getListFrom(Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    .line 74
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_1

    .line 75
    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map;

    .line 76
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v2}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 77
    new-instance v2, Lcom/google/gson/Gson;

    invoke-direct {v2}, Lcom/google/gson/Gson;-><init>()V

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    const-class v4, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v2, v3, v4}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/ymnsdk/replugin/entity/Plugin;

    .line 78
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/Plugin;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v3, :cond_0

    return-object v2

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :catch_0
    move-exception p0

    .line 85
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 87
    :cond_1
    new-instance p0, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-direct {p0}, Lcom/ymnsdk/replugin/entity/Plugin;-><init>()V

    return-object p0
.end method

.method public static getAllPlugin()Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/ymnsdk/replugin/entity/Plugin;",
            ">;"
        }
    .end annotation

    .line 92
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 94
    :try_start_0
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getPluginList()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getListFrom(Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    if-eqz v1, :cond_0

    const/4 v2, 0x0

    .line 97
    :goto_0
    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_0

    .line 98
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map;

    .line 99
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, v3}, Lorg/json/JSONObject;-><init>(Ljava/util/Map;)V

    .line 100
    new-instance v3, Lcom/google/gson/Gson;

    invoke-direct {v3}, Lcom/google/gson/Gson;-><init>()V

    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v4

    const-class v5, Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v3, v4, v5}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/Plugin;

    .line 101
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_0
    return-object v0

    :catch_0
    move-exception v1

    .line 106
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method

.method public static getDescription(Lcom/ymnsdk/replugin/entity/Plugin;Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 135
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getDescription()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getDescription()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    .line 137
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getDescription()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    return-object p1
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;
    .locals 2

    .line 23
    sget-object v0, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->manger:Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    if-nez v0, :cond_1

    .line 24
    const-class v0, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    monitor-enter v0

    .line 25
    :try_start_0
    sget-object v1, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->manger:Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    if-nez v1, :cond_0

    .line 26
    new-instance v1, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-direct {v1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;-><init>()V

    sput-object v1, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->manger:Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    .line 28
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 30
    :cond_1
    :goto_0
    sget-object v0, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->manger:Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    return-object v0
.end method

.method public static getIsShowErrorDialog(Ljava/lang/String;)Z
    .locals 1

    .line 248
    invoke-static {p0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 254
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getNotify_launch_failure_enabled()I

    move-result p0

    if-nez p0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :goto_0
    return v0
.end method

.method public static getIsShowStartDialog(Ljava/lang/String;)Z
    .locals 1

    .line 236
    invoke-static {p0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 242
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getNotify_after_update_enabled()I

    move-result p0

    if-nez p0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :goto_0
    return v0
.end method

.method public static getIsShowUpdateDialog(Ljava/lang/String;)Z
    .locals 1

    .line 224
    invoke-static {p0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object p0

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 230
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getNotify_before_update_enabled()I

    move-result p0

    if-nez p0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    :goto_0
    return v0
.end method

.method public static getPluginMode(Ljava/lang/String;)I
    .locals 0

    .line 212
    invoke-static {p0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object p0

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return p0

    .line 218
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/Plugin;->getCommon_mode()I

    move-result p0

    return p0
.end method

.method public static getPluginSize(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)J
    .locals 3

    .line 54
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 55
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide p0

    return-wide p0

    .line 57
    :cond_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPatch()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    .line 58
    :goto_0
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPatch()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_2

    .line 59
    invoke-virtual {p0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPatch()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/Patch;

    .line 60
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Patch;->getFrom_version()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 61
    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_size()J

    move-result-wide p0

    return-wide p0

    :cond_1
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    const-wide/16 p0, 0x0

    return-wide p0
.end method

.method public static getUpdateType(Ljava/util/List;Ljava/lang/String;I)I
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "I)I"
        }
    .end annotation

    const/4 v0, 0x0

    move v1, v0

    .line 36
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    const/4 v3, 0x1

    if-ge v1, v2, :cond_1

    .line 37
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    move p0, v0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    move p0, v3

    :goto_1
    if-eqz p0, :cond_2

    return v3

    :cond_2
    if-ne p2, v3, :cond_3

    return v3

    :cond_3
    return v0
.end method

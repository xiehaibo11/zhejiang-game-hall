.class public Lcom/ymnsdk/replugin/feature/PluginManager;
.super Ljava/lang/Object;
.source "PluginManager.java"


# instance fields
.field activity:Landroid/app/Activity;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 63
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 64
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    return-void
.end method


# virtual methods
.method public allowStartPlugin(Ljava/lang/String;Ljava/lang/String;ZLcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V
    .locals 3

    .line 315
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2, p1, p3}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Z)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    if-nez p3, :cond_0

    .line 318
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p2

    new-instance p3, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;

    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v1, 0x415

    const-string v2, "\u63d2\u4ef6\u6253\u5f00\u5931\u8d25:\u7528\u6237\u4e0d\u5141\u8bb8\u6253\u5f00"

    invoke-direct {p3, v0, p1, v1, v2}, Lcom/ymnsdk/replugin/event/allowstartplugin/AllowStartPluginResponseEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;ILjava/lang/String;)V

    invoke-virtual {p2, p3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string p1, "\u63d2\u4ef6\u6253\u5f00\u5931\u8d25:\u5bbf\u4e3b\u4e0d\u5141\u8bb8\u6253\u5f00"

    .line 319
    invoke-interface {p4, p1}, Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;->openFail(Ljava/lang/String;)V

    goto :goto_0

    .line 321
    :cond_0
    new-instance p3, Lcom/ymnsdk/replugin/feature/PluginManager;

    iget-object v0, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {p3, v0}, Lcom/ymnsdk/replugin/feature/PluginManager;-><init>(Landroid/app/Activity;)V

    .line 322
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginManager$3;

    invoke-direct {v0, p0, p1, p2, p4}, Lcom/ymnsdk/replugin/feature/PluginManager$3;-><init>(Lcom/ymnsdk/replugin/feature/PluginManager;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/AllowStartPluginListener;)V

    invoke-virtual {p3, p1, v0}, Lcom/ymnsdk/replugin/feature/PluginManager;->isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V

    :goto_0
    return-void
.end method

.method public is64Bit()Z
    .locals 1

    .line 172
    invoke-static {}, Lcom/qihoo360/loader2/VMRuntimeCompat;->is64Bit()Z

    move-result v0

    return v0
.end method

.method public isInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;)V
    .locals 14

    move-object v0, p0

    move-object v7, p1

    .line 68
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v8

    new-instance v9, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v3, 0x21eff

    const-string v4, ""

    const-string v6, ""

    move-object v1, v9

    move-object v5, p1

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v8, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 69
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v2, v3, p1}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 71
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 72
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v3

    .line 73
    invoke-interface {v3, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    .line 74
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v4

    new-instance v5, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v9, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v10, 0x21f00

    const/4 v11, 0x0

    const-string v12, "\u5df2\u5b89\u88c5"

    const-string v13, ""

    move-object v8, v5

    invoke-direct/range {v8 .. v13}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v4, v5}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 75
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v10

    new-instance v11, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginResponseEvent;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v5, 0x414

    invoke-interface {v3, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    const/4 v8, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    sub-long/2addr v12, v1

    const-string v9, "\u5df2\u5b89\u88c5"

    move-object v1, v11

    move-object v2, v4

    move v3, v5

    move-object v4, p1

    move-object v5, v6

    move v6, v8

    move-object v7, v9

    move-wide v8, v12

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v10, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 76
    invoke-interface/range {p2 .. p2}, Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;->onInstalled()V

    goto :goto_0

    .line 78
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v3

    new-instance v4, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v9, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v10, 0x21f00

    const/4 v11, -0x1

    const-string v12, "\u672a\u5b89\u88c5"

    const-string v13, ""

    move-object v8, v4

    invoke-direct/range {v8 .. v13}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v3, v4}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 79
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v10

    new-instance v11, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginResponseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v4, 0x415

    const/4 v6, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long/2addr v8, v1

    const-string v5, ""

    const-string v12, "\u672a\u5b89\u88c5"

    move-object v1, v11

    move-object v2, v3

    move v3, v4

    move-object v4, p1

    move-object v7, v12

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/event/isinstall/IsInstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v10, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 81
    invoke-interface/range {p2 .. p2}, Lcom/ymnsdk/replugin/listener/IsInstallPluginStatusListener;->onNotInstall()V

    :goto_0
    return-void
.end method

.method public openPlugin(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;)V
    .locals 3

    .line 235
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginRequestEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2, p1}, Lcom/ymnsdk/replugin/event/openplugin/OpenPluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 237
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 239
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->endSilentDownload()V

    .line 241
    :cond_0
    new-instance v0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v1, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;-><init>(Landroid/app/Activity;)V

    .line 242
    new-instance v1, Lcom/ymnsdk/replugin/feature/PluginManager$2;

    invoke-direct {v1, p0, p1, p3, p2}, Lcom/ymnsdk/replugin/feature/PluginManager$2;-><init>(Lcom/ymnsdk/replugin/feature/PluginManager;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/OpenListener;Ljava/lang/String;)V

    invoke-virtual {v0, p1, v1}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V

    return-void
.end method

.method public preLoadPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/PreloadListener;)V
    .locals 16

    move-object/from16 v7, p0

    move-object/from16 v6, p1

    const-string v8, "ymn"

    const-string v0, "\u8c03\u7528\u5230\u4e86\u9884\u52a0\u8f7d\u63a5\u53e3"

    .line 201
    invoke-static {v8, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 202
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v9

    new-instance v10, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v1, v7, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v2, 0x21f05

    const-string v3, ""

    const-string v5, ""

    move-object v0, v10

    move-object/from16 v4, p1

    invoke-direct/range {v0 .. v5}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v9, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 203
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/preplugin/PrePluginRequestEvent;

    iget-object v2, v7, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2, v6}, Lcom/ymnsdk/replugin/event/preplugin/PrePluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 204
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    .line 205
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v0

    .line 206
    invoke-interface {v0, v6}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 207
    invoke-interface {v0, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPackage_name()Ljava/lang/String;

    move-result-object v2

    .line 208
    new-instance v8, Ljava/lang/Thread;

    new-instance v9, Lcom/ymnsdk/replugin/feature/PluginManager$1;

    move-object v0, v9

    move-object/from16 v1, p0

    move-object/from16 v3, p1

    move-object/from16 v6, p2

    invoke-direct/range {v0 .. v6}, Lcom/ymnsdk/replugin/feature/PluginManager$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginManager;Ljava/lang/String;Ljava/lang/String;JLcom/ymnsdk/replugin/listener/PreloadListener;)V

    invoke-direct {v8, v9}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 224
    invoke-virtual {v8}, Ljava/lang/Thread;->start()V

    goto :goto_0

    :cond_0
    const-string v0, "\u672a\u627e\u5230\u8be5\u63d2\u4ef6"

    .line 226
    invoke-static {v8, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 227
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v9, v7, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v10, 0x21f06

    const/4 v11, -0x1

    const-string v12, "\u672a\u627e\u5230\u8be5\u63d2\u4ef6"

    const-string v13, ""

    move-object v8, v2

    invoke-direct/range {v8 .. v13}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 228
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/preplugin/PrePluginResponseEvent;

    iget-object v9, v7, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v10, 0x415

    const/4 v12, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13

    sub-long v14, v13, v4

    const-string v13, "\u672a\u627e\u5230\u8be5\u63d2\u4ef6"

    move-object v8, v2

    move-object/from16 v11, p1

    invoke-direct/range {v8 .. v15}, Lcom/ymnsdk/replugin/event/preplugin/PrePluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    move-object/from16 v1, p2

    .line 229
    invoke-interface {v1, v0}, Lcom/ymnsdk/replugin/listener/PreloadListener;->preloadFail(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public startApk(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;)V
    .locals 21

    move-object/from16 v1, p0

    move-object/from16 v9, p1

    move-object/from16 v10, p2

    move-object/from16 v13, p3

    const-string v11, "hostActivity"

    const-string v0, "numID"

    const-string v12, ""

    const-string v14, "hostProcessActivity"

    .line 88
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v15

    new-instance v8, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v4, 0x21f01

    const-string v5, ""

    const-string v7, ""

    move-object v2, v8

    move-object/from16 v6, p1

    move-object/from16 v16, v14

    move-object v14, v8

    move-object/from16 v8, p2

    invoke-direct/range {v2 .. v8}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v15, v14}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 93
    :try_start_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v10}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 94
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 95
    invoke-virtual {v2, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_0
    move-object v0, v12

    :goto_0
    move-object v14, v0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 98
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    move-object v14, v12

    .line 101
    :goto_1
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v2, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v2, v3, v9, v14, v10}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 103
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 104
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v0

    .line 105
    invoke-interface {v0, v9}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_7

    .line 106
    invoke-interface {v0, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    move-object v4, v0

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    if-nez v4, :cond_1

    const-string v0, "\u542f\u52a8\u63d2\u4ef6\uff1apluginInfo is null"

    .line 109
    invoke-interface {v13, v0}, Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;->onFailure(Ljava/lang/String;)V

    return-void

    .line 112
    :cond_1
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getEntrance_activity()Ljava/lang/String;

    move-result-object v0

    .line 113
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPackage_name()Ljava/lang/String;

    move-result-object v5

    .line 114
    invoke-static {v5, v0}, Lcom/qihoo360/replugin/RePlugin;->createIntent(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-result-object v5

    const-string v0, "ymn_login_data"

    .line 115
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 116
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v6

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getPluginGrayData()Ljava/util/Map;

    move-result-object v6

    .line 118
    invoke-interface {v6, v9}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v7

    const/4 v8, 0x0

    if-eqz v7, :cond_2

    invoke-interface {v6, v9}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/lang/Boolean;

    invoke-virtual {v6}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v6

    goto :goto_2

    :cond_2
    move v6, v8

    .line 120
    :goto_2
    :try_start_1
    new-instance v7, Lorg/json/JSONObject;

    invoke-direct {v7, v10}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v15, "ymnLoginData"

    .line 121
    invoke-virtual {v7, v15, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "isGray"

    .line 122
    invoke-virtual {v7, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v0, "isReplugin"

    const/4 v6, 0x1

    .line 123
    invoke-virtual {v7, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v0, "unity"

    .line 124
    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v0, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "data"

    .line 125
    invoke-virtual {v7}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v0, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "hostPackageName"

    .line 126
    iget-object v6, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-virtual {v6}, Landroid/app/Activity;->getPackageName()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v0, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 127
    invoke-virtual {v7, v11}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v11, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v0, "hostPid"

    .line 128
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v11

    invoke-virtual {v6, v11}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v0, v6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    move-object/from16 v6, v16

    .line 130
    invoke-virtual {v7, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 131
    invoke-virtual {v7, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v5, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    goto :goto_3

    :cond_3
    const-string v0, "com.bianfeng.replugin.HostProcessActivity"

    .line 133
    invoke-virtual {v5, v6, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    :goto_3
    const-string v0, "pluginId"

    .line 135
    invoke-virtual {v5, v0, v9}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_4

    :catch_1
    move-exception v0

    .line 137
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :goto_4
    const/high16 v0, 0x20000

    .line 140
    invoke-virtual {v5, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    move v0, v8

    :goto_5
    if-nez v8, :cond_4

    const/4 v6, 0x3

    if-ge v0, v6, :cond_4

    .line 145
    iget-object v6, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-static {v6, v5}, Lcom/qihoo360/replugin/RePlugin;->startActivity(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result v8

    add-int/lit8 v0, v0, 0x1

    goto :goto_5

    :cond_4
    if-eqz v8, :cond_6

    .line 149
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v5, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v6, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v17, 0x21f02

    const/16 v18, 0x0

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v20

    const-string v19, "\u542f\u52a8\u6210\u529f"

    move-object v15, v5

    move-object/from16 v16, v6

    invoke-direct/range {v15 .. v20}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v5}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 150
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v15, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v6, 0x414

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v7

    const/4 v8, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    sub-long/2addr v11, v2

    const-string v16, "\u542f\u52a8\u6210\u529f"

    move-object v2, v15

    move-object v3, v5

    move v4, v6

    move-object/from16 v5, p1

    move-object v6, v7

    move v7, v8

    move-object/from16 v8, v16

    move-object v9, v14

    move-object/from16 v10, p2

    invoke-direct/range {v2 .. v12}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v15}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 151
    invoke-interface/range {p3 .. p3}, Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;->onSuccess()V

    .line 152
    new-instance v0, Landroid/content/Intent;

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const-class v3, Lcom/ymnsdk/replugin/service/HostService;

    invoke-direct {v0, v2, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    .line 153
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1a

    if-lt v2, v3, :cond_5

    .line 154
    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-virtual {v2, v0}, Landroid/app/Activity;->startForegroundService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_6

    .line 156
    :cond_5
    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-virtual {v2, v0}, Landroid/app/Activity;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;

    goto :goto_6

    .line 159
    :cond_6
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v5, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v6, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v17, 0x21f02

    const/16 v18, -0x1

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v20

    const-string v19, "\u542f\u52a8\u63d2\u4ef6\u5931\u8d25"

    move-object v15, v5

    move-object/from16 v16, v6

    invoke-direct/range {v15 .. v20}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v5}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 160
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v15, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v6, 0x415

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v7

    const/4 v8, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    sub-long/2addr v11, v2

    const-string v16, "\u542f\u52a8\u63d2\u4ef6\u5931\u8d25"

    move-object v2, v15

    move-object v3, v5

    move v4, v6

    move-object/from16 v5, p1

    move-object v6, v7

    move v7, v8

    move-object/from16 v8, v16

    move-object v9, v14

    move-object/from16 v10, p2

    invoke-direct/range {v2 .. v12}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v15}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string v0, "\u542f\u52a8\u63d2\u4ef6\u5931\u8d25"

    .line 161
    invoke-interface {v13, v0}, Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;->onFailure(Ljava/lang/String;)V

    :goto_6
    return-void

    .line 164
    :cond_7
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v4, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v17, 0x21f02

    const/16 v18, -0x1

    const-string v19, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6\u4fe1\u606f"

    const-string v20, ""

    move-object v15, v4

    move-object/from16 v16, v5

    invoke-direct/range {v15 .. v20}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v4}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 165
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v15, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;

    iget-object v4, v1, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v5, 0x415

    const/4 v7, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    sub-long/2addr v11, v2

    const-string v6, ""

    const-string v8, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6\u4fe1\u606f"

    move-object v2, v15

    move-object v3, v4

    move v4, v5

    move-object/from16 v5, p1

    move-object v9, v14

    move-object/from16 v10, p2

    invoke-direct/range {v2 .. v12}, Lcom/ymnsdk/replugin/event/startplugin/StartPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v15}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string v0, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6\u4fe1\u606f"

    .line 166
    invoke-interface {v13, v0}, Lcom/ymnsdk/replugin/listener/StartPluginStatusListener;->onFailure(Ljava/lang/String;)V

    return-void
.end method

.method public unInstallPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;)V
    .locals 12

    .line 175
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v3, 0x21f03

    const-string v4, ""

    const-string v6, ""

    move-object v1, v7

    move-object v5, p1

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 176
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginRequestEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2, p1}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 177
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 178
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v2

    .line 179
    invoke-interface {v2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    .line 180
    invoke-interface {v2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPackage_name()Ljava/lang/String;

    move-result-object v3

    .line 181
    invoke-static {v3}, Lcom/qihoo360/replugin/RePlugin;->uninstall(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 183
    invoke-interface {v2, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 184
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalInstallPlugin(Ljava/util/Map;)V

    .line 185
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v9, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v5, 0x21f04

    const/4 v6, 0x0

    const-string v7, "\u5378\u8f7d\u63d2\u4ef6\u6210\u529f"

    const-string v8, ""

    move-object v3, v9

    invoke-direct/range {v3 .. v8}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 186
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v11, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v5, 0x414

    const/4 v7, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long v9, v8, v0

    const-string v8, "\u5378\u8f7d\u63d2\u4ef6\u6210\u529f"

    move-object v3, v11

    move-object v6, p1

    invoke-direct/range {v3 .. v10}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v2, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 187
    invoke-interface {p2}, Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;->onSuccess()V

    goto/16 :goto_0

    .line 189
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v9, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v5, 0x21f04

    const/4 v6, -0x1

    const-string v7, "\u5378\u8f7d\u63d2\u4ef6\u5931\u8d25"

    const-string v8, ""

    move-object v3, v9

    invoke-direct/range {v3 .. v8}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 190
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v11, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v5, 0x415

    const/4 v7, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long v9, v8, v0

    const-string v8, "\u5378\u8f7d\u63d2\u4ef6\u5931\u8d25"

    move-object v3, v11

    move-object v6, p1

    invoke-direct/range {v3 .. v10}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v2, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string p1, "\u5378\u8f7d\u63d2\u4ef6\u5931\u8d25"

    .line 191
    invoke-interface {p2, p1}, Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    goto :goto_0

    .line 194
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v9, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const v5, 0x21f04

    const/4 v6, -0x1

    const-string v7, "\u672a\u627e\u5230\u8be5\u63d2\u4ef6"

    const-string v8, ""

    move-object v3, v9

    invoke-direct/range {v3 .. v8}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v2, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 195
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v11, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;

    iget-object v4, p0, Lcom/ymnsdk/replugin/feature/PluginManager;->activity:Landroid/app/Activity;

    const/16 v5, 0x415

    const/4 v7, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long v9, v8, v0

    const-string v8, "\u672a\u627e\u5230\u8be5\u63d2\u4ef6"

    move-object v3, v11

    move-object v6, p1

    invoke-direct/range {v3 .. v10}, Lcom/ymnsdk/replugin/event/uninstallplugin/UnInstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v2, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-string p1, "\u672a\u627e\u5230\u8be5\u63d2\u4ef6"

    .line 196
    invoke-interface {p2, p1}, Lcom/ymnsdk/replugin/listener/UnInstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    :goto_0
    return-void
.end method

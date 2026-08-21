.class public Lcom/ymnsdk/replugin/feature/PluginStatusWapper;
.super Ljava/lang/Object;
.source "PluginStatusWapper.java"


# instance fields
.field public activity:Landroid/app/Activity;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 41
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    return-void
.end method


# virtual methods
.method public queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V
    .locals 19

    move-object/from16 v14, p0

    move-object/from16 v15, p1

    move-object/from16 v13, p2

    .line 46
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v2, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const v3, 0x21efa

    const-string v4, ""

    const-string v6, ""

    move-object v1, v7

    move-object/from16 v5, p1

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 47
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_0

    .line 48
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;

    iget-object v2, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    invoke-direct {v1, v2, v15}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 50
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v16

    const/4 v12, -0x1

    .line 52
    :try_start_0
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-static/range {p1 .. p1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4

    if-eqz v0, :cond_2

    .line 54
    :try_start_1
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v1

    .line 55
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Plugin;->getManifest_path()Ljava/lang/String;

    move-result-object v2

    .line 56
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/Plugin;->getState_path()Ljava/lang/String;

    move-result-object v3

    .line 57
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 58
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v10

    .line 60
    invoke-static {}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getInstance()Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    move-result-object v11

    .line 61
    invoke-static {}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getInstance()Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    move-result-object v4

    .line 62
    invoke-virtual {v11, v15}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->setPluginId(Ljava/lang/String;)V

    .line 63
    invoke-virtual {v4, v15}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->setPluginId(Ljava/lang/String;)V

    .line 64
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    .line 65
    new-instance v8, Lcom/ymnsdk/replugin/action/RequestStateAction;

    iget-object v1, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    invoke-direct {v8, v1}, Lcom/ymnsdk/replugin/action/RequestStateAction;-><init>(Landroid/content/Context;)V

    .line 66
    invoke-virtual {v8, v3}, Lcom/ymnsdk/replugin/action/RequestStateAction;->setURL(Ljava/lang/String;)V

    .line 67
    new-instance v9, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v1, v9

    move-object/from16 v2, p0

    move-object v3, v4

    move-wide v4, v5

    move-object/from16 v6, p1

    move-object/from16 v7, p2

    move-object/from16 v18, v8

    move-object v15, v9

    move-wide/from16 v8, v16

    move-object v12, v0

    move-object/from16 v13, v18

    :try_start_2
    invoke-direct/range {v1 .. v13}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginStatusWapper;Lcom/ymnsdk/replugin/util/RequestRetryUtils;JLjava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;JLjava/lang/String;Lcom/ymnsdk/replugin/util/RequestRetryUtils;Lcom/ymnsdk/replugin/entity/Plugin;Lcom/ymnsdk/replugin/action/RequestStateAction;)V

    move-object/from16 v0, v18

    invoke-virtual {v0, v15}, Lcom/ymnsdk/replugin/action/RequestStateAction;->addObserver(Ljava/util/Observer;)V

    .line 169
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v1

    if-nez v1, :cond_1

    .line 170
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateRequestEvent;

    iget-object v3, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const/16 v4, 0x412

    move-object/from16 v10, p1

    :try_start_3
    invoke-direct {v2, v3, v4, v10}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto :goto_0

    :cond_1
    move-object/from16 v10, p1

    .line 172
    :goto_0
    invoke-virtual {v0}, Lcom/ymnsdk/replugin/action/RequestStateAction;->actionStart()V

    goto/16 :goto_3

    :catch_0
    move-exception v0

    move-object/from16 v10, p1

    goto :goto_1

    :catch_1
    move-exception v0

    move-object v10, v15

    move-object/from16 v11, p2

    goto :goto_2

    :cond_2
    move-object v10, v15

    const-string v0, "\u627e\u4e0d\u5230\u4f20\u5165\u7684pluginid"
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_3

    move-object/from16 v11, p2

    const/4 v12, -0x1

    .line 175
    :try_start_4
    invoke-interface {v11, v12, v0}, Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;->onFailure(ILjava/lang/String;)V

    .line 176
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v2, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const v3, 0x21efb

    const/4 v4, -0x1

    const-string v5, "\u627e\u4e0d\u5230\u4f20\u5165\u7684pluginid"

    const-string v6, ""

    move-object v1, v7

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 177
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_3

    .line 178
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v13, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;

    iget-object v2, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v3, 0x415

    const-string v5, ""

    const/4 v6, -0x1

    const-string v7, "\u627e\u4e0d\u5230\u4f20\u5165\u7684pluginid"

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long v8, v8, v16

    move-object v1, v13

    move-object/from16 v4, p1

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v13}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto/16 :goto_3

    :catch_2
    move-exception v0

    goto :goto_2

    :catch_3
    move-exception v0

    :goto_1
    move-object/from16 v11, p2

    const/4 v12, -0x1

    goto :goto_2

    :catch_4
    move-exception v0

    move-object v11, v13

    move-object v10, v15

    .line 182
    :goto_2
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 183
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u5f02\u5e38\u62a5\u9519|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v11, v12, v1}, Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;->onFailure(ILjava/lang/String;)V

    .line 184
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v9, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v4, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const v5, 0x21efb

    const/4 v6, -0x1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    const-string v8, ""

    move-object v3, v9

    invoke-direct/range {v3 .. v8}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v9}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 185
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v1

    if-nez v1, :cond_3

    .line 186
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v11

    new-instance v12, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;

    iget-object v3, v14, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v4, 0x415

    const/4 v6, -0x1

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    sub-long v8, v0, v16

    const-string v5, ""

    move-object v1, v12

    move-object v2, v3

    move v3, v4

    move-object/from16 v4, p1

    invoke-direct/range {v1 .. v9}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v11, v12}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    :cond_3
    :goto_3
    return-void
.end method

.class Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;
.super Lcom/ymnsdk/replugin/action/ActionObserver;
.source "PluginStatusWapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->onActionResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

.field final synthetic val$requestInfostartTime:J

.field final synthetic val$requestPluginInfoDetailAction:Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;

.field final synthetic val$state:Lcom/ymnsdk/replugin/entity/PluginState;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;JLcom/ymnsdk/replugin/entity/PluginState;Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;)V
    .locals 0

    .line 89
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iput-wide p2, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestInfostartTime:J

    iput-object p4, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$state:Lcom/ymnsdk/replugin/entity/PluginState;

    iput-object p5, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestPluginInfoDetailAction:Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;

    invoke-direct {p0}, Lcom/ymnsdk/replugin/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 20

    move-object/from16 v1, p0

    move-object/from16 v2, p1

    .line 92
    invoke-virtual/range {p1 .. p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v0

    const-string v3, "ymn"

    if-eqz v0, :cond_5

    .line 93
    iget-object v0, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    move-object v4, v0

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 94
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "str3 = "

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 95
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_0

    .line 96
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v3, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v6, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v8, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v9

    iget v10, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v12

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v13

    move-object/from16 v16, v8

    iget-wide v7, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestInfostartTime:J

    sub-long/2addr v13, v7

    move-object v5, v3

    const/16 v7, 0x414

    move-object/from16 v8, v16

    invoke-direct/range {v5 .. v14}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;IJ)V

    invoke-virtual {v0, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 98
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    invoke-virtual {v0, v3, v4}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalGetPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 99
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v0

    .line 100
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v3

    .line 103
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v0, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    const-string v6, ""

    if-eqz v5, :cond_1

    .line 104
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v0, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, v6

    .line 106
    :goto_0
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    invoke-static {v4, v0}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getPluginSize(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)J

    move-result-wide v7

    .line 107
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v5

    if-nez v5, :cond_2

    const-wide/16 v9, 0x0

    cmp-long v5, v7, v9

    if-nez v5, :cond_3

    .line 109
    :cond_2
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v7

    .line 112
    :cond_3
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 113
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_id()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    .line 115
    :cond_4
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$state:Lcom/ymnsdk/replugin/entity/PluginState;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginState;->getAllow_versions()Ljava/util/List;

    move-result-object v3

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin:Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getUpdate_type()I

    move-result v5

    invoke-static {v3, v6, v5}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getUpdateType(Ljava/util/List;Ljava/lang/String;I)I

    .line 116
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$state:Lcom/ymnsdk/replugin/entity/PluginState;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginState;->getAllow_versions()Ljava/util/List;

    move-result-object v3

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin:Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/Plugin;->getUpdate_type_v22()I

    move-result v5

    invoke-static {v3, v6, v5}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getUpdateType(Ljava/util/List;Ljava/lang/String;I)I

    move-result v3

    .line 118
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin:Lcom/ymnsdk/replugin/entity/Plugin;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getDescription()Ljava/lang/String;

    move-result-object v9

    invoke-static {v5, v9}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getDescription(Lcom/ymnsdk/replugin/entity/Plugin;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 119
    new-instance v9, Lorg/json/JSONObject;

    invoke-direct {v9}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v10, "plugin_current_version"

    .line 121
    invoke-virtual {v9, v10, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v6, "plugin_current_download_version"

    .line 122
    invoke-virtual {v9, v6, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "plugin_last_version"

    .line 123
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v9, v0, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "plugin_size"

    .line 124
    invoke-virtual {v9, v0, v7, v8}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string v0, "plugin_description"

    .line 125
    invoke-virtual {v9, v0, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "update_type"

    .line 126
    invoke-virtual {v9, v0, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 128
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 131
    :goto_1
    iget-object v0, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;

    invoke-virtual {v9}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;->onSuccessAvailable(Ljava/lang/String;)V

    .line 132
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v3, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v11, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    iget v13, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "\u53ef\u4f7f\u7528|"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "|"

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v8

    invoke-virtual {v8, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v5, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v15

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v16

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v17

    move v8, v13

    iget-wide v12, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestInfostartTime:J

    sub-long v17, v17, v12

    const/16 v19, 0x3

    move-object v10, v3

    const v5, 0x21efb

    move v12, v5

    move v13, v8

    invoke-direct/range {v10 .. v19}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v0, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 133
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_6

    .line 134
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v3, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v11, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v12, 0x414

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v13, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v14

    iget v15, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v5

    invoke-virtual {v5, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v16

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v4

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-wide v6, v2, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$queryPluginStatusStartTime:J

    sub-long v17, v4, v6

    move-object v10, v3

    invoke-direct/range {v10 .. v18}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v3}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto/16 :goto_2

    .line 137
    :cond_5
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "str = "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v3, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 138
    iget-object v0, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestPluginInfoDetailAction:Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;

    invoke-virtual {v0, v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->retryRequest(Lcom/ymnsdk/replugin/action/ActionSupport;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 140
    iget-object v0, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;

    iget v3, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v4, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-interface {v0, v3, v4}, Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;->onFailure(ILjava/lang/String;)V

    .line 141
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v13, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const v5, 0x21efb

    iget v6, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v7, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iget-wide v14, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestInfostartTime:J

    sub-long/2addr v10, v14

    const/4 v12, 0x3

    const-string v8, ""

    move-object v3, v13

    invoke-direct/range {v3 .. v12}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v0, v13}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 142
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_6

    .line 143
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v13, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v5, 0x415

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v6, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iget v8, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v9, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v10

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    iget-wide v14, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->val$requestInfostartTime:J

    sub-long/2addr v11, v14

    const-string v7, ""

    move-object v3, v13

    invoke-direct/range {v3 .. v12}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;IJ)V

    invoke-virtual {v0, v13}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 144
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v11, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v4, 0x415

    iget-object v5, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-object v5, v5, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iget v7, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v8, v2, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;

    iget-wide v12, v2, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$queryPluginStatusStartTime:J

    sub-long/2addr v9, v12

    const-string v6, ""

    move-object v2, v11

    invoke-direct/range {v2 .. v10}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v0, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    :cond_6
    :goto_2
    return-void
.end method

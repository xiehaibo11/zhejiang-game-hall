.class Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;
.super Ljava/lang/Object;
.source "PluginInstallWapper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$isPatchFail:Z

.field final synthetic val$isStart:Z

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

.field final synthetic val$noNetTimeout:I

.field final synthetic val$pluginId:Ljava/lang/String;

.field final synthetic val$weakNetTimeout:I


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Ljava/lang/String;Landroid/app/Activity;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;ZIIZ)V
    .locals 0

    .line 76
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iput-object p2, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iput-object p4, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    iput-boolean p5, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isPatchFail:Z

    iput p6, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$noNetTimeout:I

    iput p7, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$weakNetTimeout:I

    iput-boolean p8, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isStart:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 24

    move-object/from16 v0, p0

    .line 79
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    sget-object v1, Lcom/ymnsdk/replugin/util/DownloadUtils;->downloadRecord:Ljava/util/Map;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-interface {v1, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    const-wide/16 v2, -0x1

    iput-wide v2, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->beforeProcess:J

    .line 81
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v8, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iget-object v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    const v4, 0x21efc

    const-string v5, ""

    const-string v7, ""

    move-object v2, v8

    invoke-direct/range {v2 .. v7}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v8}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 83
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-direct {v2, v3, v4}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginRequestEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 84
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v19

    .line 85
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-static {v1}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPluginById(Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Plugin;

    move-result-object v1

    .line 86
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalGetPlugin()Ljava/util/Map;

    move-result-object v2

    .line 87
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_6

    if-nez v1, :cond_0

    goto/16 :goto_2

    .line 94
    :cond_0
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/ymnsdk/replugin/entity/PluginInfo;

    .line 95
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v4

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalInstallPlugin()Ljava/util/Map;

    move-result-object v4

    .line 96
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v4, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_4

    .line 98
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-object v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v4, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 99
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    const v6, 0x21efd

    const/4 v7, 0x0

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v9

    const-string v8, "\u5df2\u5b89\u88c5\u6700\u65b0\u7248\u672c"

    move-object v4, v2

    invoke-direct/range {v4 .. v9}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 100
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    const/16 v6, 0x414

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v8

    const/4 v9, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    sub-long v11, v3, v19

    const-string v10, "\u5df2\u5b89\u88c5\u6700\u65b0\u7248\u672c"

    move-object v4, v2

    invoke-direct/range {v4 .. v12}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 101
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    invoke-interface {v1}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onSuccess()V

    goto/16 :goto_1

    .line 103
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalDownedPlugin()Ljava/util/Map;

    move-result-object v3

    .line 104
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v3, v5}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v5

    if-nez v5, :cond_2

    goto :goto_0

    :cond_2
    move-object v4, v3

    .line 106
    :goto_0
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v4, v6}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v5, v4}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object v3

    .line 107
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v4

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v4, v5}, Lcom/ymnsdk/replugin/util/DownloadUtils;->hasOldApk(Ljava/lang/String;)Z

    move-result v21

    if-eqz v3, :cond_3

    if-eqz v21, :cond_3

    .line 108
    iget-boolean v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isPatchFail:Z

    if-nez v4, :cond_3

    .line 110
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_path()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v10, 0x1

    .line 112
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_size()J

    move-result-wide v11

    .line 113
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_md5()Ljava/lang/String;

    move-result-object v13

    .line 114
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v16

    .line 115
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v14

    .line 116
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v6, v1

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$noNetTimeout:I

    move/from16 v17, v1

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$weakNetTimeout:I

    move/from16 v18, v1

    const/16 v21, 0x1

    iget-boolean v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isStart:Z

    move/from16 v22, v1

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v23, v1

    invoke-virtual/range {v5 .. v23}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JLjava/lang/String;IIJZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    goto/16 :goto_1

    .line 119
    :cond_3
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getRelease_path()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v10, 0x0

    .line 121
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v11

    .line 122
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v16

    move-object/from16 v13, v16

    .line 123
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v14

    .line 124
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v6, v1

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$noNetTimeout:I

    move/from16 v17, v1

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$weakNetTimeout:I

    move/from16 v18, v1

    iget-boolean v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isStart:Z

    move/from16 v22, v1

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v23, v1

    invoke-virtual/range {v5 .. v23}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JLjava/lang/String;IIJZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    goto/16 :goto_1

    .line 128
    :cond_4
    invoke-static {}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->getInstance()Lcom/ymnsdk/replugin/manger/PluginMangerUtils;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginInfo;

    const-string v5, "0"

    invoke-static {v3, v4, v5}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->findPatch(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Lcom/ymnsdk/replugin/entity/Patch;

    move-result-object v3

    .line 129
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v4

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v4, v5}, Lcom/ymnsdk/replugin/util/DownloadUtils;->hasOldApk(Ljava/lang/String;)Z

    move-result v4

    if-eqz v3, :cond_5

    if-eqz v4, :cond_5

    .line 130
    iget-boolean v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isPatchFail:Z

    if-nez v4, :cond_5

    .line 132
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_path()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v10, 0x1

    .line 134
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_size()J

    move-result-wide v11

    .line 135
    invoke-virtual {v3}, Lcom/ymnsdk/replugin/entity/Patch;->getPatch_md5()Ljava/lang/String;

    move-result-object v13

    .line 136
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v16

    .line 137
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v14

    .line 138
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v6, v1

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$noNetTimeout:I

    move/from16 v17, v1

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$weakNetTimeout:I

    move/from16 v18, v1

    const/16 v21, 0x1

    iget-boolean v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isStart:Z

    move/from16 v22, v1

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v23, v1

    invoke-virtual/range {v5 .. v23}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JLjava/lang/String;IIJZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    goto :goto_1

    .line 141
    :cond_5
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/Plugin;->getBase_url()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getRelease_path()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    const/4 v10, 0x0

    .line 143
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_size()J

    move-result-wide v11

    move-wide v14, v11

    .line 144
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v16

    move-object/from16 v13, v16

    .line 145
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    move-object v6, v1

    check-cast v6, Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$noNetTimeout:I

    move/from16 v17, v1

    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$weakNetTimeout:I

    move/from16 v18, v1

    const/16 v21, 0x1

    iget-boolean v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$isStart:Z

    move/from16 v22, v1

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v23, v1

    invoke-virtual/range {v5 .. v23}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JLjava/lang/String;IIJZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    :goto_1
    return-void

    .line 88
    :cond_6
    :goto_2
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v8, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    const v4, 0x21efd

    const/4 v5, -0x1

    const-string v6, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6\u4fe1\u606f"

    const-string v7, ""

    move-object v2, v8

    invoke-direct/range {v2 .. v7}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v8}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 90
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v11, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$activity:Landroid/app/Activity;

    const/16 v4, 0x415

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$pluginId:Ljava/lang/String;

    const/4 v7, -0x1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v8

    sub-long v9, v8, v19

    const-string v6, ""

    const-string v8, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6\u4fe1\u606f"

    move-object v2, v11

    invoke-direct/range {v2 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 91
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    const-string v2, "\u8fd8\u672a\u83b7\u53d6\u63d2\u4ef6\u4fe1\u606f"

    invoke-interface {v1, v2}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    return-void
.end method

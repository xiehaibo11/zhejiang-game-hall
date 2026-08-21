.class Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;
.super Ljava/lang/Object;
.source "PluginInstallWapper.java"

# interfaces
.implements Lcom/ymnsdk/replugin/listener/MergeCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->downloadSuccess(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

.field final synthetic val$mergeStartTime:J

.field final synthetic val$path:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;JLjava/lang/String;)V
    .locals 0

    .line 213
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iput-wide p2, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->val$mergeStartTime:J

    iput-object p4, p0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->val$path:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public mergeFail(Ljava/lang/String;)V
    .locals 22

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 229
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    const-string v3, "3|patch\u5408\u5305\u5931\u8d25"

    invoke-interface {v2, v3}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onFailure(Ljava/lang/String;)V

    .line 230
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->gutMergePatchData()Ljava/util/Map;

    move-result-object v2

    .line 231
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v2, v3}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 232
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v3

    invoke-virtual {v3, v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putMergePatchData(Ljava/util/Map;)V

    .line 233
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v11, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    const/16 v5, 0x415

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v6, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/4 v7, -0x1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "patch\u5408\u5305\u5931\u8d25|"

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-wide v13, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->val$mergeStartTime:J

    sub-long/2addr v9, v13

    move-object v3, v11

    invoke-direct/range {v3 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v2, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 234
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v11, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    const/16 v5, 0x41b

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v6, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-wide v13, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->val$mergeStartTime:J

    sub-long/2addr v9, v13

    move-object v3, v11

    invoke-direct/range {v3 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v2, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 235
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v13, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    const/16 v5, 0x415

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v6, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/4 v8, -0x3

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-wide v14, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$startInstallPluginTime:J

    sub-long/2addr v10, v14

    const-string v7, ""

    move-object v3, v13

    invoke-direct/range {v3 .. v11}, Lcom/ymnsdk/replugin/event/installplugin/InstallPluginResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v2, v13}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 236
    invoke-static {}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->getInstance()Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    move-result-object v14

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v15, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/16 v17, 0x5

    const/16 v18, 0xf

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-boolean v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$isStart:Z

    const/16 v20, 0x1

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v16, v1

    move/from16 v19, v2

    move-object/from16 v21, v3

    invoke-virtual/range {v14 .. v21}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installPlugin(Landroid/app/Activity;Ljava/lang/String;IIZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

.method public mergeSuccess()V
    .locals 18

    move-object/from16 v0, p0

    .line 216
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v3, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v5, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v6

    iget-wide v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->val$mergeStartTime:J

    sub-long v8, v6, v8

    const/16 v4, 0x41a

    const/4 v6, 0x0

    const-string v7, "\u5408\u5305\u6210\u529f"

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/MergePatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const/4 v1, 0x0

    .line 217
    sput v1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->remerge_num:I

    .line 219
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalDownedPlugin(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 221
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->gutMergePatchData()Ljava/util/Map;

    move-result-object v1

    .line 222
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 223
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putMergePatchData(Ljava/util/Map;)V

    .line 224
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v2, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v3, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v4, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->val$path:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v6, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v7, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadUri:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget v8, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downLoadType:I

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-wide v9, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v11, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$apkMd5:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-wide v12, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadStartTime:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-wide v14, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$startInstallPluginTime:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-boolean v1, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$isStart:Z

    move/from16 v16, v1

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;->this$1:Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v17, v1

    invoke-static/range {v2 .. v17}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->access$000(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    return-void
.end method

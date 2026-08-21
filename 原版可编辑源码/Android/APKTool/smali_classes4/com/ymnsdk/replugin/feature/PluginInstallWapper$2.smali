.class Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;
.super Ljava/lang/Object;
.source "PluginInstallWapper.java"

# interfaces
.implements Lcom/ymnsdk/replugin/patch/download/DownloadCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->installApk(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JLjava/lang/String;IIJZZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$apkMd5:Ljava/lang/String;

.field final synthetic val$downLoadType:I

.field final synthetic val$downSize:J

.field final synthetic val$downloadStartTime:J

.field final synthetic val$downloadUri:Ljava/lang/String;

.field final synthetic val$isStart:Z

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

.field final synthetic val$patchMd5:Ljava/lang/String;

.field final synthetic val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

.field final synthetic val$pluginId:Ljava/lang/String;

.field final synthetic val$startInstallPluginTime:J


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JLjava/lang/String;ILcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V
    .locals 3

    move-object v0, p0

    move-object v1, p1

    .line 190
    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    move-object v1, p2

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    move-object v1, p3

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    move-object v1, p4

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$patchMd5:Ljava/lang/String;

    move-wide v1, p5

    iput-wide v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    move-object v1, p7

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$apkMd5:Ljava/lang/String;

    move v1, p8

    iput v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downLoadType:I

    move-object v1, p9

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    move-object v1, p10

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadUri:Ljava/lang/String;

    move-wide v1, p11

    iput-wide v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadStartTime:J

    move-wide/from16 v1, p13

    iput-wide v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$startInstallPluginTime:J

    move/from16 v1, p15

    iput-boolean v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$isStart:Z

    move-object/from16 v1, p16

    iput-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public downloadFail(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 18

    move-object/from16 v0, p0

    move-object/from16 v4, p1

    .line 293
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, "|"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static/range {p1 .. p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Ymn:"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 294
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-static/range {p1 .. p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {v2, v3, v5, v6}, Lcom/ymnsdk/replugin/event/other/CoreDownloadFailEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 296
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getDownloadEntity()Lcom/ymnsdk/replugin/entity/DownloadEntity;

    move-result-object v2

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/DownloadEntity;->getMd5()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v15

    const-string v1, "ymn"

    const/4 v2, 0x0

    if-eqz v15, :cond_0

    .line 299
    invoke-virtual {v15}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->getNetworkRetryCount()I

    move-result v3

    move v9, v3

    goto :goto_0

    :cond_0
    const-string v3, "DownloadFileInfo\u4e3a\u7a7a"

    .line 301
    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    move v9, v2

    .line 303
    :goto_0
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "\u91cd\u8bd5\u6b21\u6570\u662f\uff1a"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 304
    sget-object v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$3;->$SwitchMap$com$ymnsdk$replugin$patch$download$DownloadCode$Code:[I

    invoke-virtual/range {p1 .. p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ordinal()I

    move-result v5

    aget v3, v3, v5

    const/4 v5, 0x1

    const/4 v6, 0x4

    if-eq v3, v5, :cond_2

    const/4 v5, 0x2

    if-eq v3, v5, :cond_2

    const/4 v1, 0x3

    if-eq v3, v1, :cond_1

    if-eq v3, v6, :cond_1

    const/4 v1, 0x5

    if-eq v3, v1, :cond_1

    goto/16 :goto_2

    .line 323
    :cond_1
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    invoke-interface {v1, v4}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    .line 324
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadUri:Ljava/lang/String;

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$patchMd5:Ljava/lang/String;

    iget-wide v10, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadStartTime:J

    iget-wide v12, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$startInstallPluginTime:J

    iget-boolean v14, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$isStart:Z

    move-object/from16 v16, v15

    iget-object v15, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v4, p1

    move-object/from16 v17, v15

    move-object/from16 v15, v16

    move-object/from16 v16, v17

    invoke-static/range {v1 .. v16}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->access$100(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;Ljava/lang/String;JLjava/lang/String;IJJZLcom/ymnsdk/replugin/patch/download/DownloadFileInfo;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    goto :goto_2

    :cond_2
    move-object/from16 v16, v15

    if-le v9, v6, :cond_5

    const-string v3, "\u8d85\u8fc7\u4e86\u91cd\u8bd5\u6b21\u6570"

    .line 308
    invoke-static {v1, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 309
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 310
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/PatchDownloadApi;->downloadStop()V

    .line 311
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v5, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v7

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v10, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->recoveryTime:J

    sub-long/2addr v7, v10

    add-long/2addr v5, v7

    iput-wide v5, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    if-eqz v16, :cond_3

    .line 313
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    move-object/from16 v15, v16

    invoke-virtual {v1, v3, v15}, Lcom/ymnsdk/replugin/util/DownloadUtils;->postDownloadErrorEvent(Landroid/app/Activity;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V

    goto :goto_1

    :cond_3
    move-object/from16 v15, v16

    :goto_1
    if-eqz v15, :cond_4

    .line 315
    invoke-virtual {v15, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;->setNetworkRetryCount(I)V

    .line 316
    :cond_4
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    invoke-interface {v1, v4}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onDownloadFailure(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V

    .line 317
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadUri:Ljava/lang/String;

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$patchMd5:Ljava/lang/String;

    iget-wide v10, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadStartTime:J

    iget-wide v12, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$startInstallPluginTime:J

    iget-boolean v14, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$isStart:Z

    move-object/from16 v16, v15

    iget-object v15, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move-object/from16 v4, p1

    move-object/from16 v17, v15

    move-object/from16 v15, v16

    move-object/from16 v16, v17

    invoke-static/range {v1 .. v16}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->access$100(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Landroid/app/Activity;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;Ljava/lang/String;JLjava/lang/String;IJJZLcom/ymnsdk/replugin/patch/download/DownloadFileInfo;Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    :cond_5
    :goto_2
    return-void
.end method

.method public downloadSuccess(Ljava/lang/String;)V
    .locals 20

    move-object/from16 v0, p0

    .line 193
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v8, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$patchMd5:Ljava/lang/String;

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    move-object v2, v8

    invoke-direct/range {v2 .. v7}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v1, v8}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 194
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v2}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setLoadState(Ljava/lang/Boolean;)V

    .line 195
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$apkMd5:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 197
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v2

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    invoke-virtual {v2, v3, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->postDownloadErrorEvent(Landroid/app/Activity;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V

    .line 199
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "old.apk"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 200
    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downLoadType:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_3

    .line 202
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v2

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$patchMd5:Ljava/lang/String;

    invoke-virtual {v2, v3, v4}, Lcom/ymnsdk/replugin/util/DownloadUtils;->addMd5(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Ljava/util/List;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->setMd5List(Ljava/util/List;)V

    .line 203
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putMergePatchData(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 205
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalSilentDowningPlugin()Ljava/util/Map;

    move-result-object v1

    .line 206
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 207
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalSilentDowningPlugin(Ljava/util/Map;)V

    .line 208
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object v1

    .line 209
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 210
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalUserDowningPlugin(Ljava/util/Map;)V

    .line 211
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchResponseEvent;

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    const/16 v9, 0x3ed

    iget-object v10, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-wide v12, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "\u4e0b\u8f7d\u6210\u529f|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "|"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadUri:Ljava/lang/String;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v14, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    invoke-virtual {v3, v14, v15}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$apkMd5:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v15

    const/16 v16, 0x0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    move-object/from16 v19, v6

    iget-wide v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadStartTime:J

    sub-long v17, v3, v5

    const-string v11, ""

    move-object v7, v2

    const/4 v3, 0x0

    move v14, v3

    invoke-direct/range {v7 .. v18}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;JILjava/lang/String;IJ)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 212
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    .line 213
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v3

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$apkMd5:Ljava/lang/String;

    new-instance v8, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;

    move-object/from16 v6, v19

    invoke-direct {v8, v0, v1, v2, v6}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;JLjava/lang/String;)V

    move-object/from16 v6, p1

    invoke-virtual/range {v3 .. v8}, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeApk(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;)V

    goto :goto_0

    .line 240
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    move-object/from16 v2, p1

    invoke-virtual {v1, v2, v6}, Lcom/ymnsdk/replugin/util/DownloadUtils;->renameFile(Ljava/lang/String;Ljava/lang/String;)Z

    .line 241
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v7, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v8, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadUri:Ljava/lang/String;

    iget v9, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downLoadType:I

    iget-wide v10, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v12, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$apkMd5:Ljava/lang/String;

    iget-wide v13, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downloadStartTime:J

    iget-wide v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$startInstallPluginTime:J

    iget-boolean v15, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$isStart:Z

    move-wide/from16 v16, v1

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    move v2, v15

    move-wide/from16 v15, v16

    move/from16 v17, v2

    move-object/from16 v18, v1

    invoke-static/range {v3 .. v18}, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->access$000(Lcom/ymnsdk/replugin/feature/PluginInstallWapper;Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;JJZLcom/ymnsdk/replugin/listener/InstallPluginStatusListener;)V

    :goto_0
    return-void
.end method

.method public downloading(J)V
    .locals 18

    move-object/from16 v0, p0

    move-wide/from16 v11, p1

    .line 247
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v2, ""

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "Ymn:"

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 248
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v1, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->beforeProcess:J

    cmp-long v1, v11, v1

    if-eqz v1, :cond_5

    .line 250
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v5, v11, v3

    if-nez v5, :cond_0

    .line 253
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iput-wide v1, v5, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->recoveryTime:J

    .line 254
    iget-object v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iput-wide v3, v5, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    .line 255
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iput-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->userPlugin:Ljava/lang/String;

    .line 256
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v4, v4, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->userPlugin:Ljava/lang/String;

    const/4 v5, 0x1

    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 258
    :cond_0
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v4, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    iget-object v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v6, v6, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->recoveryTime:J

    sub-long v6, v1, v6

    add-long/2addr v4, v6

    iput-wide v4, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    .line 259
    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iput-wide v1, v3, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->recoveryTime:J

    .line 260
    invoke-static/range {p1 .. p2}, Lcom/ymnsdk/replugin/util/DownloadingUtils;->inProcessArray(J)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 262
    iget v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downLoadType:I

    if-nez v1, :cond_2

    .line 263
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v9

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/ApkDownloadingEvent;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    iget-wide v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v7, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    move-object v1, v10

    move-wide/from16 v16, v7

    move-wide/from16 v7, p1

    move-object v15, v9

    move-object v13, v10

    move-wide/from16 v9, v16

    invoke-direct/range {v1 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/ApkDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJJ)V

    invoke-virtual {v15, v13}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-wide/16 v1, 0x64

    cmp-long v1, v11, v1

    if-nez v1, :cond_1

    .line 264
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->userPlugin:Ljava/lang/String;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 266
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/CompleteApkDownloadInUserEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v8, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/CompleteApkDownloadInUserEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 267
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    :cond_1
    if-nez v1, :cond_4

    .line 268
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v2

    iget-object v2, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 270
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkInSilentAndUserEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v8, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v2

    iget-wide v13, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    add-long/2addr v8, v13

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/DownloadApkInSilentAndUserEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 271
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    .line 274
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v13

    new-instance v14, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    iget-wide v5, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v9, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    move-object v1, v14

    move-wide/from16 v7, p1

    invoke-direct/range {v1 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/PatchDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJJ)V

    invoke-virtual {v13, v14}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-wide/16 v1, 0x64

    cmp-long v1, v11, v1

    if-nez v1, :cond_3

    .line 275
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->userPlugin:Ljava/lang/String;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 277
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/CompleteApkDownloadInUserEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v8, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/CompleteApkDownloadInUserEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 278
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_3
    if-nez v1, :cond_4

    .line 279
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v2

    iget-object v2, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 281
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$downSize:J

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iget-wide v8, v2, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->downloadDur:J

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v2

    iget-wide v13, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    add-long/2addr v8, v13

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/DownloadPatchInSilentAndUserEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 282
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 286
    :cond_4
    :goto_0
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->this$0:Lcom/ymnsdk/replugin/feature/PluginInstallWapper;

    iput-wide v11, v1, Lcom/ymnsdk/replugin/feature/PluginInstallWapper;->beforeProcess:J

    .line 287
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginInstallWapper$2;->val$listener:Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;

    invoke-interface {v1, v11, v12}, Lcom/ymnsdk/replugin/listener/InstallPluginStatusListener;->onDownloading(J)V

    :cond_5
    return-void
.end method

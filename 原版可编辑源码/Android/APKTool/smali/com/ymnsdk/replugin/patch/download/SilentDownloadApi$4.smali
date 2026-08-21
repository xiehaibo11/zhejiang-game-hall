.class Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;
.super Ljava/lang/Object;
.source "SilentDownloadApi.java"

# interfaces
.implements Lcom/ymnsdk/replugin/patch/download/DownloadCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$apkMd5:Ljava/lang/String;

.field final synthetic val$currentNum:I

.field final synthetic val$downSize:J

.field final synthetic val$downloadType:I

.field final synthetic val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

.field final synthetic val$pluginId:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JILcom/ymnsdk/replugin/entity/PluginInfo;I)V
    .locals 0

    .line 284
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-object p2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iput-object p3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$apkMd5:Ljava/lang/String;

    iput-wide p5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downSize:J

    iput p7, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downloadType:I

    iput-object p8, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iput p9, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$currentNum:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public downloadFail(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)V
    .locals 5

    .line 365
    sget v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->silent_restart_num:I

    const/4 v1, 0x1

    const/16 v2, 0xa

    if-ge v0, v2, :cond_0

    .line 367
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u9759\u9ed8\u4e0b\u8f7d\u91cd\u8bd5\u6b21\u6570"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v0, Lcom/ymnsdk/replugin/patch/download/DownloadState;->silent_restart_num:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\u91cd\u8bd5:"

    invoke-static {v0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 368
    sget p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->silent_restart_num:I

    add-int/2addr p1, v1

    sput p1, Lcom/ymnsdk/replugin/patch/download/DownloadState;->silent_restart_num:I

    goto :goto_0

    .line 370
    :cond_0
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->TaskIsDownloading:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    if-eq p1, v0, :cond_4

    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;->ManualStop:Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;

    if-ne p1, v0, :cond_1

    goto :goto_0

    .line 373
    :cond_1
    iget v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downloadType:I

    if-nez v0, :cond_2

    .line 375
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadFailEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, v2, v3, p1}, Lcom/ymnsdk/replugin/event/silentdownload/ApkStartSilentDownloadFailEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto :goto_0

    .line 377
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v2, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-static {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadCode;->translate(Lcom/ymnsdk/replugin/patch/download/DownloadCode$Code;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {v2, v3, v4, p1}, Lcom/ymnsdk/replugin/event/silentdownload/PatchStartSilentDownloadFailEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 378
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result p1

    if-nez p1, :cond_3

    return-void

    .line 379
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object p1

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$apkMd5:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object p1

    .line 380
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$apkMd5:Ljava/lang/String;

    invoke-virtual {v0, v2, v3, p1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->clrarPatchResource(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V

    .line 381
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$currentNum:I

    add-int/2addr v2, v1

    invoke-virtual {p1, v0, v1, v2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadOnePlugin(Landroid/app/Activity;ZI)V

    :cond_4
    :goto_0
    return-void
.end method

.method public downloadSuccess(Ljava/lang/String;)V
    .locals 8

    .line 287
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v7, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$apkMd5:Ljava/lang/String;

    iget-wide v5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downSize:J

    move-object v1, v7

    invoke-direct/range {v1 .. v6}, Lcom/ymnsdk/replugin/event/other/CoreDownloadSuccessEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;J)V

    invoke-virtual {v0, v7}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 288
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$apkMd5:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;->getDownloadFileInfo(Ljava/lang/String;)Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 290
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    invoke-virtual {v1, v2, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->postDownloadErrorEvent(Landroid/app/Activity;Lcom/ymnsdk/replugin/patch/download/DownloadFileInfo;)V

    .line 292
    :cond_0
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "old.apk"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/util/DownloadUtils;->joinPluginPath(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 293
    iget v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downloadType:I

    const/4 v2, 0x1

    if-ne v1, v2, :cond_3

    .line 295
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$apkMd5:Ljava/lang/String;

    invoke-virtual {v1, v2, v3}, Lcom/ymnsdk/replugin/util/DownloadUtils;->addMd5(Lcom/ymnsdk/replugin/entity/PluginInfo;Ljava/lang/String;)Ljava/util/List;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->setMd5List(Ljava/util/List;)V

    .line 296
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v0, v1, v2}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putMergePatchData(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;)V

    .line 298
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalSilentDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 299
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 300
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalSilentDowningPlugin(Ljava/util/Map;)V

    .line 301
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getLocalUserDowningPlugin()Ljava/util/Map;

    move-result-object v0

    .line 302
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-interface {v0, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 303
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->putLocalUserDowningPlugin(Ljava/util/Map;)V

    .line 304
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5408\u5e76\u7684patch\u5730\u5740\u662f"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "md5\u662f:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 305
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 307
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v2

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v5}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getFile_md5()Ljava/lang/String;

    move-result-object v6

    new-instance v7, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;

    invoke-direct {v7, p0, v0, v1}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4$1;-><init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;J)V

    move-object v5, p1

    invoke-virtual/range {v2 .. v7}, Lcom/ymnsdk/replugin/util/DownloadUtils;->mergeApk(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/MergeCallback;)V

    goto :goto_0

    .line 321
    :cond_3
    invoke-static {}, Lcom/ymnsdk/replugin/util/DownloadUtils;->getInstance()Lcom/ymnsdk/replugin/util/DownloadUtils;

    move-result-object v1

    invoke-virtual {v1, p1, v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;->renameFile(Ljava/lang/String;Ljava/lang/String;)Z

    .line 322
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downloadType:I

    iget v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$currentNum:I

    add-int/2addr v4, v2

    invoke-virtual {p1, v0, v1, v3, v4}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->saveDownload(Ljava/lang/String;Lcom/ymnsdk/replugin/entity/PluginInfo;II)V

    :goto_0
    return-void
.end method

.method public downloading(J)V
    .locals 17

    move-object/from16 v0, p0

    move-wide/from16 v11, p1

    .line 328
    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->beforeProcess:J

    cmp-long v1, v11, v1

    if-eqz v1, :cond_3

    .line 330
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "process is "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v11, v12}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ymn"

    invoke-static {v2, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 331
    invoke-static/range {p1 .. p2}, Lcom/ymnsdk/replugin/util/DownloadingUtils;->inProcessArray(J)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 332
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    const-wide/16 v3, 0x0

    cmp-long v5, v11, v3

    if-nez v5, :cond_0

    .line 335
    iget-object v5, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-wide v1, v5, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    .line 336
    iget-object v5, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-wide v3, v5, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    .line 337
    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v4, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iput-object v4, v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    .line 338
    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v3, v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v4, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v4, v4, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    const/4 v5, 0x1

    invoke-static {v5}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-virtual {v3, v4, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 340
    :cond_0
    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v4, v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    iget-object v6, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v6, v6, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    sub-long v6, v1, v6

    add-long/2addr v4, v6

    iput-wide v4, v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    .line 341
    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-wide v1, v3, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentRecoveryTime:J

    .line 342
    iget v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downloadType:I

    if-nez v1, :cond_1

    .line 343
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v9

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/ApkSilentDownloadingEvent;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    iget-wide v5, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downSize:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v7, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    move-object v1, v10

    move-wide v15, v7

    move-wide/from16 v7, p1

    move-object v13, v9

    move-object v14, v10

    move-wide v9, v15

    invoke-direct/range {v1 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/ApkSilentDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJJ)V

    invoke-virtual {v13, v14}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-wide/16 v1, 0x64

    cmp-long v1, v11, v1

    if-nez v1, :cond_2

    .line 344
    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 346
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/CompleteApkDownloadInSilentEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-wide v6, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downSize:J

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v8, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/CompleteApkDownloadInSilentEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 347
    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto/16 :goto_0

    .line 350
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v13

    new-instance v14, Lcom/ymnsdk/replugin/event/installplugin/PatchSilentDownloadingEvent;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v4

    iget-wide v5, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downSize:J

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v9, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    move-object v1, v14

    move-wide/from16 v7, p1

    invoke-direct/range {v1 .. v10}, Lcom/ymnsdk/replugin/event/installplugin/PatchSilentDownloadingEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJJ)V

    invoke-virtual {v13, v14}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    const-wide/16 v1, 0x64

    cmp-long v1, v11, v1

    if-nez v1, :cond_2

    .line 351
    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentPlugin:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 353
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v10, Lcom/ymnsdk/replugin/event/installplugin/CompletePacthDownloadInSilentEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$activity:Landroid/app/Activity;

    iget-object v4, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/PluginInfo;->getPlugin_version()Ljava/lang/String;

    move-result-object v5

    iget-wide v6, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$downSize:J

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-wide v8, v2, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->silentDownloadDur:J

    move-object v2, v10

    invoke-direct/range {v2 .. v9}, Lcom/ymnsdk/replugin/event/installplugin/CompletePacthDownloadInSilentEvent;-><init>(Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;JJ)V

    invoke-virtual {v1, v10}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 354
    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->hasZeroDownloadPointMap:Ljava/util/HashMap;

    iget-object v2, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->val$pluginId:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-static {v3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v3

    invoke-virtual {v1, v2, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 358
    :cond_2
    :goto_0
    iget-object v1, v0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$4;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-wide v11, v1, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->beforeProcess:J

    :cond_3
    return-void
.end method

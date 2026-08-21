.class Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;
.super Lcom/ymnsdk/replugin/action/ActionObserver;
.source "PluginsInfoWapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->getPluginsInfo(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

.field final synthetic val$action:Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;

.field final synthetic val$hostAppInfo:Ljava/lang/String;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;

.field final synthetic val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

.field final synthetic val$startTime:J


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;Ljava/lang/String;Lcom/ymnsdk/replugin/util/RequestRetryUtils;JLcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;)V
    .locals 0

    .line 54
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iput-object p2, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$hostAppInfo:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iput-wide p4, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$startTime:J

    iput-object p6, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;

    iput-object p7, p0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$action:Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;

    invoke-direct {p0}, Lcom/ymnsdk/replugin/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 17

    move-object/from16 v0, p0

    move-object/from16 v1, p1

    .line 57
    invoke-virtual/range {p1 .. p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v2

    const-string v3, "ymn"

    if-eqz v2, :cond_5

    .line 58
    iget-object v2, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    check-cast v2, Lcom/ymnsdk/replugin/entity/AppPluginInfo;

    .line 59
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;

    move-result-object v4

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/util/SharedPerferencesDataUtils;->clearPluginGrayData()V

    .line 60
    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$hostAppInfo:Ljava/lang/String;

    invoke-static {v2, v4}, Lcom/ymnsdk/replugin/manger/PluginMangerUtils;->filterPlugin(Lcom/ymnsdk/replugin/entity/AppPluginInfo;Ljava/lang/String;)V

    .line 61
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getPost_statistics_enabled()I

    move-result v4

    invoke-static {v4}, Lcom/ymnsdk/replugin/util/LogUtils;->setIsOpenLog(I)V

    .line 63
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getPatch_download_in_nowifi()I

    move-result v4

    sput v4, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->isNoWifiDownload:I

    .line 64
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "str2 = "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v5

    invoke-virtual {v5, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 65
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getUpdate_server_address()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_0

    .line 66
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getUpdate_server_address()Ljava/util/List;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setUpdateServerAddress(Ljava/lang/String;)V

    .line 69
    :cond_0
    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getPlugins()Ljava/util/List;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 70
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v2}, Lcom/ymnsdk/replugin/entity/AppPluginInfo;->getPlugins()Ljava/util/List;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginList(Ljava/lang/String;)V

    goto :goto_0

    .line 72
    :cond_1
    invoke-static {}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->getInstance()Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;

    const-string v3, ""

    invoke-static {v3}, Lcom/ymnsdk/replugin/util/SharedPreferencesUtils;->setPluginList(Ljava/lang/String;)V

    .line 74
    :goto_0
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v3

    new-instance v14, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v5, v4, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    iget v7, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v4

    invoke-virtual {v4, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v10

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v11

    move v13, v7

    iget-wide v6, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$startTime:J

    sub-long/2addr v11, v6

    const/4 v15, 0x1

    const-string v16, ""

    move-object v4, v14

    const v6, 0x21ef9

    move v7, v13

    move-object/from16 v9, v16

    move v13, v15

    invoke-direct/range {v4 .. v13}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v3, v14}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 75
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v3

    new-instance v12, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoResponseEvent;

    iget-object v4, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v5, v4, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    const/16 v6, 0x414

    iget v7, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v8

    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iget-wide v10, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$startTime:J

    sub-long v10, v1, v10

    move-object v4, v12

    invoke-direct/range {v4 .. v11}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoResponseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;IJ)V

    invoke-virtual {v3, v12}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 76
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v1, v1, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    invoke-static {v1}, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->checkDownloadingPlugin(Landroid/app/Activity;)V

    .line 77
    sget-boolean v1, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    const/4 v2, 0x1

    if-nez v1, :cond_2

    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->setOpenSilentDownload(Z)V

    .line 78
    :cond_2
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$hostAppInfo:Ljava/lang/String;

    sget v3, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->isNoWifiDownload:I

    invoke-static {v1, v3}, Lcom/ymnsdk/replugin/util/SilentDownloadUtils;->isSatisfySclentDownload(Ljava/lang/String;I)I

    move-result v1

    if-nez v1, :cond_3

    .line 82
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->getInstance()Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    move-result-object v1

    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Landroid/app/Activity;)V

    goto :goto_1

    :cond_3
    if-ne v1, v2, :cond_4

    .line 85
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v3, v3, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    const/4 v4, 0x2

    invoke-direct {v2, v3, v4}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 87
    :cond_4
    :goto_1
    iget-object v1, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;

    invoke-interface {v1}, Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;->onSuccess()V

    goto :goto_2

    .line 89
    :cond_5
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "str = "

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v3, v2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 90
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$action:Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;

    invoke-virtual {v2, v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->retryRequest(Lcom/ymnsdk/replugin/action/ActionSupport;)Z

    move-result v2

    if-eqz v2, :cond_6

    .line 92
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v13, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    const v5, 0x21ef9

    iget v6, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v7, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v9

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v10

    iget-wide v14, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$startTime:J

    sub-long/2addr v10, v14

    const/4 v12, 0x1

    const-string v8, ""

    move-object v3, v13

    invoke-direct/range {v3 .. v12}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v2, v13}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 93
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v2

    new-instance v11, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoResponseEvent;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;

    iget-object v4, v3, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper;->activity:Landroid/app/Activity;

    const/16 v5, 0x415

    iget v6, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v7, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    iget-object v3, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v8

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v9

    iget-wide v12, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$startTime:J

    sub-long/2addr v9, v12

    move-object v3, v11

    invoke-direct/range {v3 .. v10}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoResponseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;IJ)V

    invoke-virtual {v2, v11}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 94
    iget-object v2, v0, Lcom/ymnsdk/replugin/feature/PluginsInfoWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;

    iget v3, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v1, v1, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-interface {v2, v3, v1}, Lcom/ymnsdk/replugin/listener/GetPluginsStatusInfoListener;->onFailure(ILjava/lang/String;)V

    :cond_6
    :goto_2
    return-void
.end method

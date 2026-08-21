.class Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;
.super Lcom/ymnsdk/replugin/action/ActionObserver;
.source "PluginStatusWapper.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->queryPluginStatus(Ljava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

.field final synthetic val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

.field final synthetic val$listener:Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;

.field final synthetic val$manifesturl:Ljava/lang/String;

.field final synthetic val$plugin:Lcom/ymnsdk/replugin/entity/Plugin;

.field final synthetic val$plugin_id:Ljava/lang/String;

.field final synthetic val$queryPluginStatusStartTime:J

.field final synthetic val$requestStateAction:Lcom/ymnsdk/replugin/action/RequestStateAction;

.field final synthetic val$requestStatestartTime:J

.field final synthetic val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/feature/PluginStatusWapper;Lcom/ymnsdk/replugin/util/RequestRetryUtils;JLjava/lang/String;Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;JLjava/lang/String;Lcom/ymnsdk/replugin/util/RequestRetryUtils;Lcom/ymnsdk/replugin/entity/Plugin;Lcom/ymnsdk/replugin/action/RequestStateAction;)V
    .locals 0

    .line 67
    iput-object p1, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iput-object p2, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iput-wide p3, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStatestartTime:J

    iput-object p5, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iput-object p6, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;

    iput-wide p7, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$queryPluginStatusStartTime:J

    iput-object p9, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$manifesturl:Ljava/lang/String;

    iput-object p10, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$inforetryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iput-object p11, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin:Lcom/ymnsdk/replugin/entity/Plugin;

    iput-object p12, p0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStateAction:Lcom/ymnsdk/replugin/action/RequestStateAction;

    invoke-direct {p0}, Lcom/ymnsdk/replugin/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 17

    move-object/from16 v6, p0

    move-object/from16 v0, p1

    .line 70
    invoke-virtual/range {p1 .. p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isOk()Z

    move-result v1

    const-string v2, "ymn"

    if-eqz v1, :cond_3

    .line 71
    iget-object v1, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->processedResult:Ljava/lang/Object;

    move-object v4, v1

    check-cast v4, Lcom/ymnsdk/replugin/entity/PluginState;

    .line 72
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "str2 = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 73
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    iget v10, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v11

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    move v5, v10

    iget-wide v9, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStatestartTime:J

    sub-long/2addr v14, v9

    const/16 v16, 0x2

    const-string v12, ""

    move-object v7, v2

    const v3, 0x21efe

    move v9, v3

    move v10, v5

    invoke-direct/range {v7 .. v16}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 74
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v1

    if-nez v1, :cond_0

    .line 75
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateResponseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    iget-object v10, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iget v11, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;

    move-result-object v3

    invoke-virtual {v3, v4}, Lcom/bianfeng/ymnsdk/utilslib/gson/GsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v12

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    move-object v5, v10

    iget-wide v9, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStatestartTime:J

    sub-long/2addr v14, v9

    move-object v7, v2

    const/16 v3, 0x414

    move v9, v3

    move-object v10, v5

    invoke-direct/range {v7 .. v15}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;IJ)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 77
    :cond_0
    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginState;->getIs_in_maintenance()I

    move-result v1

    if-eqz v1, :cond_1

    .line 80
    iget-object v1, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;

    invoke-virtual {v4}, Lcom/ymnsdk/replugin/entity/PluginState;->getMaintenance_reason()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;->onSuccessUnAvailable(Ljava/lang/String;)V

    .line 81
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const v9, 0x21efb

    iget v10, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v11, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStatestartTime:J

    sub-long v14, v3, v11

    const/16 v16, 0x2

    const-string v11, "\u7ef4\u62a4\u4e2d"

    const-string v12, ""

    move-object v7, v2

    invoke-direct/range {v7 .. v16}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 82
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v1

    if-nez v1, :cond_4

    .line 83
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v9, 0x414

    iget-object v10, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iget v12, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v13, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$queryPluginStatusStartTime:J

    sub-long v14, v3, v13

    const-string v11, ""

    const-string v13, "\u7ef4\u62a4\u4e2d"

    move-object v7, v2

    invoke-direct/range {v7 .. v15}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    goto/16 :goto_0

    .line 86
    :cond_1
    new-instance v7, Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;

    iget-object v0, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v0, v0, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    invoke-direct {v7, v0}, Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;-><init>(Landroid/content/Context;)V

    .line 87
    iget-object v0, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$manifesturl:Ljava/lang/String;

    invoke-virtual {v7, v0}, Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;->setURL(Ljava/lang/String;)V

    .line 88
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    .line 89
    new-instance v8, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;

    move-object v0, v8

    move-object/from16 v1, p0

    move-object v5, v7

    invoke-direct/range {v0 .. v5}, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1$1;-><init>(Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;JLcom/ymnsdk/replugin/entity/PluginState;Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;)V

    invoke-virtual {v7, v8}, Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;->addObserver(Ljava/util/Observer;)V

    .line 150
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_2

    .line 151
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v1, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailRequestEvent;

    iget-object v2, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v2, v2, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v3, 0x412

    iget-object v4, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 153
    :cond_2
    invoke-virtual {v7}, Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;->actionStart()V

    goto/16 :goto_0

    .line 156
    :cond_3
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "str = "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 157
    iget-object v1, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iget-object v2, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStateAction:Lcom/ymnsdk/replugin/action/RequestStateAction;

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->retryRequest(Lcom/ymnsdk/replugin/action/ActionSupport;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 159
    iget-object v1, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$listener:Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;

    iget v2, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v3, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-interface {v1, v2, v3}, Lcom/ymnsdk/replugin/listener/QueryPluginStatusListener;->onFailure(ILjava/lang/String;)V

    .line 160
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/base/BaseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const v9, 0x21efb

    iget v10, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v11, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v14, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStatestartTime:J

    sub-long v14, v3, v14

    const/16 v16, 0x2

    const-string v12, ""

    move-object v7, v2

    invoke-direct/range {v7 .. v16}, Lcom/ymnsdk/replugin/event/base/BaseEvent;-><init>(Landroid/app/Activity;IILjava/lang/String;Ljava/lang/String;IJI)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postEvent(Lcom/ymnsdk/replugin/event/base/BaseEvent;)V

    .line 161
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v1

    invoke-virtual {v1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v1

    if-nez v1, :cond_4

    .line 162
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateResponseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    const/16 v9, 0x415

    iget-object v10, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iget v11, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v12, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$stateretryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-virtual {v3}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->getRequestSum()I

    move-result v13

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v14, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$requestStatestartTime:J

    sub-long v14, v3, v14

    move-object v7, v2

    invoke-direct/range {v7 .. v15}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;ILjava/lang/String;IJ)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 163
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v1

    new-instance v2, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;

    iget-object v3, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->this$0:Lcom/ymnsdk/replugin/feature/PluginStatusWapper;

    iget-object v8, v3, Lcom/ymnsdk/replugin/feature/PluginStatusWapper;->activity:Landroid/app/Activity;

    iget-object v10, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$plugin_id:Ljava/lang/String;

    iget v12, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->code:I

    iget-object v13, v0, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->msg:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    iget-wide v14, v6, Lcom/ymnsdk/replugin/feature/PluginStatusWapper$1;->val$queryPluginStatusStartTime:J

    sub-long v14, v3, v14

    const-string v11, ""

    move-object v7, v2

    invoke-direct/range {v7 .. v15}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStatusResponseEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;Ljava/lang/String;ILjava/lang/String;J)V

    invoke-virtual {v1, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    :cond_4
    :goto_0
    return-void
.end method

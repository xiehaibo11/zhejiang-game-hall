.class Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;
.super Lcom/ymnsdk/replugin/action/ActionObserver;
.source "SilentDownloadApi.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->downloadPlugin(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

.field final synthetic val$action:Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;

.field final synthetic val$activity:Landroid/app/Activity;

.field final synthetic val$apkMd5:Ljava/lang/String;

.field final synthetic val$currentNum:I

.field final synthetic val$downSize:J

.field final synthetic val$downloadType:I

.field final synthetic val$downloadUri:Ljava/lang/String;

.field final synthetic val$isExist:Z

.field final synthetic val$noNetTimeout:I

.field final synthetic val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

.field final synthetic val$pluginId:Ljava/lang/String;

.field final synthetic val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

.field final synthetic val$weaknetTimeout:I


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZILcom/ymnsdk/replugin/util/RequestRetryUtils;Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;)V
    .locals 0

    .line 227
    iput-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iput-object p2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iput-object p3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$activity:Landroid/app/Activity;

    iput-object p4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$pluginId:Ljava/lang/String;

    iput-object p5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadUri:Ljava/lang/String;

    iput p6, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadType:I

    iput-wide p7, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downSize:J

    iput-object p9, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$apkMd5:Ljava/lang/String;

    iput p10, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$noNetTimeout:I

    iput p11, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$weaknetTimeout:I

    iput-boolean p12, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$isExist:Z

    iput p13, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$currentNum:I

    iput-object p14, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iput-object p15, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$action:Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;

    invoke-direct {p0}, Lcom/ymnsdk/replugin/action/ActionObserver;-><init>()V

    return-void
.end method


# virtual methods
.method public onActionResult(Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;)V
    .locals 14

    .line 230
    sget-boolean v0, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz v0, :cond_0

    return-void

    .line 231
    :cond_0
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isAllow()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 232
    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$activity:Landroid/app/Activity;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$pluginId:Ljava/lang/String;

    iget-object v5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadUri:Ljava/lang/String;

    iget v6, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadType:I

    iget-wide v7, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downSize:J

    iget-object v9, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$apkMd5:Ljava/lang/String;

    iget v10, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$noNetTimeout:I

    iget v11, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$weaknetTimeout:I

    iget-boolean v12, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$isExist:Z

    iget v13, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$currentNum:I

    invoke-virtual/range {v1 .. v13}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    goto :goto_0

    .line 233
    :cond_1
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport$ResponseResult;->isNotAllow()Z

    move-result p1

    if-eqz p1, :cond_3

    .line 235
    iget v5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadType:I

    const/4 p1, 0x1

    if-ne v5, p1, :cond_2

    .line 238
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$pluginId:Ljava/lang/String;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadUri:Ljava/lang/String;

    iget-wide v6, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downSize:J

    iget-object v8, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$apkMd5:Ljava/lang/String;

    iget v9, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$noNetTimeout:I

    iget v10, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$weaknetTimeout:I

    iget-boolean v11, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$isExist:Z

    iget v12, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$currentNum:I

    invoke-virtual/range {v0 .. v12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    goto :goto_0

    .line 241
    :cond_2
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance v0, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$activity:Landroid/app/Activity;

    const/4 v2, 0x4

    invoke-direct {v0, v1, v2}, Lcom/ymnsdk/replugin/event/silentdownload/NotStartSilentDownloadEvent;-><init>(Landroid/app/Activity;I)V

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    return-void

    .line 245
    :cond_3
    iget-object p1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$retryUtils:Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$action:Lcom/ymnsdk/replugin/action/RequestSilentUpdateFilterAction;

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->retryRequest(Lcom/ymnsdk/replugin/action/ActionSupport;)Z

    move-result p1

    if-eqz p1, :cond_5

    .line 248
    sget-boolean p1, Lcom/ymnsdk/replugin/util/DownloadUtils;->isUserDownload:Z

    if-eqz p1, :cond_4

    return-void

    .line 250
    :cond_4
    iget-object v0, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->this$0:Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;

    iget-object v1, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$plugin:Lcom/ymnsdk/replugin/entity/PluginInfo;

    iget-object v2, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$pluginId:Ljava/lang/String;

    iget-object v4, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadUri:Ljava/lang/String;

    iget v5, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downloadType:I

    iget-wide v6, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$downSize:J

    iget-object v8, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$apkMd5:Ljava/lang/String;

    iget v9, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$noNetTimeout:I

    iget v10, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$weaknetTimeout:I

    iget-boolean v11, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$isExist:Z

    iget v12, p0, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi$3;->val$currentNum:I

    invoke-virtual/range {v0 .. v12}, Lcom/ymnsdk/replugin/patch/download/SilentDownloadApi;->startSilentDownload(Lcom/ymnsdk/replugin/entity/PluginInfo;Landroid/app/Activity;Ljava/lang/String;Ljava/lang/String;IJLjava/lang/String;IIZI)V

    :cond_5
    :goto_0
    return-void
.end method

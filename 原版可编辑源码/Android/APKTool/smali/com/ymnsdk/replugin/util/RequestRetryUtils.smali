.class public Lcom/ymnsdk/replugin/util/RequestRetryUtils;
.super Ljava/lang/Object;
.source "RequestRetryUtils.java"


# instance fields
.field private activity:Landroid/app/Activity;

.field private hostAppInfo:Ljava/lang/String;

.field private pluginId:Ljava/lang/String;

.field private requestSum:I


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 18
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, ""

    .line 20
    iput-object v0, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->pluginId:Ljava/lang/String;

    .line 21
    iput-object v0, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->hostAppInfo:Ljava/lang/String;

    const/4 v0, 0x0

    .line 26
    iput v0, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->requestSum:I

    return-void
.end method

.method public static getInstance()Lcom/ymnsdk/replugin/util/RequestRetryUtils;
    .locals 1

    .line 23
    new-instance v0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/util/RequestRetryUtils;-><init>()V

    return-object v0
.end method


# virtual methods
.method public getRequestSum()I
    .locals 1

    .line 73
    iget v0, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->requestSum:I

    return v0
.end method

.method public retryRequest(Lcom/ymnsdk/replugin/action/ActionSupport;)Z
    .locals 5

    const/4 v0, 0x1

    if-nez p1, :cond_0

    return v0

    .line 42
    :cond_0
    iget v1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->requestSum:I

    const/4 v2, 0x3

    if-ge v1, v2, :cond_4

    add-int/2addr v1, v0

    .line 43
    iput v1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->requestSum:I

    .line 44
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5f53\u524d\u8bf7\u6c42\u6b21\u6570"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->requestSum:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ymn"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 46
    invoke-virtual {p1}, Lcom/ymnsdk/replugin/action/ActionSupport;->actionStart()V

    .line 47
    instance-of v0, p1, Lcom/ymnsdk/replugin/action/RequestAppPluginInfoAction;

    const/16 v1, 0x413

    if-eqz v0, :cond_1

    .line 49
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_1

    .line 50
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v2, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->activity:Landroid/app/Activity;

    iget-object v4, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->hostAppInfo:Ljava/lang/String;

    invoke-direct {v2, v3, v1, v4}, Lcom/ymnsdk/replugin/event/getpluginsinfo/GetPluginsInfoRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 53
    :cond_1
    instance-of v0, p1, Lcom/ymnsdk/replugin/action/RequestStateAction;

    if-eqz v0, :cond_2

    .line 55
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result v0

    if-nez v0, :cond_2

    .line 56
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object v0

    new-instance v2, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateRequestEvent;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->activity:Landroid/app/Activity;

    iget-object v4, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->pluginId:Ljava/lang/String;

    invoke-direct {v2, v3, v1, v4}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginStateRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {v0, v2}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    .line 59
    :cond_2
    instance-of p1, p1, Lcom/ymnsdk/replugin/action/RequestPluginInfoDetailAction;

    if-eqz p1, :cond_3

    .line 61
    invoke-static {}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->getInstance()Lcom/ymnsdk/replugin/patch/download/DownloadState;

    move-result-object p1

    invoke-virtual {p1}, Lcom/ymnsdk/replugin/patch/download/DownloadState;->isOpenSilentDownload()Z

    move-result p1

    if-nez p1, :cond_3

    .line 62
    invoke-static {}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->getInstance()Lcom/ymnsdk/replugin/datafun/PostdataLib;

    move-result-object p1

    new-instance v0, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailRequestEvent;

    iget-object v2, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->activity:Landroid/app/Activity;

    iget-object v3, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->pluginId:Ljava/lang/String;

    invoke-direct {v0, v2, v1, v3}, Lcom/ymnsdk/replugin/event/querypluginstatus/QueryPluginInfoDetailRequestEvent;-><init>(Landroid/app/Activity;ILjava/lang/String;)V

    invoke-virtual {p1, v0}, Lcom/ymnsdk/replugin/datafun/PostdataLib;->postToSeperllita(Lcom/ymnsdk/replugin/event/base/SepperllitaEvent;)V

    :cond_3
    const/4 p1, 0x0

    return p1

    :cond_4
    return v0
.end method

.method public setActivity(Landroid/app/Activity;)V
    .locals 0

    .line 30
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->activity:Landroid/app/Activity;

    return-void
.end method

.method public setHostAppInfo(Ljava/lang/String;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->hostAppInfo:Ljava/lang/String;

    return-void
.end method

.method public setPluginId(Ljava/lang/String;)V
    .locals 0

    .line 34
    iput-object p1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->pluginId:Ljava/lang/String;

    return-void
.end method

.method public setRequestSum(I)V
    .locals 0

    .line 77
    iput p1, p0, Lcom/ymnsdk/replugin/util/RequestRetryUtils;->requestSum:I

    return-void
.end method

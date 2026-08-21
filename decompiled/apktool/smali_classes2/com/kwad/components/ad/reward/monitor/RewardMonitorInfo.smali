.class public Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final DOWNLOAD_TYPE_ALL:I = 0x2

.field public static final DOWNLOAD_TYPE_ONLINE:I = 0x1

.field public static final DOWNLOAD_TYPE_PART:I = 0x3

.field public static final LOAD_STATUS_DATA_FINISH:I = 0x2

.field public static final LOAD_STATUS_FAIL:I = 0x4

.field public static final LOAD_STATUS_LOAD_FINISH:I = 0x3

.field public static final LOAD_STATUS_START:I = 0x1

.field public static final LOAD_TYPE_LOCAL:I = 0x2

.field public static final LOAD_TYPE_NET:I = 0x1

.field public static final PAGE_STATUS_ENTRY:I = 0x1

.field public static final PAGE_STATUS_SHOW:I = 0x2

.field public static final PAGE_STATUS_SHOW_AD_CALL:I = 0x3

.field public static final REWARD_TYPE_DEEP:I = 0x1

.field public static final REWARD_TYPE_NORMAL:I = 0x0

.field public static final serialVersionUID:J = 0xefe552ccbb4468aL


# instance fields
.field public adCount:I

.field public creativeId:J

.field public currentDuration:J

.field public dataDownloadInterval:J

.field public dataLoadInterval:J

.field public downloadDuration:J

.field public downloadSize:J

.field public downloadType:I

.field public errorCode:I

.field public errorMsg:Ljava/lang/String;

.field public loadDataDuration:J

.field public loadStatus:I

.field public loadType:I

.field public pageStatus:I

.field public posId:J

.field public renderDuration:J

.field public rewardType:I

.field public taskStep:I

.field public taskType:I

.field public totalDuration:J

.field public videoDuration:J

.field public videoUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>(J)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->rewardType:I

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskType:I

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskStep:I

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->posId:J

    return-void
.end method


# virtual methods
.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 3

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->rewardType:I

    const-string v1, "reward_type"

    const/4 v2, -0x1

    if-eq v0, v2, :cond_0

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    goto :goto_0

    :cond_0
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    :goto_0
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskType:I

    const-string v1, "task_type"

    if-eq v0, v2, :cond_1

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    goto :goto_1

    :cond_1
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    :goto_1
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskStep:I

    const-string v1, "task_step"

    if-eq v0, v2, :cond_2

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    return-void

    :cond_2
    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->remove(Ljava/lang/String;)Ljava/lang/Object;

    return-void
.end method

.method public setAdCount(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->adCount:I

    return-object p0
.end method

.method public setCreativeId(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->creativeId:J

    return-object p0
.end method

.method public setCurrentDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->currentDuration:J

    return-object p0
.end method

.method public setDataDownloadInterval(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataDownloadInterval:J

    return-object p0
.end method

.method public setDataLoadInterval(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataLoadInterval:J

    return-object p0
.end method

.method public setDownloadDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadDuration:J

    return-object p0
.end method

.method public setDownloadSize(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadSize:J

    return-object p0
.end method

.method public setDownloadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadType:I

    return-object p0
.end method

.method public setErrorCode(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorCode:I

    return-object p0
.end method

.method public setErrorMsg(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    return-object p0
.end method

.method public setLoadDataDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadDataDuration:J

    return-object p0
.end method

.method public setLoadStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadStatus:I

    return-object p0
.end method

.method public setLoadType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadType:I

    return-object p0
.end method

.method public setPageStatus(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->pageStatus:I

    return-object p0
.end method

.method public setRenderDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->renderDuration:J

    return-object p0
.end method

.method public setRewardType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->rewardType:I

    return-object p0
.end method

.method public setTaskStep(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskStep:I

    return-object p0
.end method

.method public setTaskType(I)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskType:I

    return-object p0
.end method

.method public setTotalDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->totalDuration:J

    return-object p0
.end method

.method public setVideoDuration(J)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoDuration:J

    return-object p0
.end method

.method public setVideoUrl(Ljava/lang/String;)Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    return-object p0
.end method

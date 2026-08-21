.class public final Lcom/kwad/sdk/core/b/a/hb;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "load_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadType:I

    const-string v0, "load_status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadStatus:I

    const-string v0, "ad_count"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->adCount:I

    const-string v0, "load_data_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadDataDuration:J

    const-string v0, "download_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadDuration:J

    const-string v0, "total_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->totalDuration:J

    const-string v0, "download_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadType:I

    const-string v0, "download_size"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadSize:J

    const-string v0, "error_code"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorCode:I

    const-string v0, "error_msg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    :cond_1
    const-string v0, "creative_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->creativeId:J

    const-string v0, "video_url"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    :cond_2
    const-string v0, "video_duration_ms"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoDuration:J

    const-string v1, "data_load_interval_duration_ms"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataLoadInterval:J

    const-string v1, "data_download_interval_duration_ms"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataDownloadInterval:J

    const-string v1, "render_duration_ms"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v1

    iput-wide v1, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->renderDuration:J

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->currentDuration:J

    const-string v0, "page_status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->pageStatus:I

    const-string v0, "reward_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->rewardType:I

    const-string v0, "task_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskType:I

    const-string v0, "task_step"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskStep:I

    const-string v0, "pos_Id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->posId:J

    return-void
.end method

.method private static b(Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadType:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadType:I

    const-string v1, "load_type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadStatus:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadStatus:I

    const-string v1, "load_status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->adCount:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->adCount:I

    const-string v1, "ad_count"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadDataDuration:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_4

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->loadDataDuration:J

    const-string v4, "load_data_duration_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadDuration:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_5

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadDuration:J

    const-string v4, "download_duration_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->totalDuration:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_6

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->totalDuration:J

    const-string v4, "total_duration_ms"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_6
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadType:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadType:I

    const-string v1, "download_type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadSize:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_8

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->downloadSize:J

    const-string v4, "download_size"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorCode:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorCode:I

    const-string v1, "error_code"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->errorMsg:Ljava/lang/String;

    const-string v4, "error_msg"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->creativeId:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_b

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->creativeId:J

    const-string v0, "creative_id"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoUrl:Ljava/lang/String;

    const-string v1, "video_url"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoDuration:J

    cmp-long v0, v0, v2

    const-string v1, "video_duration_ms"

    if-eqz v0, :cond_d

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->videoDuration:J

    invoke-static {p1, v1, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_d
    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataLoadInterval:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_e

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataLoadInterval:J

    const-string v0, "data_load_interval_duration_ms"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_e
    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataDownloadInterval:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_f

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->dataDownloadInterval:J

    const-string v0, "data_download_interval_duration_ms"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_f
    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->renderDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_10

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->renderDuration:J

    const-string v0, "render_duration_ms"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_10
    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->currentDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_11

    iget-wide v4, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->currentDuration:J

    invoke-static {p1, v1, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_11
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->pageStatus:I

    if-eqz v0, :cond_12

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->pageStatus:I

    const-string v1, "page_status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_12
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->rewardType:I

    if-eqz v0, :cond_13

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->rewardType:I

    const-string v1, "reward_type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_13
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskType:I

    if-eqz v0, :cond_14

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskType:I

    const-string v1, "task_type"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_14
    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskStep:I

    if-eqz v0, :cond_15

    iget v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->taskStep:I

    const-string v1, "task_step"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_15
    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->posId:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_16

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;->posId:J

    const-string p0, "pos_Id"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_16
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hb;->a(Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/hb;->b(Lcom/kwad/components/ad/reward/monitor/RewardMonitorInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

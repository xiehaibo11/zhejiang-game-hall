.class public final Lcom/kwad/sdk/core/b/a/ak;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/report/AdTrackLog;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/report/AdTrackLog;Lorg/json/JSONObject;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "template_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    :cond_1
    const-string v0, "scene_id"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    :cond_2
    const-string v0, "pre_landing_page_switch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageSwitch:I

    const-string v0, "pre_landing_page_show_type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageShowType:I

    const-string v0, "ad_live_switch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveSwitch:I

    const-string v0, "ad_tk_live_switch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adTkLiveSwitch:I

    const-string v0, "ad_live_component_ready"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveComponentReady:I

    const-string v0, "server_check_switch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->serverCheckSwitch:I

    const-string v0, "reward_advance_switch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardAdvanceSwitch:I

    const-string v0, "is_plugin"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->isPlugin:I

    const-string v0, "api_sdk_version"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    :cond_3
    const-string v0, "reward_detail_status_bar_height"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailStatusBarHeight:I

    const-string v0, "reward_detail_call_position_y"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailCallPositionY:I

    const-string v0, "screen_orientation"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->screenOrientation:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/report/AdTrackLog;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->templateId:Ljava/lang/String;

    const-string v2, "template_id"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->sceneId:Ljava/lang/String;

    const-string v2, "scene_id"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageSwitch:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageSwitch:I

    const-string v2, "pre_landing_page_switch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageShowType:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->preLandingPageShowType:I

    const-string v2, "pre_landing_page_show_type"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveSwitch:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveSwitch:I

    const-string v2, "ad_live_switch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adTkLiveSwitch:I

    if-eqz v0, :cond_6

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adTkLiveSwitch:I

    const-string v2, "ad_tk_live_switch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveComponentReady:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->adLiveComponentReady:I

    const-string v2, "ad_live_component_ready"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->serverCheckSwitch:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->serverCheckSwitch:I

    const-string v2, "server_check_switch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardAdvanceSwitch:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardAdvanceSwitch:I

    const-string v2, "reward_advance_switch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->isPlugin:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->isPlugin:I

    const-string v2, "is_plugin"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->apiSdkVersion:Ljava/lang/String;

    const-string v1, "api_sdk_version"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailStatusBarHeight:I

    if-eqz v0, :cond_c

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailStatusBarHeight:I

    const-string v1, "reward_detail_status_bar_height"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_c
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailCallPositionY:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->rewardDetailCallPositionY:I

    const-string v1, "reward_detail_call_position_y"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget v0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->screenOrientation:I

    if-eqz v0, :cond_e

    iget p0, p0, Lcom/kwad/sdk/core/report/AdTrackLog;->screenOrientation:I

    const-string v0, "screen_orientation"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_e
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ak;->a(Lcom/kwad/sdk/core/report/AdTrackLog;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/AdTrackLog;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ak;->b(Lcom/kwad/sdk/core/report/AdTrackLog;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

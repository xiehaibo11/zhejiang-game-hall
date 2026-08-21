.class public final Lcom/kwad/sdk/core/b/a/ag;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Ljava/lang/Integer;

    const-string v1, "5"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "fullScreenSkipShowTime"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->fullScreenSkipShowTime:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "1"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "rewardSkipConfirmSwitch"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardSkipConfirmSwitch:I

    const-string v0, "closeDelaySeconds"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->closeDelaySeconds:J

    const-string v0, "playableCloseSeconds"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->playableCloseSeconds:J

    const-string v0, "rewardVideoInteractSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardVideoInteractSwitch:Z

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    const-string v1, "adShowVideoH5Info"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "adPushSwitch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushSwitch:Z

    const-string v0, "adPushShowAfterTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushShowAfterTime:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "900"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "adPushIntervalTime"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushIntervalTime:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    const-string v1, "nativeAdInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "useNativeForOuterLiveAd"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->useNativeForOuterLiveAd:Z

    const-string v0, "adPushDownloadJumpType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushDownloadJumpType:I

    const-string v0, "actionBarType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->actionBarType:I

    const-string v0, "endCardType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->endCardType:I

    const-string v0, "confirmCardType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->confirmCardType:I

    const-string v0, "innerAdType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->fullScreenSkipShowTime:I

    const-string v1, "fullScreenSkipShowTime"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardSkipConfirmSwitch:I

    const-string v1, "rewardSkipConfirmSwitch"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->closeDelaySeconds:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->closeDelaySeconds:J

    const-string v4, "closeDelaySeconds"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->playableCloseSeconds:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->playableCloseSeconds:J

    const-string v2, "playableCloseSeconds"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardVideoInteractSwitch:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->rewardVideoInteractSwitch:Z

    const-string v1, "rewardVideoInteractSwitch"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adShowVideoH5Info:Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;

    const-string v1, "adShowVideoH5Info"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushSwitch:Z

    if-eqz v0, :cond_4

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushSwitch:Z

    const-string v1, "adPushSwitch"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushShowAfterTime:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushShowAfterTime:I

    const-string v1, "adPushShowAfterTime"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushIntervalTime:I

    const-string v1, "adPushIntervalTime"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->nativeAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;

    const-string v1, "nativeAdInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->useNativeForOuterLiveAd:Z

    if-eqz v0, :cond_6

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->useNativeForOuterLiveAd:Z

    const-string v1, "useNativeForOuterLiveAd"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushDownloadJumpType:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->adPushDownloadJumpType:I

    const-string v1, "adPushDownloadJumpType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->actionBarType:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->actionBarType:I

    const-string v1, "actionBarType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->endCardType:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->endCardType:I

    const-string v1, "endCardType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->confirmCardType:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->confirmCardType:I

    const-string v1, "confirmCardType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_a
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    if-eqz v0, :cond_b

    iget p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->innerAdType:I

    const-string v0, "innerAdType"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_b
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ag;->a(Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ag;->b(Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

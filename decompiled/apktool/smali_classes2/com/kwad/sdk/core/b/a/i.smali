.class public final Lcom/kwad/sdk/core/b/a/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "creativeId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    const-string v0, "adSourceType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceType:I

    const-string v0, "liveStreamId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    :cond_1
    const-string v0, "universeLiveType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->universeLiveType:I

    const-string v0, "viewCount"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->viewCount:J

    const-string v0, "sdkExtraData"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    :cond_2
    const-string v0, "adDescription"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    :cond_3
    const-string v0, "installAppLabel"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    :cond_4
    const-string v0, "openAppLabel"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    :cond_5
    const-string v0, "adMarkIcon"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    :cond_6
    const-string v0, "adGrayMarkIcon"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    :cond_7
    const-string v0, "adSourceDescription"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    :cond_8
    const-string v0, "adOperationType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adOperationType:I

    const-string v0, "adActionDescription"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    :cond_9
    const-string v0, "adActionBarColor"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionBarColor:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionBarColor:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_a

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionBarColor:Ljava/lang/String;

    :cond_a
    const-string v0, "adShowDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adShowDuration:I

    const-string v0, "appName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_b

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    :cond_b
    const-string v0, "appIconUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_c

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    :cond_c
    const-string v0, "appPackageName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_d

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    :cond_d
    const-string v0, "appScore"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appScore:I

    const-string v0, "appDownloadCountDesc"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_e

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    :cond_e
    const-string v0, "appCategory"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appCategory:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appCategory:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_f

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appCategory:Ljava/lang/String;

    :cond_f
    const-string v0, "appVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_10

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    :cond_10
    const-string v0, "corporationName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_11

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    :cond_11
    const-string v0, "packageSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->packageSize:J

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appImageUrl:Ljava/util/List;

    const-string v0, "appImageUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_12

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v1, v3, :cond_12

    iget-object v3, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appImageUrl:Ljava/util/List;

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->opt(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_12
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appImageSize:Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appImageSize:Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;

    const-string v1, "appImageSize"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "appDescription"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_13

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    :cond_13
    const-string v0, "enableSkipAd"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableSkipAd:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "0"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "adCacheSwitch"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheSwitch:I

    new-instance v0, Ljava/lang/Long;

    const-string v1, "1800"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v3, "adCacheSecond"

    invoke-virtual {p1, v3, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheSecond:J

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "1"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v3, "adCacheStrategy"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheStrategy:I

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "adCacheSize"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheSize:I

    const-string v0, "skipSecond"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->skipSecond:I

    const-string v0, "ecpm"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->ecpm:I

    const-string v0, "videoPlayedNS"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_14

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    :cond_14
    const-string v0, "productName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_15

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    :cond_15
    new-instance v0, Lcom/kwad/sdk/core/response/model/ABParams;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/ABParams;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->mABParams:Lcom/kwad/sdk/core/response/model/ABParams;

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->mABParams:Lcom/kwad/sdk/core/response/model/ABParams;

    new-instance v1, Lorg/json/JSONObject;

    const-string v3, "expParam"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/ABParams;->parseJson(Lorg/json/JSONObject;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v0, "showUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_16

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    :cond_16
    const-string v0, "clickUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_17

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    :cond_17
    const-string v0, "convUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_18

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    :cond_18
    const-string v0, "adAttributeType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adAttributeType:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->apiExpParam:Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->apiExpParam:Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;

    const-string v1, "apiExpParam"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "taskType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->taskType:I

    const-string v0, "campaignType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->campaignType:I

    const-string v0, "itemType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->itemType:I

    const-string v0, "industryFirstLevelId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->industryFirstLevelId:I

    const-string v0, "extraClickReward"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->extraClickReward:Z

    const-string v0, "enableClientProofreadTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableClientProofreadTime:Z

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->creativeId:J

    const-string v4, "creativeId"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceType:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceType:I

    const-string v1, "adSourceType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->liveStreamId:Ljava/lang/String;

    const-string v4, "liveStreamId"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->universeLiveType:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->universeLiveType:I

    const-string v4, "universeLiveType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->viewCount:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_5

    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->viewCount:J

    const-string v0, "viewCount"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->sdkExtraData:Ljava/lang/String;

    const-string v4, "sdkExtraData"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adDescription:Ljava/lang/String;

    const-string v4, "adDescription"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->installAppLabel:Ljava/lang/String;

    const-string v4, "installAppLabel"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->openAppLabel:Ljava/lang/String;

    const-string v4, "openAppLabel"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adMarkIcon:Ljava/lang/String;

    const-string v4, "adMarkIcon"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adGrayMarkIcon:Ljava/lang/String;

    const-string v4, "adGrayMarkIcon"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    if-eqz v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_c

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adSourceDescription:Ljava/lang/String;

    const-string v4, "adSourceDescription"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adOperationType:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adOperationType:I

    const-string v4, "adOperationType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    if-eqz v0, :cond_e

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_e

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionDescription:Ljava/lang/String;

    const-string v4, "adActionDescription"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionBarColor:Ljava/lang/String;

    if-eqz v0, :cond_f

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionBarColor:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_f

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adActionBarColor:Ljava/lang/String;

    const-string v4, "adActionBarColor"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_f
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adShowDuration:I

    if-eqz v0, :cond_10

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adShowDuration:I

    const-string v4, "adShowDuration"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_10
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_11

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appName:Ljava/lang/String;

    const-string v4, "appName"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_11
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    if-eqz v0, :cond_12

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_12

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appIconUrl:Ljava/lang/String;

    const-string v4, "appIconUrl"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_12
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    if-eqz v0, :cond_13

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_13

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appPackageName:Ljava/lang/String;

    const-string v4, "appPackageName"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_13
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appScore:I

    if-eqz v0, :cond_14

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appScore:I

    const-string v4, "appScore"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_14
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    if-eqz v0, :cond_15

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_15

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDownloadCountDesc:Ljava/lang/String;

    const-string v4, "appDownloadCountDesc"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_15
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appCategory:Ljava/lang/String;

    if-eqz v0, :cond_16

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appCategory:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_16

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appCategory:Ljava/lang/String;

    const-string v4, "appCategory"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_16
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    if-eqz v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appVersion:Ljava/lang/String;

    const-string v4, "appVersion"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_17
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    if-eqz v0, :cond_18

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_18

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->corporationName:Ljava/lang/String;

    const-string v4, "corporationName"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_18
    iget-wide v4, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->packageSize:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_19

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->packageSize:J

    const-string v0, "packageSize"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_19
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appImageUrl:Ljava/util/List;

    const-string v2, "appImageUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appImageSize:Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;

    const-string v2, "appImageSize"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    if-eqz v0, :cond_1a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->appDescription:Ljava/lang/String;

    const-string v2, "appDescription"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1a
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableSkipAd:I

    if-eqz v0, :cond_1b

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableSkipAd:I

    const-string v2, "enableSkipAd"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1b
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheSwitch:I

    const-string v2, "adCacheSwitch"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheSecond:J

    const-string v0, "adCacheSecond"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheStrategy:I

    const-string v2, "adCacheStrategy"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adCacheSize:I

    const-string v2, "adCacheSize"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->skipSecond:I

    if-eqz v0, :cond_1c

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->skipSecond:I

    const-string v2, "skipSecond"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1c
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->ecpm:I

    if-eqz v0, :cond_1d

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->ecpm:I

    const-string v2, "ecpm"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1d
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    if-eqz v0, :cond_1e

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1e

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->videoPlayedNS:Ljava/lang/String;

    const-string v2, "videoPlayedNS"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1e
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    if-eqz v0, :cond_1f

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1f

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->productName:Ljava/lang/String;

    const-string v2, "productName"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1f
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->mABParams:Lcom/kwad/sdk/core/response/model/ABParams;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/ABParams;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "expParam"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    if-eqz v0, :cond_20

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_20

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->showUrl:Ljava/lang/String;

    const-string v2, "showUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_20
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    if-eqz v0, :cond_21

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_21

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->clickUrl:Ljava/lang/String;

    const-string v2, "clickUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_21
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    if-eqz v0, :cond_22

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_22

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->convUrl:Ljava/lang/String;

    const-string v1, "convUrl"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_22
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adAttributeType:I

    if-eqz v0, :cond_23

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->adAttributeType:I

    const-string v1, "adAttributeType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_23
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->apiExpParam:Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;

    const-string v1, "apiExpParam"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->taskType:I

    if-eqz v0, :cond_24

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->taskType:I

    const-string v1, "taskType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_24
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->campaignType:I

    if-eqz v0, :cond_25

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->campaignType:I

    const-string v1, "campaignType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_25
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->itemType:I

    if-eqz v0, :cond_26

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->itemType:I

    const-string v1, "itemType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_26
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->industryFirstLevelId:I

    if-eqz v0, :cond_27

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->industryFirstLevelId:I

    const-string v1, "industryFirstLevelId"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_27
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->extraClickReward:Z

    if-eqz v0, :cond_28

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->extraClickReward:Z

    const-string v1, "extraClickReward"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_28
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableClientProofreadTime:Z

    if-eqz v0, :cond_29

    iget-boolean p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->enableClientProofreadTime:Z

    const-string v0, "enableClientProofreadTime"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_29
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/i;->a(Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/i;->b(Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

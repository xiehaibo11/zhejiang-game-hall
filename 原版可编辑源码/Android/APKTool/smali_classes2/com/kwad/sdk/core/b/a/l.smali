.class public final Lcom/kwad/sdk/core/b/a/l;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "h5Url"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    :cond_1
    const-string v0, "h5Type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Type:I

    const-string v0, "deeplinkUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    :cond_2
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkConf:Ljava/util/List;

    const-string v0, "deeplinkConf"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_3

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v1, v3, :cond_3

    new-instance v3, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo$DeeplinkItemInfo;

    invoke-direct {v3}, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo$DeeplinkItemInfo;-><init>()V

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo$DeeplinkItemInfo;->parseJson(Lorg/json/JSONObject;)V

    iget-object v4, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkConf:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    const-string v0, "deeplinkExtra"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkExtra:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkExtra:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkExtra:Ljava/lang/String;

    :cond_4
    const-string v0, "appDownloadUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    :cond_5
    const-string v0, "marketUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    :cond_6
    const-string v0, "supportThirdDownload"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->supportThirdDownload:I

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "2000"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "retryH5TimeStep"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->retryH5TimeStep:I

    const-string v0, "playableUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    :cond_7
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    const-string v1, "playableStyleInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    const-string v1, "smallAppJumpInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "webUriSourceType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->webUriSourceType:I

    const-string v0, "callbackUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    :cond_8
    const-string v0, "callbackUrlInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    :cond_9
    const-string v0, "blockCallbackIfSpam"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->blockCallbackIfSpam:Z

    const-string v0, "needDeeplinkReplaceAdapta"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->needDeeplinkReplaceAdapta:Z

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "0"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v2, "h5DeeplinkLimitedTimeMs"

    invoke-virtual {p1, v2, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5DeeplinkLimitedTimeMs:I

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "playableDeeplinkLimitedTimeMs"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableDeeplinkLimitedTimeMs:I

    const-string v0, "isSupportKeepPlaying"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->isSupportKeepPlaying:Z

    new-instance v0, Ljava/lang/Long;

    const-string v1, "3000"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v2, "keepPlayingBackOffTime"

    invoke-virtual {p1, v2, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->keepPlayingBackOffTime:J

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 3

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Url:Ljava/lang/String;

    const-string v2, "h5Url"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Type:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5Type:I

    const-string v2, "h5Type"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkUrl:Ljava/lang/String;

    const-string v2, "deeplinkUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkConf:Ljava/util/List;

    const-string v2, "deeplinkConf"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkExtra:Ljava/lang/String;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkExtra:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_4

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->deeplinkExtra:Ljava/lang/String;

    const-string v2, "deeplinkExtra"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    const-string v2, "appDownloadUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->marketUrl:Ljava/lang/String;

    const-string v2, "marketUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->supportThirdDownload:I

    if-eqz v0, :cond_7

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->supportThirdDownload:I

    const-string v2, "supportThirdDownload"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_7
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->retryH5TimeStep:I

    const-string v2, "retryH5TimeStep"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    if-eqz v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_8

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableUrl:Ljava/lang/String;

    const-string v2, "playableUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableStyleInfo:Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;

    const-string v2, "playableStyleInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->smallAppJumpInfo:Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;

    const-string v2, "smallAppJumpInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->webUriSourceType:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->webUriSourceType:I

    const-string v2, "webUriSourceType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrl:Ljava/lang/String;

    const-string v2, "callbackUrl"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    if-eqz v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_b

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->callbackUrlInfo:Ljava/lang/String;

    const-string v1, "callbackUrlInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->blockCallbackIfSpam:Z

    if-eqz v0, :cond_c

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->blockCallbackIfSpam:Z

    const-string v1, "blockCallbackIfSpam"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_c
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->needDeeplinkReplaceAdapta:Z

    if-eqz v0, :cond_d

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->needDeeplinkReplaceAdapta:Z

    const-string v1, "needDeeplinkReplaceAdapta"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_d
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->h5DeeplinkLimitedTimeMs:I

    const-string v1, "h5DeeplinkLimitedTimeMs"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->playableDeeplinkLimitedTimeMs:I

    const-string v1, "playableDeeplinkLimitedTimeMs"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->isSupportKeepPlaying:Z

    if-eqz v0, :cond_e

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->isSupportKeepPlaying:Z

    const-string v1, "isSupportKeepPlaying"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_e
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->keepPlayingBackOffTime:J

    const-string p0, "keepPlayingBackOffTime"

    invoke-static {p1, p0, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/l;->a(Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/l;->b(Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

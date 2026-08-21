.class public final Lcom/kwad/sdk/core/b/a/gw;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/report/r;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/report/r;Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "timestamp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->timestamp:J

    const-string v0, "sessionId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    :cond_1
    const-string v0, "seq"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->HU:J

    const-string v0, "listId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->aro:J

    const-string v0, "actionType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->arp:J

    const-string v0, "payload"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    :cond_2
    const-string v0, "llsid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->llsid:J

    const-string v0, "extra"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arq:Lorg/json/JSONObject;

    const-string v0, "impAdExtra"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arr:Lorg/json/JSONObject;

    const-string v0, "posId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->posId:J

    const-string v0, "contentType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    const-string v0, "realShowType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-string v0, "photoId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->photoId:J

    const-string v0, "position"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->position:J

    const-string v0, "serverPosition"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->ars:J

    const-string v0, "photoDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->art:J

    const-string v0, "effectivePlayDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->aru:J

    const-string v0, "playDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->Xf:J

    const-string v0, "blockDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->blockDuration:J

    const-string v0, "intervalDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->arv:J

    const-string v0, "allIntervalDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->arw:J

    const-string v0, "flowSdk"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    const-string v0, "blockTimes"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->ary:J

    new-instance v0, Ljava/lang/Integer;

    const-string v1, "0"

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v3, "contentSourceType"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->contentSourceType:I

    const-string v0, "adAggPageSource"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-string v0, "entryPageSource"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->entryPageSource:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->entryPageSource:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->entryPageSource:Ljava/lang/String;

    :cond_3
    new-instance v0, Lcom/kwad/sdk/core/scene/URLPackage;

    invoke-direct {v0}, Lcom/kwad/sdk/core/scene/URLPackage;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    const-string v3, "urlPackage"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/core/scene/URLPackage;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/scene/URLPackage;

    invoke-direct {v0}, Lcom/kwad/sdk/core/scene/URLPackage;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arA:Lcom/kwad/sdk/core/scene/URLPackage;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arA:Lcom/kwad/sdk/core/scene/URLPackage;

    const-string v3, "referURLPackage"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/core/scene/URLPackage;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "authorId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/sdk/core/report/r;->Qr:J

    const-string v0, "photoSize"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arB:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arB:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->arB:Ljava/lang/String;

    :cond_4
    const-string v0, "appInstalled"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arC:Lorg/json/JSONArray;

    const-string v0, "appUninstalled"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arD:Lorg/json/JSONArray;

    new-instance v0, Lcom/kwad/sdk/core/report/r$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/r$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arE:Lcom/kwad/sdk/core/report/r$a;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arE:Lcom/kwad/sdk/core/report/r$a;

    const-string v3, "clientExt"

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v0, v3}, Lcom/kwad/sdk/core/report/r$a;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "playerType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arF:I

    const-string v0, "uiType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arG:I

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v3, "isLeftSlipStatus"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arH:I

    const-string v0, "refreshType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->UQ:I

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v3, "photoResponseType"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arI:I

    const-string v0, "failUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    :cond_5
    const-string v0, "errorMsg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_6

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    :cond_6
    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v3, "errorCode"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->errorCode:I

    const-string v0, "creativeId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/sdk/core/report/r;->creativeId:J

    const-string v0, "cacheFailedReason"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_7

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    :cond_7
    const-string v0, "appExt"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arN:Lorg/json/JSONObject;

    const-string v0, "appRunningInfoList"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arO:Lorg/json/JSONArray;

    const-string v0, "downloadDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iput-wide v3, p0, Lcom/kwad/sdk/core/report/r;->downloadDuration:J

    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v3, "pageType"

    invoke-virtual {p1, v3, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->pageType:I

    const-string v0, "speedLimitStatus"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arP:I

    const-string v0, "speedLimitThreshold"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arQ:I

    const-string v0, "currentRealDownloadSpeed"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arR:I

    const-string v0, "sdkPlatform"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arT:Lorg/json/JSONArray;

    const-string v0, "isKsUnion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/report/r;->arU:Z

    const-string v0, "trackMethodName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    sget-object v3, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v3, :cond_8

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    :cond_8
    new-instance v0, Ljava/lang/Integer;

    invoke-direct {v0, v1}, Ljava/lang/Integer;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const-string v1, "viewModeType"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    const-string v0, "clickTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->clickTime:J

    const-string v0, "frameRenderTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->arY:J

    const-string v0, "playerEnterAction"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->arZ:I

    const-string v0, "requestUrl"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asa:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asa:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_9

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asa:Ljava/lang/String;

    :cond_9
    const-string v0, "requestTotalTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asb:J

    const-string v0, "requestResponseTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asc:J

    const-string v0, "requestParseDataTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asd:J

    const-string v0, "requestCallbackTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->ase:J

    const-string v0, "requestFailReason"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asf:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asf:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_a

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asf:Ljava/lang/String;

    :cond_a
    const-string v0, "pageName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_b

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    :cond_b
    const-string v0, "pageCreateTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->Pw:J

    const-string v0, "pageResumeTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->Px:J

    const-string v0, "trackUrlType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asg:I

    const-string v0, "trackUrlList"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->ash:Lorg/json/JSONArray;

    const-string v0, "pageLaunchTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->Pv:J

    const-string v0, "appAuthorityInfoList"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->ask:Lorg/json/JSONArray;

    const-string v0, "tkVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asl:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_c

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asl:Ljava/lang/String;

    :cond_c
    const-string v0, "jsVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asm:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asm:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_d

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asm:Ljava/lang/String;

    :cond_d
    const-string v0, "jsFileName"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asn:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asn:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_e

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asn:Ljava/lang/String;

    :cond_e
    const-string v0, "jsErrorMsg"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->aso:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->aso:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_f

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->aso:Ljava/lang/String;

    :cond_f
    const-string v0, "jsConfig"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asp:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asp:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_10

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asp:Ljava/lang/String;

    :cond_10
    const-string v0, "adBizType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const-string v0, "customKey"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_11

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    :cond_11
    const-string v0, "customValue"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_12

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    :cond_12
    const-string v0, "trace"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_13

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    :cond_13
    const-string v0, "filterCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->ast:I

    const-string v0, "sdkVersionCode"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v0, "sdkVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_14

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    :cond_14
    const-string v0, "sdkApiVersion"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_15

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    :cond_15
    const-string v0, "sdkType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    const-string v0, "appUseDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asv:J

    const-string v0, "appStartType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->asw:J

    const-string v0, "sequenceNumber"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/report/r;->ant:J

    const-string v0, "appColdStart"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/report/r;->HR:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->HR:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_16

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->HR:Ljava/lang/String;

    :cond_16
    const-string v0, "appStart"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/report/r;->HS:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/core/report/r;->HS:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_17

    iput-object v2, p0, Lcom/kwad/sdk/core/report/r;->HS:Ljava/lang/String;

    :cond_17
    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/report/r;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-wide v0, p0, Lcom/kwad/sdk/core/report/r;->timestamp:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/kwad/sdk/core/report/r;->timestamp:J

    const-string v4, "timestamp"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sessionId:Ljava/lang/String;

    const-string v4, "sessionId"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->HU:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_3

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->HU:J

    const-string v0, "seq"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_3
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->aro:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_4

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->aro:J

    const-string v0, "listId"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arp:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_5

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arp:J

    const-string v0, "actionType"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->UP:Ljava/lang/String;

    const-string v4, "payload"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->llsid:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_7

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->llsid:J

    const-string v0, "llsid"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arq:Lorg/json/JSONObject;

    const-string v4, "extra"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arr:Lorg/json/JSONObject;

    const-string v4, "impAdExtra"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->posId:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_8

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->posId:J

    const-string v0, "posId"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_8
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    if-eqz v0, :cond_9

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->contentType:I

    const-string v4, "contentType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_9
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    if-eqz v0, :cond_a

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->realShowType:I

    const-string v4, "realShowType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_a
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->photoId:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_b

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->photoId:J

    const-string v0, "photoId"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_b
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->position:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_c

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->position:J

    const-string v0, "position"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_c
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ars:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_d

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ars:J

    const-string v0, "serverPosition"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_d
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->art:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_e

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->art:J

    const-string v0, "photoDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_e
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->aru:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_f

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->aru:J

    const-string v0, "effectivePlayDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_f
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Xf:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_10

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Xf:J

    const-string v0, "playDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_10
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->blockDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_11

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->blockDuration:J

    const-string v0, "blockDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_11
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arv:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_12

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arv:J

    const-string v0, "intervalDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_12
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arw:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_13

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arw:J

    const-string v0, "allIntervalDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_13
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_14

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arx:J

    const-string v0, "flowSdk"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_14
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ary:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_15

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ary:J

    const-string v0, "blockTimes"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_15
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->contentSourceType:I

    const-string v4, "contentSourceType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    if-eqz v0, :cond_16

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arz:I

    const-string v4, "adAggPageSource"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_16
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->entryPageSource:Ljava/lang/String;

    if-eqz v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->entryPageSource:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_17

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->entryPageSource:Ljava/lang/String;

    const-string v4, "entryPageSource"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_17
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->urlPackage:Lcom/kwad/sdk/core/scene/URLPackage;

    const-string v4, "urlPackage"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arA:Lcom/kwad/sdk/core/scene/URLPackage;

    const-string v4, "referURLPackage"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Qr:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_18

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Qr:J

    const-string v0, "authorId"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_18
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arB:Ljava/lang/String;

    if-eqz v0, :cond_19

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arB:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_19

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arB:Ljava/lang/String;

    const-string v4, "photoSize"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_19
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arC:Lorg/json/JSONArray;

    const-string v4, "appInstalled"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arD:Lorg/json/JSONArray;

    const-string v4, "appUninstalled"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arE:Lcom/kwad/sdk/core/report/r$a;

    const-string v4, "clientExt"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arF:I

    if-eqz v0, :cond_1a

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arF:I

    const-string v4, "playerType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1a
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arG:I

    if-eqz v0, :cond_1b

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arG:I

    const-string v4, "uiType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1b
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arH:I

    const-string v4, "isLeftSlipStatus"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->UQ:I

    if-eqz v0, :cond_1c

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->UQ:I

    const-string v4, "refreshType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1c
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arI:I

    const-string v4, "photoResponseType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    if-eqz v0, :cond_1d

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1d

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arJ:Ljava/lang/String;

    const-string v4, "failUrl"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1d
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    if-eqz v0, :cond_1e

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1e

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->errorMsg:Ljava/lang/String;

    const-string v4, "errorMsg"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1e
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->errorCode:I

    const-string v4, "errorCode"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->creativeId:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_1f

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->creativeId:J

    const-string v0, "creativeId"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1f
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    if-eqz v0, :cond_20

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_20

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arM:Ljava/lang/String;

    const-string v4, "cacheFailedReason"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_20
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arN:Lorg/json/JSONObject;

    const-string v4, "appExt"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arO:Lorg/json/JSONArray;

    const-string v4, "appRunningInfoList"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->downloadDuration:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_21

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->downloadDuration:J

    const-string v0, "downloadDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_21
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->pageType:I

    const-string v4, "pageType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arP:I

    if-eqz v0, :cond_22

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arP:I

    const-string v4, "speedLimitStatus"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_22
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arQ:I

    if-eqz v0, :cond_23

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arQ:I

    const-string v4, "speedLimitThreshold"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_23
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arR:I

    if-eqz v0, :cond_24

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arR:I

    const-string v4, "currentRealDownloadSpeed"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_24
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arT:Lorg/json/JSONArray;

    const-string v4, "sdkPlatform"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/report/r;->arU:Z

    if-eqz v0, :cond_25

    iget-boolean v0, p0, Lcom/kwad/sdk/core/report/r;->arU:Z

    const-string v4, "isKsUnion"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_25
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    if-eqz v0, :cond_26

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_26

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->arV:Ljava/lang/String;

    const-string v4, "trackMethodName"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_26
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arW:I

    const-string v4, "viewModeType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->clickTime:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_27

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->clickTime:J

    const-string v0, "clickTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_27
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arY:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_28

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->arY:J

    const-string v0, "frameRenderTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_28
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arZ:I

    if-eqz v0, :cond_29

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->arZ:I

    const-string v4, "playerEnterAction"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_29
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asa:Ljava/lang/String;

    if-eqz v0, :cond_2a

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asa:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2a

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asa:Ljava/lang/String;

    const-string v4, "requestUrl"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2a
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asb:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_2b

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asb:J

    const-string v0, "requestTotalTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2b
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asc:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_2c

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asc:J

    const-string v0, "requestResponseTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2c
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asd:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_2d

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asd:J

    const-string v0, "requestParseDataTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2d
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ase:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_2e

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ase:J

    const-string v0, "requestCallbackTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2e
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asf:Ljava/lang/String;

    if-eqz v0, :cond_2f

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asf:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2f

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asf:Ljava/lang/String;

    const-string v4, "requestFailReason"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2f
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    if-eqz v0, :cond_30

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_30

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Pp:Ljava/lang/String;

    const-string v4, "pageName"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_30
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Pw:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_31

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Pw:J

    const-string v0, "pageCreateTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_31
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Px:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_32

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Px:J

    const-string v0, "pageResumeTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_32
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->asg:I

    if-eqz v0, :cond_33

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->asg:I

    const-string v4, "trackUrlType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_33
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->ash:Lorg/json/JSONArray;

    const-string v4, "trackUrlList"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Pv:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_34

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->Pv:J

    const-string v0, "pageLaunchTime"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_34
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->ask:Lorg/json/JSONArray;

    const-string v4, "appAuthorityInfoList"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Lorg/json/JSONArray;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asl:Ljava/lang/String;

    if-eqz v0, :cond_35

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asl:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_35

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asl:Ljava/lang/String;

    const-string v4, "tkVersion"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_35
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asm:Ljava/lang/String;

    if-eqz v0, :cond_36

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asm:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_36

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asm:Ljava/lang/String;

    const-string v4, "jsVersion"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_36
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asn:Ljava/lang/String;

    if-eqz v0, :cond_37

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asn:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_37

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asn:Ljava/lang/String;

    const-string v4, "jsFileName"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_37
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->aso:Ljava/lang/String;

    if-eqz v0, :cond_38

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->aso:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_38

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->aso:Ljava/lang/String;

    const-string v4, "jsErrorMsg"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_38
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asp:Ljava/lang/String;

    if-eqz v0, :cond_39

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asp:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_39

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asp:Ljava/lang/String;

    const-string v4, "jsConfig"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_39
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    if-eqz v0, :cond_3a

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->asq:I

    const-string v4, "adBizType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3a
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    if-eqz v0, :cond_3b

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3b

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->asr:Ljava/lang/String;

    const-string v4, "customKey"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3b
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    if-eqz v0, :cond_3c

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3c

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->ass:Ljava/lang/String;

    const-string v4, "customValue"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3c
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    if-eqz v0, :cond_3d

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_3d

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->trace:Ljava/lang/String;

    const-string v4, "trace"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3d
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->ast:I

    if-eqz v0, :cond_3e

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->ast:I

    const-string v4, "filterCode"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3e
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    if-eqz v0, :cond_3f

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->asu:I

    const-string v4, "sdkVersionCode"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3f
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    if-eqz v0, :cond_40

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_40

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->sdkVersion:Ljava/lang/String;

    const-string v4, "sdkVersion"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_40
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    if-eqz v0, :cond_41

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_41

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->Uj:Ljava/lang/String;

    const-string v4, "sdkApiVersion"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_41
    iget v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    if-eqz v0, :cond_42

    iget v0, p0, Lcom/kwad/sdk/core/report/r;->Ul:I

    const-string v4, "sdkType"

    invoke-static {p1, v4, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_42
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asv:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_43

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asv:J

    const-string v0, "appUseDuration"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_43
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asw:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_44

    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->asw:J

    const-string v0, "appStartType"

    invoke-static {p1, v0, v4, v5}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_44
    iget-wide v4, p0, Lcom/kwad/sdk/core/report/r;->ant:J

    cmp-long v0, v4, v2

    if-eqz v0, :cond_45

    iget-wide v2, p0, Lcom/kwad/sdk/core/report/r;->ant:J

    const-string v0, "sequenceNumber"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_45
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->HR:Ljava/lang/String;

    if-eqz v0, :cond_46

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->HR:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_46

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->HR:Ljava/lang/String;

    const-string v2, "appColdStart"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_46
    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->HS:Ljava/lang/String;

    if-eqz v0, :cond_47

    iget-object v0, p0, Lcom/kwad/sdk/core/report/r;->HS:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_47

    iget-object p0, p0, Lcom/kwad/sdk/core/report/r;->HS:Ljava/lang/String;

    const-string v0, "appStart"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_47
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/r;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gw;->a(Lcom/kwad/sdk/core/report/r;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/report/r;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/gw;->b(Lcom/kwad/sdk/core/report/r;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

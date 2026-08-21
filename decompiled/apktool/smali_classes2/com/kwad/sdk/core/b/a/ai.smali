.class public final Lcom/kwad/sdk/core/b/a/ai;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdTemplate;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V
    .locals 5

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "mOriginJString"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_1

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    :cond_1
    const-string v0, "posId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    const-string v0, "adStyle"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adStyle:I

    const-string v0, "type"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    const-string v0, "contentType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->contentType:I

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const-string v0, "adInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_2

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v3

    if-ge v1, v3, :cond_2

    new-instance v3, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-direct {v3}, Lcom/kwad/sdk/core/response/model/AdInfo;-><init>()V

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/kwad/sdk/core/response/model/AdInfo;->parseJson(Lorg/json/JSONObject;)V

    iget-object v4, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-interface {v4, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    const-string v0, "impAdExtra"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    :cond_3
    const-string v0, "llsid"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    const-string v0, "mIsFromContent"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsFromContent:Z

    const-string v0, "extra"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    :cond_4
    const-string v0, "mUniqueId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    :cond_5
    const-string v0, "mBidEcpm"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    new-instance v0, Lcom/kwad/sdk/internal/api/SceneImpl;

    invoke-direct {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    const-string v1, "mAdScene"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/internal/api/SceneImpl;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "realShowType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    const-string v0, "mInitVoiceStatus"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    const-string v0, "mMediaPlayerType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mMediaPlayerType:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    const-string v1, "mVideoPlayerStatus"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Ljava/lang/Long;

    const-string v1, "-1"

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v2

    const-string v0, "mOutClickTimeParam"

    invoke-virtual {p1, v0, v2, v3}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v2

    iput-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOutClickTimeParam:J

    new-instance v0, Ljava/lang/Long;

    invoke-direct {v0, v1}, Ljava/lang/Long;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    const-string v2, "mVisibleTimeParam"

    invoke-virtual {p1, v2, v0, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVisibleTimeParam:J

    const-string v0, "mIsLeftSlipStatus"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsLeftSlipStatus:I

    const-string v0, "mPhotoResponseType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPhotoResponseType:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/PageInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PageInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    const-string v1, "mPageInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/PageInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Ljava/lang/Boolean;

    const-string v1, "false"

    invoke-direct {v0, v1}, Ljava/lang/Boolean;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v2, "mIsForceJumpLandingPage"

    invoke-virtual {p1, v2, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    const-string v0, "mIsAudioEnable"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsAudioEnable:Z

    const-string v0, "mRewardVerifyCalled"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    const-string v0, "isWebViewDownload"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->isWebViewDownload:Z

    const-string v0, "watched"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->watched:Z

    const-string v0, "converted"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    new-instance v0, Ljava/lang/Boolean;

    invoke-direct {v0, v1}, Ljava/lang/Boolean;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    const-string v1, "fromCache"

    invoke-virtual {p1, v1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->fromCache:Z

    const-string v0, "loadDataTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    const-string v0, "showStartTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->showStartTime:J

    const-string v0, "notNetworkRequest"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    const-string v0, "downloadDuration"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    const-string v0, "adLoadTotalTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adLoadTotalTime:J

    const-string v0, "adShowStartTimeStamp"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adShowStartTimeStamp:J

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    const-string v0, "mAdStatusInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->parseJson(Lorg/json/JSONObject;)V

    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 6

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    const-string v2, "mOriginJString"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-eqz v0, :cond_2

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->posId:J

    const-string v0, "posId"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_2
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adStyle:I

    if-eqz v0, :cond_3

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adStyle:I

    const-string v2, "adStyle"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_3
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    if-eqz v0, :cond_4

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->type:I

    const-string v2, "type"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_4
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->contentType:I

    if-eqz v0, :cond_5

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->contentType:I

    const-string v2, "contentType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    const-string v2, "adInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->impAdExtra:Ljava/lang/String;

    const-string v2, "impAdExtra"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    cmp-long v0, v2, v4

    if-eqz v0, :cond_7

    iget-wide v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->llsid:J

    const-string v0, "llsid"

    invoke-static {p1, v0, v2, v3}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_7
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsFromContent:Z

    if-eqz v0, :cond_8

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsFromContent:Z

    const-string v2, "mIsFromContent"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->extra:Ljava/lang/String;

    const-string v2, "extra"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_a

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    const-string v1, "mUniqueId"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_a
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_b

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBidEcpm:J

    const-string v2, "mBidEcpm"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_b
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    const-string v1, "mAdScene"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    if-eqz v0, :cond_c

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    const-string v1, "realShowType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_c
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    if-eqz v0, :cond_d

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mInitVoiceStatus:I

    const-string v1, "mInitVoiceStatus"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_d
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mMediaPlayerType:I

    if-eqz v0, :cond_e

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mMediaPlayerType:I

    const-string v1, "mMediaPlayerType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_e
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    const-string v1, "mVideoPlayerStatus"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOutClickTimeParam:J

    const-string v2, "mOutClickTimeParam"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVisibleTimeParam:J

    const-string v2, "mVisibleTimeParam"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsLeftSlipStatus:I

    if-eqz v0, :cond_f

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsLeftSlipStatus:I

    const-string v1, "mIsLeftSlipStatus"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_f
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPhotoResponseType:I

    if-eqz v0, :cond_10

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPhotoResponseType:I

    const-string v1, "mPhotoResponseType"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_10
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

    const-string v1, "mPageInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    const-string v1, "mIsForceJumpLandingPage"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsAudioEnable:Z

    if-eqz v0, :cond_11

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsAudioEnable:Z

    const-string v1, "mIsAudioEnable"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_11
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    if-eqz v0, :cond_12

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    const-string v1, "mRewardVerifyCalled"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_12
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->isWebViewDownload:Z

    if-eqz v0, :cond_13

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->isWebViewDownload:Z

    const-string v1, "isWebViewDownload"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_13
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->watched:Z

    if-eqz v0, :cond_14

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->watched:Z

    const-string v1, "watched"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_14
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    if-eqz v0, :cond_15

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    const-string v1, "converted"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_15
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->fromCache:Z

    const-string v1, "fromCache"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_16

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->loadDataTime:J

    const-string v2, "loadDataTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_16
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->showStartTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_17

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->showStartTime:J

    const-string v2, "showStartTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_17
    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    if-eqz v0, :cond_18

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->notNetworkRequest:Z

    const-string v1, "notNetworkRequest"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    :cond_18
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_19

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadDuration:J

    const-string v2, "downloadDuration"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_19
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adLoadTotalTime:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_1a

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adLoadTotalTime:J

    const-string v2, "adLoadTotalTime"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1a
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adShowStartTimeStamp:J

    cmp-long v0, v0, v4

    if-eqz v0, :cond_1b

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adShowStartTimeStamp:J

    const-string v2, "adShowStartTimeStamp"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_1b
    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    const-string v0, "mAdStatusInfo"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ai;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/ai;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

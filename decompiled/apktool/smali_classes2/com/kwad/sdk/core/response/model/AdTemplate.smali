.class public Lcom/kwad/sdk/core/response/model/AdTemplate;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field private static final serialVersionUID:J = -0x4b20c179b6786410L


# instance fields
.field public adInfoList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdInfo;",
            ">;"
        }
    .end annotation
.end field

.field public adLoadTotalTime:J

.field public adShowStartTimeStamp:J

.field public adStyle:I

.field public transient adxResult:I

.field public contentType:I

.field public converted:Z

.field public downloadDuration:J

.field public transient downloadSource:I

.field public extra:Ljava/lang/String;

.field public fromCache:Z

.field public hasEnterAdWebViewLandPageActivity:Z

.field public impAdExtra:Ljava/lang/String;

.field public transient installFrom:Ljava/lang/String;

.field public interactLandingPageShowing:Z

.field public isWebViewDownload:Z

.field public llsid:J

.field public loadDataTime:J

.field public mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

.field public mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

.field public mAdWebVideoPageShowing:Z

.field public mBidEcpm:J

.field private mBusinessType:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

.field public mCheatingFlow:Z

.field public mCurPlayTime:J

.field public transient mDownloadFinishReported:Z

.field public mHasReportVideoLoad:Z

.field public mHasSelected:Z

.field public mInitVoiceStatus:I

.field public mIsAudioEnable:Z

.field public mIsForceJumpLandingPage:Z

.field public mIsFromContent:Z

.field public mIsLeftSlipStatus:I

.field protected transient mLocalParams:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field public mMediaPlayerType:I

.field public mOriginJString:Ljava/lang/String;

.field public mOutClickTimeParam:J

.field public mPageInfo:Lcom/kwad/sdk/core/response/model/PageInfo;

.field public mPhotoResponseType:I

.field public transient mPvReported:Z

.field public mRewardVerifyCalled:Z

.field public transient mTrackUrlReported:Z

.field public mUniqueId:Ljava/lang/String;

.field public mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

.field public volatile mVisibleTimeParam:J

.field public mXiaomiAppStoreDetailViewOpen:Z

.field public notNetworkRequest:Z

.field public photoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo;

.field public posId:J

.field public positionShow:I

.field public realShowType:I

.field private serverPosition:I

.field public showStartTime:J

.field public tkLiveShopItemInfo:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

.field public type:I

.field public watched:Z


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adInfoList:Ljava/util/List;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->createPhotoInfo()Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->photoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo;

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->positionShow:I

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->adxResult:I

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->serverPosition:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsFromContent:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->hasEnterAdWebViewLandPageActivity:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mHasReportVideoLoad:Z

    const-string v1, ""

    iput-object v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mHasSelected:Z

    const/4 v2, 0x2

    iput v2, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->downloadSource:I

    iput-object v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->installFrom:Ljava/lang/String;

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mMediaPlayerType:I

    new-instance v1, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;-><init>()V

    iput-object v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVideoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    const-wide/16 v1, -0x1

    iput-wide v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOutClickTimeParam:J

    iput-wide v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mVisibleTimeParam:J

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsLeftSlipStatus:I

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->interactLandingPageShowing:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsForceJumpLandingPage:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdWebVideoPageShowing:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mIsAudioEnable:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mRewardVerifyCalled:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCheatingFlow:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mXiaomiAppStoreDetailViewOpen:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->isWebViewDownload:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->watched:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->converted:Z

    iput-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->fromCache:Z

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mLocalParams:Ljava/util/Map;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    if-eqz p1, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->createPhotoInfo()Lcom/kwad/sdk/core/response/model/PhotoInfo;

    move-result-object v0

    const-string v1, "photoInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/response/model/PhotoInfo;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {p0, v0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->setPhotoInfo(Lcom/kwad/sdk/core/response/model/PhotoInfo;)V

    :cond_1
    iget p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->contentType:I

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->realShowType:I

    iget-object p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    :cond_2
    return-void
.end method

.method public afterToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->photoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo;

    const-string v1, "photoInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public beforeToJson(Lorg/json/JSONObject;)V
    .locals 2

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->beforeToJson(Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    iget-object v1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mOriginJString:Ljava/lang/String;

    invoke-direct {v0, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    invoke-static {p1, v0}, Lcom/kwad/sdk/utils/u;->merge(Lorg/json/JSONObject;Lorg/json/JSONObject;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_0
    return-void
.end method

.method protected createPhotoInfo()Lcom/kwad/sdk/core/response/model/PhotoInfo;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/response/model/PhotoInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/PhotoInfo;-><init>()V

    return-object v0
.end method

.method public equals(Ljava/lang/Object;)Z
    .locals 1

    instance-of v0, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1

    :cond_0
    invoke-super {p0, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    return p1
.end method

.method public getBusinessType()Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBusinessType:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdScene:Lcom/kwad/sdk/internal/api/SceneImpl;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/sdk/internal/api/SceneImpl;->getAdStyle()I

    move-result v0

    invoke-static {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter;->cs(I)Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBusinessType:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mBusinessType:Lcom/kwai/adclient/kscommerciallogger/model/BusinessType;

    return-object v0
.end method

.method public getDownloadFinishTime()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->getDownloadFinishTime()J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownloadSize()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->getDownloadSize()J

    move-result-wide v0

    return-wide v0
.end method

.method public getDownloadType()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->getDownloadType()I

    move-result v0

    return v0
.end method

.method public getLoadDataTime()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->getLoadDataTime()J

    move-result-wide v0

    return-wide v0
.end method

.method public getLocalParams(Ljava/lang/String;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/String;",
            ")TT;"
        }
    .end annotation

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mLocalParams:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_1

    return-object p1

    :cond_1
    return-object v1
.end method

.method public getLocalParams()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mLocalParams:Ljava/util/Map;

    return-object v0
.end method

.method public getServerPosition()I
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->serverPosition:I

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/response/model/AdTemplate;->getShowPosition()I

    move-result v0

    return v0
.end method

.method public getShowPosition()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->positionShow:I

    return v0
.end method

.method public getUniqueId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    return-object v0
.end method

.method public getmCurPlayTime()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCurPlayTime:J

    return-wide v0
.end method

.method public hashCode()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mUniqueId:Ljava/lang/String;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    return v0

    :cond_0
    invoke-super {p0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    return v0
.end method

.method public isLoadFromCache()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->isLoadFromCache()Z

    move-result v0

    return v0
.end method

.method public putLocalParams(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    return-object p1

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mLocalParams:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method

.method public setCheatingFlow(Z)V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCheatingFlow:Z

    if-nez v0, :cond_0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCheatingFlow:Z

    :cond_0
    return-void
.end method

.method public setDownloadFinishTime(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->setDownloadFinishTime(J)V

    return-void
.end method

.method public setDownloadSize(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->setDownloadSize(J)V

    return-void
.end method

.method public setDownloadType(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->setDownloadType(I)V

    return-void
.end method

.method public setLoadDataTime(J)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->setLoadDataTime(J)V

    return-void
.end method

.method public setLoadFromCache(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mAdStatusInfo:Lcom/kwad/sdk/core/response/model/AdStatusInfo;

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/response/model/AdStatusInfo;->setLoadFromCache(Z)V

    return-void
.end method

.method protected setPhotoInfo(Lcom/kwad/sdk/core/response/model/PhotoInfo;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->photoInfo:Lcom/kwad/sdk/core/response/model/PhotoInfo;

    return-void
.end method

.method public setServerPosition(I)V
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->serverPosition:I

    const/4 v1, -0x1

    if-ne v0, v1, :cond_0

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->serverPosition:I

    :cond_0
    return-void
.end method

.method public setShowPosition(I)V
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->positionShow:I

    return-void
.end method

.method public setmCurPlayTime(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/core/response/model/AdTemplate;->mCurPlayTime:J

    return-void
.end method

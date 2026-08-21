.class public final Lcom/kwad/sdk/core/b/a/r;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/d;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/d<",
        "Lcom/kwad/sdk/core/response/model/AdInfo;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Lcom/kwad/sdk/core/response/model/AdInfo;Lorg/json/JSONObject;)V
    .locals 4

    if-nez p1, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    const-string v1, "adBaseInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    const-string v1, "advertiserInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    const-string v1, "adConversionInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    const-string v1, "adMaterialInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adTrackInfoList:Ljava/util/List;

    const-string v0, "adTrackInfo"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_1

    new-instance v2, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;

    invoke-direct {v2}, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;-><init>()V

    invoke-virtual {v0, v1}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;->parseJson(Lorg/json/JSONObject;)V

    iget-object v3, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adTrackInfoList:Ljava/util/List;

    invoke-interface {v3, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    const-string v1, "downloadSafeInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    const-string v1, "unDownloadConf"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "status"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const-string v0, "progress"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->progress:I

    const-string v0, "soFarBytes"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->soFarBytes:J

    const-string v0, "totalBytes"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->totalBytes:J

    const-string v0, "downloadFilePath"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    const-string v2, ""

    if-ne v0, v1, :cond_2

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    :cond_2
    const-string v0, "downloadId"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_3

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    :cond_3
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    const-string v1, "adPreloadInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    const-string v1, "adSplashInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdStyleInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    const-string v1, "adStyleInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdStyleInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    const-string v1, "adStyleInfo2"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdStyleInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adAggregateInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adAggregateInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    const-string v1, "adAggregateInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    const-string v1, "adRewardInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "serverExt"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    sget-object v1, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne v0, v1, :cond_4

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    :cond_4
    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    const-string v1, "adStyleConfInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    const-string v1, "fullScreenVideoInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    const-string v1, "adFeedInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    const-string v1, "adInsertScreenInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;->parseJson(Lorg/json/JSONObject;)V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdProductInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adProductInfo:Lcom/kwad/sdk/core/response/model/AdProductInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adProductInfo:Lcom/kwad/sdk/core/response/model/AdProductInfo;

    const-string v1, "adProductInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdProductInfo;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "ocpcActionType"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->ocpcActionType:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    const-string v1, "adMatrixInfo"

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;->parseJson(Lorg/json/JSONObject;)V

    const-string v0, "trace"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    sget-object v0, Lorg/json/JSONObject;->NULL:Ljava/lang/Object;

    if-ne p1, v0, :cond_5

    iput-object v2, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    :cond_5
    return-void
.end method

.method private static b(Lcom/kwad/sdk/core/response/model/AdInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 5

    if-nez p1, :cond_0

    new-instance p1, Lorg/json/JSONObject;

    invoke-direct {p1}, Lorg/json/JSONObject;-><init>()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    const-string v1, "adBaseInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    const-string v1, "advertiserInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    const-string v1, "adConversionInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    const-string v1, "adMaterialInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adTrackInfoList:Ljava/util/List;

    const-string v1, "adTrackInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    const-string v1, "downloadSafeInfo"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    const-string v1, "unDownloadConf"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    if-eqz v0, :cond_1

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    const-string v1, "status"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_1
    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->progress:I

    if-eqz v0, :cond_2

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->progress:I

    const-string v1, "progress"

    invoke-static {p1, v1, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_2
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->soFarBytes:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-eqz v0, :cond_3

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->soFarBytes:J

    const-string v4, "soFarBytes"

    invoke-static {p1, v4, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_3
    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->totalBytes:J

    cmp-long v0, v0, v2

    if-eqz v0, :cond_4

    iget-wide v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->totalBytes:J

    const-string v2, "totalBytes"

    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    :cond_4
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    const-string v1, ""

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_5

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadFilePath:Ljava/lang/String;

    const-string v2, "downloadFilePath"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    const-string v2, "downloadId"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_6
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    const-string v2, "adPreloadInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    const-string v2, "adSplashInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    const-string v2, "adStyleInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    const-string v2, "adStyleInfo2"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adAggregateInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    const-string v2, "adAggregateInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    const-string v2, "adRewardInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    if-eqz v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_7

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->serverExt:Ljava/lang/String;

    const-string v2, "serverExt"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_7
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    const-string v2, "adStyleConfInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    const-string v2, "fullScreenVideoInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    const-string v2, "adFeedInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    const-string v2, "adInsertScreenInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adProductInfo:Lcom/kwad/sdk/core/response/model/AdProductInfo;

    const-string v2, "adProductInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->ocpcActionType:I

    if-eqz v0, :cond_8

    iget v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->ocpcActionType:I

    const-string v2, "ocpcActionType"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    :cond_8
    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    const-string v2, "adMatrixInfo"

    invoke-static {p1, v2, v0}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_9

    iget-object p0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->trace:Ljava/lang/String;

    const-string v0, "trace"

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    :cond_9
    return-object p1
.end method


# virtual methods
.method public final bridge synthetic a(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)V
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/r;->a(Lcom/kwad/sdk/core/response/model/AdInfo;Lorg/json/JSONObject;)V

    return-void
.end method

.method public final bridge synthetic b(Lcom/kwad/sdk/core/b;Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 0

    check-cast p1, Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/b/a/r;->b(Lcom/kwad/sdk/core/response/model/AdInfo;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object p1

    return-object p1
.end method

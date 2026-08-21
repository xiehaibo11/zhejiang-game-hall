.class public Lcom/kwad/sdk/core/response/model/AdInfo;
.super Lcom/kwad/sdk/core/response/a/a;

# interfaces
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdShakeInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$NativeAdInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdShowVideoH5Info;,
        Lcom/kwad/sdk/core/response/model/AdInfo$CallBackStrategyInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$ComplianceInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$SmallAppJumpInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$PlayableStyleInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadRegionConf;,
        Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;,
        Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$CutRuleInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;,
        Lcom/kwad/sdk/core/response/model/AdInfo$MaterialSize;,
        Lcom/kwad/sdk/core/response/model/AdInfo$H5Config;,
        Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;
    }
.end annotation


# static fields
.field private static final serialVersionUID:J = -0x79468d1d0d94563dL


# instance fields
.field public adAggregateInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

.field public adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

.field public adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

.field public adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

.field public adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

.field public adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

.field public adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

.field public adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

.field public adProductInfo:Lcom/kwad/sdk/core/response/model/AdProductInfo;

.field public adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

.field public adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

.field public adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

.field public adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

.field public adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

.field public adTrackInfoList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/core/response/model/AdInfo$AdTrackInfo;",
            ">;"
        }
    .end annotation
.end field

.field public advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

.field public downloadFilePath:Ljava/lang/String;

.field public downloadId:Ljava/lang/String;

.field public downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

.field public fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

.field public ocpcActionType:I
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field public progress:I

.field public serverExt:Ljava/lang/String;

.field public soFarBytes:J

.field public status:I

.field public totalBytes:J

.field public trace:Ljava/lang/String;

.field public unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adBaseInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdBaseInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->advertiserInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdvertiserInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMaterialInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdMaterialInfo;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adTrackInfoList:Ljava/util/List;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadSafeInfo:Lcom/kwad/sdk/core/response/model/AdInfo$DownloadSafeInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->unDownloadConf:Lcom/kwad/sdk/core/response/model/AdInfo$UnDownloadConf;

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->status:I

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adPreloadInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdPreloadInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adSplashInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdSplashInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdStyleInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdStyleInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleInfo2:Lcom/kwad/sdk/core/response/model/AdStyleInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adAggregateInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdAggregateInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adRewardInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdRewardInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adStyleConfInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdStyleConfInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->fullScreenVideoInfo:Lcom/kwad/sdk/core/response/model/AdInfo$FullScreenVideoInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adFeedInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdFeedInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adInsertScreenInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdInsertScreenInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdProductInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdProductInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adProductInfo:Lcom/kwad/sdk/core/response/model/AdProductInfo;

    new-instance v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    invoke-direct {v0}, Lcom/kwad/sdk/core/response/model/AdMatrixInfo;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adMatrixInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo;

    return-void
.end method


# virtual methods
.method public afterParseJson(Lorg/json/JSONObject;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/core/response/a/a;->afterParseJson(Lorg/json/JSONObject;)V

    iget-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->adConversionInfo:Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;

    iget-object p1, p1, Lcom/kwad/sdk/core/response/model/AdInfo$AdConversionInfo;->appDownloadUrl:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/utils/ad;->bp(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/kwad/sdk/core/response/model/AdInfo;->downloadId:Ljava/lang/String;

    return-void
.end method
